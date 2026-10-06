/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e824f4; end: 106e82843; -[SCGalleryLagunaContentDataSource _appendSpectaclesContent:toEntry:withSnap:] */

void FUN_106e824f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bebea00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ef820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010bebea00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c09ee20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar5 != 0) {
    func_0x00010c1a6360(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d2f00;
  _objc_alloc();
  func_0x00010c0067a0();
  _objc_initWeak(auStack_80,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106e82844;
  puStack_a0 = &UNK_110981a50;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar4);
  puStack_98 = puVar4;
  _objc_retain(param_3);
  ppuVar7 = &puStack_b8;
  uStack_90 = param_3;
  _objc_retainBlock();
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar8);
  _objc_retain(ppuVar7);
  func_0x00010bf071c0(lVar2);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  _objc_release(uStack_90);
  _objc_release(puStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e82844; end: 106e829eb;  */

void FUN_106e82844(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar6 = &uStack_130;
    param_5 = 0x10;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar7 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241220(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          _objc_release(uVar3);
          if ((int)uVar4 != 0) {
            func_0x00010c283ea0(*(undefined8 *)(lVar1 + 0x40));
            func_0x00010be524e0(lVar1);
          }
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar6 = &uStack_130;
        param_5 = 0x10;
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x68);
  _objc_retain(uVar4);
  _objc_retain(param_5);
  _objc_retain(puVar6);
  _objc_retain(lVar5);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(lVar5);
  return;
}



/* Entry: 106e829ec; end: 106e82aeb;  */

void FUN_106e829ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106e82aec; end: 106e82b03;  */

void FUN_106e82aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e82b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106e82b04; end: 106e82ca3; -[SCGalleryLagunaContentDataSource _logDirectSnapCreate:content:] */

void FUN_106e82b04(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc7b8;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar1,param_2,param_3,0,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf489a0();
  _objc_release(uVar3);
  uVar8 = 0;
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar2;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf48960();
    if ((int)uVar4 == 0) {
      uVar4 = uVar2;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf48920();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)uVar5 == 0) {
        uVar8 = 0xffffffffffffffff;
        goto LAB_106e82c2c;
      }
    }
    else {
      _objc_release(uVar3);
    }
    uVar8 = 3;
  }
LAB_106e82c2c:
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c0ef4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5080(uVar6,param_2,param_3,puVar7,uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e82ca4; end: 106e82cd3; -[SCGalleryLagunaContentDataSource _spectaclesMetadataProvider] */

void FUN_106e82ca4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be3bbc0();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e82cd4; end: 106e82d63; -[SCGalleryLagunaContentDataSource _initializeSpectaclesMetadataProviderIfNeeded] */

void FUN_106e82cd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0xc0) == 0) {
    puVar1 = PTR_PTR_1126d2f08;
    _objc_alloc();
    func_0x00010c05cc40();
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined **)(param_1 + 0xc0) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e82d64; end: 106e82e8b; -[SCGalleryLagunaContentDataSource snapNeedsToRegenerateThumbnailImport:] */

bool FUN_106e82d64(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x50);
    lVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fd00(uVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(lVar2);
    uVar3 = uVar4;
    func_0x00010c06e7e0();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar4;
      func_0x00010c07a940();
      if ((int)uVar3 == 0) {
        bVar1 = false;
      }
      else {
        lVar2 = param_3;
        func_0x00010c0d21e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c08fa60();
        bVar1 = lVar5 != 0;
        _objc_release(lVar2);
      }
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e82e8c; end: 106e82ea3; -[SCGalleryLagunaContentDataSource delegate] */

void FUN_106e82e8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e82ea4; end: 106e8301b; -[SCGalleryLagunaContentDataSource .cxx_destruct] */

void FUN_106e82ea4(long param_1)

{
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106e8301c; end: 106e830e7; -[SCGalleryLagunaMetadataLocationData initWithLocation:geoFilters:infoFilters:] */

undefined1 *
FUN_106e8301c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f79b0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e830e8; end: 106e831bf; -[SCGalleryLagunaMetadataLocationData initWithCoder:] */

undefined1 * FUN_106e830e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f79b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e831c0; end: 106e83233; -[SCGalleryLagunaMetadataLocationData encodeWithCoder:] */

void FUN_106e831c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dad538);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e8a118);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e8a138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e83234; end: 106e8323b; -[SCGalleryLagunaMetadataLocationData location] */

undefined8 FUN_106e83234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e8323c; end: 106e83243; -[SCGalleryLagunaMetadataLocationData geoFilters] */

undefined8 FUN_106e8323c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e83244; end: 106e8324b; -[SCGalleryLagunaMetadataLocationData infoFilters] */

undefined8 FUN_106e83244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e8324c; end: 106e83287; -[SCGalleryLagunaMetadataLocationData .cxx_destruct] */

void FUN_106e8324c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e83288; end: 106e83587; -[SCGallerySpectaclesMetadataProvider initWithUserPreferences:userInfoServices:circumstanceEngine:appStatusProvider:filterDataProviderFactory:locationProvider:applicationLifecycleEvents:] */

undefined8 *
FUN_106e83288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f79b8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    func_0x00010be865a0(puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = param_9;
    func_0x00010c2522c0(param_9);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106e83588;
    puStack_98 = &UNK_110857468;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf75dc0(param_9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e83588; end: 106e835df;  */

void FUN_106e83588(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec23e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e835e0; end: 106e83637; -[SCGallerySpectaclesMetadataProvider startUpdatingMetadata] */

void FUN_106e835e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfc5940(uVar1,param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c251570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startUpdatingFilterData_112671f80);
  return;
}



/* Entry: 106e83638; end: 106e83653; -[SCGallerySpectaclesMetadataProvider endUpdatingMetadata] */

void FUN_106e83638(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c256d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_stopUpdatingFilterData_112673580);
    return;
  }
  return;
}



/* Entry: 106e83654; end: 106e83717; -[SCGallerySpectaclesMetadataProvider locationForContent:] */

