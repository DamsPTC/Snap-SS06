/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10558f6c4; end: 10558f6cb; -[CTPGRPCNetworkSearchResult query] */

undefined8 FUN_10558f6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10558f6cc; end: 10558f6fb; -[CTPGRPCNetworkSearchResult .cxx_destruct] */

void FUN_10558f6cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558f6fc; end: 10558f7a7; -[CTPGRPCNetworkGiphySearchResult initWithResult:query:] */

undefined1 *
FUN_10558f6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e90a0;
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



/* Entry: 10558f7a8; end: 10558f7cb; -[CTPGRPCNetworkGiphySearchResult copyWithZone:] */

undefined8 FUN_10558f7a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10558f7cc; end: 10558f83f; -[CTPGRPCNetworkGiphySearchResult hash] */

undefined8 * FUN_10558f7cc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10558f8c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10558f8cc;
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
          goto LAB_10558f8cc;
        }
        goto LAB_10558f8c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10558f8cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10558f840; end: 10558f8e7; -[CTPGRPCNetworkGiphySearchResult isEqual:] */

long FUN_10558f840(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10558f8c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10558f8cc;
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
          goto LAB_10558f8cc;
        }
        goto LAB_10558f8c0;
      }
    }
    lVar3 = 0;
  }
LAB_10558f8cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10558f8e8; end: 10558f8ef; -[CTPGRPCNetworkGiphySearchResult result] */

undefined8 FUN_10558f8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10558f8f0; end: 10558f8f7; -[CTPGRPCNetworkGiphySearchResult query] */

undefined8 FUN_10558f8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10558f8f8; end: 10558f927; -[CTPGRPCNetworkGiphySearchResult .cxx_destruct] */

void FUN_10558f8f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558f928; end: 10558f99b; -[UNISCCTPMusicUserDataService initWithUnifiedGrpcService:] */

undefined1 * FUN_10558f928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e90a8;
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



/* Entry: 10558f99c; end: 10558fa7f; -[UNISCCTPMusicUserDataService putItemsByExternalIDWithRequest:callOptionsBuilder:handler:] */

