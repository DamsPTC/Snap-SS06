/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063e691c; end: 1063e6a93; -[SCLongformSpotlightAdDataSource _logMidRollSlotEnterIfEnabledForTriggerPoint:adOpportunityMissType:isToAd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e691c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be41f40();
  if ((param_4 != 0) && ((int)lVar1 != 0)) {
    if ((int)param_6 != 0) {
      lVar5 = (long)_DAT_112746fec;
      uVar3 = *(ulong *)(param_2 + lVar5);
      lVar1 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar3,param_3,lVar1);
      _objc_release(lVar1);
      if ((uVar3 & 1) != 0) goto LAB_1063e6a74;
      uVar4 = *(undefined8 *)(param_2 + lVar5);
      lVar1 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4,param_3,lVar1);
      _objc_release(lVar1);
    }
    lVar1 = param_2;
    func_0x00010becfce0(param_2,param_3,param_4);
    lVar5 = (long)_DAT_112746ff0;
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c245ce0(uVar4,param_3,lVar1);
    func_0x00010c26fc40(*(undefined8 *)(param_2 + lVar5));
    lVar1 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    func_0x00010c0e53c0(param_1 * 1000.0,lVar2,param_3,param_2,param_5,param_6,uVar4);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
LAB_1063e6a74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063e6a94; end: 1063e6b63; -[SCLongformSpotlightAdDataSource _triggerPointSnapIndexForTriggerPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063e6a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112746fd8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112747000);
  _objc_retain(param_3);
  func_0x00010c15f2e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1063e6b64; end: 1063e6d13; -[SCLongformSpotlightAdDataSource _currentSpotlightSnapFirstIntervalIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1063e6b64(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar7 = (long)_DAT_112747000;
  if (*(long *)(param_2 + lVar7) == 0) {
    return 0;
  }
  lVar1 = param_2;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar3;
      func_0x00010c118b40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = param_1;
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar4 = *(ulong *)(param_2 + lVar7);
      func_0x00010c26fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf529e0();
      if (uVar6 != 0) {
        uVar6 = 0;
        do {
          uVar5 = uVar4;
          func_0x00010c0dfd40(uVar4,param_3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar9 = dVar8;
          _objc_release(uVar5);
          if (param_1 <= dVar8) goto LAB_1063e6cd8;
          uVar6 = uVar6 + 1;
          uVar5 = uVar4;
          func_0x00010bf529e0();
          dVar8 = dVar9;
        } while (uVar6 < uVar5);
      }
      uVar6 = 0;
LAB_1063e6cd8:
      _objc_release(uVar4);
      goto LAB_1063e6ce8;
    }
  }
  uVar6 = 0;
LAB_1063e6ce8:
  _objc_release(lVar3);
  return uVar6;
}



/* Entry: 1063e6d14; end: 1063e6e23; -[SCLongformSpotlightAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e6d14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112746fec,0);
  _objc_storeStrong(param_1 + _DAT_112746fe8,0);
  _objc_storeStrong(param_1 + _DAT_112746fe4,0);
  _objc_storeStrong(param_1 + _DAT_112746fe0,0);
  _objc_storeStrong(param_1 + _DAT_112746fdc,0);
  _objc_storeStrong(param_1 + _DAT_112746fd8,0);
  _objc_storeStrong(param_1 + _DAT_112746fd4,0);
  _objc_storeStrong(param_1 + _DAT_112746fd0,0);
  _objc_storeStrong(param_1 + _DAT_112746fcc,0);
  _objc_storeStrong(param_1 + _DAT_112747004,0);
  _objc_storeStrong(param_1 + _DAT_112747000,0);
  _objc_storeStrong(param_1 + _DAT_112746ffc,0);
  _objc_storeStrong(param_1 + _DAT_112747008,0);
  _objc_storeStrong(param_1 + _DAT_112746ff0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112746ff4,0);
  return;
}



/* Entry: 1063e6e24; end: 1063e6e4b;  */

void FUN_1063e6e24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1063e6e4c; end: 1063e6ea3;  */

void FUN_1063e6e4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
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



/* Entry: 1063e6ea4; end: 1063e6eaf;  */

void FUN_1063e6ea4(void)

{
  return;
}



/* Entry: 1063e6eb0; end: 1063e6f57;  */

void FUN_1063e6eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063e6f58; end: 1063e7317;  */

void FUN_1063e6f58(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010c0f0200();
    if ((int)puVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb00();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cda60();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdce0();
        dVar12 = param_1;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar13 = dVar12;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdc40();
        dVar14 = dVar13;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdd00();
        dVar11 = dVar14;
        _objc_release(lVar2);
        goto LAB_1063e71a8;
      }
      func_0x00010c237220();
      func_0x00010c237200();
      func_0x00010c2371e0();
      puVar1 = param_3;
      func_0x00010c237280(param_3);
      puVar3 = param_3;
      func_0x00010c237260(param_3);
      puVar4 = param_3;
      func_0x00010c237240(param_3);
      puVar5 = param_3;
      func_0x00010c2372a0(param_3);
      dVar11 = param_1;
    }
    else {
      func_0x00010c0b5400();
      func_0x00010c0b53e0();
      func_0x00010c0b53c0();
      puVar1 = PTR_PTR_1126b8c98;
      func_0x00010c0b5460(PTR_PTR_1126b8c98);
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010c0b5440(PTR_PTR_1126b8c98);
      puVar4 = PTR_PTR_1126b8c98;
      func_0x00010c0b5420(PTR_PTR_1126b8c98);
      puVar5 = PTR_PTR_1126b8c98;
      func_0x00010c0b53a0(PTR_PTR_1126b8c98);
      dVar11 = param_1;
    }
    dVar13 = (double)(long)puVar4;
    dVar12 = (double)(long)puVar3;
    param_1 = (double)(long)puVar1;
    dVar14 = (double)(long)puVar5;
  }
  else {
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar11 = param_1;
    param_1 = 0.0;
  }
LAB_1063e71a8:
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar6 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar8 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar9 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar10 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(param_1,dVar12,dVar13,dVar11,dVar14,puVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063e7318; end: 1063e73d3; -[SCUserStoriesAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:] */

undefined8
FUN_1063e7318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca550;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c00b6a0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1063e73d4; end: 1063e778f; -[SCUserStoriesAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:adsSessionTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1063e73d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f11e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithDependencies_pendingDisp_1125e0770,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274700c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274700c) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747010);
    *(undefined **)((long)puVar1 + (long)_DAT_112747010) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747014);
    *(undefined **)((long)puVar1 + (long)_DAT_112747014) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747018);
    *(undefined **)((long)puVar1 + (long)_DAT_112747018) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274701c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274701c) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747020);
    *(undefined **)((long)puVar1 + (long)_DAT_112747020) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112747024);
    *(undefined **)((long)puVar1 + (long)_DAT_112747024) = puVar2;
    _objc_release(uVar9);
    lVar10 = (long)_DAT_112747028;
    _objc_retain(param_7);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_7;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274702c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274702c) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126bdba8;
    func_0x00010c2808e0();
    *(undefined **)((long)puVar1 + (long)_DAT_112747030) = puVar2;
    uVar9 = param_3;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    _objc_release(uVar9);
    if ((int)uVar4 != 0) {
      uVar9 = param_3;
      func_0x00010bfb8be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      func_0x00010bef9980(uVar3);
      func_0x00010be885e0(puVar1);
      _objc_release(uVar3);
    }
    func_0x00010c250880(*(undefined8 *)((long)puVar1 + lVar10));
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bf6d940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf07ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf26ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175420(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1f480();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if ((int)puVar8 != 0) {
      func_0x00010bef4240(puVar1);
      puVar5 = (undefined1 *)puVar1;
      func_0x00010bf271c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)puVar1;
      func_0x00010bf6d940(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bef2fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0580();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_7);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063e7790; end: 1063e782b; -[SCUserStoriesAdDataSource teardown] */

void FUN_1063e7790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb8be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12cf80(uVar3);
  puStack_38 = PTR_PTR_1126f11e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_teardown_112678538);
  _objc_release(uVar3);
  return;
}



