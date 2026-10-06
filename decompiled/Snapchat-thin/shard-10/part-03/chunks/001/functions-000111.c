/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f2ff28; end: 107f3006f; -[SCGalleryTakenNearbySearch _requestLocation] */

void FUN_107f2ff28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c135ca0(0x4024000000000000,uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107f30070; end: 107f300c3;  */

void FUN_107f30070(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010c0e4f40();
  }
  else {
    func_0x00010c0e5000();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f300c4; end: 107f30293; -[SCGalleryTakenNearbySearch onLocationUpdate:] */

void FUN_107f300c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be1a440(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar6);
    lStack_48 = 0;
    lStack_50 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_107f44da0(lVar3,&lStack_48,&lStack_50,uVar6);
    lVar2 = lStack_48;
    _objc_retain(lStack_48);
    lVar1 = lStack_50;
    _objc_retain(lStack_50);
    _objc_release(uVar6);
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if ((lVar4 == 0) || (lVar4 = lVar1, func_0x00010bf529e0(), lVar4 == 0)) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126c3bb8;
      _objc_alloc();
      ppuVar5 = &PTR____CFConstantStringClassReference_110ec7738;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec7738,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03fe00(0x3f800000);
      _objc_release(ppuVar5);
    }
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107f30294;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    puStack_58 = puVar7;
    _objc_retain(puVar7);
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 107f30294; end: 107f3029f;  */

void FUN_107f30294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePendingRequestItemsWith_112556580,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f302a0; end: 107f302f7; -[SCGalleryTakenNearbySearch onLocationError] */

void FUN_107f302a0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107f302f8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107f302f8; end: 107f30303;  */

void FUN_107f302f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__completePendingRequestItemsWith_112556580,0);
  return;
}



/* Entry: 107f30304; end: 107f30503; -[SCGalleryTakenNearbySearch _completeRequestItem:withResult:] */

void FUN_107f30304(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf44140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf440c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf44140(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      uStack_50 = 0x107f3040c;
      puStack_48 = &UNK_110841f80;
      _objc_retain(param_3);
      lStack_40 = param_3;
      _objc_retain(param_4);
      uStack_38 = param_4;
      func_0x00010007380c(lVar1,&puStack_60);
      _objc_release(lVar1);
      _objc_release(uStack_38);
      _objc_release(lStack_40);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f30504; end: 107f30633; -[SCGalleryTakenNearbySearch _completePendingRequestItemsWithResult:] */

ulong FUN_107f30504(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar15 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar1);
  puVar17 = auStack_d8;
  lVar18 = lVar1;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar20 = *plStack_110;
    do {
      lVar21 = 0;
      do {
        if (*plStack_110 != lVar20) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bde3220(param_1);
        lVar21 = lVar21 + 1;
      } while (lVar18 != lVar21);
      puVar17 = auStack_d8;
      lVar18 = lVar1;
      puVar15 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar15);
    _objc_retain(puVar17);
    uVar2 = param_3;
    func_0x00010be1a3e0(0x40630ccccccccccd);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = param_3;
    if (uVar3 < 8) {
      _objc_release(uVar2);
      func_0x00010be1a3e0(0x40a9256147ae147b);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf529e0();
      if (uVar2 < 3) {
        _objc_release(uVar4);
        uVar4 = param_3;
        func_0x00010be1a3e0(0x40b9256147ae147b);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf529e0();
        if (uVar2 == 0) {
          param_3 = 0;
        }
        else {
          uVar2 = param_3;
          func_0x00010be1a3c0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c09ea00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010be1a3e0(0x403e7ae147ae147b,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar13 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
          _objc_retain(uVar3);
          func_0x00010c1063a0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bfaea40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(puVar13);
          puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010bf09f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          func_0x00010be1a420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(uVar3);
          _objc_release(uVar3);
          _objc_release(uVar5);
          _objc_release(uVar2);
        }
      }
      else {
        uVar2 = param_3;
        func_0x00010be1a3c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
        uVar2 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bfbd760();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfbd760();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bfbd760();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c226900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar2);
        uVar2 = uVar4;
        func_0x00010c089820(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010be1a3e0(0x403e7ae147ae147b,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar14 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        _objc_retain(puVar13);
        func_0x00010c1063a0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010bfaea40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(puVar14);
        uVar6 = uVar3;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1a420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(puVar13);
        _objc_release(puVar13);
        _objc_release(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar3);
      }
    }
    else {
      func_0x00010be1a3c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010be1a420();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    _objc_release(puVar17);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      uVar19 = *(undefined8 *)((long)puVar15 + 0x20);
      func_0x00010bfbd760(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar19);
      _objc_release(uVar16);
      _objc_release(param_2);
      return (ulong)((uint)uVar19 ^ 1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return param_3;
  }
  return param_3;
}



/* Entry: 107f30634; end: 107f30bc3; -[SCGalleryTakenNearbySearch _gallerySnapsTakenNearbyLocation:forOwner:] */

ulong FUN_107f30634(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be1a3e0(0x40630ccccccccccd);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_1;
  if (uVar2 < 8) {
    _objc_release(uVar1);
    func_0x00010be1a3e0(0x40a9256147ae147b);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf529e0();
    if (uVar1 < 3) {
      _objc_release(uVar3);
      uVar3 = param_1;
      func_0x00010be1a3e0(0x40b9256147ae147b);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf529e0();
      if (uVar1 == 0) {
        param_1 = 0;
      }
      else {
        uVar1 = param_1;
        func_0x00010be1a3c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010be1a3e0(0x403e7ae147ae147b,param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar12 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        _objc_retain(uVar2);
        func_0x00010c1063a0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010bfaea40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(puVar12);
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        func_0x00010be1a420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(uVar2);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar1);
      }
    }
    else {
      uVar1 = param_1;
      func_0x00010be1a3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
      uVar1 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bfbd760();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfbd760();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfbd760();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c226900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = uVar3;
      func_0x00010c089820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be1a3e0(0x403e7ae147ae147b,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar13 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      _objc_retain(puVar12);
      func_0x00010c1063a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfaea40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar13);
      uVar5 = uVar2;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1a420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar12);
      _objc_release(puVar12);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010be1a3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be1a420();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    uVar16 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfbd760(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar16);
    _objc_release(uVar14);
    _objc_release(param_2);
    return (ulong)((uint)uVar16 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 107f30bc4; end: 107f30c2f;  */

uint FUN_107f30bc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 107f30c30; end: 107f30cd7;  */

uint FUN_107f30c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bfbd760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar4 ^ 1;
}



/* Entry: 107f30cd8; end: 107f3105b; -[SCGalleryTakenNearbySearch _gallerySnapItemsTakenNearbyLocation:withinDistance:forOwner:] */

void FUN_107f30cd8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puVar2;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_7;
  dVar14 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = param_7;
  func_0x00010bf51c80();
  iVar1 = (int)puVar2;
  _CLLocationCoordinate2DIsValid();
  if (0.0 < param_1 && iVar1 != 0) {
    func_0x00010bf51c80(param_7);
    dVar15 = param_1;
    func_0x000108d31f58();
    lVar3 = *(long *)(param_5 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2412a0(dVar14,dVar15,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126af4d0;
      lVar3 = lVar4;
      func_0x00010bf002e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_5 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar13);
      _objc_release(lVar3);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(puVar7);
      func_0x00010bf0a0e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      dVar14 = 0.0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      _objc_retain(puVar7);
      puVar11 = &uStack_170;
      puVar13 = puVar7;
      func_0x00010bf52a60();
      if (puVar13 != (undefined *)0x0) {
        lVar3 = *plStack_160;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_160 != lVar3) {
              _objc_enumerationMutation(puVar7);
            }
            uVar6 = *(undefined8 *)(lStack_168 + (long)puVar12 * 8);
            func_0x00010c241220(uVar6);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar4;
            func_0x00010c0e00e0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            func_0x00010bf86f80(lVar9);
            if (dVar14 <= param_1) {
              puVar10 = PTR_PTR_1126d86b0;
              _objc_alloc_init(PTR_PTR_1126d86b0);
              func_0x00010c1a1ca0();
              func_0x00010c1bf6c0(puVar10);
              func_0x00010c1909c0(puVar10);
              func_0x00010befa120(puVar8);
              _objc_release(puVar10);
            }
            _objc_release(lVar9);
            puVar12 = puVar12 + 1;
          } while (puVar13 != puVar12);
          puVar11 = &uStack_170;
          puVar13 = puVar7;
          func_0x00010bf52a60();
        } while (puVar13 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      puVar13 = puVar8;
      func_0x00010bf51e00(puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_release(lVar4);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c246cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar11,PTR_s_sortedArrayUsingComparator__11266f550,
             &PTR___NSConcreteGlobalBlock_110a13ca0);
  return;
}



/* Entry: 107f3105c; end: 107f3106b; -[SCGalleryTakenNearbySearch _gallerySnapItemsSortedByDistance:] */

void FUN_107f3105c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortedArrayUsingComparator__11266f550,
             &PTR___NSConcreteGlobalBlock_110a13ca0);
  return;
}



/* Entry: 107f3106c; end: 107f310ff;  */

ulong FUN_107f3106c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf86e80(param_3);
  dVar2 = param_1;
  func_0x00010bf86e80(param_4);
  if (dVar2 <= param_1) {
    func_0x00010bf86e80(param_3);
    dVar3 = dVar2;
    func_0x00010bf86e80(param_4);
    uVar1 = (ulong)(dVar3 < dVar2);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107f31100; end: 107f312cf; -[SCGalleryTakenNearbySearch _gallerySnapsFromGallerySnapItems:] */

void FUN_107f31100(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010bfbd760(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246bc0(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 107f312d0; end: 107f31353; -[SCGalleryTakenNearbySearch .cxx_destruct] */

void FUN_107f312d0(long param_1)

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



/* Entry: 107f31354; end: 107f313ff; -[SCGallerySearchIntermediateResult initWithSnapMatchInfos:resultTitle:] */

undefined1 *
FUN_107f31354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbb38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
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



/* Entry: 107f31400; end: 107f31407; -[SCGallerySearchIntermediateResult resultTitle] */

undefined8 FUN_107f31400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f31408; end: 107f3140f; -[SCGallerySearchIntermediateResult snapMatchInfos] */

undefined8 FUN_107f31408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f31410; end: 107f31417; -[SCGallerySearchIntermediateResult isSimilarResult] */

undefined1 FUN_107f31410(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f31418; end: 107f3141f; -[SCGallerySearchIntermediateResult setIsSimilarResult:] */

void FUN_107f31418(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107f31420; end: 107f3144f; -[SCGallerySearchIntermediateResult .cxx_destruct] */

void FUN_107f31420(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f31450; end: 107f31a63; -[SCMemoriesSearch initWithDataObjectContext:galleryProfile:galleryEncryptedDatabase:memoriesSearchDatabase:sessionRequestManager:coreConfigProvider:aserConfigProvider:birthdayProvider:snapTokenProvider:locationPermissionsManager:locationProvider:simpleContentFetcher:grapheneRegistry:] */

undefined8 *
FUN_107f31450(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_80 = PTR_PTR_1126fbb40;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    _objc_retain(param_15);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x21];
    puVar1[0x21] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    func_0x00010c189b60(puVar1[2]);
    puVar3 = PTR_PTR_1126d8600;
    _objc_alloc_init();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d8610;
    _objc_alloc_init();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_10;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000108ec1c78();
    *(char *)(puVar1 + 0x27) = (char)uVar5;
    _objc_release(uVar2);
    func_0x00010bee5420(puVar1);
    *(undefined4 *)(puVar1 + 0x1d) = param_1;
    uVar2 = puVar1[4];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_13);
    _objc_retain(param_14);
    _objc_retain(param_16);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_12);
    _objc_release(param_8);
    _objc_release(param_16);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(param_15);
    _objc_release(param_9);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107f31a64; end: 107f31a93;  */

void FUN_107f31a64(void)

{
  _objc_alloc(PTR_PTR_1126d86b8);
  func_0x00010c005c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f31a94; end: 107f31b3f;  */

void FUN_107f31a94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010beabf20(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _objc_retain(lVar1);
  _objc_retain(param_2);
  func_0x00010c0f8240(uVar2);
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f31b40; end: 107f31e6b;  */

void FUN_107f31b40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010be10fc0(lVar2,param_2,*(undefined8 *)(lVar2 + 0xa0),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045740(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010be10fc0(lVar2,param_2,*(undefined8 *)(lVar2 + 0xb0),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045740(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x40) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010be10fc0(lVar2,param_2,*(undefined8 *)(lVar2 + 0xa8),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045740(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010be10fc0(lVar2,param_2,*(undefined8 *)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045740(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x50) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  func_0x00010c0309a0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x58) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c226ce0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x60) = puVar1;
  _objc_release(uVar3);
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_190,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_180;
    do {
      lVar6 = 0;
      do {
        if (*plStack_180 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,
                            *(undefined8 *)(lStack_188 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_190,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_1d0,auStack_148,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_1c0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1c0 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,
                            *(undefined8 *)(lStack_1c8 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_1d0,auStack_148,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126d86c0);
  func_0x00010c008900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f31e6c; end: 107f31ee3;  */

void FUN_107f31e6c(void)

{
  _objc_alloc(PTR_PTR_1126d86c0);
  func_0x00010c008900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f31ee4; end: 107f31f7b; -[SCMemoriesSearch addToTagSetFromTags:inTagType:] */

void FUN_107f31ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f31f7c;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107f31f7c; end: 107f320db;  */

void FUN_107f31f7c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 in_x6;
  undefined *in_x7;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar8 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar8);
  puVar6 = auStack_d8;
  puVar2 = puVar8;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_110;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(puVar8);
        }
        lVar7 = *(long *)(param_1 + 0x30);
        if (lVar7 < 2) {
          if (lVar7 == 0) {
            uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
LAB_107f32050:
            func_0x00010befa120(uVar16);
            lVar7 = 0x60;
            goto LAB_107f32064;
          }
          if (lVar7 == 1) {
            lVar7 = 0x40;
            goto LAB_107f32064;
          }
        }
        else {
          if (lVar7 != 2) {
            if (lVar7 != 3) goto LAB_107f32074;
            uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
            goto LAB_107f32050;
          }
          lVar7 = 0x48;
LAB_107f32064:
          func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar7));
        }
LAB_107f32074:
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar6 = auStack_d8;
      puVar2 = puVar8;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(in_x6);
  puVar14 = in_x7;
  _objc_retain();
  dVar17 = 0.0;
  FUN_107f2d52c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar14;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar14);
      }
      puVar3 = (undefined1 *)puVar5;
      func_0x00010c14d600();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if (((ulong)puVar4 & 1) != 0) {
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c154900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        goto LAB_107f32334;
      }
      puVar9 = puVar9 + 1;
    } while (puVar2 != puVar9);
    puVar2 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126d8698;
  _objc_alloc_init();
  uVar16 = *(undefined8 *)(puVar8 + 8);
  dVar17 = 1.60807493534087e-314;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  func_0x00010c0f7fc0(uVar16);
  _objc_retain(puVar14);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar8 = puVar14;
LAB_107f32334:
  _objc_release(puVar14);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  dVar18 = dVar17;
  func_0x00010be8ae20(*(undefined8 *)((long)puVar5 + 0x20));
  lVar12 = *(long *)((long)puVar5 + 0x20);
  func_0x00010be9c8c0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)((long)puVar5 + 0x38);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    lVar7 = lVar12;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      lVar7 = *(long *)((long)puVar5 + 0x20);
      func_0x00010bebc1c0();
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)((long)puVar5 + 0x38);
      func_0x00010c06e0e0();
      if (iVar1 != 0) {
        lVar13 = *(long *)((long)puVar5 + 0x40);
        lVar10 = 0;
        if (lVar13 != 0) {
          lVar10 = *(long *)((long)puVar5 + 0x48);
          if (lVar10 != 0) {
            puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_398 = 0xc2000000;
            uStack_390 = 0x107f32690;
            puStack_388 = &UNK_11084aaa8;
            _objc_retain(lVar10);
            uVar16 = *(undefined8 *)((long)puVar5 + 0x38);
            lStack_378 = lVar10;
            _objc_retain(uVar16);
            uStack_380 = uVar16;
            func_0x00010007380c(lVar13,&puStack_3a0);
            _objc_release(uStack_380);
            _objc_release(lStack_378);
          }
          lVar10 = 0;
        }
        goto LAB_107f32640;
      }
      lVar10 = lVar7;
      func_0x00010bf529e0();
      if (lVar10 == 0) {
        lVar10 = 0;
        uVar15 = 2;
        uVar16 = 1;
      }
      else {
        _objc_retain(lVar7);
        uVar15 = 1;
        uVar16 = 2;
        lVar10 = lVar7;
      }
      _objc_release(lVar7);
    }
    else {
      lVar10 = lVar12;
      func_0x00010bf51e00();
      uVar15 = 0;
      uVar16 = 1;
    }
    _CACurrentMediaTime();
    uVar11 = *(undefined8 *)((long)puVar5 + 0x50);
    lVar7 = lVar10;
    func_0x00010bf529e0(lVar10);
    FUN_107f3edc4(dVar18 - dVar17,uVar16,uVar11,lVar7,
                  *(undefined8 *)(*(long *)((long)puVar5 + 0x20) + 0x128));
    lVar7 = *(long *)((long)puVar5 + 0x40);
    if ((lVar7 == 0) || (lVar13 = *(long *)((long)puVar5 + 0x48), lVar13 == 0)) goto LAB_107f32648;
    puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3d8 = 0xc2000000;
    uStack_3d0 = 0x107f326a8;
    puStack_3c8 = &UNK_110845188;
    _objc_retain(lVar13);
    uVar16 = *(undefined8 *)((long)puVar5 + 0x38);
    lStack_3b0 = lVar13;
    _objc_retain(uVar16);
    uStack_3c0 = uVar16;
    _objc_retain(lVar10);
    lStack_3b8 = lVar10;
    uStack_3a8 = uVar15;
    func_0x00010007380c(lVar7,&puStack_3e0);
    _objc_release(lStack_3b8);
    _objc_release(uStack_3c0);
    lVar7 = lStack_3b0;
  }
  else {
    lVar7 = *(long *)((long)puVar5 + 0x40);
    lVar10 = 0;
    if (lVar7 == 0) goto LAB_107f32648;
    lVar10 = *(long *)((long)puVar5 + 0x48);
    if (lVar10 == 0) {
      lVar10 = 0;
      goto LAB_107f32648;
    }
    puStack_370 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_368 = 0xc2000000;
    pcStack_360 = FUN_107f32678;
    puStack_358 = &UNK_11084aaa8;
    _objc_retain(lVar10);
    uVar16 = *(undefined8 *)((long)puVar5 + 0x38);
    lStack_348 = lVar10;
    _objc_retain(uVar16);
    uStack_350 = uVar16;
    func_0x00010007380c(lVar7,&puStack_370);
    _objc_release(uStack_350);
    lVar10 = 0;
    lVar7 = lStack_348;
  }
LAB_107f32640:
  _objc_release(lVar7);
LAB_107f32648:
  _objc_release(lVar12);
  _objc_release(lVar10);
  return;
}



/* Entry: 107f320dc; end: 107f3239b; -[SCMemoriesSearch searchWithTypeahead:inputLocale:includePrivate:source:queue:completionHandler:] */

void FUN_107f320dc(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar2 = param_8;
  _objc_retain();
  dVar14 = 0.0;
  FUN_107f2d52c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar2);
      }
      uVar4 = param_3;
      func_0x00010c14d600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c154900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        goto LAB_107f32334;
      }
      puVar8 = puVar8 + 1;
    } while (puVar3 != puVar8);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d8698;
  _objc_alloc_init();
  uVar13 = *(undefined8 *)(param_1 + 8);
  dVar14 = 1.60807493534087e-314;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar2);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar13);
  _objc_retain(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = puVar2;
LAB_107f32334:
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  dVar15 = dVar14;
  func_0x00010be8ae20(*(undefined8 *)(param_3 + 0x20));
  lVar6 = *(long *)(param_3 + 0x20);
  func_0x00010be9c8c0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_3 + 0x38);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    lVar7 = lVar6;
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      lVar7 = *(long *)(param_3 + 0x20);
      func_0x00010bebc1c0();
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)(param_3 + 0x38);
      func_0x00010c06e0e0();
      if (iVar1 != 0) {
        lVar11 = *(long *)(param_3 + 0x40);
        lVar9 = 0;
        if (lVar11 != 0) {
          lVar9 = *(long *)(param_3 + 0x48);
          if (lVar9 != 0) {
            puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_278 = 0xc2000000;
            uStack_270 = 0x107f32690;
            puStack_268 = &UNK_11084aaa8;
            _objc_retain(lVar9);
            uVar13 = *(undefined8 *)(param_3 + 0x38);
            lStack_258 = lVar9;
            _objc_retain(uVar13);
            uStack_260 = uVar13;
            func_0x00010007380c(lVar11,&puStack_280);
            _objc_release(uStack_260);
            _objc_release(lStack_258);
          }
          lVar9 = 0;
        }
        goto LAB_107f32640;
      }
      lVar9 = lVar7;
      func_0x00010bf529e0();
      if (lVar9 == 0) {
        lVar9 = 0;
        uVar12 = 2;
        uVar13 = 1;
      }
      else {
        _objc_retain(lVar7);
        uVar12 = 1;
        uVar13 = 2;
        lVar9 = lVar7;
      }
      _objc_release(lVar7);
    }
    else {
      lVar9 = lVar6;
      func_0x00010bf51e00();
      uVar12 = 0;
      uVar13 = 1;
    }
    _CACurrentMediaTime();
    uVar10 = *(undefined8 *)(param_3 + 0x50);
    lVar7 = lVar9;
    func_0x00010bf529e0(lVar9);
    FUN_107f3edc4(dVar15 - dVar14,uVar13,uVar10,lVar7,
                  *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x128));
    lVar7 = *(long *)(param_3 + 0x40);
    if ((lVar7 == 0) || (lVar11 = *(long *)(param_3 + 0x48), lVar11 == 0)) goto LAB_107f32648;
    puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b8 = 0xc2000000;
    uStack_2b0 = 0x107f326a8;
    puStack_2a8 = &UNK_110845188;
    _objc_retain(lVar11);
    uVar13 = *(undefined8 *)(param_3 + 0x38);
    lStack_290 = lVar11;
    _objc_retain(uVar13);
    uStack_2a0 = uVar13;
    _objc_retain(lVar9);
    lStack_298 = lVar9;
    uStack_288 = uVar12;
    func_0x00010007380c(lVar7,&puStack_2c0);
    _objc_release(lStack_298);
    _objc_release(uStack_2a0);
    lVar7 = lStack_290;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x40);
    lVar9 = 0;
    if (lVar7 == 0) goto LAB_107f32648;
    lVar9 = *(long *)(param_3 + 0x48);
    if (lVar9 == 0) {
      lVar9 = 0;
      goto LAB_107f32648;
    }
    puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_248 = 0xc2000000;
    pcStack_240 = FUN_107f32678;
    puStack_238 = &UNK_11084aaa8;
    _objc_retain(lVar9);
    uVar13 = *(undefined8 *)(param_3 + 0x38);
    lStack_228 = lVar9;
    _objc_retain(uVar13);
    uStack_230 = uVar13;
    func_0x00010007380c(lVar7,&puStack_250);
    _objc_release(uStack_230);
    lVar9 = 0;
    lVar7 = lStack_228;
  }