void FUN_10558f99c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb120;
  _objc_opt_class(PTR_PTR_1126bb120);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb978,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558fa80; end: 10558fb63; -[UNISCCTPMusicUserDataService putItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10558fa80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb128;
  _objc_opt_class(PTR_PTR_1126bb128);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb998,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558fb64; end: 10558fc47; -[UNISCCTPMusicUserDataService removeItemsByExternalIDWithRequest:callOptionsBuilder:handler:] */

void FUN_10558fb64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb130;
  _objc_opt_class(PTR_PTR_1126bb130);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb9b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558fc48; end: 10558fd2b; -[UNISCCTPMusicUserDataService removeItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10558fc48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb138;
  _objc_opt_class(PTR_PTR_1126bb138);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb9d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558fd2c; end: 10558fe0f; -[UNISCCTPMusicUserDataService listItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10558fd2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb140;
  _objc_opt_class(PTR_PTR_1126bb140);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb9f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558fe10; end: 10558fef3; -[UNISCCTPMusicUserDataService checkItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10558fe10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb148;
  _objc_opt_class(PTR_PTR_1126bb148);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deba18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558fef4; end: 10558ffd7; -[UNISCCTPMusicUserDataService removeAllItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10558fef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb150;
  _objc_opt_class(PTR_PTR_1126bb150);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deba38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10558ffd8; end: 10558ffe3; -[UNISCCTPMusicUserDataService .cxx_destruct] */

void FUN_10558ffd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558ffe4; end: 105590057; -[UNISCCTPUserDataService initWithUnifiedGrpcService:] */

undefined1 * FUN_10558ffe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e90b0;
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



/* Entry: 105590058; end: 10559013b; -[UNISCCTPUserDataService putItemsByExternalIDWithRequest:callOptionsBuilder:handler:] */

void FUN_105590058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb120;
  _objc_opt_class(PTR_PTR_1126bb120);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deba58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10559013c; end: 10559021f; -[UNISCCTPUserDataService putItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10559013c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb128;
  _objc_opt_class(PTR_PTR_1126bb128);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deba78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105590220; end: 105590303; -[UNISCCTPUserDataService removeItemsByExternalIDWithRequest:callOptionsBuilder:handler:] */

void FUN_105590220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb130;
  _objc_opt_class(PTR_PTR_1126bb130);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deba98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105590304; end: 1055903e7; -[UNISCCTPUserDataService removeItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_105590304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb138;
  _objc_opt_class(PTR_PTR_1126bb138);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debab8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055903e8; end: 1055904cb; -[UNISCCTPUserDataService listItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055903e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb140;
  _objc_opt_class(PTR_PTR_1126bb140);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debad8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055904cc; end: 1055905af; -[UNISCCTPUserDataService checkItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055904cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb148;
  _objc_opt_class(PTR_PTR_1126bb148);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debaf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055905b0; end: 105590693; -[UNISCCTPUserDataService removeAllItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055905b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb150;
  _objc_opt_class(PTR_PTR_1126bb150);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debb18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105590694; end: 10559069f; -[UNISCCTPUserDataService .cxx_destruct] */

void FUN_105590694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055906a0; end: 105590707; +[SCCTPPutItemsByExternalIDRequest descriptor] */

void FUN_1055906a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46cc0,
                        &PTR____CFConstantStringClassReference_110debb38,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e43f8,2,0x10,0x1c);
    puRam00000001136bc8d0 = puVar1;
  }
  return;
}



/* Entry: 105590708; end: 105590783; +[SCCTPPutItemsByExternalIDRequest_Item descriptor] */

undefined * FUN_105590708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46d10,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e47d8,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bc8d8 = puVar1;
  }
  return puRam00000001136bc8d8;
}



/* Entry: 105590784; end: 1055907eb; +[SCCTPPutItemsByExternalIDResponse descriptor] */

void FUN_105590784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46d60,
                        &PTR____CFConstantStringClassReference_110debb58,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e42b8,1,0x10,0x1c);
    puRam00000001136bc8e0 = puVar1;
  }
  return;
}



/* Entry: 1055907ec; end: 105590867; +[SCCTPPutItemsByExternalIDResponse_Result descriptor] */

undefined * FUN_1055907ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46db0,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1130e42a0,
                        &PTR_s_success_1130e45b8,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bc8e8 = puVar1;
  }
  return puRam00000001136bc8e8;
}



/* Entry: 105590868; end: 1055908cf; +[SCCTPRemoveItemsByExternalIDRequest descriptor] */

void FUN_105590868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46e00,
                        &PTR____CFConstantStringClassReference_110debb98,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e42d8,1,0x10,0x1c);
    puRam00000001136bc8f0 = puVar1;
  }
  return;
}



/* Entry: 1055908d0; end: 10559094b; +[SCCTPRemoveItemsByExternalIDRequest_Item descriptor] */

undefined * FUN_1055908d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46e50,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e4618,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bc8f8 = puVar1;
  }
  return puRam00000001136bc8f8;
}



/* Entry: 10559094c; end: 1055909b3; +[SCCTPRemoveItemsByExternalIDResponse descriptor] */

void FUN_10559094c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46ea0,
                        &PTR____CFConstantStringClassReference_110debbb8,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e42f8,1,0x10,0x1c);
    puRam00000001136bc900 = puVar1;
  }
  return;
}



/* Entry: 1055909b4; end: 105590a2f; +[SCCTPRemoveItemsByExternalIDResponse_Result descriptor] */

undefined * FUN_1055909b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46ef0,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1130e42a0,
                        &PTR_s_success_1130e46d8,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bc908 = puVar1;
  }
  return puRam00000001136bc908;
}



/* Entry: 105590a30; end: 105590a97; +[SCCTPListItemsRequest descriptor] */

void FUN_105590a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46f40,
                        &PTR____CFConstantStringClassReference_110debbd8,&PTR_DAT_1130e42a0,
                        &PTR_s_category_1130e4878,6,0x28,0x1c);
    puRam00000001136bc910 = puVar1;
  }
  return;
}



/* Entry: 105590a98; end: 105590aff; +[SCCTPListItemsResponse descriptor] */