void FUN_106e83654(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  FUN_106e83718();
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c26f500(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar1 = param_1;
    func_0x00010c0cc5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4f580(param_1,param_2,lVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
    param_3 = param_1;
    if (param_1 == 0) {
      lVar2 = 0;
      goto LAB_106e836f4;
    }
  }
  lVar2 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_3;
LAB_106e836f4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e83718; end: 106e8385b;  */

bool FUN_106e83718(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010c26f500(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c09ea00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(lVar2,param_3,lVar4);
    if (600.0 <= param_1) {
      bVar1 = false;
    }
    else {
      lVar5 = param_2;
      func_0x00010c09ea00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe4080();
      if (100.0 <= param_1) {
        bVar1 = false;
      }
      else {
        lVar6 = param_2;
        func_0x00010c09ea00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298e00();
        bVar1 = param_1 < 100.0;
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106e8385c; end: 106e839bf; -[SCGallerySpectaclesMetadataProvider _spectaclesMetadataForContent:] */

void FUN_106e8385c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0776e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cc770;
    _objc_alloc_init(PTR_PTR_1126cc770);
    uVar1 = param_3;
    func_0x00010bf6fd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c9a0(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf6fd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c900(puVar4,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c220e20(puVar4,param_2,4);
    func_0x00010c1769e0(puVar4,param_2,1);
    puVar5 = puVar4;
    func_0x00010bf63640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e839c0; end: 106e83b9b; -[SCGallerySpectaclesMetadataProvider overlayForContent:] */

void FUN_106e839c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c0cc5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be4f580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  if (lVar1 == 0) {
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = lVar1;
    func_0x00010bfc1440(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bfedce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_3;
  FUN_106e83718();
  lVar3 = lVar9;
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c09ea00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010808a3a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar2);
  }
  lVar9 = lVar8;
  func_0x00010808a18c(lVar8,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bcd60;
  _objc_alloc_init(PTR_PTR_1126bcd60);
  puVar5 = puVar4;
  func_0x00010c19c8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2079a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106e83b9c; end: 106e83edb; -[SCGallerySpectaclesMetadataProvider _locationDataForTimeOfCapture:fromLocations:] */

void FUN_106e83b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = param_4;
  func_0x00010bf529e0();
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
    _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
    _CLLocationCoordinate2DMake(0,0);
    func_0x00010c005ac0(puVar1,param_2,param_3);
    puVar2 = PTR_PTR_1126d2f10;
    _objc_alloc(PTR_PTR_1126d2f10);
    func_0x00010c026ba0();
    uVar3 = param_4;
    func_0x00010bf529e0(param_4);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    dVar8 = 1.60807493534087e-314;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106e83edc;
    puStack_80 = &UNK_110981ab0;
    _objc_retain(param_4);
    uVar7 = param_4;
    uStack_78 = param_4;
    func_0x00010bfece00(param_4,param_2,puVar2,0,uVar3,0x500,&puStack_98);
    uVar3 = param_4;
    func_0x00010bf529e0();
    if (uVar3 - 1 <= uVar7) {
      uVar7 = uVar3 - 1;
    }
    _objc_release(uStack_78);
    uVar3 = param_4;
    func_0x00010c0dfd40(param_4,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar7;
    if (((uVar6 & 1) == 0) && (0 < (long)uVar7)) {
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar7 - 1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(param_3,param_2,uVar5);
      dVar9 = dVar8;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      dVar10 = ABS(dVar8);
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(param_3,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      dVar8 = ABS(dVar9);
      uVar3 = uVar7 - 1;
      if (dVar8 <= dVar10) {
        uVar3 = uVar7;
      }
    }
    uVar7 = param_4;
    func_0x00010c0dfd40(param_4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    if (43200.0 <= ABS(dVar8)) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106e83edc; end: 106e83fdf;  */

ulong FUN_106e83edc(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2f10;
  _objc_opt_class(PTR_PTR_1126d2f10);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR_PTR_1126d2f10;
    _objc_opt_class(PTR_PTR_1126d2f10);
    _objc_opt_isKindOfClass(param_3,puVar1);
  }
  uVar2 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf433a0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 106e83fe0; end: 106e84013; -[SCGallerySpectaclesMetadataProvider _applicationDidEnterBackground] */

void FUN_106e83fe0(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  func_0x00010bde0400();
  func_0x00010beebae0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf95a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_endUpdatingMetadata_1125c3038);
  return;
}



/* Entry: 106e84014; end: 106e841db; -[SCGallerySpectaclesMetadataProvider _startupComplete] */

void FUN_106e84014(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar3 = &puStack_80;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0debe0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106e841dc;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retainBlock(&puStack_80);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126c14e8;
    func_0x00010c0cc620(PTR_PTR_1126c14e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c248480(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae970;
    func_0x00010c0c7320(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a14e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106e841dc; end: 106e8422f;  */

void FUN_106e841dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    func_0x00010be865a0(param_1);
    func_0x00010c2515e0(param_1);
    func_0x00010bf26600(param_1);
    func_0x00010bde0400(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e84230; end: 106e8426f; -[SCGallerySpectaclesMetadataProvider clearCache] */

void FUN_106e84230(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e84270; end: 106e8452b; -[SCGallerySpectaclesMetadataProvider cacheCurrentLocationIfNeeded] */

void FUN_106e84270(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010beb2b80();
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x000108e4b1bc();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x0001080875a8();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010bfc1440();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2946e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf85f80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar4;
      func_0x000108089244(lVar4,0,1,uVar7,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar4);
      lVar4 = lVar11;
      func_0x00010bf529e0();
      if ((lVar4 == 0) && (lVar4 = lVar2, func_0x00010bf529e0(), lVar4 == 0)) {
        _objc_release(lVar11);
        _objc_release(lVar2);
        _objc_release(lVar3);
      }
      else {
        puVar12 = PTR_PTR_1126d2f10;
        _objc_alloc();
        func_0x00010c026ba0();
        puVar13 = auStack_68;
        _objc_initWeak(puVar13,param_1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(puVar12);
        func_0x00010c0f7fc0(puVar13);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(puVar12);
        _objc_release(lVar11);
        _objc_release(lVar2);
        _objc_release(lVar3);
      }
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106e8452c; end: 106e845a7;  */

void FUN_106e8452c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cc5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7520(param_1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010beebae0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e845a8; end: 106e8470b; -[SCGallerySpectaclesMetadataProvider _clearExpiredDataFromCache] */

void FUN_106e845a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c0cc5a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106e8466c;
  puStack_40 = &UNK_110981ae0;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uStack_38 = param_1;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfaea40(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c1c7520(param_1,param_2,uVar3);
  _objc_release(uVar3);
  return;
}



/* Entry: 106e8470c; end: 106e84817; -[SCGallerySpectaclesMetadataProvider _shouldCacheLocation] */

bool FUN_106e8470c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e8a178,1,0);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c23d080(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf433a0(lVar4,param_2,puVar5);
  _objc_release(puVar5);
  if ((((int)uVar1 == 0) || (lVar3 == -1)) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0debe0();
    bVar6 = 0 < lVar3;
    _objc_release(lVar2);
  }
  else {
    bVar6 = false;
  }
  _objc_release(lVar4);
  return bVar6;
}



/* Entry: 106e84818; end: 106e848b7; -[SCGallerySpectaclesMetadataProvider _writeLocationsAndFiltersToFile] */

void FUN_106e84818(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c0cc5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0cc5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106e848b8; end: 106e84a1b; -[SCGallerySpectaclesMetadataProvider _readLocationsAndFiltersFromFile] */

void FUN_106e848b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(uVar1);
  func_0x00010c1063a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
  if (uVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7520(param_1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1c7520(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 106e84a1c; end: 106e84a6b;  */

uint FUN_106e84a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2f10;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 106e84a6c; end: 106e84a77; -[SCGallerySpectaclesMetadataProvider metadataLocations] */

void FUN_106e84a6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 106e84a78; end: 106e84a7f; -[SCGallerySpectaclesMetadataProvider setMetadataLocations:] */

void FUN_106e84a78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 106e84a80; end: 106e84b03; -[SCGallerySpectaclesMetadataProvider .cxx_destruct] */

void FUN_106e84a80(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e84b04; end: 106e84b83;  */

void FUN_106e84b04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0d2900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_1;
  if (lVar2 == 0) {
    func_0x00010bdc3540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d2900(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106e84b84; end: 106e84bdb; -[SCSpectaclesGalleryEntryBucketer entryPlaceholders] */

void FUN_106e84b84(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e84bdc; end: 106e84c53; -[SCSpectaclesGalleryEntryBucketer unpersistedContentForEntryId:] */

void FUN_106e84bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e84c54; end: 106e84ccb; -[SCSpectaclesGalleryEntryBucketer entryOrPlaceholderForUnpersistedContent:] */

void FUN_106e84c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = param_1;
  func_0x00010be0ab20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e84ccc; end: 106e84d5b; -[SCSpectaclesGalleryEntryBucketer _entryOrPlaceholderForUnpersistedContent:] */

void FUN_106e84ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_106e84b04(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106e84d5c; end: 106e84e17; -[SCSpectaclesGalleryEntryBucketer entryOrPlaceholderWithUnpersistedContentForEntryId:] */

void FUN_106e84d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be0ab20(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e84e18; end: 106e84e7f; -[SCSpectaclesGalleryEntryBucketer _setUnpersistedContentForEntryId:] */

void FUN_106e84e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e84e80; end: 106e850b7; -[SCSpectaclesGalleryEntryBucketer replaceContentList:withLongContent:forEntry:] */

ulong FUN_106e84e80(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0d3c80();
  if (lVar1 != 0) {
    uVar5 = param_5;
    func_0x00010bf97200(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar3 = lVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar5);
    lVar2 = lVar3;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf529e0();
    uVar5 = param_5;
    func_0x00010bf97200(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1);
    _objc_release(uVar5);
    func_0x00010bea8ca0(param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    uVar5 = param_5;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21be0(param_1);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4b900(uVar5);
  return (ulong)((uint)uVar5 ^ 1);
}



/* Entry: 106e850b8; end: 106e850d7;  */

uint FUN_106e850b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106e850d8; end: 106e852d3; -[SCSpectaclesGalleryEntryBucketer updateBucketsOnSnap:appendedToEntry:] */

long FUN_106e850d8(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0d3c80();
  if (lVar1 != 0) {
    uVar5 = param_4;
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar3 = lVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar5);
    func_0x00010bf529e0();
    uVar5 = param_4;
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1);
    _objc_release(uVar5);
    func_0x00010bea8ca0(param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    uVar5 = param_4;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21be0(param_1);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bdc3540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0c5180(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar5);
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 106e852d4; end: 106e85343;  */

undefined8 FUN_106e852d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bdc3540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106e85344; end: 106e853a7; -[SCSpectaclesGalleryEntryBucketer updateBucketsByMixingUnpersistedContent:allContent:intoEntries:] */

void FUN_106e85344(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bed4500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf21be0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e853a8; end: 106e85e2b; -[SCSpectaclesGalleryEntryBucketer _updateBucketsByMixingUnpersistedContent:allContent:intoEntries:] */

void FUN_106e853a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  double dVar28;
  double dVar29;
  undefined *puStack_5d8;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_5d8 = (undefined *)0x0;
  if ((param_3 != 0) && (param_5 != 0)) {
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    lVar11 = param_3;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (lVar11 == 0) {
      dVar28 = 1.79769313486232e+308;
    }
    else {
      dVar28 = 1.79769313486232e+308;
      do {
        lVar17 = 0;
        dVar29 = dVar28;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = *(undefined8 *)(lVar17 * 8);
          func_0x00010c26f500(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          dVar28 = (double)CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)))))
                                                  ));
          _objc_release(uVar2);
          if (dVar29 <= dVar28) {
            dVar28 = dVar29;
          }
          lVar17 = lVar17 + 1;
          dVar29 = dVar28;
        } while (lVar11 != lVar17);
        lVar11 = param_3;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lVar17 * 8);
        FUN_106e84b04(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
        }
        func_0x00010befa120(puVar5);
        _objc_release(puVar5);
        _objc_release(uVar2);
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        uVar15 = *(ulong *)(lVar17 * 8);
        func_0x00010c137620(uVar15);
        uVar6 = uVar15;
        func_0x00010c070dc0();
        if (((uVar6 & 1) == 0) && (uVar6 = uVar15, func_0x00010c080760(), (uVar6 & 1) == 0)) {
          FUN_106e84b04(uVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010bf4b900();
          _objc_release(puVar5);
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010c1d0640(puVar3);
          }
          _objc_release(uVar15);
        }
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      lVar4 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    _objc_retain(param_5);
    lVar4 = param_5;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_5);
        }
        lVar16 = *(long *)(lVar17 * 8);
        lVar18 = lVar16;
        func_0x00010bf59960(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        bVar1 = false;
        if (!NAN((double)CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)))))
                                                 ))) && !NAN(dVar28)) {
          bVar1 = (double)CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20)))))
                                                  )) < dVar28;
        }
        _objc_release(lVar18);
        if (bVar1) goto LAB_106e85900;
        lVar18 = lVar16;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        puVar9 = PTR_PTR_1126af4d0;
        if (lVar18 == 4) {
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7380(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          puVar19 = puVar9;
          func_0x00010bfb1920(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar19;
          func_0x00010c0d21e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar19);
          puVar19 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar19 != (undefined *)0x0) {
            func_0x00010c1d0640(puVar7);
            func_0x00010bf97200(lVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(lVar16);
            func_0x00010c1d0640(puVar3);
          }
          _objc_release(puVar19);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      lVar4 = param_5;
      func_0x00010bf52a60();
    }
LAB_106e85900:
    _objc_release(param_5);
    _os_unfair_lock_lock(param_1 + 0x30);
    _objc_retain(puVar3);
    puVar9 = puVar3;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar3);
        }
        lVar11 = *(long *)(param_1 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 == 0) {
          lVar17 = *(long *)(param_1 + 8);
          puVar10 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf973e0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
        }
        else {
          _objc_retain(lVar11);
          lVar17 = lVar11;
        }
        _objc_release(lVar11);
        func_0x00010c1d0640(puVar8);
        puVar10 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar17;
        func_0x00010bf97200(lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(lVar11);
        _objc_release(puVar10);
        _objc_release(lVar17);
        puVar19 = puVar19 + 1;
      } while (puVar9 != puVar19);
      puVar9 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puStack_5d8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(param_1 + 0x48);
    _objc_retain(lVar17);
    lVar4 = lVar17;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar17);
        }
        puVar19 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
        if (puVar19 == (undefined *)0x0) {
          func_0x00010befa120(puStack_5d8);
        }
        else {
          uVar12 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c0e00e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar12;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(uVar12);
          puVar19 = PTR__OBJC_CLASS___NSSet_1126ae870;
          puVar10 = puVar5;
          func_0x00010c0e00e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c225c20(puVar19);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          _objc_release(puVar10);
          puVar10 = puVar9;
          func_0x00010c071ae0();
          if (((ulong)puVar10 & 1) == 0) {
            func_0x00010befa120(puStack_5d8);
          }
          _objc_release(puVar19);
          _objc_release(puVar9);
        }
        lVar18 = lVar18 + 1;
      } while (lVar4 != lVar18);
      lVar4 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
    _objc_retain(puVar5);
    puVar9 = puVar5;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar5);
        }
        lVar11 = *(long *)(param_1 + 0x48);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 == 0) {
          func_0x00010befa120(puStack_5d8);
        }
        puVar19 = puVar19 + 1;
      } while (puVar9 != puVar19);
      puVar9 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar9 = puVar5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar9;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar7;
    _objc_retain();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _os_unfair_lock_unlock(param_1 + 0x30);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_5d8);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x30);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106e85e2c; end: 106e85e33;  */

void FUN_106e85e2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106e85e34; end: 106e85ea7; -[SCSpectaclesGalleryEntryBucketer .cxx_destruct] */

void FUN_106e85e34(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e85ea8; end: 106e8606f; -[SCSpectaclesGalleryPlaceholderFactory _mediaIdForContentList:] */

void FUN_106e85ea8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar4 = param_3;
  if (lVar1 == 1) {
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c0d2900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar1);
    if (lVar5 == 0) {
      lVar1 = param_3;
      func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110981b30);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0d2900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7,param_2,lVar5,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar5);
      _objc_release(lVar6);
      _objc_release(lVar1);
    }
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0d2900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106e86070; end: 106e860f3;  */

undefined8 FUN_106e86070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c26f500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26f500(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106e860f4; end: 106e8618f; -[SCSpectaclesGalleryPlaceholderFactory _snapIdForMediaId:] */

void FUN_106e860f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,lVar2,param_3);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106e86190; end: 106e862a7; -[SCSpectaclesGalleryPlaceholderFactory _fetchedSizeForContent:] */

undefined1  [16]
FUN_106e86190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar5 [16];
  
  lVar1 = param_5;
  _objc_retain(param_5);
  _objc_autoreleasePoolPush();
  lVar2 = param_5;
  func_0x00010c27dd80();
  lVar3 = param_5;
  if (lVar2 == 1) {
    func_0x00010bf63a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
      param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      func_0x00010c23d0a0(puVar4);
    }
  }
  else {
    if (lVar2 != 0) goto LAB_106e8626c;
    func_0x00010bf63a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c0082a0();
    func_0x000109053df4();
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  unaff_d8 = param_1;
  unaff_d9 = param_2;
LAB_106e8626c:
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_5);
  auVar5._8_8_ = unaff_d9;
  auVar5._0_8_ = unaff_d8;
  return auVar5;
}