/* Entry: 1063e782c; end: 1063e7e43; -[SCUserStoriesAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e782c(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar16 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar16;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75ea0();
  _objc_release(uVar15);
  _objc_release(uVar1);
  _objc_release(uVar16);
  uVar16 = param_3;
  FUN_10643f30c();
  if (param_4 == 0) {
    uVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010c0ea260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010c0eb3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e6600(uVar10,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar10);
LAB_1063e7be0:
    _objc_release(uVar15);
    uVar15 = uVar16;
  }
  else {
    uVar14 = (undefined4)uVar16;
    uVar15 = param_1;
    func_0x00010c0ea260();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar15;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010c27dd80();
    uVar2 = param_1;
    func_0x00010c0ea180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d6c60();
    uVar1 = param_3;
    if (uVar3 == 1) {
      if (uVar8 != 6) goto LAB_1063e7930;
LAB_1063e7bf0:
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar15);
    }
    else {
      if (uVar8 == 8) goto LAB_1063e7bf0;
LAB_1063e7930:
      uVar8 = param_1;
      func_0x00010c0ea260();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c27dd80();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar15);
      if (uVar5 != 4) {
        uVar10 = *(ulong *)(param_1 + (long)_DAT_112747018);
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar10,param_2,uVar1);
        uVar15 = uVar16 & 0xffffffff;
        if ((uVar10 & 1) == 0) {
          uVar11 = *(ulong *)(param_1 + (long)_DAT_112747020);
          uVar10 = param_3;
          func_0x00010be36bc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900(uVar11,param_2,uVar10);
          _objc_release(uVar10);
          _objc_release(uVar1);
          if ((uVar11 & 1) != 0) goto LAB_1063e7c70;
          lVar12 = param_4;
          func_0x00010be36bc0(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_1;
          func_0x00010c23e620(param_1,param_2,lVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar1;
          func_0x00010bf529e0();
          _objc_release(uVar1);
          _objc_release(lVar12);
          uVar1 = param_1;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar1;
          func_0x00010bef3a00();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar15;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_1;
          func_0x00010bef4240();
          uVar2 = param_1;
          func_0x00010bef4120(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_1;
          func_0x00010c258fe0(param_1);
          uVar4 = uVar2;
          func_0x00010bf5f900(uVar2,param_2,uVar3);
          func_0x000106416d48();
          lVar12 = param_4;
          FUN_10643f30c(param_4);
          if (uVar10 != 0) {
            uVar14 = 1;
          }
          lVar13 = (long)_DAT_112747028;
          uVar6 = *(undefined8 *)(param_1 + lVar13);
          func_0x00010c258ea0(uVar6);
          uVar7 = *(undefined8 *)(param_1 + lVar13);
          func_0x00010c245cc0(uVar7);
          func_0x00010c26fc00(*(undefined8 *)(param_1 + lVar13));
          uVar16 = uVar16 & 0xffffffff;
          func_0x00010c0e56e0(uVar11,param_2,uVar8,uVar4,lVar12,uVar14,uVar6,uVar7);
          _objc_release(uVar2);
          _objc_release(uVar11);
          goto LAB_1063e7be0;
        }
        goto LAB_1063e7c68;
      }
    }
    uVar15 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar15;
    func_0x00010c08fa60();
    _objc_release(uVar15);
    uVar15 = uVar16 & 0xffffffff;
    if (uVar10 == 0) goto LAB_1063e7c70;
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11274700c);
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6,param_2,uVar1);
  }
LAB_1063e7c68:
  _objc_release(uVar1);
LAB_1063e7c70:
  if ((uVar15 & 1) == 0) {
    uVar16 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar16;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      _objc_release(uVar16);
    }
    else {
      lVar12 = (long)_DAT_112747018;
      uVar15 = *(ulong *)(param_1 + lVar12);
      uVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar15,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(uVar16);
      if ((uVar15 & 1) == 0) {
        func_0x00010bfec8e0(*(undefined8 *)(param_1 + (long)_DAT_112747028));
        uVar6 = *(undefined8 *)(param_1 + lVar12);
        uVar16 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar6,param_2,uVar16);
        _objc_release(uVar16);
        lVar12 = *(long *)(param_1 + lVar12);
        func_0x00010bf529e0();
        if (lVar12 == 1) {
          func_0x00010be5b460(param_1,param_2,1);
        }
      }
    }
  }
  uVar16 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar16;
  func_0x00010c08fa60();
  _objc_release(uVar16);
  if (uVar1 == 0) {
    uVar16 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar16;
    func_0x00010c08fa60();
    _objc_release(uVar16);
    if (uVar1 == 0) {
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_1;
      func_0x00010bf53fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b3e90;
      func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0x13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar1,param_2,0,puVar9,&PTR____CFConstantStringClassReference_110e4db58,
                          &PTR____CFConstantStringClassReference_110e4db78);
      _objc_release(puVar9);
      _objc_release(uVar1);
      _objc_release(uVar16);
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e7e44; end: 1063e850b; -[SCUserStoriesAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e7e44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112747034;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(ulong *)(param_1 + lVar9) = param_3;
  _objc_release(uVar2);
  func_0x00010c069d00(*(undefined8 *)(param_1 + (long)_DAT_112747038));
  func_0x00010c163ca0(param_1);
  uVar3 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(uVar3);
  lVar9 = (long)_DAT_112747028;
  if ((int)uVar10 != 0) {
    func_0x00010c137fe0();
    func_0x00010c2569e0(*(undefined8 *)(param_1 + lVar9));
    goto LAB_1063e8420;
  }
  func_0x00010c250880(*(undefined8 *)(param_1 + lVar9));
  lVar12 = (long)_DAT_11274701c;
  uVar10 = *(ulong *)(param_1 + lVar12);
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar10 & 1) == 0) {
    func_0x00010bfec880(*(undefined8 *)(param_1 + lVar9));
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    uVar3 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112747024);
    uVar3 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar10);
    _objc_release(uVar3);
  }
  uVar3 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar10;
  FUN_10643f2a8();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar3);
  if ((uVar7 & 1) == 0) {
    uVar11 = *(ulong *)(param_1 + (long)_DAT_112747010);
    uVar3 = uVar1;
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((uVar11 & 1) == 0) {
      uVar11 = *(ulong *)(param_1 + (long)_DAT_11274700c);
      uVar3 = uVar1;
      func_0x00010be36bc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar3);
      if ((uVar11 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010bef4120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c258fe0(param_1);
        uVar11 = uVar3;
        func_0x00010bf5f900();
        _objc_release(uVar3);
        uVar3 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240(param_1);
        func_0x00010c0e4a60(uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        uVar3 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240(param_1);
        uVar7 = param_1;
        func_0x00010bef4120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c258fe0(param_1);
        func_0x00010bf5f900(uVar7);
        func_0x000106416d48();
        func_0x00010c0e7360(uVar6);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        uVar3 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf1f480();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        if ((int)uVar7 == 0) {
          puVar4 = PTR_PTR_1126b8c98;
          func_0x00010bf90d40();
          if (((ulong)puVar4 & 1) == 0) {
            uVar3 = param_1;
            func_0x00010bef4120();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010c0f7700();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bef4c60();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bef2f80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar3);
            if (uVar8 == 0) {
              uVar3 = uVar1;
              func_0x00010be36bc0(uVar1);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              FUN_10641701c();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c163ca0(param_1);
              _objc_release(uVar5);
              _objc_release(uVar3);
              if ((uVar11 & 0xfffffffffffffffd) == 0) goto LAB_1063e84a0;
              goto LAB_1063e8418;
            }
          }
        }
        else {
          uVar3 = param_1;
          func_0x00010bef4120();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c0f7700();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bef4c60();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bef2f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar3);
          if (uVar8 == 0) {
            if ((uVar11 & 0xfffffffffffffffd) == 0) {
LAB_1063e84a0:
              func_0x00010c1391e0(param_1);
              func_0x00010be5b460(param_1);
            }
            else {
              uVar3 = param_1;
              func_0x00010bf271c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar3 == 0) {
                uVar3 = uVar1;
                func_0x00010be36bc0(uVar1);
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar3;
                FUN_10641701c();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c163ca0(param_1);
                _objc_release(uVar11);
              }
              else {
                uVar11 = param_1;
                func_0x00010bf271c0(param_1);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar11;
                FUN_1063ed184();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar11);
                func_0x00010be0b4e0(param_1);
              }
              _objc_release(uVar3);
            }
            goto LAB_1063e8418;
          }
        }
        func_0x00010be0b4c0(param_1);
      }
    }
  }
LAB_1063e8418:
  _objc_release(uVar10);
LAB_1063e8420:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e850c; end: 1063e8ed7; -[SCUserStoriesAdDataSource _evaluateInsertionRulesAndInsertAdIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e850c(double param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  double dVar29;
  undefined4 uStack_90;
  
  func_0x0001000ba800();
  uVar24 = *(undefined8 *)(param_2 + (long)_DAT_112747034);
  _objc_retain(uVar24);
  uVar3 = uVar24;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  uVar4 = uVar27;
  func_0x00010bf5f900();
  _objc_release(uVar27);
  lVar5 = *(long *)(param_2 + (long)_DAT_112747010);
  func_0x00010bf529e0();
  lVar23 = (long)_DAT_11274703c;
  uVar25 = *(undefined8 *)(param_2 + lVar23);
  lVar28 = (long)_DAT_112747028;
  uVar6 = *(undefined8 *)(param_2 + lVar28);
  if (lVar5 == 0) {
    func_0x00010c258ea0(uVar6);
    uVar7 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c245cc0(uVar7);
    func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
    func_0x0001063fd408(uVar25,uVar6,uVar7);
    uStack_90 = (uint)uVar25;
    uVar7 = *(undefined8 *)(param_2 + lVar23);
    uVar6 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c258ea0(uVar6);
    uVar25 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c245cc0(uVar25);
    func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
    func_0x0001063fd4b4(uVar7,uVar6,uVar25);
    uVar1 = (uint)uVar7;
    lVar26 = *(long *)(param_2 + lVar23);
    uVar6 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c258ea0(uVar6);
    uVar25 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c245cc0(uVar25);
    func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
    func_0x0001063fd6a8(lVar26,uVar6,uVar25);
  }
  else {
    func_0x00010c258ea0();
    uVar7 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c245cc0(uVar7);
    func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
    func_0x0001063fd558(uVar25,uVar6,uVar7);
    uStack_90 = (uint)uVar25;
    uVar7 = *(undefined8 *)(param_2 + lVar23);
    uVar6 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c258ea0(uVar6);
    uVar25 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c245cc0(uVar25);
    func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
    func_0x0001063fd604(uVar7,uVar6,uVar25);
    uVar1 = (uint)uVar7;
    lVar26 = *(long *)(param_2 + lVar23);
    uVar6 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c258ea0(uVar6);
    uVar25 = *(undefined8 *)(param_2 + lVar28);
    func_0x00010c245cc0(uVar25);
    func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
    func_0x0001063fd784(lVar26,uVar6,uVar25);
  }
  uVar27 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar27;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  uVar10 = uVar9;
  func_0x00010c230360();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar27);
  if (((uint)uVar10 & uStack_90) == 1) {
    uVar6 = *(undefined8 *)(param_2 + lVar23);
    uVar27 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar27;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c258ea0();
    uVar11 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c245cc0();
    uVar15 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    func_0x0001063fd860(uVar6,uVar10,uVar14);
    uStack_90 = (uint)uVar6;
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar27);
  }
  else {
    uStack_90 = ((uint)uVar10 ^ 1) & uStack_90;
  }
  uVar6 = *(undefined8 *)(param_2 + lVar28);
  func_0x00010c26f240(uVar6);
  if ((((uStack_90 ^ 1) & uVar1) == 1) && (uVar27 = (ulong)param_1, 0 < (long)uVar27)) {
    uVar6 = uVar3;
    func_0x00010be36bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar6;
    FUN_106416eb4();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_10641701c(uVar6,uVar4,uVar25,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_2);
    _objc_release(uVar7);
    _objc_release(uVar25);
    _objc_release(uVar6);
    if ((uVar4 & 0xfffffffffffffffb) == 3) {
      param_1 = (double)uVar27;
      func_0x00010be9b680(param_1,param_2);
    }
    goto LAB_1063e8a50;
  }
  if ((((uStack_90 | uVar1) & 1) != 0) || (lVar26 == 0)) goto LAB_1063e8a50;
  if (lVar26 < 3) {
    if (lVar26 == 1) {
LAB_1063e89e8:
      FUN_106416eb4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106416f0c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (lVar26 != 3) goto LAB_1063e89e8;
    func_0x000106416f64();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar25 = uVar3;
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar25;
  FUN_10641701c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163ca0(param_2);
  _objc_release(uVar7);
  _objc_release(uVar25);
  _objc_release(uVar6);
LAB_1063e8a50:
  uVar27 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar27;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  uVar9 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  func_0x00010c245cc0();
  func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
  uVar13 = param_2;
  dVar29 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  uVar16 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  uVar19 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  uVar22 = param_2;
  func_0x00010c067240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0a05c0(param_1,dVar29,uVar8);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar27);
  uVar27 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar27;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  if (lVar5 == 0) {
    func_0x00010c0cdb80(*(undefined8 *)(param_2 + lVar23));
    func_0x00010c0cdae0(*(undefined8 *)(param_2 + lVar23));
    puVar2 = PTR_PTR_1126afec0;
    func_0x00010c0cdcc0(*(undefined8 *)(param_2 + lVar23));
  }
  else {
    func_0x00010c0cdb40();
    func_0x00010c0cdaa0(*(undefined8 *)(param_2 + lVar23));
    puVar2 = PTR_PTR_1126afec0;
    func_0x00010c0cdca0(*(undefined8 *)(param_2 + lVar23));
  }
  func_0x00010c155420(puVar2);
  dVar29 = param_1;
  func_0x00010c258ea0(*(undefined8 *)(param_2 + lVar28));
  func_0x00010c245cc0(*(undefined8 *)(param_2 + lVar28));
  puVar2 = PTR_PTR_1126afec0;
  func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar28));
  func_0x00010c155420(puVar2);
  func_0x00010c0e4980(param_1,dVar29,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar27);
  if (uStack_90 != 0) {
    uVar27 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar27;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    func_0x00010c0e49a0(uVar8);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar27);
    func_0x00010be3c260(param_2);
  }
  _objc_release(uVar3);
  _objc_release(uVar24);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1063e8ed8; end: 1063e935b; -[SCUserStoriesAdDataSource _evaluateInsertionThresholdsOnlyWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e8ed8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  
  _objc_retain(param_4);
  uVar21 = *(undefined8 *)(param_2 + _DAT_112747034);
  _objc_retain(uVar21);
  uVar3 = uVar21;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  func_0x00010bf5f900();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_2 + _DAT_112747010);
  func_0x00010bf529e0();
  lVar19 = (long)_DAT_112747028;
  uVar5 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c258ea0(uVar5);
  uVar6 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c245cc0(uVar6);
  func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar19));
  if (lVar4 == 0) {
    uVar7 = param_4;
    func_0x0001063fd408(param_4,uVar5,uVar6);
    uVar2 = (uint)uVar7;
  }
  else {
    uVar5 = param_4;
    func_0x0001063fd558();
    uVar2 = (uint)uVar5;
  }
  lVar8 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  lVar11 = lVar10;
  func_0x00010c230360();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  uVar1 = (uint)lVar11 ^ 1;
  uVar20 = uVar1 & uVar2;
  if (((uVar1 & 1) == 0) && (uVar2 != 0)) {
    lVar8 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c258ea0();
    lVar12 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c245cc0();
    lVar16 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    uVar5 = param_4;
    func_0x0001063fd860(param_4,lVar11,lVar15);
    uVar20 = (uint)uVar5;
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  lVar8 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  if (lVar4 == 0) {
    func_0x00010c0cdb80(param_4);
    func_0x00010c0cdae0(param_4);
    puVar22 = PTR_PTR_1126afec0;
    func_0x00010c0cdcc0(param_4);
  }
  else {
    func_0x00010c0cdb40();
    func_0x00010c0cdaa0(param_4);
    puVar22 = PTR_PTR_1126afec0;
    func_0x00010c0cdca0(param_4);
  }
  func_0x00010c155420(puVar22);
  uVar5 = param_1;
  func_0x00010c258ea0(*(undefined8 *)(param_2 + lVar19));
  func_0x00010c245cc0(*(undefined8 *)(param_2 + lVar19));
  puVar22 = PTR_PTR_1126afec0;
  func_0x00010c26fc20(*(undefined8 *)(param_2 + lVar19));
  func_0x00010c155420(puVar22);
  func_0x00010c0e4980(param_1,uVar5,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  if (uVar20 != 0) {
    lVar4 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar4;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    func_0x00010c0e49a0(lVar8);
    _objc_release(lVar8);
    _objc_release(lVar19);
    _objc_release(lVar4);
    uVar5 = uVar3;
    func_0x00010be36bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_10641701c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063e935c; end: 1063e946b; -[SCUserStoriesAdDataSource _scheduleRetryInsertionAfterItem:delaySec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e935c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112747038;
  uVar10 = *(undefined8 *)(param_2 + lVar11);
  _objc_retain(param_4);
  func_0x00010c069d00(uVar10);
  puVar2 = PTR_PTR_1126bc890;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e4d598;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c1503c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar11);
  *(undefined **)(param_2 + lVar11) = puVar2;
  _objc_release(uVar10);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(puVar1 + _DAT_112747038);
  _objc_retain(lVar3);
  func_0x00010c069d00(uVar10);
  lVar11 = lVar3;
  func_0x00010c0e00e0(lVar3,param_3,&PTR____CFConstantStringClassReference_110e4d598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar11 != 0) {
    lVar3 = lVar11;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(puVar1 + _DAT_112747034);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010be36bc0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c0720c0(uVar6,param_3,lVar3);
      _objc_release(lVar3);
      _objc_release(uVar6);
      if ((int)uVar10 != 0) {
        puVar2 = puVar1;
        func_0x00010bf6d940(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bef4240(puVar1);
        func_0x00010c0e49a0(puVar8,param_3,puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        func_0x00010be3c260(puVar1,param_3,lVar11,4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 1063e946c; end: 1063e95e7; -[SCUserStoriesAdDataSource _retryInsertion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e946c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_112747038);
  _objc_retain(param_3);
  func_0x00010c069d00(uVar7);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e4d598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112747034);
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010be36bc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0720c0(uVar5,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(uVar5);
      if ((int)uVar7 != 0) {
        lVar2 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bef4240(param_1);
        func_0x00010c0e49a0(lVar4,param_2,lVar6);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        func_0x00010be3c260(param_1,param_2,lVar1,4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063e95e8; end: 1063e9b6b; -[SCUserStoriesAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e95e8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  func_0x00010c069d00(*(undefined8 *)(param_1 + (long)_DAT_112747038));
  uVar1 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27dd80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 == 2) {
    func_0x00010c2569e0(*(undefined8 *)(param_1 + (long)_DAT_112747028));
  }
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) goto LAB_1063e9b40;
  uVar3 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c27dd80();
  uVar6 = param_1;
  func_0x00010c0ea180();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d6c60();
  uVar1 = 9;
  if (uVar7 != 1) {
    uVar1 = 7;
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (uVar10 == uVar1) {
    uVar1 = uVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      uVar9 = *(undefined8 *)(param_1 + (long)_DAT_11274700c);
      uVar1 = uVar2;
      func_0x00010bfce400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar9,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  uVar1 = uVar2;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar1);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    func_0x00010c0a0740(param_1,param_2,uVar2);
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfecde0();
    uVar5 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    if (uVar4 + 1 == uVar10) {
      uVar3 = param_1;
      func_0x00010c0ea260();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010c27dd80();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar10 == 5) {
        uVar3 = param_1;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar4;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bfecde0();
        uVar10 = uVar4;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x00010bf529e0();
        _objc_release(uVar10);
        _objc_release(uVar3);
        if (uVar5 + 1 == uVar6) {
          uVar3 = uVar1;
          func_0x00010be36bc0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010c23e620(param_1,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar3 = uVar5;
          func_0x00010bf529e0();
          if (uVar3 != 0) {
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0xc2000000;
            pcStack_80 = FUN_1063e9b6c;
            puStack_78 = &UNK_11088c820;
            uStack_70 = param_1;
            _objc_retain(uVar2);
            uStack_68 = uVar2;
            func_0x00010bf97e80(uVar5,param_2,&puStack_90);
            func_0x00010be5b460(param_1,param_2,2);
            _objc_release(uStack_68);
          }
          _objc_release(uVar5);
        }
        _objc_release(uVar4);
      }
    }
  }
  else {
    uVar3 = param_1;
    func_0x00010c075a00(param_1,param_2,param_3);
    if (((int)uVar3 == 0) ||
       (uVar3 = param_1, func_0x00010bf76fc0(param_1,param_2,param_3,param_4), (int)uVar3 == 0))
    goto LAB_1063e9b40;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      lVar11 = (long)_DAT_112747020;
      uVar10 = *(ulong *)(param_1 + lVar11);
      uVar4 = uVar2;
      func_0x00010bfce400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar10,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((uVar10 & 1) == 0) {
        uVar9 = *(undefined8 *)(param_1 + lVar11);
        uVar1 = uVar2;
        func_0x00010bfce400(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar9,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar1);
        func_0x00010bea1a80(param_1);
        func_0x00010c137fe0(*(undefined8 *)(param_1 + (long)_DAT_112747028));
        func_0x00010be5b460(param_1,param_2,2);
      }
      goto LAB_1063e9b40;
    }
  }
  _objc_release(uVar1);
LAB_1063e9b40:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e9b6c; end: 1063e9bdf;  */

