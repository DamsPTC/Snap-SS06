/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c89400; end: 106c895db;  */

void FUN_106c89400(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar6 * 8);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      _objc_retain(puVar2);
      func_0x00010c0c0060(uVar7);
      _objc_release(puVar2);
      _objc_release(uVar8);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dcd0);
  func_0x00010c246ba0(puVar2);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dcd0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  lVar3 = *(long *)(param_2 + 0x28);
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
  if ((int)lVar3 != 0) {
    puVar2 = PTR_PTR_1126b5438;
    func_0x00010c244880(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106c895dc; end: 106c89663;  */

void FUN_106c895dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5438;
    func_0x00010c244880(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c89664; end: 106c8966b;  */

void FUN_106c89664(void)

{
  return;
}



/* Entry: 106c8966c; end: 106c8975f;  */

void FUN_106c8966c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c89760;
  puStack_58 = &UNK_1108d5990;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  ppuVar2 = &puStack_70;
  _objc_retainBlock();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c89894;
  puStack_80 = &UNK_11096d9f0;
  ppuStack_78 = ppuVar2;
  _objc_retain();
  ppuVar3 = &puStack_98;
  _objc_retainBlock(ppuVar3);
  _objc_release(ppuStack_78);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106c89760; end: 106c89893;  */

uint FUN_106c89760(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010901ca64();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) == 0) {
        iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
        uVar3 = param_2;
        func_0x00010c2923e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        if (iVar7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          uVar4 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900(uVar6);
          _objc_release(uVar4);
          uVar5 = (uint)uVar6 ^ 1;
        }
        _objc_release(uVar3);
      }
      else {
        uVar5 = 0;
      }
      _objc_release(uVar2);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106c89894; end: 106c89a6f;  */

void FUN_106c89894(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar6 * 8);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      _objc_retain(puVar2);
      func_0x00010c0c0060(uVar7);
      _objc_release(puVar2);
      _objc_release(uVar8);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dcb0);
  func_0x00010c246ba0(puVar2);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dcb0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  lVar3 = *(long *)(param_2 + 0x28);
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
  if ((int)lVar3 != 0) {
    puVar2 = PTR_PTR_1126b5438;
    func_0x00010c244880(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106c89a70; end: 106c89afb;  */

void FUN_106c89a70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5438;
    func_0x00010c244880(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c89afc; end: 106c89b03;  */

void FUN_106c89afc(void)

{
  return;
}



/* Entry: 106c89b04; end: 106c89c4b;  */

void FUN_106c89b04(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  if (*(undefined **)(param_1 + 0x20) < puVar1) {
    puVar1 = param_2;
    func_0x00010c25e980(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c89c4c; end: 106c89d73;  */

undefined1 FUN_106c89c4c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0060(param_2);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c89d74; end: 106c89da7;  */

void FUN_106c89d74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar1;
  return;
}



/* Entry: 106c89da8; end: 106c89dcf;  */

void FUN_106c89da8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106c89dd0; end: 106c89ee7;  */

void FUN_106c89dd0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  uStack_48 = 0x106c89e70;
  puStack_40 = &UNK_11096da80;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_2;
  func_0x00010c246ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c89ee8; end: 106c89f67;  */

void FUN_106c89ee8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106c89f68;
  puStack_30 = &UNK_11096daa0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106c89f68; end: 106c8a287;  */

void FUN_106c89f68(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
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
  lVar8 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(param_2);
        }
        uVar16 = *(ulong *)(lStack_1a8 + lVar13 * 8);
        puVar4 = PTR_PTR_1126b5438;
        func_0x00010c244880(PTR_PTR_1126b5438);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar16;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar16;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if (((param_4 ^ 1) & (uint)uVar7 & 1) == 0) {
            if (((param_5 | (uint)uVar7) & 1) == 0) {
              func_0x000100bf119c();
              uVar1 = (uint)uVar16;
              goto joined_r0x000106c8a108;
            }
            goto LAB_106c8a10c;
          }
        }
        else {
          _objc_release(uVar5);
          uVar1 = param_4 & 1;
joined_r0x000106c8a108:
          if (uVar1 != 0) {
LAB_106c8a10c:
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_3);
  puVar10 = &uStack_1f0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_1e0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1e0 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR_PTR_1126b5438;
        func_0x00010c07be00(*(undefined8 *)(lStack_1e8 + lVar13 * 8));
        func_0x00010c15a700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      puVar10 = &uStack_1f0;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = lVar8;
    _objc_retain(lVar8);
    _objc_retain(puVar10);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(lVar8);
    func_0x00010bffc4a0();
    _objc_retain(lVar8);
    uVar11 = 0x10;
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar8);
        }
        uVar11 = *(undefined8 *)(lVar17 * 8);
        _objc_retain(puVar10);
        _objc_retain(puVar4);
        _objc_retain(puVar4);
        _objc_retain(puVar4);
        func_0x00010c0c0060(uVar11);
        _objc_release(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar4);
        _objc_release(puVar10);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      uVar11 = 0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      _objc_retain(lVar15);
      _objc_retain(uVar11);
      lVar3 = lVar15;
      func_0x00010c2923e0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *(long *)(lVar8 + 0x20);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR_PTR_1126b5438;
      uVar14 = *(undefined8 *)(lVar8 + 0x28);
      if (lVar13 == 0) {
        func_0x00010befa120(uVar14);
      }
      else {
        uVar9 = *(undefined8 *)(lVar8 + 0x20);
        func_0x00010c0e00e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c244880(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar14);
        _objc_release(puVar2);
        _objc_release(uVar9);
      }
      _objc_release(lVar3);
      _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar15);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c8a288; end: 106c8a4af;  */

void FUN_106c8a288(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_2);
  func_0x00010bffc4a0();
  _objc_retain(param_2);
  uVar6 = 0x10;
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(param_3);
      _objc_retain(puVar1);
      _objc_retain(puVar1);
      _objc_retain(puVar1);
      func_0x00010c0c0060(uVar6);
      _objc_release(puVar1);
      _objc_release(puVar1);
      _objc_release(puVar1);
      _objc_release(param_3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    uVar6 = 0x10;
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(uVar6);
  lVar2 = lVar5;
  func_0x00010c2923e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126b5438;
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  if (lVar3 == 0) {
    func_0x00010befa120(uVar8);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8);
    _objc_release(puVar1);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106c8a4b0; end: 106c8a5bf;  */

void FUN_106c8a4b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126b5438;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (lVar2 == 0) {
    func_0x00010befa120(uVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c8a5c0; end: 106c8a5d7;  */

void FUN_106c8a5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c8a5d8; end: 106c8a7ff;  */

void FUN_106c8a5d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_2);
  func_0x00010bffc4a0();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_2);
  puVar4 = &uStack_150;
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_140;
    do {
      lVar7 = 0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lStack_148 + lVar7 * 8);
        _objc_retain(param_3);
        _objc_retain(puVar1);
        _objc_retain(puVar1);
        _objc_retain(puVar1);
        func_0x00010c0c0060(uVar5);
        _objc_release(puVar1);
        _objc_release(puVar1);
        _objc_release(puVar1);
        _objc_release(param_3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar4 = &uStack_150;
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  _objc_retain(puVar4);
  lVar2 = lVar3;
  func_0x00010c2923e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  if (lVar6 == 0) {
    func_0x00010befa120(uVar5);
  }
  else {
    puVar1 = PTR_PTR_1126b5438;
    func_0x00010c244880(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106c8a800; end: 106c8a907;  */

void FUN_106c8a800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x00010befa120(uVar5);
  }
  else {
    puVar4 = PTR_PTR_1126b5438;
    func_0x00010c244880(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c8a908; end: 106c8a91f;  */

void FUN_106c8a908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c8a920; end: 106c8aa87;  */

void FUN_106c8a920(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126b5438;
        func_0x00010bf49de0(PTR_PTR_1126b5438);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    puVar3 = param_2;
    ___stack_chk_fail();
    pcStack_128 = FUN_106c8aa88;
    puStack_140 = puVar1;
    lStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_106c8ab14;
    puStack_150 = &UNK_1108ebe60;
    puStack_148 = (undefined1 *)puVar4;
    _objc_retain(puVar4);
    func_0x0001006372a4(puVar3,&puStack_168);
    _objc_release(puStack_148);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c8aa88; end: 106c8ab13;  */

void FUN_106c8aa88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106c8ab14;
  puStack_30 = &UNK_1108ebe60;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c8ab14; end: 106c8ac77;  */

undefined1 FUN_106c8ab14(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0060(param_2);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c8ac78; end: 106c8ad7f;  */

void FUN_106c8ac78(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c8ad80; end: 106c8ae07;  */

void FUN_106c8ad80(undefined8 param_1,undefined1 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106c8ae08;
  puStack_38 = &UNK_11096dc20;
  uStack_30 = param_1;
  uStack_28 = param_2;
  _objc_retain(param_1);
  _objc_retainBlock(&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106c8ae08; end: 106c8ae9b;  */

void FUN_106c8ae08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1e30;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04e820();
  _objc_release(param_3);
  uVar2 = param_2;
  FUN_106c8b83c(param_2,puVar1,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c8ae9c; end: 106c8af33;  */

void FUN_106c8ae9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_2);
  uVar1 = param_3;
  FUN_106c8b0c8(param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c246ba0(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c8af34; end: 106c8b043;  */

ulong FUN_106c8af34(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  FUN_106c874dc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_106c874dc();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar5 = (ulong)(uVar2 != 0);
    if (uVar1 != 0) {
      uVar5 = 0xffffffffffffffff;
      goto LAB_106c8b008;
    }
  }
  else {
    uVar5 = uVar2;
    func_0x00010bf433a0();
  }
  if (uVar5 == 0) {
    uVar3 = param_2;
    FUN_106c872b0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    FUN_106c872b0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf32ee0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
LAB_106c8b008:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106c8b044; end: 106c8b0c7;  */

undefined8 FUN_106c8b044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  FUN_106c87b6c(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_106c87b6c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106c8b0c8; end: 106c8b173;  */

void FUN_106c8b0c8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  _objc_retain();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106c8b174;
  puStack_60 = &UNK_11096dcf0;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_2;
  uStack_47 = param_4;
  uStack_46 = param_5;
  _objc_retain(param_1);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106c8b174; end: 106c8b577;  */

undefined * FUN_106c8b174(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x30);
  cVar4 = *(char *)(param_1 + 0x31);
  bVar5 = *(byte *)(param_1 + 0x32);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = param_2;
  uVar6 = param_3;
  if (cVar4 == '\x01') {
    if ((lVar2 == 2) && ((bVar5 & 1) != 0)) goto LAB_106c8b1fc;
    puVar10 = (undefined *)0x0;
    if ((lVar2 != 1) || ((bVar3 & 1) == 0)) goto LAB_106c8b28c;
LAB_106c8b230:
    FUN_106c88120(param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106c88120(param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (bVar5 == 0) {
      if (bVar3 == 0) {
        puVar10 = (undefined *)0x0;
        goto LAB_106c8b28c;
      }
      goto LAB_106c8b230;
    }
LAB_106c8b1fc:
    FUN_106c88394(param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106c88394(param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR_PTR_1126b60f8;
  _objc_alloc();
  func_0x00010c0134e0();
  _objc_release(uVar6);
  _objc_release(puVar9);
LAB_106c8b28c:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
  if (puVar10 == (undefined *)0x0) {
    puVar9 = param_2;
    func_0x000106c8b378(param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar7 = puVar10;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar7 == (undefined *)0x0) || (puVar8 == (undefined *)0x0)) {
      puVar9 = (undefined *)(ulong)(puVar8 != (undefined *)0x0);
      if (puVar7 != (undefined *)0x0) {
        puVar9 = (undefined *)0xffffffffffffffff;
      }
    }
    else {
      puVar9 = puVar8;
      func_0x00010bf433a0();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = param_2;
        func_0x000106c8b378(param_2,param_3,*(undefined8 *)(param_1 + 0x20));
      }
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar10);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar9;
}



/* Entry: 106c8b578; end: 106c8b7df;  */

undefined * FUN_106c8b578(undefined *param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(param_1);
    puVar2 = param_1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_150;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_150 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          lVar6 = *(long *)(lStack_158 + (long)puVar8 * 8);
          ppuVar3 = param_2;
          (*(code *)param_2[2])(param_2,lVar6);
          if (ppuVar3 != (undefined **)0x0) {
            FUN_106c870c0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 != 0) {
              puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1);
              _objc_release(puVar4);
            }
            _objc_release(lVar6);
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = param_1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_1);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_106c8b7e0;
    puStack_170 = &UNK_1108ebe60;
    ppuVar3 = &puStack_188;
    puVar8 = param_1;
    puStack_168 = puVar1;
    func_0x0001006372a4(param_1,ppuVar3);
    _objc_retain(puVar1);
    puStack_120 = puVar2;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106c8ba80;
    puStack_108 = &UNK_1108cb3b8;
    ppuVar5 = &puStack_120;
    puStack_100 = puVar1;
    _objc_retainBlock(ppuVar5);
    _objc_release(puStack_100);
    puVar2 = puVar8;
    func_0x00010c246ca0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lVar7 = *(long *)(param_1 + 0x20);
    FUN_106c870c0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar3);
    return (undefined *)(ulong)(lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 106c8b7e0; end: 106c8b83b;  */

bool FUN_106c8b7e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_106c870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 106c8b83c; end: 106c8b903;  */

void FUN_106c8b83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106c8b904;
  puStack_50 = &UNK_11096dd20;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_2);
  FUN_106c8b578(param_1,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c8b904; end: 106c8b917;  */

undefined8 FUN_106c8b904(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc0000000;
  pcStack_78 = FUN_106c87e7c;
  puStack_70 = &UNK_11096d740;
  ppuVar4 = &puStack_88;
  uStack_68 = uVar3;
  _objc_retainBlock();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010c0c0060(param_2);
  uVar5 = puStack_a0[3];
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(ppuVar4);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(ppuVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106c8b918; end: 106c8ba7f;  */

ulong FUN_106c8b918(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  FUN_106c88af4(param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  FUN_106c88af4(param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_2 == 0 || lVar1 == 0) {
    uVar2 = (ulong)(lVar1 != 0);
    if (param_2 != 0) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = param_2;
    func_0x00010bf433a0(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106c8ba80; end: 106c8bb93;  */

undefined8 FUN_106c8ba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar3 = param_2;
  FUN_106c870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c2827c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = param_3;
  FUN_106c870c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2827c0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (uVar4 <= uVar1 && uVar1 != uVar4) {
    uVar3 = 0xffffffffffffffff;
  }
  else if (uVar4 <= uVar1) {
    FUN_106c8af34();
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106c8bb94; end: 106c8bc1b;  */

undefined8 FUN_106c8bb94(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010c150d60(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
  return param_2;
}



/* Entry: 106c8bc1c; end: 106c8bf17;  */

long FUN_106c8bc1c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar4 = lVar2;
  func_0x00010c08fa60();
  lVar6 = lVar3;
  if (lVar4 != 0) {
    lVar6 = lVar2;
  }
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010c08fa60();
  lVar4 = 0;
  if (lVar7 != 0) {
    lVar4 = lVar3;
  }
  _objc_retain(lVar4);
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
LAB_106c8bd34:
    lVar7 = 0;
    goto LAB_106c8bd80;
  }
  lVar7 = lVar6;
  func_0x00010c09e780();
  if (lVar7 == 0) {
    lVar7 = lVar6;
    func_0x00010c08fa60();
    lVar5 = param_2;
    func_0x00010c08fa60();
    bVar1 = lVar7 == lVar5;
    lVar7 = 8;
LAB_106c8bd7c:
    if (bVar1) {
      lVar7 = lVar7 + 1;
    }
  }
  else {
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      if (lVar7 == 0x7fffffffffffffff) goto LAB_106c8bd34;
LAB_106c8bd3c:
      lVar7 = lVar6;
      func_0x00010bf35920();
      if ((int)lVar7 == 0x20) {
        lVar7 = 5;
        goto LAB_106c8bd80;
      }
    }
    else {
      lVar5 = lVar4;
      func_0x00010c09e780();
      if (lVar5 == 0) {
        lVar7 = lVar4;
        func_0x00010c08fa60();
        lVar5 = param_2;
        func_0x00010c08fa60();
        bVar1 = lVar7 == lVar5;
        lVar7 = 6;
        goto LAB_106c8bd7c;
      }
      if (lVar7 != 0x7fffffffffffffff) goto LAB_106c8bd3c;
      if (lVar5 == 0x7fffffffffffffff) goto LAB_106c8bd34;
    }
    lVar7 = 2;
  }
LAB_106c8bd80:
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return lVar7;
}



/* Entry: 106c8bf18; end: 106c8bf9f;  */

undefined8 FUN_106c8bf18(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010c150d60(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
  return param_2;
}



/* Entry: 106c8bfa0; end: 106c8bfa7;  */

undefined8 FUN_106c8bfa0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = lVar5;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09e780();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010c08fa60();
    lVar4 = param_2;
    func_0x00010c08fa60();
    uVar6 = 8;
    if (lVar2 == lVar4) {
      uVar6 = 9;
    }
    goto LAB_106c8bee8;
  }
  lVar4 = lVar5;
  func_0x00010901d778();
  if ((int)lVar4 == 0) {
    if (lVar2 == 0x7fffffffffffffff) {
LAB_106c8be94:
      uVar6 = 0;
      goto LAB_106c8bee8;
    }
LAB_106c8be9c:
    lVar2 = lVar1;
    func_0x00010bf35920();
    if ((int)lVar2 == 0x20) {
      uVar6 = 5;
      goto LAB_106c8bee8;
    }
  }
  else {
    lVar4 = lVar5;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c09e780();
    if (lVar3 == 0) {
      lVar2 = lVar4;
      func_0x00010c08fa60();
      lVar3 = param_2;
      func_0x00010c08fa60();
      uVar6 = 6;
      if (lVar2 == lVar3) {
        uVar6 = 7;
      }
      _objc_release(lVar4);
      goto LAB_106c8bee8;
    }
    _objc_release(lVar4);
    if (lVar2 != 0x7fffffffffffffff) goto LAB_106c8be9c;
    if (lVar3 == 0x7fffffffffffffff) goto LAB_106c8be94;
  }
  uVar6 = 2;
LAB_106c8bee8:
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(lVar5);
  return uVar6;
}



/* Entry: 106c8bfa8; end: 106c8c027;  */

void FUN_106c8bfa8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106c8c028;
  puStack_30 = &UNK_1108ed640;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106c8c028; end: 106c8c157;  */

undefined ** FUN_106c8c028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c2827c0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (uVar5 <= uVar2 && uVar2 != uVar5) {
    ppuVar4 = (undefined **)0xffffffffffffffff;
  }
  else if (uVar5 <= uVar2) {
    ppuVar4 = &PTR___NSConcreteGlobalBlock_110ad4840;
    _objc_retain(&PTR___NSConcreteGlobalBlock_110ad4840);
    func_0x00010901f2dc(&PTR___NSConcreteGlobalBlock_110ad4840,param_2,param_3);
    _objc_release(&PTR___NSConcreteGlobalBlock_110ad4840);
  }
  else {
    ppuVar4 = (undefined **)0x1;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return ppuVar4;
}



/* Entry: 106c8c158; end: 106c8c2af;  */

void FUN_106c8c158(undefined *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106c8c2b8;
    puStack_68 = &UNK_11096dda0;
    uStack_58 = param_3;
    _objc_retain(param_2);
    puVar1 = param_1;
    uStack_60 = param_2;
    func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_11096dd80,&puStack_80);
    puStack_a8 = puVar2;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106c8c368;
    puStack_90 = &UNK_11085a548;
    puStack_88 = puVar1;
    _objc_retain();
    puVar2 = param_1;
    func_0x0001006372a4(param_1,&puStack_a8);
    puVar3 = puVar1;
    FUN_106c8bfa8(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c246ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_88);
    _objc_release(puVar1);
    _objc_release(uStack_60);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c8c2b0; end: 106c8c2b7;  */

void FUN_106c8c2b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 106c8c2b8; end: 106c8c367;  */

void FUN_106c8c2b8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = PTR_PTR_1126d1e30;
    _objc_alloc(PTR_PTR_1126d1e30);
    func_0x00010c04e820();
    lVar2 = param_2;
    FUN_106c8bf18(param_2,puVar1);
    _objc_release(puVar1);
    if (lVar2 == 0) {
      puVar1 = (undefined *)0x0;
      goto LAB_106c8c34c;
    }
  }
  else {
    lVar2 = param_2;
    func_0x000106c8bdc8(param_2,*(undefined8 *)(param_1 + 0x20));
    puVar1 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_106c8c34c;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
LAB_106c8c34c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c8c368; end: 106c8c40b;  */

bool FUN_106c8c368(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 106c8c40c; end: 106c8c9a3;  */

undefined ** FUN_106c8c40c(undefined **param_1,undefined **param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  ppuVar9 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_2);
  ppuVar11 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    ppuVar11 = ppuVar1;
    ppuVar9 = param_2;
    func_0x00010c09e780();
    if (ppuVar11 == (undefined **)0x7fffffffffffffff) {
      ppuVar11 = (undefined **)0x0;
    }
    else if (ppuVar11 == (undefined **)0x0) {
      ppuVar2 = ppuVar1;
      func_0x00010c08fa60();
      ppuVar13 = param_2;
      func_0x00010c08fa60();
      ppuVar11 = (undefined **)0x6;
      if (ppuVar2 == ppuVar13) {
        ppuVar11 = (undefined **)0x7;
      }
    }
    else {
      ppuVar9 = (undefined **)((long)ppuVar11 + -1);
      ppuVar2 = ppuVar1;
      func_0x00010bf35920();
      ppuVar11 = (undefined **)0x5;
      if ((int)ppuVar2 != 0x20) {
        ppuVar11 = (undefined **)0x2;
      }
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  if (ppuVar11 == (undefined **)0x0) {
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    ppuVar3 = param_1;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    ppuVar3 = param_1;
    if (ppuVar9 == (undefined **)0x1) {
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar3;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = puVar4;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x106c8c3c4;
      puStack_d8 = &UNK_11096ddd0;
      ppuStack_d0 = param_3;
      _objc_retain(param_3);
      ppuVar1 = ppuVar3;
      func_0x0001006372a4(ppuVar3,&puStack_f0);
      _objc_release(ppuStack_d0);
      _objc_release(param_3);
    }
    _objc_release(ppuVar3);
    puStack_198 = puVar4;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_106c8ca64;
    puStack_180 = &UNK_11096de30;
    _objc_retain(param_1);
    ppuVar3 = &puStack_198;
    ppuVar2 = ppuVar1;
    ppuStack_178 = param_1;
    func_0x000100504554();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain(ppuVar1);
    ppuVar11 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      lVar10 = *plStack_1d0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_1d0 != lVar10) {
            _objc_enumerationMutation(ppuVar1);
          }
          lVar12 = *(long *)(lStack_1d8 + (long)ppuVar13 * 8);
          lVar5 = lVar12;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar12;
            if (lVar12 != 0) goto LAB_106c8c6f4;
          }
          else {
LAB_106c8c6f4:
            func_0x00010befa120(puVar4);
            lVar12 = lVar5;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar4);
            _objc_release(lVar12);
            _objc_release(lVar5);
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar11 != ppuVar13);
        ppuVar11 = ppuVar1;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    ppuVar11 = ppuVar1;
    _objc_release(ppuVar1);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar9 == (undefined **)0x1) {
      FUN_106c8cbc4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      func_0x00010befa120(puVar4);
      _objc_release(puVar6);
    }
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    puStack_220 = (undefined *)0x0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    _objc_retain(puVar4);
    ppuVar9 = &puStack_220;
    puVar6 = puVar4;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar10 = *plStack_210;
      do {
        puVar14 = (undefined *)0x0;
        do {
          ppuVar11 = ppuVar3;
          if (*plStack_210 != lVar10) {
            _objc_enumerationMutation(puVar4);
            ppuVar11 = ppuVar3;
          }
          puVar15 = *(undefined **)(lStack_218 + (long)puVar14 * 8);
          puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c265a40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar15;
          ppuVar9 = param_2;
          func_0x00010c11f440();
          ppuVar3 = ppuVar11;
          if (puVar7 == (undefined *)0x7fffffffffffffff) {
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25cf60();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar8;
            ppuVar9 = param_2;
            func_0x00010c11f440();
            ppuVar3 = ppuVar11;
            _objc_release(puVar8);
          }
          _objc_release(puVar15);
          if (puVar7 == (undefined *)0x0 && ppuVar11 != (undefined **)0x0) {
            ppuVar11 = (undefined **)0x1;
            goto LAB_106c8c904;
          }
          puVar14 = puVar14 + 1;
        } while (puVar6 != puVar14);
        ppuVar9 = &puStack_220;
        puVar6 = puVar4;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    ppuVar11 = (undefined **)0x0;
LAB_106c8c904:
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_178);
    _objc_release(ppuVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar9);
  _objc_retain(param_1);
  func_0x00010c150d60(ppuVar3);
  _objc_release(ppuVar9);
  _objc_release(param_1);
  _objc_release(ppuVar9);
  _objc_release(param_1);
  return ppuVar3;
}



/* Entry: 106c8c9a4; end: 106c8ca57;  */

undefined8 FUN_106c8c9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c150d60(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_2;
}



/* Entry: 106c8ca58; end: 106c8ca63;  */

undefined ** FUN_106c8ca58(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  long lStack_70;
  
  ppuVar10 = *(undefined ***)(param_1 + 0x20);
  ppuVar1 = *(undefined ***)(param_1 + 0x28);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  ppuVar11 = ppuVar1;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(ppuVar1);
  ppuVar2 = ppuVar10;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_2);
  ppuVar13 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar13 = ppuVar2;
    ppuVar11 = param_2;
    func_0x00010c09e780();
    if (ppuVar13 == (undefined **)0x7fffffffffffffff) {
      ppuVar13 = (undefined **)0x0;
    }
    else if (ppuVar13 == (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      func_0x00010c08fa60();
      ppuVar15 = param_2;
      func_0x00010c08fa60();
      ppuVar13 = (undefined **)0x6;
      if (ppuVar3 == ppuVar15) {
        ppuVar13 = (undefined **)0x7;
      }
    }
    else {
      ppuVar11 = (undefined **)((long)ppuVar13 + -1);
      ppuVar3 = ppuVar2;
      func_0x00010bf35920();
      ppuVar13 = (undefined **)0x5;
      if ((int)ppuVar3 != 0x20) {
        ppuVar13 = (undefined **)0x2;
      }
    }
    _objc_release(ppuVar2);
  }
  _objc_release(param_2);
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  if (ppuVar13 == (undefined **)0x0) {
    _objc_retain(ppuVar10);
    _objc_retain(param_2);
    _objc_retain(ppuVar1);
    ppuVar4 = ppuVar10;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar4;
    func_0x00010bf529e0();
    _objc_release(ppuVar4);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    ppuVar4 = ppuVar10;
    if (ppuVar11 == (undefined **)0x1) {
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar4;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar1);
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = puVar5;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x106c8c3c4;
      puStack_d8 = &UNK_11096ddd0;
      ppuStack_d0 = ppuVar1;
      _objc_retain(ppuVar1);
      ppuVar2 = ppuVar4;
      func_0x0001006372a4(ppuVar4,&puStack_f0);
      _objc_release(ppuStack_d0);
      _objc_release(ppuVar1);
    }
    _objc_release(ppuVar4);
    puStack_198 = puVar5;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_106c8ca64;
    puStack_180 = &UNK_11096de30;
    _objc_retain(ppuVar10);
    ppuVar4 = &puStack_198;
    ppuVar3 = ppuVar2;
    ppuStack_178 = ppuVar10;
    func_0x000100504554();
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain(ppuVar2);
    ppuVar13 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar13 != (undefined **)0x0) {
      lVar12 = *plStack_1d0;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if (*plStack_1d0 != lVar12) {
            _objc_enumerationMutation(ppuVar2);
          }
          lVar14 = *(long *)(lStack_1d8 + (long)ppuVar15 * 8);
          lVar6 = lVar14;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar14;
            if (lVar14 != 0) goto LAB_106c8c6f4;
          }
          else {
LAB_106c8c6f4:
            func_0x00010befa120(puVar5);
            lVar14 = lVar6;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar5);
            _objc_release(lVar14);
            _objc_release(lVar6);
          }
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar13 != ppuVar15);
        ppuVar13 = ppuVar2;
        func_0x00010bf52a60();
      } while (ppuVar13 != (undefined **)0x0);
    }
    ppuVar13 = ppuVar2;
    _objc_release(ppuVar2);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar11 == (undefined **)0x1) {
      FUN_106c8cbc4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
    }
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    puStack_220 = (undefined *)0x0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    _objc_retain(puVar5);
    ppuVar11 = &puStack_220;
    puVar7 = puVar5;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar12 = *plStack_210;
      do {
        puVar16 = (undefined *)0x0;
        do {
          ppuVar13 = ppuVar4;
          if (*plStack_210 != lVar12) {
            _objc_enumerationMutation(puVar5);
            ppuVar13 = ppuVar4;
          }
          puVar17 = *(undefined **)(lStack_218 + (long)puVar16 * 8);
          puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c265a40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = puVar17;
          ppuVar11 = param_2;
          func_0x00010c11f440();
          ppuVar4 = ppuVar13;
          if (puVar8 == (undefined *)0x7fffffffffffffff) {
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25cf60();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar9;
            ppuVar11 = param_2;
            func_0x00010c11f440();
            ppuVar4 = ppuVar13;
            _objc_release(puVar9);
          }
          _objc_release(puVar17);
          if (puVar8 == (undefined *)0x0 && ppuVar13 != (undefined **)0x0) {
            ppuVar13 = (undefined **)0x1;
            goto LAB_106c8c904;
          }
          puVar16 = puVar16 + 1;
        } while (puVar7 != puVar16);
        ppuVar11 = &puStack_220;
        puVar7 = puVar5;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    ppuVar13 = (undefined **)0x0;
LAB_106c8c904:
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_178);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(param_2);
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar10);
  func_0x00010c150d60(ppuVar4);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  return ppuVar4;
}



/* Entry: 106c8ca64; end: 106c8cabb;  */

void FUN_106c8ca64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c8cabc; end: 106c8cbc3;  */

ulong FUN_106c8cabc(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar5 = (ulong)(uVar2 != 0);
    if (uVar1 != 0) {
      uVar5 = 0xffffffffffffffff;
      goto LAB_106c8cb94;
    }
  }
  else {
    uVar5 = uVar2;
    func_0x00010bf433a0();
  }
  if (uVar5 == 0) {
    uVar3 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf32ee0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
LAB_106c8cb94:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106c8cbc4; end: 106c8cbdb;  */

void FUN_106c8cbc4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e81498;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e81498,
                      &PTR____CFConstantStringClassReference_110e814b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106c8cbdc; end: 106c8ccf7; -[SCSearchTextQuery initWithString:] */

undefined8 * FUN_106c8cbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f60d8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1e38;
    _objc_opt_new(PTR_PTR_1126d1e38);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    _objc_retain();
    func_0x00010bf98100(puVar3);
    func_0x00010befa120(puVar4);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    uVar2 = puVar1[2];
    puVar1[2] = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c8ccf8; end: 106c8cd03;  */

void FUN_106c8ccf8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106c8cd04; end: 106c8ce6b; -[SCSearchTextQuery scoreWithTokenScorer:] */

ulong FUN_106c8cd04(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
LAB_106c8ce18:
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      lVar10 = 0;
      uVar8 = uVar7;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar9 = *(undefined8 *)(lVar10 * 8);
        uVar3 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,uVar9);
        uVar7 = uVar3;
        if (uVar3 <= uVar8) {
          uVar7 = uVar8;
        }
        lVar4 = *(long *)(param_1 + 0x10);
        func_0x00010bf529e0();
        if ((lVar4 != 1) && (func_0x00010c0720c0(), uVar3 == 0 && (int)uVar9 == 0))
        goto LAB_106c8ce18;
        lVar10 = lVar10 + 1;
        uVar8 = uVar7;
      } while (lVar2 != lVar10);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
  param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
  return param_3;
}



/* Entry: 106c8ce6c; end: 106c8ce9b; -[SCSearchTextQuery .cxx_destruct] */

void FUN_106c8ce6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c8ce9c; end: 106c8cf1b; -[SCSearchWordEnumerator init] */

undefined1 * FUN_106c8ce9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f60e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    _CFLocaleCopyCurrent();
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFStringTokenizerCreate(uVar3,0,0,0,0,puVar2);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _CFRelease(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c8cf1c; end: 106c8cf63; -[SCSearchWordEnumerator dealloc] */

void FUN_106c8cf1c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CFRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126f60e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106c8cf64; end: 106c8d05b; -[SCSearchWordEnumerator enumerateWordsInString:withBlock:] */

void FUN_106c8cf64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cStack_51;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = param_3;
  _CFStringGetLength(param_3);
  uVar3 = param_3;
  _CFStringTokenizerSetString(uVar5,param_3,0,uVar6);
  cStack_51 = '\0';
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  do {
    lVar1 = *(long *)(param_1 + 8);
    _CFStringTokenizerAdvanceToNextToken();
    if (lVar1 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 8);
    _CFStringTokenizerGetCurrentTokenRange(uVar2);
    uVar5 = uVar6;
    _CFStringCreateWithSubstring(uVar6,param_3,uVar2,uVar3);
    uVar4 = uVar5;
    (**(code **)(param_4 + 0x10))(param_4,uVar5,uVar2,uVar3,&cStack_51);
    _objc_release(uVar5);
    uVar3 = uVar4;
  } while (cStack_51 != '\x01');
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8d05c; end: 106c8d2ef; -[SCMatchaSendToLogger initWithCurrentPageTracker:blizzardLogger:grapheneLogger:inviteContactSectionLogger:loggerSource:userTrackedLogger:applicationWindow:applicationEvents:enableSelectableContacts:] */

undefined1 *
FUN_106c8d05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f60e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_9);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x9a) = param_11;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d1e40;
    _objc_alloc();
    func_0x00010c035020();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined **)((long)puVar1 + 0xa8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined **)((long)puVar1 + 0xe0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xe8);
    *(undefined **)((long)puVar1 + 0xe8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c8d2f0; end: 106c8d3f7; -[SCMatchaSendToLogger tapToStartWithAttribution:] */

void FUN_106c8d2f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x98) = 1;
    _CACurrentMediaTime();
    uVar1 = param_4;
    func_0x00010c247a40();
    *(undefined8 *)(param_2 + 0x80) = uVar1;
    _objc_initWeak(auStack_48,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    uStack_50 = param_1;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106c8d3f8; end: 106c8d42f;  */

void FUN_106c8d3f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beca8c0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c8d430; end: 106c8d4a7; -[SCMatchaSendToLogger beginTracking:seenEventAnnouncer:] */

void FUN_106c8d430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    return;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef9980(param_3);
  _objc_storeWeak(param_1 + 0x58,param_3);
  _objc_release(param_3);
  func_0x00010c24f4c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c8d4a8; end: 106c8d5a7; -[SCMatchaSendToLogger didMoveToWindow:] */

void FUN_106c8d4a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    if (param_3 == lVar1) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c25ff60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c8d5a8; end: 106c8d5d3;  */

void FUN_106c8d5a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8d5d4; end: 106c8d6ab; -[SCMatchaSendToLogger viewDidAppear] */

void FUN_106c8d5d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    _CACurrentMediaTime();
    func_0x00010c24fc40(*(undefined8 *)(param_2 + 8));
    *(undefined1 *)(param_2 + 0x78) = 1;
    _objc_initWeak(auStack_38,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_1;
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106c8d6ac; end: 106c8d6ef;  */

void FUN_106c8d6ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece260(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c8d6f0; end: 106c8d7bb; -[SCMatchaSendToLogger scrollViewDidScroll] */

void FUN_106c8d6f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x79) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106c8d788;
    puStack_30 = &UNK_110842e18;
    uStack_28 = uVar2;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
    _objc_release(uStack_28);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106c8d7bc; end: 106c8d8bb; -[SCMatchaSendToLogger sectionsDidRenderWithRenderCompleteTimestamp:] */

void FUN_106c8d7bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_2 + 0xf0) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800(*(undefined8 *)(param_2 + 0xf0));
    func_0x00010bf941e0(puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_38,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106c8d8bc; end: 106c8d92b;  */

void FUN_106c8d8bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece260(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece260(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c8d92c; end: 106c8da1f; -[SCMatchaSendToLogger viewDidDisappear:] */

void FUN_106c8d92c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c2562e0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c24fc40(*(undefined8 *)(param_2 + 8));
  *(undefined1 *)(param_2 + 0x78) = 0;
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106c8da20; end: 106c8da63;  */

void FUN_106c8da20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece260(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c8da64; end: 106c8db13; -[SCMatchaSendToLogger didTapSelectBar] */

void FUN_106c8da64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ed7e78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ed7e78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    lVar1 = (long)(int)uVar3 + 1;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe0),param_2,puVar4,
                      &PTR____CFConstantStringClassReference_110ed7e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106c8db14; end: 106c8dbc3; -[SCMatchaSendToLogger didSwipeSelectBar] */

void FUN_106c8db14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110ed7eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ed7eb8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    lVar1 = (long)(int)uVar3 + 1;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe0),param_2,puVar4,
                      &PTR____CFConstantStringClassReference_110ed7eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106c8dbc4; end: 106c8dbcf; -[SCMatchaSendToLogger didPressSend] */

void FUN_106c8dbc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didPressSendWithSelectionItems__1125bbc70,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 106c8dbd0; end: 106c8dc67; -[SCMatchaSendToLogger didPressSendWithSelectionItems:] */

void FUN_106c8dbd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106c8dc68;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106c8dc68; end: 106c8dc77;  */

void FUN_106c8dc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__didPressSend_withSelectionItems_11255d568,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c8dc78; end: 106c8dd2f; -[SCMatchaSendToLogger sessionDidEndWithCompletion:] */

void FUN_106c8dc78(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106c8dd30;
    puStack_50 = &UNK_11085b7b0;
    lStack_48 = param_2;
    uStack_38 = param_1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106c8dd30; end: 106c8dd3f;  */

void FUN_106c8dd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__sessionDidEndTimestamp_completi_112585f40,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c8dd40; end: 106c8dec3; -[SCMatchaSendToLogger setSelectionTracker:] */

void FUN_106c8dd40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf6d420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8dec4; end: 106c8df0b;  */

void FUN_106c8dec4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8df0c; end: 106c8df3b; -[SCMatchaSendToLogger setContactTracker:] */

void FUN_106c8df0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c8df3c; end: 106c8dfe3; -[SCMatchaSendToLogger setShareSheetAvailable] */

void FUN_106c8df3c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106c8dfe4; end: 106c8e00f;  */

void FUN_106c8dfe4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea76e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e010; end: 106c8e0e7; -[SCMatchaSendToLogger setListsAvailableWithListDataModels:] */

void FUN_106c8e010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8e0e8; end: 106c8e11b;  */

void FUN_106c8e0e8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea54a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e11c; end: 106c8e1f3; -[SCMatchaSendToLogger setContextualListsAvailableWithListDataModels:] */

void FUN_106c8e11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8e1f4; end: 106c8e227;  */

void FUN_106c8e1f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e228; end: 106c8e22f; -[SCMatchaSendToLogger didOpenMemberRolesListWithRolesCount:] */

void FUN_106c8e228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logOpenMemberRolesListWithRolesC_112608828);
  return;
}



/* Entry: 106c8e230; end: 106c8e237; -[SCMatchaSendToLogger didSelectMemberRole] */

void FUN_106c8e230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0af050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logSelectMemberRole_112609620);
  return;
}



/* Entry: 106c8e238; end: 106c8e25b; -[SCMatchaSendToLogger setSeenPublicProfileNux] */

void FUN_106c8e238(long param_1,undefined8 param_2)

{
  func_0x00010c2af460(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8e25c; end: 106c8e297; -[SCMatchaSendToLogger setSeenPublicAttributionNux:] */

void FUN_106c8e25c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x00010c2af420(*(undefined8 *)(param_1 + 0x88),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2af440(*(undefined8 *)(param_1 + 0x88),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c8e298; end: 106c8e2bb; -[SCMatchaSendToLogger setSeenSpotlightNux] */

void FUN_106c8e298(long param_1,undefined8 param_2)

{
  func_0x00010c2af4a0(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8e2bc; end: 106c8e2eb; -[SCMatchaSendToLogger didSelectAllFromList:] */

void FUN_106c8e2bc(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    func_0x00010c2b2ea0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106c8e2ec; end: 106c8e35f; -[SCMatchaSendToLogger didSelectAllFromBestFriends:] */

void FUN_106c8e2ec(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
    func_0x00010c2a92c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
    func_0x00010c2a92e0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2a9300(*(undefined8 *)(param_1 + 0x88),param_2,param_3 == 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8e360; end: 106c8e417; -[SCMatchaSendToLogger didCreateGroupFromSource:] */

void FUN_106c8e360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    lVar1 = (long)(int)uVar3 + 1;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe8),param_2,puVar4,param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c8e418; end: 106c8e43b; -[SCMatchaSendToLogger setAddAChatPreFilled] */

void FUN_106c8e418(long param_1,undefined8 param_2)

{
  func_0x00010c2a7e80(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8e43c; end: 106c8e45f; -[SCMatchaSendToLogger setAddAChatUsed] */

void FUN_106c8e43c(long param_1,undefined8 param_2)

{
  func_0x00010c2a7ea0(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}