void FUN_105590a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46f90,
                        &PTR____CFConstantStringClassReference_110debbf8,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e4438,2,0x18,0x1c);
    puRam00000001136bc918 = puVar1;
  }
  return;
}



/* Entry: 105590b00; end: 105590b7b; +[SCCTPListItemsResponse_Item descriptor] */

undefined * FUN_105590b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a46fe0,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e4478,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bc920 = puVar1;
  }
  return puRam00000001136bc920;
}



/* Entry: 105590b7c; end: 105590be3; +[SCCTPCheckItemsRequest descriptor] */

void FUN_105590b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a473c8,
                        &PTR____CFConstantStringClassReference_110debc18,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e44b8,2,0x18,0x1c);
    puRam00000001136bc928 = puVar1;
  }
  return;
}



/* Entry: 105590be4; end: 105590c67; +[SCCTPCheckItemsRequest_Item descriptor] */

undefined * FUN_105590be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a473f0,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_1130e42a0,
                        &PTR_s_category_1130e4678,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bc930 = puVar1;
  }
  return puRam00000001136bc930;
}



/* Entry: 105590c68; end: 105590ccf; +[SCCTPCheckItemsResponse descriptor] */

void FUN_105590c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47080,
                        &PTR____CFConstantStringClassReference_110debc38,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e4318,1,0x10,0x1c);
    puRam00000001136bc938 = puVar1;
  }
  return;
}



/* Entry: 105590cd0; end: 105590d4b; +[SCCTPCheckItemsResponse_Item descriptor] */

undefined * FUN_105590cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a470d0,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e4338,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001136bc940 = puVar1;
  }
  return puRam00000001136bc940;
}



/* Entry: 105590d4c; end: 105590db3; +[SCCTPRemoveAllItemsRequest descriptor] */

void FUN_105590d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47120,
                        &PTR____CFConstantStringClassReference_110debc58,&PTR_DAT_1130e42a0,
                        &PTR_s_category_1130e4358,1,8,0x1c);
    puRam00000001136bc948 = puVar1;
  }
  return;
}



/* Entry: 105590db4; end: 105590e1b; +[SCCTPRemoveAllItemsResponse descriptor] */

void FUN_105590db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47170,
                        &PTR____CFConstantStringClassReference_110debc78,&PTR_DAT_1130e42a0,
                        &PTR_s_success_1130e4378,1,4,0x1c);
    puRam00000001136bc950 = puVar1;
  }
  return;
}



/* Entry: 105590e1c; end: 105590e83; +[SCCTPUserDataItem descriptor] */

void FUN_105590e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a471c0,
                        &PTR____CFConstantStringClassReference_110debc98,&PTR_DAT_1130e42a0,
                        &PTR_s_id_p_1130e4758,4,0x20,0x1c);
    puRam00000001136bc958 = puVar1;
  }
  return;
}



/* Entry: 105590e84; end: 105590eeb; +[SCCTPUserDataCTItemResult descriptor] */

void FUN_105590e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47210,
                        &PTR____CFConstantStringClassReference_110debcb8,&PTR_DAT_1130e42a0,
                        &PTR_s_item_1130e44f8,2,0x10,0x1c);
    puRam00000001136bc960 = puVar1;
  }
  return;
}



/* Entry: 105590eec; end: 105590f53; +[SCCTPUserDataCTPIDResult descriptor] */

void FUN_105590eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47260,
                        &PTR____CFConstantStringClassReference_110debcd8,&PTR_DAT_1130e42a0,
                        &PTR_s_id_p_1130e4538,2,0x10,0x1c);
    puRam00000001136bc968 = puVar1;
  }
  return;
}



/* Entry: 105590f54; end: 105590fbb; +[SCCTPRemoveItemsRequest descriptor] */

void FUN_105590f54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a472b0,
                        &PTR____CFConstantStringClassReference_110debcf8,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e4398,1,0x10,0x1c);
    puRam00000001136bc970 = puVar1;
  }
  return;
}



/* Entry: 105590fbc; end: 105591023; +[SCCTPRemoveItemsResponse descriptor] */

void FUN_105590fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc978 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47300,
                        &PTR____CFConstantStringClassReference_110debd18,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e43b8,1,0x10,0x1c);
    puRam00000001136bc978 = puVar1;
  }
  return;
}



