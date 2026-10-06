/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e89590; end: 107e895a3; -[SCGalleryTabCollectionViewFlowLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89590(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770b14,param_3);
  return;
}



/* Entry: 107e895a4; end: 107e895b3; -[SCGalleryTabCollectionViewFlowLayout minimumCollectionViewContentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e895a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770b04);
}



/* Entry: 107e895b4; end: 107e895c7; -[SCGalleryTabCollectionViewFlowLayout backgroundViewReferenceSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107e895b4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112770b08);
}



/* Entry: 107e895c8; end: 107e895db; -[SCGalleryTabCollectionViewFlowLayout foregroundViewReferenceSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107e895c8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112770b0c);
}



/* Entry: 107e895dc; end: 107e895eb; -[SCGalleryTabCollectionViewFlowLayout collectionViewHeaderHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e895dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770b10);
}



/* Entry: 107e895ec; end: 107e895fb; -[SCGalleryTabCollectionViewFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e895ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770b14);
  return;
}



/* Entry: 107e895fc; end: 107e8964f; -[SCGalleryTabsCollectionView initWithFrame:collectionViewLayout:] */

undefined1 * FUN_107e895fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb7d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_collectionViewLayo_1125e29e0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c181fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e89650; end: 107e89787;  */

void FUN_107e89650(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107e89788;
  uStack_40 = 0x107e89798;
  uStack_38 = 0;
  func_0x00010bf97e80(param_1);
  if (puStack_58[5] == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c22d3c0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c25d400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107e89788; end: 107e8979f;  */

void FUN_107e89788(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e897a0; end: 107e8985b;  */

void FUN_107e897a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a4ec0);
  if ((param_2 == 0) || ((int)lVar1 == 0)) goto LAB_107e89848;
  lVar1 = param_2;
  func_0x00010bfbd080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar2 = *(long *)(lVar4 + 0x28);
  if (lVar2 == 0) {
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar1;
LAB_107e8983c:
    _objc_release(uVar3);
  }
  else if ((lVar1 != 0) && (func_0x00010bf433a0(), lVar2 == -1)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar1;
    goto LAB_107e8983c;
  }
  _objc_release(lVar1);
LAB_107e89848:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e8985c; end: 107e89a0b; -[SCMemoriesAlertThumbnailsView initWithDataObjectContext:items:snaps:thumbnailGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e8985c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fb7d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112770b18;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112770b1c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010b5f7894();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112770b20;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar5);
    lVar6 = *(long *)((long)puVar1 + lVar6);
    func_0x00010bf529e0();
    *(bool *)((long)puVar1 + (long)_DAT_112770b24) = lVar6 != 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770b28);
    *(undefined **)((long)puVar1 + (long)_DAT_112770b28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010be11680(puVar1);
    func_0x00010be14540(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e89a0c; end: 107e89d3f; -[SCMemoriesAlertThumbnailsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89a0c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  puVar5 = &uStack_160;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = PTR_PTR_1126fb7d8;
  lStack_118 = param_4;
  _objc_msgSendSuper2(&lStack_118,PTR_s_layoutSubviews_112600e60);
  lVar8 = (long)_DAT_112770b2c;
  lVar2 = *(long *)(param_4 + lVar8);
  func_0x00010bf529e0();
  lVar6 = 0;
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_4 + lVar8);
    func_0x00010bf529e0();
    if (uVar3 < 5) {
      uVar3 = *(ulong *)(param_4 + lVar8);
      func_0x00010bf529e0();
      pdVar1 = (double *)(param_4 + _DAT_112770b30);
      dVar10 = *pdVar1;
      lVar4 = *(long *)(param_4 + lVar8);
      func_0x00010bf529e0();
      func_0x00010bf20c00(param_4);
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lVar6 = *(long *)(param_4 + lVar8);
      _objc_retain(lVar6);
      lVar2 = lVar6;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        dVar10 = (param_3 - ((double)(lVar4 - 1) * 4.0 + dVar10 * (double)uVar3)) * 0.5;
        lVar8 = *plStack_150;
        do {
          lVar4 = 0;
          do {
            if (*plStack_150 != lVar8) {
              _objc_enumerationMutation(lVar6);
            }
            func_0x00010c19f0e0(dVar10,0,*pdVar1,pdVar1[1],*(undefined8 *)(lStack_158 + lVar4 * 8));
            dVar10 = dVar10 + *pdVar1 + 4.0;
            lVar4 = lVar4 + 1;
          } while (lVar2 != lVar4);
          lVar2 = lVar6;
          puVar5 = &uStack_160;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
    }
    else {
      func_0x00010bf20c00(param_4);
      dVar10 = (param_3 + -154.0) * 0.5;
      puVar5 = (undefined8 *)(param_4 + _DAT_112770b30);
      uVar9 = *puVar5;
      uVar11 = puVar5[1];
      uVar7 = *(undefined8 *)(param_4 + lVar8);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10,0x4000000000000000,uVar9,uVar11);
      _objc_release(uVar7);
      uVar9 = *puVar5;
      uVar11 = puVar5[1];
      uVar7 = *(undefined8 *)(param_4 + lVar8);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10 + 154.0 + -50.0,0x4000000000000000,uVar9,uVar11);
      _objc_release(uVar7);
      uVar9 = *puVar5;
      uVar11 = puVar5[1];
      uVar7 = *(undefined8 *)(param_4 + lVar8);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10 + 22.0,0,uVar9,uVar11);
      _objc_release(uVar7);
      uVar9 = *puVar5;
      uVar11 = puVar5[1];
      uVar7 = *(undefined8 *)(param_4 + lVar8);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10 + 154.0 + -22.0 + -50.0,0,uVar9,uVar11);
      _objc_release(uVar7);
      uVar7 = *puVar5;
      uVar9 = puVar5[1];
      lVar6 = *(long *)(param_4 + lVar8);
      puVar5 = (undefined8 *)0x4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10 + 22.0 + 30.0,0xbff0000000000000,uVar7,uVar9);
    }
    _objc_release();
    param_6 = (undefined1 *)puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_retain(param_6);
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112770b28);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_6);
    _objc_release(param_6);
    return;
  }
  return;
}