void FUN_1063e9b6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bfce400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0840(uVar1);
  _objc_release(uVar2);
  func_0x00010becdfc0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063e9be0; end: 1063e9c6b; -[SCUserStoriesAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e9be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c078c40(param_1,param_2,param_3);
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_112747020;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
      func_0x00010bea1a80(param_1);
      func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112747028));
      func_0x00010be5b460(param_1,param_2,2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e9c6c; end: 1063e9d17; -[SCUserStoriesAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e9c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274702c);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112747020);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAdRules_112586048);
  return;
}



/* Entry: 1063e9d18; end: 1063e9da3; -[SCUserStoriesAdDataSource startViewingPlaylistChapterId:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063e9d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = (long)_DAT_112747024;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010bfec880(*(undefined8 *)(param_1 + _DAT_112747028));
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  }
  func_0x00010c251920(param_1,param_2,param_4,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063e9da4; end: 1063e9efb; -[SCUserStoriesAdDataSource targetingParameters] */

void FUN_1063e9da4(undefined8 param_1)

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
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29d360();
  uVar3 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(uVar2,uVar5);
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  FUN_1063f9f48(uVar2,uVar8,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063e9efc; end: 1063ea0e7; -[SCUserStoriesAdDataSource upcomingStoriesContext] */

void FUN_1063e9efc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_10640c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x00010c104fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfbc4a0();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf60300(lVar3);
    lVar2 = lVar3;
    func_0x00010c104fe0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfbc4c0();
    _objc_release(lVar2);
    if (0 < (int)lVar6) {
      lVar6 = param_1;
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c101260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      FUN_10640bb7c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar6);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1063ea0e8;
      puStack_60 = &UNK_110920d68;
      lVar2 = lVar5;
      lStack_58 = param_1;
      func_0x0001006372a4(lVar5,&puStack_78);
      _objc_release(lVar5);
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010640cb0c(lVar2,param_1,(uint)lVar1 & ((int)(uint)lVar1 >> 0x1f ^ 0xffffffffU),
                          (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU),1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(lVar2);
      goto LAB_1063ea0c0;
    }
  }
  lVar6 = 0;