/* Entry: 105591024; end: 10559108b; +[SCCTPPutItemsRequest descriptor] */

void FUN_105591024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47350,
                        &PTR____CFConstantStringClassReference_110debd38,&PTR_DAT_1130e42a0,
                        &PTR_s_itemsArray_1130e4578,2,0x10,0x1c);
    puRam00000001136bc980 = puVar1;
  }
  return;
}



/* Entry: 10559108c; end: 10559116f; +[SCCTPPutItemsResponse descriptor] */

void FUN_10559108c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc988 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a473a0,
                        &PTR____CFConstantStringClassReference_110debd58,&PTR_DAT_1130e42a0,
                        &PTR_DAT_1130e43d8,1,0x10,0x1c);
    puRam00000001136bc988 = puVar1;
  }
  return;
}



/* Entry: 105591170; end: 10559117b;  */

bool FUN_105591170(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10559117c; end: 1055911ef; -[UNISCCTPCustomStickerCustomStickerService initWithUnifiedGrpcService:] */

undefined1 * FUN_10559117c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e90b8;
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



/* Entry: 1055911f0; end: 1055912d3; -[UNISCCTPCustomStickerCustomStickerService createWithRequest:callOptionsBuilder:handler:] */

void FUN_1055911f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb158;
  _objc_opt_class(PTR_PTR_1126bb158);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debd98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055912d4; end: 1055913b7; -[UNISCCTPCustomStickerCustomStickerService deleteWithRequest:callOptionsBuilder:handler:] */

void FUN_1055912d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb160;
  _objc_opt_class(PTR_PTR_1126bb160);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debdb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055913b8; end: 10559149b; -[UNISCCTPCustomStickerCustomStickerService batchOpsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055913b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb168;
  _objc_opt_class(PTR_PTR_1126bb168);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debdd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10559149c; end: 10559157f; -[UNISCCTPCustomStickerCustomStickerService updateOrderWeightWithRequest:callOptionsBuilder:handler:] */

void FUN_10559149c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb170;
  _objc_opt_class(PTR_PTR_1126bb170);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debdf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591580; end: 105591663; -[UNISCCTPCustomStickerCustomStickerService addRefWithRequest:callOptionsBuilder:handler:] */

void FUN_105591580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb178;
  _objc_opt_class(PTR_PTR_1126bb178);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debe18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591664; end: 105591747; -[UNISCCTPCustomStickerCustomStickerService removeRefWithRequest:callOptionsBuilder:handler:] */

void FUN_105591664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb180;
  _objc_opt_class(PTR_PTR_1126bb180);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debe38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591748; end: 10559182b; -[UNISCCTPCustomStickerCustomStickerService getWithRequest:callOptionsBuilder:handler:] */

void FUN_105591748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb188;
  _objc_opt_class(PTR_PTR_1126bb188);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debe58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10559182c; end: 10559190f; -[UNISCCTPCustomStickerCustomStickerService listPackWithRequest:callOptionsBuilder:handler:] */

void FUN_10559182c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb190;
  _objc_opt_class(PTR_PTR_1126bb190);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debe78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591910; end: 1055919f3; -[UNISCCTPCustomStickerCustomStickerService createShareYoursPromptWithRequest:callOptionsBuilder:handler:] */

void FUN_105591910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb198;
  _objc_opt_class(PTR_PTR_1126bb198);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debe98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055919f4; end: 105591ad7; -[UNISCCTPCustomStickerCustomStickerService addShareYoursStoryWithRequest:callOptionsBuilder:handler:] */

void FUN_1055919f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb1a0;
  _objc_opt_class(PTR_PTR_1126bb1a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debeb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591ad8; end: 105591bbb; -[UNISCCTPCustomStickerCustomStickerService listShareYoursStoriesWithRequest:callOptionsBuilder:handler:] */

void FUN_105591ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b5fa0;
  _objc_opt_class(PTR_PTR_1126b5fa0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debed8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591bbc; end: 105591bc7; -[UNISCCTPCustomStickerCustomStickerService .cxx_destruct] */

void FUN_105591bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105591bc8; end: 105591c3b; -[UNISCCTPCustomojiCustomojiService initWithUnifiedGrpcService:] */

undefined1 * FUN_105591bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e90c0;
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



/* Entry: 105591c3c; end: 105591d1f; -[UNISCCTPCustomojiCustomojiService createWithRequest:callOptionsBuilder:handler:] */

void FUN_105591c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb1a8;
  _objc_opt_class(PTR_PTR_1126bb1a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110debef8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105591d20; end: 105591d2b; -[UNISCCTPCustomojiCustomojiService .cxx_destruct] */

void FUN_105591d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105591d2c; end: 105591d93; +[SCCTPCustomojiCreateRequest descriptor] */

void FUN_105591d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47580,
                        &PTR____CFConstantStringClassReference_110debf18,&PTR_DAT_1130e4938,
                        &PTR_DAT_1130e4950,1,0x10,0x1c);
    puRam00000001136bc998 = puVar1;
  }
  return;
}



/* Entry: 105591d94; end: 105591dfb; +[SCCTPCustomojiCreateResponse descriptor] */

void FUN_105591d94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a475d0,
                        &PTR____CFConstantStringClassReference_110debf38,&PTR_DAT_1130e4938,
                        &PTR_DAT_1130e4970,1,0x10,0x1c);
    puRam00000001136bc9a0 = puVar1;
  }
  return;
}