LAB_107f32640:
  _objc_release(lVar7);
LAB_107f32648:
  _objc_release(lVar6);
  _objc_release(lVar9);
  return;
}



/* Entry: 107f3239c; end: 107f32677;  */

void FUN_107f3239c(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _CACurrentMediaTime();
  dVar9 = param_1;
  func_0x00010be8ae20(*(undefined8 *)(param_2 + 0x20));
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010be9c8c0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x38);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_2 + 0x20);
      func_0x00010bebc1c0();
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)(param_2 + 0x38);
      func_0x00010c06e0e0();
      if (iVar1 != 0) {
        lVar7 = *(long *)(param_2 + 0x40);
        lVar5 = 0;
        if (lVar7 != 0) {
          lVar5 = *(long *)(param_2 + 0x48);
          if (lVar5 != 0) {
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0xc2000000;
            uStack_b0 = 0x107f32690;
            puStack_a8 = &UNK_11084aaa8;
            _objc_retain(lVar5);
            uVar3 = *(undefined8 *)(param_2 + 0x38);
            lStack_98 = lVar5;
            _objc_retain(uVar3);
            uStack_a0 = uVar3;
            func_0x00010007380c(lVar7,&puStack_c0);
            _objc_release(uStack_a0);
            _objc_release(lStack_98);
          }
          lVar5 = 0;
        }
        goto LAB_107f32640;
      }
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        lVar5 = 0;
        uVar8 = 2;
        uVar3 = 1;
      }
      else {
        _objc_retain(lVar4);
        uVar8 = 1;
        uVar3 = 2;
        lVar5 = lVar4;
      }
      _objc_release(lVar4);
    }
    else {
      lVar5 = lVar2;
      func_0x00010bf51e00();
      uVar8 = 0;
      uVar3 = 1;
    }
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    lVar4 = lVar5;
    func_0x00010bf529e0(lVar5);
    FUN_107f3edc4(dVar9 - param_1,uVar3,uVar6,lVar4,
                  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x128));
    lVar4 = *(long *)(param_2 + 0x40);
    if ((lVar4 == 0) || (lVar7 = *(long *)(param_2 + 0x48), lVar7 == 0)) goto LAB_107f32648;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x107f326a8;
    puStack_e8 = &UNK_110845188;
    _objc_retain(lVar7);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    lStack_d0 = lVar7;
    _objc_retain(uVar3);
    uStack_e0 = uVar3;
    _objc_retain(lVar5);
    lStack_d8 = lVar5;
    uStack_c8 = uVar8;
    func_0x00010007380c(lVar4,&puStack_100);
    _objc_release(lStack_d8);
    _objc_release(uStack_e0);
    lVar4 = lStack_d0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    lVar5 = 0;
    if (lVar4 == 0) goto LAB_107f32648;
    lVar5 = *(long *)(param_2 + 0x48);
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_107f32648;
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107f32678;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(lVar5);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    lStack_68 = lVar5;
    _objc_retain(uVar3);
    uStack_70 = uVar3;
    func_0x00010007380c(lVar4,&puStack_90);
    _objc_release(uStack_70);
    lVar5 = 0;
    lVar4 = lStack_68;
  }
LAB_107f32640:
  _objc_release(lVar4);
LAB_107f32648:
  _objc_release(lVar2);
  _objc_release(lVar5);
  return;
}



/* Entry: 107f32678; end: 107f326bb;  */

void FUN_107f32678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f3268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f326bc; end: 107f326cb; -[SCMemoriesSearch searchWithConcepts:queue:completionHandler:] */

void FUN_107f326bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__searchResultsWithConcepts_isFor_112584bf8,param_3,0,param_4,param_5);
  return;
}



/* Entry: 107f326cc; end: 107f326db; -[SCMemoriesSearch searchAllTagResultsWithConcepts:queue:completionHandler:] */

void FUN_107f326cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__searchResultsWithConcepts_isFor_112584bf8,param_3,1,param_4,param_5);
  return;
}



/* Entry: 107f326dc; end: 107f327f3; -[SCMemoriesSearch searchMobileClipCaptionResults:queue:completionHandler:] */

void FUN_107f326dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d8698;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f327f4;
  puStack_70 = &UNK_110852488;
  _objc_retain();
  puStack_68 = puVar1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
  _objc_retain(puVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(puStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f327f4; end: 107f32c5b;  */

void FUN_107f327f4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_2d0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2b0 = *(undefined **)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((int)puStack_2b0 == 0) {
    puStack_2b0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_2d0 = *(long *)(param_1 + 0x30);
    _objc_retain(lStack_2d0);
    lStack_2b8 = lStack_2d0;
    func_0x00010bf52a60();
    if (lStack_2b8 != 0) {
      lVar6 = *plStack_1f0;
      do {
        lVar7 = 0;
        do {
          if (*plStack_1f0 != lVar6) {
            _objc_enumerationMutation(lStack_2d0);
          }
          lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
          func_0x00010c241260();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          plStack_230 = (long *)0x0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          _objc_retain(lVar2);
          lVar3 = lVar2;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar11 = *plStack_230;
            do {
              lVar10 = 0;
              do {
                if (*plStack_230 != lVar11) {
                  _objc_enumerationMutation(lVar2);
                }
                lVar4 = lVar2;
                func_0x00010c0e00e0(lVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                _objc_release(lVar4);
                puVar5 = PTR_PTR_1126d86d0;
                _objc_alloc(PTR_PTR_1126d86d0);
                func_0x00010c047d40(uVar9);
                func_0x00010befa120(puVar8);
                _objc_release(puVar5);
                lVar10 = lVar10 + 1;
              } while (lVar3 != lVar10);
              lVar3 = lVar2;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
          }
          _objc_release(lVar2);
          puVar5 = PTR_PTR_1126d86d8;
          _objc_alloc(PTR_PTR_1126d86d8);
          func_0x00010c048200();
          func_0x00010befa120(puStack_2b0);
          _objc_release(puVar5);
          iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
          func_0x00010c06e0e0();
          if (iVar1 != 0) {
            lVar6 = *(long *)(param_1 + 0x28);
            if ((lVar6 != 0) && (lVar7 = *(long *)(param_1 + 0x40), lVar7 != 0)) {
              puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_268 = 0xc2000000;
              uStack_260 = 0x107f32c74;
              puStack_258 = &UNK_11084aaa8;
              _objc_retain(lVar7);
              uVar9 = *(undefined8 *)(param_1 + 0x20);
              lStack_248 = lVar7;
              _objc_retain(uVar9);
              uStack_250 = uVar9;
              func_0x00010007380c(lVar6,&puStack_270);
              _objc_release(uStack_250);
              _objc_release(lStack_248);
            }
            _objc_release(puVar8);
            goto LAB_107f32c04;
          }
          _objc_release(puVar8);
          _objc_release(lVar2);
          lVar7 = lVar7 + 1;
        } while (lVar7 != lStack_2b8);
        lStack_2b8 = lStack_2d0;
        func_0x00010bf52a60();
      } while (lStack_2b8 != 0);
    }
    _objc_release(lStack_2d0);
    lStack_2d0 = *(long *)(param_1 + 0x38);
    func_0x00010bdcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x28);
    if ((lVar6 != 0) && (lVar7 = *(long *)(param_1 + 0x40), lVar7 != 0)) {
      puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a0 = 0xc2000000;
      uStack_298 = 0x107f32c8c;
      puStack_290 = &UNK_11084a9e8;
      _objc_retain(lVar7);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lStack_278 = lVar7;
      _objc_retain(uVar9);
      uStack_288 = uVar9;
      _objc_retain(lStack_2d0);
      lStack_280 = lStack_2d0;
      func_0x00010007380c(lVar6,&puStack_2a8);
      _objc_release(lStack_280);
      _objc_release(uStack_288);
      lVar2 = lStack_278;
LAB_107f32c04:
      _objc_release(lVar2);
    }
    _objc_release(lStack_2d0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    if ((lVar6 == 0) || (puVar8 = *(undefined **)(param_1 + 0x40), puVar8 == (undefined *)0x0))
    goto LAB_107f32c1c;
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_107f32c5c;
    puStack_1a0 = &UNK_11084aaa8;
    _objc_retain(puVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puStack_190 = puVar8;
    _objc_retain(uVar9);
    uStack_198 = uVar9;
    func_0x00010007380c(lVar6,&puStack_1b8);
    _objc_release(uStack_198);
    puStack_2b0 = puStack_190;
  }
  _objc_release();
LAB_107f32c1c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f32c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puStack_2b0 + 0x28) + 0x10))
            (*(long *)(puStack_2b0 + 0x28),*(undefined8 *)(puStack_2b0 + 0x20),0,0);
  return;
}



/* Entry: 107f32c5c; end: 107f32ca3;  */

void FUN_107f32c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f32c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f32ca4; end: 107f32dcf; -[SCMemoriesSearch _searchResultsWithConcepts:isForContentUnderstandingTab:queue:completionHandler:] */

void FUN_107f32ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d8698;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107f32dd0;
  puStack_88 = &UNK_11097c050;
  lStack_80 = param_1;
  uStack_58 = param_4;
  _objc_retain();
  puStack_78 = puVar1;
  uStack_70 = param_5;
  uStack_68 = param_3;
  uStack_60 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  uVar2 = uStack_68;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f32dd0; end: 107f33177;  */

void FUN_107f32dd0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x00010be8ae20(*(undefined8 *)(param_1 + 0x20));
  }
  puStack_1e0 = *(undefined **)(param_1 + 0x28);
  func_0x00010c06e0e0();
  if ((int)puStack_1e0 == 0) {
    puStack_1e0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d8610;
    func_0x00010c267020(PTR_PTR_1126d8610);
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_1e8 = *(long *)(param_1 + 0x38);
    _objc_retain(lStack_1e8);
    lVar4 = lStack_1e8;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar9 = *plStack_160;
      do {
        lVar5 = 0;
        do {
          if (*plStack_160 != lVar9) {
            _objc_enumerationMutation(lStack_1e8);
          }
          lVar2 = *(long *)(param_1 + 0x20);
          func_0x00010bebcee0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
          func_0x00010c27ad40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d86d8;
          _objc_alloc(PTR_PTR_1126d86d8);
          func_0x00010c048200();
          func_0x00010befa120(puStack_1e0);
          _objc_release(puVar3);
          iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
          func_0x00010c06e0e0();
          if (iVar1 != 0) {
            lVar4 = *(long *)(param_1 + 0x30);
            if ((lVar4 != 0) && (lVar9 = *(long *)(param_1 + 0x40), lVar9 != 0)) {
              puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_198 = 0xc2000000;
              uStack_190 = 0x107f33190;
              puStack_188 = &UNK_11084aaa8;
              _objc_retain(lVar9);
              uVar8 = *(undefined8 *)(param_1 + 0x28);
              lStack_178 = lVar9;
              _objc_retain(uVar8);
              uStack_180 = uVar8;
              func_0x00010007380c(lVar4,&puStack_1a0);
              _objc_release(uStack_180);
              _objc_release(lStack_178);
            }
            _objc_release(uVar7);
            goto LAB_107f3311c;
          }
          _objc_release(uVar7);
          _objc_release(lVar2);
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
        lVar4 = lStack_1e8;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lStack_1e8);
    lStack_1e8 = *(long *)(param_1 + 0x20);
    func_0x00010bdcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x30);
    if ((lVar4 != 0) && (lVar9 = *(long *)(param_1 + 0x40), lVar9 != 0)) {
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      uStack_1c8 = 0x107f331a8;
      puStack_1c0 = &UNK_11084a9e8;
      _objc_retain(lVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      lStack_1a8 = lVar9;
      _objc_retain(uVar7);
      uStack_1b8 = uVar7;
      _objc_retain(lStack_1e8);
      lStack_1b0 = lStack_1e8;
      func_0x00010007380c(lVar4,&puStack_1d8);
      _objc_release(lStack_1b0);
      _objc_release(uStack_1b8);
      lVar2 = lStack_1a8;
LAB_107f3311c:
      _objc_release(lVar2);
    }
    _objc_release(lStack_1e8);
    _objc_release(puVar6);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    if ((lVar4 == 0) || (puVar6 = *(undefined **)(param_1 + 0x40), puVar6 == (undefined *)0x0))
    goto LAB_107f3313c;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_107f33178;
    puStack_110 = &UNK_11084aaa8;
    _objc_retain(puVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puStack_100 = puVar6;
    _objc_retain(uVar7);
    uStack_108 = uVar7;
    func_0x00010007380c(lVar4,&puStack_128);
    _objc_release(uStack_108);
    puStack_1e0 = puStack_100;
  }
  _objc_release();
LAB_107f3313c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f3318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puStack_1e0 + 0x28) + 0x10))
            (*(long *)(puStack_1e0 + 0x28),*(undefined8 *)(puStack_1e0 + 0x20),0,0);
  return;
}



/* Entry: 107f33178; end: 107f331bf;  */

void FUN_107f33178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f3318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f331c0; end: 107f332db; -[SCMemoriesSearch searchWithClusterNames:queue:completionHandler:] */

void FUN_107f331c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d8698;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f332dc;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_1;
  uStack_60 = param_3;
  _objc_retain();
  puStack_58 = puVar1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
  uVar2 = uStack_48;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f332dc; end: 107f333a7;  */

void FUN_107f332dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f333a8;
  puStack_60 = &UNK_110a13d80;
  _objc_retain(uVar1);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar3;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010c0f8240(uVar4,param_2,&puStack_78);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  return;
}



/* Entry: 107f333a8; end: 107f339e7;  */

