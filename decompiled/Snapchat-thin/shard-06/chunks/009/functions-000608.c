/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fa8764; end: 104fa878b; -[SCScanFromLensWorkflow scanFromLensUpdateObservable] */

void FUN_104fa8764(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fa878c; end: 104fa883b; -[SCScanFromLensWorkflow scanCapturer:didCaptureFrame:cameraPosition:analysisResults:] */

void FUN_104fa878c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fa883c;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 104fa883c; end: 104fa8ab7;  */

void FUN_104fa883c(long param_1,undefined8 param_2)

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
  long lVar10;
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
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bdc51c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        func_0x00010bf952e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar8);
        if (lVar6 == 0) {
          lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
          func_0x00010c0e00e0(lVar2,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar2;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar7);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bef74c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c1596a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c137fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c0f81e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010bf002e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,puVar5,uVar8);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar8);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b31b8;
    _objc_alloc(PTR_PTR_1126b31b8);
    func_0x00010bffb580();
    func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 104fa8ab8; end: 104fa8af7; -[SCScanFromLensWorkflow _createScanCapturer] */

void FUN_104fa8ab8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b31b8;
  _objc_alloc(PTR_PTR_1126b31b8);
  func_0x00010bffb580();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fa8af8; end: 104fa8ce3; -[SCScanFromLensWorkflow _didGetScanFromLensNetworkUpdate:] */

void FUN_104fa8af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104fa8ba0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa8ce4; end: 104fa8dc3; -[SCScanFromLensWorkflow _activeContexts] */

void FUN_104fa8ce4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104fa8d84;
  puStack_30 = &UNK_110860058;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf97ce0(uVar3,param_2,&puStack_48);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fa8dc4; end: 104fa8f1f; -[SCScanFromLensWorkflow _updateProviderForUserNetworkServices:endpointConfiguration:snapTokenProvider:] */

void FUN_104fa8dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b31c0;
  _objc_alloc(PTR_PTR_1126b31c0);
  func_0x00010c05c760();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = puVar1;
  func_0x00010c14ec40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  puVar3 = puVar2;
  func_0x00010c25ff60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fa8f20; end: 104fa8f67;  */

void FUN_104fa8f20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe4e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa8f68; end: 104fa9003; -[SCScanFromLensWorkflow .cxx_destruct] */

void FUN_104fa8f68(long param_1)

{
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



/* Entry: 104fa9004; end: 104fa90af; -[SCScanFromLensNetworkUpdate initWithResponse:requestId:] */

undefined1 *
FUN_104fa9004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5660;
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



/* Entry: 104fa90b0; end: 104fa90d3; -[SCScanFromLensNetworkUpdate copyWithZone:] */

undefined8 FUN_104fa90b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104fa90d4; end: 104fa9147; -[SCScanFromLensNetworkUpdate hash] */

undefined8 * FUN_104fa90d4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_104fa91c8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104fa91d4;
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
          goto LAB_104fa91d4;
        }
        goto LAB_104fa91c8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104fa91d4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104fa9148; end: 104fa91ef; -[SCScanFromLensNetworkUpdate isEqual:] */

long FUN_104fa9148(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104fa91c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104fa91d4;
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
          goto LAB_104fa91d4;
        }
        goto LAB_104fa91c8;
      }
    }
    lVar3 = 0;
  }
LAB_104fa91d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fa91f0; end: 104fa91f7; -[SCScanFromLensNetworkUpdate response] */

undefined8 FUN_104fa91f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fa91f8; end: 104fa91ff; -[SCScanFromLensNetworkUpdate requestId] */

undefined8 FUN_104fa91f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fa9200; end: 104fa922f; -[SCScanFromLensNetworkUpdate .cxx_destruct] */

void FUN_104fa9200(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa9230; end: 104fa929b; +[SCScanFromLensResponse failureWithError:] */

void FUN_104fa9230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3150;
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



/* Entry: 104fa929c; end: 104fa92ff; +[SCScanFromLensResponse successWithJsonResponse:] */

void FUN_104fa929c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3150;
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



/* Entry: 104fa9300; end: 104fa9323; -[SCScanFromLensResponse copyWithZone:] */

undefined8 FUN_104fa9300(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104fa9324; end: 104fa939b; -[SCScanFromLensResponse hash] */

void FUN_104fa9324(long param_1)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e5668;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fa939c; end: 104fa93df; -[SCScanFromLensResponse internalInit] */

void FUN_104fa939c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e5668;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fa93e0; end: 104fa9497; -[SCScanFromLensResponse isEqual:] */

long FUN_104fa93e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104fa9470:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104fa947c;
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
          goto LAB_104fa947c;
        }
        goto LAB_104fa9470;
      }
    }
    lVar3 = 0;
  }