LAB_1063ea0c0:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1063ea0e8; end: 1063ea16b;  */

bool FUN_1063ea0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c1013e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  lVar2 = lVar1;
  FUN_10640b338(lVar1);
  _objc_release(lVar1);
  return lVar2 == 0x2b;
}



/* Entry: 1063ea16c; end: 1063ea22b; -[SCUserStoriesAdDataSource _unviewedEligibleStoryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1063ea16c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    puVar5 = *(undefined **)(param_1 + (long)_DAT_112747030);
    func_0x00010be5a1c0(param_1);
    return puVar5;
  }
  puVar5 = PTR_PTR_1126bdba8;
                    /* WARNING: Could not recover jumptable at 0x00010c2808f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bdba8,PTR_s_unknown_11267dc60);
  return puVar5;
}



/* Entry: 1063ea22c; end: 1063ea22f; -[SCUserStoriesAdDataSource didUpdateWithDiscoverFeedFriendStoryDataRequest:] */

void FUN_1063ea22c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be885f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshFeedUnviewedFriendStorie_11257fb18);
  return;
}



/* Entry: 1063ea230; end: 1063ea327; -[SCUserStoriesAdDataSource _refreshFeedUnviewedFriendStoriesCount] */

void FUN_1063ea230(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa9a40(lVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1063ea328; end: 1063ea3e3;  */

void FUN_1063ea328(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1063ea3e4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1063ea3e4; end: 1063ea45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ea3e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126bdba8;
      func_0x00010c2808e0();
      *(undefined **)(lVar1 + _DAT_112747030) = puVar4;
    }
    else {
      func_0x0001006372a4(lVar2,&PTR___NSConcreteGlobalBlock_110920d98);
      lVar3 = lVar2;
      func_0x00010bf529e0();
      *(long *)(lVar1 + _DAT_112747030) = lVar3;
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063ea460; end: 1063ea467;  */

void FUN_1063ea460(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfddf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hasUnviewedStories_1125d5188);
  return;
}



/* Entry: 1063ea468; end: 1063ea59b; -[SCUserStoriesAdDataSource _logUnviewedEligibleStoryCount:] */

void FUN_1063ea468(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  if ((long)param_3 < 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else if (param_3 < 8) {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dcfe58);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e4db98;
  }
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfbc3a0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 1063ea59c; end: 1063ea5a3; -[SCUserStoriesAdDataSource adProductType] */

undefined8 FUN_1063ea59c(void)

{
  return 2;
}



/* Entry: 1063ea5a4; end: 1063ea8a3; -[SCUserStoriesAdDataSource adOrganicSignals] */

void FUN_1063ea5a4(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0c2180();
  puVar6 = puVar2;
  FUN_10640ba1c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar9);
  puVar9 = puVar6;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar6);
    puVar9 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        puVar5 = param_1;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010bf63e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126c2118;
        _objc_opt_class();
        puVar7 = puVar4;
        _objc_opt_isKindOfClass();
        puVar3 = PTR_PTR_1126c2118;
        if (((ulong)puVar7 & 1) != 0) {
          _objc_retain(puVar4);
          _objc_opt_class();
          puVar7 = puVar4;
          _objc_opt_isKindOfClass();
          puVar5 = puVar4;
          if (((ulong)puVar7 & 1) == 0) {
            puVar5 = (undefined *)0x0;
          }
          _objc_retain(puVar5);
          _objc_release(puVar4);
          _objc_retain(puVar2);
          func_0x00010c0bdf40(puVar5);
          _objc_release(puVar5);
          _objc_release(puVar2);
          puVar5 = puVar3;
        }
        _objc_release(puVar4);
        puVar11 = puVar11 + 1;
      } while (puVar9 != puVar11);
      puVar9 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar9 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar9;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  if (puVar2 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(puVar6 + 0x20);
    puVar5 = puVar9;
    func_0x00010bef3aa0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar10);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1063ea8a4; end: 1063ea94b;  */

void FUN_1063ea8a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010bef3aa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063ea94c; end: 1063ea967;  */

void FUN_1063ea94c(void)

{
  return;
}



/* Entry: 1063ea968; end: 1063eaa23; -[SCUserStoriesAdDataSource mediaLoadContexts] */

undefined * FUN_1063ea968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1063eaa24; end: 1063eaa2b; -[SCUserStoriesAdDataSource storyAdMediaLoadStatusSnapCount] */

undefined8 FUN_1063eaa24(void)

{
  return 1;
}



/* Entry: 1063eaa2c; end: 1063eab07; -[SCUserStoriesAdDataSource resetInsertionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063eaa2c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f11e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_resetInsertionData_11262bd80);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274700c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112747010));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112747014));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112747018));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274701c));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112747020));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112747024));
  func_0x00010c2569e0(*(undefined8 *)(param_1 + _DAT_112747028));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112747034);
  *(undefined8 *)(param_1 + _DAT_112747034) = 0;
  _objc_release(uVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112747038));
  func_0x00010c163ca0(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11274702c));
  return;
}



/* Entry: 1063eab08; end: 1063eab0f; -[SCUserStoriesAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1063eab08(void)

{
  return 0;
}



/* Entry: 1063eab10; end: 1063eab17; -[SCUserStoriesAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_1063eab10(void)

{
  return 1;
}



/* Entry: 1063eab18; end: 1063eab1f; -[SCUserStoriesAdDataSource isAdContentLoopingForDataModel:] */

undefined8 FUN_1063eab18(void)

{
  return 1;
}



/* Entry: 1063eab20; end: 1063eae93; -[SCUserStoriesAdDataSource adViewContextForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063eab20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_s_adViewContextForGroupId__11259b230;
  plVar1 = &lStack_70;
  puStack_68 = PTR_PTR_1126f11e8;
  lStack_70 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_70,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (plVar1 == (long *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    puVar2 = (undefined *)plVar1;
    func_0x00010c0d3c80(plVar1);
  }
  puVar3 = PTR_PTR_1126ca500;
  func_0x00010c104fc0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c1305a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca500;
  func_0x00010c104fc0(PTR_PTR_1126ca500);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c0680c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010bfcf800(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010be24b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(lVar5);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010c258740(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010bf11260(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar7 = *(long *)(param_1 + _DAT_112747014);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = lVar7;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    lVar5 = lVar6;
    func_0x00010bfcea60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar8 = lVar6;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfecde0();
      _objc_release(lVar8);
      if (lVar9 != 0x7fffffffffffffff) {
        lVar8 = lVar6;
        func_0x00010bfcf800(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecde0();
        _objc_release(lVar8);
      }
    }
    _objc_release(lVar5);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b92c8;
  func_0x00010bf112a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063eae94; end: 1063eaf4b; -[SCUserStoriesAdDataSource adSnapViewLogParametersForSkippedAdGroupId:aroundGroup:pageLeft:] */

void FUN_1063eae94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f11e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_adSnapViewLogParametersForSkippe_11259aef0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8ce0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba700(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063eaf4c; end: 1063eaf53; -[SCUserStoriesAdDataSource isRetryInsertionEnabled] */

undefined8 FUN_1063eaf4c(void)

{
  return 1;
}



/* Entry: 1063eaf54; end: 1063eb16f; -[SCUserStoriesAdDataSource unviewedAds] */

void FUN_1063eaf54(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bef4c60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(puVar2);
    func_0x00010c1391e0(param_1);
    _objc_release(puVar3);
  }
  puVar2 = param_1;
  func_0x00010c067240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  else {
    func_0x00010c067240(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x000100504554();
    puVar2 = puVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063eb170; end: 1063eb1cf; -[SCUserStoriesAdDataSource engagement] */

void FUN_1063eb170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bdc30;
  _objc_alloc(PTR_PTR_1126bdc30);
  func_0x00010be24b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059460(puVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063eb1d0; end: 1063eb21b; -[SCUserStoriesAdDataSource _setAdRules] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063eb1d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112747020);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c164470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112747028),
               PTR_s_setAdRulesForNonFirstSessionAd_112636b38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c164450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112747028),PTR_s_setAdRulesForFirstSessionAd_112636b30);
  return;
}