void FUN_107f333a8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  long lStack_2e8;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_120;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 0.0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_2e8 = *(long *)(param_1 + 0x20);
  _objc_retain(lStack_2e8);
  lVar15 = lStack_2e8;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar16 = *plStack_1d0;
    do {
      lVar18 = 0;
      do {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ec7758;
        dVar24 = dVar25;
        if (*plStack_1d0 != lVar16) {
          _objc_enumerationMutation(lStack_2e8);
          dVar24 = dVar25;
        }
        uVar13 = *(undefined8 *)(lStack_1d8 + lVar18 * 8);
        uVar14 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ec7758);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becb9e0(uVar14);
        dVar25 = dVar24;
        _objc_release(ppuVar3);
        fVar26 = SUB84(dVar24,0);
        if (fVar26 <= 1.0) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
          func_0x00010c06e0e0();
          if (iVar1 != 0) {
            lVar15 = *(long *)(param_1 + 0x38);
            if ((lVar15 == 0) || (lVar16 = *(long *)(param_1 + 0x40), lVar16 == 0))
            goto LAB_107f3398c;
            puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_208 = 0xc2000000;
            pcStack_200 = FUN_107f339e8;
            puStack_1f8 = &UNK_11084aaa8;
            _objc_retain(lVar16);
            uVar13 = *(undefined8 *)(param_1 + 0x30);
            lStack_1e8 = lVar16;
            _objc_retain(uVar13);
            uStack_1f0 = uVar13;
            func_0x00010007380c(lVar15,&puStack_210);
            _objc_release(uStack_1f0);
            lVar15 = lStack_1e8;
            goto LAB_107f33988;
          }
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_120 = uVar13;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_2;
          func_0x00010bf9b000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          func_0x00010c1607a0();
          _objc_retainAutoreleasedReturnValue();
          dVar25 = 0.0;
          lStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          plStack_240 = (long *)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          lVar7 = lVar6;
          func_0x00010c142300();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf52a60();
          if (lVar8 != 0) {
            lVar17 = *plStack_240;
            do {
              lVar21 = 0;
              do {
                dVar24 = dVar25;
                if (*plStack_240 != lVar17) {
                  _objc_enumerationMutation(lVar7);
                  dVar24 = dVar25;
                }
                uVar19 = *(undefined8 *)(lStack_248 + lVar21 * 8);
                uVar14 = uVar19;
                func_0x00010c25d280(uVar19);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar5;
                func_0x00010bf4b900();
                dVar25 = dVar24;
                if (((ulong)puVar9 & 1) == 0) {
                  uVar10 = uVar19;
                  func_0x00010c25d280(uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25d280(uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfb2c80();
                  dVar25 = dVar24;
                  _objc_release(uVar19);
                  uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
                  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x120);
                  func_0x00010c269d40(uVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfaf180();
                  _objc_retainAutoreleasedReturnValue();
                  uVar19 = uVar20;
                  func_0x00010c0720c0();
                  _objc_release(uVar20);
                  _objc_release(uVar11);
                  fVar22 = SUB84(dVar25,0);
                  if ((int)uVar19 != 0) {
                    func_0x00010becb9e0(*(undefined8 *)(param_1 + 0x28));
                    fVar23 = fVar26;
                    if (fVar26 <= fVar22) {
                      fVar23 = fVar22;
                    }
                    dVar25 = (double)(ulong)(uint)fVar23;
                    if (fVar23 <= SUB84(dVar24,0)) {
                      puVar9 = PTR_PTR_1126d86d0;
                      _objc_alloc(PTR_PTR_1126d86d0);
                      dVar25 = (double)SUB84(dVar24,0);
                      func_0x00010c047d40();
                      func_0x00010befa120(puVar4);
                      func_0x00010befa120(puVar5);
                      _objc_release(puVar9);
                    }
                  }
                  _objc_release(uVar10);
                }
                _objc_release(uVar14);
                lVar21 = lVar21 + 1;
              } while (lVar8 != lVar21);
              lVar8 = lVar7;
              func_0x00010bf52a60();
            } while (lVar8 != 0);
          }
          _objc_release(lVar7);
          puVar9 = PTR_PTR_1126d86d8;
          _objc_alloc(PTR_PTR_1126d86d8);
          puVar12 = puVar4;
          func_0x00010bf51e00(puVar4);
          func_0x00010bf2fac0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c048200(puVar9);
          _objc_release(uVar13);
          _objc_release(puVar12);
          func_0x00010befa120(puVar2);
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(lVar6);
          _objc_release(puVar4);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar15);
      lVar15 = lStack_2e8;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lStack_2e8);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    lStack_2e8 = *(long *)(param_1 + 0x28);
    func_0x00010bdcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(param_1 + 0x38);
    if ((lVar15 != 0) && (lVar16 = *(long *)(param_1 + 0x40), lVar16 != 0)) {
      puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b0 = 0xc2000000;
      uStack_2a8 = 0x107f33a18;
      puStack_2a0 = &UNK_11084a9e8;
      _objc_retain(lVar16);
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      lStack_288 = lVar16;
      _objc_retain(uVar13);
      uStack_298 = uVar13;
      _objc_retain(lStack_2e8);
      lStack_290 = lStack_2e8;
      func_0x00010007380c(lVar15,&puStack_2b8);
      _objc_release(lStack_290);
      _objc_release(uStack_298);
      lVar15 = lStack_288;
LAB_107f33988:
      _objc_release(lVar15);
    }
  }
  else {
    lVar15 = *(long *)(param_1 + 0x38);
    if ((lVar15 == 0) || (lVar16 = *(long *)(param_1 + 0x40), lVar16 == 0)) goto LAB_107f33994;
    puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_278 = 0xc2000000;
    uStack_270 = 0x107f33a00;
    puStack_268 = &UNK_11084aaa8;
    _objc_retain(lVar16);
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    lStack_258 = lVar16;
    _objc_retain(uVar13);
    uStack_260 = uVar13;
    func_0x00010007380c(lVar15,&puStack_280);
    _objc_release(uStack_260);
    lStack_2e8 = lStack_258;
  }
LAB_107f3398c:
  _objc_release(lStack_2e8);
LAB_107f33994:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f339fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),0,0);
  return;
}



/* Entry: 107f339e8; end: 107f33a2f;  */

void FUN_107f339e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f339fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f33a30; end: 107f33b47; -[SCMemoriesSearch searchTimeLocationClusterWithTimetags:queue:completionHandler:] */

void FUN_107f33a30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d8698;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f33b48;
  puStack_70 = &UNK_110a13d80;
  uStack_68 = param_3;
  _objc_retain();
  puStack_60 = puVar1;
  uStack_58 = param_4;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
  _objc_retain(puVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(uStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f33b48; end: 107f34493;  */

void FUN_107f33b48(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  bool bVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long lStack_498;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  long lStack_440;
  long lStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_218;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lVar23 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar23);
  lStack_498 = lVar23;
  func_0x00010bf52a60();
  if (lStack_498 != 0) {
    lVar25 = *plStack_2d0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_2d0 != lVar25) {
          _objc_enumerationMutation(lVar23);
        }
        uVar19 = *(undefined8 *)(lStack_2d8 + lVar20 * 8);
        iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010c06e0e0();
        if (iVar2 != 0) {
          lVar25 = *(long *)(param_1 + 0x30);
          if ((lVar25 == 0) || (lVar20 = *(long *)(param_1 + 0x40), lVar20 == 0))
          goto LAB_107f34418;
          puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_308 = 0xc2000000;
          pcStack_300 = FUN_107f34494;
          puStack_2f8 = &UNK_11084aaa8;
          _objc_retain(lVar20);
          uVar19 = *(undefined8 *)(param_1 + 0x28);
          lStack_2e8 = lVar20;
          _objc_retain(uVar19);
          uStack_2f0 = uVar19;
          func_0x00010007380c(lVar25,&puStack_310);
          _objc_release(uStack_2f0);
          lVar25 = lStack_2e8;
          goto LAB_107f34414;
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_110 = uVar19;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_2;
        func_0x00010bf9b000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        uVar7 = uVar6;
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf529e0();
        _objc_release(uVar7);
        if (1 < uVar8) {
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          lStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          plStack_340 = (long *)0x0;
          uVar7 = uVar6;
          func_0x00010c142300();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf52a60();
          if (uVar8 != 0) {
            lVar17 = *plStack_340;
            do {
              uVar21 = 0;
              do {
                if (*plStack_340 != lVar17) {
                  _objc_enumerationMutation(uVar7);
                }
                lVar9 = *(long *)(lStack_348 + uVar21 * 8);
                func_0x00010c25d280();
                _objc_retainAutoreleasedReturnValue();
                if (lVar9 != 0) {
                  func_0x00010befa120(puVar4);
                }
                _objc_release(lVar9);
                uVar21 = uVar21 + 1;
              } while (uVar8 != uVar21);
              uVar8 = uVar7;
              func_0x00010bf52a60();
            } while (uVar8 != 0);
          }
          _objc_release(uVar7);
          puVar5 = puVar4;
          func_0x00010bf529e0();
          if ((undefined *)0x1 < puVar5) {
            puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
            _objc_alloc();
            func_0x00010bffc4a0();
            lStack_388 = 0;
            uStack_390 = 0;
            uStack_378 = 0;
            plStack_380 = (long *)0x0;
            uStack_368 = 0;
            uStack_370 = 0;
            uStack_358 = 0;
            uStack_360 = 0;
            _objc_retain(puVar4);
            puVar11 = puVar4;
            func_0x00010bf52a60();
            if (puVar11 != (undefined *)0x0) {
              lVar17 = *plStack_380;
              do {
                puVar24 = (undefined *)0x0;
                do {
                  if (*plStack_380 != lVar17) {
                    _objc_enumerationMutation(puVar4);
                  }
                  uStack_218 = *(undefined8 *)(lStack_388 + (long)puVar24 * 8);
                  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = param_2;
                  func_0x00010bf9b000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar12);
                  uVar8 = uVar7;
                  func_0x00010c142300();
                  _objc_retainAutoreleasedReturnValue();
                  uVar21 = uVar8;
                  func_0x00010bf529e0();
                  _objc_release(uVar8);
                  if (uVar21 != 0) {
                    uVar8 = uVar7;
                    func_0x00010c142300(uVar7);
                    _objc_retainAutoreleasedReturnValue();
                    uVar21 = uVar8;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar21;
                    func_0x00010c25d280();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar21);
                    _objc_release(uVar8);
                    func_0x00010befa120(puVar10);
                    func_0x00010c1d0640(puVar5);
                    _objc_release(uVar13);
                  }
                  _objc_release(uVar7);
                  puVar24 = puVar24 + 1;
                } while (puVar11 != puVar24);
                puVar11 = puVar4;
                func_0x00010bf52a60();
              } while (puVar11 != (undefined *)0x0);
            }
            _objc_release(puVar4);
            puVar11 = puVar5;
            func_0x00010bf529e0();
            if ((puVar11 == (undefined *)0x0) ||
               (puVar11 = puVar10, func_0x00010bf529e0(), puVar11 == (undefined *)0x0)) {
              _objc_release(puVar10);
              _objc_release(puVar5);
            }
            else {
              puVar11 = puVar10;
              func_0x00010bf04a20();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar10;
              func_0x00010bf52b00();
              lStack_3c8 = 0;
              uStack_3d0 = 0;
              uStack_3b8 = 0;
              plStack_3c0 = (long *)0x0;
              uStack_3a8 = 0;
              uStack_3b0 = 0;
              uStack_398 = 0;
              uStack_3a0 = 0;
              _objc_retain(puVar10);
              puVar12 = puVar10;
              func_0x00010bf52a60();
              if (puVar12 != (undefined *)0x0) {
                lVar17 = *plStack_3c0;
                do {
                  puVar22 = (undefined *)0x0;
                  do {
                    if (*plStack_3c0 != lVar17) {
                      _objc_enumerationMutation(puVar10);
                    }
                    puVar18 = *(undefined **)(lStack_3c8 + (long)puVar22 * 8);
                    puVar14 = puVar10;
                    func_0x00010bf52b00();
                    if (puVar24 < puVar14) {
                      _objc_retain(puVar18);
                      _objc_release(puVar11);
                      puVar24 = puVar10;
                      func_0x00010bf52b00();
                      puVar11 = puVar18;
                    }
                    puVar22 = puVar22 + 1;
                  } while (puVar12 != puVar22);
                  puVar12 = puVar10;
                  func_0x00010bf52a60();
                } while (puVar12 != (undefined *)0x0);
              }
              _objc_release(puVar10);
              puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_3f8 = 0xc2000000;
              pcStack_3f0 = FUN_107f344ac;
              puStack_3e8 = &UNK_110a13db0;
              _objc_retain(puVar11);
              puStack_3e0 = puVar11;
              _objc_retain(puVar24);
              puStack_3d8 = puVar24;
              func_0x00010bf97ce0(puVar5);
              puVar12 = puVar24;
              func_0x00010bf529e0();
              if (puVar12 == (undefined *)0x0) {
                bVar16 = false;
                bVar1 = true;
              }
              else {
                lVar17 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
                func_0x00010bf65160();
                _objc_retainAutoreleasedReturnValue();
                if (lVar17 == 0) {
                  bVar16 = false;
                  bVar1 = true;
                }
                else {
                  ppuVar15 = &PTR____CFConstantStringClassReference_110dc4238;
                  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4238,0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010bfb5de0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = PTR_PTR_1126d86d8;
                  _objc_alloc(PTR_PTR_1126d86d8);
                  puVar18 = puVar24;
                  func_0x00010bf51e00(puVar24);
                  func_0x00010c048200(puVar14);
                  _objc_release(puVar18);
                  func_0x00010befa120(puVar3);
                  _objc_release(puVar14);
                  _objc_release(puVar22);
                  _objc_release(puVar12);
                  _objc_release(ppuVar15);
                  _objc_release(lVar17);
                  bVar1 = false;
                  bVar16 = true;
                }
              }
              _objc_release(puStack_3d8);
              _objc_release(puStack_3e0);
              _objc_release(puVar24);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(puVar5);
              if (!bVar1) {
                _objc_release(uVar6);
                _objc_release(puVar4);
                _objc_release(lVar23);
                if (!bVar16) goto LAB_107f34420;
                goto LAB_107f34284;
              }
            }
          }
        }
        _objc_release(uVar6);
        _objc_release(puVar4);
        lVar20 = lVar20 + 1;
      } while (lVar20 != lStack_498);
      lStack_498 = lVar23;
      func_0x00010bf52a60();
    } while (lStack_498 != 0);
  }
  _objc_release(lVar23);
LAB_107f34284:
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c06e0e0();
  if (iVar2 == 0) {
    lVar23 = *(long *)(param_1 + 0x38);
    func_0x00010bdcf4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = *(long *)(param_1 + 0x30);
    if ((lVar25 != 0) && (lVar20 = *(long *)(param_1 + 0x40), lVar20 != 0)) {
      puStack_468 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_460 = 0xc2000000;
      uStack_458 = 0x107f34578;
      puStack_450 = &UNK_11084a9e8;
      _objc_retain(lVar20);
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      lStack_438 = lVar20;
      _objc_retain(uVar19);
      uStack_448 = uVar19;
      _objc_retain(lVar23);
      lStack_440 = lVar23;
      func_0x00010007380c(lVar25,&puStack_468);
      _objc_release(lStack_440);
      _objc_release(uStack_448);
      lVar25 = lStack_438;
LAB_107f34414:
      _objc_release(lVar25);
    }
  }
  else {
    lVar23 = *(long *)(param_1 + 0x30);
    if ((lVar23 == 0) || (lVar25 = *(long *)(param_1 + 0x40), lVar25 == 0)) goto LAB_107f34420;
    puStack_430 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_428 = 0xc2000000;
    pcStack_420 = FUN_107f34560;
    puStack_418 = &UNK_11084aaa8;
    _objc_retain(lVar25);
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    lStack_408 = lVar25;
    _objc_retain(uVar19);
    uStack_410 = uVar19;
    func_0x00010007380c(lVar23,&puStack_430);
    _objc_release(uStack_410);
    lVar23 = lStack_408;
  }
LAB_107f34418:
  _objc_release(lVar23);
LAB_107f34420:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f344a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),0,0);
    return;
  }
  return;
}



/* Entry: 107f34494; end: 107f344ab;  */

void FUN_107f34494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f344a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f344ac; end: 107f3455f;  */

void FUN_107f344ac(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126d86d0;
    _objc_alloc(PTR_PTR_1126d86d0);
    func_0x00010c047d40(0x3ff0000000000000);
    puVar2 = PTR_PTR_1126d86d0;
    _objc_alloc(PTR_PTR_1126d86d0);
    func_0x00010c047d40(0x3ff0000000000000);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f34560; end: 107f3458f;  */

void FUN_107f34560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f34574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f34590; end: 107f345c3; -[SCMemoriesSearch markSearchQueryResultsOutdatedForNewMEO] */

void FUN_107f34590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bba60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f345c4; end: 107f3461b; -[SCMemoriesSearch _applicationDidReceiveMemoryWarning:] */

void FUN_107f345c4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107f3461c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 107f3461c; end: 107f34627;  */

void FUN_107f3461c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107f34628; end: 107f347df; -[SCMemoriesSearch _fetchDistinctTags:database:] */

undefined8 FUN_107f34628(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar2 = param_4;
  func_0x00010bf9afc0(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = lVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c25d280(uVar5,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_1;
        func_0x00010be23420(param_1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1,param_2,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return uVar10;
  }
  ___stack_chk_fail();
  if (*(char *)(param_3 + 0x138) == '\x01') {
    uVar7 = *(undefined8 *)(param_3 + 0x120);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec1ce4();
    _objc_release(uVar7);
    return uVar10;
  }
  return 0x3ecccccd;
}



/* Entry: 107f347e0; end: 107f3483f; -[SCMemoriesSearch _updatedOverallThreshold] */

undefined8 FUN_107f347e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x138) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0x120);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec1ce4();
    _objc_release(uVar1);
    return param_1;
  }
  return 0x3ecccccd;
}



/* Entry: 107f34840; end: 107f34973; -[SCMemoriesSearch _reloadThresholdForConcepts] */

void FUN_107f34840(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c26d540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_2 + 0xe0);
  func_0x00010c0e00e0(lVar2,param_3,&PTR____CFConstantStringClassReference_110ec7778);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bee5420(param_2);
    *(undefined4 *)(param_2 + 0xe8) = param_1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xe0);
    func_0x00010c0e00e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110ec7778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    *(undefined4 *)(param_2 + 0xe8) = param_1;
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x140) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 107f34974; end: 107f349ff;  */

bool FUN_107f34974(float param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xe0);
  func_0x00010c0e00e0(uVar2,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bfb2c80(uVar1);
  _objc_release(uVar1);
  return 1.0 < param_1;
}



/* Entry: 107f34a00; end: 107f34acf; -[SCMemoriesSearch _thresholdForConcept:] */

ulong FUN_107f34a00(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    param_1 = 0x3f800000;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0xe0);
    if (uVar3 == 0) {
      param_1 = (ulong)*(uint *)(param_2 + 0xe8);
    }
    else {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar1 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      if (uVar1 == 0) {
        param_1 = (ulong)*(uint *)(param_2 + 0xe8);
      }
      else {
        func_0x00010bfb2c80(uVar3);
      }
      _objc_release(uVar1);
    }
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107f34ad0; end: 107f34df3; -[SCMemoriesSearch _segmentUserQueryIntoConcepts:inputLanguageId:] */

undefined *
FUN_107f34ad0(undefined8 ****param_1,long param_2,undefined8 ****param_3,undefined8 ****param_4)

