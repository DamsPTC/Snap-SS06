/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a61de8; end: 105a6209b; -[SCSpectaclesOTAUpdateAWSFetcher checkUpdateForRequestTag:completion:] */

void FUN_105a61de8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar6);
    }
    else {
      func_0x00010c0b6e60();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0ce800();
      func_0x00010c0f57e0();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c1ab8;
      _objc_opt_new(PTR_PTR_1126c1ab8);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e3ba0(puVar3);
      _objc_release(puVar4);
      func_0x00010c1876e0(puVar3);
      func_0x00010c220ea0(puVar3);
      func_0x00010c174240(puVar3);
      func_0x00010c1ec4e0(puVar3);
      _objc_initWeak(auStack_58,param_1);
      uVar7 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_4);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(puVar5);
      func_0x00010bfcc0c0(uVar7);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar3);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a6209c; end: 105a621e3;  */

void FUN_105a6209c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    puVar1 = param_2;
    func_0x00010c0cc840(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar2 = (undefined *)(param_1 + 0x38);
      _objc_loadWeakRetained(puVar2);
      puVar1 = param_2;
      func_0x00010c0cc840(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be207e0(puVar2);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      lVar3 = *(long *)(param_1 + 0x30);
      puVar1 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
    }
    _objc_release(puVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a621e4; end: 105a6233f; -[SCSpectaclesOTAUpdateAWSFetcher downloadUpdate:userInitiated:onProgress:onError:onSuccess:] */

void FUN_105a621e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0edd60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1a000(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar3 == 0) {
      func_0x00010be06340(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105a622fc;
    }
  }
  if (param_6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
    _objc_release(puVar3);
  }
  param_1 = 0;
LAB_105a622fc:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a62340; end: 105a6244f; -[SCSpectaclesOTAUpdateAWSFetcher _getMetadata:requestTag:majorVersion:response:completion:] */

void FUN_105a62340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a62450;
  puStack_68 = &UNK_1108cfaf8;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_4;
  uStack_48 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010bfa8b00(uVar1,param_2,param_3,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_7);
  return;
}



/* Entry: 105a62450; end: 105a626db;  */

void FUN_105a62450(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c26a040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c28b680();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((((uVar4 & 1) == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
       (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) {
      func_0x00010c0720c0(uVar3);
    }
    _objc_release(uVar3);
    _objc_release(uVar3);
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c28b680();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((((uVar4 & 1) == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
       (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) == 0)) {
      func_0x00010c0720c0(uVar3);
    }
    _objc_release(uVar3);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c1ac0;
    _objc_alloc(PTR_PTR_1126c1ac0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf89180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c03dd20(puVar5);
    _objc_release(uVar1);
    lVar7 = *(long *)(param_1 + 0x38);
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x38);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a626dc; end: 105a6284f; -[SCSpectaclesOTAUpdateAWSFetcher _retrieveFileResultForCacheKey:onError:onSuccess:] */

void FUN_105a626dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105a627a8;
  puStack_48 = &UNK_1108cfb28;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c13e840(uVar1,param_2,param_3,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a62850; end: 105a629d7; -[SCSpectaclesOTAUpdateAWSFetcher _downloadUpdateForURLString:cacheKey:userInitiated:onProgress:onError:onSuccess:] */

void FUN_105a62850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf88c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a629d8; end: 105a62a7f;  */

void FUN_105a629d8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar1 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar1);
    func_0x00010be96680();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_105a62a6c;
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  }
  _objc_release(puVar1);
LAB_105a62a6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a62a80; end: 105a62ac3; -[SCSpectaclesOTAUpdateAWSFetcher .cxx_destruct] */

void FUN_105a62a80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a62ac4; end: 105a62fbb; -[SCSpectaclesHermosaOTAManager initWithCurrentDevice:connectionHub:deviceActivationService:] */

undefined8 *
FUN_105a62ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
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
  puStack_80 = PTR_PTR_1126eb788;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    func_0x00010befb0c0(puVar1[2]);
    func_0x00010befac20(puVar1[2]);
    _objc_initWeak(auStack_90,puVar1);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c252740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0e0ea0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105a62fbc;
    puStack_a0 = &UNK_110871150;
    _objc_copyWeak(auStack_98,auStack_90);
    puVar9 = puVar8;
    func_0x00010c25ff60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c105b80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar7;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar10 = puVar1[4];
    func_0x00010bf5fb80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105a63004;
    puStack_c8 = &UNK_1108711e0;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar2 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar10);
    uVar10 = puVar1[4];
    func_0x00010bf1fa40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105a6304c;
    puStack_f0 = &UNK_1108cfb88;
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar2 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar10);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf70f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar7;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar10 = puVar1[0xd];
    func_0x00010bf70f20(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_90);
    uVar2 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_retain(0);
    func_0x00010befa200(0);
    _objc_release(0);
    _objc_destroyWeak(auStack_110);
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



/* Entry: 105a62fbc; end: 105a630db;  */

void FUN_105a62fbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a630dc; end: 105a63137; -[SCSpectaclesHermosaOTAManager _customOTATag] */

void FUN_105a630dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010b6fc114();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf51e00(param_1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a63138; end: 105a631c3; -[SCSpectaclesHermosaOTAManager _handlePowerState:] */

void FUN_105a63138(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  func_0x00010c11cbc0();
  if (param_3 != 1) {
    uVar1 = param_1;
    func_0x00010be42580();
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_105a64fbc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be91bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestUserDeviceSecurityData_112582088);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restartOTASync_112582e78);
  return;
}



/* Entry: 105a631c4; end: 105a63207; -[SCSpectaclesHermosaOTAManager _isOTARebooting] */

bool FUN_105a631c4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar2 == 7) {
    bVar1 = true;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c252d60(lVar2);
    bVar1 = lVar2 == 6;
  }
  return bVar1;
}



/* Entry: 105a63208; end: 105a63283; -[SCSpectaclesHermosaOTAManager _handleBootComplete:] */

void FUN_105a63208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c263660();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010bf99b20();
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00010be95360(param_1);
    }
    else {
      func_0x00010bdf9900(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a63284; end: 105a6335f; -[SCSpectaclesHermosaOTAManager _delayAndRequestUserDeviceSecurityData] */

void FUN_105a63284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bdda760();
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a63334;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x3f000000,"APPSTORE",*(undefined8 *)(param_1 + 0x58));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a63360; end: 105a6339b; -[SCSpectaclesHermosaOTAManager _cancelDeviceSecurityRequestBlock] */

void FUN_105a63360(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a6339c; end: 105a633a3; -[SCSpectaclesHermosaOTAManager _requestCurrentPowerState] */

void FUN_105a6339c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestCurrentPowerState_11262ae78);
  return;
}



