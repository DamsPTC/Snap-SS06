/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10558918c; end: 105589287; -[CTPGRPCNetworkItemsLookupClient initWithGRPCClient:circumstanceEngine:requestFactory:protobufItemTransformer:] */

undefined1 *
FUN_10558918c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9058;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105589288; end: 10558942b; -[CTPGRPCNetworkItemsLookupClient lookupItemsWithIdentifiers:type:] */

void FUN_105589288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf56b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c16c6a0(puVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  func_0x00010c04f520();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110deb7d8,uVar5,puVar2,
                      puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10558942c; end: 10558961f;  */

/* WARNING: Removing unreachable block (ram,0x0001055894a0) */

void FUN_10558942c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126baff0;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = puVar2;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        uVar6 = *(undefined8 *)((long)puVar8 * 8);
        lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
        func_0x00010c0840e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c084460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (lVar9 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar9);
        puVar8 = puVar8 + 1;
      } while (puVar5 != puVar8);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar5 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_storeStrong(param_2 + 0x20,0);
    _objc_storeStrong(param_2 + 0x18,0);
    _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105589620; end: 105589667; -[CTPGRPCNetworkItemsLookupClient .cxx_destruct] */

void FUN_105589620(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105589668; end: 1055896db; -[CTPNetworkLoggerImplementation initWithGrapheneRegistry:] */

undefined1 * FUN_105589668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9060;
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



/* Entry: 1055896dc; end: 10558975f; -[CTPNetworkLoggerImplementation logNetworkLatencyWithContext:durationMs:] */

void FUN_1055896dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126baca8;
  func_0x00010c0d7f60(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105589760; end: 10558976b; -[CTPNetworkLoggerImplementation .cxx_destruct] */

void FUN_105589760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558976c; end: 10558980f; -[CTPGRPCNetworkRequestFactory initWithBitmojiTransformer:cameoTransformer:] */

undefined1 *
FUN_10558976c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9068;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105589810; end: 105589ad7; -[CTPGRPCNetworkRequestFactory createSearchRequestFromQuery:session:] */

void FUN_105589810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126baff8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010c262c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fdc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c15ffa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8a40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  func_0x00010c1fdc60(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1e6360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf45e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ed1a0();
  uVar4 = param_1;
  func_0x00010be83740(param_1,param_2,uVar3);
  func_0x00010c1d64a0(puVar1,param_2,uVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1195a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e7c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf45e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfaeb00();
  uVar4 = param_1;
  func_0x00010c119480(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f99a0(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010beeca60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf45e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c087fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c1192e0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x00010c13ce20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf45e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c13ce00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c119440(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105589ad8; end: 105589d37; -[CTPGRPCNetworkRequestFactory createItemsLookupRequestWithIdentifiers:itemType:] */

void FUN_105589ad8(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
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
  puVar1 = PTR_PTR_1126bb000;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        puVar4 = PTR_PTR_1126bb008;
        _objc_alloc_init();
        if (param_4 < 6) {
          if (param_4 < 3) {
            if (param_4 == 1) {
              func_0x00010c20b3c0(puVar4,param_2,uVar6);
            }
            else if (param_4 == 2) {
              func_0x00010c170c20(puVar4,param_2,uVar6);
            }
          }
          else if (param_4 == 3) {
            func_0x00010c188900(puVar4,param_2,uVar6);
          }
          else if (param_4 == 5) {
            func_0x00010c194640(puVar4,param_2,uVar6);
          }
        }
        else if (param_4 < 9) {
          if (param_4 == 6) {
            func_0x00010c1a3ba0(puVar4,param_2,uVar6);
          }
          else if (param_4 == 8) {
            func_0x00010c175da0(puVar4,param_2,uVar6);
          }
        }
        else if (param_4 == 9) {
          func_0x00010c17bac0(puVar4,param_2,uVar6);
        }
        else if (param_4 == 10) {
          func_0x00010c1a39e0(puVar4,param_2,uVar6);
        }
        else if (param_4 == 0xc) {
          func_0x00010c067fc0(uVar6);
          func_0x00010c178900(puVar4,param_2,uVar6);
        }
        func_0x00010befa120(puVar2,param_2,puVar4);
        _objc_release(puVar4);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c199580(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126bb010;
    _objc_retain(puVar3);
    _objc_alloc_init(puVar1);
    puVar2 = puVar3;
    func_0x00010bf45e20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c13ce00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf28b60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010be834e0(param_3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf45e20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c087fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1192e0(param_3,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR_PTR_1126bb018;
        _objc_alloc_init();
      }
      puVar2 = puVar5;
      func_0x00010beeca60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      _objc_release(puVar2);
    }
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c175e00(puVar1,param_2,puVar5);
    }
    _objc_release(param_3);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105589d38; end: 105589eaf; -[CTPGRPCNetworkRequestFactory createCameosItemsRequestFromSession:] */

void FUN_105589d38(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126bb010;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010bf45e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13ce00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf28b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010be834e0(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf45e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c087fa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1192e0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = param_1;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126bb018;
      _objc_alloc_init();
    }
    puVar6 = puVar5;
    func_0x00010beeca60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar6);
  }
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c175e00(puVar1,param_2,puVar5);
  }
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105589eb0; end: 105589f73; -[CTPGRPCNetworkRequestFactory protoLocationFromLocation:] */

void FUN_105589eb0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bb020;
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_alloc_init(puVar2);
    func_0x00010bf51c80(param_5);
    func_0x00010c1b9520(puVar2);
    func_0x00010bf51c80(param_5);
    func_0x00010c1c0e80(param_2,puVar2);
    func_0x00010bfe4080(param_5);
    func_0x00010c1a9120(puVar2);
    lVar1 = param_5;
    func_0x00010c2709c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c26f320(lVar1);
    func_0x00010c215e80(param_2 * 1000.0,puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105589f74; end: 10558a07b; -[CTPGRPCNetworkRequestFactory protoUserInfoFromUserInfo:] */

void FUN_105589f74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bb028;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc_init(puVar2);
    lVar1 = param_3;
    func_0x00010befe780(param_3);
    func_0x00010c1664c0(puVar2,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010bf53280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184960(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c09ea00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c119340(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf6c0(puVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c170a80(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558a07c; end: 10558a163; -[CTPGRPCNetworkRequestFactory protoSectionsToReturnFromFilteredSections:] */

void FUN_10558a07c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae740;
    _objc_alloc_init(PTR_PTR_1126ae740);
    func_0x00010bddd7c0(param_1,param_2,1,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,2,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,4,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,8,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,0x10,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,0x20,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,0x40,param_3,puVar1);
    func_0x00010bddd7c0(param_1,param_2,0x80,param_3,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558a164; end: 10558a23f; -[CTPGRPCNetworkRequestFactory protoLanguagesFromLanguages:] */

void FUN_10558a164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 100;
  _objc_retain();
  func_0x00010bf97e80(param_3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558a240; end: 10558a2eb;  */

void FUN_10558a240(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb030;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c225440();
  func_0x00010c1b7480(puVar1);
  _objc_release(param_2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -10;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 1) {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10558a2ec; end: 10558a3e3; -[CTPGRPCNetworkRequestFactory protoResultTypeOptionsFromOptions:] */

void FUN_10558a2ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010bf1bdc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be837e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010befa120(puVar1,param_2,lVar3);
    }
    lVar2 = param_3;
    func_0x00010bf28b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be83800(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (param_1 != 0) {
      func_0x00010befa120(puVar1,param_2,param_1);
    }
    _objc_release(param_1);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558a3e4; end: 10558a47f; -[CTPGRPCNetworkRequestFactory _protoSectionForSectionValue:] */

undefined4 FUN_10558a3e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 < 0x10) {
    uVar3 = 4;
    if (param_3 != 8) {
      uVar3 = 0;
    }
    uVar2 = 3;
    if (param_3 != 4) {
      uVar2 = uVar3;
    }
    uVar3 = 2;
    if (param_3 != 2) {
      uVar3 = 0;
    }
    uVar1 = 1;
    if (param_3 != 1) {
      uVar1 = uVar3;
    }
    if (param_3 < 4) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  if (param_3 < 0x40) {
    if (param_3 != 0x10) {
      uVar3 = 6;
      if (param_3 != 0x20) {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else {
    if (param_3 == 0x40) {
      return 7;
    }
    if (param_3 == 0x80) {
      return 8;
    }
    if (param_3 != 0x200) {
      return 0;
    }
  }
  return 5;
}



/* Entry: 10558a480; end: 10558a4df; -[CTPGRPCNetworkRequestFactory _checkForAndUpdateSection:sectionMask:array:] */

void FUN_10558a480(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  if (((param_4 & param_3) != 0) &&
     (func_0x00010be83820(param_1,param_2,param_3), (int)param_1 != 0)) {
    func_0x00010befc800(param_5,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10558a4e0; end: 10558a503; -[CTPGRPCNetworkRequestFactory _protoOriginFromSessionOrigin:] */

undefined4 FUN_10558a4e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined4 *)(&UNK_10ddb26b0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10558a504; end: 10558a6d3; -[CTPGRPCNetworkRequestFactory _protoResultTypeOptionFromBitmojiOptions:] */

void FUN_10558a504(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bb038;
    _objc_alloc_init();
    puVar2 = param_3;
    func_0x00010bfeba80(param_3);
    func_0x00010c1abc20(puVar1,param_2,puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010c263320();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          lVar3 = *(long *)(lStack_128 + (long)puVar8 * 8);
          func_0x00010c2827c0();
          if (lVar3 != 0) {
            uVar4 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c119080();
            _objc_release(uVar4);
            puVar5 = puVar1;
            func_0x00010c27e120(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc800();
            _objc_release(puVar5);
          }
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar8);
        puVar6 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar6 = PTR_PTR_1126bb040;
    _objc_alloc_init();
    func_0x00010c1ed520();
    puVar2 = puVar1;
    func_0x00010c171240(puVar6);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126bb048;
      _objc_alloc_init(PTR_PTR_1126bb048);
      puVar6 = puVar2;
      func_0x00010c0c1fc0(puVar2);
      func_0x00010c1c3160(puVar1,param_2,puVar6);
      puVar6 = puVar2;
      func_0x00010c0cd9c0(puVar2);
      func_0x00010c1c7ca0(puVar1,param_2,puVar6);
      puVar6 = puVar2;
      func_0x00010bf04be0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      FUN_1055864f4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar8 != (undefined *)0x0) {
        func_0x00010c168700(puVar1,param_2,puVar8);
      }
      puVar6 = puVar2;
      func_0x00010bfbec00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      FUN_105586588();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c1a2660(puVar1,param_2,puVar5);
      }
      puVar6 = PTR_PTR_1126bb040;
      _objc_alloc_init(PTR_PTR_1126bb040);
      func_0x00010c1ed520();
      func_0x00010c175f60(puVar6,param_2,puVar1);
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10558a6d4; end: 10558a80b; -[CTPGRPCNetworkRequestFactory _protoResultTypeOptionFromCameoOptions:] */

void FUN_10558a6d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bb048;
    _objc_alloc_init(PTR_PTR_1126bb048);
    lVar2 = param_3;
    func_0x00010c0c1fc0(param_3);
    func_0x00010c1c3160(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0cd9c0(param_3);
    func_0x00010c1c7ca0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010bf04be0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_1055864f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010c168700(puVar1,param_2,lVar3);
    }
    lVar2 = param_3;
    func_0x00010bfbec00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    FUN_105586588();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      func_0x00010c1a2660(puVar1,param_2,lVar4);
    }
    puVar5 = PTR_PTR_1126bb040;
    _objc_alloc_init(PTR_PTR_1126bb040);
    func_0x00010c1ed520();
    func_0x00010c175f60(puVar5,param_2,puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10558a80c; end: 10558a903; -[CTPGRPCNetworkRequestFactory _protoCameoItemsOptionsFromCameoOptions:] */

void FUN_10558a80c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bb018;
    _objc_alloc_init(PTR_PTR_1126bb018);
    lVar1 = param_3;
    func_0x00010bf04be0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_1055864f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c168700(puVar4,param_2,lVar2);
    }
    lVar1 = param_3;
    func_0x00010bfbec00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_105586588();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010c1a2660(puVar4,param_2,lVar3);
    }
    lVar1 = param_3;
    func_0x00010c0c1fc0(param_3);
    func_0x00010c1c3160(puVar4,param_2,lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10558a904; end: 10558a933; -[CTPGRPCNetworkRequestFactory .cxx_destruct] */

void FUN_10558a904(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558a934; end: 10558aa57; -[CTPGRPCNetworkSearchClient initWithGRPCClient:giphyGRPCClient:itemTransformer:circumstanceEngine:requestFactory:] */

undefined1 *
FUN_10558a934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9070;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10558aa58; end: 10558ab43; -[CTPGRPCNetworkSearchClient searchWithSession:query:] */

void FUN_10558aa58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c153260(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110deb818,0,0);
  lVar3 = lVar1;
  if ((int)uVar2 == 0) {
    func_0x00010c1539e0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41860(lVar1,param_2,param_1,&PTR___NSConcreteGlobalBlock_110898e88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10558ab44; end: 10558adf3;  */

void FUN_10558ab44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10558adf4;
  uStack_70 = 0x10558ae04;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10558adf4;
  uStack_a0 = 0x10558ae04;
  uStack_98 = 0;
  uVar3 = param_2;
  puStack_68 = puVar1;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c13ca20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar3);
  lVar2 = puStack_88[5];
  func_0x00010bf529e0();
  puVar1 = PTR_PTR_1126af5d0;
  if ((lVar2 == 0) && (puStack_b8[5] != 0)) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = puStack_88[5];
    func_0x00010bf51e00(uVar3);
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126bb050;
  _objc_alloc(PTR_PTR_1126bb050);
  uVar3 = param_2;
  func_0x00010c11d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf66180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fd00(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10558adf4; end: 10558ae0b;  */

void FUN_10558adf4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10558ae0c; end: 10558af0b;  */

void FUN_10558ae0c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10558af0c; end: 10558af43;  */

void FUN_10558af0c(long param_1,undefined8 param_2)

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



/* Entry: 10558af44; end: 10558b043;  */

void FUN_10558af44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10558b044; end: 10558b07b;  */

void FUN_10558b044(long param_1,undefined8 param_2)

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



/* Entry: 10558b07c; end: 10558b16f; -[CTPGRPCNetworkSearchClient searchForGiphy:query:] */

void FUN_10558b07c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0ed1a0();
  if (lVar1 - 1U < 3) {
    uVar3 = *(undefined4 *)(&UNK_10ddb26c0 + (lVar1 - 1U) * 4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10558b170;
  puStack_48 = &UNK_110898ef8;
  uVar2 = param_4;
  uStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x00010bfb2660(param_4,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010becec80(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10558b170; end: 10558b373;  */

void FUN_10558b170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  func_0x00010c067f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  puVar1 = PTR_PTR_1126bb058;
  _objc_alloc_init(PTR_PTR_1126bb058);
  uVar4 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6360(puVar1);
  _objc_release(uVar4);
  func_0x00010c186380(puVar1);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c16c6a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  func_0x00010c04f520();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_retain(param_2);
  puVar5 = puVar3;
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10558b374; end: 10558b3c3;  */

void FUN_10558b374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb060;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c008360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558b3c4; end: 10558b41f;  */

void FUN_10558b3c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb068;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03fce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558b420; end: 10558b47f; -[CTPGRPCNetworkSearchClient _transformFromProtoGiphyResponse:] */

void FUN_10558b420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10558b480;
  puStack_20 = &UNK_110898f58;
  uStack_18 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10558b480; end: 10558b5e3;  */

void FUN_10558b480(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10558adf4;
  uStack_40 = 0x10558ae04;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126bb050;
  _objc_alloc(PTR_PTR_1126bb050);
  uVar1 = param_2;
  func_0x00010c11d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fd00(puVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558b5e4; end: 10558b7ff;  */

void FUN_10558b5e4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bfccc20(param_2);
  func_0x00010bf0a0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bfccc00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      iVar12 = (int)*(undefined8 *)(lVar13 * 8);
      func_0x00010bfd6be0();
      if (iVar12 != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c084460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(lVar5);
      }
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126bb070;
  _objc_alloc(PTR_PTR_1126bb070);
  func_0x00010c042d40();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar8;
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10558b800; end: 10558b847;  */

void FUN_10558b800(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10558b848; end: 10558b907; -[CTPGRPCNetworkSearchClient search:query:] */

void FUN_10558b848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10558b908;
  puStack_48 = &UNK_110898fc8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2660(param_4,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bececa0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10558b908; end: 10558baeb;  */

void FUN_10558b908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  func_0x00010c067f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf58ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  func_0x00010c04f520();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_retain(param_2);
  puVar6 = puVar4;
  func_0x00010c0b8600(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10558baec; end: 10558bb3b;  */

void FUN_10558baec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb078;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c008360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558bb3c; end: 10558bb97;  */

void FUN_10558bb3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb080;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03fce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558bb98; end: 10558bbf7; -[CTPGRPCNetworkSearchClient _transformFromProtoSearchResponse:] */

void FUN_10558bb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10558bbf8;
  puStack_20 = &UNK_110899028;
  uStack_18 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10558bbf8; end: 10558bd9f;  */

void FUN_10558bbf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10558adf4;
  uStack_50 = 0x10558ae04;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10558adf4;
  uStack_80 = 0x10558ae04;
  uStack_78 = 0;
  uVar1 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126bb050;
  _objc_alloc(PTR_PTR_1126bb050);
  uVar1 = param_2;
  func_0x00010c11d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fd00(puVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558bda0; end: 10558c117;  */

void FUN_10558bda0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar12 = param_2;
  func_0x00010c156b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar3 = param_2;
  func_0x00010c156b20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar3);
      }
      lVar13 = *(long *)(lVar14 * 8);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13cf40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar13;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar13);
          }
          uVar16 = *(undefined8 *)(lVar15 * 8);
          uVar10 = uVar16;
          func_0x00010bfd8220();
          if ((int)uVar10 != 0) {
            lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0840e0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c084460();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar16);
            _objc_release(lVar6);
            if (lVar7 != 0) {
              func_0x00010befa120(puVar4);
            }
            _objc_release(lVar7);
          }
          lVar15 = lVar15 + 1;
        } while (lVar5 != lVar15);
        lVar5 = lVar13;
        func_0x00010bf52a60();
      }
      _objc_release(lVar13);
      puVar8 = PTR_PTR_1126bb070;
      _objc_alloc(PTR_PTR_1126bb070);
      func_0x00010c156900();
      func_0x00010c042d40(puVar8);
      func_0x00010befa120(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar4);
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar12);
    lVar12 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar12 = param_2;
  func_0x00010bf661a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(long *)(lVar11 + 0x28) = lVar12;
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126af5d0;
  puVar8 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar10 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined **)(lVar12 + 0x28) = puVar4;
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar10 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined **)(lVar12 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10558c118; end: 10558c15f;  */

void FUN_10558c118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10558c160; end: 10558c1b3; -[CTPGRPCNetworkSearchClient .cxx_destruct] */

void FUN_10558c160(long param_1)

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



/* Entry: 10558c1b4; end: 10558c2d7; -[CTPGRPCNetworkForYouClient initWithGRPCClient:itemTransformer:userDataFactory:cameoTransformer:searchSectionPersistenceService:] */

undefined1 *
FUN_10558c1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9078;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10558c2d8; end: 10558c44f; -[CTPGRPCNetworkForYouClient previewStickerSearchPreTypeResponseDataWithHasCameo:] */

void FUN_10558c2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126bb088;
  _objc_alloc_init(PTR_PTR_1126bb088);
  puVar2 = PTR_PTR_1126baf38;
  _objc_alloc_init(PTR_PTR_1126baf38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfc0680(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e7c0(puVar2,param_2,uVar3);
  func_0x00010c17f4c0(puVar1,param_2,puVar2);
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar4,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  func_0x00010c04f520();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110deb878,puVar7,puVar4,
                      puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10558c450; end: 10558c477;  */

void FUN_10558c450(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10558c478; end: 10558c7a7; -[CTPGRPCNetworkForYouClient parseHometabForYouData:] */

void FUN_10558c478(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bb090;
  _objc_alloc();
  func_0x00010c008360();
  puVar4 = puVar3;
  func_0x00010c13cf20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c156b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      lVar14 = *(long *)((long)puVar16 * 8);
      lVar7 = lVar14;
      func_0x00010c13cf60();
      if (lVar7 != 0) {
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar14;
        func_0x00010c13cf40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar9;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar9);
            }
            lVar15 = *(long *)(lVar17 * 8);
            lVar10 = lVar15;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 != 0) {
              lVar11 = *(long *)(param_1 + 0x10);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf5cc00(lVar15);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar11;
              func_0x00010c084460();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar15);
              _objc_release(lVar11);
              if (lVar10 != 0) {
                func_0x00010befa120(puVar8);
              }
              _objc_release(lVar10);
            }
            lVar17 = lVar17 + 1;
          } while (lVar7 != lVar17);
          lVar7 = lVar9;
          func_0x00010bf52a60();
        }
        _objc_release(lVar9);
        puVar12 = PTR_PTR_1126bb098;
        _objc_alloc(PTR_PTR_1126bb098);
        func_0x00010c2480a0(lVar14);
        func_0x00010c020560(puVar12);
        func_0x00010befa120(puVar6);
        _objc_release(puVar12);
        _objc_release(puVar8);
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar4);
    puVar4 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar4 = puVar6;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10558c7a8; end: 10558c7fb; -[CTPGRPCNetworkForYouClient .cxx_destruct] */

void FUN_10558c7a8(long param_1)

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



/* Entry: 10558c7fc; end: 10558c8f7; -[CTPGRPCNetworkGiphyClient initWithGRPCClient:itemTransformer:circumstanceEngine:userDataFactory:] */

undefined1 *
FUN_10558c7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9080;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10558c8f8; end: 10558cb27; -[CTPGRPCNetworkGiphyClient requestGiphyTrending] */

void FUN_10558c8f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126bb0a0;
  _objc_alloc_init(PTR_PTR_1126bb0a0);
  puVar2 = PTR_PTR_1126baf38;
  _objc_alloc_init(PTR_PTR_1126baf38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc0680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e7c0(puVar2);
  _objc_release(uVar3);
  func_0x00010c17f4c0(puVar1);
  func_0x00010c067f00(*(undefined8 *)(param_1 + 0x18));
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c16c6a0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_10558640c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126bafb0;
  _objc_alloc(PTR_PTR_1126bafb0);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c04f520(puVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10558cb28; end: 10558cbb3;  */

void FUN_10558cb28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb0a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c008360();
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010be70220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10558cbb4; end: 10558cd93; -[CTPGRPCNetworkGiphyClient _parseGiphyTrending:] */

void FUN_10558cbb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfccc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfccc00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar5 = *(long *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c084460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if (lVar6 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(lVar6);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar8 = PTR_PTR_1126bb0b0;
    _objc_alloc(PTR_PTR_1126bb0b0);
    func_0x00010c2480a0(param_3);
    func_0x00010c020560(puVar8);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10558cd94; end: 10558cddb; -[CTPGRPCNetworkGiphyClient .cxx_destruct] */

void FUN_10558cd94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558cddc; end: 10558ceaf; -[CTPGRPCNetworkShareYoursClient initWithCtpGRPCClient:] */

undefined1 * FUN_10558cddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10558ceb0; end: 10558cf0f; -[CTPGRPCNetworkShareYoursClient _callOptionsBuilder] */

void FUN_10558ceb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010558dab8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558cf10; end: 10558d053; -[CTPGRPCNetworkShareYoursClient createShareYoursPromptWithText:] */

void FUN_10558cf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb0b8;
  _objc_opt_new();
  func_0x00010c1e4f20();
  uVar2 = param_1;
  func_0x00010bdd8d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10558d054; end: 10558d167;  */

void FUN_10558d054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010bf58de0(uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558d168; end: 10558d20b;  */

void FUN_10558d168(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010c22b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  else {
    param_2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10558d20c; end: 10558d36f; -[CTPGRPCNetworkShareYoursClient addStoryWithShareYoursId:snapId:] */

void FUN_10558d20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bb0c0;
  _objc_opt_new();
  func_0x00010c1fef20();
  func_0x00010c204680(puVar1);
  uVar2 = param_1;
  func_0x00010bdd8d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10558d370; end: 10558d483;  */

void FUN_10558d370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010befb400(uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558d484; end: 10558d52b;  */

void FUN_10558d484(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10558d52c; end: 10558d6a3; -[CTPGRPCNetworkShareYoursClient listStoriesWithShareYoursId:limit:pageToken:] */

void FUN_10558d52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bb0c8;
  _objc_opt_new();
  func_0x00010c1fef20();
  func_0x00010c1bda80(puVar1);
  if (param_5 != 0) {
    func_0x00010c1d87c0(puVar1);
  }
  uVar2 = param_1;
  func_0x00010bdd8d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10558d6a4; end: 10558d7b7;  */

void FUN_10558d6a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c09a280(uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558d7b8; end: 10558d85b;  */

void FUN_10558d7b8(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  else {
    param_2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10558d85c; end: 10558d867; -[CTPGRPCNetworkShareYoursClient .cxx_destruct] */

void FUN_10558d85c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558d868; end: 10558dc57;  */

void FUN_10558d868(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *unaff_x20;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0c10;
  func_0x00010c2827c0();
  if ((long)ppuVar2 < 3) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_1111745e0;
    if (ppuVar2 != (undefined **)0x2) {
      ppuVar1 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
    }
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantDictionary_1111745b8;
    if (ppuVar2 != (undefined **)0x1) {
      ppuVar5 = ppuVar1;
    }
  }
  else if (ppuVar2 == (undefined **)0x3) {
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantDictionary_111174608;
  }
  else {
    ppuVar5 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
    if (ppuVar2 == (undefined **)0x4) {
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = puVar3;
      func_0x00010c25d300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      ppuVar5 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
      if (unaff_x20 != (undefined *)0x0) {
        ppuStack_38 = &PTR____CFConstantStringClassReference_110de35b8;
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_30 = unaff_x20;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,
                            &ppuStack_38,1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(unaff_x20);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uStack_48 = 0x10558d990;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0c10;
    puStack_60 = unaff_x20;
    ppuStack_58 = ppuVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010c2827c0();
    if ((long)ppuVar2 < 3) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111174658;
      if (ppuVar2 != (undefined **)0x2) {
        ppuVar1 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
      }
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantDictionary_111174630;
      if (ppuVar2 != (undefined **)0x1) {
        ppuVar5 = ppuVar1;
      }
    }
    else if (ppuVar2 == (undefined **)0x3) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantDictionary_111174680;
    }
    else {
      ppuVar5 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
      if (ppuVar2 == (undefined **)0x4) {
        puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
        func_0x00010c24d8e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = puVar3;
        func_0x00010c25d300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        ppuVar5 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
        if (unaff_x20 != (undefined *)0x0) {
          ppuStack_78 = &PTR____CFConstantStringClassReference_110de35b8;
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_70 = unaff_x20;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,
                              &ppuStack_78,1);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(unaff_x20);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      uStack_88 = 0x10558dab8;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0c10;
      puStack_a0 = unaff_x20;
      ppuStack_98 = ppuVar5;
      ppuStack_90 = &puStack_50;
      func_0x00010c2827c0();
      if ((long)ppuVar2 < 3) {
        ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_1111746d0;
        if (ppuVar2 != (undefined **)0x2) {
          ppuVar1 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
        }
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantDictionary_1111746a8;
        if (ppuVar2 != (undefined **)0x1) {
          ppuVar5 = ppuVar1;
        }
      }
      else if (ppuVar2 == (undefined **)0x3) {
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantDictionary_1111746f8;
      }
      else {
        ppuVar5 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
        if (ppuVar2 == (undefined **)0x4) {
          puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
          func_0x00010c24d8e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c25d300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          ppuVar5 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
          if (puVar4 != (undefined *)0x0) {
            ppuStack_b8 = &PTR____CFConstantStringClassReference_110de35b8;
            ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_b0 = puVar4;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,
                                &ppuStack_b8,1);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar4);
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
        func_0x00010c08fa60();
        if (ppuVar2 == (undefined **)0x0) {
          ppuVar5 = (undefined **)0x0;
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
          func_0x00010bf44740(&PTR____CFConstantStringClassReference_110daafd8,param_2,
                              &PTR____CFConstantStringClassReference_110db3ed8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar2;
          func_0x00010c0b8620();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10558dc58; end: 10558dcdf;  */

void FUN_10558dc58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c25cfc0(param_2,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
  func_0x00010c1d02e0();
  puVar2 = puVar1;
  func_0x00010c0de9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558dce0; end: 10558dd63;  */

void FUN_10558dce0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110de35b8);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558dd64; end: 10558de2f; -[CTPGRPCNetworkUserDataClient initWithCtpGRPCClient:musicUserDataClient:] */

undefined1 *
FUN_10558dd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10558de30; end: 10558dec7;  */

void FUN_10558de30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb0d0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c058f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558dec8; end: 10558df37; -[CTPGRPCNetworkUserDataClient _optionsBuilder] */

void FUN_10558dec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010558d990();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558df38; end: 10558e033; -[CTPGRPCNetworkUserDataClient putUserDataCTItems:category:] */

void FUN_10558df38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558e034; end: 10558e1cf;  */

void FUN_10558e034(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bb0e0;
  _objc_opt_new(PTR_PTR_1126bb0e0);
  puVar2 = puVar1;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_110899238);
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c1abcc0(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10558e21c;
  puStack_50 = &UNK_110899298;
  _objc_retain(param_2);
  ppuVar4 = &puStack_68;
  uStack_48 = param_2;
  _objc_retainBlock(ppuVar4);
  uVar6 = *(long *)(param_1 + 0x38) - 1;
  if (uVar6 < 7) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + *(long *)(&UNK_10ddb2748 + uVar6 * 8));
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010be6e240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c780(uVar3);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558e1d0; end: 10558e21b;  */

void FUN_10558e1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb0e8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1a99c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558e21c; end: 10558e3bb;  */

void FUN_10558e21c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    func_0x00010c13cf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x000100504554();
    _objc_release(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10558e3bc; end: 10558e3f7;  */

void FUN_10558e3bc(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10558e3f8; end: 10558e4f3; -[CTPGRPCNetworkUserDataClient putUserDataItems:category:] */

void FUN_10558e3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558e4f4; end: 10558e6b7;  */

void FUN_10558e4f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_90;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bb0f0;
  _objc_opt_new(PTR_PTR_1126bb0f0);
  puVar2 = puVar1;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_10558e6b8;
  puStack_50 = &UNK_1108992f8;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  func_0x000100504554(uVar3,&puStack_68);
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c1abcc0(puVar1);
  puStack_90 = puVar6;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10558e964;
  puStack_78 = &UNK_110899358;
  _objc_retain(param_2);
  uStack_70 = param_2;
  _objc_retainBlock(&puStack_90);
  uVar7 = *(long *)(param_1 + 0x38) - 1;
  if (uVar7 < 7) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + *(long *)(&UNK_10ddb2748 + uVar7 * 8));
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010be6e240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c760(uVar3);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  puVar6 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10558e6b8; end: 10558e943;  */

void FUN_10558e6b8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bb0f8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = param_2;
  func_0x00010bf96f00();
  lVar3 = param_2;
  if (lVar2 == 7) {
    func_0x00010558e780(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c199560(puVar1);
  }
  else {
    func_0x00010558e808(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c199600(puVar1);
  }
  _objc_release(lVar3);
  FUN_10558e944(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c17a060(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558e944; end: 10558e963;  */

undefined4 FUN_10558e944(ulong param_1)

{
  if (param_1 < 8) {
    return *(undefined4 *)(&UNK_10ddb2724 + param_1 * 4);
  }
  return 1;
}



/* Entry: 10558e964; end: 10558eb03;  */

void FUN_10558e964(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    func_0x00010c13cf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x000100504554();
    _objc_release(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10558eb04; end: 10558ebff; -[CTPGRPCNetworkUserDataClient removeUserDataCTItems:category:] */

void FUN_10558eb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558ec00; end: 10558ed8f;  */

void FUN_10558ec00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bb100;
  _objc_opt_new(PTR_PTR_1126bb100);
  puVar2 = puVar1;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_110899388);
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10558eddc;
  puStack_50 = &UNK_1108993e8;
  _objc_retain(param_2);
  ppuVar4 = &puStack_68;
  uStack_48 = param_2;
  _objc_retainBlock(ppuVar4);
  uVar6 = *(long *)(param_1 + 0x38) - 1;
  if (uVar6 < 7) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + *(long *)(&UNK_10ddb2748 + uVar6 * 8));
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010be6e240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ccc0(uVar3);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10558ed90; end: 10558eddb;  */

void FUN_10558ed90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb0e8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1a99c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558eddc; end: 10558ef7f;  */

void FUN_10558eddc(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    func_0x00010c13cf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x000100504554();
    _objc_release(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10558ef80; end: 10558f07b; -[CTPGRPCNetworkUserDataClient removeUserDataItems:category:] */

void FUN_10558ef80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558f07c; end: 10558f233;  */

void FUN_10558f07c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_90;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bb108;
  _objc_opt_new(PTR_PTR_1126bb108);
  puVar2 = puVar1;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_10558f234;
  puStack_50 = &UNK_110899418;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  func_0x000100504554(uVar3,&puStack_68);
  func_0x00010befa160(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puStack_90 = puVar6;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10558f2fc;
  puStack_78 = &UNK_110899478;
  _objc_retain(param_2);
  uStack_70 = param_2;
  _objc_retainBlock(&puStack_90);
  uVar7 = *(long *)(param_1 + 0x38) - 1;
  if (uVar7 < 7) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + *(long *)(&UNK_10ddb2748 + uVar7 * 8));
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010be6e240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cca0(uVar3);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  puVar6 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10558f234; end: 10558f49f;  */

void FUN_10558f234(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bb110;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  lVar2 = param_2;
  func_0x00010bf96f00();
  lVar3 = param_2;
  if (lVar2 == 7) {
    func_0x00010558e780(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c199560(puVar1);
  }
  else {
    func_0x00010558e808(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c199600(puVar1);
  }
  _objc_release(lVar3);
  FUN_10558e944(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c17a060(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10558f4a0; end: 10558f4cf; -[CTPGRPCNetworkUserDataClient .cxx_destruct] */

void FUN_10558f4a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10558f4d0; end: 10558f57b; -[CTPGRPCNetworkSearchResult initWithResult:query:] */

undefined1 *
FUN_10558f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9098;
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



/* Entry: 10558f57c; end: 10558f59f; -[CTPGRPCNetworkSearchResult copyWithZone:] */

undefined8 FUN_10558f57c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10558f5a0; end: 10558f613; -[CTPGRPCNetworkSearchResult hash] */

undefined8 * FUN_10558f5a0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10558f694:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10558f6a0;
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
          goto LAB_10558f6a0;
        }
        goto LAB_10558f694;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10558f6a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10558f614; end: 10558f6bb; -[CTPGRPCNetworkSearchResult isEqual:] */

long FUN_10558f614(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10558f694:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10558f6a0;
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
          goto LAB_10558f6a0;
        }
        goto LAB_10558f694;
      }
    }
    lVar3 = 0;
  }
LAB_10558f6a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10558f6bc; end: 10558f6c3; -[CTPGRPCNetworkSearchResult result] */

undefined8 FUN_10558f6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