{
  uint uVar1;
  unkuint9 Var2;
  float fVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 ****ppppuVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 ****ppppuVar22;
  int iVar23;
  int iVar24;
  undefined8 ****unaff_x26;
  undefined8 ****ppppuVar25;
  long unaff_x27;
  undefined8 uVar26;
  undefined8 ****unaff_x28;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double unaff_d8;
  undefined8 unaff_d9;
  int aiStack_348 [6];
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_270;
  undefined8 uStack_260;
  double dStack_258;
  undefined8 ***pppuStack_250;
  long lStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 ***pppuStack_220;
  undefined *puStack_218;
  undefined8 ***pppuStack_210;
  undefined8 ***pppuStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [128];
  long lStack_120;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar17 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppppuVar5 = param_1;
  pppuStack_80 = param_3;
  func_0x00010becd0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  ppppuVar22 = ppppuVar5;
  func_0x00010bf529e0();
  ppppuVar25 = ppppuVar5;
  func_0x00010bf529e0();
  pppuStack_78 = ppppuVar5;
  if (ppppuVar25 == (undefined8 ****)0x0) {
    ppppuVar25 = (undefined8 ****)0x0;
  }
  else {
    unaff_x27 = 0;
    ppppuVar25 = (undefined8 ****)0x0;
    pppuStack_90 = ppppuVar22;
    puStack_88 = puVar6;
    while (iVar24 = (int)ppppuVar25, unaff_x26 = ppppuVar25, iVar24 < (int)pppuStack_90) {
      iVar23 = 0;
      ppppuVar22 = (undefined8 ****)pppuStack_90;
      while( true ) {
        ppppuVar17 = (undefined8 ****)(ulong)(uint)((int)ppppuVar22 - iVar24);
        unaff_x28 = ppppuVar5;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar7 = unaff_x28;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        param_3 = ppppuVar7;
        if (iVar23 == 0) {
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          pppuStack_a0 = ppppuVar7;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          ppppuVar5 = param_1;
          func_0x00010be854e0();
          puVar6 = puStack_88;
          if (0 < (int)ppppuVar5) {
            func_0x00010befa120(puStack_88);
            _objc_release(puVar8);
            ppppuVar5 = (undefined8 ****)pppuStack_78;
            ppppuVar25 = (undefined8 ****)pppuStack_90;
            goto LAB_107f34c78;
          }
          _objc_release(puVar8);
          ppppuVar5 = (undefined8 ****)pppuStack_78;
        }
        ppppuVar9 = param_1;
        ppppuVar17 = param_4;
        func_0x00010be45320();
        puVar6 = puStack_88;
        if ((int)ppppuVar9 != 0) break;
        _objc_release(ppppuVar7);
        _objc_release(unaff_x28);
        uVar1 = (int)ppppuVar22 - 1;
        ppppuVar22 = (undefined8 ****)(ulong)uVar1;
        iVar23 = iVar23 + 1;
        puVar6 = puStack_88;
        if ((int)uVar1 <= iVar24) goto LAB_107f34cb8;
      }
      param_3 = ppppuVar7;
      func_0x00010befa120(puStack_88);
      ppppuVar25 = ppppuVar22;
LAB_107f34c78:
      _objc_release(ppppuVar7);
      _objc_release(unaff_x28);
      unaff_x27 = (long)(int)ppppuVar25;
      ppppuVar22 = ppppuVar5;
      func_0x00010bf529e0();
      unaff_x26 = ppppuVar25;
      if (ppppuVar22 <= (undefined8 ****)(long)(int)ppppuVar25) break;
    }
  }
LAB_107f34cb8:
  ppppuVar22 = ppppuVar5;
  func_0x00010bf529e0();
  puVar8 = puVar6;
  if ((undefined8 ****)(long)(int)ppppuVar25 < ppppuVar22) {
    puVar10 = puVar6;
    func_0x00010bf529e0();
    ppppuVar22 = (undefined8 ****)pppuStack_80;
    if (puVar10 == (undefined *)0x0) {
      pppuStack_70 = pppuStack_80;
      param_3 = &pppuStack_70;
      ppppuVar17 = (undefined8 ****)0x1;
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppppuVar17 = ppppuVar5;
      func_0x00010bf529e0();
      ppppuVar17 = (undefined8 ****)(long)((int)ppppuVar17 - (int)ppppuVar25);
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar5;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = ppppuVar7;
      func_0x00010befa120(puVar6);
      _objc_release(ppppuVar7);
      func_0x00010bf51e00();
      pppuVar4 = pppuStack_78;
      _objc_release(ppppuVar5);
      ppppuVar5 = (undefined8 ****)pppuVar4;
    }
  }
  else {
    func_0x00010bf51e00();
    ppppuVar22 = (undefined8 ****)pppuStack_80;
  }
  _objc_release(puVar6);
  _objc_release(ppppuVar5);
  _objc_release(param_4);
  _objc_release(ppppuVar22);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar15 = &puStack_1f0;
    pcStack_a8 = FUN_107f34df4;
    lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    _objc_retain(ppppuVar17);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar28 = 0.0;
    lStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(ppppuVar17);
    puVar18 = auStack_1a0;
    uVar19 = 0x10;
    ppppuVar5 = ppppuVar17;
    func_0x00010bf52a60();
    if (ppppuVar5 != (undefined8 ****)0x0) {
      unaff_x27 = *plStack_1e0;
      unaff_d9 = 0x3fe3333340000000;
      do {
        unaff_x28 = (undefined8 ****)0x0;
        ppppuVar22 = ppppuVar5;
        do {
          ppppuVar25 = ppppuVar22;
          if (*plStack_1e0 != unaff_x27) {
            ppppuVar25 = ppppuVar17;
            _objc_enumerationMutation();
          }
          param_1 = *(undefined8 *****)(lStack_1e8 + (long)unaff_x28 * 8);
          _objc_autoreleasePoolPush();
          _objc_retain(param_1);
          func_0x00010c150c40(param_3);
          dVar27 = dVar28;
          func_0x00010c150c40(param_1);
          if (dVar27 <= dVar28) {
            dVar27 = dVar28;
          }
          ppppuVar22 = param_1;
          func_0x00010c0720c0();
          dVar28 = (double)((ulong)ppppuVar22 & 0xffffffff);
          unaff_d8 = dVar28;
          if (dVar28 <= dVar27) {
            unaff_d8 = dVar27;
          }
          if ((0.6000000238418579 <= unaff_d8) ||
             (ppppuVar22 = param_1, func_0x00010c0720c0(), (int)ppppuVar22 != 0)) {
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            dVar28 = unaff_d8;
            pppuStack_1b0 = param_1;
            func_0x00010c0df720();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1a8 = puVar6;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8);
            _objc_release(unaff_x26);
            _objc_release(puVar6);
          }
          _objc_release(param_1);
          ppppuVar22 = ppppuVar25;
          _objc_autoreleasePoolPop();
          unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
        } while (ppppuVar5 != unaff_x28);
        puVar18 = auStack_1a0;
        uVar19 = 0x10;
        ppppuVar5 = ppppuVar17;
        ppuVar15 = &puStack_1f0;
        func_0x00010bf52a60();
        param_4 = (undefined8 ****)0x0;
      } while (ppppuVar5 != (undefined8 ****)0x0);
    }
    _objc_release(ppppuVar17);
    _objc_release(ppppuVar17);
    ppppuVar5 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_120) {
      ___stack_chk_fail();
      pcStack_1f8 = FUN_107f35014;
      lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_260 = unaff_d9;
      dStack_258 = unaff_d8;
      pppuStack_250 = unaff_x28;
      lStack_248 = unaff_x27;
      pppuStack_240 = unaff_x26;
      puStack_238 = puVar6;
      pppuStack_230 = ppppuVar25;
      pppuStack_228 = param_1;
      pppuStack_220 = param_4;
      puStack_218 = puVar8;
      pppuStack_210 = ppppuVar17;
      pppuStack_208 = param_3;
      ppuStack_200 = &puStack_b0;
      _objc_retain(ppuVar15);
      _objc_retain(puVar18);
      _objc_retain(uVar19);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar22 = ppppuVar5;
      func_0x00010be16a60(ppppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(ppuVar11);
      ppppuVar25 = ppppuVar5;
      func_0x00010be16a60(ppppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar22);
      func_0x00010befa160(ppuVar11);
      ppppuVar22 = ppppuVar5;
      func_0x00010be16a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar25);
      func_0x00010befa160(ppuVar11);
      uVar29 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      _objc_retain(ppppuVar22);
      ppppuVar25 = ppppuVar22;
      func_0x00010bf52a60();
      if (ppppuVar25 != (undefined8 ****)0x0) {
        lVar21 = *plStack_320;
        do {
          ppppuVar17 = (undefined8 ****)0x0;
          do {
            uVar30 = uVar29;
            if (*plStack_320 != lVar21) {
              _objc_enumerationMutation(ppppuVar22);
              uVar30 = uVar29;
            }
            uVar26 = *(undefined8 *)(lStack_328 + (long)ppppuVar17 * 8);
            uVar12 = uVar26;
            func_0x00010c0dfd40(uVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            uVar29 = uVar30;
            _objc_release(uVar12);
            if (0.8 <= (float)uVar30) {
              func_0x00010c0dfd40(uVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar18);
              _objc_release(uVar26);
            }
            ppppuVar17 = (undefined8 ****)((long)ppppuVar17 + 1);
          } while (ppppuVar25 != ppppuVar17);
          ppppuVar25 = ppppuVar22;
          func_0x00010bf52a60();
        } while (ppppuVar25 != (undefined8 ****)0x0);
      }
      _objc_release(ppppuVar22);
      ppppuVar25 = ppppuVar5;
      func_0x00010be16a60(ppppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar22);
      func_0x00010befa160(ppuVar11);
      func_0x00010be16a60(ppppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar25);
      func_0x00010befa160(ppuVar11);
      ppuVar16 = &PTR___NSConcreteGlobalBlock_110a13e00;
      func_0x00010c246ba0(ppuVar11);
      ppuVar13 = ppuVar11;
      func_0x00010bf529e0();
      fVar3 = 10.0;
      if ((float)ppuVar13 <= 10.0) {
        fVar3 = (float)ppuVar13;
      }
      if (0.0 < fVar3) {
        uVar20 = 1;
        do {
          ppuVar13 = ppuVar11;
          func_0x00010c0dfd40(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar14;
          func_0x00010befa120(puVar6);
          _objc_release(ppuVar14);
          _objc_release(ppuVar13);
          Var2 = (unkuint9)uVar20;
          ppuVar13 = ppuVar11;
          func_0x00010bf529e0();
          fVar3 = 10.0;
          if ((float)ppuVar13 <= 10.0) {
            fVar3 = (float)ppuVar13;
          }
          uVar20 = uVar20 + 1;
        } while ((float)(unkint9)Var2 < fVar3);
      }
      ppuVar13 = ppuVar15;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar13;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      if (ppuVar14 != (undefined **)0x0) {
        _objc_retainAutorelease(ppuVar13);
        func_0x00010bdc3520();
        FUN_107f52c60(aiStack_348);
        if (aiStack_348[0] == 0) {
          puVar8 = puVar6;
          func_0x00010bf4b900();
          if (((ulong)puVar8 & 1) == 0) {
            func_0x00010befa120(puVar6);
          }
          uVar20 = uVar19;
          ppuVar16 = ppuVar15;
          func_0x00010bf4b900();
          if ((uVar20 & 1) == 0) {
            ppuVar16 = ppuVar15;
            func_0x00010befa120(uVar19);
          }
        }
      }
      puVar8 = puVar6;
      func_0x00010bf51e00(puVar6);
      _objc_release(ppuVar13);
      _objc_release(ppppuVar5);
      _objc_release(ppuVar11);
      _objc_release(puVar6);
      _objc_release(uVar19);
      _objc_release(puVar18);
      _objc_release(ppuVar15);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
        ___stack_chk_fail();
        _objc_retain(ppuVar16);
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar16;
        func_0x00010c0dfd40(ppuVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        lVar21 = param_2;
        func_0x00010bf433a0(param_2);
        _objc_release(ppuVar15);
        _objc_release(param_2);
        return (undefined *)(ulong)(lVar21 == -1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 107f34df4; end: 107f35013; -[SCMemoriesSearch _findMatchedConceptSimilarityPairsForQueryToken:fromTagSet:] */

undefined * FUN_107f34df4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  unkuint9 Var1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined8 uVar19;
  long unaff_x28;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double unaff_d8;
  undefined8 unaff_d9;
  int aiStack_2a8 [6];
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  undefined8 uStack_1c0;
  double dStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  ppuVar12 = &puStack_150;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 0.0;
  lStack_148 = 0;
  puStack_150 = (undefined *)0x0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_4);
  puVar14 = auStack_100;
  uVar15 = 0x10;
  lVar4 = param_4;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x27 = *plStack_140;
    unaff_d9 = 0x3fe3333340000000;
    do {
      unaff_x28 = 0;
      lVar5 = lVar4;
      do {
        unaff_x24 = lVar5;
        if (*plStack_140 != unaff_x27) {
          unaff_x24 = param_4;
          _objc_enumerationMutation();
        }
        unaff_x23 = *(ulong *)(lStack_148 + unaff_x28 * 8);
        _objc_autoreleasePoolPush();
        _objc_retain(unaff_x23);
        func_0x00010c150c40(param_3);
        dVar20 = dVar21;
        func_0x00010c150c40(unaff_x23);
        if (dVar20 <= dVar21) {
          dVar20 = dVar21;
        }
        uVar15 = unaff_x23;
        func_0x00010c0720c0();
        dVar21 = (double)(uVar15 & 0xffffffff);
        unaff_d8 = dVar21;
        if (dVar21 <= dVar20) {
          unaff_d8 = dVar20;
        }
        if ((0.6000000238418579 <= unaff_d8) ||
           (uVar15 = unaff_x23, func_0x00010c0720c0(), (int)uVar15 != 0)) {
          unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          dVar21 = unaff_d8;
          uStack_110 = unaff_x23;
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_108 = unaff_x25;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x23);
        lVar5 = unaff_x24;
        _objc_autoreleasePoolPop();
        unaff_x28 = unaff_x28 + 1;
      } while (lVar4 != unaff_x28);
      puVar14 = auStack_100;
      uVar15 = 0x10;
      lVar4 = param_4;
      ppuVar12 = &puStack_150;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_158 = FUN_107f35014;
    lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1c0 = unaff_d9;
    dStack_1b8 = unaff_d8;
    lStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    lStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    uStack_180 = unaff_x22;
    puStack_178 = puVar3;
    lStack_170 = param_4;
    lStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    _objc_retain(puVar14);
    _objc_retain(uVar15);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010be16a60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(ppuVar7);
    lVar8 = lVar4;
    func_0x00010be16a60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010befa160(ppuVar7);
    lVar5 = lVar4;
    func_0x00010be16a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    func_0x00010befa160(ppuVar7);
    uVar22 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    _objc_retain(lVar5);
    lVar8 = lVar5;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar18 = *plStack_280;
      do {
        lVar16 = 0;
        do {
          uVar23 = uVar22;
          if (*plStack_280 != lVar18) {
            _objc_enumerationMutation(lVar5);
            uVar23 = uVar22;
          }
          uVar19 = *(undefined8 *)(lStack_288 + lVar16 * 8);
          uVar9 = uVar19;
          func_0x00010c0dfd40(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          uVar22 = uVar23;
          _objc_release(uVar9);
          if (0.8 <= (float)uVar23) {
            func_0x00010c0dfd40(uVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar14);
            _objc_release(uVar19);
          }
          lVar16 = lVar16 + 1;
        } while (lVar8 != lVar16);
        lVar8 = lVar5;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar5);
    lVar8 = lVar4;
    func_0x00010be16a60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010befa160(ppuVar7);
    func_0x00010be16a60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    func_0x00010befa160(ppuVar7);
    ppuVar13 = &PTR___NSConcreteGlobalBlock_110a13e00;
    func_0x00010c246ba0(ppuVar7);
    ppuVar10 = ppuVar7;
    func_0x00010bf529e0();
    fVar2 = 10.0;
    if ((float)ppuVar10 <= 10.0) {
      fVar2 = (float)ppuVar10;
    }
    if (0.0 < fVar2) {
      uVar17 = 1;
      do {
        ppuVar10 = ppuVar7;
        func_0x00010c0dfd40(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar11;
        func_0x00010befa120(puVar6);
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
        Var1 = (unkuint9)uVar17;
        ppuVar10 = ppuVar7;
        func_0x00010bf529e0();
        fVar2 = 10.0;
        if ((float)ppuVar10 <= 10.0) {
          fVar2 = (float)ppuVar10;
        }
        uVar17 = uVar17 + 1;
      } while ((float)(unkint9)Var1 < fVar2);
    }
    ppuVar10 = ppuVar12;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    if (ppuVar11 != (undefined **)0x0) {
      _objc_retainAutorelease(ppuVar10);
      func_0x00010bdc3520();
      FUN_107f52c60(aiStack_2a8);
      if (aiStack_2a8[0] == 0) {
        puVar3 = puVar6;
        func_0x00010bf4b900();
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010befa120(puVar6);
        }
        uVar17 = uVar15;
        ppuVar13 = ppuVar12;
        func_0x00010bf4b900();
        if ((uVar17 & 1) == 0) {
          ppuVar13 = ppuVar12;
          func_0x00010befa120(uVar15);
        }
      }
    }
    puVar3 = puVar6;
    func_0x00010bf51e00(puVar6);
    _objc_release(ppuVar10);
    _objc_release(lVar4);
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(ppuVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
      ___stack_chk_fail();
      _objc_retain(ppuVar13);
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar13;
      func_0x00010c0dfd40(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      lVar4 = param_2;
      func_0x00010bf433a0(param_2);
      _objc_release(ppuVar12);
      _objc_release(param_2);
      return (undefined *)(ulong)(lVar4 == -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 107f35014; end: 107f3541f; -[SCMemoriesSearch _findMatchedConceptsForQueryToken:withMatchedGeoTagSet:withMatchedTimeTagSet:] */

undefined *
FUN_107f35014(long param_1,long param_2,undefined **param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  unkuint9 Var2;
  float fVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  int aiStack_158 [6];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be16a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(ppuVar5);
  lVar7 = param_1;
  func_0x00010be16a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010befa160(ppuVar5);
  lVar6 = param_1;
  func_0x00010be16a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010befa160(ppuVar5);
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar15 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(lVar6);
        }
        uVar16 = *(undefined8 *)(lStack_138 + lVar13 * 8);
        uVar8 = uVar16;
        func_0x00010c0dfd40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        fVar3 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
        _objc_release(uVar8);
        if (0.8 <= fVar3) {
          func_0x00010c0dfd40(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(param_4);
          _objc_release(uVar16);
        }
        lVar13 = lVar13 + 1;
      } while (lVar7 != lVar13);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  lVar7 = param_1;
  func_0x00010be16a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010befa160(ppuVar5);
  func_0x00010be16a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010befa160(ppuVar5);
  ppuVar12 = &PTR___NSConcreteGlobalBlock_110a13e00;
  func_0x00010c246ba0(ppuVar5);
  ppuVar9 = ppuVar5;
  func_0x00010bf529e0();
  fVar3 = (float)ppuVar9;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0x20;
  uVar20 = 0x41;
  if (fVar3 <= 10.0) {
    uVar17 = SUB41(fVar3,0);
    uVar18 = (undefined1)((uint)fVar3 >> 8);
    uVar19 = (undefined1)((uint)fVar3 >> 0x10);
    uVar20 = (undefined1)((uint)fVar3 >> 0x18);
  }
  bVar1 = NAN((float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))));
  if ((bVar1 || (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) != 0.0) &&
      (!bVar1 && (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) < 0.0) == bVar1) {
    uVar14 = 1;
    do {
      ppuVar9 = ppuVar5;
      func_0x00010c0dfd40(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar10;
      func_0x00010befa120(puVar4);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      Var2 = (unkuint9)uVar14;
      ppuVar9 = ppuVar5;
      func_0x00010bf529e0();
      fVar3 = (float)ppuVar9;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0x20;
      uVar20 = 0x41;
      if (fVar3 <= 10.0) {
        uVar17 = SUB41(fVar3,0);
        uVar18 = (undefined1)((uint)fVar3 >> 8);
        uVar19 = (undefined1)((uint)fVar3 >> 0x10);
        uVar20 = (undefined1)((uint)fVar3 >> 0x18);
      }
      uVar14 = uVar14 + 1;
    } while ((float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) !=
             (float)(unkint9)Var2 &&
             (float)(unkint9)Var2 <=
             (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))));
  }
  ppuVar9 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  if (ppuVar10 != (undefined **)0x0) {
    _objc_retainAutorelease(ppuVar9);
    func_0x00010bdc3520();
    FUN_107f52c60(aiStack_158);
    if (aiStack_158[0] == 0) {
      puVar11 = puVar4;
      func_0x00010bf4b900();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x00010befa120(puVar4);
      }
      uVar14 = param_5;
      ppuVar12 = param_3;
      func_0x00010bf4b900();
      if ((uVar14 & 1) == 0) {
        ppuVar12 = param_3;
        func_0x00010befa120(param_5);
      }
    }
  }
  puVar11 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(ppuVar9);
  _objc_release(param_1);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010c0dfd40(ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  lVar6 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(ppuVar5);
  _objc_release(param_2);
  return (undefined *)(ulong)(lVar6 == -1);
}



/* Entry: 107f35420; end: 107f354af;  */

bool FUN_107f35420(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0dfd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return lVar2 == -1;
}



/* Entry: 107f354b0; end: 107f357eb; -[SCMemoriesSearch _appendQuerys:withTags:] */

undefined8 *
FUN_107f354b0(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,undefined8 param_5,
             undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *unaff_x23;
  long lVar16;
  long unaff_x24;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x27;
  undefined8 *puVar21;
  undefined8 *unaff_x28;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long *plStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined1 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  code *pcStack_5a8;
  undefined *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 *puStack_4c8;
  long lStack_4c0;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3d8;
  long lStack_350;
  undefined8 *puStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined8 *puStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar21 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  _objc_retain(param_3);
  puVar20 = &uStack_240;
  puVar14 = auStack_f0;
  puVar9 = (undefined8 *)0x10;
  puStack_2e0 = param_3;
  func_0x00010bf52a60();
  puStack_2d0 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    lStack_2d8 = *plStack_230;
    puStack_2d0 = param_3;
    do {
      unaff_x26 = (undefined8 *)0x0;
      do {
        if (*plStack_230 != lStack_2d8) {
          _objc_enumerationMutation(puStack_2e0);
        }
        unaff_x24 = *(long *)(lStack_238 + (long)unaff_x26 * 8);
        unaff_x23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        plStack_270 = (long *)0x0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        _objc_retain(unaff_x24);
        lVar15 = unaff_x24;
        func_0x00010bf52a60();
        if (lVar15 != 0) {
          lVar11 = *plStack_270;
          do {
            lVar13 = 0;
            do {
              if (*plStack_270 != lVar11) {
                _objc_enumerationMutation(unaff_x24);
              }
              func_0x00010befa120(unaff_x23);
              lVar13 = lVar13 + 1;
            } while (lVar15 != lVar13);
            lVar15 = unaff_x24;
            func_0x00010bf52a60();
            unaff_x25 = (undefined8 *)0x0;
          } while (lVar15 != 0);
        }
        _objc_release(unaff_x24);
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        lStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        puStack_2b0 = (undefined8 *)0x0;
        _objc_retain(param_4);
        lVar15 = param_4;
        func_0x00010bf52a60();
        if (lVar15 == 0) {
          _objc_release(param_4);
        }
        else {
          bVar12 = false;
          unaff_x28 = (undefined8 *)*puStack_2b0;
          puStack_2c8 = unaff_x26;
          do {
            lVar11 = 0;
            do {
              if ((undefined8 *)*puStack_2b0 != unaff_x28) {
                _objc_enumerationMutation(param_4);
              }
              uVar19 = *(undefined8 *)(lStack_2b8 + lVar11 * 8);
              puVar1 = unaff_x23;
              func_0x00010bf4b900();
              if (((ulong)puVar1 & 1) == 0) {
                puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                uStack_1f8 = uVar19;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x24;
                func_0x00010bf09f80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar21);
                _objc_release(unaff_x27);
                _objc_release(puVar1);
              }
              else {
                bVar12 = true;
              }
              lVar11 = lVar11 + 1;
            } while (lVar15 != lVar11);
            lVar15 = param_4;
            func_0x00010bf52a60();
          } while (lVar15 != 0);
          _objc_release(param_4);
          unaff_x26 = puStack_2c8;
          unaff_x25 = (undefined8 *)0x0;
          if (bVar12) {
            func_0x00010befa120(puVar21);
          }
        }
        _objc_release(unaff_x23);
        unaff_x26 = (undefined8 *)((long)unaff_x26 + 1);
      } while (unaff_x26 != puStack_2d0);
      puVar20 = &uStack_240;
      puVar14 = auStack_f0;
      puVar9 = (undefined8 *)0x10;
      puVar2 = puStack_2e0;
      func_0x00010bf52a60();
      puStack_2d0 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  puVar10 = puStack_2e0;
  _objc_release(puStack_2e0);
  puVar17 = puVar21;
  func_0x00010bf51e00();
  _objc_release(puVar21);
  _objc_release(param_4);
  puVar2 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puStack_2f8 = puVar10;
  pcStack_2e8 = FUN_107f357ec;
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar14;
  puVar10 = puVar9;
  puStack_340 = unaff_x28;
  lStack_338 = unaff_x27;
  puStack_330 = unaff_x26;
  puStack_328 = unaff_x25;
  lStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar17;
  puStack_308 = puVar21;
  lStack_300 = param_4;
  puStack_2f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar20);
  _objc_retain(puVar14);
  _objc_retain(puVar9);
  _objc_retain(param_6);
  puVar21 = puVar20;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 == (undefined8 *)0x0) {
    unaff_x26 = puVar2;
    puStack_450 = puVar21;
    puStack_448 = puVar9;
    puStack_440 = puVar14;
    puStack_430 = param_6;
    func_0x00010be16a80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    plStack_410 = (long *)0x0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    _objc_retain(unaff_x26);
    puVar10 = (undefined8 *)0x10;
    puVar9 = unaff_x26;
    func_0x00010bf52a60();
    if (puVar9 != (undefined8 *)0x0) {
      lVar15 = *plStack_410;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_410 != lVar15) {
            _objc_enumerationMutation(unaff_x26);
          }
          uStack_3d8 = *(undefined8 *)(lStack_418 + (long)puVar14 * 8);
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x25);
          _objc_release(puVar1);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar9 != puVar14);
        puVar10 = (undefined8 *)0x10;
        puVar9 = unaff_x26;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined8 *)0x0);
    }
    _objc_release(unaff_x26);
    puVar21 = puVar20;
    func_0x00010bf529e0();
    puVar14 = puStack_440;
    puVar9 = puStack_448;
    if ((undefined8 *)0x1 < puVar21) {
      puVar21 = (undefined8 *)0x1;
      puVar17 = puStack_448;
      puVar8 = unaff_x26;
      puStack_438 = puVar2;
      do {
        func_0x00010bf529e0(puVar20);
        puVar9 = puVar20;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar2 = puStack_430;
        puVar4 = puStack_438;
        unaff_x26 = puStack_438;
        puVar10 = puStack_430;
        puStack_428 = puVar3;
        func_0x00010be16a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar3 = unaff_x26;
        func_0x00010bf529e0();
        puVar9 = puVar17;
        unaff_x28 = puVar8;
        if (puVar3 != (undefined8 *)0x0) {
          unaff_x28 = puVar20;
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar4;
          func_0x00010be21d80(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdcd3c0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(unaff_x25);
          puVar9 = puStack_448;
          _objc_release(puVar4);
          puVar14 = puStack_440;
          _objc_release(puVar10);
          _objc_release(unaff_x28);
          puVar10 = puVar17;
        }
        _objc_release(puStack_428);
        puVar21 = (undefined8 *)((long)puVar21 + 1);
        puVar4 = puVar20;
        func_0x00010bf529e0();
        puVar17 = puVar9;
        puVar8 = unaff_x26;
      } while (puVar21 < puVar4);
    }
    puVar17 = unaff_x25;
    func_0x00010bf51e00();
    puVar21 = puStack_450;
    puVar4 = puVar17;
    puVar8 = puStack_450;
    func_0x00010c1d0640(puVar14);
    _objc_release(puVar17);
    puVar17 = unaff_x25;
    func_0x00010bf51e00();
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    param_6 = puStack_430;
  }
  else {
    puVar2 = puVar14;
    puVar4 = puVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release(puVar21);
  _objc_release(param_6);
  _objc_release(puVar9);
  _objc_release(puVar14);
  puVar3 = puVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_458 = FUN_107f35bd0;
  lStack_4c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4b0 = unaff_x28;
  puStack_4a8 = puVar21;
  puStack_4a0 = unaff_x26;
  puStack_498 = unaff_x25;
  puStack_490 = puVar2;
  puStack_488 = puVar17;
  puStack_480 = param_6;
  puStack_478 = puVar9;
  puStack_470 = puVar14;
  puStack_468 = puVar20;
  ppuStack_460 = &puStack_2f0;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  puVar20 = puVar3;
  func_0x00010becd0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar20;
  func_0x00010bf529e0();
  if (puVar9 == (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c071760();
    if ((int)puVar1 != 0) {
      puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_4c8 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = puVar14;
      goto LAB_107f35c8c;
    }
    puVar17 = (undefined8 *)0x0;
  }
  else {
LAB_107f35c8c:
    puVar9 = puVar20;
    func_0x00010bf529e0();
    puStack_5d0 = puVar4;
    if ((undefined8 *)0x8 < puVar9) {
      puVar14 = puVar20;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = puVar14;
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_5f0 = puVar1;
    puStack_5e8 = puVar20;
    puStack_5e0 = puVar10;
    puStack_5d8 = puVar8;
    func_0x00010be21d80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_5c8 = puVar20;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    plStack_580 = (long *)0x0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    _objc_retain(puVar9);
    puStack_5c0 = puVar9;
    func_0x00010bf52a60();
    if (puVar9 != (undefined8 *)0x0) {
      lVar15 = *plStack_580;
      do {
        puVar20 = (undefined8 *)0x0;
        do {
          if (*plStack_580 != lVar15) {
            _objc_enumerationMutation(puStack_5c0);
          }
          puVar14 = puVar3;
          func_0x00010be34b00();
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar21;
          func_0x00010bf4b900();
          _objc_release(puVar1);
          if (((ulong)puVar2 & 1) == 0) {
            func_0x00010befa120(puStack_5c8);
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar21);
            _objc_release(puVar1);
          }
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar9 != puVar20);
        puVar9 = puStack_5c0;
        func_0x00010bf52a60();
        unaff_x28 = (undefined8 *)0x0;
      } while (puVar9 != (undefined8 *)0x0);
    }
    _objc_release(puStack_5c0);
    puVar10 = puStack_5e0;
    puVar9 = puStack_5e0;
    func_0x00010bf529e0();
    puVar8 = puStack_5d8;
    puVar20 = puStack_5e8;
    puVar2 = puStack_5c8;
    if (puVar9 != (undefined8 *)0x0) {
      puStack_5b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_5b0 = 0xc2000000;
      pcStack_5a8 = FUN_107f35f9c;
      puStack_5a0 = &UNK_110862cd8;
      _objc_retain(puVar10);
      puVar9 = puStack_5c8;
      puStack_598 = puVar10;
      puVar14 = puStack_5c8;
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      func_0x00010bf529e0();
      puVar8 = puStack_5d8;
      puVar20 = puStack_5e8;
      puVar2 = puVar9;
      if (puVar17 != (undefined8 *)0x0) {
        puVar2 = puVar14;
        func_0x00010c0d3c80();
        _objc_release(puVar9);
      }
      _objc_release(puVar14);
      _objc_release(puStack_598);
    }
    puVar4 = puStack_5d0;
    func_0x00010c246ba0(puVar2);
    puVar17 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar21);
    _objc_release(puVar2);
    _objc_release(puStack_5c0);
    _objc_release(puStack_5f0);
  }
  _objc_release(puVar20);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar9 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c0) {
    ___stack_chk_fail();
    puVar2 = &uStack_710;
    pcStack_5f8 = FUN_107f35f9c;
    lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = param_2;
    puStack_640 = unaff_x28;
    puStack_638 = puVar21;
    puStack_630 = puVar17;
    puStack_628 = puVar20;
    puStack_620 = puVar10;
    puStack_618 = puVar8;
    puStack_610 = puVar14;
    puStack_608 = puVar4;
    pppuStack_600 = &ppuStack_460;
    _objc_retain(param_2);
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    plStack_700 = (long *)0x0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    lVar15 = param_2;
    func_0x00010bf52a60();
    if (lVar15 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      lVar16 = *plStack_700;
      do {
        lVar18 = 0;
        do {
          if (*plStack_700 != lVar16) {
            _objc_enumerationMutation(param_2);
          }
          uVar5 = puVar9[4];
          func_0x00010bf4b900();
          lVar13 = lVar13 + (uVar5 & 0xffffffff);
          lVar18 = lVar18 + 1;
        } while (lVar15 != lVar18);
        lVar15 = param_2;
        puVar2 = &uStack_710;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    lVar15 = param_2;
    func_0x00010bf529e0();
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
      return (undefined8 *)(ulong)(lVar13 != 0 && lVar13 != lVar15);
    }
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(puVar2);
    func_0x00010bf529e0(lVar11);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar2);
    _objc_release(puVar2);
    func_0x00010c0df840(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf433a0(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar1);
    return (undefined8 *)(ulong)(puVar7 == (undefined *)0xffffffffffffffff);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return puVar17;
}



/* Entry: 107f357ec; end: 107f35bcf; -[SCMemoriesSearch _getQuerys:withDictionary:withMatchedGeoTagSet:withMatchedTimeTagSet:] */

undefined *
FUN_107f357ec(undefined *param_1,long param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar13;
  undefined *puVar14;
  undefined *unaff_x28;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_4;
  puVar13 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    unaff_x26 = param_1;
    puStack_170 = puVar1;
    puStack_168 = param_5;
    puStack_160 = param_4;
    puStack_150 = param_6;
    func_0x00010be16a80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(unaff_x26);
    puVar13 = (undefined *)0x10;
    puVar14 = unaff_x26;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar8 = *plStack_130;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(unaff_x26);
          }
          uStack_f8 = *(undefined8 *)(lStack_138 + (long)puVar13 * 8);
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x25);
          _objc_release(puVar1);
          puVar13 = puVar13 + 1;
        } while (puVar14 != puVar13);
        puVar13 = (undefined *)0x10;
        puVar14 = unaff_x26;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(unaff_x26);
    puVar14 = param_3;
    func_0x00010bf529e0();
    param_4 = puStack_160;
    param_5 = puStack_168;
    if ((undefined *)0x1 < puVar14) {
      puVar14 = (undefined *)0x1;
      puVar1 = puStack_168;
      puVar2 = unaff_x26;
      puStack_158 = param_1;
      do {
        func_0x00010bf529e0(param_3);
        puVar13 = param_3;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar13;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        param_1 = puStack_150;
        puVar11 = puStack_158;
        unaff_x26 = puStack_158;
        puVar13 = puStack_150;
        puStack_148 = puVar3;
        func_0x00010be16a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar3 = unaff_x26;
        func_0x00010bf529e0();
        param_5 = puVar1;
        unaff_x28 = puVar2;
        if (puVar3 != (undefined *)0x0) {
          unaff_x28 = param_3;
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar11;
          func_0x00010be21d80(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdcd3c0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(unaff_x25);
          param_5 = puStack_168;
          _objc_release(puVar11);
          param_4 = puStack_160;
          _objc_release(puVar13);
          _objc_release(unaff_x28);
          puVar13 = puVar1;
        }
        _objc_release(puStack_148);
        puVar14 = puVar14 + 1;
        puVar11 = param_3;
        func_0x00010bf529e0();
        puVar1 = param_5;
        puVar2 = unaff_x26;
      } while (puVar14 < puVar11);
    }
    puVar11 = unaff_x25;
    func_0x00010bf51e00();
    puVar1 = puStack_170;
    puVar2 = puVar11;
    puVar14 = puStack_170;
    func_0x00010c1d0640(param_4);
    _objc_release(puVar11);
    puVar11 = unaff_x25;
    func_0x00010bf51e00();
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    param_6 = puStack_150;
  }
  else {
    param_1 = param_4;
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf51e00();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_178 = FUN_107f35bd0;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = unaff_x28;
  puStack_1c8 = puVar1;
  puStack_1c0 = unaff_x26;
  puStack_1b8 = unaff_x25;
  puStack_1b0 = param_1;
  puStack_1a8 = puVar11;
  puStack_1a0 = param_6;
  puStack_198 = param_5;
  puStack_190 = param_4;
  puStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar14);
  _objc_retain(puVar13);
  puVar4 = puVar3;
  func_0x00010becd0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bf529e0();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c071760();
    if ((int)puVar11 != 0) {
      param_4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1e8 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_4;
      goto LAB_107f35c8c;
    }
    puVar11 = (undefined *)0x0;
  }
  else {
LAB_107f35c8c:
    puVar1 = puVar4;
    func_0x00010bf529e0();
    puStack_2f0 = puVar2;
    if ((undefined *)0x8 < puVar1) {
      param_4 = puVar4;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_4;
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    puStack_310 = puVar1;
    puStack_308 = puVar4;
    puStack_300 = puVar13;
    puStack_2f8 = puVar14;
    func_0x00010be21d80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_2e8 = puVar13;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(puVar2);
    puStack_2e0 = puVar2;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar8 = *plStack_2a0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar8) {
            _objc_enumerationMutation(puStack_2e0);
          }
          param_4 = puVar3;
          func_0x00010be34b00();
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar1;
          func_0x00010bf4b900();
          _objc_release(puVar14);
          if (((ulong)puVar11 & 1) == 0) {
            func_0x00010befa120(puStack_2e8);
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(puVar14);
          }
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
        puVar2 = puStack_2e0;
        func_0x00010bf52a60();
        unaff_x28 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puStack_2e0);
    puVar13 = puStack_300;
    puVar2 = puStack_300;
    func_0x00010bf529e0();
    puVar14 = puStack_2f8;
    puVar4 = puStack_308;
    puVar3 = puStack_2e8;
    if (puVar2 != (undefined *)0x0) {
      puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2d0 = 0xc2000000;
      pcStack_2c8 = FUN_107f35f9c;
      puStack_2c0 = &UNK_110862cd8;
      _objc_retain(puVar13);
      puVar2 = puStack_2e8;
      puStack_2b8 = puVar13;
      param_4 = puStack_2e8;
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_4;
      func_0x00010bf529e0();
      puVar14 = puStack_2f8;
      puVar4 = puStack_308;
      puVar3 = puVar2;
      if (puVar11 != (undefined *)0x0) {
        puVar3 = param_4;
        func_0x00010c0d3c80();
        _objc_release(puVar2);
      }
      _objc_release(param_4);
      _objc_release(puStack_2b8);
    }
    puVar2 = puStack_2f0;
    func_0x00010c246ba0(puVar3);
    puVar11 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puStack_2e0);
    _objc_release(puStack_310);
  }
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar14);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
    ___stack_chk_fail();
    puVar7 = &uStack_430;
    pcStack_318 = FUN_107f35f9c;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar6 = param_2;
    puStack_360 = unaff_x28;
    puStack_358 = puVar1;
    puStack_350 = puVar11;
    puStack_348 = puVar4;
    puStack_340 = puVar13;
    puStack_338 = puVar14;
    puStack_330 = param_4;
    puStack_328 = puVar2;
    ppuStack_320 = &puStack_180;
    _objc_retain(param_2);
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lVar8 = param_2;
    func_0x00010bf52a60();
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      lVar10 = *plStack_420;
      do {
        lVar12 = 0;
        do {
          if (*plStack_420 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          uVar5 = *(ulong *)(puVar3 + 0x20);
          func_0x00010bf4b900();
          lVar9 = lVar9 + (uVar5 & 0xffffffff);
          lVar12 = lVar12 + 1;
        } while (lVar8 != lVar12);
        lVar8 = param_2;
        puVar7 = &uStack_430;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    lVar8 = param_2;
    func_0x00010bf529e0();
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
      return (undefined *)(ulong)(lVar9 != 0 && lVar9 != lVar8);
    }
    ___stack_chk_fail();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(puVar7);
    func_0x00010bf529e0(lVar6);
    func_0x00010c0df840(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar7);
    _objc_release(puVar7);
    func_0x00010c0df840(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010bf433a0(puVar13);
    _objc_release(puVar14);
    _objc_release(puVar13);
    return (undefined *)(ulong)(puVar1 == (undefined *)0xffffffffffffffff);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 107f35bd0; end: 107f35f9b; -[SCMemoriesSearch _getConceptArraysFromUserQuery:withMatchedGeoTagSet:withMatchedTimeTagSet:] */

undefined *
FUN_107f35bd0(undefined *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar12 = param_1;
  func_0x00010becd0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c071760();
    if ((int)puVar10 == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_107f35f34;
    }
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = unaff_x20;
  }
  puVar10 = puVar12;
  func_0x00010bf529e0();
  lStack_180 = param_3;
  if ((undefined *)0x8 < puVar10) {
    unaff_x20 = puVar12;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = unaff_x20;
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puStack_1a0 = puVar10;
  puStack_198 = puVar12;
  lStack_190 = param_5;
  uStack_188 = param_4;
  func_0x00010be21d80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  unaff_x27 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_178 = puVar12;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(puVar1);
  puStack_170 = puVar1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar7 = *plStack_130;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(puStack_170);
        }
        unaff_x20 = param_1;
        func_0x00010be34b00();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x27;
        func_0x00010bf4b900();
        _objc_release(puVar10);
        if (((ulong)puVar2 & 1) == 0) {
          func_0x00010befa120(puStack_178);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x27);
          _objc_release(puVar10);
        }
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puStack_170;
      func_0x00010bf52a60();
      unaff_x28 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puStack_170);
  param_5 = lStack_190;
  lVar7 = lStack_190;
  func_0x00010bf529e0();
  param_4 = uStack_188;
  puVar12 = puStack_198;
  puVar1 = puStack_178;
  if (lVar7 != 0) {
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_107f35f9c;
    puStack_150 = &UNK_110862cd8;
    _objc_retain(param_5);
    puVar10 = puStack_178;
    lStack_148 = param_5;
    unaff_x20 = puStack_178;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    func_0x00010bf529e0();
    param_4 = uStack_188;
    puVar12 = puStack_198;
    puVar1 = puVar10;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = unaff_x20;
      func_0x00010c0d3c80();
      _objc_release(puVar10);
    }
    _objc_release(unaff_x20);
    _objc_release(lStack_148);
  }
  param_3 = lStack_180;
  func_0x00010c246ba0(puVar1);
  puVar10 = puVar1;
  func_0x00010bf51e00();
  _objc_release(unaff_x27);
  _objc_release(puVar1);
  _objc_release(puStack_170);
  _objc_release(puStack_1a0);