LAB_104fa947c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fa9498; end: 104fa951b; -[SCScanFromLensResponse matchSuccess:failure:] */

void FUN_104fa9498(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_104fa9500;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104fa9500;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_104fa9500:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fa951c; end: 104fa954b; -[SCScanFromLensResponse .cxx_destruct] */

void FUN_104fa951c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104fa954c; end: 104fa95f7; -[SCScanFromLensUpdate initWithResponse:sessionTokens:] */

undefined1 *
FUN_104fa954c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5670;
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



/* Entry: 104fa95f8; end: 104fa961b; -[SCScanFromLensUpdate copyWithZone:] */

undefined8 FUN_104fa95f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104fa961c; end: 104fa968f; -[SCScanFromLensUpdate hash] */

undefined8 * FUN_104fa961c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_104fa9710:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104fa971c;
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
          goto LAB_104fa971c;
        }
        goto LAB_104fa9710;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104fa971c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104fa9690; end: 104fa9737; -[SCScanFromLensUpdate isEqual:] */

long FUN_104fa9690(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104fa9710:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104fa971c;
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
          goto LAB_104fa971c;
        }
        goto LAB_104fa9710;
      }
    }
    lVar3 = 0;
  }
LAB_104fa971c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fa9738; end: 104fa973f; -[SCScanFromLensUpdate response] */