/* Entry: 107e89d40; end: 107e89dd7; -[SCMemoriesAlertThumbnailsView _fetchFromItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770b28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107e89dd8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107e89dd8; end: 107e89f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89dd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = *(long *)(lStack_118 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010bfbd100();
        if (lVar3 == 1) {
          func_0x00010befa120(puVar1,param_2,lVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112770b34);
  *(undefined **)(*(long *)(param_1 + 0x28) + (long)_DAT_112770b34) = puVar4;
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107e89f30;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_107e89f90;
  puStack_140 = &UNK_110842e18;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(puVar1 + _DAT_112770b28),param_2,&puStack_158);
  return;
}



/* Entry: 107e89f30; end: 107e89f8f; -[SCMemoriesAlertThumbnailsView _fetchSnapsToShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89f30(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107e89f90;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_112770b28),param_2,&puStack_38);
  return;
}



/* Entry: 107e89f90; end: 107e8a28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e89f90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112770b20);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar6 != (undefined *)0x0) {
    puVar2 = puVar6;
  }
  _objc_retain(puVar2);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 < (undefined *)0x5) {
    lVar7 = (long)_DAT_112770b34;
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar7);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + lVar7);
      _objc_retain(lVar7);
      lVar1 = lVar7;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar9 = *plStack_130;
        do {
          lVar10 = 0;
          puVar6 = puVar2;
          do {
            if (*plStack_130 != lVar9) {
              _objc_enumerationMutation(lVar7);
            }
            lVar8 = *(long *)(lStack_138 + lVar10 * 8);
            puVar2 = PTR_PTR_1126af4d0;
            func_0x00010bfa7380();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar8;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (lVar3 == 4) {
LAB_107e8a0d4:
              puVar4 = puVar2;
              func_0x00010bf529e0();
              if (puVar4 == (undefined *)0x0) goto LAB_107e8a130;
              puVar5 = puVar2;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_f8 = puVar5;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              puVar2 = puVar5;
            }
            else {
              func_0x00010bfbdda0();
              func_0x00010b5fa33c();
              if (lVar8 == 8) goto LAB_107e8a0d4;
LAB_107e8a130:
              puVar4 = puVar2;
              func_0x00010b5f7894(puVar2);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar2);
            puVar2 = puVar6;
            func_0x00010bf09f80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = puVar2;
            func_0x00010bf529e0();
            _objc_release(puVar4);
            if ((undefined *)0x4 < puVar6) goto LAB_107e8a1b4;
            lVar10 = lVar10 + 1;
            puVar6 = puVar2;
          } while (lVar1 != lVar10);
          lVar1 = lVar7;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
LAB_107e8a1b4:
      _objc_release(lVar7);
    }
  }
  puVar6 = puVar2;
  func_0x00010bf529e0();
  puVar4 = puVar2;
  if ((undefined *)0x5 < puVar6) {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_107e8a28c;
  puStack_158 = &UNK_110841f80;
  uStack_150 = *(undefined8 *)(param_1 + 0x20);
  puStack_148 = puVar4;
  _objc_retain(puVar4);
  func_0x000100162d98("APPSTORE",&puStack_170);
  _objc_release(puStack_148);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be91ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar4 + 0x20),PTR_s__requestThumbnails__112582048,
             *(undefined8 *)(puVar4 + 0x28));
  return;
}



/* Entry: 107e8a28c; end: 107e8a297;  */