/* Entry: 105591dfc; end: 105591e63; +[SCCTPCTFeedRequest descriptor] */

void FUN_105591dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47670,
                        &PTR____CFConstantStringClassReference_110debf58,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e4b70,4,0x20,0x1c);
    puRam00000001136bc9a8 = puVar1;
  }
  return;
}



/* Entry: 105591e64; end: 105591edf; +[SCCTPCTFeedRequest_ClientFeatures descriptor] */

undefined * FUN_105591e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a476c0,
                        &PTR____CFConstantStringClassReference_110debf78,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e49b0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bc9b0 = puVar1;
  }
  return puRam00000001136bc9b0;
}



/* Entry: 105591ee0; end: 105591f47; +[SCCTPCTFeedResponse descriptor] */

void FUN_105591ee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47710,
                        &PTR____CFConstantStringClassReference_110debf98,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e49d0,1,0x10,0x1c);
    puRam00000001136bc9b8 = puVar1;
  }
  return;
}



/* Entry: 105591f48; end: 105591faf; +[SCCTPCTBidiFeedRequest descriptor] */

void FUN_105591f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a478a0,
                        &PTR____CFConstantStringClassReference_110debfb8,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e4bf0,4,0x28,0x1c);
    puRam00000001136bc9c0 = puVar1;
  }
  return;
}



/* Entry: 105591fb0; end: 105592033; +[SCCTPCTBidiFeedRequest_FeedTreeRequest descriptor] */

undefined * FUN_105591fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a478c8,
                        &PTR____CFConstantStringClassReference_110debfd8,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e49f0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bc9c8 = puVar1;
  }
  return puRam00000001136bc9c8;
}



/* Entry: 105592034; end: 1055920b7; +[SCCTPCTBidiFeedRequest_ComputeRequest descriptor] */

undefined * FUN_105592034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a478f0,
                        &PTR____CFConstantStringClassReference_110debff8,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e4ab0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bc9d0 = puVar1;
  }
  return puRam00000001136bc9d0;
}



/* Entry: 1055920b8; end: 105592143; +[SCCTPCTBidiFeedResponse descriptor] */

undefined * FUN_1055920b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a477d8,
                        &PTR____CFConstantStringClassReference_110dec018,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e4a30,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bc9d8 = puVar1;
  }
  return puRam00000001136bc9d8;
}



/* Entry: 105592144; end: 1055921bf; +[SCCTPCTBidiFeedResponse_FeedTreeResponse descriptor] */

undefined * FUN_105592144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47828,
                        &PTR____CFConstantStringClassReference_110dec038,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e4a70,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bc9e0 = puVar1;
  }
  return puRam00000001136bc9e0;
}



/* Entry: 1055921c0; end: 10559223b; +[SCCTPCTBidiFeedResponse_ComputeResponse descriptor] */