LAB_107f35f34:
  _objc_release(puVar12);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_2c0;
  pcStack_1a8 = FUN_107f35f9c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  uStack_1f0 = unaff_x28;
  puStack_1e8 = unaff_x27;
  puStack_1e0 = puVar10;
  puStack_1d8 = puVar12;
  lStack_1d0 = param_5;
  uStack_1c8 = param_4;
  puStack_1c0 = unaff_x20;
  lStack_1b8 = param_3;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar9 = *plStack_2b0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2b0 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(ulong *)(lVar7 + 0x20);
        func_0x00010bf4b900();
        lVar8 = lVar8 + (uVar4 & 0xffffffff);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = param_2;
      puVar6 = &uStack_2c0;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar7 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return (undefined *)(ulong)(lVar8 != 0 && lVar8 != lVar7);
  }
  ___stack_chk_fail();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(puVar6);
  func_0x00010bf529e0(lVar5);
  func_0x00010c0df840(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar6);
  _objc_release(puVar6);
  func_0x00010c0df840(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  func_0x00010bf433a0(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar12);
  return (undefined *)(ulong)(puVar1 == (undefined *)0xffffffffffffffff);
}



/* Entry: 107f35f9c; end: 107f360c3;  */

bool FUN_107f35f9c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf4b900();
        lVar8 = lVar8 + (uVar2 & 0xffffffff);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_2;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar8 != 0 && lVar8 != lVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(puVar7);
  func_0x00010bf529e0(lVar6);
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar7);
  _objc_release(puVar7);
  func_0x00010c0df840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf433a0(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return puVar5 == (undefined *)0xffffffffffffffff;
}



