/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10639e9b8; end: 10639e9c3; -[SCAdAppInstallSession setOperaController:] */

void FUN_10639e9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10639e9c4; end: 10639e9cf; -[SCAdAppInstallSession setEventAnnouncer:] */

void FUN_10639e9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10639e9d0; end: 10639ea8f; -[SCAdAppInstallSession registeredEventsForOperaSession] */

void FUN_10639e9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a10;
  puStack_48 = puVar1;
  func_0x00010bfcf920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_48;
  uVar11 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  func_0x00010be36bc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar10;
  func_0x00010c0720c0(ppuVar10,param_2,puVar2);
  if ((int)ppuVar4 == 0) {
    puVar3 = PTR_PTR_1126c9a10;
    func_0x00010bfcf920(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar10;
    func_0x00010c0720c0(ppuVar10,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)ppuVar4 == 0) goto LAB_10639eb4c;
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010be77c20(puVar1);
LAB_10639eb4c:
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    lVar5 = *(long *)(puVar1 + 8);
    func_0x00010bef4800(lVar5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      lVar7 = *(long *)(puVar1 + 8);
      func_0x00010bef37e0(lVar7,param_2,uVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c09c880();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bef60a0();
      _objc_release(lVar8);
      _objc_release(lVar6);
      if (lVar9 == 1) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010c0e9c40(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar10;
        func_0x00010c0720c0(ppuVar10,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)ppuVar4 != 0) {
          func_0x00010be77c00(puVar1,param_2,lVar7);
        }
      }
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
  }
  _objc_release(puVar3);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 10639ea90; end: 10639ec83; -[SCAdAppInstallSession operaViewDidSendEvent:page:params:] */

void FUN_10639ea90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126c9a10;
    func_0x00010bfcf920(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_10639eb4c;
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010be77c20(param_1);
LAB_10639eb4c:
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010bef4800(lVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      lVar7 = *(long *)(param_1 + 8);
      func_0x00010bef37e0(lVar7,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c09c880();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bef60a0();
      _objc_release(lVar8);
      _objc_release(lVar4);
      if (lVar9 == 1) {
        puVar1 = PTR_PTR_1126b2330;
        func_0x00010c0e9c40(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 != 0) {
          func_0x00010be77c00(param_1,param_2,lVar7);
        }
      }
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639ec84; end: 10639ee27; -[SCAdAppInstallSession _preloadStoreProductIfNeeded] */

void FUN_10639ec84(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x00010c23da00();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    FUN_1063b9b7c();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    func_0x00010bf97a80(*(undefined8 *)(param_1 + 8));
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c23d9e0();
  if ((iVar1 != 0) && ((*(byte *)(puStack_68 + 3) & 1) == 0)) {
    func_0x00010be772a0(param_1);
  }
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 10639ee28; end: 10639eeef;  */

bool FUN_10639ee28(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be77bc0(uVar2,param_2,param_2);
  if ((int)uVar2 == 0) {
    bVar1 = *(long *)(param_1 + 0x30) <= param_3 + 1;
  }
  else {
    bVar1 = true;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return bVar1;
}



/* Entry: 10639eef0; end: 10639efbf; -[SCAdAppInstallSession _preloadStoreProductForItem:] */

long FUN_10639eef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef37c0(lVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x00010c09c880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef60a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      func_0x00010be77c00(param_1,param_2,lVar4);
      goto LAB_10639efa0;
    }
  }
  param_1 = 0;
LAB_10639efa0:
  _objc_release(lVar4);
  return param_1;
}



/* Entry: 10639efc0; end: 10639f063; -[SCAdAppInstallSession _preloadStoreProductForAdMetadata:] */

undefined8 FUN_10639efc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c09c880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef60a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      func_0x00010be77c00(param_1,param_2,param_3);
      goto LAB_10639f044;
    }
  }
  param_1 = 0;
LAB_10639f044:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10639f064; end: 10639f21f; -[SCAdAppInstallSession _preloadStoreProductForItemUah:] */

bool FUN_10639f064(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c076b80();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c09c880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c09c880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf0ccc0(uVar3,param_2,uVar5,uVar9,uVar6,uVar7,0,0,3,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10639f220;
    puStack_70 = &UNK_11091fc48;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10639f234;
    puStack_98 = &UNK_110849810;
    lStack_90 = param_1;
    lStack_68 = param_1;
    func_0x00010c0c0800(uVar8,param_2,&puStack_88,&puStack_b0);
    bVar1 = *(long *)(param_1 + 0x30) != 0;
    _objc_release(uVar8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10639f220; end: 10639f237;  */

void FUN_10639f220(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be77950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__preloadAttachment__11257b7f0,param_2);
    return;
  }
  return;
}



/* Entry: 10639f238; end: 10639f333; -[SCAdAppInstallSession _preloadAttachment:] */

void FUN_10639f238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d180();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1085e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10639f334;
    puStack_40 = &UNK_11091fc78;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10639f368;
    puStack_68 = &UNK_110849810;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010c0c0800(uVar2,param_2,&puStack_58,&puStack_80);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639f334; end: 10639f367;  */

void FUN_10639f334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10639f368; end: 10639f36b;  */

void FUN_10639f368(void)

{
  return;
}



/* Entry: 10639f36c; end: 10639f49b; -[SCAdAppInstallSession _prefetchIfNextGroupIsAd] */

void FUN_10639f36c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfce580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9a78;
      func_0x00010c1015e0(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0(lVar1,param_2,puVar5);
      if ((int)lVar2 != 0) {
        lVar2 = lVar4;
        func_0x00010bf5f0a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be77be0(param_1,param_2,lVar2);
        _objc_release(lVar2);
      }
      _objc_release(puVar5);
      _objc_release(lVar1);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10639f49c; end: 10639f4b3; -[SCAdAppInstallSession playlistItemController] */

void FUN_10639f49c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639f4b4; end: 10639f4bf; -[SCAdAppInstallSession setPlaylistItemController:] */

void FUN_10639f4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10639f4c0; end: 10639f4d7; -[SCAdAppInstallSession operaController] */

void FUN_10639f4c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639f4d8; end: 10639f4ef; -[SCAdAppInstallSession eventAnnouncer] */

void FUN_10639f4d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639f4f0; end: 10639f567; -[SCAdAppInstallSession .cxx_destruct] */

void FUN_10639f4f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10639f568; end: 10639f6f3; -[SCAdApplePrivacySession initWithAdDataSource:adConfigProvider:adConfigProviderV2:] */

undefined1 *
FUN_10639f568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f10f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    _objc_release();
    func_0x0001004fa1d0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10639f6f4; end: 10639f703;  */

void FUN_10639f6f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adApplePromptScopeLauncher_11259a0d8);
  return;
}



/* Entry: 10639f704; end: 10639f997; -[SCAdApplePrivacySession _registeredEventsForOperaSession] */

void FUN_10639f704(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined **ppuVar16;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf8f460();
  _objc_release();
  puVar15 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar2 != 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf3df00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2330;
    puStack_e0 = puVar1;
    func_0x00010bf17f80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6160;
    puStack_d8 = puVar2;
    func_0x00010bf3d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2330;
    puStack_d0 = puVar3;
    func_0x00010c13a0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2ea8;
    puStack_c8 = puVar4;
    func_0x00010c0b4cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2ea8;
    puStack_c0 = puVar5;
    func_0x00010c235940();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9460;
    puStack_b8 = puVar6;
    func_0x00010c0f25a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9460;
    puStack_b0 = puVar7;
    func_0x00010c0f2600();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b2638;
    puStack_a8 = puVar8;
    func_0x00010c08ea60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9460;
    puStack_a0 = puVar9;
    func_0x00010c269c80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9460;
    puStack_98 = puVar10;
    func_0x00010c269c60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c9460;
    puStack_90 = puVar11;
    func_0x00010bf11320();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b2330;
    puStack_88 = puVar12;
    func_0x00010c0e9c40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b2330;
    puStack_80 = puVar13;
    func_0x00010c0e9c60();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_e0;
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    ppuVar16 = (undefined **)(puVar1 + 0x58);
    _objc_loadWeakRetained();
    _objc_release();
    if (ppuVar16 != param_3) {
      puVar2 = puVar1 + 0x58;
      _objc_loadWeakRetained(puVar2);
      func_0x00010c12cf80();
      _objc_release(puVar2);
      _objc_storeWeak(puVar1 + 0x58,param_3);
      _objc_retain();
      func_0x00010be89fa0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef99a0(param_3);
      _objc_release(puVar1);
      _objc_release(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10639f998; end: 10639fa43; -[SCAdApplePrivacySession setEventAnnouncing:] */

void FUN_10639f998(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12cf80();
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + 0x58,param_3);
    _objc_retain();
    func_0x00010be89fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_3);
    _objc_release(param_1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639fa44; end: 10639fdfb; -[SCAdApplePrivacySession operaViewDidSendEvent:page:params:] */

void FUN_10639fa44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar3 = uVar11;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010c08ea60(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  uVar11 = uVar3;
  if ((int)uVar6 != 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    _objc_retain(uVar11);
    _objc_release(uVar3);
  }
  uVar3 = uVar11;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) goto LAB_10639fcd4;
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    puVar5 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_3);
    if ((int)uVar6 != 0) goto LAB_10639fb9c;
    uVar12 = *(ulong *)(param_1 + 0x10);
    uVar3 = uVar11;
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar12);
    _objc_retain(uVar6);
    uVar3 = uVar11;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b8e08;
    if ((uVar7 & 1) == 0) {
LAB_10639fcb4:
      _objc_release(uVar6);
      _objc_release(uVar12);
      _objc_release(uVar6);
    }
    else {
      _objc_retain(uVar12);
      _objc_opt_class(puVar4);
      uVar7 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar4);
      uVar3 = uVar12;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar12);
      if ((uVar3 == 0) || (uVar7 = uVar12, func_0x00010bef60a0(), uVar7 == 5)) {
        _objc_release(uVar3);
        goto LAB_10639fcb4;
      }
      func_0x00010bef4240(uVar12);
      uVar8 = uVar6;
      func_0x00010bf8f480();
      _objc_release(uVar12);
      _objc_release(uVar6);
      _objc_release(uVar12);
      _objc_release(uVar6);
      if ((int)uVar8 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar9);
        uVar6 = uVar10;
        func_0x00010bf1f480();
        ppuVar1 = &PTR_PTR_1126c5348;
        if ((int)uVar6 == 0) {
          ppuVar1 = &PTR_PTR_1126c5350;
        }
        iVar2 = (int)*ppuVar1;
        func_0x00010c0db820();
        _objc_release(uVar9);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        if (iVar2 != 0) {
          func_0x00010bef4240(uVar12);
          func_0x00010be84b20(param_1);
        }
      }
    }
  }
  else {
    _objc_release(puVar4);
    _objc_release(param_3);
LAB_10639fb9c:
    _objc_retain(uVar11);
    uVar12 = *(ulong *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = uVar11;
  }
  _objc_release(uVar12);
LAB_10639fcd4:
  _objc_release(uVar11);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639fdfc; end: 10639ff7b; -[SCAdApplePrivacySession _pushApplePromptVCWithAdProductType:] */

void FUN_10639fdfc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfe63a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126aeaf8;
    _objc_alloc();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0311a0();
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar4;
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010bf23880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfe63a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10639ff7c; end: 1063a0093;  */

void FUN_10639ff7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    func_0x00010c10eda0(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1063a0094; end: 1063a00bf;  */

void FUN_1063a0094(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a00c0; end: 1063a00d3;  */

void FUN_1063a00c0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001063a00cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 1063a00d4; end: 1063a0157; -[SCAdApplePrivacySession adApplePromptWillDimiss:] */

void FUN_1063a00d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 1063a0158; end: 1063a0163; -[SCAdApplePrivacySession adApplePromptDidDimiss:] */

void FUN_1063a0158(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be95dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeOpera_112583110);
  return;
}



/* Entry: 1063a0164; end: 1063a01a7; -[SCAdApplePrivacySession _resumeOpera] */

void FUN_1063a0164(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a01a8; end: 1063a0223; -[SCAdApplePrivacySession _pauseOpera] */

void FUN_1063a01a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063a0224; end: 1063a023b; -[SCAdApplePrivacySession playlistItemController] */

void FUN_1063a0224(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a023c; end: 1063a0247; -[SCAdApplePrivacySession setPlaylistItemController:] */

void FUN_1063a023c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1063a0248; end: 1063a025f; -[SCAdApplePrivacySession operaControlling] */

void FUN_1063a0248(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a0260; end: 1063a026b; -[SCAdApplePrivacySession setOperaControlling:] */

void FUN_1063a0260(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1063a026c; end: 1063a0283; -[SCAdApplePrivacySession eventAnnouncing] */

void FUN_1063a026c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a0284; end: 1063a0313; -[SCAdApplePrivacySession .cxx_destruct] */

void FUN_1063a0284(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1063a0314; end: 1063a0397; -[SCAdCollectionAdSession initWithAdDataSource:useSwiftDataModels:] */

undefined1 *
FUN_1063a0314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f10f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063a0398; end: 1063a03a3; -[SCAdCollectionAdSession setEventAnnouncer:] */

void FUN_1063a0398(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1063a03a4; end: 1063a0437; -[SCAdCollectionAdSession registeredEventsForOperaSession] */

void FUN_1063a03a4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulong in_x4;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar11 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ca1e8;
  func_0x00010bf7e1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(uVar12);
  _objc_retain(in_x4);
  uVar4 = uVar12;
  func_0x00010be36bc0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2 + 0x18;
  _objc_loadWeakRetained();
  puVar5 = puVar3;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *(long *)(puVar2 + 8);
    func_0x00010bef4800();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    if (lVar7 != 0) {
      puVar3 = PTR_PTR_1126ca1e8;
      func_0x00010bf7e1e0(PTR_PTR_1126ca1e8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined1 *)ppuVar11;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)puVar8 != 0) {
        puVar3 = PTR_PTR_1126ca228;
        func_0x00010bf5efc0(PTR_PTR_1126ca228);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar10 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar3);
        uVar1 = uVar9;
        if ((uVar10 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar9);
        func_0x00010be286e0(puVar2);
        _objc_release(uVar1);
      }
    }
    _objc_release(lVar6);
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(in_x4);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1063a0438; end: 1063a05f3; -[SCAdCollectionAdSession operaViewDidSendEvent:page:params:] */

void FUN_1063a0438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bef4800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar6 = PTR_PTR_1126ca1e8;
      func_0x00010bf7e1e0(PTR_PTR_1126ca1e8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      if ((int)uVar7 != 0) {
        puVar6 = PTR_PTR_1126ca228;
        func_0x00010bf5efc0(PTR_PTR_1126ca228);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar9 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar6);
        uVar1 = uVar8;
        if ((uVar9 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        func_0x00010be286e0(param_1);
        _objc_release(uVar1);
      }
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a05f4; end: 1063a07bb; -[SCAdCollectionAdSession _handleDidUpdateFocusedItemWithIndex:page:params:] */

void FUN_1063a05f4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  puVar12 = param_4;
  uVar13 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_1;
    puVar11 = param_3;
    puVar12 = param_4;
    uVar13 = param_5;
    func_0x00010be46060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a4480();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      puVar2 = PTR_PTR_1126ca320;
      func_0x00010c274f00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ca1a8;
      func_0x00010c084640();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ca1a8;
      func_0x00010c2a3b80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = 2;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      puVar12 = puVar10;
      func_0x00010c0eb7e0(param_1);
      _objc_release(puVar10);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(param_1);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    _objc_retain(uVar13);
    puVar2 = puVar12;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bfe00;
    func_0x00010bef2420(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar5 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar2);
    puVar2 = puVar6;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126ca328;
    func_0x00010c084640(PTR_PTR_1126ca328);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar5);
    uVar13 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar13 = 0;
    }
    _objc_retain(uVar13);
    _objc_release(uVar7);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar13 == 0) {
      _objc_retain(puVar11);
      puVar5 = puVar11;
    }
    else {
      func_0x00010c067fc0(uVar7);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar12;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126bfe00;
    func_0x00010bef22e0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar6);
    puVar6 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar9);
    if (puVar6 == (undefined *)0x0) {
      puVar9 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar9);
    }
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c067fc0();
    if (((long)puVar6 < 1) || (puVar10 = puVar2, func_0x00010bf529e0(), puVar10 < puVar6)) {
      _objc_retain(puVar9);
      puVar6 = puVar9;
    }
    else {
      puVar6 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar6 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      ppuVar1 = &PTR_PTR_1126ca330;
      if (param_3[0x10] == '\0') {
        ppuVar1 = &PTR_PTR_1126ca338;
      }
      puVar10 = *ppuVar1;
      _objc_alloc(puVar10);
      func_0x00010c03b740();
    }
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(uVar13);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 1063a07bc; end: 1063a0ab7; -[SCAdCollectionAdSession _itemToPresentWithFocusedItemIndex:page:params:] */

void FUN_1063a07bc(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bfe00;
  func_0x00010bef2420(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar4 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar3);
  puVar3 = puVar5;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  puVar4 = PTR_PTR_1126ca328;
  func_0x00010c084640(PTR_PTR_1126ca328);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar1 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  else {
    func_0x00010c067fc0(uVar6);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bfe00;
  func_0x00010bef22e0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar9 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar5);
  puVar5 = puVar8;
  if (((ulong)puVar9 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar8);
  if (puVar5 == (undefined *)0x0) {
    puVar8 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar8);
  }
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c067fc0();
  if (((long)puVar5 < 1) || (puVar9 = puVar3, func_0x00010bf529e0(), puVar9 < puVar5)) {
    _objc_retain(puVar8);
    puVar5 = puVar8;
  }
  else {
    puVar5 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar5 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    ppuVar2 = &PTR_PTR_1126ca330;
    if (*(char *)(param_1 + 0x10) == '\0') {
      ppuVar2 = &PTR_PTR_1126ca338;
    }
    puVar9 = *ppuVar2;
    _objc_alloc(puVar9);
    func_0x00010c03b740();
  }
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1063a0ab8; end: 1063a0acf; -[SCAdCollectionAdSession playlistItemController] */

void FUN_1063a0ab8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a0ad0; end: 1063a0adb; -[SCAdCollectionAdSession setPlaylistItemController:] */

void FUN_1063a0ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1063a0adc; end: 1063a0af3; -[SCAdCollectionAdSession eventAnnouncer] */

void FUN_1063a0adc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a0af4; end: 1063a0b27; -[SCAdCollectionAdSession .cxx_destruct] */

void FUN_1063a0af4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063a0b28; end: 1063a0c4b; -[SCAdDeepLinkSession initWithAdDataSource:adConfigProvider:adConfigProviderV2:attachmentPreloader:applicationPreferences:] */

undefined1 *
FUN_1063a0b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1100;
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



/* Entry: 1063a0c4c; end: 1063a0c57; -[SCAdDeepLinkSession setOperaController:] */

void FUN_1063a0c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1063a0c58; end: 1063a0c63; -[SCAdDeepLinkSession setEventAnnouncer:] */

void FUN_1063a0c58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1063a0c64; end: 1063a0d23; -[SCAdDeepLinkSession registeredEventsForOperaSession] */

void FUN_1063a0c64(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a10;
  func_0x00010bfcf920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  iVar1 = (int)*(undefined8 *)(puVar2 + 0x10);
  func_0x00010bf91ac0();
  if (iVar1 != 0) {
    func_0x00010c23da00();
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    puVar3 = puVar2 + 0x38;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    FUN_1063b9b7c();
    _objc_release(puVar4);
    _objc_release(puVar3);
    iVar1 = (int)*(undefined8 *)(puVar2 + 0x10);
    func_0x00010c23d9e0();
    if ((iVar1 != 0) && ((*(byte *)(puStack_c8 + 3) & 1) == 0)) {
      func_0x00010be772a0(puVar2);
    }
    __Block_object_dispose(&uStack_d0,8);
    __Block_object_dispose(&uStack_b0,8);
  }
  return;
}



/* Entry: 1063a0d24; end: 1063a0e5b; -[SCAdDeepLinkSession _preloadStoreProductIfNeeded] */

void FUN_1063a0d24(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf91ac0();
  if (iVar1 != 0) {
    func_0x00010c23da00();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    FUN_1063b9b7c();
    _objc_release(lVar3);
    _objc_release(lVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c23d9e0();
    if ((iVar1 != 0) && ((*(byte *)(puStack_78 + 3) & 1) == 0)) {
      func_0x00010be772a0(param_1);
    }
    __Block_object_dispose(&uStack_80,8);
    __Block_object_dispose(&uStack_60,8);
  }
  return;
}



/* Entry: 1063a0e5c; end: 1063a0ecf;  */

void FUN_1063a0e5c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be77be0(uVar2,param_2,param_2);
  if ((int)uVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    *param_3 = lVar1 <= *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  }
  else {
    *param_3 = 1;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 1063a0ed0; end: 1063a1047; -[SCAdDeepLinkSession _preloadStoreProductForItem:] */

long FUN_1063a0ed0(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar9 = *(long *)(param_1 + 8);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef37c0(lVar9,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar9 != 0) {
    lVar1 = lVar9;
    func_0x00010c09c880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef60a0();
    if (lVar3 == 6) {
      lVar3 = lVar9;
      func_0x00010c09c880();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf67dc0();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar8 == 2) {
        func_0x00010be77c00(param_1,param_2,lVar9);
        goto LAB_1063a1020;
      }
    }
    else {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  param_1 = 0;
LAB_1063a1020:
  _objc_release(lVar9);
  return param_1;
}



/* Entry: 1063a1048; end: 1063a11ff; -[SCAdDeepLinkSession _preloadStoreProductForItemUah:] */

bool FUN_1063a1048(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c076b80();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010c09c880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c09c880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf0ccc0(uVar4,param_2,uVar6,uVar2,uVar7,uVar8,0,0,3,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1063a1200;
    puStack_70 = &UNK_11091fc48;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1063a1214;
    puStack_98 = &UNK_110849810;
    lStack_90 = param_1;
    lStack_68 = param_1;
    func_0x00010c0c0800(uVar9,param_2,&puStack_88,&puStack_b0);
    bVar1 = *(long *)(param_1 + 0x30) != 0;
    _objc_release(uVar9);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1063a1200; end: 1063a1217;  */

void FUN_1063a1200(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be77950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__preloadAttachment__11257b7f0,param_2);
    return;
  }
  return;
}



/* Entry: 1063a1218; end: 1063a1313; -[SCAdDeepLinkSession _preloadAttachment:] */

void FUN_1063a1218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d180();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1085e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1063a1314;
    puStack_40 = &UNK_11091fc78;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1063a1348;
    puStack_68 = &UNK_110849810;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010c0c0800(uVar2,param_2,&puStack_58,&puStack_80);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a1314; end: 1063a1347;  */

void FUN_1063a1314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063a1348; end: 1063a134b;  */

void FUN_1063a1348(void)

{
  return;
}



/* Entry: 1063a134c; end: 1063a13ff; -[SCAdDeepLinkSession operaViewDidSendEvent:page:params:] */

void FUN_1063a134c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126c9a10;
    func_0x00010bfcf920(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_1063a13e8;
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010be77c20(param_1);
LAB_1063a13e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a1400; end: 1063a152f; -[SCAdDeepLinkSession _prefetchIfNextGroupIsAd] */

void FUN_1063a1400(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfce580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9a78;
      func_0x00010c1015e0(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0(lVar1,param_2,puVar5);
      if ((int)lVar2 != 0) {
        lVar2 = lVar4;
        func_0x00010bf5f0a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be77be0(param_1,param_2,lVar2);
        _objc_release(lVar2);
      }
      _objc_release(puVar5);
      _objc_release(lVar1);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1063a1530; end: 1063a1547; -[SCAdDeepLinkSession playlistItemController] */

void FUN_1063a1530(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a1548; end: 1063a1553; -[SCAdDeepLinkSession setPlaylistItemController:] */

void FUN_1063a1548(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1063a1554; end: 1063a156b; -[SCAdDeepLinkSession operaController] */

void FUN_1063a1554(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a156c; end: 1063a1583; -[SCAdDeepLinkSession eventAnnouncer] */

void FUN_1063a156c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a1584; end: 1063a15fb; -[SCAdDeepLinkSession .cxx_destruct] */

void FUN_1063a1584(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1063a15fc; end: 1063a1783; -[SCAdLensEarnedImpressionTrackingSession initWithAdConfigProvider:skAdNetworkMetricsManager:appImpressionTracker:skAdNetwork:viewLocation:] */

undefined1 *
FUN_1063a15fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f1108;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063a1784; end: 1063a178b; -[SCAdLensEarnedImpressionTrackingSession tearDown] */

void FUN_1063a1784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1063a178c; end: 1063a186b; -[SCAdLensEarnedImpressionTrackingSession registeredEventsForOperaSession] */

void FUN_1063a178c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_50 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_48 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  uVar5 = uVar8;
  func_0x00010c06b7e0();
  if ((uVar5 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar2);
    if ((int)puVar6 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar7;
      func_0x00010c0720c0(ppuVar7,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar6 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = (undefined1 *)ppuVar7;
        func_0x00010c0720c0(ppuVar7,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)puVar6 != 0) {
          func_0x00010be09b20(puVar1,param_2,uVar8);
        }
        goto LAB_1063a1920;
      }
    }
    else {
      _objc_release(puVar2);
    }
    func_0x00010bec02e0(puVar1,param_2,uVar8);
  }
LAB_1063a1920:
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 1063a186c; end: 1063a1983; -[SCAdLensEarnedImpressionTrackingSession operaViewDidSendEvent:page:params:] */

void FUN_1063a186c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c06b7e0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    if ((int)uVar3 == 0) {
      puVar4 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
      if ((int)uVar3 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)uVar3 != 0) {
          func_0x00010be09b20(param_1,param_2,param_4);
        }
        goto LAB_1063a1920;
      }
    }
    else {
      _objc_release(puVar2);
    }
    func_0x00010bec02e0(param_1,param_2,param_4);
  }
LAB_1063a1920:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a1984; end: 1063a1c97; -[SCAdLensEarnedImpressionTrackingSession _startLensEarnedViewThroughImpressionIfNeededWithPage:] */

void FUN_1063a1984(float param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf1f480();
  _objc_release(uVar9);
  if ((int)uVar11 == 0) {
    lVar1 = param_4;
    FUN_1063a1c9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar2 = lVar1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010befe1a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c29e460(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(lVar2);
      if (2.2 <= param_1) {
        lVar10 = *(long *)(param_2 + 0x38);
        lVar2 = lVar1;
        func_0x00010bf3cf60(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(lVar10,param_3,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar10 == 0) {
          puVar4 = PTR_PTR_1126ca340;
          _objc_alloc(PTR_PTR_1126ca340);
          lVar2 = lVar1;
          func_0x00010befe1a0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar2;
          func_0x00010bef2c20();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar11 = *(undefined8 *)(param_2 + 0x10);
          lVar5 = lVar1;
          func_0x00010befe1a0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c06aee0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c067fc0();
          func_0x00010c0df780(puVar8,param_3,lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff1940(puVar4,param_3,lVar3,lVar10,0,uVar11,puVar8,
                              *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20),2);
          uVar11 = *(undefined8 *)(param_2 + 0x38);
          lVar7 = lVar1;
          func_0x00010bf3cf60(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar11,param_3,puVar4,lVar7);
          _objc_release(lVar7);
          _objc_release(puVar4);
          _objc_release(puVar8);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar10);
          _objc_release(lVar2);
        }
        uVar11 = *(undefined8 *)(param_2 + 0x38);
        lVar2 = lVar1;
        func_0x00010bf3cf60(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar11,param_3,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24ef60();
        _objc_release(uVar11);
        _objc_release(lVar2);
      }
      _objc_release(lVar3);
    }
  }
  else {
    lVar1 = param_2;
    func_0x00010bdccb20(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    if (lVar1 != 0) {
      func_0x00010c24efc0(*(undefined8 *)(param_2 + 0x18),param_3,lVar1,
                          *(undefined8 *)(param_2 + 0x28),&PTR___NSConcreteGlobalBlock_11091fd08);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063a1c98; end: 1063a1c9b;  */

void FUN_1063a1c98(void)

{
  return;
}



/* Entry: 1063a1c9c; end: 1063a1d17;  */

void FUN_1063a1c9c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063a1d18; end: 1063a1ec3; -[SCAdLensEarnedImpressionTrackingSession _endLensEarnedViewThroughImpressionIfNeededWithPage:] */

void FUN_1063a1d18(float param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    lVar1 = param_4;
    FUN_1063a1c9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar2 = lVar1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010befe1a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c29e460(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(lVar2);
      if (2.2 <= param_1) {
        uVar5 = *(undefined8 *)(param_2 + 0x38);
        lVar2 = lVar1;
        func_0x00010bf3cf60(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar5,param_3,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94a60();
        _objc_release(uVar5);
        _objc_release(lVar2);
      }
      _objc_release(lVar3);
    }
  }
  else {
    lVar1 = param_2;
    func_0x00010bdccb20(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    if (lVar1 != 0) {
      func_0x00010bf94ac0(*(undefined8 *)(param_2 + 0x18),param_3,lVar1,
                          *(undefined8 *)(param_2 + 0x28),&PTR___NSConcreteGlobalBlock_11091fd28);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063a1ec4; end: 1063a1ec7;  */

void FUN_1063a1ec4(void)

{
  return;
}



/* Entry: 1063a1ec8; end: 1063a20f3; -[SCAdLensEarnedImpressionTrackingSession _appInstallParametersForPage:] */

void FUN_1063a1ec8(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  FUN_1063a1c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010befe1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar2;
    func_0x00010c29e460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar8);
    _objc_release(puVar1);
    if (param_1 < 2.2) {
      puVar8 = (undefined *)0x0;
      goto LAB_1063a20c4;
    }
    puVar1 = PTR_PTR_1126ca348;
    _objc_alloc(PTR_PTR_1126ca348);
    puVar8 = param_4;
    func_0x00010befe1a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ca350;
    func_0x00010c2815c0(PTR_PTR_1126ca350);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1720(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110ddea58,
                        &PTR____CFConstantStringClassReference_110ddea58,9,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar3 = PTR_PTR_1126ca358;
    _objc_alloc(PTR_PTR_1126ca358);
    func_0x00010c046bc0();
    puVar4 = PTR_PTR_1126ca360;
    _objc_alloc(PTR_PTR_1126ca360);
    func_0x00010bff13a0();
    puVar8 = PTR_PTR_1126bdcd0;
    _objc_alloc(PTR_PTR_1126bdcd0);
    puVar5 = param_4;
    func_0x00010befe1a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c06aee0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067fc0();
    func_0x00010bff33a0(puVar8,param_3,puVar7,0,0,puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_1063a20c4:
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1063a20f4; end: 1063a2153; -[SCAdLensEarnedImpressionTrackingSession .cxx_destruct] */

void FUN_1063a20f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063a2154; end: 1063a2263;  */

ulong FUN_1063a2154(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  if ((uVar5 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0720c0(param_1,param_2,puVar2);
    if ((uVar5 & 1) == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c0720c0(param_1,param_2,puVar3);
      if ((uVar5 & 1) == 0) {
        puVar4 = PTR_PTR_1126c9a10;
        func_0x00010c063ee0(PTR_PTR_1126c9a10);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c0720c0(param_1,param_2,puVar4);
        _objc_release(puVar4);
      }
      else {
        uVar5 = 1;
      }
      _objc_release(puVar3);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(puVar2);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1063a2264; end: 1063a230b; -[SCAdOperaEventStateTracker init] */

undefined1 * FUN_1063a2264(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1063a230c; end: 1063a2413; -[SCAdOperaEventStateTracker beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063a230c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1063a2414; end: 1063a245b;  */

void FUN_1063a2414(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be676c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a245c; end: 1063a2503; -[SCAdOperaEventStateTracker pageForAdIdentifier:snapIndex:triggerType:] */

void FUN_1063a245c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4c7b8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c296f60(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf5f780(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063a2504; end: 1063a25db; -[SCAdOperaEventStateTracker paramsForAdIdentifier:snapIndex:triggerType:] */

void FUN_1063a2504(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4c7b8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c296f60(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c29dfe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1063a25dc; end: 1063a2697; -[SCAdOperaEventStateTracker setPage:params:snapIndex:adIdentifier:triggerType:] */

void FUN_1063a25dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4c7b8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,puVar1);
  }
  if (param_4 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_4,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a2698; end: 1063a269f; -[SCAdOperaEventStateTracker resetLastCollectionItemIndex] */

void FUN_1063a2698(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b7a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastCollectionItemIndex__11264b8a8,0);
  return;
}



/* Entry: 1063a26a0; end: 1063a26af; -[SCAdOperaEventStateTracker updatePageParameterForAdIdentifer:withParams:snapIndex:triggerType:] */

void FUN_1063a26a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2883f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updatePage_params_snapIndex_adId_11267fb20,0,param_4,param_5,param_3,
             param_6);
  return;
}



/* Entry: 1063a26b0; end: 1063a28e3; -[SCAdOperaEventStateTracker updatePage:params:snapIndex:adIdentifier:triggerType:] */

void FUN_1063a26b0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4c7b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9b98;
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    puVar3 = puVar2;
    func_0x00010c2b53a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2400(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  }
  else {
    _objc_retain(param_3);
    puVar4 = param_3;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  }
  PTR__OBJC_CLASS___NSDictionary_1126ae670 = puVar2;
  if (param_4 == (undefined *)0x0) {
    _objc_opt_new(puVar2);
  }
  else {
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (lVar5 == 0) {
    func_0x00010c1d0640(uVar6,param_2,puVar4,puVar1);
  }
  else {
    func_0x00010c0e00e0(uVar6,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0f0ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,uVar7,puVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (lVar5 == 0) {
    func_0x00010c1d0640(uVar6,param_2,puVar2,puVar1);
  }
  else {
    func_0x00010c0e00e0(uVar6,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0d3c80();
    _objc_release(uVar6);
    func_0x00010bef7f60(uVar7,param_2,puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,uVar7,puVar1);
    _objc_release(uVar7);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a28e4; end: 1063a2953; -[SCAdOperaEventStateTracker setCurrentItem:snapIndex:adIdentifier:] */

void FUN_1063a28e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_5;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1063a2954; end: 1063a29c7; -[SCAdOperaEventStateTracker currentPage] */

void FUN_1063a2954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4c7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296f60(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063a29c8; end: 1063a2a0b; -[SCAdOperaEventStateTracker currentPageId] */

void FUN_1063a29c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063a2a0c; end: 1063a2a7f; -[SCAdOperaEventStateTracker currentParams] */

void FUN_1063a2a0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4c7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c296f60(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063a2a80; end: 1063a2bff; -[SCAdOperaEventStateTracker _onAdLifecycleEvent:] */

void FUN_1063a2a80(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release();
LAB_1063a2b0c:
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) == -1)) goto LAB_1063a2ad4;
    lVar3 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release();
      _objc_release(lVar2);
LAB_1063a2b5c:
      lVar3 = 0x70;
      goto LAB_1063a2ac4;
    }
    lVar3 = *(long *)(lVar3 + 0x28);
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 10) goto LAB_1063a2b5c;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    _objc_release();
    if (lVar2 == 0) goto LAB_1063a2b0c;
    lVar3 = 0x68;
LAB_1063a2ac4:
    _objc_retain(param_3);
    lVar2 = *(long *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
LAB_1063a2ad4:
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release();
LAB_1063a2b68:
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) != 8)) {
      lVar3 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        _objc_release();
        _objc_release(lVar2);
        goto LAB_1063a2bcc;
      }
      lVar3 = *(long *)(lVar3 + 0x28);
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 != 5) goto LAB_1063a2bcc;
    }
    else {
      _objc_release(lVar2);
    }
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    _objc_release();
    if (lVar2 != 7) goto LAB_1063a2b68;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x21) = uVar1;
LAB_1063a2bcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a2c00; end: 1063a2c17; -[SCAdOperaEventStateTracker operaControlling] */

void FUN_1063a2c00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a2c18; end: 1063a2c23; -[SCAdOperaEventStateTracker setOperaControlling:] */

void FUN_1063a2c18(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1063a2c24; end: 1063a2c3b; -[SCAdOperaEventStateTracker operaConfiguration] */

void FUN_1063a2c24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a2c3c; end: 1063a2c47; -[SCAdOperaEventStateTracker setOperaConfiguration:] */

void FUN_1063a2c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1063a2c48; end: 1063a2c5f; -[SCAdOperaEventStateTracker playlistItemController] */

void FUN_1063a2c48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a2c60; end: 1063a2c6b; -[SCAdOperaEventStateTracker setPlaylistItemController:] */

void FUN_1063a2c60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1063a2c6c; end: 1063a2c73; -[SCAdOperaEventStateTracker setCurrentParams:] */

void FUN_1063a2c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