/* Entry: 1063eb21c; end: 1063eb33f; -[SCUserStoriesAdDataSource _groupsLeftCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063eb21c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    lVar5 = *(long *)(param_1 + _DAT_112747018);
    func_0x00010bf529e0(lVar5);
    lVar6 = *(long *)(param_1 + _DAT_112747020);
    func_0x00010bf529e0(lVar6);
    func_0x00010c0df840(puVar7,param_2,lVar4 - (lVar5 + lVar6));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1063eb340; end: 1063eb723; -[SCUserStoriesAdDataSource _makeAdRequestIfNecessary:] */

void FUN_1063eb340(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  uVar4 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x00010c0e2460(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b8cd8;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bef4240(param_1);
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf17b60();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf17be0();
  _objc_release(puVar7);
  if (param_3 - 1U < 4) {
    ppuStack_88 = (undefined **)(&PTR_PTR_110920f08)[param_3 - 1U];
  }
  else {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1063eccd0;
  puStack_98 = &UNK_1108951c0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e4dbd8;
  ppuVar11 = &puStack_b0;
  puStack_80 = puVar10;
  func_0x00010bf51e00();
  _objc_release(ppuStack_88);
  _objc_release(ppuStack_90);
  _objc_initWeak(&puStack_b0,param_1);
  uVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010befe100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  uVar4 = param_1;
  func_0x00010bef4d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf95f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bef3aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2260();
  func_0x00010bf21060();
  puStack_b8 = puVar9;
  _objc_copyWeak(auStack_c0,&puStack_b0);
  func_0x00010c134820(uVar1);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(&puStack_b0);
  _objc_release(ppuVar11);
  _objc_release(puVar8);
  return;
}



/* Entry: 1063eb724; end: 1063eb833;  */

void FUN_1063eb724(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063eb834; end: 1063ebb97; -[SCUserStoriesAdDataSource _didDownloadAdWithSuccess:metadataToMediaTransitionCookie:] */

void FUN_1063eb834(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    uVar4 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c0e2440(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bdce9a0(param_1);
    uVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    func_0x00010c0e2300(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar9 = PTR_PTR_1126b8cd8;
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bef4240(param_1);
    func_0x00010c25d840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf17b60();
    _objc_release(puVar9);
    _objc_initWeak(auStack_68,param_1);
    uVar1 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0c5660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bef3c60();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc0000000;
    uStack_80 = 0x1063ebbd8;
    puStack_78 = &UNK_110848088;
    puStack_98 = puVar11;
    uStack_70 = param_4;
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010bfa85e0(uVar1);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar10);
  }
  return;
}



/* Entry: 1063ebb98; end: 1063ebc17;  */

undefined8 FUN_1063ebb98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1063ebc18; end: 1063ebc7f;  */

void FUN_1063ebc18(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063ebc80; end: 1063ebeef; -[SCUserStoriesAdDataSource _applyServerAdInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ebc80(long param_1)

{
  long lVar1;
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
  undefined8 uVar12;
  
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bef4240(param_1);
    lVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0620();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  FUN_1063ecd78(lVar4,lVar7,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11274703c);
  *(long *)(param_1 + _DAT_11274703c) = lVar11;
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c284080(param_1);
  func_0x00010c286980(*(undefined8 *)(param_1 + _DAT_112747028));
                    /* WARNING: Could not recover jumptable at 0x00010bea1a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAdRules_112586048);
  return;
}



/* Entry: 1063ebef0; end: 1063ec127; -[SCUserStoriesAdDataSource updateCachedInsertionConfigIfNeeded] */

void FUN_1063ebef0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf271c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c071ae0(uVar5,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar5 != 0) && ((uVar2 & 1) == 0)) {
    func_0x00010c175420(param_1,param_2,uVar5);
    uVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf07ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175260();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010bef4240(param_1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a05a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1063ec128; end: 1063ec463; -[SCUserStoriesAdDataSource _handleMediaFetchCompleteWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ec128(double param_1,ulong param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_4 == 0) {
    return;
  }
  uVar1 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  func_0x00010c0e22e0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ebcc0();
  if (uVar2 != 2) {
    uVar2 = param_2;
    func_0x00010bef39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0ebcc0();
    if (uVar3 != 0x12) {
      uVar3 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f480();
      if ((int)uVar6 == 0) {
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
LAB_1063ec2bc:
        uVar1 = param_2;
        func_0x00010bef39c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar1 == 0) {
          return;
        }
        uVar1 = param_2;
        func_0x00010bef39c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c105ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c1139e0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) != 0) {
          return;
        }
        uVar1 = param_2;
        func_0x00010bef39c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c105ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb3a00();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) != 0) {
          return;
        }
        lVar10 = (long)_DAT_112747034;
        if (*(long *)(param_2 + lVar10) == 0) {
          return;
        }
        uVar1 = param_2;
        func_0x00010bef39c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c105ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0810a0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        func_0x00010c26f240(*(undefined8 *)(param_2 + (long)_DAT_112747028));
        lVar9 = *(long *)(param_2 + lVar10);
        if (((int)uVar3 != 0) && (0 < (long)param_1)) {
                    /* WARNING: Could not recover jumptable at 0x00010be9b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    ((double)(ulong)(long)param_1,param_2,
                     PTR_s__scheduleRetryInsertionAfterItem_112584748);
          return;
        }
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar9;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08fa60();
        _objc_release(lVar7);
        _objc_release(lVar9);
        if (lVar8 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010be3c270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,PTR_s__insertAdIfNecessaryAfterItem_in_11256ca38,
                   *(undefined8 *)(param_2 + lVar10),3);
        return;
      }
      lVar10 = *(long *)(param_2 + (long)_DAT_112747034);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (lVar10 == 0) goto LAB_1063ec2bc;
      goto LAB_1063ec1f4;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_1063ec1f4:
                    /* WARNING: Could not recover jumptable at 0x00010be0b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__evaluateInsertionRulesAndInsert_1125606d0,3)
  ;
  return;
}



/* Entry: 1063ec464; end: 1063ec533; -[SCUserStoriesAdDataSource _trackNoFillItemGroupId:] */

void FUN_1063ec464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c067200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bef6220(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef6000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e47a0();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063ec534; end: 1063ecb6b; -[SCUserStoriesAdDataSource _insertAdIfNecessaryAfterItem:insertSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ec534(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar1 = &puStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1063ecb6c;
  puStack_88 = &UNK_110847450;
  puStack_80 = param_1;
  func_0x0001001071d4();
  puVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1f480();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)puVar5 == 0) {
LAB_1063ec690:
    puVar2 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258fe0(param_1);
    puVar3 = puVar2;
    func_0x00010bf5f900();
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_10641701c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (((ulong)puVar3 & 0xfffffffffffffffd) == 0) {
      func_0x00010c1391e0(param_1);
      func_0x00010be5b460(param_1);
      goto LAB_1063ecae0;
    }
    puVar2 = param_1;
    func_0x00010c0f72e0();
    if ((int)puVar2 == 0) goto LAB_1063ecae0;
    puVar2 = param_1;
    func_0x00010c066b80();
    if ((int)puVar2 == 0) {
      puVar2 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e4940(puVar4);
      _objc_release(puVar4);
    }
    else {
      puVar2 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_1);
      func_0x00010c0e4940(puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar3 = param_1;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e4d678;
      puVar4 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_70 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar4);
      }
      uVar9 = *(undefined8 *)(param_1 + _DAT_112747010);
      puVar4 = param_3;
      func_0x00010bfce400(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar9);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c258ea0(*(undefined8 *)(param_1 + _DAT_112747028));
      func_0x00010c0df780(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bef4860(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010bfce400(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112747014);
      puVar6 = puVar2;
      func_0x00010bfe5ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf9be80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bef4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125bc0(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1391e0(param_1);
      func_0x00010c163ca0(param_1);
    }
    _objc_release(puVar3);
  }
  else {
    puVar2 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      uVar8 = *(ulong *)(param_1 + _DAT_112747010);
      puVar3 = puVar2;
      func_0x00010be36bc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar3);
      if ((uVar8 & 1) == 0) {
        _objc_release(puVar2);
        goto LAB_1063ec690;
      }
    }
  }
  _objc_release(puVar2);
LAB_1063ecae0:
  func_0x0001000e2a84(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(ppuVar1);
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126b8cd8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bef4240(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063ecb6c; end: 1063ecbe7;  */

void FUN_1063ecb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b8cd8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef4240(uVar1);
  func_0x00010c25d840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4dc58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063ecbe8; end: 1063ecbef;  */

void FUN_1063ecbe8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1063ecbf0; end: 1063ecccf; -[SCUserStoriesAdDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ecbf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274702c,0);
  _objc_storeStrong(param_1 + _DAT_112747038,0);
  _objc_storeStrong(param_1 + _DAT_112747034,0);
  _objc_storeStrong(param_1 + _DAT_112747024,0);
  _objc_storeStrong(param_1 + _DAT_112747020,0);
  _objc_storeStrong(param_1 + _DAT_11274701c,0);
  _objc_storeStrong(param_1 + _DAT_112747018,0);
  _objc_storeStrong(param_1 + _DAT_112747014,0);
  _objc_storeStrong(param_1 + _DAT_112747010,0);
  _objc_storeStrong(param_1 + _DAT_11274700c,0);
  _objc_storeStrong(param_1 + _DAT_112747028,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274703c,0);
  return;
}



/* Entry: 1063eccd0; end: 1063ecd77;  */

void FUN_1063eccd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4d798);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063ecd78; end: 1063ed183;  */

void FUN_1063ecd78(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010bf00f00();
    if ((int)puVar1 == 0) {
      lVar3 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        func_0x00010bfbc240();
        func_0x00010bfbc220();
        func_0x00010bfbc200();
        func_0x00010bfbc1e0();
        func_0x00010bfbc1c0();
        func_0x00010bfbc280(param_3);
        dVar11 = param_1;
        func_0x00010bfbc260(param_3);
        dVar10 = dVar11;
      }
      else {
        lVar3 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdba0();
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb40();
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb20();
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb00();
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdce0();
        dVar10 = param_1;
        _objc_release(lVar3);
        lVar3 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar11 = dVar10;
        _objc_release(lVar3);
      }
    }
    else {
      func_0x00010c293bc0();
      func_0x00010c293ba0();
      func_0x00010c293b80();
      func_0x00010c293b60();
      func_0x00010c293b40();
      puVar1 = PTR_PTR_1126b8c98;
      func_0x00010c293c00(PTR_PTR_1126b8c98);
      puVar2 = PTR_PTR_1126b8c98;
      func_0x00010c293be0(PTR_PTR_1126b8c98);
      dVar11 = param_1;
      param_1 = (double)(long)puVar1;
      dVar10 = (double)(long)puVar2;
    }
  }
  else {
    dVar11 = param_1;
    param_1 = 0.0;
    dVar10 = 0.0;
  }
  func_0x00010bf1f480();
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar3 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdb60();
  lVar4 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar5 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar6 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar8 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar9 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(param_1,dVar10,0,dVar11,0,puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063ed184; end: 1063ed30b;  */

void FUN_1063ed184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126ca508;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c0cdba0();
  uVar3 = param_2;
  func_0x00010c0cdb40();
  uVar4 = param_2;
  func_0x00010c0cdb20();
  uVar5 = param_2;
  func_0x00010c0cdb60(param_2);
  uVar6 = param_2;
  func_0x00010c0cdb00(param_2);
  uVar7 = param_2;
  func_0x00010c0cdaa0(param_2);
  uVar8 = param_2;
  func_0x00010c0cda60();
  uVar9 = param_2;
  func_0x00010c0cdac0();
  func_0x00010c0cdce0(param_2);
  uVar11 = param_1;
  func_0x00010c0cdca0(param_2);
  uVar12 = uVar11;
  func_0x00010c0cdc40(param_2);
  uVar13 = uVar12;
  func_0x00010c0cdc80(param_2);
  uVar14 = uVar13;
  func_0x00010c0cdd00(param_2);
  uVar10 = param_2;
  func_0x00010bf48240();
  func_0x00010bf48200();
  func_0x00010bf481e0();
  func_0x00010bf48220();
  _objc_release(param_2);
  func_0x00010c02c0e0(param_1,uVar11,uVar12,uVar13,uVar14,puVar1,param_3,uVar2,uVar3,uVar4,uVar5,
                      uVar6,uVar7,uVar8,uVar9,(char)uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063ed30c; end: 1063ed353; -[SCUserStoriesAdRuleTracker init] */

void FUN_1063ed30c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f11f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x49) = 0;
    *(undefined8 *)((long)puVar1 + 0x41) = 0;
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
  }
  return;
}



/* Entry: 1063ed354; end: 1063ed383; -[SCUserStoriesAdRuleTracker updateInsertionRuleConfiguration:] */

void FUN_1063ed354(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1063ed384; end: 1063ed397; -[SCUserStoriesAdRuleTracker enoughStoriesViewed] */

bool FUN_1063ed384(long param_1)

{
  return *(long *)(param_1 + 8) <= *(long *)(param_1 + 0x38);
}



/* Entry: 1063ed398; end: 1063ed3ab; -[SCUserStoriesAdRuleTracker enoughSnapsViewed] */

bool FUN_1063ed398(long param_1)

{
  return *(long *)(param_1 + 0x10) <= *(long *)(param_1 + 0x40);
}



/* Entry: 1063ed3ac; end: 1063ed3d7; -[SCUserStoriesAdRuleTracker enoughTimeViewed] */

bool FUN_1063ed3ac(double param_1,long param_2)

{
  func_0x00010be9cae0();
  return *(double *)(param_2 + 0x18) <= param_1;
}



/* Entry: 1063ed3d8; end: 1063ed3fb; -[SCUserStoriesAdRuleTracker timeGapFromNextAdInSec] */

double FUN_1063ed3d8(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x18);
  func_0x00010be9cae0();
  return dVar1 - param_1;
}



/* Entry: 1063ed3fc; end: 1063ed43b; -[SCUserStoriesAdRuleTracker setAdRulesForFirstSessionAd] */

void FUN_1063ed3fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0cdb80();
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x00010c0cdcc0(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x18) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0cdae0();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}



/* Entry: 1063ed43c; end: 1063ed47b; -[SCUserStoriesAdRuleTracker setAdRulesForNonFirstSessionAd] */

void FUN_1063ed43c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0cdb40();
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x00010c0cdca0(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x18) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0cdaa0();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}



/* Entry: 1063ed47c; end: 1063ed48b; -[SCUserStoriesAdRuleTracker incrementStoriesViewed] */

void FUN_1063ed47c(long param_1)

{
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  return;
}



/* Entry: 1063ed48c; end: 1063ed493; -[SCUserStoriesAdRuleTracker resetSnapsViewed] */

void FUN_1063ed48c(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1063ed494; end: 1063ed4a3; -[SCUserStoriesAdRuleTracker incrementSnapsViewed] */

void FUN_1063ed494(long param_1)

{
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  return;
}



/* Entry: 1063ed4a4; end: 1063ed4d7; -[SCUserStoriesAdRuleTracker startSessionAdTimer] */

void FUN_1063ed4a4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    lVar1 = param_1;
    FUN_1063ed618();
    *(long *)(param_1 + 0x48) = lVar1;
  }
  return;
}



/* Entry: 1063ed4d8; end: 1063ed523; -[SCUserStoriesAdRuleTracker stopSessionAdTimer] */

void FUN_1063ed4d8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
    lVar1 = param_1;
    FUN_1063ed618();
    *(long *)(param_1 + 0x30) = (lVar1 - *(long *)(param_1 + 0x48)) + *(long *)(param_1 + 0x30);
    FUN_1063ed618();
    *(long *)(param_1 + 0x28) = lVar1;
  }
  return;
}