void FUN_107e8a28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestThumbnails__112582048,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e8a298; end: 107e8acc7; -[SCMemoriesAlertThumbnailsView _requestThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8a298(long param_1,undefined1 *param_2,undefined **param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined **ppuVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lStack_220;
  long lStack_1f8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar33 = (long)_DAT_112770b34;
  lVar2 = *(long *)(param_1 + lVar33);
  func_0x00010bf529e0();
  ppuVar5 = param_3;
  if ((lVar2 != 1) || ((*(byte *)(param_1 + _DAT_112770b24) & 1) != 0)) {
LAB_107e8a30c:
    iVar31 = _DAT_112770b30;
    lVar2 = (long)_DAT_112770b30;
    ((undefined8 *)(param_1 + lVar2))[1] = 0x4055400000000000;
    *(undefined8 *)(param_1 + lVar2) = 0x4049000000000000;
    goto LAB_107e8a448;
  }
  lVar29 = *(long *)(param_1 + lVar33);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar29;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar2 == 1) {
LAB_107e8a3a0:
    _objc_release(lVar29);
  }
  else {
    lVar32 = *(long *)(param_1 + lVar33);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar32;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar2 == 2) {
LAB_107e8a398:
      _objc_release(lVar32);
      goto LAB_107e8a3a0;
    }
    lVar3 = *(long *)(param_1 + lVar33);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar2 == 5) {
      _objc_release(lVar3);
      goto LAB_107e8a398;
    }
    lVar27 = *(long *)(param_1 + lVar33);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar27;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    _objc_release(lVar27);
    _objc_release(lVar3);
    _objc_release(lVar32);
    _objc_release(lVar29);
    if (lVar2 != 3) goto LAB_107e8a30c;
  }
  iVar31 = _DAT_112770b30;
  lVar2 = (long)_DAT_112770b30;
  ((undefined8 *)(param_1 + lVar2))[1] = 0x4055400000000000;
  *(undefined8 *)(param_1 + lVar2) = 0x4055400000000000;
  ppuVar4 = param_3;
  func_0x00010bf529e0();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar4 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_98 = ppuVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(ppuVar4);
  }
  uVar28 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bfb1920(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bea57a0(param_1);
  _objc_release(uVar28);
LAB_107e8a448:
  func_0x00010bf529e0(ppuVar5);
  lVar2 = param_1;
  func_0x00010be63080();
  lVar33 = (long)_DAT_112770b2c;
  uVar28 = *(undefined8 *)(param_1 + lVar33);
  *(long *)(param_1 + lVar33) = lVar2;
  _objc_release(uVar28);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar28 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  lVar2 = *(long *)(param_1 + lVar33);
  _objc_retain(lVar2);
  lStack_220 = lVar2;
  func_0x00010bf52a60();
  puVar1 = (undefined8 *)(param_1 + iVar31);
  ppuVar4 = ppuVar5;
  if (lStack_220 != 0) {
    lVar29 = *plStack_190;
    do {
      lStack_1f8 = 0;
      do {
        if (*plStack_190 != lVar29) {
          _objc_enumerationMutation(lVar2);
        }
        ppuVar30 = *(undefined ***)(lStack_198 + lStack_1f8 * 8);
        func_0x000100841590(*puVar1,puVar1[1]);
        func_0x00010c1739e0(ppuVar30);
        uVar7 = *(ulong *)(param_1 + lVar33);
        func_0x00010bf529e0();
        if (4 < uVar7) {
          puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bdc0fe0(puVar8);
          ppuVar4 = ppuVar30;
          func_0x00010c08c0e0(ppuVar30);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fe740();
          _objc_release(ppuVar4);
          _objc_release(puVar8);
          ppuVar4 = ppuVar30;
          func_0x00010c08c0e0(ppuVar30);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fe800(0x3f000000);
          _objc_release(ppuVar4);
          ppuVar4 = ppuVar30;
          func_0x00010c08c0e0(ppuVar30);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fe7a0(0,0x3ff0000000000000);
          _objc_release(ppuVar4);
          ppuVar4 = ppuVar30;
          func_0x00010c08c0e0(ppuVar30);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fe840(0x4010000000000000);
          _objc_release(ppuVar4);
        }
        func_0x00010befbb60(param_1);
        puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        func_0x00010c01bf60();
        puVar8 = puVar9;
        func_0x00010c08c0e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar28 = 0x4010000000000000;
        func_0x00010c1842e0(0x4010000000000000);
        _objc_release(puVar8);
        puVar8 = puVar9;
        func_0x00010c08c0e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(puVar8);
        func_0x00010c182220(puVar9);
        func_0x00010befbb60(ppuVar30);
        func_0x00010c219b60(puVar9);
        puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar10 = puVar9;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar30;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar9;
        puStack_138 = puVar12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar30;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar9;
        puStack_130 = puVar15;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar30;
        func_0x00010c274200(ppuVar30);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar9;
        puStack_128 = puVar17;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar30;
        func_0x00010bf1ff80(ppuVar30);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar18;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_120 = puVar20;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar8);
        _objc_release(puVar21);
        _objc_release(puVar20);
        _objc_release(ppuVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(ppuVar4);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(ppuVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(ppuVar11);
        _objc_release(puVar10);
        lVar32 = (long)_DAT_112770b38;
        if (*(long *)(param_1 + lVar32) != 0) {
          func_0x00010befbb60(puVar9);
          func_0x00010c219b60(*(undefined8 *)(param_1 + lVar32));
          puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar22 = *(undefined8 *)(param_1 + lVar32);
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar30;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          uVar34 = uVar22;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = *(undefined8 *)(param_1 + lVar32);
          uStack_158 = uVar34;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar30;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          uVar35 = uVar23;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = *(undefined8 *)(param_1 + lVar32);
          uStack_150 = uVar35;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar30;
          func_0x00010c274200(ppuVar30);
          _objc_retainAutoreleasedReturnValue();
          uVar36 = uVar24;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = *(undefined8 *)(param_1 + lVar32);
          uStack_148 = uVar36;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1ff80(ppuVar30);
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar25;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_140 = uVar26;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar8);
          _objc_release(puVar10);
          _objc_release(uVar26);
          _objc_release(ppuVar30);
          _objc_release(uVar25);
          _objc_release(uVar36);
          _objc_release(ppuVar4);
          _objc_release(uVar24);
          _objc_release(uVar35);
          _objc_release(ppuVar14);
          _objc_release(uVar23);
          _objc_release(uVar34);
          _objc_release(ppuVar11);
          _objc_release(uVar22);
        }
        func_0x00010befa120(puVar6);
        _objc_release(puVar9);
        lStack_1f8 = lStack_1f8 + 1;
      } while (lStack_220 != lStack_1f8);
      lStack_220 = lVar2;
      func_0x00010bf52a60();
    } while (lStack_220 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c1cbe20(param_1);
  ppuVar30 = ppuVar5;
  func_0x00010bf529e0();
  puVar8 = PTR___dispatch_main_q_11034be20;
  if (ppuVar30 != (undefined **)0x0) {
    ppuVar30 = (undefined **)0x0;
    ppuVar4 = &puStack_1d8;
    do {
      puVar9 = puVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar5;
      func_0x00010c0dfd40(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_1a8,param_1);
      uVar34 = *(undefined8 *)(param_1 + _DAT_112770b1c);
      ppuVar14 = ppuVar11;
      func_0x00010c241220(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      uVar35 = *puVar1;
      uVar36 = puVar1[1];
      func_0x00010b690ad8(uVar35,uVar36,uVar28);
      _objc_retain(puVar8);
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_107e8acc8;
      puStack_1c0 = &UNK_11097ed98;
      param_2 = auStack_1a8;
      _objc_copyWeak(auStack_1b0,param_2);
      _objc_retain(puVar9);
      puStack_1b8 = puVar9;
      func_0x00010c136ae0(uVar35,uVar36,uVar34);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(ppuVar14);
      _objc_release(puStack_1b8);
      _objc_destroyWeak(auStack_1b0);
      _objc_destroyWeak(auStack_1a8);
      _objc_release(ppuVar11);
      _objc_release(puVar9);
      ppuVar11 = ppuVar5;
      func_0x00010bf529e0();
      ppuVar30 = (undefined **)((long)ppuVar30 + 1);
      uVar28 = uVar35;
    } while (ppuVar30 < ppuVar11);
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar4 + 5);
    _objc_destroyWeak(auStack_1a8);
    __Unwind_Resume();
    _objc_retain(param_2);
    ppuVar4 = ppuVar5 + 5;
    _objc_loadWeakRetained();
    if (ppuVar4 != (undefined **)0x0) {
      func_0x00010c1a9f00(ppuVar5[4]);
    }
    _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 107e8acc8; end: 107e8ad1f;  */

void FUN_107e8acc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e8ad20; end: 107e8add7; -[SCMemoriesAlertThumbnailsView _newImageViewContainersWithCount:] */

undefined * FUN_107e8ad20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    do {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107e8add8; end: 107e8aee3; -[SCMemoriesAlertThumbnailsView _setMaskViewFromGalleryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8add8(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = param_3 - 1;
  if ((uVar1 < 6) && ((0x37U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    puVar4 = (&PTR_PTR_110a10658)[uVar1];
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112770b38;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1d);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107e8aee4; end: 107e8aef7; -[SCMemoriesAlertThumbnailsView intrinsicContentSize] */

undefined1  [16] FUN_107e8aee4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4055400000000000;
  auVar1._0_8_ = 0x4049000000000000;
  return auVar1;
}



/* Entry: 107e8aef8; end: 107e8af87; -[SCMemoriesAlertThumbnailsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8aef8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770b38,0);
  _objc_storeStrong(param_1 + _DAT_112770b2c,0);
  _objc_storeStrong(param_1 + _DAT_112770b20,0);
  _objc_storeStrong(param_1 + _DAT_112770b34,0);
  _objc_storeStrong(param_1 + _DAT_112770b28,0);
  _objc_storeStrong(param_1 + _DAT_112770b1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b18,0);
  return;
}



/* Entry: 107e8af88; end: 107e8b00b; -[SCMemoriesDisabledSelectionView initWithFrame:] */

undefined1 * FUN_107e8af88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb7e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1677c0(0,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e8b00c; end: 107e8b03b; -[SCMemoriesDisabledSelectionView setDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8b00c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112770b3c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112770b3c) = (char)param_3;
  uVar1 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107e8b03c; end: 107e8b04b; -[SCMemoriesDisabledSelectionView disabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e8b03c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770b3c);
}



/* Entry: 107e8b04c; end: 107e8b397; -[SCMemoriesExportOrSendButtonInnerView initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107e8b04c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_a0 = PTR_PTR_1126fb7e8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cad40;
    _objc_alloc();
    func_0x00010c01af40(0x4000000000000000,0x4042000000000000,0x4032000000000000);
    puVar3 = PTR_PTR_1126cad48;
    _objc_alloc();
    func_0x00010c061d40();
    lVar17 = (long)_DAT_112770b40;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar16);
    func_0x00010c19f0e0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4058000000000000,
                        0x4042000000000000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar16;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08e400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar5 = puVar1;
    func_0x00010c160fc0(puVar1);
    func_0x000107e90aec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(param_3 + _DAT_112770b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
  return puVar1;
}



/* Entry: 107e8b398; end: 107e8b3ab; -[SCMemoriesExportOrSendButtonInnerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8b398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b40,0);
  return;
}



/* Entry: 107e8b3ac; end: 107e8b767; -[SCMemoriesReusableLoadingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107e8b3ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *unaff_x20;
  long lVar15;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126fb7f0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x20 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(unaff_x20);
    puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = unaff_x20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_b0 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x20;
    puStack_c0 = puVar2;
    puStack_88 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_c8 = puVar4;
    func_0x00010c08e400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    puStack_80 = puVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = unaff_x20;
    puStack_78 = puVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_d0);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_c8);
    _objc_release(puStack_c0);
    _objc_release(puStack_b8);
    _objc_release(puStack_b0);
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar15 = (long)_DAT_112770b44;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar14);
    func_0x00010befbb60(unaff_x20);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    func_0x00010bf34860(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar14;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x20;
    func_0x00010bf348e0(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b0);
    _objc_release(puVar6);
    _objc_release(uVar12);
    _objc_release(puVar4);
    _objc_release(uVar11);
    _objc_release(uVar14);
    _objc_release(puVar2);
    _objc_release(uVar10);
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_100;
  pcStack_d8 = FUN_107e8b768;
  puStack_f0 = unaff_x20;
  puStack_e8 = puVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c2558c0(*(undefined8 *)(puVar2 + _DAT_112770b44));
  puStack_f8 = PTR_PTR_1126fb7f0;
  puStack_100 = puVar2;
  _objc_msgSendSuper2(&puStack_100,PTR_s_dealloc_112525b20);
  return ppuVar13;
}



/* Entry: 107e8b768; end: 107e8b7b7; -[SCMemoriesReusableLoadingView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8b768(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112770b44));
  puStack_28 = PTR_PTR_1126fb7f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107e8b7b8; end: 107e8b7c3; +[SCMemoriesReusableLoadingView height] */

undefined8 FUN_107e8b7b8(void)

{
  return 0x4060400000000000;
}



/* Entry: 107e8b7c4; end: 107e8b7d7; -[SCMemoriesReusableLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8b7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b44,0);
  return;
}



/* Entry: 107e8b7d8; end: 107e8bc37; -[SCMemoriesSelectionView initWithFrame:] */

/* WARNING: Possible PIC construction at 0x000107e8b834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e8b8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e8b838) */
/* WARNING: Removing unreachable block (ram,0x000107e8b8b4) */

undefined8 * FUN_107e8b7d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126fb7f8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return (undefined8 *)0x0;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar1;
}



/* Entry: 107e8bc38; end: 107e8bc3f; -[SCMemoriesSelectionView setSelectMode:] */

void FUN_107e8bc38(undefined8 param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 107e8bc40; end: 107e8bcdf; -[SCMemoriesSelectionView setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8bc40(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112770b48),param_2,param_3 ^ 1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112770b4c;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1fba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectionOrderNumber__11265c8a8,0);
  return;
}



/* Entry: 107e8bce0; end: 107e8c163; -[SCMemoriesSelectionView setSelectionOrderNumber:] */

/* WARNING: Possible PIC construction at 0x000107e8c0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e8c180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107e8c104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e8c184) */
/* WARNING: Removing unreachable block (ram,0x000107e8c0f0) */
/* WARNING: Removing unreachable block (ram,0x000107e8c108) */
/* WARNING: Removing unreachable block (ram,0x000107e8c118) */
/* WARNING: Removing unreachable block (ram,0x000107e8c160) */
/* WARNING: Removing unreachable block (ram,0x000107e8c13c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8bce0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  
  _objc_retain(param_4);
  lVar14 = (long)_DAT_112770b50;
  lVar1 = *(long *)(param_2 + lVar14);
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    if (lVar1 == 0) {
      lVar1 = (long)_DAT_112770b4c;
      uVar2 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010bfe6ac0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      if (param_1 == 0.0) {
        param_1 = 24.0;
      }
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar2 = *(undefined8 *)(param_2 + lVar14);
      *(undefined **)(param_2 + lVar14) = puVar3;
      _objc_release(uVar2);
      func_0x00010c213040(*(undefined8 *)(param_2 + lVar14));
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_2 + lVar14));
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_2 + lVar14));
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_2 + lVar14));
      _objc_release(puVar3);
      uVar2 = *(undefined8 *)(param_2 + lVar14);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(param_1 * 0.5);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + lVar14);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar2);
      func_0x00010c165e20(*(undefined8 *)(param_2 + lVar14));
      func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_2 + lVar14));
      func_0x00010c1af000(*(undefined8 *)(param_2 + lVar14));
      func_0x00010befbb60(param_2);
      func_0x00010c219b60(*(undefined8 *)(param_2 + lVar14));
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_2 + lVar14);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + lVar14);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010bf348e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + lVar14);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf49420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + lVar14);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf49420(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    lVar1 = param_4;
    func_0x00010c25d700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_2 + lVar14));
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = param_4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar14));
    _objc_release(puVar3);
    _objc_release(lVar1);
    func_0x00010c25d700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_2 + lVar14));
    _objc_release(param_4);
    lVar1 = *(long *)(param_2 + lVar14);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar2);
  return;
}



/* Entry: 107e8c164; end: 107e8c1b7; -[SCMemoriesSelectionView setDisabled:] */

/* WARNING: Possible PIC construction at 0x000107e8c180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e8c184) */

void FUN_107e8c164(undefined8 param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 107e8c1b8; end: 107e8c21f; -[SCMemoriesSelectionView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8c1b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1facc0(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112770b4c));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectionOrderNumber__11265c8a8,0);
  return;
}



/* Entry: 107e8c220; end: 107e8c26f; -[SCMemoriesSelectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8c220(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770b50,0);
  _objc_storeStrong(param_1 + _DAT_112770b4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b48,0);
  return;
}



/* Entry: 107e8c270; end: 107e8c2f7; -[SCMemoriesSplitSnapsThumbnailContainerView initWithFrame:headerContainerViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107e8c270(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 in_d4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb800;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9060(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bde68a0(in_d4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770b54);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112770b54) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e8c2f8; end: 107e8c59b; -[SCMemoriesSplitSnapsThumbnailContainerView _setUpContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8c2f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  dVar13 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar13,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar11 = (long)_DAT_112770b58;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  lStack_88 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar15);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be4a2e0();
  *(double *)(lVar2 + _DAT_112770b5c) = dVar13;
  *(double *)(lVar2 + _DAT_112770b60) = dVar13 / 3.0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar12 = 0;
  uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  do {
    puVar9 = PTR_PTR_1126d80d0;
    _objc_alloc(PTR_PTR_1126d80d0);
    func_0x00010c013de0(uVar10,uVar14,uVar15,uVar4);
    func_0x00010befbb60(*(undefined8 *)(lVar2 + _DAT_112770b58),param_2,puVar9);
    func_0x00010be49700(lVar2,param_2,puVar9,lVar12);
    func_0x00010bea30c0(lVar2,param_2,puVar9,lVar12);
    func_0x00010befa120(puVar1,param_2,puVar9);
    _objc_release(puVar9);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 4);
  puVar9 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107e8c59c; end: 107e8c6af; -[SCMemoriesSplitSnapsThumbnailContainerView _constructAndLayoutSnapThumbnailViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8c59c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010be4a2e0();
  *(double *)(param_2 + _DAT_112770b5c) = param_1;
  *(double *)(param_2 + _DAT_112770b60) = param_1 / 3.0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = 0;
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  do {
    puVar2 = PTR_PTR_1126d80d0;
    _objc_alloc(PTR_PTR_1126d80d0);
    func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
    func_0x00010befbb60(*(undefined8 *)(param_2 + _DAT_112770b58),param_3,puVar2);
    func_0x00010be49700(param_2,param_3,puVar2,lVar3);
    func_0x00010bea30c0(param_2,param_3,puVar2,lVar3);
    func_0x00010befa120(puVar1,param_3,puVar2);
    _objc_release(puVar2);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e8c6b0; end: 107e8c87f; -[SCMemoriesSplitSnapsThumbnailContainerView setViewModel:thumbnailGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107e8c6b0(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *unaff_x24;
  double dVar11;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [128];
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_112770b64;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar7);
  *(undefined **)(param_2 + lVar7) = param_4;
  _objc_release(uVar1);
  puVar8 = param_4;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  puVar3 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      puVar3 = PTR_PTR_1126cfb48;
      _objc_alloc(PTR_PTR_1126cfb48);
      puVar2 = param_4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a0e0(puVar3,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112770b54);
      func_0x00010c0dfd40(uVar1,param_3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c222840();
      _objc_release(uVar1);
      _objc_release(puVar3);
      puVar8 = puVar8 + 1;
      puVar3 = param_4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
    } while (puVar8 < unaff_x24);
  }
  _objc_release(param_5);
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107e8c880;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = 0.0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar6 = *(long *)(puVar2 + _DAT_112770b54);
  puStack_b0 = unaff_x24;
  puStack_a8 = puVar3;
  puStack_a0 = puVar8;
  lStack_98 = param_2;
  uStack_90 = param_5;
  puStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010bf52a60(lVar6,param_3,&uStack_180,auStack_138,0x10);
  if (lVar7 != 0) {
    lVar9 = *plStack_170;
    do {
      lVar10 = 0;
      do {
        if (*plStack_170 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c138000(*(undefined8 *)(lStack_178 + lVar10 * 8),param_3,puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar6;
      func_0x00010bf52a60(lVar6,param_3,&uStack_180,auStack_138,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return dVar11;
  }
  ___stack_chk_fail();
  return (dVar11 + -8.0 + -1.0) * 0.5;
}



/* Entry: 107e8c880; end: 107e8c97f; -[SCMemoriesSplitSnapsThumbnailContainerView reset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107e8c880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar5 = 0.0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_112770b54);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c138000(*(undefined8 *)(lStack_108 + lVar4 * 8),param_2,param_3);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar5;
  }
  ___stack_chk_fail();
  return (dVar5 + -8.0 + -1.0) * 0.5;
}



/* Entry: 107e8c980; end: 107e8c99b; -[SCMemoriesSplitSnapsThumbnailContainerView _lengthForSnapThumbnailView:] */

double FUN_107e8c980(double param_1)

{
  return (param_1 + -8.0 + -1.0) * 0.5;
}



/* Entry: 107e8c99c; end: 107e8ccb3; -[SCMemoriesSplitSnapsThumbnailContainerView _layoutSnapThumbnailView:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8c99c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  func_0x00010c219b60(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = param_3;
  func_0x00010c2a5060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112770b5c;
  uVar2 = uVar4;
  func_0x00010bf49420(*(undefined8 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfe0660(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf49420(*(undefined8 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  uVar2 = param_3;
  if (param_4 < 2) {
    if (param_4 != 0) {
      if (param_4 != 1) goto LAB_107e8cc80;
      func_0x00010c274200(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_112770b58;
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c274200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x4010000000000000;
      goto LAB_107e8cb04;
    }
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112770b58;
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4010000000000000;
LAB_107e8cbdc:
    uVar5 = uVar4;
    func_0x00010bf493c0(uVar7,uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010c08de00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x4010000000000000;
  }
  else {
    if (param_4 == 2) {
      func_0x00010bf1ff80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_112770b58;
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf1ff80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0xc010000000000000;
      goto LAB_107e8cbdc;
    }
    if (param_4 != 3) goto LAB_107e8cc80;
    func_0x00010bf1ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112770b58;
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0xc010000000000000;
LAB_107e8cb04:
    uVar5 = uVar4;
    func_0x00010bf493c0(uVar7,uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c2793a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0xc010000000000000;
  }
  uVar7 = uVar2;
  func_0x00010bf493c0(uVar3,uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_107e8cc80:
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e8ccb4; end: 107e8ce0b; -[SCMemoriesSplitSnapsThumbnailContainerView _setCornerRadiusForSnapThumbnailView:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ccb4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_3);
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x1) {
    if (param_4 - 1 < 3) {
      uVar4 = *(undefined8 *)(&UNK_10dee81f0 + (param_4 - 1) * 8);
    }
    else {
      uVar4 = 2;
    }
  }
  else if (param_4 < 4) {
    uVar4 = *(undefined8 *)(&UNK_10dee8208 + param_4 * 8);
  }
  else {
    uVar4 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,*(undefined8 *)(param_1 + _DAT_112770b5c),
                      *(undefined8 *)(param_1 + _DAT_112770b5c),
                      *(undefined8 *)(param_1 + _DAT_112770b60),
                      *(undefined8 *)(param_1 + _DAT_112770b60),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  uVar4 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1c2c00(uVar4,param_2,puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e8ce0c; end: 107e8ce5b; -[SCMemoriesSplitSnapsThumbnailContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ce0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770b64,0);
  _objc_storeStrong(param_1 + _DAT_112770b54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b58,0);
  return;
}



/* Entry: 107e8ce5c; end: 107e8ced7; -[SCMemoriesSplitSnapsThumbnailView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107e8ce5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770b68);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112770b68) = puVar2;
    _objc_release(uVar3);
    func_0x00010bea9060(puVar1);
    func_0x00010bea94a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e8ced8; end: 107e8d17b; -[SCMemoriesSplitSnapsThumbnailView _setUpContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ced8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar20 = (long)_DAT_112770b6c;
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar18);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar19);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_112770b70;
  uVar16 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined **)(lVar2 + lVar19) = puVar1;
  _objc_release(uVar16);
  func_0x00010c182220(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010c17d4c0(*(undefined8 *)(lVar2 + lVar19));
  lVar15 = (long)_DAT_112770b6c;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = *(long *)(lVar2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 4;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar6;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar18);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar21);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(uVar14);
  lVar21 = (long)_DAT_112770b74;
  uVar16 = *(undefined8 *)(lVar7 + lVar21);
  *(undefined **)(lVar7 + lVar21) = puVar13;
  _objc_retain(puVar13);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(lVar7 + _DAT_112770b78);
  *(undefined8 *)(lVar7 + _DAT_112770b78) = uVar14;
  _objc_retain(uVar14);
  _objc_release(uVar16);
  uVar12 = *(undefined8 *)(lVar7 + lVar21);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar7 + _DAT_112770b7c);
  *(undefined8 *)(lVar7 + _DAT_112770b7c) = uVar16;
  _objc_release(uVar18);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010be91a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s__requestThumbnailIfNeeded_112582030);
  return;
}



/* Entry: 107e8d17c; end: 107e8d40f; -[SCMemoriesSplitSnapsThumbnailView _setUpImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d17c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_112770b70;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar17));
  lVar18 = (long)_DAT_112770b6c;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 4;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar19);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  lVar19 = (long)_DAT_112770b74;
  uVar15 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined **)(lVar2 + lVar19) = puVar12;
  _objc_retain(puVar12);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + _DAT_112770b78);
  *(undefined8 *)(lVar2 + _DAT_112770b78) = uVar13;
  _objc_retain(uVar13);
  _objc_release(uVar15);
  uVar11 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar2 + _DAT_112770b7c);
  *(undefined8 *)(lVar2 + _DAT_112770b7c) = uVar15;
  _objc_release(uVar16);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010be91a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__requestThumbnailIfNeeded_112582030);
  return;
}



/* Entry: 107e8d410; end: 107e8d4e3; -[SCMemoriesSplitSnapsThumbnailView setViewModel:thumbnailGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_112770b74;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112770b78);
  *(undefined8 *)(param_1 + _DAT_112770b78) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112770b7c);
  *(undefined8 *)(param_1 + _DAT_112770b7c) = uVar3;
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be91a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestThumbnailIfNeeded_112582030);
  return;
}



/* Entry: 107e8d4e4; end: 107e8d53f; -[SCMemoriesSplitSnapsThumbnailView reset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d4e4(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010bf2dbc0(*(undefined8 *)(param_1 + _DAT_112770b78),param_2,
                      *(undefined8 *)(param_1 + _DAT_112770b68));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112770b70),PTR_s_setImage__1126481e8,0);
    return;
  }
  return;
}



/* Entry: 107e8d540; end: 107e8d6d7; -[SCMemoriesSplitSnapsThumbnailView _requestThumbnailIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d540(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_5 + _DAT_112770b7c) != 0) {
    func_0x00010bfb68e0();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_3 = param_3 * param_1;
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_4 = param_4 * param_1;
    _objc_release(puVar4);
    _objc_release(puVar3);
    bVar1 = false;
    if ((param_4 == *(double *)(PTR__CGSizeZero_110347620 + 8)) &&
       (bVar1 = false, !NAN(param_3) && !NAN(*(double *)PTR__CGSizeZero_110347620))) {
      bVar1 = param_3 == *(double *)PTR__CGSizeZero_110347620;
    }
    bVar2 = false;
    if ((!bVar1) && (bVar2 = false, !NAN(param_3) && !NAN(param_4))) {
      bVar2 = param_3 == param_4;
    }
    dVar6 = param_4 + 1.0;
    if (!bVar2) {
      dVar6 = param_4;
    }
    _objc_initWeak(auStack_58,param_5);
    uVar5 = *(undefined8 *)(param_5 + _DAT_112770b78);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c136ae0(param_3,dVar6,uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 107e8d6d8; end: 107e8d78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d6d8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112770b7c);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((param_2 != 0) && ((int)uVar2 != 0)) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112770b70));
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e8d78c; end: 107e8d80b; -[SCMemoriesSplitSnapsThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d78c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770b7c,0);
  _objc_storeStrong(param_1 + _DAT_112770b74,0);
  _objc_storeStrong(param_1 + _DAT_112770b68,0);
  _objc_storeStrong(param_1 + _DAT_112770b78,0);
  _objc_storeStrong(param_1 + _DAT_112770b70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112770b6c,0);
  return;
}



/* Entry: 107e8d80c; end: 107e8d81f; -[SCSpectaclesImageView _commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d80c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112770b80) = 1;
  return;
}



/* Entry: 107e8d820; end: 107e8d86f; -[SCSpectaclesImageView initWithFrame:] */

undefined1 * FUN_107e8d820(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde24c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e8d870; end: 107e8d8bf; -[SCSpectaclesImageView initWithImage:] */

undefined1 * FUN_107e8d870(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithImage__1125e49c0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde24c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e8d8c0; end: 107e8d907; -[SCSpectaclesImageView layoutSubviews] */

void FUN_107e8d8c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c2877c0(param_1);
  return;
}



/* Entry: 107e8d908; end: 107e8d917; -[SCSpectaclesImageView setCutOutNotch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d908(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112770b80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2877d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateMask_11267f818);
  return;
}



/* Entry: 107e8d918; end: 107e8dacf; -[SCSpectaclesImageView updateMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8d918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_4[_DAT_112770b80] == '\x01') {
    func_0x00010bf20c00(param_4);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(0,0,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000108df6a6c(param_3);
    func_0x00010bf199a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f40(puVar1,param_5,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc80();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar2,param_5,puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar2,param_5,puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar2,param_5,puVar3);
    func_0x00010c19f0e0(0,0,param_3,param_3,puVar2);
    func_0x00010c08c0e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(param_4);
    _objc_release(puVar2);
    param_4 = puVar1;
  }
  else {
    func_0x00010c08c0e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e8dad0; end: 107e8dadf; -[SCSpectaclesImageView cutOutNotch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e8dad0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770b80);
}



/* Entry: 107e8dae0; end: 107e8db57; -[SCMemoriesSplitSnapsThumbnailViewModel initWithSnaps:] */

undefined1 * FUN_107e8dae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e8db58; end: 107e8db7b; -[SCMemoriesSplitSnapsThumbnailViewModel copyWithZone:] */

undefined8 FUN_107e8db58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e8db7c; end: 107e8db83; -[SCMemoriesSplitSnapsThumbnailViewModel hash] */

void FUN_107e8db7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107e8db84; end: 107e8dc13; -[SCMemoriesSplitSnapsThumbnailViewModel isEqual:] */

long FUN_107e8db84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e8dbf8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107e8dbf8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107e8dbf8;
    }
  }
  lVar3 = 1;
LAB_107e8dbf8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e8dc14; end: 107e8dc1b; -[SCMemoriesSplitSnapsThumbnailViewModel snaps] */

undefined8 FUN_107e8dc14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e8dc1c; end: 107e8dc27; -[SCMemoriesSplitSnapsThumbnailViewModel .cxx_destruct] */

void FUN_107e8dc1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e8dc28; end: 107e8df13; -[SCTableIndex initWithTableIndexConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107e8dc28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_3);
  puStack_88 = PTR_PTR_1126fb820;
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  dVar10 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_90 = param_1;
  _objc_msgSendSuper2(uVar8,uVar9,dVar10,uVar11,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112770b8c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar6 = (long)_DAT_112770b90;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c151d60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,dVar10,uVar11);
    lVar6 = (long)_DAT_112770b94;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar8);
    ((undefined8 *)((long)puVar1 + (long)_DAT_112770b98))[1] = 0x403e000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770b98) = 0x4008000000000000;
    auVar7 = NEON_fmov(0x3ff8000000000000,8);
    ((undefined8 *)((long)puVar1 + (long)_DAT_112770b9c))[1] = auVar7._8_8_;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770b9c) = auVar7._0_8_;
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bc85160();
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bf20c00(puVar1);
    uVar8 = _CGRectGetMidX();
    func_0x00010c17a6a0(uVar8,0x402e000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    uVar8 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c151d80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c22a660(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar9);
    _objc_release(uVar8);
    func_0x00010befbb60(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112770ba0) = 0;
    func_0x00010beacca0(puVar1);
    func_0x00010beaf0e0(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    *(undefined1 *)((long)puVar1 + (long)_DAT_112770ba8) = 0;
    puVar3 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00();
    if (puVar3 == (undefined *)0x1) {
      *(undefined8 *)((long)puVar1 + (long)_DAT_112770bac) = 0x4000000000000000;
    }
    *(undefined1 *)((long)puVar1 + (long)_DAT_112770bb0) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770bb4) = 0x402c000000000000;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    *(double *)((long)puVar1 + (long)_DAT_112770bb8) = (dVar10 * 80.0) / 375.0;
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e8df14; end: 107e8df1b; +[SCTableIndex indexViewWidth] */

undefined8 FUN_107e8df14(void)

{
  return 0x4034000000000000;
}



/* Entry: 107e8df1c; end: 107e8dfdf; -[SCTableIndex _setupPressedStateLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8df1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112770ba4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112770b8c);
  func_0x00010c151dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107e8dfe0; end: 107e8e047; -[SCTableIndex _setupGestureRecognizers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8dfe0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d80d8;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112770bbc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8340(0x3fb99999a0000000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107e8e048; end: 107e8e04f; -[SCTableIndex gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107e8e048(void)

{
  return 1;
}



/* Entry: 107e8e050; end: 107e8e1cf; -[SCTableIndex _tableIndexGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e050(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_5);
  lVar7 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,lVar7);
  dVar9 = param_2;
  _objc_release(lVar7);
  func_0x00010bfb68e0(param_3);
  _CGRectGetHeight();
  param_1 = param_2 / param_1;
  dVar10 = 0.0;
  if ((0.0 <= param_1) && (dVar9 = 1.0, dVar10 = param_1, 1.0 < param_1)) {
    dVar10 = 1.0;
  }
  lVar7 = param_5;
  func_0x00010c252440();
  lVar5 = param_3;
  if ((lVar7 == 3) || (lVar7 = param_5, func_0x00010c252440(), lVar7 == 4)) {
    lVar7 = (long)_DAT_112770bc0;
    *(undefined1 *)(param_3 + lVar7) = 0;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76c00();
  }
  else {
    lVar7 = (long)_DAT_112770bc0;
    *(undefined1 *)(param_3 + lVar7) = 1;
    lVar4 = param_5;
    func_0x00010c252440();
    if (lVar4 == 1) {
      func_0x00010c151de0(param_3);
      dVar8 = dVar9 + 15.0 + 25.0;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (dVar9 + 15.0 + -25.0 <= param_2) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_2) && !NAN(dVar8)) {
          bVar1 = param_2 < dVar8;
          bVar2 = param_2 == dVar8;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) goto LAB_107e8e11c;
    }
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152680(dVar10);
  }
  _objc_release(lVar5);
LAB_107e8e11c:
  if (*(char *)(param_3 + lVar7) == '\x01') {
    bVar6 = *(byte *)(param_3 + _DAT_112770bc4) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  func_0x00010c239b80(param_3,param_4,bVar6 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107e8e1d0; end: 107e8e25f; -[SCTableIndex showScrollDaggerWithPressedState:] */

void FUN_107e8e1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if ((int)param_3 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6bc0();
    _objc_release(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateScrollBarPressedState_lab_112595578,param_3,0,0);
  return;
}



/* Entry: 107e8e260; end: 107e8e2c3;  */

void FUN_107e8e260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be9bda0(uVar1);
  func_0x00010bedef40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e8e2c4; end: 107e8e337; -[SCTableIndex showFastScrollingScrollDagger] */

void FUN_107e8e2c4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6bc0();
  _objc_release(param_1);
  return;
}



/* Entry: 107e8e338; end: 107e8e3fb;  */

void FUN_107e8e338(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be9bda0();
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else if (lVar1 == 6) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else if (lVar1 == 4) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    if (lVar1 != 3) goto LAB_107e8e3e8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010bedef40(uVar3);
LAB_107e8e3e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e8e3fc; end: 107e8e413; -[SCTableIndex showingScrollDagger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107e8e3fc(long param_1)

{
  return *(long *)(param_1 + _DAT_112770bc8) != 0;
}



/* Entry: 107e8e414; end: 107e8e4fb; -[SCTableIndex pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e414(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  long lStack_70;
  undefined *puStack_68;
  
  uVar1 = 0;
  puStack_68 = PTR_PTR_1126fb820;
  dVar5 = param_1;
  uVar4 = param_2;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_pointInside_withEvent__11261e4e8);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_5;
    func_0x00010c23b240();
    lVar3 = (long)_DAT_112770b94;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    if ((int)lVar2 == 0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
      dVar5 = dVar5 - param_3;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
      param_3 = param_3 + param_3;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    }
    _CGRectContainsPoint(dVar5,uVar4,param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 107e8e4fc; end: 107e8e50b; -[SCTableIndex draggingScrollBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e8e4fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770bc0);
}



/* Entry: 107e8e50c; end: 107e8e51b; -[SCTableIndex updateScrollBarWithContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e50c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112770bcc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107e8e51c; end: 107e8e52b; -[SCTableIndex scrollBarPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770b94),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 107e8e52c; end: 107e8e757; -[SCTableIndex _updateScrollBarPressedState:labelText:scrollBarStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e52c(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112770ba0;
  if ((*(byte *)(param_1 + lVar5) == param_3) &&
     (uVar1 = param_1, func_0x00010be471e0(param_1,param_2,param_4), (uVar1 & 1) != 0))
  goto LAB_107e8e730;
  lVar6 = (long)_DAT_112770bc8;
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112770ba4);
  if ((param_5 - 7U < 0xfffffffffffffffc) && (param_5 == *(long *)(param_1 + lVar6))) {
    func_0x00010c212f20(uVar2,param_2,param_4);
    lVar5 = (long)_DAT_112770bd0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = param_4;
    _objc_release(uVar2);
    goto LAB_107e8e730;
  }
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar4 = (uint)uVar3;
  if ((param_5 == *(long *)(param_1 + lVar6)) && ((param_5 - 5U < 2 & uVar4) != 0))
  goto LAB_107e8e730;
  func_0x00010bed12e0(param_1);
  if (param_5 < 2) {
    if (param_5 == 0) {
      func_0x00010be3d020(param_1);
    }
    else if (param_5 == 1) {
      func_0x00010be3ce60(param_1,param_2,param_4);
    }
    else {
LAB_107e8e66c:
      func_0x00010be3cce0(param_1,param_2,param_4,param_5);
    }
  }
  else if (param_5 == 2) {
    func_0x00010be3ce40(param_1,param_2,param_4);
  }
  else {
    if (param_5 != 5) goto LAB_107e8e66c;
    func_0x00010be3ce80(param_1,param_2,param_4);
  }
  if (param_5 - 7U < 0xfffffffffffffffe) {
    uVar4 = 1;
  }
  if ((param_5 != *(long *)(param_1 + lVar6)) || ((uVar4 & 1) == 0)) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107e8e758;
    puStack_70 = &UNK_110842e18;
    uStack_68 = param_1;
    func_0x00010bf03460(0x3fe0000000000000,0,0x3fe999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_2,6,&puStack_88,0);
  }
  *(char *)(param_1 + lVar5) = (char)param_3;
  lVar5 = (long)_DAT_112770bd0;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_4;
  _objc_release(uVar2);
  *(long *)(param_1 + lVar6) = param_5;
LAB_107e8e730:
  _objc_release(param_4);
  return;
}



/* Entry: 107e8e758; end: 107e8e75f;  */

void FUN_107e8e758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107e8e760; end: 107e8e7e7; -[SCTableIndex _lastUpdateLabelEqualToString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107e8e760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = (long)_DAT_112770bd0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c078c00(puVar1,param_2,uVar2);
  if ((int)puVar1 == 0) {
    puVar1 = *(undefined **)(param_1 + lVar3);
    func_0x00010c0720c0(puVar1,param_2,param_3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107e8e7e8; end: 107e8e847; -[SCTableIndex _pressedScrollBarStyleForLabelText:] */

undefined8 FUN_107e8e7e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c08fa60();
    uVar3 = 1;
    if (lVar2 == 1) {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107e8e848; end: 107e8e8fb; -[SCTableIndex _scrollBarStyleForLabelText:pressed:isSectionHeader:] */

undefined8
FUN_107e8e848(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    if ((param_4 == 0) || ((param_5 & 1) == 0)) {
      if (((param_4 & 1) == 0) && (param_5 != 0)) {
        uVar3 = 6;
      }
      else {
        lVar2 = param_3;
        func_0x00010c08fa60();
        if ((param_4 == 0) || (lVar2 != 1)) {
          lVar2 = param_3;
          func_0x00010c08fa60();
          uVar3 = 3;
          if (lVar2 == 1) {
            uVar3 = 4;
          }
          if (param_4 != 0) {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 2;
        }
      }
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107e8e8fc; end: 107e8e91b; -[SCTableIndex _uninstallScrollBarConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e8fc(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112770bd4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770ba4),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107e8e91c; end: 107e8e94b; -[SCTableIndex _installUnpressedScrollBarConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e91c(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (long)_DAT_112770b98;
  ((undefined8 *)(param_1 + lVar1))[1] = 0x403e000000000000;
  *(undefined8 *)(param_1 + lVar1) = 0x4008000000000000;
  lVar1 = (long)_DAT_112770b9c;
  auVar2 = NEON_fmov(0x3ff8000000000000,8);
  ((undefined8 *)(param_1 + lVar1))[1] = auVar2._8_8_;
  *(undefined8 *)(param_1 + lVar1) = auVar2._0_8_;
  *(undefined8 *)(param_1 + _DAT_112770bd4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107e8e94c; end: 107e8e9df; -[SCTableIndex _installPressedRecentUpdatesConstraintsWithLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e94c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_112770b8c;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  _objc_retain(param_4);
  func_0x00010c151e00(uVar1);
  func_0x00010be9bd80(param_2);
  dVar3 = -param_1;
  func_0x00010c151e00(*(undefined8 *)(param_2 + lVar2));
  func_0x00010be3ccc0(0x4040800000000000,param_1,dVar3,0x4018000000000000,0x4008000000000000,param_2
                     );
  func_0x00010be3cea0(param_2,param_3,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e8e9e0; end: 107e8ea73; -[SCTableIndex _installPressedAllUpdatesConstraintsWithLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8e9e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_112770b8c;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  _objc_retain(param_4);
  func_0x00010c151e00(uVar1);
  func_0x00010be9bd80(param_2);
  dVar3 = -param_1;
  func_0x00010c151e00(*(undefined8 *)(param_2 + lVar2));
  func_0x00010be3ccc0(0x4040800000000000,param_1,dVar3,0x4018000000000000,0x4008000000000000,param_2
                     );
  func_0x00010be3cea0(param_2,param_3,param_4,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e8ea74; end: 107e8eaff; -[SCTableIndex _installPressedSectionHeaderConstraintsWithLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ea74(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010beeae40(param_2,param_3,param_4);
  param_1 = param_1 + *(double *)(param_2 + _DAT_112770bb8);
  dVar1 = param_1;
  func_0x00010be9bd80(param_1,param_2);
  func_0x00010be3ccc0(0x4040800000000000,param_1,-dVar1,0x4018000000000000,0x4008000000000000,
                      param_2);
  func_0x00010be3cea0(param_2,param_3,param_4,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e8eb00; end: 107e8eb87; -[SCTableIndex _installFastScrollingConstraintsWithLabelText:barStyle:] */

void FUN_107e8eb00(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010beeae40(param_2,param_3,param_4);
  dVar1 = param_1;
  func_0x00010be9bd80(param_2);
  func_0x00010be3ccc0(0x4040800000000000,param_1,-dVar1,0x4018000000000000,0x4008000000000000,
                      param_2);
  func_0x00010be3cea0(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e8eb88; end: 107e8eecf; -[SCTableIndex _widthForFastScrollingPopout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107e8eb88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = (long)_DAT_112770bd8;
  if (*(double *)(param_1 + lVar11) == 0.0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ec1ad8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec1ad8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec1af8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec1af8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110ec1b18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec1b18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar6 = &PTR____CFConstantStringClassReference_110ec1b38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec1b38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar12);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    dVar13 = 0.0;
    _objc_retain(puVar8);
    puVar4 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar4 == (undefined *)0x0) {
      dVar15 = 9.0;
    }
    else {
      dVar15 = 0.0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar8);
          }
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          dVar13 = 14.0;
          puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a51a0(puVar7);
          _objc_release(puVar9);
          if (dVar15 <= dVar13) {
            dVar15 = dVar13;
          }
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar4 = puVar8;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      dVar13 = 9.0;
      dVar15 = dVar15 + 9.0;
    }
    _objc_release(puVar8);
    func_0x00010c151da0(*(undefined8 *)(param_1 + _DAT_112770b8c));
    if (dVar13 <= dVar15) {
      dVar13 = dVar15;
    }
    *(double *)(param_1 + lVar11) = dVar13;
    _objc_release(puVar8);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  dVar15 = 14.0;
  puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a51a0(puVar4);
  _objc_release(puVar12);
  dVar14 = *(double *)(param_1 + lVar11);
  dVar13 = dVar15 + 9.0;
  if (dVar15 + 9.0 <= dVar14) {
    dVar13 = dVar14;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return dVar13;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00();
  dVar13 = 2.0 - dVar14 * 0.5;
  if (puVar4 != (undefined *)0x1) {
    dVar13 = dVar14 * 0.5 + -2.0;
  }
  return dVar13;
}



/* Entry: 107e8eed0; end: 107e8ef17; -[SCTableIndex _scrollBarCenterXOffsetForWidth:] */

double FUN_107e8eed0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_3,param_2);
  dVar2 = 2.0 - param_1 * 0.5;
  if (puVar1 != (undefined *)0x1) {
    dVar2 = param_1 * 0.5 + -2.0;
  }
  return dVar2;
}



/* Entry: 107e8ef18; end: 107e8ef87; -[SCTableIndex _installPressedStateLabelWithLabelText:scrollBarStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ef18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770ba4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar1,param_2,0);
  func_0x00010beddbe0(param_1,param_2,param_4);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e8ef88; end: 107e8f02b; -[SCTableIndex _updatePressedStateLabelWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8ef88(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_3 & 0xfffffffffffffffd) == 1) {
    uVar2 = 0x402c000000000000;
LAB_107e8efd0:
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(uVar2,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_3 == 4) || (param_3 == 2)) {
      uVar2 = 0x4033000000000000;
      goto LAB_107e8efd0;
    }
    if (1 < param_3 - 5) goto LAB_107e8effc;
    puVar1 = param_1;
    func_0x00010c155e40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_112770ba4));
  _objc_release(puVar1);
LAB_107e8effc:
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107e8f02c; end: 107e8f03b; -[SCTableIndex supportsRTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e8f02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c263b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770b8c),PTR_s_supportsRTL_1126768e8);
  return;
}