undefined8 FUN_104fa9738(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fa9740; end: 104fa9747; -[SCScanFromLensUpdate sessionTokens] */

undefined8 FUN_104fa9740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fa9748; end: 104fa9777; -[SCScanFromLensUpdate .cxx_destruct] */

void FUN_104fa9748(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa9778; end: 104fa99c3; -[SCScanFromLensFTUE initWithScanFromLensFeatureSettings:cameraTimerView:webBrowsingScopeExposer:] */

undefined8 *
FUN_104fa9778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1126e5678;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104fa99c4;
    puStack_a0 = &UNK_110845cb0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104fa9a04;
    puStack_c8 = &UNK_110845cb0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fa99c4; end: 104fa9a83;  */

void FUN_104fa99c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104fa9a84; end: 104fa9ae7; -[SCScanFromLensFTUE setLensId:] */

void FUN_104fa9a84(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x18)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x00010be02980(param_1);
    func_0x00010be037c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fa9ae8; end: 104fa9b27; -[SCScanFromLensFTUE hasOnboarded] */

undefined8 FUN_104fa9ae8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3940();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104fa9b28; end: 104fa9b2f; -[SCScanFromLensFTUE hasEntered] */

undefined1 FUN_104fa9b28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 104fa9b30; end: 104fa9bd7; -[SCScanFromLensFTUE presentOnboardingIfNecessary] */

void FUN_104fa9b30(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104fa9bd8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104fa9bd8; end: 104fa9c03;  */

void FUN_104fa9bd8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7afa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa9c04; end: 104fa9cab; -[SCScanFromLensFTUE presentTapToEnterIfNecessary] */

void FUN_104fa9c04(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104fa9cac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104fa9cac; end: 104fa9cd7;  */

void FUN_104fa9cac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa9cd8; end: 104faa0bf; -[SCScanFromLensFTUE _presentDialogIfNecessary] */

void FUN_104fa9cd8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 *puVar10;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  puStack_130 = unaff_x20;
  if ((param_1[0x20] & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    _objc_release(puVar2);
    _objc_initWeak(auStack_a8,param_1);
    unaff_x21 = PTR_PTR_1126aed70;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_104faa0c0;
    puStack_b8 = &UNK_1108482a8;
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    unaff_x22 = PTR_PTR_1126aed70;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar2;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_104faa194;
    puStack_e0 = &UNK_1108482a8;
    _objc_copyWeak(auStack_d8,auStack_a8);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000104faad58();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_88 = ppuVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dbeb98;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar6 = puVar5;
    func_0x000104faad28();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000104faad40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = unaff_x21;
    puStack_98 = unaff_x22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    puStack_110 = puVar4;
    func_0x00010bfefea0();
    puVar10 = (undefined8 *)(param_1 + 0x40);
    uVar9 = *puVar10;
    *puVar10 = puVar5;
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar9 = *puVar10;
    param_2 = *(undefined8 *)(param_1 + 0x48);
    func_0x000108065d38(uVar9,param_2,param_1,0xd);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bddc0(*puVar10);
    _objc_release(uVar9);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(uVar9);
    param_1[0x20] = 1;
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    _objc_destroyWeak(auStack_d8);
    _objc_release(unaff_x21);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release();
    puStack_130 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  puVar2 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_118 = FUN_104faa0c0;
  puStack_140 = unaff_x22;
  puStack_138 = unaff_x21;
  puStack_128 = puVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_104faa168;
  puStack_150 = &UNK_1108434b0;
  _objc_copyWeak(auStack_148,puVar2 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_168);
  _objc_destroyWeak(auStack_148);
  _objc_release(param_2);
  return;
}



/* Entry: 104faa0c0; end: 104faa167;  */

void FUN_104faa0c0(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104faa168;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104faa168; end: 104faa193;  */

void FUN_104faa168(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faa194; end: 104faa23b;  */

void FUN_104faa194(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104faa23c;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104faa23c; end: 104faa267;  */

void FUN_104faa23c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faa268; end: 104faa923; -[SCScanFromLensFTUE _presentTapToEnterIfNecessary] */

void FUN_104faa268(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  double dVar20;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_5;
  if ((param_5[0x21] & 1) == 0) {
    puVar1 = PTR_PTR_1126b31c8;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c222380(puVar1,param_6,puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010befbb60(puVar2,param_6,puVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar3,param_6,puVar4);
    uVar5 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(uVar5);
    func_0x00010c14c940(puVar2);
    func_0x000100594f4c();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar6 = param_5 + 0x10;
    _objc_loadWeakRetained(puVar6);
    func_0x00010bf20c00();
    dVar20 = param_1 + param_3 + param_4 + 16.0;
    _objc_release(puVar6);
    func_0x00010c14c960(0,0,dVar20,0,puVar3);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c219b60();
    func_0x00010befbb60(puVar3,param_6,puVar7);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf348e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(dVar20 * 0.5,puVar8,param_6,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    puStack_98 = puVar10;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010bf34860(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0(puVar11,param_6,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar7;
    puStack_90 = puVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar3;
    func_0x00010c2a5060(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493a0(puVar14,param_6,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_98,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_6,puVar17);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    puVar6 = puVar8;
    func_0x000104faad28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar8,param_6,puVar6);
    _objc_release(puVar6);
    func_0x00010c21ad00(puVar8,param_6,4);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar8,param_6,puVar6);
    _objc_release(puVar6);
    func_0x00010c219b60(puVar8,param_6,0);
    func_0x00010c23d620(puVar8);
    func_0x00010befbb60(puVar7,param_6,puVar8);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c274200(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0(puVar9,param_6,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    puStack_a8 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    func_0x00010bf34860(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0(puVar12,param_6,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_6,puVar15);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    puVar6 = puVar9;
    func_0x000104faad70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar9,param_6,puVar6);
    _objc_release(puVar6);
    func_0x00010c21ad00(puVar9,param_6,0x14);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar9,param_6,puVar6);
    _objc_release(puVar6);
    func_0x00010befbb60(puVar7,param_6,puVar9);
    func_0x00010c219b60(puVar9,param_6,0);
    func_0x00010c23d620(puVar9);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0x4020000000000000,puVar10,param_6,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    puStack_c0 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493a0(puVar13,param_6,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar9;
    puStack_b8 = puVar15;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493a0(puVar16,param_6,puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_c0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_6,puVar19);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    param_5[0x21] = 1;
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar5 = *(undefined8 *)(puVar1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104faa924; end: 104faa9a3; -[SCScanFromLensFTUE _createModalContainer] */

void FUN_104faa924(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104faa9a4; end: 104faa9cf; -[SCScanFromLensFTUE _createOverlayContainer] */

void FUN_104faa9a4(void)

{
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104faa9d0; end: 104faaa23; -[SCScanFromLensFTUE _didTapOkay] */

void FUN_104faa9d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a56c0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x22) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be02990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissDialogIfNecessary_11255e400);
  return;
}



/* Entry: 104faaa24; end: 104faaa27; -[SCScanFromLensFTUE _didTapCancel] */

void FUN_104faaa24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissDialogIfNecessary_11255e400);
  return;
}



/* Entry: 104faaa28; end: 104faaa33; -[SCScanFromLensFTUE _didTapEnter] */

void FUN_104faaa28(long param_1)

{
  *(undefined1 *)(param_1 + 0x22) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be037d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTapToEnterIfNecessary_11255e790);
  return;
}



/* Entry: 104faaa34; end: 104faab03; -[SCScanFromLensFTUE _dismissDialogIfNecessary] */

void FUN_104faaa34(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf6f440(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104faab04; end: 104faab2f;  */

void FUN_104faab04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be929e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faab30; end: 104faac03; -[SCScanFromLensFTUE _dismissTapToEnterIfNecessary] */

void FUN_104faab30(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x21) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf6f440(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104faac04; end: 104faac2f;  */

void FUN_104faac04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faac30; end: 104faac3f; -[SCScanFromLensFTUE _resetDialog] */

void FUN_104faac30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104faac40; end: 104faac47; -[SCScanFromLensFTUE _resetTapToEnter] */

void FUN_104faac40(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 104faac48; end: 104faac57; -[SCScanFromLensFTUE dialogDidDismiss:] */

void FUN_104faac48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104faac58; end: 104faac9f; -[SCScanFromLensFTUE webBrowserDidDismiss:] */

void FUN_104faac58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104faaca0; end: 104faaca7; -[SCScanFromLensFTUE lensId] */

undefined8 FUN_104faaca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104faaca8; end: 104faad1b; -[SCScanFromLensFTUE .cxx_destruct] */

void FUN_104faaca8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104faad1c; end: 104faad87; -[SCScanFromLensPortraitViewController supportedInterfaceOrientations] */

undefined8 FUN_104faad1c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104faad88; end: 104faadef; +[SCLensScanImage descriptor] */

void FUN_104faad88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0dab0,
                        &PTR____CFConstantStringClassReference_110dbec18,
                        &PTR_s_snapchat_lenses_1130bde50,&PTR_s_data_p_1130bde68,1,0x10,0x1c);
    puRam00000001136b9178 = puVar1;
  }
  return;
}



/* Entry: 104faadf0; end: 104faae57; +[SCLensScanBoundingBox descriptor] */

void FUN_104faadf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0db00,
                        &PTR____CFConstantStringClassReference_110dbec38,
                        &PTR_s_snapchat_lenses_1130bde50,&PTR_s_left_1130bdf28,4,0x14,0x1c);
    puRam00000001136b9180 = puVar1;
  }
  return;
}



/* Entry: 104faae58; end: 104faaebf; +[SCLensRealTimeScanEvent descriptor] */

void FUN_104faae58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0db50,
                        &PTR____CFConstantStringClassReference_110dbec58,
                        &PTR_s_snapchat_lenses_1130bde50,&PTR_s_className_p_1130bde88,2,0x18,0x1c);
    puRam00000001136b9188 = puVar1;
  }
  return;
}



/* Entry: 104faaec0; end: 104faafa3; +[SCLensScanRequest descriptor] */

void FUN_104faaec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0dba0,
                        &PTR____CFConstantStringClassReference_110dbec78,
                        &PTR_s_snapchat_lenses_1130bde50,&PTR_s_image_1130bdec8,3,0x20,0x1c);
    puRam00000001136b9190 = puVar1;
  }
  return;
}



/* Entry: 104faafa4; end: 104faafaf;  */

bool FUN_104faafa4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104faafb0; end: 104fab017; +[SCSFLScanFromLensRequest descriptor] */

void FUN_104faafb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b91a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0dc40,
                        &PTR____CFConstantStringClassReference_110dbecb8,
                        &PTR_s_snapchat_perception_scan_from_le_1130bdfa8,&PTR_s_id_p_1130be000,7,
                        0x28,0x1c);
    puRam00000001136b91a0 = puVar1;
  }
  return;
}



/* Entry: 104fab018; end: 104fab07f; +[SCSFLScanFromLensWrappedResponse descriptor] */

void FUN_104fab018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b91a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0dc90,
                        &PTR____CFConstantStringClassReference_110dbecd8,
                        &PTR_s_snapchat_perception_scan_from_le_1130bdfa8,&PTR_s_id_p_1130bdfc0,2,
                        0x18,0x1c);
    puRam00000001136b91a8 = puVar1;
  }
  return;
}