/* Entry: 1063ed524; end: 1063ed55b; -[SCUserStoriesAdRuleTracker reset] */

void FUN_1063ed524(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar1 = param_1;
    FUN_1063ed618();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(long *)(param_1 + 0x48) = lVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 1063ed55c; end: 1063ed5af; -[SCUserStoriesAdRuleTracker _secondsSinceLastReset] */

double FUN_1063ed55c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar1 = param_1;
    FUN_1063ed618();
    lVar1 = lVar1 - *(long *)(param_1 + 0x48);
  }
  else {
    lVar1 = 0;
  }
  return (double)(lVar1 + lVar2) / 1000.0;
}



/* Entry: 1063ed5b0; end: 1063ed5b7; -[SCUserStoriesAdRuleTracker storiesViewed] */

undefined8 FUN_1063ed5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1063ed5b8; end: 1063ed5bf; -[SCUserStoriesAdRuleTracker snapsViewed] */

undefined8 FUN_1063ed5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1063ed5c0; end: 1063ed5c3; -[SCUserStoriesAdRuleTracker timeViewedSeconds] */

void FUN_1063ed5c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9caf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__secondsSinceLastReset_112584c60);
  return;
}



/* Entry: 1063ed5c4; end: 1063ed60b; -[SCUserStoriesAdRuleTracker timeViewedMilliseconds] */