/* Entry: 107f360c4; end: 107f36173;  */

bool FUN_107f360c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf529e0(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3 == (undefined *)0xffffffffffffffff;
}



/* Entry: 107f36174; end: 107f36277; -[SCMemoriesSearch _hashTokenArray:] */

undefined1 *
FUN_107f36174(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  uint uVar30;
  undefined *puVar31;
  undefined *puStack_4c0;
  undefined *puStack_4a8;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 auStack_450 [6];
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 auStack_3e0 [6];
  undefined8 auStack_3b0 [6];
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_180;
  long lStack_110;
  undefined *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar17 = &lStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_108 = (undefined *)0x0;
  lStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar18 = 0x10;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    puVar24 = (undefined1 *)0x0;
  }
  else {
    puVar24 = (undefined1 *)0x0;
    lVar27 = *plStack_100;
    do {
      puVar28 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar27) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(puStack_108 + (long)puVar28 * 8);
        func_0x00010bfde980();
        puVar24 = puVar24 + lVar4;
        puVar28 = puVar28 + 1;
      } while (puVar3 != puVar28);
      uVar18 = 0x10;
      puVar3 = param_3;
      plVar17 = &lStack_110;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar24;
  }
  ___stack_chk_fail();
  puVar3 = puStack_108;
  lVar27 = lStack_110;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(plVar17);
  _objc_retain(uVar18);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(lVar27);
  _objc_retain(puVar3);
  puVar28 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010be1df40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  _objc_retain(puVar7);
  puVar9 = puVar7;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    bVar1 = lVar27 != 0;
    lVar4 = *plStack_330;
    bVar2 = puVar3 != (undefined *)0x0;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (*plStack_330 != lVar4) {
          _objc_enumerationMutation(puVar7);
        }
        puStack_4c0 = *(undefined **)(lStack_338 + (long)puVar21 * 8);
        puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        plStack_370 = (long *)0x0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        _objc_retain(puStack_4c0);
        puStack_4a8 = puStack_4c0;
        func_0x00010bf52a60();
        puVar22 = (undefined *)0x0;
        if (puStack_4a8 != (undefined *)0x0) {
          lVar19 = *plStack_370;
          uVar30 = 1;
          do {
            puVar29 = (undefined *)0x0;
            puVar23 = puVar22;
            do {
              if (*plStack_370 != lVar19) {
                _objc_enumerationMutation(puStack_4c0);
              }
              puVar22 = puVar8;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar22 == (undefined *)0x0) {
                puVar11 = param_3;
                func_0x00010bebcee0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar8);
              }
              else {
                puVar11 = puVar8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar30 = 0;
              }
              uVar14 = param_8;
              func_0x00010c06e0e0();
              if ((int)uVar14 != 0) {
                if (bVar1 && bVar2) {
                  pcVar20 = FUN_107f36acc;
                  puVar25 = auStack_3b0;
LAB_107f36920:
                  *puVar25 = PTR___NSConcreteStackBlock_11034bd00;
                  puVar25[1] = 0xc2000000;
                  puVar25[2] = pcVar20;
                  puVar25[3] = &UNK_11084aaa8;
                  _objc_retain(puVar3);
                  puVar25[5] = puVar3;
                  _objc_retain(param_8);
                  puVar25[4] = param_8;
                  func_0x00010007380c(lVar27,puVar25);
                  _objc_release(puVar25[4]);
                  _objc_release(puVar25[5]);
                }
                goto LAB_107f36994;
              }
              puVar22 = puVar10;
              func_0x00010c0720c0();
              if ((int)puVar22 == 0) {
                puVar22 = puVar23;
                FUN_107f3e534(puVar23,puVar11);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar23);
                func_0x00010bf06ba0(puVar10);
              }
              else {
                _objc_retain(puVar11);
                _objc_release(puVar23);
                func_0x00010bf070e0(puVar10);
                puVar22 = puVar11;
              }
              uVar14 = param_8;
              func_0x00010c06e0e0();
              puVar23 = puVar22;
              if ((int)uVar14 != 0) {
                if (bVar1 && bVar2) {
                  pcVar20 = (code *)0x107f36ae4;
                  puVar25 = auStack_3e0;
                  goto LAB_107f36920;
                }
                goto LAB_107f36994;
              }
              puVar12 = puVar5;
              func_0x00010bf4b900();
              if ((((uint)puVar12 & uVar30) == 1) &&
                 (puVar12 = puVar11, func_0x00010bf529e0(), puVar12 != (undefined *)0x0)) {
                puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                lStack_418 = 0;
                uStack_420 = 0;
                uStack_408 = 0;
                plStack_410 = (long *)0x0;
                uStack_3f8 = 0;
                uStack_400 = 0;
                uStack_3e8 = 0;
                uStack_3f0 = 0;
                _objc_retain(puVar11);
                puVar13 = puVar11;
                func_0x00010bf52a60();
                if (puVar13 != (undefined *)0x0) {
                  lVar26 = *plStack_410;
                  do {
                    puVar31 = (undefined *)0x0;
                    do {
                      if (*plStack_410 != lVar26) {
                        _objc_enumerationMutation(puVar11);
                      }
                      uVar14 = *(undefined8 *)(lStack_418 + (long)puVar31 * 8);
                      func_0x00010c241220(uVar14);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar12);
                      _objc_release(uVar14);
                      puVar31 = puVar31 + 1;
                    } while (puVar13 != puVar31);
                    puVar13 = puVar11;
                    func_0x00010bf52a60();
                  } while (puVar13 != (undefined *)0x0);
                }
                _objc_release(puVar11);
                puVar31 = *(undefined **)(param_3 + 0x110);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar31;
                func_0x00010bfc9f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar31);
                if (puVar13 != (undefined *)0x0) {
                  puVar31 = puVar13;
                  func_0x00010c0c1c40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar15 = puVar31;
                  func_0x00010bf529e0();
                  puVar16 = puVar11;
                  func_0x00010bf529e0();
                  _objc_release(puVar31);
                  if (puVar16 < puVar15) {
                    func_0x00010befa120(param_6);
                  }
                }
                _objc_release(puVar13);
                _objc_release(puVar12);
              }
              uVar14 = param_8;
              func_0x00010c06e0e0();
              if ((int)uVar14 != 0) {
                if (bVar1 && bVar2) {
                  pcVar20 = (code *)0x107f36afc;
                  puVar25 = auStack_450;
                  goto LAB_107f36920;
                }
                goto LAB_107f36994;
              }
              puVar12 = puVar6;
              func_0x00010bf4b900();
              if (((uint)puVar12 & uVar30) == 1) {
                puVar12 = param_3;
                func_0x00010bebcec0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar12 != (undefined *)0x0) {
                  puVar13 = puVar12;
                  func_0x00010c0c1c40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar31 = puVar13;
                  func_0x00010bf529e0();
                  puVar15 = puVar11;
                  func_0x00010bf529e0();
                  _objc_release(puVar13);
                  if (puVar15 < puVar31) {
                    func_0x00010befa120(param_7);
                  }
                }
                _objc_release(puVar12);
              }
              _objc_release(puVar11);
              puVar29 = puVar29 + 1;
            } while (puVar29 != puStack_4a8);
            puStack_4a8 = puStack_4c0;
            func_0x00010bf52a60();
          } while (puStack_4a8 != (undefined *)0x0);
        }
        _objc_release(puStack_4c0);
        puStack_4c0 = PTR_PTR_1126d86d8;
        _objc_alloc();
        func_0x00010c048200();
        func_0x00010befa120(puVar28);
        uVar14 = param_8;
        func_0x00010c06e0e0();
        if ((int)uVar14 != 0) {
          puVar23 = puVar22;
          if (bVar1 && bVar2) {
            puStack_480 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_478 = 0xc2000000;
            uStack_470 = 0x107f36b14;
            puStack_468 = &UNK_11084aaa8;
            _objc_retain(puVar3);
            puStack_458 = puVar3;
            _objc_retain(param_8);
            uStack_460 = param_8;
            func_0x00010007380c(lVar27,&puStack_480);
            _objc_release(uStack_460);
            puVar11 = puStack_458;
LAB_107f36994:
            _objc_release(puVar11);
          }
          _objc_release(puStack_4c0);
          _objc_release(puVar10);
          _objc_release(puVar23);
          param_3 = puVar7;
          goto LAB_107f369b8;
        }
        _objc_release(puStack_4c0);
        _objc_release(puVar10);
        _objc_release(puVar22);
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar9);
      puVar9 = puVar7;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  func_0x00010bdc7220(param_3);
  uVar14 = uVar18;
  func_0x00010bf51e00(uVar18);
  func_0x00010be9c960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  func_0x00010c16a300(uVar18);
LAB_107f369b8:
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar28);
  _objc_release(puVar3);
  _objc_release(lVar27);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return (undefined1 *)plVar17;
  }
  ___stack_chk_fail();
  puVar24 = *(undefined1 **)((long)plVar17 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000107f36ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar24 + 0x10))(puVar24,*(undefined8 *)((long)plVar17 + 0x20),0,0);
  return puVar24;
}



/* Entry: 107f36278; end: 107f36acb; -[SCMemoriesSearch _searchResultsFromFuzzyMatching:includePrivate:searchResults:geoNearbyResults:timeAroundResults:request:queue:completionHandler:] */

void FUN_107f36278(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined *param_10)

{
  bool bVar1;
  bool bVar2;
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
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  code *pcVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined *puVar24;
  uint uVar25;
  undefined *puVar26;
  undefined *puStack_3b0;
  undefined *puStack_398;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 auStack_340 [6];
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 auStack_2d0 [6];
  undefined8 auStack_2a0 [6];
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010be1df40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(puVar6);
  puVar8 = puVar6;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    bVar1 = param_9 != 0;
    lVar19 = *plStack_220;
    bVar2 = param_10 != (undefined *)0x0;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar19) {
          _objc_enumerationMutation(puVar6);
        }
        puStack_3b0 = *(undefined **)(lStack_228 + (long)puVar18 * 8);
        puVar9 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        _objc_retain(puStack_3b0);
        puStack_398 = puStack_3b0;
        func_0x00010bf52a60();
        puVar20 = (undefined *)0x0;
        if (puStack_398 != (undefined *)0x0) {
          lVar16 = *plStack_260;
          uVar25 = 1;
          do {
            puVar24 = (undefined *)0x0;
            puVar21 = puVar20;
            do {
              if (*plStack_260 != lVar16) {
                _objc_enumerationMutation(puStack_3b0);
              }
              puVar20 = puVar7;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar20 == (undefined *)0x0) {
                puVar10 = param_1;
                func_0x00010bebcee0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar7);
              }
              else {
                puVar10 = puVar7;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar25 = 0;
              }
              uVar13 = param_8;
              func_0x00010c06e0e0();
              if ((int)uVar13 != 0) {
                if (bVar1 && bVar2) {
                  pcVar17 = FUN_107f36acc;
                  puVar22 = auStack_2a0;
LAB_107f36920:
                  *puVar22 = PTR___NSConcreteStackBlock_11034bd00;
                  puVar22[1] = 0xc2000000;
                  puVar22[2] = pcVar17;
                  puVar22[3] = &UNK_11084aaa8;
                  _objc_retain(param_10);
                  puVar22[5] = param_10;
                  _objc_retain(param_8);
                  puVar22[4] = param_8;
                  func_0x00010007380c(param_9,puVar22);
                  _objc_release(puVar22[4]);
                  _objc_release(puVar22[5]);
                }
                goto LAB_107f36994;
              }
              puVar20 = puVar9;
              func_0x00010c0720c0();
              if ((int)puVar20 == 0) {
                puVar20 = puVar21;
                FUN_107f3e534(puVar21,puVar10);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar21);
                func_0x00010bf06ba0(puVar9);
              }
              else {
                _objc_retain(puVar10);
                _objc_release(puVar21);
                func_0x00010bf070e0(puVar9);
                puVar20 = puVar10;
              }
              uVar13 = param_8;
              func_0x00010c06e0e0();
              puVar21 = puVar20;
              if ((int)uVar13 != 0) {
                if (bVar1 && bVar2) {
                  pcVar17 = (code *)0x107f36ae4;
                  puVar22 = auStack_2d0;
                  goto LAB_107f36920;
                }
                goto LAB_107f36994;
              }
              puVar11 = puVar4;
              func_0x00010bf4b900();
              if ((((uint)puVar11 & uVar25) == 1) &&
                 (puVar11 = puVar10, func_0x00010bf529e0(), puVar11 != (undefined *)0x0)) {
                puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                _objc_retainAutoreleasedReturnValue();
                lStack_308 = 0;
                uStack_310 = 0;
                uStack_2f8 = 0;
                plStack_300 = (long *)0x0;
                uStack_2e8 = 0;
                uStack_2f0 = 0;
                uStack_2d8 = 0;
                uStack_2e0 = 0;
                _objc_retain(puVar10);
                puVar12 = puVar10;
                func_0x00010bf52a60();
                if (puVar12 != (undefined *)0x0) {
                  lVar23 = *plStack_300;
                  do {
                    puVar26 = (undefined *)0x0;
                    do {
                      if (*plStack_300 != lVar23) {
                        _objc_enumerationMutation(puVar10);
                      }
                      uVar13 = *(undefined8 *)(lStack_308 + (long)puVar26 * 8);
                      func_0x00010c241220(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar11);
                      _objc_release(uVar13);
                      puVar26 = puVar26 + 1;
                    } while (puVar12 != puVar26);
                    puVar12 = puVar10;
                    func_0x00010bf52a60();
                  } while (puVar12 != (undefined *)0x0);
                }
                _objc_release(puVar10);
                puVar26 = *(undefined **)(param_1 + 0x110);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar26;
                func_0x00010bfc9f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar26);
                if (puVar12 != (undefined *)0x0) {
                  puVar26 = puVar12;
                  func_0x00010c0c1c40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar26;
                  func_0x00010bf529e0();
                  puVar15 = puVar10;
                  func_0x00010bf529e0();
                  _objc_release(puVar26);
                  if (puVar15 < puVar14) {
                    func_0x00010befa120(param_6);
                  }
                }
                _objc_release(puVar12);
                _objc_release(puVar11);
              }
              uVar13 = param_8;
              func_0x00010c06e0e0();
              if ((int)uVar13 != 0) {
                if (bVar1 && bVar2) {
                  pcVar17 = (code *)0x107f36afc;
                  puVar22 = auStack_340;
                  goto LAB_107f36920;
                }
                goto LAB_107f36994;
              }
              puVar11 = puVar5;
              func_0x00010bf4b900();
              if (((uint)puVar11 & uVar25) == 1) {
                puVar11 = param_1;
                func_0x00010bebcec0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar11 != (undefined *)0x0) {
                  puVar12 = puVar11;
                  func_0x00010c0c1c40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar26 = puVar12;
                  func_0x00010bf529e0();
                  puVar14 = puVar10;
                  func_0x00010bf529e0();
                  _objc_release(puVar12);
                  if (puVar14 < puVar26) {
                    func_0x00010befa120(param_7);
                  }
                }
                _objc_release(puVar11);
              }
              _objc_release(puVar10);
              puVar24 = puVar24 + 1;
            } while (puVar24 != puStack_398);
            puStack_398 = puStack_3b0;
            func_0x00010bf52a60();
          } while (puStack_398 != (undefined *)0x0);
        }
        _objc_release(puStack_3b0);
        puStack_3b0 = PTR_PTR_1126d86d8;
        _objc_alloc();
        func_0x00010c048200();
        func_0x00010befa120(puVar3);
        uVar13 = param_8;
        func_0x00010c06e0e0();
        if ((int)uVar13 != 0) {
          puVar21 = puVar20;
          if (bVar1 && bVar2) {
            puStack_370 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_368 = 0xc2000000;
            uStack_360 = 0x107f36b14;
            puStack_358 = &UNK_11084aaa8;
            _objc_retain(param_10);
            puStack_348 = param_10;
            _objc_retain(param_8);
            uStack_350 = param_8;
            func_0x00010007380c(param_9,&puStack_370);
            _objc_release(uStack_350);
            puVar10 = puStack_348;
LAB_107f36994:
            _objc_release(puVar10);
          }
          _objc_release(puStack_3b0);
          _objc_release(puVar9);
          _objc_release(puVar21);
          param_1 = puVar6;
          goto LAB_107f369b8;
        }
        _objc_release(puStack_3b0);
        _objc_release(puVar9);
        _objc_release(puVar20);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar8);
      puVar8 = puVar6;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  func_0x00010bdc7220(param_1);
  uVar13 = param_5;
  func_0x00010bf51e00(param_5);
  func_0x00010be9c960(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  func_0x00010c16a300(param_5);
LAB_107f369b8:
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f36ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20),0,0);
  return;
}