/* Entry: 105a633a4; end: 105a63543; -[SCSpectaclesHermosaOTAManager _handleUserDeviceSecurityDataResult:] */

void FUN_105a633a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105a63544;
  uStack_40 = 0x105a63554;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105a63544;
  uStack_70 = 0x105a63554;
  uStack_68 = 0;
  func_0x00010c0bfa80(param_3);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    _objc_release(uVar2);
    if ((puStack_88[5] == 0) && (lVar3 = param_1, func_0x00010be3f920(), (int)lVar3 != 0)) {
      func_0x000105a65034();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5fc0(param_1);
      _objc_release(lVar3);
    }
    else {
      func_0x00010bdddfa0(param_1);
    }
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a63544; end: 105a6355b;  */

void FUN_105a63544(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a6355c; end: 105a635cb;  */

void FUN_105a6355c(long param_1,undefined8 param_2)

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



/* Entry: 105a635cc; end: 105a63673; -[SCSpectaclesHermosaOTAManager _requestUserDeviceSecurityData] */

void FUN_105a635cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf5fb60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11cbc0();
    _objc_release(lVar1);
    if (lVar2 != 1) {
      return;
    }
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar1 == 0xc) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar3);
  func_0x000105a64f30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea5fc0(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c136f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_requestUserDeviceSecurityData_11262b5f0);
  return;
}