double FUN_1063ed5c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar1 = param_1;
    FUN_1063ed618();
    lVar1 = lVar1 - *(long *)(param_1 + 0x48);
  }
  else {
    lVar1 = 0;
  }
  return (double)(lVar1 + lVar2);
}



/* Entry: 1063ed60c; end: 1063ed617; -[SCUserStoriesAdRuleTracker .cxx_destruct] */

void FUN_1063ed60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1063ed618; end: 1063ed66b;  */

undefined * FUN_1063ed618(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c067fc0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1063ed66c; end: 1063ed9e3;  */

void FUN_1063ed66c(double param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bfad4c0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010c11afa0();
    if ((int)puVar1 == 0) {
      lVar2 = param_2;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdb00();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdaa0();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cda60();
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdce0();
        dVar11 = param_1;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdca0();
        dVar12 = dVar11;
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bef2f80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cdd00();
        dVar10 = dVar12;
        _objc_release(lVar2);
        goto LAB_1063ed878;
      }
      func_0x00010c11b100();
      func_0x00010c11b0e0();
      func_0x00010c11b0c0();
      puVar1 = param_3;
      func_0x00010c11b140(param_3);
      puVar3 = param_3;
      func_0x00010c11b120(param_3);
      puVar4 = param_3;
      func_0x00010c11b160(param_3);
      dVar10 = param_1;
    }
    else {
      func_0x00010c11b340();
      func_0x00010c11b300();
      func_0x00010c11b320();
      puVar1 = PTR_PTR_1126b8c98;
      func_0x00010c11b380(PTR_PTR_1126b8c98);
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010c11b360(PTR_PTR_1126b8c98);
      puVar4 = PTR_PTR_1126b8c98;
      func_0x00010c11b2e0(PTR_PTR_1126b8c98);
      dVar10 = param_1;
    }
    dVar11 = (double)(long)puVar3;
    param_1 = (double)(long)puVar1;
    dVar12 = (double)(long)puVar4;
  }
  else {
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar10 = param_1;
    param_1 = 0.0;
  }