/* Entry: 104fab080; end: 104fab14b; -[SCScanResultsQRCodeAnalyzer initWithModelProvider:sessionLogger:performer:] */

undefined1 *
FUN_104fab080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5680;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fab14c; end: 104fab15f; -[SCScanResultsQRCodeAnalyzer supportsRequestedAnalyzerServiceIds:source:] */

void FUN_104fab14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_containsObject__1125b07e8,PTR_PTR_113316308);
  return;
}



/* Entry: 104fab160; end: 104fab23f; -[SCScanResultsQRCodeAnalyzer beginWithContext:] */

void FUN_104fab160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b31d0;
  _objc_alloc(PTR_PTR_1126b31d0);
  func_0x00010c041860();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fab240;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_78);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fab240; end: 104fab24f;  */

void FUN_104fab240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__beginWithContext_resultsSubject_112552928,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104fab250; end: 104fab2a7; -[SCScanResultsQRCodeAnalyzer end] */

void FUN_104fab250(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104fab2a8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 104fab2a8; end: 104fab2af;  */

void FUN_104fab2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__end_11255ff40);
  return;
}



/* Entry: 104fab2b0; end: 104fab4fb; -[SCScanResultsQRCodeAnalyzer _beginWithContext:resultsSubject:] */

void FUN_104fab2b0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c1371e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c1371e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d960(param_3);
    uVar3 = param_1;
    func_0x00010c263b80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010be09680(param_1);
      goto LAB_104fab4ac;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ee60();
  _objc_release(uVar4);
  func_0x00010be09680(param_1);
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar4);
  lVar1 = param_3;
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_3;
  func_0x00010bf63f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  lVar7 = lVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar7;
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_104fab4ac:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fab4fc; end: 104fab533;  */

