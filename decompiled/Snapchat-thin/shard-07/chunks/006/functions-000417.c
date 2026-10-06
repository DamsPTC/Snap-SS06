/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057a4778; end: 1057a4813; -[SCScreenshopServiceProvider _createLazyPersistenceService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057a4778(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126be320;
  _objc_alloc(PTR_PTR_1126be320);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127296e8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf87660(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a4814; end: 1057a495f; -[SCScreenshopServiceProvider _createLazyModelService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057a4814(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126be328;
  _objc_alloc(PTR_PTR_1126be328);
  lVar2 = param_1;
  FUN_1057a4960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127296fc;
    _objc_loadWeakRetained(lVar9);
  }
  lVar5 = lVar9;
  func_0x00010c0d0060(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112729700;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010bf07a00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffff60(puVar1,param_2,lVar4,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a4960; end: 1057a4983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057a4960(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127296f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057a4984; end: 1057a4bb7; -[SCScreenshopServiceProvider _createLazyScreenshopNetworkService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057a4984(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126be330;
  _objc_alloc(PTR_PTR_1126be330);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127296ec;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127296f4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_1057a4960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127296f0;
    _objc_loadWeakRetained(lVar15);
  }
  lVar9 = lVar15;
  func_0x00010bf534e0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112729704;
    _objc_loadWeakRetained(param_1);
  }
  lVar11 = param_1;
  func_0x00010bfcfa80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018620(puVar1,param_2,lVar3,lVar5,lVar8,lVar10,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a4bb8; end: 1057a4c43; -[SCScreenshopServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057a4bb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729704);
  _objc_destroyWeak(param_1 + _DAT_112729700);
  _objc_destroyWeak(param_1 + _DAT_1127296fc);
  _objc_destroyWeak(param_1 + _DAT_1127296f8);
  _objc_destroyWeak(param_1 + _DAT_1127296f4);
  _objc_destroyWeak(param_1 + _DAT_1127296f0);
  _objc_destroyWeak(param_1 + _DAT_1127296ec);
  _objc_destroyWeak(param_1 + _DAT_1127296e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127296e4);
  return;
}



/* Entry: 1057a4c44; end: 1057a4d7f; -[SCScreenshopModelServiceImpl initWithCommerceConfigProvider:mlModelProvider:applicationLifecycleEvents:] */

undefined1 *
FUN_1057a4c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ea380;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    func_0x00010bec09c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057a4d80; end: 1057a4dc3; -[SCScreenshopModelServiceImpl fashionThreshold] */

undefined8 FUN_1057a4d80(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee80a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0c60();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1057a4dc4; end: 1057a4ec3; -[SCScreenshopModelServiceImpl checkForFashionWithImage:completion:] */

void FUN_1057a4dc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057a4ec4; end: 1057a4ef7;  */

void FUN_1057a4ec4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a4ef8; end: 1057a4f2f; -[SCScreenshopModelServiceImpl getDownloadModelLatency] */

void FUN_1057a4ef8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057a4f30; end: 1057a4f43; -[SCScreenshopModelServiceImpl getDownloadModelStatus] */

undefined8 FUN_1057a4f30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 2;
  return uVar1;
}



/* Entry: 1057a4f44; end: 1057a5033; -[SCScreenshopModelServiceImpl _paddedImageFromImage:scaledToSize:] */

void FUN_1057a4f44(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = param_1;
  _objc_retain(param_5);
  func_0x00010c2a5120(param_5);
  dVar6 = dVar5;
  func_0x00010bfe0900(param_5);
  dVar7 = (dVar6 - dVar5) * 0.5;
  dVar1 = 0.0;
  if (dVar6 <= dVar5) {
    dVar7 = 0.0;
    dVar1 = (dVar5 - dVar6) * 0.5;
  }
  uVar2 = param_5;
  func_0x00010bfe96a0(dVar1,dVar7,dVar1,dVar7,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c14e6a0(param_1,param_2,uVar2,param_4,1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1057a5034; end: 1057a5417; -[SCScreenshopModelServiceImpl _checkForFashionWithImage:completion:] */

void FUN_1057a5034(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bdd99e0();
  if ((param_4 == 0) || ((int)puVar1 == 0)) goto LAB_1057a53c8;
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(0,param_4,0,0);
    goto LAB_1057a53c8;
  }
  func_0x00010be98700(param_1);
  puVar1 = param_1;
  func_0x00010bee80a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0cff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(param_4 + 0x10))(0,param_4,0,0);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    if (uVar4 == 0) {
LAB_1057a5128:
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 != 0) {
        puVar3 = puVar1;
        func_0x00010c0cff80(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d0160();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar12;
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf04b00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfe70c0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        *(long *)(param_1 + 0x20) = lVar7;
        _objc_release(uVar11);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar12);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        *(undefined **)(param_1 + 0x48) = puVar3;
        _objc_release(uVar11);
        _objc_release(puVar8);
        *(ulong *)(param_1 + 0x50) = (ulong)(*(long *)(param_1 + 0x20) == 0);
        _objc_release(puVar2);
        goto LAB_1057a523c;
      }
LAB_1057a5384:
      (**(code **)(param_4 + 0x10))(0,param_4,0,0);
    }
    else {
      func_0x00010c0cff80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0cff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      _objc_release(uVar4);
      if ((uVar9 & 1) == 0) goto LAB_1057a5128;
LAB_1057a523c:
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bfe91a0(uVar4);
      uVar9 = *(ulong *)(param_1 + 0x20);
      func_0x00010bfe7e00(uVar9);
      puVar2 = param_1;
      func_0x00010be6ef80((double)uVar4,(double)uVar9);
      _objc_retainAutoreleasedReturnValue();
      if ((puVar2 == (undefined *)0x0) || (lVar12 = *(long *)(param_1 + 0x20), lVar12 == 0))
      goto LAB_1057a5384;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c106460(lVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_retain(param_4);
      _objc_retain(param_4);
      _objc_retain(puVar1);
      func_0x00010c0bf0a0(lVar12);
      func_0x00010bec05a0(param_1);
      _objc_release(puVar1);
      _objc_release(param_4);
      _objc_release(param_4);
      _objc_release(lVar12);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_1057a53c8:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001057a542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(0,*(long *)(param_3 + 0x20),0,0);
  return;
}



/* Entry: 1057a5418; end: 1057a542f;  */

void FUN_1057a5418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057a542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(0,*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1057a5430; end: 1057a54ef;  */

void FUN_1057a5430(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    pcVar3 = *(code **)(lVar4 + 0x10);
    param_1 = 0;
    bVar2 = false;
  }
  else {
    func_0x00010bfb2c80(lVar1);
    uVar6 = param_1;
    func_0x00010bfb2c80(lVar1);
    fVar5 = (float)uVar6;
    func_0x00010bfa0c60(*(undefined8 *)(param_2 + 0x20));
    bVar2 = (float)uVar6 <= fVar5;
    pcVar3 = *(code **)(lVar4 + 0x10);
  }
  (*pcVar3)(param_1,lVar4,bVar2,lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057a54f0; end: 1057a551b; -[SCScreenshopModelServiceImpl _destroyModelExpirationTimer] */

void FUN_1057a54f0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a551c; end: 1057a55cf; -[SCScreenshopModelServiceImpl _safelyDestroyModelExpirationTimer] */

void FUN_1057a551c(undefined8 param_1)

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
  uStack_40 = 0x1057a55a4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057a55d0; end: 1057a5683; -[SCScreenshopModelServiceImpl _startModelExpirationTimer] */

void FUN_1057a55d0(undefined8 param_1)

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
  uStack_40 = 0x1057a5658;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057a5684; end: 1057a577b; -[SCScreenshopModelServiceImpl _createModelExpirationTimer] */

void FUN_1057a5684(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x28));
  _objc_initWeak(auStack_48,param_2);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c151700(*(undefined8 *)(param_2 + 0x18));
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1057a577c; end: 1057a57a7;  */

void FUN_1057a577c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a57a8; end: 1057a58af; -[SCScreenshopModelServiceImpl _startObservingAppLifecycle] */

void FUN_1057a57a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf79200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057a58b0; end: 1057a58db;  */

void FUN_1057a58b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a58dc; end: 1057a5987; -[SCScreenshopModelServiceImpl _respondToModelExpirationTimer] */

void FUN_1057a58dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010be98700();
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057a5988; end: 1057a59b3;  */

void FUN_1057a5988(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a59b4; end: 1057a5a5f; -[SCScreenshopModelServiceImpl _respondToMemoryWarning] */

void FUN_1057a59b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010be98700();
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057a5a60; end: 1057a5a8b;  */

void FUN_1057a5a60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a5a8c; end: 1057a5a9b; -[SCScreenshopModelServiceImpl _finishModelExpirationTimerExecution] */

void FUN_1057a5a8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a5a9c; end: 1057a5ae3; -[SCScreenshopModelServiceImpl _finishMemoryWarning] */

void FUN_1057a5a9c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a5ae4; end: 1057a5b6b; -[SCScreenshopModelServiceImpl _canContinueProcessing] */

bool FUN_1057a5ae4(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*(long *)(param_2 + 0x40) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar3 = param_1;
    _objc_release(puVar1);
    func_0x00010c151720(*(undefined8 *)(param_2 + 0x18));
    if (dVar3 <= param_1) {
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = 0;
      _objc_release(uVar2);
    }
    return dVar3 <= param_1;
  }
  return true;
}



/* Entry: 1057a5b6c; end: 1057a5c17; -[SCScreenshopModelServiceImpl _vendFashionModelInfo] */

void FUN_1057a5b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c1516a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be338;
  _objc_alloc(PTR_PTR_1126be338);
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c008360(puVar3,param_2,uVar4,&lStack_38);
  lVar1 = lStack_38;
  _objc_release(uVar4);
  puVar5 = (undefined *)0x0;
  if (lVar1 == 0) {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057a5c18; end: 1057a5c9b; -[SCScreenshopModelServiceImpl .cxx_destruct] */

void FUN_1057a5c18(long param_1)

{
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



/* Entry: 1057a5c9c; end: 1057a5ea3; -[SCPSSShoppableCategoriesResponse categoryResultWithModelVersion:] */

void FUN_1057a5c9c(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07de00();
  if ((uVar1 & 1) == 0) {
    puVar5 = PTR_PTR_1126be340;
    _objc_alloc(PTR_PTR_1126be340);
    func_0x00010c045d20();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar1 = param_1;
    func_0x00010bf330c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1057a5ea4;
    puStack_78 = &UNK_1108b1c48;
    puStack_70 = puVar2;
    uStack_68 = param_1;
    _objc_retain(puVar2);
    func_0x00010bf980c0(uVar1,param_2,&puStack_90);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf416e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar5;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1057a5ee4;
    puStack_a8 = &UNK_1108b1c48;
    puStack_a0 = puVar3;
    uStack_98 = param_1;
    _objc_retain(puVar3);
    func_0x00010bf980c0(uVar1,param_2,&puStack_c0);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0f5b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar5;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1057a5f24;
    puStack_d8 = &UNK_1108b1c48;
    puStack_d0 = puVar4;
    uStack_c8 = param_1;
    _objc_retain(puVar4);
    func_0x00010bf980c0(uVar1,param_2,&puStack_f0);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126be340;
    _objc_alloc(PTR_PTR_1126be340);
    func_0x00010c045d20();
    _objc_release(param_3);
    _objc_release(puStack_d0);
    _objc_release(puStack_a0);
    _objc_release(puStack_70);
    _objc_release(puVar4);
    _objc_release(puVar3);
    param_3 = puVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057a5ea4; end: 1057a5f63;  */

void FUN_1057a5ea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bec5560(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1057a5f64; end: 1057a601b; -[SCPSSShoppableCategoriesResponse _stringForCategory:] */

void FUN_1057a5f64(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  ppuVar1 = &PTR_PTR_1108b1d40;
  switch(param_3) {
  case 1:
    break;
  case 2:
    ppuVar1 = &PTR_PTR_1108b1d48;
    break;
  case 3:
    ppuVar1 = &PTR_PTR_1108b1d50;
    break;
  case 4:
    ppuVar1 = &PTR_PTR_1108b1d58;
    break;
  case 5:
    ppuVar1 = &PTR_PTR_1108b1d60;
    break;
  case 6:
    ppuVar1 = &PTR_PTR_1108b1d68;
    break;
  case 7:
    ppuVar1 = &PTR_PTR_1108b1d70;
    break;
  case 8:
    ppuVar1 = &PTR_PTR_1108b1d78;
    break;
  case 9:
    ppuVar1 = &PTR_PTR_1108b1d80;
    break;
  case 10:
    ppuVar1 = &PTR_PTR_1108b1d88;
    break;
  default:
    if (param_3 != -0x4524111) goto LAB_1057a600c;
  case 0:
    ppuVar1 = &PTR_PTR_1108b1d38;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_1057a600c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1057a601c; end: 1057a60fb; -[SCPSSShoppableCategoriesResponse _stringForColor:] */

void FUN_1057a601c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  ppuVar1 = &PTR_PTR_1108b1d98;
  switch(param_3) {
  case 1:
    break;
  case 2:
    ppuVar1 = &PTR_PTR_1108b1da0;
    break;
  case 3:
    ppuVar1 = &PTR_PTR_1108b1da8;
    break;
  case 4:
    ppuVar1 = &PTR_PTR_1108b1db0;
    break;
  case 5:
    ppuVar1 = &PTR_PTR_1108b1db8;
    break;
  case 6:
    ppuVar1 = &PTR_PTR_1108b1dc0;
    break;
  case 7:
    ppuVar1 = &PTR_PTR_1108b1dc8;
    break;
  case 8:
    ppuVar1 = &PTR_PTR_1108b1dd0;
    break;
  case 9:
    ppuVar1 = &PTR_PTR_1108b1dd8;
    break;
  case 10:
    ppuVar1 = &PTR_PTR_1108b1de0;
    break;
  case 0xb:
    ppuVar1 = &PTR_PTR_1108b1de8;
    break;
  case 0xc:
    ppuVar1 = &PTR_PTR_1108b1df0;
    break;
  case 0xd:
    ppuVar1 = &PTR_PTR_1108b1df8;
    break;
  case 0xe:
    ppuVar1 = &PTR_PTR_1108b1e00;
    break;
  case 0xf:
    ppuVar1 = &PTR_PTR_1108b1e08;
    break;
  default:
    if (param_3 != -0x4524111) goto LAB_1057a60ec;
  case 0:
    ppuVar1 = &PTR_PTR_1108b1d90;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_1057a60ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1057a60fc; end: 1057a61df; -[SCPSSShoppableCategoriesResponse _stringForPattern:] */

void FUN_1057a60fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  if (param_3 < 4) {
    if (param_3 < 1) {
      if ((param_3 != -0x4524111) && (param_3 != 0)) goto LAB_1057a61d0;
      ppuVar1 = &PTR_PTR_1108b1e10;
    }
    else if (param_3 == 1) {
      ppuVar1 = &PTR_PTR_1108b1e18;
    }
    else if (param_3 == 2) {
      ppuVar1 = &PTR_PTR_1108b1e20;
    }
    else {
      if (param_3 != 3) goto LAB_1057a61d0;
      ppuVar1 = &PTR_PTR_1108b1e28;
    }
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      ppuVar1 = &PTR_PTR_1108b1e30;
    }
    else {
      if (param_3 != 5) goto LAB_1057a61d0;
      ppuVar1 = &PTR_PTR_1108b1e38;
    }
  }
  else if (param_3 == 6) {
    ppuVar1 = &PTR_PTR_1108b1e40;
  }
  else if (param_3 == 7) {
    ppuVar1 = &PTR_PTR_1108b1e48;
  }
  else {
    if (param_3 != 8) goto LAB_1057a61d0;
    ppuVar1 = &PTR_PTR_1108b1e50;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_1057a61d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1057a61e0; end: 1057a628f;  */

void FUN_1057a61e0(double param_1,float param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1;
  func_0x00010bfe0900();
  dVar3 = (double)SUB84(param_1,0);
  if (dVar2 <= dVar3) {
    _UIImageJPEGRepresentation((double)param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2a5120(param_3);
    dVar4 = dVar2 * dVar3;
    func_0x00010bfe0900(param_3);
    func_0x00010c14e280(dVar4 / dVar2,dVar3,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    _UIImageJPEGRepresentation((double)param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1057a6290; end: 1057a63b3; -[SCScreenshopNetworkServiceImpl initWithGrapheneRegistry:grpcClientFactory:commerceConfigProvider:countryCodeProvider:grpcComposerFactory:] */

undefined1 *
FUN_1057a6290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ea388;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = 0x43f00000;
    func_0x00010bdee120(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057a63b4; end: 1057a64f3; -[SCScreenshopNetworkServiceImpl categorizeImages:completion:completionQueue:] */

void FUN_1057a63b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057a64f4;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1057a64f4; end: 1057a652b;  */

void FUN_1057a64f4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddbec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a652c; end: 1057a679b; -[SCScreenshopNetworkServiceImpl _createGRPCServiceWithFactory:grpcComposerFactory:] */

void FUN_1057a652c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c151740();
  if (iVar1 != 2) {
    func_0x00010c1ebf80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar3);
  _objc_release(puVar4);
  uVar5 = param_4;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar6);
  uVar5 = param_3;
  func_0x00010bf56360(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126be348;
  _objc_alloc();
  func_0x00010c058f80();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar4;
  _objc_release(uVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057a679c;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010007380c(uVar6,&puStack_80);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057a679c; end: 1057a67c7;  */

void FUN_1057a679c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a67c8; end: 1057a68a3; -[SCScreenshopNetworkServiceImpl _getGRPCCallOptionsBuilder] */

void FUN_1057a67c8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_2 + 0x20);
  func_0x00010c151740();
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar2;
  func_0x00010c22cc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126be350;
    _objc_alloc_init();
    _objc_initWeak(auStack_88,puVar2);
    _CACurrentMediaTime();
    puVar3 = puVar2;
    func_0x00010c0f7ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1f620(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_88);
    _objc_retain(puVar1);
    uStack_90 = param_1;
    func_0x00010c22cc40(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1057a68a4; end: 1057a69ef; -[SCScreenshopNetworkServiceImpl _fetchShoppabilityVersion] */

void FUN_1057a68a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_2;
  func_0x00010c22cc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126be350;
    _objc_alloc_init();
    _objc_initWeak(auStack_48,param_2);
    _CACurrentMediaTime();
    lVar1 = param_2;
    func_0x00010c0f7ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1f620(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(puVar2);
    uStack_50 = param_1;
    func_0x00010c22cc40(lVar1);
    _objc_release(param_2);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1057a69f0; end: 1057a6a5f;  */

void FUN_1057a69f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be82360(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057a6a60; end: 1057a6aff; -[SCScreenshopNetworkServiceImpl _processShoppabilityVersionResponse:request:startTimestamp:error:] */

void FUN_1057a6a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010be5a740(param_1,param_2,param_3,param_5,param_4,param_6);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_6 == 0) {
    uVar1 = param_4;
    func_0x00010c298be0(param_4);
    func_0x00010c0df820(puVar2,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff800(param_2,param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a6b00; end: 1057a6d5b; -[SCScreenshopNetworkServiceImpl _categorizeImages:completion:completionQueue:] */

void FUN_1057a6b00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057a6d5c;
  puStack_70 = &UNK_1108b1ca8;
  uVar1 = param_4;
  lStack_68 = param_2;
  func_0x000100504554(param_4,&puStack_88);
  puVar2 = PTR_PTR_1126be358;
  _objc_alloc_init();
  uVar3 = uVar1;
  func_0x00010c0d3c80(uVar1);
  func_0x00010c1aad20(puVar2);
  _objc_release(uVar3);
  lVar4 = param_2;
  func_0x00010c22cc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_2;
    func_0x00010c22cc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    func_0x00010c1ff800(puVar2);
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_90,param_2);
  _CACurrentMediaTime();
  lVar4 = param_2;
  func_0x00010c0f7ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1f620(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_90);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  uStack_98 = param_1;
  _objc_retain(param_4);
  func_0x00010c22cd80(lVar4);
  _objc_release(param_2);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057a6d5c; end: 1057a6dd7;  */

void FUN_1057a6d5c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf331e0(uVar1);
  uVar2 = param_1;
  func_0x00010c1516c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
  uVar1 = param_3;
  func_0x00010bf64ba0(param_1,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a6dd8; end: 1057a6e7f;  */

void FUN_1057a6dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be0b880(uVar2,lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057a6e80; end: 1057a6ffb; -[SCScreenshopNetworkServiceImpl _executeCategoryCompletion:completionQueue:request:response:startTimestamp:expectedResponseCount:error:] */

void FUN_1057a6e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010be57c60(param_1,param_2);
  uVar2 = param_7;
  func_0x00010c22cc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057a6ffc;
  puStack_70 = &UNK_1108b1d08;
  uVar3 = uVar2;
  uStack_68 = param_2;
  func_0x000100504554(uVar2,&puStack_88);
  _objc_release(uVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1057a706c;
  puStack_b0 = &UNK_110845188;
  uStack_a8 = uVar3;
  uStack_a0 = param_9;
  uStack_98 = param_4;
  uStack_90 = param_8;
  _objc_retain(param_9);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  func_0x00010007380c(param_5,&puStack_c8);
  _objc_release(param_5);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_4);
  return;
}



/* Entry: 1057a6ffc; end: 1057a70c3;  */

void FUN_1057a6ffc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c22cc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf335c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a70c4; end: 1057a710b; -[SCScreenshopNetworkServiceImpl _metricErrorFromResponse:responseLength:grpcError:] */

void FUN_1057a70c4(void)

{
  long in_x4;
  
  if (in_x4 != 0) {
    func_0x00010c09e4e0(in_x4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057a710c; end: 1057a7267; -[SCScreenshopNetworkServiceImpl _logVersionMetricWithRequest:response:startTimestamp:grpcError:] */

void FUN_1057a710c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bfcdf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf534e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar4 = param_4;
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  uVar5 = param_5;
  func_0x00010c15ebe0(param_5);
  uVar6 = param_5;
  func_0x00010c15ebe0(param_5);
  func_0x00010be60380(param_2,param_3,param_5,uVar6,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c0a7120(uVar1,param_3,0x10,0,uVar3,(long)((dVar7 - param_1) * 1000.0),uVar4,uVar5,
                      param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a7268; end: 1057a73c3; -[SCScreenshopNetworkServiceImpl _logContextMetricWithRequest:response:startTimestamp:grpcError:] */

void FUN_1057a7268(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bfcdf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf534e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar4 = param_4;
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  uVar5 = param_5;
  func_0x00010c15ebe0(param_5);
  uVar6 = param_5;
  func_0x00010c15ebe0(param_5);
  func_0x00010be60380(param_2,param_3,param_5,uVar6,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c0a7120(uVar1,param_3,0xf,0,uVar3,(long)((dVar7 - param_1) * 1000.0),uVar4,uVar5,
                      param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a73c4; end: 1057a751f; -[SCScreenshopNetworkServiceImpl _logRequestMetricWithRequest:response:startTimestamp:grpcError:] */

void FUN_1057a73c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bfcdf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf534e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar4 = param_4;
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  uVar5 = param_5;
  func_0x00010c15ebe0(param_5);
  uVar6 = param_5;
  func_0x00010c15ebe0(param_5);
  func_0x00010be60380(param_2,param_3,param_5,uVar6,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c0a7120(uVar1,param_3,0x11,0,uVar3,(long)((dVar7 - param_1) * 1000.0),uVar4,uVar5,
                      param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a7520; end: 1057a7527; -[SCScreenshopNetworkServiceImpl categorizationMaxHeight] */

undefined4 FUN_1057a7520(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1057a7528; end: 1057a752f; -[SCScreenshopNetworkServiceImpl screenshopComposerGrpcService] */

undefined8 FUN_1057a7528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057a7530; end: 1057a7537; -[SCScreenshopNetworkServiceImpl shoppabilityVersion] */

undefined8 FUN_1057a7530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057a7538; end: 1057a7567; -[SCScreenshopNetworkServiceImpl setShoppabilityVersion:] */

void FUN_1057a7538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a7568; end: 1057a756f; -[SCScreenshopNetworkServiceImpl commerceConfigProvider] */

undefined8 FUN_1057a7568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057a7570; end: 1057a759f; -[SCScreenshopNetworkServiceImpl setCommerceConfigProvider:] */

void FUN_1057a7570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a75a0; end: 1057a75a7; -[SCScreenshopNetworkServiceImpl grapheneNetworkLogger] */

undefined8 FUN_1057a75a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057a75a8; end: 1057a75d7; -[SCScreenshopNetworkServiceImpl setGrapheneNetworkLogger:] */

void FUN_1057a75a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a75d8; end: 1057a75df; -[SCScreenshopNetworkServiceImpl countryCodeProvider] */

undefined8 FUN_1057a75d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1057a75e0; end: 1057a760f; -[SCScreenshopNetworkServiceImpl setCountryCodeProvider:] */

void FUN_1057a75e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a7610; end: 1057a7617; -[SCScreenshopNetworkServiceImpl perceptionScreenshopService] */

undefined8 FUN_1057a7610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057a7618; end: 1057a7647; -[SCScreenshopNetworkServiceImpl setPerceptionScreenshopService:] */

void FUN_1057a7618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a7648; end: 1057a76a7; -[SCScreenshopNetworkServiceImpl .cxx_destruct] */

void FUN_1057a7648(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1057a76a8; end: 1057a771b; -[UNISCPSSScreenshopService initWithUnifiedGrpcService:] */

undefined1 * FUN_1057a76a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea390;
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



/* Entry: 1057a771c; end: 1057a77ff; -[UNISCPSSScreenshopService showcaseWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a771c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be360;
  _objc_opt_class(PTR_PTR_1126be360);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01b38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a7800; end: 1057a78e3; -[UNISCPSSScreenshopService shoppableWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a7800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be368;
  _objc_opt_class(PTR_PTR_1126be368);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01b58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a78e4; end: 1057a79c7; -[UNISCPSSScreenshopService shoppabilityVersionWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a78e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be370;
  _objc_opt_class(PTR_PTR_1126be370);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01b78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a79c8; end: 1057a79d3; -[UNISCPSSScreenshopService .cxx_destruct] */

void FUN_1057a79c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057a79d4; end: 1057a7a57; -[SCScreenshopPersistenceServiceImpl initWithDocObjectContext:] */

undefined1 * FUN_1057a79d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126be378;
    _objc_alloc();
    func_0x00010c00d820();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057a7a58; end: 1057a7bd3; -[SCScreenshopPersistenceServiceImpl storeAssetWithAssetId:tapped:localSimilarityScore:modelVersion:shoppable:categories:colors:patterns:categorized:completion:] */

void FUN_1057a7a58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  long param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126be380;
  if (param_13 != 0) {
    uVar3 = param_1;
    _objc_retain(param_13);
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar2 = param_6;
    func_0x00010c282760();
    _objc_release(param_6);
    func_0x00010c0268a0(uVar3,param_1,puVar1,param_3,param_4,param_5,param_8,param_9,param_10,
                        param_11,(int)uVar2,param_7);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_4);
    func_0x00010c2574c0(*(undefined8 *)(param_2 + 8),param_3,puVar1,param_13);
    _objc_release(param_13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1057a7bd4; end: 1057a7dab; -[SCScreenshopPersistenceServiceImpl updateAssetWithAssetId:shoppable:categories:colors:patterns:modelVersion:completion:] */

void FUN_1057a7bd4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_10 != 0) {
    func_0x00010bf51e00();
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010be52b00(param_2,param_3,param_4,&PTR____CFConstantStringClassReference_110e01fb8,
                          param_10);
    }
    else {
      lVar1 = *(long *)(param_2 + 8);
      func_0x00010bf0b460(lVar1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        func_0x00010c2574e0(0,param_2,param_3,param_4,0,param_9,param_5,param_6,param_7,param_8,1);
      }
      else {
        puVar2 = PTR_PTR_1126be380;
        _objc_alloc();
        func_0x00010bf604c0(PTR_PTR_1126afec0);
        lVar3 = lVar1;
        uVar5 = param_1;
        func_0x00010c269a80(lVar1);
        func_0x00010c09dee0(lVar1);
        uVar4 = param_9;
        func_0x00010c282760();
        func_0x00010c0268a0(param_1,uVar5,puVar2,param_3,param_4,lVar3,param_6,param_7,param_8,1,
                            (int)uVar4);
        func_0x00010c2574c0(*(undefined8 *)(param_2 + 8),param_3,puVar2,param_10);
        _objc_release(puVar2);
      }
      _objc_release(lVar1);
    }
    _objc_release(param_4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1057a7dac; end: 1057a7db3; -[SCScreenshopPersistenceServiceImpl getMetadataForAssetId:] */

void FUN_1057a7dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_assetMetadataForId__1125a06c0);
  return;
}



/* Entry: 1057a7db4; end: 1057a7dbb; -[SCScreenshopPersistenceServiceImpl fetchFashionAssetMetadata] */

void FUN_1057a7db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchAssetMetadataForFashion_1125c6da0);
  return;
}



/* Entry: 1057a7dbc; end: 1057a7dc3; -[SCScreenshopPersistenceServiceImpl fetchNonFashionAssetMetadata] */

void FUN_1057a7dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchAssetMetadataForNonFashion_1125c6da8);
  return;
}



/* Entry: 1057a7dc4; end: 1057a7e07; -[SCScreenshopPersistenceServiceImpl fetchUnprocessedFashionAssetMetadata] */

void FUN_1057a7dc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa6a40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a7e08; end: 1057a7e23;  */

uint FUN_1057a7e08(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf33220(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1057a7e24; end: 1057a7edf; -[SCScreenshopPersistenceServiceImpl fetchUnprocessedFashionAndShoppableAssetMetadata] */

void FUN_1057a7e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bfab1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaa200(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057a7ee0; end: 1057a7f23; -[SCScreenshopPersistenceServiceImpl fetchShoppableAssetMetadata] */

void FUN_1057a7ee0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa6a40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a7f24; end: 1057a7f2b;  */

void FUN_1057a7f24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isShoppable_1125fd190);
  return;
}



/* Entry: 1057a7f2c; end: 1057a7f6f; -[SCScreenshopPersistenceServiceImpl fetchNonShoppableAssetMetadata] */

void FUN_1057a7f2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa6a40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a7f70; end: 1057a7f8b;  */

uint FUN_1057a7f70(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07de00(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1057a7f8c; end: 1057a7f93; -[SCScreenshopPersistenceServiceImpl fetchShoppableAssetMetadataWithVersionNumber:] */

void FUN_1057a7f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchAssetMetadataForShoppableWi_1125c6db8);
  return;
}



/* Entry: 1057a7f94; end: 1057a7f9b; -[SCScreenshopPersistenceServiceImpl fetchNonShoppableAssetMetadataWithVersionNumber:] */

void FUN_1057a7f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchAssetMetadataForNonShoppabl_1125c6db0);
  return;
}



/* Entry: 1057a7f9c; end: 1057a8023; -[SCScreenshopPersistenceServiceImpl fetchCategorizedShoppableAssetMetadata] */

void FUN_1057a7f9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfaa200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a8024; end: 1057a80ab; -[SCScreenshopPersistenceServiceImpl fetchUncategorizedShoppableAssetMetadata] */

void FUN_1057a8024(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfaa200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057a80ac; end: 1057a80bb; -[SCScreenshopPersistenceServiceImpl _logErrorUpdatingAssetWithAssetId:error:completion:] */

void FUN_1057a80ac(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001057a80b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))(in_x4,0);
  return;
}



/* Entry: 1057a80bc; end: 1057a80c3; -[SCScreenshopPersistenceServiceImpl screenshopStore] */

undefined8 FUN_1057a80bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057a80c4; end: 1057a80f3; -[SCScreenshopPersistenceServiceImpl setScreenshopStore:] */

void FUN_1057a80c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a80f4; end: 1057a80ff; -[SCScreenshopPersistenceServiceImpl .cxx_destruct] */

void FUN_1057a80f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057a8100; end: 1057a8187; -[SCScreenshopDataModelsDocStore initWithDocObjectContext:] */

undefined1 * FUN_1057a8100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea3a0;
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



/* Entry: 1057a8188; end: 1057a82a7; -[SCScreenshopDataModelsDocStore fetchAssetMetadata] */

void FUN_1057a8188(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be380);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057a82a8; end: 1057a892b; -[SCScreenshopDataModelsDocStore fetchAssetMetadataForFashion] */

void FUN_1057a82a8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_4dc;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined1 uStack_4ba;
  undefined1 uStack_4b9;
  undefined **ppuStack_4b8;
  undefined4 uStack_4b0;
  undefined1 uStack_4a0;
  byte bStack_49f;
  byte bStack_49e;
  byte bStack_49d;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long *plStack_450;
  undefined1 uStack_441;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined1 uStack_428;
  byte bStack_427;
  byte bStack_426;
  undefined1 uStack_425;
  undefined1 *puStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined **ppuStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3b8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined1 uStack_359;
  undefined **ppuStack_358;
  undefined4 uStack_350;
  undefined2 uStack_340;
  byte bStack_33e;
  byte bStack_33d;
  undefined1 *puStack_320;
  undefined ***pppuStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2d0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined1 uStack_271;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined2 uStack_258;
  undefined2 uStack_256;
  undefined1 *puStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
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
  undefined1 uStack_108;
  byte bStack_107;
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
  
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be380);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_271;
  FUN_1057a9824();
  uStack_2e0 = 0xf;
  uStack_2d0 = 0x100;
  uStack_2b8 = 0x3fc99999a0000000;
  ppuStack_2e8 = &PTR_FUN_11086d7d0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  plStack_280 = (long *)0x0;
  uStack_256 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_268 = 7;
  uStack_258 = 0x100;
  ppuStack_270 = &PTR_FUN_11089b010;
  lStack_220 = 0;
  lStack_228 = 0;
  plStack_210 = (long *)0x0;
  uStack_218 = 0;
  plStack_208 = (long *)0x0;
  puVar3 = &uStack_359;
  puStack_238 = puVar2;
  pppuStack_230 = &ppuStack_2e8;
  FUN_1057a9824();
  uStack_3c8 = 0xf;
  uStack_3b8 = 0x100;
  uStack_3a0 = 0;
  ppuStack_3d0 = &PTR_FUN_11086d7d0;
  uStack_390 = 0;
  uStack_398 = 0;
  lStack_380 = 0;
  lStack_388 = 0;
  plStack_370 = (long *)0x0;
  uStack_378 = 0;
  plStack_368 = (long *)0x0;
  bStack_33e = puVar3[0x1a];
  bStack_33d = puVar3[0x1b];
  uStack_350 = 9;
  uStack_340 = 0x100;
  ppuStack_358 = &PTR_FUN_11089b010;
  plStack_2f0 = (long *)0x0;
  lStack_308 = 0;
  lStack_310 = 0;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  bStack_1e6 = (byte)uStack_256 | bStack_33e;
  bStack_1e5 = uStack_256._1_1_ & bStack_33d;
  uStack_1f8 = 4;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_SUB_1108629c8;
  pppuStack_1c8 = &ppuStack_270;
  pppuStack_1c0 = &ppuStack_358;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar2 = &uStack_441;
  puStack_320 = puVar3;
  pppuStack_318 = &ppuStack_3d0;
  FUN_1057a9970();
  bStack_427 = puVar2[0x19];
  bStack_426 = puVar2[0x1a];
  uStack_438 = 0;
  uStack_428 = 0;
  uStack_425 = 1;
  ppuStack_440 = &PTR_SUB_1108629c8;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  plStack_3d8 = (long *)0x0;
  plStack_3e0 = (long *)0x0;
  bStack_177 = uStack_1e8._1_1_ | bStack_427;
  bStack_176 = bStack_1e6 | bStack_426;
  uStack_188 = 4;
  uStack_178 = 0;
  bStack_175 = bStack_1e5;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_440;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar3 = &uStack_4b9;
  puStack_408 = puVar2;
  pppuStack_158 = &ppuStack_200;
  FUN_1057a9970();
  puVar2 = &uStack_4ba;
  FUN_1057a9ac0();
  bStack_49d = puVar3[0x1b] & puVar2[0x1b];
  bStack_49f = (puVar3[0x19] | puVar2[0x19]) & 1;
  bStack_49e = (puVar3[0x1a] | puVar2[0x1a]) & 1;
  uStack_4b0 = 4;
  uStack_4a0 = 0;
  ppuStack_4b8 = &PTR_SUB_1108629c8;
  plStack_450 = (long *)0x0;
  uStack_468 = 0;
  lStack_470 = 0;
  plStack_458 = (long *)0x0;
  uStack_460 = 0;
  bStack_107 = (bStack_177 | puVar3[0x19] | puVar2[0x19]) & 1;
  bStack_106 = (bStack_176 | puVar3[0x1a] | puVar2[0x1a]) & 1;
  bStack_105 = (bStack_175 | bStack_49d) & 1;
  uStack_118 = 5;
  uStack_108 = 0;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_4b8;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_4d8 = 0;
  lStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4dc = 0;
  puVar4 = &uStack_b0;
  puStack_480 = puVar3;
  puStack_478 = puVar2;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_4d8,&uStack_4dc);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_4d8 != 0) {
    lStack_4d0 = lStack_4d8;
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
  plVar1 = plStack_450;
  ppuStack_4b8 = &PTR_SUB_1108629c8;
  plStack_450 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_458;
  plStack_458 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_470 != 0) {
    __ZdlPv();
  }
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
  plVar1 = plStack_3d8;
  ppuStack_440 = &PTR_SUB_1108629c8;
  plStack_3d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3e0;
  plStack_3e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3f8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2f0;
  ppuStack_358 = &PTR_FUN_11089b010;
  plStack_2f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2f8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_310 != 0) {
    lStack_308 = lStack_310;
    __ZdlPv();
  }
  plVar1 = plStack_368;
  ppuStack_3d0 = &PTR_FUN_11086d7d0;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_388 != 0) {
    lStack_380 = lStack_388;
    __ZdlPv();
  }
  plVar1 = plStack_208;
  ppuStack_270 = &PTR_FUN_11089b010;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_210;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_228 != 0) {
    lStack_220 = lStack_228;
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_FUN_11086d7d0;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057a892c; end: 1057a8d53; -[SCScreenshopDataModelsDocStore fetchAssetMetadataForNonFashion] */

void FUN_1057a892c(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_304;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e1;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined1 uStack_2c8;
  byte bStack_2c7;
  byte bStack_2c6;
  undefined1 uStack_2c5;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined1 uStack_269;
  undefined **ppuStack_268;
  undefined4 uStack_260;
  undefined1 uStack_250;
  byte bStack_24f;
  byte bStack_24e;
  byte bStack_24d;
  undefined1 *puStack_230;
  undefined ***pppuStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined1 uStack_f8;
  byte bStack_f7;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
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
  
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be380);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_181;
  FUN_1057a9824();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 0x3fc99999a0000000;
  ppuStack_1f8 = &PTR_FUN_11086d7d0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_178 = 8;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_FUN_11089b010;
  lStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  puVar3 = &uStack_269;
  puStack_148 = puVar2;
  pppuStack_140 = &ppuStack_1f8;
  FUN_1057a9970();
  puVar2 = &uStack_2e1;
  FUN_1057a9ac0();
  bStack_2c7 = puVar2[0x19];
  bStack_2c6 = puVar2[0x1a];
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_2c5 = 1;
  ppuStack_2e0 = &PTR_SUB_1108629c8;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  plStack_278 = (long *)0x0;
  plStack_280 = (long *)0x0;
  bStack_24f = puVar3[0x19] | bStack_2c7;
  bStack_24e = puVar3[0x1a] | bStack_2c6;
  bStack_24d = puVar3[0x1b];
  uStack_260 = 4;
  uStack_250 = 0;
  ppuStack_268 = &PTR_SUB_1108629c8;
  plStack_200 = (long *)0x0;
  uStack_218 = 0;
  lStack_220 = 0;
  plStack_208 = (long *)0x0;
  uStack_210 = 0;
  bStack_f7 = bStack_24f | uStack_168._1_1_;
  bStack_f6 = bStack_24e | (byte)uStack_166;
  bStack_f5 = uStack_166._1_1_ | bStack_24d;
  uStack_108 = 5;
  uStack_f8 = 0;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  pppuStack_d0 = &ppuStack_268;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_300 = 0;
  lStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_304 = 0;
  puVar4 = &uStack_a0;
  puStack_2a8 = puVar2;
  puStack_230 = puVar3;
  pppuStack_228 = &ppuStack_2e0;
  func_0x0001000e77a0(puVar4,&ppuStack_110,&lStack_300,&uStack_304);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_300 != 0) {
    lStack_2f8 = lStack_300;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_200;
  ppuStack_268 = &PTR_SUB_1108629c8;
  plStack_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_208;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_220 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_278;
  ppuStack_2e0 = &PTR_SUB_1108629c8;
  plStack_278 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_280;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_298 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_FUN_11089b010;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  plVar1 = plStack_190;
  ppuStack_1f8 = &PTR_FUN_11086d7d0;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057a8d54; end: 1057a8f93; -[SCScreenshopDataModelsDocStore fetchAssetMetadataForShoppableWithVersionNumber:] */

void FUN_1057a8d54(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be380);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_1057a9ac0();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057a8f94; end: 1057a91cf; -[SCScreenshopDataModelsDocStore fetchAssetMetadataForNonShoppableWithVersionNumber:] */

void FUN_1057a8f94(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be380);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_1057a9ac0();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 0;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