undefined * FUN_1055921c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47878,
                        &PTR____CFConstantStringClassReference_110dec058,&PTR_DAT_1130e4998,
                        &PTR_DAT_1130e4b10,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bc9e8 = puVar1;
  }
  return puRam00000001136bc9e8;
}



/* Entry: 10559223c; end: 1055922a3; +[SCCTPComputeFeedRequest descriptor] */

void FUN_10559223c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47990,
                        &PTR____CFConstantStringClassReference_110dec078,&PTR_DAT_1130e4c78,
                        &PTR_DAT_1130e4df0,8,0x40,0x1c);
    puRam00000001136bc9f0 = puVar1;
  }
  return;
}



/* Entry: 1055922a4; end: 10559230b; +[SCCTPQueryInterval descriptor] */

void FUN_1055922a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc9f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a479e0,
                        &PTR____CFConstantStringClassReference_110dec098,&PTR_DAT_1130e4c78,
                        &PTR_DAT_1130e4cb0,2,0xc,0x1c);
    puRam00000001136bc9f8 = puVar1;
  }
  return;
}



/* Entry: 10559230c; end: 105592373; +[SCCTPFlags descriptor] */

void FUN_10559230c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47a30,
                        &PTR____CFConstantStringClassReference_110dec0b8,&PTR_DAT_1130e4c78,
                        &PTR_DAT_1130e4c90,1,4,0x1c);
    puRam00000001136bca00 = puVar1;
  }
  return;
}



/* Entry: 105592374; end: 1055923ff; +[SCCTPComputeFeedResponse descriptor] */

undefined * FUN_105592374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47a80,
                        &PTR____CFConstantStringClassReference_110dec0d8,&PTR_DAT_1130e4c78,
                        &PTR_s_itemsArray_1130e4d50,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136bca08 = puVar1;
  }
  return puRam00000001136bca08;
}



/* Entry: 105592400; end: 10559247b; +[SCCTPComputeFeedResponse_FlatResults descriptor] */

undefined * FUN_105592400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47ad0,
                        &PTR____CFConstantStringClassReference_110dec0f8,&PTR_DAT_1130e4c78,
                        &PTR_s_itemsArray_1130e4cf0,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bca10 = puVar1;
  }
  return puRam00000001136bca10;
}



/* Entry: 10559247c; end: 1055924e3; +[SCCTPGiphySearchRequest descriptor] */

void FUN_10559247c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47b70,
                        &PTR____CFConstantStringClassReference_110dec118,&PTR_DAT_1130e4ef0,
                        &PTR_DAT_1130e4f88,2,0x10,0x1c);
    puRam00000001136bca18 = puVar1;
  }
  return;
}



/* Entry: 1055924e4; end: 10559254b; +[SCCTPGiphyTrendingRequest descriptor] */

void FUN_1055924e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47bc0,
                        &PTR____CFConstantStringClassReference_110dec138,&PTR_DAT_1130e4ef0,
                        &PTR_DAT_1130e4f08,1,0x10,0x1c);
    puRam00000001136bca20 = puVar1;
  }
  return;
}



/* Entry: 10559254c; end: 1055925b3; +[SCCTPGiphySearchResponse descriptor] */

void FUN_10559254c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47c10,
                        &PTR____CFConstantStringClassReference_110dec158,&PTR_DAT_1130e4ef0,
                        &PTR_DAT_1130e4f28,1,0x10,0x1c);
    puRam00000001136bca28 = puVar1;
  }
  return;
}



/* Entry: 1055925b4; end: 10559261b; +[SCCTPGiphyGetByIDsRequest descriptor] */

void FUN_1055925b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47c60,
                        &PTR____CFConstantStringClassReference_110dec178,&PTR_DAT_1130e4ef0,
                        &PTR_DAT_1130e4f48,1,0x10,0x1c);
    puRam00000001136bca30 = puVar1;
  }
  return;
}



/* Entry: 10559261c; end: 105592683; +[SCCTPGiphyGetByIDsResponse descriptor] */