bool FUN_104fab4fc(undefined8 param_1,long param_2)

{
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 104fab534; end: 104fab5ef;  */

void FUN_104fab534(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_2;
    func_0x00010bf15bc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11d4a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdca680(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fab5f0; end: 104fab633; -[SCScanResultsQRCodeAnalyzer _end] */

void FUN_104fab5f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fab634; end: 104fab9ff; -[SCScanResultsQRCodeAnalyzer _analyzeImage:withQRCodeResult:inQuery:] */

void FUN_104fab634(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_150;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar7 = param_5;
  func_0x00010c0720c0();
  if ((int)uVar7 == 0) goto LAB_104fab968;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_104faba00;
  uStack_98 = 0x104faba10;
  _objc_retain(param_4);
  lVar8 = param_4;
  lStack_90 = param_4;
  func_0x00010c265b00();
  if (lVar8 == 0x10) {
LAB_104fab8b4:
    lVar8 = puStack_b0[5];
    func_0x00010c265b00();
    if (lVar8 == 0x10) {
      puStack_150 = PTR_PTR_1126b31d8;
      _objc_alloc();
      func_0x00010c03fcc0();
      puVar2 = PTR_PTR_1126b31e0;
      func_0x00010bf15c40(PTR_PTR_1126b31e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ee80();
      _objc_release(uVar7);
      func_0x00010be09680(param_1);
      _objc_release(puVar2);
      goto LAB_104fab94c;
    }
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d0160();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf04b00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf15b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar5;
    func_0x00010bf6f920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_104faba00;
    uStack_c8 = 0x104faba10;
    uStack_c0 = 0;
    func_0x00010c0bf0a0(puStack_150);
    if (puStack_e0[5] == 0) {
      __Block_object_dispose(&uStack_e8,8);
      _objc_release(uStack_c0);
      _objc_release(puStack_150);
      goto LAB_104fab8b4;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14eea0();
    _objc_release(uVar7);
    func_0x00010be09680(param_1);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
LAB_104fab94c:
    _objc_release(puStack_150);
  }
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(lStack_90);
LAB_104fab968:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 104faba00; end: 104faba17;  */

void FUN_104faba00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104faba18; end: 104fabb3f;  */

void FUN_104faba18(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104fabb40; end: 104fabb7f;  */

void FUN_104fabb40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fabb80; end: 104fabbdf; -[SCScanResultsQRCodeAnalyzer .cxx_destruct] */

void FUN_104fabb80(long param_1)

{
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



/* Entry: 104fabbe0; end: 104fabd73; -[SCScanResultsQRCodeAnalyzerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fabbe0(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b31e8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271897c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112718980;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112718984;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c7c0(puVar1,param_2,lVar3,lVar5,lVar9);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112718988);
  *(undefined **)(param_1 + _DAT_112718988) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271898c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fabd74; end: 104fabdd7; -[SCScanResultsQRCodeAnalyzerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fabd74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112718988;
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e5688;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fabdd8; end: 104fabe37; -[SCScanResultsQRCodeAnalyzerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fabdd8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718984);
  _objc_destroyWeak(param_1 + _DAT_11271897c);
  _objc_destroyWeak(param_1 + _DAT_11271898c);
  _objc_destroyWeak(param_1 + _DAT_112718980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718988,0);
  return;
}



/* Entry: 104fabe38; end: 104fabfb3; -[SCScanResultsSnapcodeAnalyzer initWithIdentifierProvider:modelProvider:deepScanConfiguration:metadataProvider:snapcodeDecoder:sessionLogger:performer:] */

undefined1 *
FUN_104fabe38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5690;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fabfb4; end: 104fabfc7; -[SCScanResultsSnapcodeAnalyzer supportsRequestedAnalyzerServiceIds:source:] */

void FUN_104fabfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_containsObject__1125b07e8,PTR_PTR_113316300);
  return;
}



/* Entry: 104fabfc8; end: 104fac0a7; -[SCScanResultsSnapcodeAnalyzer beginWithContext:] */

void FUN_104fabfc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b31d0;
  _objc_alloc(PTR_PTR_1126b31d0);
  func_0x00010c041860();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fac0a8;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  uStack_50 = param_3;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_78);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fac0a8; end: 104fac0b7;  */

void FUN_104fac0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__beginWithContext_resultsSubject_112552928,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104fac0b8; end: 104fac10f; -[SCScanResultsSnapcodeAnalyzer end] */

void FUN_104fac0b8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104fac110;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104fac110; end: 104fac117;  */

void FUN_104fac110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__end_11255ff40);
  return;
}



/* Entry: 104fac118; end: 104fac2b7; -[SCScanResultsSnapcodeAnalyzer _beginWithContext:resultsSubject:] */

void FUN_104fac118(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c1371e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c1371e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c11d960(param_3);
    uVar4 = param_1;
    func_0x00010c263b80(param_1,param_2,lVar2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar4 & 1) == 0) {
      func_0x00010be09680(param_1);
      goto LAB_104fac290;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14f380();
  _objc_release(uVar5);
  func_0x00010be09680(param_1);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_4;
  _objc_release(uVar5);
  lVar1 = param_3;
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar5);
  lVar1 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar5);
  lVar1 = param_3;
  func_0x00010c11d960();
  *(long *)(param_1 + 0x20) = lVar1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104fac2b8;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  _objc_retain(param_3);
  lStack_48 = param_3;
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_70);
  _objc_release(lStack_48);
LAB_104fac290:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fac2b8; end: 104fac2c3;  */

void FUN_104fac2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdca6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__analyzeWithContext__112550358,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104fac2c4; end: 104fac333; -[SCScanResultsSnapcodeAnalyzer _end] */

void FUN_104fac2c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fac334; end: 104fac4cf; -[SCScanResultsSnapcodeAnalyzer _analyzeWithContext:] */

void FUN_104fac334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0xffffffffffffffff;
    _objc_initWeak(auStack_68,param_1);
    uVar1 = param_3;
    func_0x00010bf63f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104fac4d0; end: 104fac55b;  */

void FUN_104fac4d0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fac55c; end: 104fac77b; -[SCScanResultsSnapcodeAnalyzer _didReceiveScannableDataUpdate:withContext:frameNumber:] */

void FUN_104fac55c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c245040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar1 = param_3;
      func_0x00010bfe6ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11d960(param_4);
      lVar2 = param_1;
      func_0x00010bebd980();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(param_4);
      lVar3 = lVar2;
      uStack_60 = param_5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(long *)(param_1 + 0x68) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
    else {
      lVar1 = param_3;
      func_0x00010c245040(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar4 = param_4;
      func_0x00010c11d4a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdff400(param_1);
      _objc_release(uVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fac77c; end: 104fac8af;  */

void FUN_104fac77c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104fac8b0;
  puStack_70 = &UNK_110860160;
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_98,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  return;
}