/* Entry: 107f36acc; end: 107f36b2b;  */

void FUN_107f36acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f36ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f36b2c; end: 107f36c63; -[SCMemoriesSearch _searchResultsWithValidTimeForUserQuery:searchResults:isFuzzyTimeParsing:] */

void FUN_107f36b2c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int aiStack_58 [2];
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  FUN_107f52c60(aiStack_58);
  if (aiStack_58[0] == 1 || aiStack_58[0] == -1) {
    _objc_retain(param_4);
    param_1 = param_4;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lStack_50,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lStack_48,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    if (param_5 != 0) {
      puVar3 = param_1;
      func_0x00010be19f40(param_1,param_2,puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    func_0x00010be9c880(param_1,param_2,puVar3,puVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f36c64; end: 107f36f23; -[SCMemoriesSearch _searchResultsBetweenStartDate:endDate:searchResults:] */

undefined *
FUN_107f36c64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      lVar12 = *(long *)(lVar11 * 8);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(puVar4);
      lVar5 = lVar12;
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      lVar12 = lVar5;
      func_0x00010bf529e0();
      if (lVar12 != 0) {
        puVar6 = PTR_PTR_1126d86e0;
        func_0x00010bfbd660(PTR_PTR_1126d86e0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b3600();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b3620(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af4d0;
  uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0xf8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar10);
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(uVar9);
  puVar4 = puVar2;
  func_0x00010bf04920();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010befa160(*(undefined8 *)(param_3 + 0x38));
  }
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar2);
  return (undefined *)(ulong)((uint)puVar4 ^ 1);
}



/* Entry: 107f36f24; end: 107f37033;  */

uint FUN_107f36f24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  puVar2 = puVar1;
  func_0x00010bf04920();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  return (uint)puVar2 ^ 1;
}



/* Entry: 107f37034; end: 107f3707b;  */

uint FUN_107f37034(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf59960(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06d2a0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 107f3707c; end: 107f37b2f; -[SCMemoriesSearch _searchResultsFromPrefixMatching:inputLocale:includePrivate:searchResults:geoNearbyResults:timeAroundResults:request:queue:completionHandler:] */

void FUN_107f3707c(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined **param_11)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuStack_278;
  undefined **ppuStack_230;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126d8610;
  func_0x00010c087f40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010be9d600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c071760();
    if ((int)puVar12 == 0) goto LAB_107f37aa0;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
  }
  uVar4 = param_9;
  func_0x00010c06e0e0();
  if ((int)uVar4 == 0) {
    ppuStack_230 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf529e0();
    if (ppuVar3 == (undefined **)0x1) {
      ppuStack_220 = (undefined **)PTR____NSArray0__struct_11034ab48;
      ppuStack_218 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      puVar12 = (undefined *)0x0;
      ppuStack_218 = &PTR____CFConstantStringClassReference_110daafd8;
      ppuStack_220 = (undefined **)PTR____NSArray0__struct_11034ab48;
      do {
        ppuVar3 = ppuVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(ppuVar3);
        puVar5 = puVar1;
        func_0x00010c0720c0();
        ppuVar7 = ppuVar3;
        ppuVar6 = ppuVar3;
        if (((ulong)puVar5 & 1) == 0) {
          ppuVar6 = (undefined **)param_1[0x1e];
          func_0x00010c27ad40(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          ppuVar7 = (undefined **)param_1[0x1e];
          func_0x00010c27ad40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
        }
        ppuVar8 = ppuVar6;
        func_0x00010c0b5ac0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuStack_230;
        func_0x00010bf4b900();
        _objc_release(ppuVar8);
        if (((ulong)ppuVar9 & 1) == 0) {
          func_0x00010befa120(ppuStack_230);
          ppuVar8 = param_1;
          func_0x00010bebcee0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == (undefined *)0x0) {
            _objc_retain(ppuVar8);
            _objc_release(ppuStack_220);
            _objc_retain(ppuVar7);
            ppuVar9 = ppuVar7;
            ppuStack_220 = ppuVar8;
          }
          else {
            ppuVar10 = ppuStack_220;
            FUN_107f3e534(ppuStack_220,ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuStack_220);
            ppuVar11 = ppuStack_218;
            func_0x00010c25ce40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuStack_218);
            ppuVar9 = ppuVar11;
            func_0x00010c25ce40();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_218 = ppuVar11;
            ppuStack_220 = ppuVar10;
          }
          _objc_release(ppuStack_218);
          _objc_release(ppuVar8);
          ppuStack_218 = ppuVar9;
        }
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        _objc_release(ppuVar3);
        puVar12 = puVar12 + 1;
        ppuVar3 = ppuVar2;
        func_0x00010bf529e0();
      } while (puVar12 < (undefined *)((long)ppuVar3 + -1));
    }
    ppuVar3 = ppuVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_208 = param_1;
    func_0x00010bdd1980();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c0720c0();
    if (((ulong)puVar12 & 1) == 0) {
      ppuVar7 = param_1;
      func_0x00010be77920(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_1;
      func_0x00010be6e7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_208);
      _objc_release(ppuVar7);
      ppuStack_208 = ppuVar6;
    }
    uVar4 = param_9;
    func_0x00010c06e0e0();
    if ((int)uVar4 == 0) {
      ppuVar7 = param_1;
      func_0x00010bebcf20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar7;
      func_0x00010bf529e0();
      if (ppuVar6 != (undefined **)0x0) {
        puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_98 = ppuVar3;
        ppuStack_90 = ppuVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_1;
        func_0x00010be6e7e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuStack_208);
        _objc_release(puVar12);
        ppuVar8 = param_1;
        func_0x00010bebcec0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar9 = ppuVar8;
          func_0x00010c0c1c40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar9;
          func_0x00010bf529e0();
          ppuVar11 = ppuVar7;
          func_0x00010bf529e0();
          _objc_release(ppuVar9);
          if (ppuVar11 < ppuVar10) {
            func_0x00010befa120(param_8);
          }
        }
        _objc_release(ppuVar8);
        ppuStack_208 = ppuVar6;
      }
      uVar4 = param_9;
      func_0x00010c06e0e0();
      if ((int)uVar4 == 0) {
        ppuStack_278 = param_1;
        func_0x00010bdd19a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_1;
        func_0x00010bebcf40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar6;
        func_0x00010bf529e0();
        if (ppuVar8 != (undefined **)0x0) {
          puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_a8 = ppuStack_278;
          ppuStack_a0 = ppuVar6;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = param_1;
          func_0x00010be6e7e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuStack_208);
          _objc_release(puVar12);
          ppuStack_208 = ppuVar8;
        }
        uVar4 = param_9;
        func_0x00010c06e0e0();
        if ((int)uVar4 == 0) {
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1c8 = 0xc2000000;
          pcStack_1c0 = FUN_107f37b90;
          puStack_1b8 = &UNK_110a13ea0;
          _objc_retain(ppuVar2);
          ppuStack_1b0 = ppuVar2;
          _objc_retain(ppuStack_220);
          ppuStack_1a8 = ppuStack_220;
          _objc_retain(param_9);
          uStack_1a0 = param_9;
          _objc_retain(ppuStack_218);
          ppuStack_198 = ppuStack_218;
          _objc_retain(puVar1);
          puStack_190 = puVar1;
          ppuStack_188 = param_1;
          _objc_retain(ppuStack_230);
          ppuStack_180 = ppuStack_230;
          _objc_retain(ppuVar8);
          ppuStack_178 = ppuVar8;
          _objc_retain(puVar5);
          puStack_170 = puVar5;
          func_0x00010bf97ce0(ppuStack_208);
          uVar4 = param_9;
          func_0x00010c06e0e0();
          if ((int)uVar4 == 0) {
            puVar12 = puVar5;
            func_0x00010bf529e0();
            if (puVar12 != (undefined *)0x0) {
              func_0x00010bdc7220(param_1);
            }
            func_0x00010c246ba0(param_6);
          }
          else if ((param_10 != 0) && (param_11 != (undefined **)0x0)) {
            puStack_200 = puVar12;
            uStack_1f8 = 0xc2000000;
            pcStack_1f0 = FUN_107f37e84;
            puStack_1e8 = &UNK_11084aaa8;
            _objc_retain(param_11);
            ppuStack_1d8 = param_11;
            _objc_retain(param_9);
            uStack_1e0 = param_9;
            func_0x00010007380c(param_10,&puStack_200);
            _objc_release(uStack_1e0);
            _objc_release(ppuStack_1d8);
          }
          _objc_release(puStack_170);
          _objc_release(ppuStack_178);
          _objc_release(ppuStack_180);
          _objc_release(puStack_190);
          _objc_release(ppuStack_198);
          _objc_release(uStack_1a0);
          _objc_release(ppuStack_1a8);
          _objc_release(ppuStack_1b0);
          _objc_release(puVar5);
LAB_107f37a54:
          _objc_release(ppuVar8);
        }
        else if ((param_10 != 0) && (param_11 != (undefined **)0x0)) {
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          uStack_158 = 0x107f37b78;
          puStack_150 = &UNK_11084aaa8;
          _objc_retain(param_11);
          ppuStack_140 = param_11;
          _objc_retain(param_9);
          uStack_148 = param_9;
          func_0x00010007380c(param_10,&puStack_168);
          _objc_release(uStack_148);
          ppuVar8 = ppuStack_140;
          goto LAB_107f37a54;
        }
        _objc_release(ppuVar6);
      }
      else {
        if ((param_10 == 0) || (param_11 == (undefined **)0x0)) goto LAB_107f37a70;
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        uStack_128 = 0x107f37b60;
        puStack_120 = &UNK_11084aaa8;
        _objc_retain(param_11);
        ppuStack_110 = param_11;
        _objc_retain(param_9);
        uStack_118 = param_9;
        func_0x00010007380c(param_10,&puStack_138);
        _objc_release(uStack_118);
        ppuStack_278 = ppuStack_110;
      }
      _objc_release(ppuStack_278);
LAB_107f37a70:
      _objc_release(ppuVar7);
    }
    else if ((param_10 != 0) && (param_11 != (undefined **)0x0)) {
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x107f37b48;
      puStack_f0 = &UNK_11084aaa8;
      _objc_retain(param_11);
      ppuStack_e0 = param_11;
      _objc_retain(param_9);
      uStack_e8 = param_9;
      func_0x00010007380c(param_10,&puStack_108);
      _objc_release(uStack_e8);
      ppuVar7 = ppuStack_e0;
      goto LAB_107f37a70;
    }
    _objc_release(ppuStack_208);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_218);
    _objc_release(ppuStack_220);
  }
  else {
    if ((param_10 == 0) || (param_11 == (undefined **)0x0)) goto LAB_107f37aa0;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107f37b30;
    puStack_c0 = &UNK_11084aaa8;
    _objc_retain(param_11);
    ppuStack_b0 = param_11;
    _objc_retain(param_9);
    uStack_b8 = param_9;
    func_0x00010007380c(param_10,&puStack_d8);
    _objc_release(uStack_b8);
    ppuStack_230 = ppuStack_b0;
  }
  _objc_release(ppuStack_230);
LAB_107f37aa0:
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f37b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
              (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20),0,0);
    return;
  }
  return;
}



/* Entry: 107f37b30; end: 107f37b8f;  */

void FUN_107f37b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f37b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f37b90; end: 107f37e83;  */

void FUN_107f37b90(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    _objc_retain(param_3);
    lVar3 = param_3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    FUN_107f3e534(lVar3,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c06e0e0();
  uVar5 = param_2;
  if (iVar1 != 0) {
    *param_4 = 1;
    goto LAB_107f37e54;
  }
  lVar9 = lVar3;
  func_0x00010bf529e0();
  if (lVar9 == 0) goto LAB_107f37e54;
  uVar2 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xf0);
    func_0x00010c27ad40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  uVar4 = *(ulong *)(param_1 + 0x50);
  uVar12 = uVar5;
  func_0x00010c0b5ac0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar12);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar2;
    func_0x00010c0720c0();
    uVar6 = uVar2;
    if ((uVar4 & 1) == 0) {
      func_0x00010c25ce40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    uVar2 = uVar6;
    func_0x00010c25ce40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  puVar7 = PTR_PTR_1126d86d8;
  _objc_alloc();
  func_0x00010c048200();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010c13cdc0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x58);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
LAB_107f37de8:
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x60));
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x60));
      func_0x00010c0df840(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
    }
    else {
      lVar10 = lVar9;
      func_0x00010c067ec0();
      uVar4 = *(ulong *)(param_1 + 0x60);
      func_0x00010bf529e0();
      if (uVar4 <= (ulong)(long)(int)lVar10) goto LAB_107f37de8;
      puVar11 = *(undefined **)(param_1 + 0x48);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c067ec0(lVar9);
      func_0x00010c0dfd40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed1300(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c067ec0(lVar9);
      func_0x00010c1d04c0(uVar12);
    }
    _objc_release(puVar11);
    _objc_release(lVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(uVar2);
LAB_107f37e54:
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107f37e84; end: 107f37e9b;  */

void FUN_107f37e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f37e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f37e9c; end: 107f37f7b;  */

undefined8 FUN_107f37e9c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c11f520(param_3);
  fVar4 = param_1;
  func_0x00010c11f520(param_4);
  if (param_1 == fVar4) {
    uVar1 = param_3;
    func_0x00010c13cdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = param_4;
    func_0x00010c13cdc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c09e440(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c11f520(param_3);
    fVar5 = fVar4;
    _objc_release(param_3);
    func_0x00010c11f520(param_4);
    uVar3 = 0xffffffffffffffff;
    if (fVar4 <= fVar5) {
      uVar3 = 1;
    }
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107f37f7c; end: 107f3822b; -[SCMemoriesSearch _unionResultsWithSameResultTitle:newResult:] */

void FUN_107f37f7c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c241e40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010c241e40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_1a0;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(undefined8 *)(lStack_1a8 + unaff_x20 * 8);
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar4);
        unaff_x20 = unaff_x20 + 1;
      } while (lVar7 != unaff_x20);
      lVar7 = lVar2;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar2);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lStack_1f8 = param_4;
  func_0x00010c241e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_1e0;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_1e0 != lVar7) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(undefined8 *)(lStack_1e8 + unaff_x20 * 8);
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf4b900();
        _objc_release(uVar4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(lVar3);
        }
        unaff_x20 = unaff_x20 + 1;
      } while (lVar2 != unaff_x20);
      lVar2 = param_4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126d86d8;
  _objc_alloc(PTR_PTR_1126d86d8);
  lVar2 = param_3;
  func_0x00010c13cdc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c048200(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lStack_1f8);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_208 = FUN_107f3822c;
    lStack_230 = lVar3;
    puStack_228 = puVar1;
    lStack_220 = unaff_x20;
    lStack_218 = param_3;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain(lVar7);
    puStack_258 = &uStack_260;
    uStack_260 = 0;
    uStack_250 = 0x3032000000;
    pcStack_248 = FUN_107f38338;
    uStack_240 = 0x107f38348;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puStack_238 = puVar1;
    _objc_retain(lVar7);
    func_0x00010c0f8240(uVar4);
    puVar5 = (undefined *)puStack_258[5];
    func_0x00010bf51e00(puVar5);
    _objc_release(lVar7);
    __Block_object_dispose(&uStack_260,8);
    _objc_release(puStack_238);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f3822c; end: 107f38337; -[SCMemoriesSearch _querySqliteForOffsetsWithFullTextSearch:] */

void FUN_107f3822c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107f38338;
  uStack_40 = 0x107f38348;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_38 = puVar1;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar2);
  uVar2 = puStack_58[5];
  func_0x00010bf51e00(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f38338; end: 107f3834f;  */

void FUN_107f38338(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f38350; end: 107f38583;  */

ulong FUN_107f38350(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uVar4 = uVar3;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &uStack_140;
  puVar11 = auStack_f8;
  uVar5 = uVar4;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar12 = *plStack_130;
    do {
      uVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(uVar4);
        }
        ppuVar14 = *(undefined ***)(lStack_138 + uVar13 * 8);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        uVar6 = uVar3;
        func_0x00010bf41760();
        if (0 < (int)uVar6) {
          lVar16 = 0;
          do {
            ppuVar7 = ppuVar14;
            func_0x00010c25d280();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar7 != (undefined **)0x0) {
              ppuVar1 = ppuVar7;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar7);
            func_0x00010befa120(puVar2);
            _objc_release(ppuVar1);
            lVar16 = lVar16 + 1;
            uVar6 = uVar3;
            func_0x00010bf41760();
          } while (lVar16 < (int)uVar6);
        }
        uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        puVar8 = puVar2;
        func_0x00010bf51e00(puVar2);
        func_0x00010befa120(uVar15);
        _objc_release(puVar8);
        _objc_release(puVar2);
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar5);
      puVar10 = &uStack_140;
      puVar11 = auStack_f8;
      uVar5 = uVar4;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  uVar3 = param_2;
  func_0x00010be854e0();
  if ((int)uVar3 < 1) {
    puVar9 = puVar11;
    func_0x00010c0720c0();
    if (((ulong)puVar9 & 1) == 0) {
      uVar15 = *(undefined8 *)(param_2 + 0xf0);
      func_0x00010c27ad40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010be854e0();
      _objc_release(uVar15);
      if (0 < (int)uVar3) goto LAB_107f385c8;
    }
    uVar3 = param_2;
    func_0x00010be413a0();
    if ((uVar3 & 1) == 0) {
      func_0x00010be451e0(param_2);
      goto LAB_107f385cc;
    }
  }
LAB_107f385c8:
  param_2 = 1;
LAB_107f385cc:
  _objc_release(puVar11);
  _objc_release(puVar10);
  return param_2;
}



/* Entry: 107f38584; end: 107f38673; -[SCMemoriesSearch _isValidConcept:inputLanguageId:] */

ulong FUN_107f38584(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be854e0(param_1,param_2,param_3);
  if ((int)uVar1 < 1) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea8498);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c27ad40(uVar2,param_2,param_3,param_4,
                          &PTR____CFConstantStringClassReference_110ea8498);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010be854e0(param_1,param_2,uVar2);
      _objc_release(uVar2);
      if (0 < (int)uVar1) goto LAB_107f385c8;
    }
    uVar1 = param_1;
    func_0x00010be413a0(param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010be451e0(param_1,param_2,param_3);
      goto LAB_107f385cc;
    }
  }
LAB_107f385c8:
  param_1 = 1;
LAB_107f385cc:
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107f38674; end: 107f386bb; -[SCMemoriesSearch _isUserSpecificConcept:] */

undefined8 FUN_107f38674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107f386bc; end: 107f3872f; -[SCMemoriesSearch _isInterpretableWithoutTagMatching:] */

undefined8 FUN_107f386bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int aiStack_38 [6];
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  if (lVar1 != 0) {
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    FUN_107f52c60(aiStack_38);
    if (aiStack_38[0] == 0) {
      uVar2 = 1;
      goto LAB_107f38714;
    }
  }
  uVar2 = 0;
LAB_107f38714:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107f38730; end: 107f3880b; -[SCMemoriesSearch _querySqliteForNumberOfResultsWithFullTextSearch:] */