void FUN_10559261c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47cb0,
                        &PTR____CFConstantStringClassReference_110dec198,&PTR_DAT_1130e4ef0,
                        &PTR_DAT_1130e4f68,1,0x10,0x1c);
    puRam00000001136bca38 = puVar1;
  }
  return;
}



/* Entry: 105592684; end: 1055926eb; +[SCCTPGiphyTrendingResponse descriptor] */

void FUN_105592684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47d00,
                        &PTR____CFConstantStringClassReference_110dec1b8,&PTR_DAT_1130e4ef0,
                        &PTR_DAT_1130e4fc8,2,0x10,0x1c);
    puRam00000001136bca40 = puVar1;
  }
  return;
}



/* Entry: 1055926ec; end: 105592753; +[SCCTPHometabRequest descriptor] */

void FUN_1055926ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47da0,
                        &PTR____CFConstantStringClassReference_110dec1d8,&PTR_DAT_1130e5008,
                        &PTR_s_origin_1130e5040,4,0x20,0x1c);
    puRam00000001136bca48 = puVar1;
  }
  return;
}



/* Entry: 105592754; end: 105592837; +[SCCTPHometabResponse descriptor] */

void FUN_105592754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47df0,
                        &PTR____CFConstantStringClassReference_110dec1f8,&PTR_DAT_1130e5008,
                        &PTR_DAT_1130e5020,1,0x10,0x1c);
    puRam00000001136bca50 = puVar1;
  }
  return;
}



/* Entry: 105592838; end: 105592843;  */

bool FUN_105592838(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105592844; end: 1055928ab; +[SCCTPCTItemsRequest descriptor] */

void FUN_105592844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47ee0,
                        &PTR____CFConstantStringClassReference_110dec238,&PTR_DAT_1130e50c0,0,0,4,
                        0x1c);
    puRam00000001136bca60 = puVar1;
  }
  return;
}



/* Entry: 1055928ac; end: 105592913; +[SCCTPCTItemsResponse descriptor] */

void FUN_1055928ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47f30,
                        &PTR____CFConstantStringClassReference_110dec258,&PTR_DAT_1130e50c0,
                        &PTR_s_itemsArray_1130e50d8,1,0x10,0x1c);
    puRam00000001136bca68 = puVar1;
  }
  return;
}



/* Entry: 105592914; end: 10559297b; +[SCCTPCameoCTItemsRequest descriptor] */

void FUN_105592914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47f80,
                        &PTR____CFConstantStringClassReference_110dec278,&PTR_DAT_1130e50c0,
                        &PTR_DAT_1130e50f8,1,0x10,0x1c);
    puRam00000001136bca70 = puVar1;
  }
  return;
}



/* Entry: 10559297c; end: 1055929e3; +[SCCTPCameoCTItemsOptions descriptor] */

void FUN_10559297c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a47fd0,
                        &PTR____CFConstantStringClassReference_110dec298,&PTR_DAT_1130e50c0,
                        &PTR_DAT_1130e5118,5,0x28,0x1c);
    puRam00000001136bca78 = puVar1;
  }
  return;
}



/* Entry: 1055929e4; end: 105592a4b; +[SCCTPMusicTrackCTItemsRequest descriptor] */

void FUN_1055929e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48020,
                        &PTR____CFConstantStringClassReference_110dec2b8,&PTR_DAT_1130e50c0,0,0,4,
                        0x1c);
    puRam00000001136bca80 = puVar1;
  }
  return;
}



/* Entry: 105592a4c; end: 105592ab3; +[SCCTPGetItemsByExternalIDsRequest descriptor] */

void FUN_105592a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a480c0,
                        &PTR____CFConstantStringClassReference_110dec2d8,&PTR_DAT_1130e51b8,
                        &PTR_DAT_1130e5250,2,0x18,0x1c);
    puRam00000001136bca88 = puVar1;
  }
  return;
}



/* Entry: 105592ab4; end: 105592b1b; +[SCCTPGetItemsByExternalIDsResponse descriptor] */

void FUN_105592ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48110,
                        &PTR____CFConstantStringClassReference_110dec2f8,&PTR_DAT_1130e51b8,
                        &PTR_s_itemsArray_1130e51d0,1,0x10,0x1c);
    puRam00000001136bca90 = puVar1;
  }
  return;
}