/* Entry: 106e862a8; end: 106e8644f; -[SCSpectaclesGalleryPlaceholderFactory _sizeForContent:] */

undefined1  [16]
FUN_106e862a8(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_5);
  puVar2 = param_5;
  func_0x00010c0c6c20();
  if ((int)puVar2 - 9U < 4) {
    puVar2 = param_5;
    func_0x00010c137620(param_5);
    puVar3 = param_5;
    func_0x00010c070dc0(param_5,param_4,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      lVar5 = *(long *)(param_3 + 0x18);
      puVar2 = param_5;
      func_0x00010bdc3540(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar5,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (lVar5 == 0) {
        func_0x00010be156e0(param_3,param_4,param_5);
        dVar6 = *(double *)PTR__CGSizeZero_110347620;
        dVar7 = *(double *)(PTR__CGSizeZero_110347620 + 8);
        bVar1 = false;
        if ((param_1 == dVar6) && (bVar1 = false, !NAN(param_2) && !NAN(dVar7))) {
          bVar1 = param_2 == dVar7;
        }
        if (bVar1) {
          func_0x00010c0c6c20(param_5);
          func_0x000109025004();
          param_1 = dVar6;
          param_2 = dVar7;
        }
        puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_3 + 0x18);
        puVar3 = param_5;
        func_0x00010bdc3540(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar4,param_4,puVar2,puVar3);
      }
      else {
        puVar3 = *(undefined **)(param_3 + 0x18);
        puVar2 = param_5;
        func_0x00010bdc3540(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(puVar3,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc10a0();
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_106e8642c;
    }
  }
  func_0x00010c0c6c20(param_5);
  func_0x000109025004();
LAB_106e8642c:
  _objc_release(param_5);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 106e86450; end: 106e868f7; -[SCSpectaclesGalleryPlaceholderFactory snapPlaceholderForContentList:] */

void FUN_106e86450(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bfb1920(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0(PTR_PTR_1126bf910,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bebdda0(param_3,param_4,uVar1);
  uVar4 = param_3;
  func_0x00010bebdde0(param_3,param_4,uVar1);
  lVar12 = (long)(int)uVar3;
  lVar5 = lVar12;
  func_0x00010b77c6b4(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd840(puVar2,param_4,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206760(puVar2,param_4,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010b5f9f38(uVar4);
  func_0x00010c1c5440(puVar2,param_4,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b5fb5d4(lVar12);
  func_0x00010c1c4760(puVar2,param_4,lVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c206c40(puVar2,param_4,4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bebc920(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar2,param_4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1d6440(puVar2,param_4,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2158c0(puVar2,param_4,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar2,param_4,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar8 = param_5;
  func_0x00010bf529e0();
  if (uVar8 < 2) {
    func_0x00010c1c97e0(puVar2,param_4,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar8 = uVar1;
    func_0x00010c0d2900(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c97e0(puVar2,param_4,uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  uVar3 = param_3;
  func_0x00010be5e7e0(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar2,param_4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bebcce0(param_3,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar2,param_4,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be5e6c0(param_3,param_4,param_5);
  func_0x00010c192d40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010be39080(param_3,param_4,uVar1);
  func_0x00010c1ac2c0(puVar2,param_4,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bebc480(param_3,param_4,uVar1);
  func_0x00010c1a7d00(puVar2,param_4,(int)param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2256c0(puVar2,param_4,(int)param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf6fd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar2,param_4,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010bf6fd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c900(puVar2,param_4,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010bf16f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2197a0(puVar2,param_4,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar8);
  func_0x00010bebc820(param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203960(puVar2,param_4,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106e868f8; end: 106e86947; -[SCSpectaclesGalleryPlaceholderFactory _snapAssetsForContent:] */

void FUN_106e868f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfc0dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e86948; end: 106e8697b;  */

void FUN_106e86948(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf0b760();
  lVar1 = param_2;
  if (param_2 != 3) {
    lVar1 = -0x4524111;
  }
  lVar2 = 0x10;
  if (param_2 != 4) {
    lVar2 = lVar1;
  }
  puVar3 = PTR_PTR_1126d83d8;
  _objc_alloc(PTR_PTR_1126d83d8);
  puVar4 = puVar3;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6979dc(lVar2);
  func_0x00010bff4420(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e8697c; end: 106e86c93; -[SCSpectaclesGalleryPlaceholderFactory entryPlaceholderForContentList:] */

undefined * FUN_106e8697c(undefined *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *unaff_x26;
  undefined1 *puVar18;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_140;
  undefined *puStack_138;
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
  uVar4 = param_3;
  func_0x00010bf529e0();
  puVar5 = PTR_PTR_1126bf8c8;
  uStack_140 = uVar4;
  func_0x00010c2aeac0(PTR_PTR_1126bf8c8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1;
  func_0x00010bebc920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010be06da0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_138 = puVar14;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (uVar4 != 0) {
    lVar16 = *plStack_120;
    do {
      uVar13 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x27 = *(undefined8 *)(lStack_128 + uVar13 * 8);
        func_0x00010bdc3540();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = param_1;
        func_0x00010bebcce0(param_1,param_2,unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar17,param_2,unaff_x28);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      uVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x26 = (undefined *)0x0;
    } while (uVar4 != 0);
  }
  uVar10 = 4;
  if (uStack_140 < 2) {
    uVar10 = 0;
  }
  _objc_release(param_3);
  puVar6 = puVar17;
  func_0x00010b7043dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  puVar14 = puStack_138;
  func_0x00010c193320(puVar5,param_2,puStack_138);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b94c0(puVar5,param_2,puVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c185360(puVar5,param_2,puVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar5,param_2,puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar5,param_2,puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar17);
  func_0x00010c222da0(puVar5,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar5,param_2,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3960(puVar5,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c206280(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_270;
    puStack_170 = puVar14;
    pcStack_148 = FUN_106e86c94;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = unaff_x28;
    uStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    puStack_188 = puVar17;
    puStack_180 = puVar12;
    puStack_178 = puVar6;
    puStack_168 = puVar15;
    puStack_160 = puVar5;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    puStack_260 = (undefined8 *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar5 = puVar8;
    func_0x00010bf52a60();
    if (puVar5 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      puVar5 = puVar12;
    }
    else {
      puVar11 = (undefined *)0x0;
      puVar17 = (undefined *)*puStack_260;
      do {
        unaff_x26 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_260 != puVar17) {
            _objc_enumerationMutation(puVar8);
          }
          puVar14 = *(undefined **)(lStack_268 + (long)unaff_x26 * 8);
          if (puVar11 == (undefined *)0x0) {
LAB_106e86d5c:
            func_0x00010c26f500();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            puVar11 = puVar14;
          }
          else {
            puVar6 = puVar14;
            func_0x00010c26f500();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar6;
            func_0x00010bf433a0();
            _objc_release(puVar6);
            if (puVar12 == (undefined *)0x1) goto LAB_106e86d5c;
          }
          unaff_x26 = unaff_x26 + 1;
        } while (puVar5 != unaff_x26);
        puVar5 = puVar8;
        puVar9 = &uStack_270;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
      puVar15 = (undefined *)0x0;
      puVar5 = puVar12;
    }
    puVar12 = puVar11;
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      iVar3 = (int)&uStack_3a0;
      pcStack_278 = FUN_106e86df4;
      lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_2d0 = unaff_x28;
      uStack_2c8 = unaff_x27;
      puStack_2c0 = unaff_x26;
      puStack_2b8 = puVar17;
      puStack_2b0 = puVar5;
      puStack_2a8 = puVar6;
      puStack_2a0 = puVar14;
      puStack_298 = puVar15;
      puStack_290 = puVar12;
      puStack_288 = puVar8;
      ppuStack_280 = &puStack_150;
      _objc_retain(puVar9);
      lStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      plStack_390 = (long *)0x0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      puVar7 = (undefined1 *)puVar9;
      func_0x00010bf52a60();
      if (puVar7 == (undefined1 *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = (undefined *)0x0;
        lVar16 = *plStack_390;
        do {
          puVar18 = (undefined1 *)0x0;
          do {
            if (*plStack_390 != lVar16) {
              _objc_enumerationMutation(puVar9);
            }
            puVar15 = *(undefined **)(lStack_398 + (long)puVar18 * 8);
            if (puVar12 == (undefined *)0x0) {
LAB_106e86ebc:
              func_0x00010c26f500();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              puVar12 = puVar15;
            }
            else {
              puVar5 = puVar15;
              func_0x00010c26f500();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar5;
              func_0x00010bf433a0();
              _objc_release(puVar5);
              if (puVar14 == (undefined *)0xffffffffffffffff) goto LAB_106e86ebc;
            }
            puVar18 = puVar18 + 1;
          } while (puVar7 != puVar18);
          puVar7 = (undefined1 *)puVar9;
          iVar3 = (int)&uStack_3a0;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined1 *)0x0);
      }
      _objc_release(puVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
        ___stack_chk_fail();
        func_0x00010c0c5040();
        uVar1 = 0x9f8c09ae;
        if (iVar3 != 3) {
          uVar1 = 0xa9fc90cc;
        }
        uVar2 = 0x4f78090a;
        if (iVar3 != 4) {
          uVar2 = uVar1;
        }
        return (undefined *)(ulong)uVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 106e86c94; end: 106e86df3; -[SCSpectaclesGalleryPlaceholderFactory _snapCreationTimeForContentList:] */

ulong FUN_106e86c94(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = param_3;
  func_0x00010bf52a60();
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    lVar10 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar12 * 8);
        if (uVar8 == 0) {
LAB_106e86d5c:
          func_0x00010c26f500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          uVar8 = uVar9;
        }
        else {
          uVar4 = uVar9;
          func_0x00010c26f500();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf433a0();
          _objc_release(uVar4);
          if (uVar5 == 1) goto LAB_106e86d5c;
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    iVar3 = (int)&uStack_260;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bf52a60();
    if (puVar6 == (undefined1 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      lVar11 = *plStack_250;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(puVar7);
          }
          uVar9 = *(ulong *)(lStack_258 + (long)puVar13 * 8);
          if (uVar8 == 0) {
LAB_106e86ebc:
            func_0x00010c26f500();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            uVar8 = uVar9;
          }
          else {
            uVar4 = uVar9;
            func_0x00010c26f500();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf433a0();
            _objc_release(uVar4);
            if (uVar5 == 0xffffffffffffffff) goto LAB_106e86ebc;
          }
          puVar13 = puVar13 + 1;
        } while (puVar6 != puVar13);
        puVar6 = (undefined1 *)puVar7;
        iVar3 = (int)&uStack_260;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      func_0x00010c0c5040();
      uVar1 = 0x9f8c09ae;
      if (iVar3 != 3) {
        uVar1 = 0xa9fc90cc;
      }
      uVar2 = 0x4f78090a;
      if (iVar3 != 4) {
        uVar2 = uVar1;
      }
      return (ulong)uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return uVar8;
}



/* Entry: 106e86df4; end: 106e86f53; -[SCSpectaclesGalleryPlaceholderFactory _earliestSnapCaptureTimeForContentList:] */

ulong FUN_106e86df4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
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
  long lStack_68;
  
  iVar3 = (int)&uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        if (uVar7 == 0) {
LAB_106e86ebc:
          func_0x00010c26f500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar8;
        }
        else {
          uVar5 = uVar8;
          func_0x00010c26f500();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf433a0();
          _objc_release(uVar5);
          if (uVar6 == 0xffffffffffffffff) goto LAB_106e86ebc;
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_3;
      iVar3 = (int)&uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010c0c5040();
    uVar1 = 0x9f8c09ae;
    if (iVar3 != 3) {
      uVar1 = 0xa9fc90cc;
    }
    uVar2 = 0x4f78090a;
    if (iVar3 != 4) {
      uVar2 = uVar1;
    }
    return (ulong)uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return uVar7;
}



/* Entry: 106e86f54; end: 106e86f93; -[SCSpectaclesGalleryPlaceholderFactory _sojuMediaFormatForContent:] */

undefined4 FUN_106e86f54(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x00010c0c5040();
  uVar1 = 0x9f8c09ae;
  if (param_3 != 3) {
    uVar1 = 0xa9fc90cc;
  }
  uVar2 = 0x4f78090a;
  if (param_3 != 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106e86f94; end: 106e86fcb; -[SCSpectaclesGalleryPlaceholderFactory _sojuMediaTypeForContent:] */

undefined4 FUN_106e86f94(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  func_0x00010c0c6c20();
  if (param_3 - 3U < 10) {
    uVar1 = *(undefined4 *)(&UNK_10ddf0a08 + (ulong)(param_3 - 3U) * 4);
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 106e86fcc; end: 106e870df; -[SCSpectaclesGalleryPlaceholderFactory _mediaDurationForContentList:] */

ulong FUN_106e86fcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    lVar5 = *plStack_110;
    uVar8 = 0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be5e6a0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar6 * 8));
        uVar8 = (ulong)(uint)((float)uVar8 + (float)uVar7);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = (undefined1 *)puVar4;
  func_0x00010c27dd80();
  if (puVar2 == (undefined1 *)0x1) {
    puVar2 = *(undefined1 **)(param_3 + 8);
    func_0x00010bfe8c00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    if ((float)uVar7 == INFINITY) {
      uVar7 = 0x40400000;
    }
    else {
      uVar3 = *(undefined8 *)(param_3 + 8);
      func_0x00010bfe8c00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar3);
    }
  }
  else {
    if (puVar2 != (undefined1 *)0x0) goto LAB_106e87194;
    puVar2 = (undefined1 *)puVar4;
    func_0x00010c299d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
  }
  _objc_release(puVar2);
  uVar8 = uVar7;
LAB_106e87194:
  _objc_release(puVar4);
  return uVar8;
}



/* Entry: 106e870e0; end: 106e871b3; -[SCSpectaclesGalleryPlaceholderFactory _mediaDurationForContent:] */

undefined8 FUN_106e870e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_d8;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfe8c00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    if ((float)param_1 == INFINITY) {
      param_1 = 0x40400000;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010bfe8c00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar2);
    }
  }
  else {
    if (lVar1 != 0) goto LAB_106e87194;
    lVar1 = param_4;
    func_0x00010c299d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
  }
  _objc_release(lVar1);
  unaff_d8 = param_1;
LAB_106e87194:
  _objc_release(param_4);
  return unaff_d8;
}



/* Entry: 106e871b4; end: 106e8721b; -[SCSpectaclesGalleryPlaceholderFactory _infiniteDurationForSpectaclesContent:] */

bool FUN_106e871b4(float param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80();
  if (param_4 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfe8c00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    bVar1 = param_1 == INFINITY;
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106e8721c; end: 106e87263; -[SCSpectaclesGalleryPlaceholderFactory .cxx_destruct] */

void FUN_106e8721c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e87264; end: 106e87367; -[SCSpectaclesMemoriesContentServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e87264(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127605e4);
  _objc_destroyWeak(param_1 + _DAT_1127605bc);
  _objc_destroyWeak(param_1 + _DAT_1127605e0);
  _objc_destroyWeak(param_1 + _DAT_1127605b8);
  _objc_destroyWeak(param_1 + _DAT_1127605c0);
  _objc_destroyWeak(param_1 + _DAT_1127605c4);
  _objc_destroyWeak(param_1 + _DAT_1127605b4);
  _objc_destroyWeak(param_1 + _DAT_1127605dc);
  _objc_destroyWeak(param_1 + _DAT_1127605d8);
  _objc_destroyWeak(param_1 + _DAT_1127605d4);
  _objc_destroyWeak(param_1 + _DAT_1127605d0);
  _objc_destroyWeak(param_1 + _DAT_1127605cc);
  _objc_destroyWeak(param_1 + _DAT_1127605c8);
  _objc_destroyWeak(param_1 + _DAT_1127605b0);
  _objc_destroyWeak(param_1 + _DAT_1127605ac);
  _objc_destroyWeak(param_1 + _DAT_1127605a8);
  _objc_destroyWeak(param_1 + _DAT_1127605a4);
  _objc_destroyWeak(param_1 + _DAT_1127605e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127605ec);
  return;
}



/* Entry: 106e87368; end: 106e87373; -[SCSpectaclesMemoriesContentServices .cxx_destruct] */

void FUN_106e87368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e87374; end: 106e8741b; -[SCSpectaclesMemoriesEntryObserveHandler initWithQueue:changeHandler:] */

undefined1 *
FUN_106e87374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f79d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e8741c; end: 106e874d3; -[SCSpectaclesMemoriesEntryObserveHandler performWithEntry:changedKeys:] */

void FUN_106e8741c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106e874d4;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e874d4; end: 106e874eb;  */

void FUN_106e874d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000106e874e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  return;
}



/* Entry: 106e874ec; end: 106e8751b; -[SCSpectaclesMemoriesEntryObserveHandler .cxx_destruct] */

void FUN_106e874ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e8751c; end: 106e875e7; -[SCSpectaclesMemoriesEntryObserveContext initWithObserveToken:entryId:observeGraph:] */

undefined1 *
FUN_106e8751c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f79e0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e875e8; end: 106e8762b; -[SCSpectaclesMemoriesEntryObserveContext dealloc] */

void FUN_106e875e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_1126f79e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e8762c; end: 106e8765f; -[SCSpectaclesMemoriesEntryObserveContext unobserve] */

void FUN_106e8762c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e87660; end: 106e87697; -[SCSpectaclesMemoriesEntryObserveContext .cxx_destruct] */

void FUN_106e87660(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e87698; end: 106e87ac7; -[SCSpectaclesMemoriesEntryObserveGraph observe:queue:changeHandler:] */

void FUN_106e87698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2f28;
  _objc_alloc(PTR_PTR_1126d2f28);
  uVar3 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030d60(puVar2,param_2,uVar1,uVar3,param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x106e877f8;
  puStack_80 = &UNK_110852488;
  lStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = uVar1;
  uStack_58 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e87ac8; end: 106e87adb;  */

void FUN_106e87ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e87ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 106e87adc; end: 106e87cbb; -[SCSpectaclesMemoriesEntryObserveGraph processUpdatedEntryIds:] */

void FUN_106e87adc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = auStack_f0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    unaff_x21 = &PTR____CFConstantStringClassReference_110f6e858;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar2 = (undefined *)(param_1 + 0x18);
        _objc_loadWeakRetained();
        puVar3 = puVar2;
        func_0x00010bf97360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126af4c0;
        if (puVar3 == (undefined *)0x0) {
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa70a0(puVar2,param_2,uVar8,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar5 = puVar2;
          func_0x00010c0e0160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar3 = puVar2;
          if (puVar5 != (undefined *)0x0) {
            func_0x00010be65f40(param_1,param_2,puVar2);
          }
        }
        puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                            &PTR____CFConstantStringClassReference_110f6e858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be72140(param_1,param_2,puVar3,uVar8,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar7 = auStack_f0;
      lVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106e87cbc;
  uStack_160 = unaff_x22;
  ppuStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x20);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x106e87d74;
  puStack_180 = &UNK_110848ba8;
  lStack_178 = lVar1;
  puStack_170 = puVar7;
  puStack_168 = (undefined1 *)puVar6;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  func_0x00010c0f7fc0(uVar8,param_2,&puStack_198);
  _objc_release(puStack_168);
  _objc_release(puStack_170);
  _objc_release(puVar6);
  _objc_release(puVar7);
  return;
}



/* Entry: 106e87cbc; end: 106e87e07; -[SCSpectaclesMemoriesEntryObserveGraph _unobserve:entryId:] */

void FUN_106e87cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106e87d74;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106e87e08; end: 106e87fd3; -[SCSpectaclesMemoriesEntryObserveGraph _observeDataContextChangesForEntry:] */

void FUN_106e87e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar5 == 0) {
    uVar1 = param_3;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR_PTR_1126af4c0;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0e0700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e87fd4; end: 106e88087;  */

void FUN_106e87fd4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be72140(param_1);
    _objc_release(lVar1);
    if (param_2 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e88088; end: 106e882bb; -[SCSpectaclesMemoriesEntryObserveGraph _performObserveCallbacksForEntry:entryId:changedKeys:] */

void FUN_106e88088(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (param_3 == 0) {
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c0f94c0(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    if (param_4 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c0f94c0(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_destroyWeak(param_3 + 0x18);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106e882bc; end: 106e8830b; -[SCSpectaclesMemoriesEntryObserveGraph .cxx_destruct] */

void FUN_106e882bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e8830c; end: 106e8844b; -[SCSpectaclesVisibleContentFilter initWithDelegate:spectaclesServices:dataObjectContext:performer:] */

undefined1 *
FUN_106e8830c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f79f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c249020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010be815e0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e8844c; end: 106e884d7; -[SCSpectaclesVisibleContentFilter visibleContent] */

void FUN_106e8844c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e884d8; end: 106e884f3;  */

uint FUN_106e884d8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c23e340(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106e884f4; end: 106e8857b; -[SCSpectaclesVisibleContentFilter visibleContentForMediaId:] */

void FUN_106e884f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e8857c; end: 106e885b3; -[SCSpectaclesVisibleContentFilter updateFilterWithEntries:] */

void FUN_106e8857c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be608f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mixWithLagunaContentIfNeeded_112575bd8);
  return;
}



/* Entry: 106e885b4; end: 106e886c7; -[SCSpectaclesVisibleContentFilter _processLagunaContentChange] */

void FUN_106e885b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106e886c8;
  puStack_60 = &UNK_110870ac0;
  uVar3 = uVar4;
  lStack_58 = param_1;
  func_0x00010bfaea20(uVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106e887e0;
  puStack_90 = &UNK_110841f80;
  uStack_88 = uVar3;
  lStack_80 = param_1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a8);
  _objc_release(uStack_88);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



/* Entry: 106e886c8; end: 106e887df;  */

undefined8 FUN_106e886c8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  func_0x00010c137620(param_2);
  uVar1 = param_2;
  func_0x00010c23e340();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c070dc0();
    if ((uVar1 & 1) != 0) {
LAB_106e8871c:
      uVar6 = 1;
      goto LAB_106e88720;
    }
    uVar1 = param_2;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48980();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c249020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c06f3e0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar5 & 1) != 0) goto LAB_106e8871c;
    }
  }
  uVar6 = 0;
LAB_106e88720:
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 106e887e0; end: 106e889ef;  */

/* WARNING: Possible PIC construction at 0x000106e88920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e88924) */
/* WARNING: Removing unreachable block (ram,0x000106e88954) */
/* WARNING: Removing unreachable block (ram,0x000106e8890c) */

void FUN_106e887e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110981c10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = puVar3;
  func_0x00010c072060();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar7);
    lVar5 = lVar7;
    func_0x00010bf52a60();
    uVar1 = uRam0000000000000000;
    if (lVar5 != 0) goto code_r0x00010bdc3540;
    _objc_release(lVar7);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x30) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar1);
    func_0x00010be608e0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = param_2;
code_r0x00010bdc3540:
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106e889f0; end: 106e889f7;  */

void FUN_106e889f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}