LAB_1063ed878:
  puVar1 = PTR_PTR_1126ca508;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdac0();
  lVar5 = param_2;
  func_0x00010bef2f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cdc80();
  lVar6 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48240();
  lVar7 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48200();
  lVar8 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf481e0();
  lVar9 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48220();
  func_0x00010c02c0e0(param_1,dVar11,0,dVar10,dVar12,puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063ed9e4; end: 1063eda87; -[SCAdPublisherAdRuleTracker initWithInteractionTimer:] */

undefined1 * FUN_1063ed9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f11f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0x7fffffff;
    *(undefined8 *)((long)puVar1 + 8) = 0x7fffffff;
    *(undefined8 *)((long)puVar1 + 0x20) = 0xffffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063eda88; end: 1063edab7; -[SCAdPublisherAdRuleTracker updateInsertionRuleConfiguration:] */

void FUN_1063eda88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063edab8; end: 1063edacb; -[SCAdPublisherAdRuleTracker enoughSnapsViewed] */

bool FUN_1063edab8(long param_1)

{
  return *(long *)(param_1 + 8) <= *(long *)(param_1 + 0x30);
}



/* Entry: 1063edacc; end: 1063edae7; -[SCAdPublisherAdRuleTracker enoughTimeViewed] */

bool FUN_1063edacc(double param_1)

{
  func_0x00010c26f240();
  return param_1 <= 0.0;
}



/* Entry: 1063edae8; end: 1063edb47; -[SCAdPublisherAdRuleTracker timeGapFromNextAdInSec] */

void FUN_1063edae8(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  func_0x00010c0cd860(*(undefined8 *)(param_2 + 0x60));
  puVar1 = PTR_PTR_1126afec0;
  if (param_1 <= (double)lVar3) {
    param_1 = (double)lVar3;
  }
  func_0x00010c155420(PTR_PTR_1126afec0);
  dVar2 = param_1;
  func_0x00010bfc1ec0(*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 - dVar2,puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063edb48; end: 1063edb87; -[SCAdPublisherAdRuleTracker setAdRulesForFirstSessionAd] */

void FUN_1063edb48(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c0cdae0();
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x00010c0cdcc0(*(undefined8 *)(param_2 + 0x60));
  *(long *)(param_2 + 0x10) = (long)param_1;
  *(undefined1 *)(param_2 + 0x68) = 1;
  return;
}



/* Entry: 1063edb88; end: 1063edbc3; -[SCAdPublisherAdRuleTracker setAdRulesForNonFirstSessionAd] */

void FUN_1063edb88(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c0cdaa0();
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x00010c0cdca0(*(undefined8 *)(param_2 + 0x60));
  *(long *)(param_2 + 0x10) = (long)param_1;
  *(undefined1 *)(param_2 + 0x68) = 0;
  return;
}



/* Entry: 1063edbc4; end: 1063edbcb; -[SCAdPublisherAdRuleTracker resetSnapsViewed] */

void FUN_1063edbc4(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1063edbcc; end: 1063edbdb; -[SCAdPublisherAdRuleTracker incrementSnapsViewed] */

void FUN_1063edbcc(long param_1)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return;
}



/* Entry: 1063edbdc; end: 1063edbe3; -[SCAdPublisherAdRuleTracker setSnapsRemaining:] */

void FUN_1063edbdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1063edbe4; end: 1063edbeb; -[SCAdPublisherAdRuleTracker snapsRemaining] */

undefined8 FUN_1063edbe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1063edbec; end: 1063edbf3; -[SCAdPublisherAdRuleTracker startSessionAdTimer] */

void FUN_1063edbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_start_112671080);
  return;
}