/* Entry: 105a63674; end: 105a636f3; -[SCSpectaclesHermosaOTAManager _isDeviceLockedAfterBooted] */

bool FUN_105a63674(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if ((lVar3 != 0) && (func_0x00010c137520(), (int)lVar3 != 0)) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x60);
    func_0x00010c0709a0();
    if ((iVar2 != 0) && (*(long *)(param_1 + 0x78) != 2)) {
      return true;
    }
  }
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c263660();
  if ((int)lVar4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x78) == 1;
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 105a636f4; end: 105a63713; -[SCSpectaclesHermosaOTAManager _shouldForceBootForAvailabilityCheck] */

bool FUN_105a636f4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(long *)(param_1 + 0x78) == 2;
  }
  return true;
}



/* Entry: 105a63714; end: 105a63893; -[SCSpectaclesHermosaOTAManager syncOTAUpdateState] */

void FUN_105a63714(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = uVar6;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010be42580();
    _objc_release(uVar1);
    _objc_release(uVar6);
    if ((uVar2 & 1) == 0) {
      FUN_105a64fbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5fc0(param_1);
      goto LAB_105a63870;
    }
  }
  else {
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  uVar6 = param_1;
  func_0x00010bdd9e60();
  if ((int)uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdddfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkOTAUpdateAvailability_112555188);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    func_0x00010bf5fb60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
LAB_105a6383c:
                    /* WARNING: Could not recover jumptable at 0x00010be90d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestCurrentPowerState_112581cf8);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf5fb60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11cbc0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) goto LAB_105a6383c;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     ((*(long *)(param_1 + 0x60) == 0 || (uVar6 = param_1, func_0x00010be3f920(), (int)uVar6 != 0)))
     ) {
                    /* WARNING: Could not recover jumptable at 0x00010be91bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestUserDeviceSecurityData_112582088);
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (uVar6 == 0) {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00();
  func_0x00010c0d9840(uVar7);
LAB_105a63870:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105a63894; end: 105a638db; -[SCSpectaclesHermosaOTAManager updateOTA] */

void FUN_105a63894(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bdf7740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdd9ea0();
  if ((int)uVar2 != 0) {
    func_0x00010be3cd60(param_1,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a638dc; end: 105a63937; -[SCSpectaclesHermosaOTAManager forceUpdateOTAWithTag:] */

void FUN_105a638dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (uVar1 < 0xf && (1L << (uVar1 & 0x3f) & 0x470fU) != 0) {
    func_0x00010be3cd60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a63938; end: 105a639db; -[SCSpectaclesHermosaOTAManager _setOTAUpdateAppState:] */

void FUN_105a63938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c071ae0(uVar2,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar3);
    func_0x00010c0d9840(uVar1,param_2,uVar3);
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010beb2960();
    if ((int)lVar4 != 0) {
      func_0x00010c266260(param_1);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c252d60();
    if (lVar4 != 7) {
      func_0x00010bddace0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a639dc; end: 105a63adb; -[SCSpectaclesHermosaOTAManager _shouldAutomaticallyResetWhenFailed] */

bool FUN_105a639dc(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar2 == 8) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfed8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc9a0();
    _objc_release(uVar3);
    bVar1 = puStack_38[3] - 6 < 4;
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 105a63adc; end: 105a63af3;  */

void FUN_105a63adc(void)

{
  return;
}



/* Entry: 105a63af4; end: 105a63b47; -[SCSpectaclesHermosaOTAManager _canRequestOTAUpdateFromCurrentOTAUpdateStatus] */

bool FUN_105a63af4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c252d60();
    if (lVar1 != 8) {
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x00010c252d60(lVar1);
      return lVar1 == 9;
    }
  }
  return true;
}



/* Entry: 105a63b48; end: 105a63bb3; -[SCSpectaclesHermosaOTAManager _didChangeOtaTag] */

uint FUN_105a63b48(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bdf7740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0 || lVar2 == 0) {
    uVar1 = (uint)((lVar2 != 0) != (lVar3 != 0));
  }
  else {
    func_0x00010c0720c0(lVar3,param_2,lVar2);
    uVar1 = (uint)lVar3 ^ 1;
  }
  _objc_release(lVar2);
  return uVar1;
}



/* Entry: 105a63bb4; end: 105a63c83; -[SCSpectaclesHermosaOTAManager _canRequestAvailabilityCheck] */

ulong FUN_105a63bb4(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf5fb60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11cbc0();
    _objc_release(lVar1);
    if (lVar2 != 1) {
      return 0;
    }
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     ((*(long *)(param_1 + 0x60) != 0 && (uVar3 = param_1, func_0x00010be3f920(), (uVar3 & 1) == 0))
     )) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (uVar3 == 0) {
      return 1;
    }
    func_0x00010c252d60();
    if (uVar3 < 10) {
      if ((1L << (uVar3 & 0x3f) & 0xeU) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didChangeOtaTag_11255cc10);
        return param_1;
      }
      return (ulong)((1L << (uVar3 & 0x3f) & 0x301U) != 0);
    }
  }
  return 0;
}



/* Entry: 105a63c84; end: 105a63cbb; -[SCSpectaclesHermosaOTAManager updatingOTA] */

uint FUN_105a63c84(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c252d60();
    uVar2 = 0;
    if (uVar1 < 0x10) {
      uVar2 = 0xa1f0 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  return uVar2 & 1;
}



/* Entry: 105a63cbc; end: 105a63dd3; -[SCSpectaclesHermosaOTAManager currentVersionString] */

void FUN_105a63cbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_105a63544;
    uStack_30 = 0x105a63554;
    uStack_28 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfed8e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc9a0();
    _objc_release(uVar2);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a63dd4; end: 105a63e0b;  */

void FUN_105a63dd4(long param_1,undefined8 param_2)

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



/* Entry: 105a63e0c; end: 105a63e13;  */

void FUN_105a63e0c(void)

{
  return;
}



/* Entry: 105a63e14; end: 105a63f2b; -[SCSpectaclesHermosaOTAManager updateAvailableVersionString] */

void FUN_105a63e14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c252d60();
  if (lVar1 == 2) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_105a63544;
    uStack_30 = 0x105a63554;
    uStack_28 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfed8e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc9a0();
    _objc_release(uVar2);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a63f2c; end: 105a63f63;  */

void FUN_105a63f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a63f64; end: 105a63f6b;  */

void FUN_105a63f64(void)

{
  return;
}



/* Entry: 105a63f6c; end: 105a6403b; -[SCSpectaclesHermosaOTAManager hasRequiredUpdate] */

undefined1 FUN_105a63f6c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfed8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc9a0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105a6403c; end: 105a6404b;  */

void FUN_105a6403c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_4;
  return;
}



/* Entry: 105a6404c; end: 105a6408f; -[SCSpectaclesHermosaOTAManager cancelUpdate] */

void FUN_105a6404c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf2e800(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a64090; end: 105a6414b; -[SCSpectaclesHermosaOTAManager _checkOTAUpdateAvailability] */

void FUN_105a64090(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  FUN_105a64f08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea5fc0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdf7740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b6718;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00(uVar3);
  func_0x00010beb3d20(param_1);
  func_0x00010bf382e0(puVar2,param_2,uVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar4,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a6414c; end: 105a641d7; -[SCSpectaclesHermosaOTAManager _installOTAUpdate:] */

void FUN_105a6414c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  FUN_105a64f58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea5fc0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0678e0(PTR_PTR_1126b6718,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a641d8; end: 105a641df; -[SCSpectaclesHermosaOTAManager autoUpdateManager] */

void FUN_105a641d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 105a641e0; end: 105a64223; -[SCSpectaclesHermosaOTAManager syncOTAAutoUpdateEnabledSettings] */

void FUN_105a641e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc8300(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a64224; end: 105a642c7; -[SCSpectaclesHermosaOTAManager setOTAAutoUpdateEnabled:] */

void FUN_105a64224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((uint)*(byte *)(param_1 + 0x48) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + 0x48) = (char)param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126c1a80;
  _objc_alloc(PTR_PTR_1126c1a80);
  func_0x00010c00f9c0();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c1d0400(PTR_PTR_1126b6718,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a642c8; end: 105a644c3; -[SCSpectaclesHermosaOTAManager handleResponse:] */

void FUN_105a642c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    func_0x00010be2e920(param_1,param_2,param_3);
  }
  else {
    lVar1 = param_3;
    func_0x00010c13bcc0();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar1 == 4) {
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar1 = param_3;
      func_0x00010c13bcc0(param_3);
      func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e195f8,lVar1,0);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if (lVar2 == 0x38) {
      lVar1 = param_3;
      func_0x00010c122240();
      func_0x00010bdff260(param_1,param_2,lVar1,puVar3);
    }
    else {
      lVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c27dd80();
      _objc_release(lVar1);
      if (lVar2 == 0x39) {
        lVar1 = param_3;
        func_0x00010c1222c0();
        func_0x00010bdff7c0(param_1,param_2,lVar1,puVar3);
      }
      else {
        lVar1 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c27dd80();
        _objc_release(lVar1);
        if (lVar2 == 0x56) {
          lVar1 = param_3;
          func_0x00010c0edce0();
          func_0x00010bdff780(param_1,param_2,lVar1,puVar3);
        }
        else {
          lVar1 = param_3;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c27dd80();
          _objc_release(lVar1);
          if (lVar2 == 0x55) {
            if (puVar3 == (undefined *)0x0) {
              func_0x00010c266240(param_1);
            }
            else {
              func_0x00010bdfdc20(param_1,param_2,puVar3);
            }
          }
          else {
            lVar1 = param_3;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010c27dd80();
            _objc_release(lVar1);
            if (lVar2 == 0x59) {
              func_0x00010bdfc560(param_1,param_2,puVar3);
            }
          }
        }
      }
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a644c4; end: 105a64577; -[SCSpectaclesHermosaOTAManager _handlePushMessage:] */

void FUN_105a644c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    lVar1 = param_3;
    func_0x00010c0edda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = param_3;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0edd80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) goto LAB_105a64564;
      func_0x00010c0edd80(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0edda0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bdff7a0(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
LAB_105a64564:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a64578; end: 105a6457f; -[SCSpectaclesHermosaOTAManager responseMonitorState] */

undefined8 FUN_105a64578(void)

{
  return 0;
}



/* Entry: 105a64580; end: 105a645eb; -[SCSpectaclesHermosaOTAManager _didReceiveCheckOTAUpdateAvailabilityRequest:error:] */

void FUN_105a64580(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c252d60();
    if (lVar1 == 1) {
      func_0x000105a64fe4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5fc0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a645ec; end: 105a64657; -[SCSpectaclesHermosaOTAManager _didReceiveOTAUpdateRequest:error:] */

void FUN_105a645ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c252d60();
    if (lVar1 == 4) {
      func_0x000105a64fe4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5fc0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a64658; end: 105a646f7; -[SCSpectaclesHermosaOTAManager _didReceiveOTAUpdateEvent:] */

void FUN_105a64658(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  if ((lVar1 == 3) || (lVar1 = param_3, func_0x00010c252d60(), lVar1 == 4)) {
    func_0x00010bed10a0(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252d60();
    if (lVar1 == 5) {
      func_0x00010be19180(param_1);
    }
  }
  lVar1 = param_3;
  FUN_105a64e3c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea5fc0(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a646f8; end: 105a6476f; -[SCSpectaclesHermosaOTAManager _didReceiveOTAAutoUpdateEnabledSettings:error:] */

void FUN_105a646f8(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0x48) = param_3;
  }
  puVar1 = PTR_PTR_1126c1a80;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c00f9c0();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a64770; end: 105a647ef; -[SCSpectaclesHermosaOTAManager _didFailToUpdateOTAAutoUpdateEnabledSettings:] */

void FUN_105a64770(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ 1;
  }
  puVar1 = PTR_PTR_1126c1a80;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00f9c0();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a647f0; end: 105a647fb; -[SCSpectaclesHermosaOTAManager _didCancelOTAUpdate:] */

void FUN_105a647f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restartOTASync_112582e78);
  return;
}



/* Entry: 105a647fc; end: 105a64987; -[SCSpectaclesHermosaOTAManager _handleConnectionState:] */

void FUN_105a647fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1ca20();
  if (lVar1 == 2) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c252d60();
    if (lVar1 == 0) {
      func_0x00010be95360(param_1);
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf1ca20();
    if (lVar1 == 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfed8e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc9a0();
      _objc_release(uVar2);
      if (*(char *)(puStack_48 + 3) == '\x01') {
        func_0x000105a64fe4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea5fc0(param_1);
        _objc_release(uVar2);
      }
      else {
        lVar1 = *(long *)(param_1 + 0x28);
        func_0x00010c252d60();
        if (lVar1 == 6) {
          func_0x000105a6500c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bea5fc0(param_1);
          _objc_release(lVar1);
          func_0x00010bec15c0(param_1);
        }
      }
      __Block_object_dispose(&uStack_50,8);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a64988; end: 105a64a0f;  */

void FUN_105a64988(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0776e0();
  if ((int)lVar4 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c252d60();
    bVar1 = param_2 < 99 && lVar4 == 6;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1;
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a64a10; end: 105a64a43; -[SCSpectaclesHermosaOTAManager _restartOTASync] */

void FUN_105a64a10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  func_0x00010bed10a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c266270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_syncOTAUpdateState_1126772c0);
  return;
}



/* Entry: 105a64a44; end: 105a64b57; -[SCSpectaclesHermosaOTAManager _startRestartTimer] */

void FUN_105a64a44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bddace0();
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a64af8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x43160000,"APPSTORE",*(undefined8 *)(param_1 + 0x50));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a64b58; end: 105a64b93; -[SCSpectaclesHermosaOTAManager _cancelRestartTimer] */

void FUN_105a64b58(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a64b94; end: 105a64b97; -[SCSpectaclesHermosaOTAManager tweakDidChange:] */

void FUN_105a64b94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_syncOTAUpdateState_1126772c0);
  return;
}



/* Entry: 105a64b98; end: 105a64c6f; -[SCSpectaclesHermosaOTAManager _freezeActivateDeviceForFirmwareUpdate] */

void FUN_105a64b98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef07c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar1 == lVar3) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a64c70;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105a64c70; end: 105a64cb3;  */

void FUN_105a64c70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfb76c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a64cb4; end: 105a64d7f; -[SCSpectaclesHermosaOTAManager _unfreezeActivateDevice] */

void FUN_105a64cb4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a64d3c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a64d80; end: 105a64d87; -[SCSpectaclesHermosaOTAManager stateObservable] */

undefined8 FUN_105a64d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a64d88; end: 105a64d8f; -[SCSpectaclesHermosaOTAManager autoUpdateSettingsObservable] */

undefined8 FUN_105a64d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a64d90; end: 105a64e3b; -[SCSpectaclesHermosaOTAManager .cxx_destruct] */

void FUN_105a64d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a64e3c; end: 105a64f07;  */

void FUN_105a64e3c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c252d60();
  if (uVar1 == 10) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_1);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c252d60();
      if (uVar1 < 0xe) {
        uVar3 = *(undefined8 *)(&UNK_10ddca098 + uVar1 * 8);
      }
      else {
        uVar3 = 2;
      }
    }
    _objc_release(param_1);
    puVar2 = PTR_PTR_1126c1a78;
    _objc_alloc(PTR_PTR_1126c1a78);
    uVar1 = param_1;
    func_0x00010bfed8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c2c0(puVar2,param_2,uVar3,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a64f08; end: 105a64f57;  */

void FUN_105a64f08(void)

{
  _objc_alloc(PTR_PTR_1126c1a78);
  func_0x00010c04c2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a64f58; end: 105a64fbb;  */

void FUN_105a64f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  puVar2 = PTR_PTR_1126c1a90;
  func_0x00010c117b20(PTR_PTR_1126c1a90,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c2c0(puVar1,param_2,4,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a64fbc; end: 105a6505b;  */

void FUN_105a64fbc(void)

{
  _objc_alloc(PTR_PTR_1126c1a78);
  func_0x00010c04c2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6505c; end: 105a6511f; -[SCSpectaclesLegacyOTAManager initWithDevice:firmwareManager:] */

undefined1 *
FUN_105a6505c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb790;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a65120; end: 105a65157; -[SCSpectaclesLegacyOTAManager syncOTAUpdateState] */

void FUN_105a65120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf38640(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a65158; end: 105a6518f; -[SCSpectaclesLegacyOTAManager updateOTA] */

void FUN_105a65158(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c251540(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a65190; end: 105a651cf; -[SCSpectaclesLegacyOTAManager currentVersionString] */

void FUN_105a65190(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010604e5c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a651d0; end: 105a65273; -[SCSpectaclesLegacyOTAManager updateAvailableVersionString] */

void FUN_105a651d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c283a00(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c285d00(uVar3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a65274; end: 105a652bf; -[SCSpectaclesLegacyOTAManager updatingOTA] */

bool FUN_105a65274(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252580(lVar1,param_2,param_1);
  _objc_release(param_1);
  return lVar1 - 2U < 3;
}



/* Entry: 105a652c0; end: 105a65303; -[SCSpectaclesLegacyOTAManager hasRequiredUpdate] */

undefined8 FUN_105a652c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2894e0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a65304; end: 105a6530b; -[SCSpectaclesLegacyOTAManager autoUpdateManager] */

undefined8 FUN_105a65304(void)

{
  return 0;
}



/* Entry: 105a6530c; end: 105a6532f; -[SCSpectaclesLegacyOTAManager _statusFromUpdateState:] */

undefined8 FUN_105a6530c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10ddca108 + (param_3 - 1U) * 8);
  }
  return 3;
}



/* Entry: 105a65330; end: 105a65353; -[SCSpectaclesLegacyOTAManager _errorFromUpdateEvent:] */

undefined8 FUN_105a65330(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10ddca128 + (param_3 - 1U) * 8);
  }
  return 5;
}



/* Entry: 105a65354; end: 105a65373; -[SCSpectaclesLegacyOTAManager _errorFromFailFromState:] */

undefined8 FUN_105a65354(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 10;
  if (param_3 != 2) {
    uVar1 = 5;
  }
  uVar2 = 0xb;
  if (param_3 != 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 105a65374; end: 105a653df; -[SCSpectaclesLegacyOTAManager _setStateFromStatus:info:] */

void FUN_105a65374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1a78;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c04c2c0();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 105a653e0; end: 105a65483; -[SCSpectaclesLegacyOTAManager spectaclesOnFirmwareUpdateForDevice:changedState:progress:] */

void FUN_105a653e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 == lVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c288dc0(uVar2,param_2,param_3);
    lVar1 = param_1;
    func_0x00010bec27c0(param_1,param_2,param_4);
    puVar3 = PTR_PTR_1126c1a90;
    func_0x00010c117b20(PTR_PTR_1126c1a90,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7ea0(param_1,param_2,lVar1,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a65484; end: 105a65527; -[SCSpectaclesLegacyOTAManager spectaclesOnFirmwareUpdateForDevice:failedFromState:] */

void FUN_105a65484(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 != lVar1) {
    return;
  }
  lVar1 = param_1;
  func_0x00010be0af60(param_1,param_2,param_4);
  puVar2 = PTR_PTR_1126c1a90;
  func_0x00010bf99320(PTR_PTR_1126c1a90,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7ea0(param_1,param_2,8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a65528; end: 105a65653; -[SCSpectaclesLegacyOTAManager spectaclesOnFirmwareUpdateEvent:device:] */

void FUN_105a65528(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  puVar4 = PTR_PTR_1126c1a90;
  if (param_4 == lVar1) {
    uVar5 = 3;
    puVar6 = (undefined *)0x0;
    if (param_3 < 2) {
      if (param_3 != 0) {
        lVar1 = param_1;
        func_0x00010bf60ae0(param_1,param_2,3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010c283a60(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bfdb320(param_1);
        func_0x00010bf12580(puVar4,param_2,lVar1,lVar2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(lVar1);
        uVar5 = 2;
        puVar6 = puVar4;
      }
    }
    else if (param_3 - 2U < 3) {
      lVar1 = param_1;
      func_0x00010be0afc0(param_1,param_2,param_3);
      func_0x00010bf99320(puVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 8;
      puVar6 = puVar4;
    }
    func_0x00010bea7ea0(param_1,param_2,uVar5,puVar6);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a65654; end: 105a6565b; -[SCSpectaclesLegacyOTAManager stateObservable] */

undefined8 FUN_105a65654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a6565c; end: 105a6569f; -[SCSpectaclesLegacyOTAManager .cxx_destruct] */

void FUN_105a6565c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a656a0; end: 105a65713; -[SCSpectaclesOTAContentDeliveryDownloader initWithContentDelivery:] */

undefined1 * FUN_105a656a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb798;
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



/* Entry: 105a65714; end: 105a65977; -[SCSpectaclesOTAContentDeliveryDownloader downloadFileForURLString:cacheKey:userInitiated:onProgress:onError:completion:] */

void FUN_105a65714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010bdf05c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be1b0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bde7d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR_PTR_1126b2798;
  _objc_alloc_init();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  uStack_70 = param_5;
  _objc_retain(puVar4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c126160(uVar5);
  _objc_release(uVar5);
  _objc_retain(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a65978; end: 105a659d7;  */

void FUN_105a65978(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105a659d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1,0);
  return;
}



/* Entry: 105a659d8; end: 105a65a93; -[SCSpectaclesOTAContentDeliveryDownloader retrieveFileResultForCacheKey:completion:] */

void FUN_105a659d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde7d80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde7f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13e560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105a65a94; end: 105a65c2f; -[SCSpectaclesOTAContentDeliveryDownloader _downloadAndMonitorForCacheKey:userInitiated:cancelableGroup:onProgress:onError:completion:] */

void FUN_105a65a94(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bde7d80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    lVar2 = param_1;
    func_0x00010bdcfc20(param_1,param_2,lVar1,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(param_5,param_2,lVar2);
    _objc_release(param_5);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105a65c30;
    puStack_60 = &UNK_110860410;
    _objc_retain(param_8);
    lVar2 = param_1;
    lStack_58 = param_8;
    func_0x00010c13e840(param_1,param_2,param_3,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(param_5,param_2,lVar2);
    _objc_release(param_5);
    _objc_release(lVar2);
    lVar2 = lStack_58;
  }
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0c20();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 105a65c30; end: 105a65c9f;  */

void FUN_105a65c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfcaaa0(param_2);
  uVar2 = param_2;
  func_0x00010bfc79a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a65ca0; end: 105a65d87; -[SCSpectaclesOTAContentDeliveryDownloader _associateRequestForContentKey:completion:] */

void FUN_105a65ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126b1378;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c46a0(param_3);
  lVar2 = param_1;
  func_0x00010bde7f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1080e0(puVar3,param_2,uVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf0bda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a65d88; end: 105a65e4f; -[SCSpectaclesOTAContentDeliveryDownloader _createNativeUrlRequestWithURL:cacheKey:] */

void FUN_105a65d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1058;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01b360();
  puVar2 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a65e50; end: 105a65e77; -[SCSpectaclesOTAContentDeliveryDownloader _contentPageInfo] */

void FUN_105a65e50(void)

{
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a65e78; end: 105a65ec7; -[SCSpectaclesOTAContentDeliveryDownloader _contentKeyForCacheKey:] */

void FUN_105a65e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