undefined4 FUN_107f38730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar2);
  uVar1 = *(undefined4 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107f3880c; end: 107f38903;  */

void FUN_107f3880c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  puVar5 = puVar1;
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010bfb1b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067e00();
  *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (int)uVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar3 = uVar2;
  func_0x00010bdcf4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd420(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f38904; end: 107f38973; -[SCMemoriesSearch _addIntermediateSearchResults:toSearchResults:includePrivate:] */

void FUN_107f38904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdcf4e0(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd420(param_1,param_2,uVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f38974; end: 107f38c5b; -[SCMemoriesSearch _appendSearchResults:toSearchResults:] */

void FUN_107f38974(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

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
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *unaff_x20;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar16;
  undefined *puStack_378;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_4);
  puStack_1f8 = param_4;
  func_0x00010bf52a60();
  if (param_4 != (undefined *)0x0) {
    lVar15 = *plStack_1a0;
    do {
      unaff_x20 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(puStack_1f8);
        }
        unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x25 = *(undefined **)(lStack_1a8 + (long)unaff_x20 * 8);
        func_0x00010c13cdc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_1;
        func_0x00010be23420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be34b00(param_1);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x24);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        unaff_x20 = unaff_x20 + 1;
      } while (param_4 != unaff_x20);
      param_4 = puStack_1f8;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (param_4 != (undefined *)0x0);
  }
  _objc_release(puStack_1f8);
  puVar3 = puStack_200;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puStack_200);
  puVar13 = &uStack_1f0;
  puVar14 = auStack_170;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar15 = *plStack_1e0;
    do {
      unaff_x20 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar15) {
          _objc_enumerationMutation(puStack_200);
        }
        unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x24 = *(undefined **)(lStack_1e8 + (long)unaff_x20 * 8);
        unaff_x26 = unaff_x24;
        func_0x00010c13cdc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = param_1;
        func_0x00010be23420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be34b00(param_1);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        puVar4 = puVar2;
        func_0x00010bf4b900();
        if (((ulong)puVar4 & 1) == 0) {
          func_0x00010befa120(puStack_1f8);
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x25);
        unaff_x20 = unaff_x20 + 1;
      } while (puVar3 != unaff_x20);
      puVar13 = &uStack_1f0;
      puVar14 = auStack_170;
      puVar3 = puStack_200;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puStack_200;
  _objc_release(puStack_200);
  _objc_release(puVar2);
  _objc_release(puStack_1f8);
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puStack_200;
  ppuStack_260 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puStack_218 = puVar3;
  pcStack_208 = FUN_107f38c5c;
  puStack_258 = unaff_x27;
  puStack_250 = unaff_x26;
  puStack_248 = unaff_x25;
  puStack_240 = unaff_x24;
  uStack_238 = unaff_x23;
  puStack_230 = puVar2;
  puStack_228 = param_1;
  puStack_220 = unaff_x20;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puVar1);
  puVar2 = puVar4;
  func_0x00010be9c920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  uVar5 = param_7;
  func_0x00010c06e0e0();
  if ((int)uVar5 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010be9c820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      uVar5 = param_7;
      func_0x00010c06e0e0();
      if ((int)uVar5 == 0) {
        puVar7 = puVar4;
        func_0x00010be9c800();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
          func_0x00010bdc7220(puVar4);
        }
        uVar5 = param_7;
        func_0x00010c06e0e0();
        if ((int)uVar5 == 0) {
          puStack_378 = puVar4;
          func_0x00010bec4fa0();
          _objc_retainAutoreleasedReturnValue();
          if (puStack_378 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
          uVar5 = param_7;
          func_0x00010c06e0e0();
          if ((int)uVar5 == 0) {
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR_PTR_1126d8610;
            func_0x00010c087f40();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar11;
            func_0x00010c0720c0();
            if ((int)puVar16 == 0) {
              func_0x00010be9c900(puVar4);
            }
            else {
              func_0x00010be9c8e0(puVar4);
            }
            func_0x00010befa160(puVar3);
            uVar5 = param_7;
            func_0x00010c06e0e0();
            if ((int)uVar5 == 0) {
              puVar16 = puVar8;
              func_0x00010bf529e0();
              if (puVar16 != (undefined *)0x0) {
                puVar16 = puVar8;
                func_0x00010bf51e00(puVar8);
                puVar12 = puVar4;
                func_0x00010be9c960(puVar4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar16);
                func_0x00010c16a300(puVar8);
                func_0x00010bdcd420(puVar4);
                _objc_release(puVar12);
              }
              puVar16 = puVar9;
              func_0x00010bf529e0();
              if (puVar16 != (undefined *)0x0) {
                puVar16 = puVar9;
                func_0x00010bf51e00(puVar9);
                puVar12 = puVar4;
                func_0x00010be9c960(puVar4);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar16);
                func_0x00010c16a300(puVar9);
                func_0x00010bdcd420(puVar4);
                _objc_release(puVar12);
              }
              func_0x00010bf529e0();
              puVar4 = puVar3;
              func_0x00010c25e980(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar4;
              func_0x00010bf51e00();
              _objc_release(puVar4);
            }
            else {
              puVar16 = (undefined *)0x0;
              if ((param_8 != 0) && (puVar1 != (undefined *)0x0)) {
                puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_350 = 0xc2000000;
                uStack_348 = 0x107f393a0;
                puStack_340 = &UNK_11084aaa8;
                _objc_retain(puVar1);
                puStack_330 = puVar1;
                _objc_retain(param_7);
                uStack_338 = param_7;
                func_0x00010007380c(param_8,&puStack_358);
                _objc_release(uStack_338);
                _objc_release(puStack_330);
                puVar16 = (undefined *)0x0;
              }
            }
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          else {
            puVar16 = (undefined *)0x0;
            if ((param_8 == 0) || (puVar1 == (undefined *)0x0)) goto LAB_107f392bc;
            puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_320 = 0xc2000000;
            uStack_318 = 0x107f39388;
            puStack_310 = &UNK_11084aaa8;
            _objc_retain(puVar1);
            puStack_300 = puVar1;
            _objc_retain(param_7);
            uStack_308 = param_7;
            func_0x00010007380c(param_8,&puStack_328);
            _objc_release(uStack_308);
            puVar16 = (undefined *)0x0;
            puVar8 = puStack_300;
          }
          _objc_release(puVar8);
LAB_107f392bc:
          _objc_release(puStack_378);
        }
        else {
          puVar16 = (undefined *)0x0;
          if ((param_8 != 0) && (puVar1 != (undefined *)0x0)) {
            puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_2f0 = 0xc2000000;
            uStack_2e8 = 0x107f39370;
            puStack_2e0 = &UNK_11084aaa8;
            _objc_retain(puVar1);
            puStack_2d0 = puVar1;
            _objc_retain(param_7);
            uStack_2d8 = param_7;
            func_0x00010007380c(param_8,&puStack_2f8);
            _objc_release(uStack_2d8);
            puVar16 = (undefined *)0x0;
            puStack_378 = puStack_2d0;
            goto LAB_107f392bc;
          }
        }
        _objc_release(puVar7);
      }
      else {
        puVar16 = (undefined *)0x0;
        if ((param_8 != 0) && (puVar1 != (undefined *)0x0)) {
          puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2c0 = 0xc2000000;
          uStack_2b8 = 0x107f39358;
          puStack_2b0 = &UNK_11084aaa8;
          _objc_retain(puVar1);
          puStack_2a0 = puVar1;
          _objc_retain(param_7);
          uStack_2a8 = param_7;
          func_0x00010007380c(param_8,&puStack_2c8);
          _objc_release(uStack_2a8);
          _objc_release(puStack_2a0);
          puVar16 = (undefined *)0x0;
        }
      }
    }
    else {
      func_0x00010befa120(puVar2);
      func_0x00010bdc7220(puVar4);
      func_0x00010bf529e0();
      puVar4 = puVar3;
      func_0x00010c25e980(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
    }
    _objc_release(puVar6);
  }
  else {
    puVar16 = (undefined *)0x0;
    if ((param_8 == 0) || (puVar1 == (undefined *)0x0)) goto LAB_107f392e4;
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_107f39340;
    puStack_280 = &UNK_11084aaa8;
    _objc_retain(puVar1);
    puStack_270 = puVar1;
    _objc_retain(param_7);
    uStack_278 = param_7;
    func_0x00010007380c(param_8,&puStack_298);
    _objc_release(uStack_278);
    puVar16 = (undefined *)0x0;
    puVar2 = puStack_270;
  }
  _objc_release(puVar2);
LAB_107f392e4:
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 107f38c5c; end: 107f3933f; -[SCMemoriesSearch _searchResultsForQuery:inputLocale:includePrivate:source:request:queue:completionHandler:] */

void FUN_107f38c5c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_178;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_1;
  func_0x00010be9c920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  uVar3 = param_7;
  func_0x00010c06e0e0();
  if ((int)uVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010be9c820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      uVar3 = param_7;
      func_0x00010c06e0e0();
      if ((int)uVar3 == 0) {
        puVar5 = param_1;
        func_0x00010be9c800();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          func_0x00010befa120(puVar1);
          func_0x00010bdc7220(param_1);
        }
        uVar3 = param_7;
        func_0x00010c06e0e0();
        if ((int)uVar3 == 0) {
          puStack_178 = param_1;
          func_0x00010bec4fa0();
          _objc_retainAutoreleasedReturnValue();
          if (puStack_178 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
          uVar3 = param_7;
          func_0x00010c06e0e0();
          if ((int)uVar3 == 0) {
            puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR_PTR_1126d8610;
            func_0x00010c087f40();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c0720c0();
            if ((int)puVar10 == 0) {
              func_0x00010be9c900(param_1);
            }
            else {
              func_0x00010be9c8e0(param_1);
            }
            func_0x00010befa160(puVar2);
            uVar3 = param_7;
            func_0x00010c06e0e0();
            if ((int)uVar3 == 0) {
              puVar10 = puVar6;
              func_0x00010bf529e0();
              if (puVar10 != (undefined *)0x0) {
                puVar10 = puVar6;
                func_0x00010bf51e00(puVar6);
                puVar11 = param_1;
                func_0x00010be9c960(param_1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar10);
                func_0x00010c16a300(puVar6);
                func_0x00010bdcd420(param_1);
                _objc_release(puVar11);
              }
              puVar10 = puVar7;
              func_0x00010bf529e0();
              if (puVar10 != (undefined *)0x0) {
                puVar10 = puVar7;
                func_0x00010bf51e00(puVar7);
                puVar11 = param_1;
                func_0x00010be9c960(param_1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar10);
                func_0x00010c16a300(puVar7);
                func_0x00010bdcd420(param_1);
                _objc_release(puVar11);
              }
              func_0x00010bf529e0();
              puVar10 = puVar2;
              func_0x00010c25e980(puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bf51e00();
              _objc_release(puVar10);
            }
            else {
              puVar11 = (undefined *)0x0;
              if ((param_8 != 0) && (param_9 != (undefined *)0x0)) {
                puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_150 = 0xc2000000;
                uStack_148 = 0x107f393a0;
                puStack_140 = &UNK_11084aaa8;
                _objc_retain(param_9);
                puStack_130 = param_9;
                _objc_retain(param_7);
                uStack_138 = param_7;
                func_0x00010007380c(param_8,&puStack_158);
                _objc_release(uStack_138);
                _objc_release(puStack_130);
                puVar11 = (undefined *)0x0;
              }
            }
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          else {
            puVar11 = (undefined *)0x0;
            if ((param_8 == 0) || (param_9 == (undefined *)0x0)) goto LAB_107f392bc;
            puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_120 = 0xc2000000;
            uStack_118 = 0x107f39388;
            puStack_110 = &UNK_11084aaa8;
            _objc_retain(param_9);
            puStack_100 = param_9;
            _objc_retain(param_7);
            uStack_108 = param_7;
            func_0x00010007380c(param_8,&puStack_128);
            _objc_release(uStack_108);
            puVar11 = (undefined *)0x0;
            puVar6 = puStack_100;
          }
          _objc_release(puVar6);
LAB_107f392bc:
          _objc_release(puStack_178);
        }
        else {
          puVar11 = (undefined *)0x0;
          if ((param_8 != 0) && (param_9 != (undefined *)0x0)) {
            puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_f0 = 0xc2000000;
            uStack_e8 = 0x107f39370;
            puStack_e0 = &UNK_11084aaa8;
            _objc_retain(param_9);
            puStack_d0 = param_9;
            _objc_retain(param_7);
            uStack_d8 = param_7;
            func_0x00010007380c(param_8,&puStack_f8);
            _objc_release(uStack_d8);
            puVar11 = (undefined *)0x0;
            puStack_178 = puStack_d0;
            goto LAB_107f392bc;
          }
        }
        _objc_release(puVar5);
      }
      else {
        puVar11 = (undefined *)0x0;
        if ((param_8 != 0) && (param_9 != (undefined *)0x0)) {
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0xc2000000;
          uStack_b8 = 0x107f39358;
          puStack_b0 = &UNK_11084aaa8;
          _objc_retain(param_9);
          puStack_a0 = param_9;
          _objc_retain(param_7);
          uStack_a8 = param_7;
          func_0x00010007380c(param_8,&puStack_c8);
          _objc_release(uStack_a8);
          _objc_release(puStack_a0);
          puVar11 = (undefined *)0x0;
        }
      }
    }
    else {
      func_0x00010befa120(puVar1);
      func_0x00010bdc7220(param_1);
      func_0x00010bf529e0();
      puVar5 = puVar2;
      func_0x00010c25e980(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010bf51e00();
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  else {
    puVar11 = (undefined *)0x0;
    if ((param_8 == 0) || (param_9 == (undefined *)0x0)) goto LAB_107f392e4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107f39340;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(param_9);
    puStack_70 = param_9;
    _objc_retain(param_7);
    uStack_78 = param_7;
    func_0x00010007380c(param_8,&puStack_98);
    _objc_release(uStack_78);
    puVar11 = (undefined *)0x0;
    puVar1 = puStack_70;
  }
  _objc_release(puVar1);
LAB_107f392e4:
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107f39340; end: 107f393b7;  */

void FUN_107f39340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f39354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f393b8; end: 107f396e3; -[SCMemoriesSearch _storyTitleSearchResultWithUserQuery:includePrivate:] */

void FUN_107f393b8(float param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_3,
                      &PTR____CFConstantStringClassReference_110ec77d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_3,
                      &PTR____CFConstantStringClassReference_110ec77f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  if (param_5 == 0) {
    puVar3 = puVar4;
  }
  _objc_retain(puVar3);
  puVar5 = PTR_PTR_1126c45e8;
  _objc_alloc();
  func_0x00010c038000();
  puVar7 = PTR_PTR_1126af4c0;
  puVar6 = *(undefined **)(param_2 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  puVar14 = puVar6;
  func_0x00010bfa6f60(puVar7,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x1) {
    puVar10 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c3bb8;
    _objc_alloc(PTR_PTR_1126c3bb8);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar8 = puVar10;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9,param_3,&PTR____CFConstantStringClassReference_110e2b998);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.0;
    puVar13 = puVar9;
    puVar14 = puVar7;
    func_0x00010c03fe00(puVar6,param_3,puVar9,puVar7,0,0,1,
                        &PTR__OBJC_CLASS___NSConstantArray_111181e98);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  else {
    puVar6 = puVar7;
    func_0x00010bf529e0();
    if (puVar6 < (undefined *)0x2) {
      puVar6 = (undefined *)0x0;
      goto LAB_107f3966c;
    }
    puVar6 = PTR_PTR_1126c3bb8;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110e2b998);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.0;
    puVar13 = puVar10;
    puVar14 = puVar7;
    func_0x00010c03fe00(puVar6,param_3,puVar10,puVar7,0,0,1,
                        &PTR__OBJC_CLASS___NSConstantArray_111181eb0);
  }
  _objc_release(puVar10);
LAB_107f3966c:
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    if ((((ulong)puVar14 & 1) != 0) ||
       (func_0x00010becb9e0(param_4,param_3,puVar13), puVar6 = PTR____NSArray0__struct_11034ab48,
       param_1 <= 1.0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_4;
      func_0x00010bebcf00(param_4,param_3,puVar13,puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3,param_3,uVar11);
      if (((ulong)puVar14 & 1) == 0) {
        uVar12 = param_4;
        func_0x00010bebcf20(param_4,param_3,puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3,param_3,uVar12);
        func_0x00010bebcf40(param_4,param_3,puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3,param_3,param_4);
        _objc_release(param_4);
        _objc_release(uVar12);
      }
      puVar6 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(uVar11);
      _objc_release(puVar3);
    }
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f396e4; end: 107f3980b; -[SCMemoriesSearch _snapMatchInfosFromMatchingConcept:isForContentUnderstandingTab:] */

void FUN_107f396e4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  if (((param_5 & 1) != 0) ||
     (func_0x00010becb9e0(param_2,param_3,param_4), puVar4 = PTR____NSArray0__struct_11034ab48,
     param_1 <= 1.0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bebcf00(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_3,uVar2);
    if ((param_5 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010bebcf20(param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1,param_3,uVar3);
      func_0x00010bebcf40(param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1,param_3,param_2);
      _objc_release(param_2);
      _objc_release(uVar3);
    }
    puVar4 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f3980c; end: 107f39b23; -[SCMemoriesSearch _similarResultsForQuery:includePrivate:request:queue:completionHandler:] */

void FUN_107f3980c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d86e8;
  func_0x00010c23c6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar2);
    puVar9 = puVar2;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar2);
          }
          puVar4 = param_1;
          func_0x00010bebcee0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_5;
          func_0x00010c06e0e0();
          if ((int)uVar5 != 0) {
            if ((param_6 != 0) && (param_7 != 0)) {
              puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_158 = 0xc2000000;
              pcStack_150 = FUN_107f39b24;
              puStack_148 = &UNK_11084aaa8;
              _objc_retain(param_7);
              lStack_138 = param_7;
              _objc_retain(param_5);
              uStack_140 = param_5;
              func_0x00010007380c(param_6,&puStack_160);
              _objc_release(uStack_140);
              _objc_release(lStack_138);
            }
            _objc_release(puVar4);
            puVar9 = (undefined *)0x0;
            puVar7 = puVar2;
            goto LAB_107f39a98;
          }
          puVar6 = puVar4;
          func_0x00010bf529e0();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = PTR_PTR_1126d86d8;
            _objc_alloc();
            func_0x00010c048200();
            func_0x00010c1b4620();
            if (puVar6 != (undefined *)0x0) {
              func_0x00010befa120(puVar3);
            }
            _objc_release(puVar6);
          }
          _objc_release(puVar4);
          puVar7 = puVar7 + 1;
        } while (puVar9 != puVar7);
        puVar9 = puVar2;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    func_0x00010bdcf4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c0d3c80();
    _objc_release(param_1);
    func_0x00010c246ba0(puVar7);
    puVar9 = puVar7;
    func_0x00010bf51e00(puVar7);
LAB_107f39a98:
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107f39b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20),0,0);
  return;
}



/* Entry: 107f39b24; end: 107f39b3b;  */

void FUN_107f39b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f39b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107f39b3c; end: 107f39c1b;  */

undefined8 FUN_107f39b3c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c11f520(param_3);
  fVar4 = param_1;
  func_0x00010c11f520(param_4);
  if (param_1 == fVar4) {
    uVar1 = param_3;
    func_0x00010c13cdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = param_4;
    func_0x00010c13cdc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c09e440(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c11f520(param_3);
    fVar5 = fVar4;
    _objc_release(param_3);
    func_0x00010c11f520(param_4);
    uVar3 = 0xffffffffffffffff;
    if (fVar4 <= fVar5) {
      uVar3 = 1;
    }
  }
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107f39c1c; end: 107f39c63; -[SCMemoriesSearch allSearchQueryResults] */

void FUN_107f39c1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f39c64; end: 107f39c8b; -[SCMemoriesSearch blockList] */

void FUN_107f39c64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f39c8c; end: 107f39d1f; -[SCMemoriesSearch resumeServiceForSearchQueryResultsCollector] */

void FUN_107f39c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a020();
  puVar2 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3c50;
  func_0x00010bf69d80(PTR_PTR_1126c3c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar2,param_2,uVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f39d20; end: 107f39d97; -[SCMemoriesSearch suspendServiceForSearchQueryResultsCollectorIfNeeded] */

void FUN_107f39d20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x110);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264220(puVar2,param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}


