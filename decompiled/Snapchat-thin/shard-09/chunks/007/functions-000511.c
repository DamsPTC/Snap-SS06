/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107144c00; end: 107144c8b;  */

void FUN_107144c00(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c111180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ae00();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107144c8c; end: 107144d6f;  */

void FUN_107144c8c(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c238360(lVar1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107144d70; end: 107144dfb;  */

void FUN_107144d70(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c111180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149f60();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107144dfc; end: 107144ecb; -[PreviewViewController _handleDismissTapForTool:] */

void FUN_107144dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107144ecc;
  puStack_60 = &UNK_11098ff08;
  ppuVar1 = &puStack_78;
  uStack_58 = param_1;
  uStack_48 = param_3;
  puStack_38 = puStack_50;
  _objc_retainBlock(ppuVar1);
  func_0x00010be462e0(param_1);
  if ((*(byte *)(puStack_38 + 3) & 1) == 0) {
    func_0x00010bf3de40(param_1);
  }
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 107144ecc; end: 107144f17;  */

void FUN_107144ecc(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  
  func_0x00010c2406e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((param_2 & 1) == 0) {
    bVar2 = *(byte *)(lVar1 + 0x18);
  }
  else {
    bVar2 = 1;
  }
  *(byte *)(lVar1 + 0x18) = bVar2 & 1;
  return;
}



/* Entry: 107144f18; end: 10714524f; -[PreviewViewController _isSnapFromMemoriesEdited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107144f18(ulong param_1)

{
  bool bVar1;
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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar2 = *(ulong *)(param_1 + (long)_DAT_1127644c0);
  func_0x00010c07e6a0();
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
LAB_107144f90:
    bVar1 = false;
LAB_107144f94:
    uVar3 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c094ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar6;
    func_0x00010c077380();
    if ((uVar22 & 1) == 0) {
      uVar7 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x0001070c5bf0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010befec80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar10;
      func_0x00010c06bcc0();
      if ((uVar22 & 1) == 0) {
        uVar11 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x0001070c5bf0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c0f7f60();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar14;
        func_0x00010c079d60();
        if ((uVar22 & 1) == 0) {
          uVar15 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x0001070c5bf0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010bf5ce40();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar18;
          func_0x00010c07c2e0();
          if ((uVar22 & 1) == 0) {
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = param_1;
            func_0x00010c23fc40();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar19;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar20;
            func_0x00010befeb60();
            _objc_release(uVar20);
            _objc_release(uVar19);
            _objc_release(param_1);
          }
          else {
            uVar22 = 1;
          }
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
        }
        else {
          uVar22 = 1;
        }
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
      }
      else {
        uVar22 = 1;
      }
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      uVar22 = 1;
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (!bVar1) goto LAB_107145224;
  }
  else {
    lVar21 = (long)_DAT_1127644ac;
    uVar3 = *(ulong *)(param_1 + lVar21);
    func_0x00010c0811c0();
    if ((uVar3 & 1) != 0) goto LAB_107144f90;
    uVar3 = *(ulong *)(param_1 + lVar21);
    func_0x00010c070a20();
    if ((uVar3 & 1) != 0) goto LAB_107144f90;
    uStack_78 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uStack_78;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_80;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uStack_88;
    func_0x00010c0d25a0();
    bVar1 = true;
    uVar22 = 1;
    if ((uVar3 & 1) == 0) goto LAB_107144f94;
  }
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
LAB_107145224:
  _objc_release(uVar2);
  return uVar22;
}



/* Entry: 107145250; end: 107145c33; -[PreviewViewController _showAbandonWarningWithExitType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107145250(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined *puStack_300;
  undefined **ppuStack_2d8;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined *puStack_e8;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2647e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206540();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_f8,param_1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107145c34;
  puStack_110 = &UNK_110846540;
  _objc_copyWeak(auStack_108,auStack_f8);
  ppuVar6 = &puStack_128;
  uStack_100 = param_3;
  _objc_retainBlock();
  puStack_150 = puVar9;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107145c78;
  puStack_138 = &UNK_1108434b0;
  _objc_copyWeak(auStack_130,auStack_f8);
  ppuVar7 = &puStack_150;
  _objc_retainBlock();
  puStack_188 = puVar9;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x107145d04;
  puStack_170 = &UNK_110848558;
  _objc_copyWeak(auStack_160,auStack_f8);
  _objc_retain(ppuVar7);
  ppuVar8 = &puStack_188;
  ppuStack_168 = ppuVar7;
  uStack_158 = param_3;
  _objc_retainBlock();
  puVar9 = PTR_PTR_1126aed70;
  ppuStack_2d8 = ppuVar8;
  func_0x000108ede600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar6);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = PTR_PTR_1126aed70;
  func_0x000108eded80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar8);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar11 = PTR_PTR_1126aed70;
  func_0x000108ede780();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar7);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000108ede690();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar9;
  puStack_88 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x000108066230(uVar14,lVar3,lVar13);
  lVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010c110b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar20 = 0;
  if ((int)uVar14 != 0) {
    lVar2 = lVar15;
    func_0x00010c230f80();
    uVar20 = (uint)lVar2;
  }
  lVar2 = lVar15;
  func_0x00010c071800();
  if (((uVar20 | (uint)lVar2 ^ 0xffffffff) & 1) == 0) {
    lVar2 = lVar15;
    func_0x00010beff760();
    puStack_300 = PTR_PTR_1126aed70;
    iVar1 = (int)lVar2;
    ppuVar18 = ppuVar8;
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_a8 = puVar9;
        puStack_a0 = puVar10;
        puStack_98 = puVar11;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar12;
        puVar16 = puVar9;
        puStack_300 = puVar10;
      }
      else {
        if (iVar1 != 2) goto LAB_107145a74;
        func_0x000108eded80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar8);
        func_0x00010beff460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(lVar2);
        puVar16 = PTR_PTR_1126aed70;
        func_0x000108ede600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar6);
        func_0x00010beff460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(lVar2);
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_c0 = puStack_300;
        puStack_b8 = puVar16;
        puStack_b0 = puVar11;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        _objc_release(ppuVar6);
      }
    }
    else if (iVar1 == 3) {
      func_0x000108eded80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar8);
      func_0x00010beff460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(lVar2);
      puVar16 = PTR_PTR_1126aed70;
      func_0x00010b0af26c();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar6);
      func_0x00010beff460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(lVar2);
      ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d8 = puStack_300;
      puStack_d0 = puVar16;
      puStack_c8 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000108edee10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_2d8);
      _objc_release(ppuVar6);
      ppuStack_2d8 = ppuVar12;
    }
    else {
      if (iVar1 != 4) goto LAB_107145a74;
      func_0x00010b0af26c();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar6);
      func_0x00010beff460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(lVar2);
      ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f0 = puStack_300;
      puStack_e8 = puVar10;
      puStack_e0 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000108ede810();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_2d8);
      ppuVar18 = ppuVar6;
      puVar16 = puStack_300;
      puStack_300 = puVar10;
      ppuStack_2d8 = ppuVar12;
    }
    _objc_release(ppuVar18);
    ppuVar12 = ppuVar17;
    puVar9 = puVar16;
    puVar10 = puStack_300;
  }
LAB_107145a74:
  puStack_300 = puVar10;
  puVar10 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  func_0x00010c052ec0();
  func_0x00010c18b5e0();
  func_0x00010beaa540(param_1);
  uVar14 = *(undefined8 *)(param_1 + _DAT_11276455c);
  func_0x00010c1417c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar14);
  _objc_release(puVar10);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuStack_2d8);
  _objc_release(puVar11);
  _objc_release(ppuVar7);
  _objc_release(puStack_300);
  _objc_release(ppuVar8);
  _objc_release(puVar9);
  _objc_release(ppuVar6);
  _objc_release(ppuVar8);
  _objc_release(ppuStack_168);
  _objc_destroyWeak(auStack_160);
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_130);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_108);
  puVar19 = auStack_f8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_f8);
    __Unwind_Resume();
    puVar19 = puVar19 + 0x20;
    _objc_loadWeakRetained();
    if (puVar19 != (undefined1 *)0x0) {
      func_0x00010be022a0(puVar19);
      func_0x00010be0c1c0(puVar19);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar19);
    return;
  }
  return;
}



/* Entry: 107145c34; end: 107145c77;  */

void FUN_107145c34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be022a0(lVar1);
    func_0x00010be0c1c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107145c78; end: 107145da7;  */

void FUN_107145c78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be022a0(param_1);
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9ba00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107145da8; end: 107145f8b;  */

void FUN_107145da8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x00010bec1720(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be0c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__exitPreviewWithExitType__112560a10,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107145de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 107145f8c; end: 1071460a7; -[PreviewViewController _setupAbandonAlertWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107145f8c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bd863c8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11276455c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar1;
  _objc_release(uVar6);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_new(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c1ee700(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar2);
  func_0x00010c225b00(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80,
                      *(undefined8 *)(param_1 + lVar7));
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar7),PTR_s_setHidden__1126479f8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b7290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar7),PTR_s_makeKeyAndVisible_11260b6b8);
  return;
}



/* Entry: 1071460a8; end: 10714617b; -[PreviewViewController _dismissAbandonAlertWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071460a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276455c);
  func_0x00010c1417c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10714617c; end: 1071461c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714617c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11276455c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071461c8; end: 1071467cf; -[PreviewViewController _shouldShowAbandonWarningWithExitType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1071461c8(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  ulong uStack_208;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_1127644f0;
  uVar4 = *(ulong *)(param_1 + lVar16);
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c07d080();
  if ((int)uVar5 == 0) {
    uVar17 = *(ulong *)(param_1 + lVar16);
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar17;
    func_0x00010c07cfa0();
    if ((uVar5 & 1) == 0) {
      _objc_release(uVar17);
      _objc_release(uVar4);
    }
    else {
      uVar5 = *(ulong *)(param_1 + (long)_DAT_112764484);
      func_0x00010bf01640();
      _objc_release(uVar17);
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) goto LAB_1071462b8;
    }
    lVar16 = (long)_DAT_1127644ac;
    uVar4 = *(ulong *)(param_1 + lVar16);
    func_0x00010c06d080();
    if ((uVar4 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + lVar16);
      func_0x00010c0811c0();
      if ((uVar4 & 1) == 0) {
        uVar4 = *(ulong *)(param_1 + lVar16);
        func_0x00010c070a20();
        if ((uVar4 & 1) == 0) {
          dVar20 = 0.0;
          uVar4 = param_1;
          func_0x00010c240aa0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf52a60();
          lVar16 = lRam0000000000000000;
          puVar2 = PTR_s_shouldSkipDiscardDialogForLocked_11266ac70;
          while (PTR_s_shouldSkipDiscardDialogForLocked_11266ac70 = puVar2, uVar5 != 0) {
            uVar17 = 0;
            do {
              if (lRam0000000000000000 != lVar16) {
                _objc_enumerationMutation(uVar4);
              }
              uVar18 = *(ulong *)(uVar17 * 8);
              uVar6 = uVar18;
              _objc_opt_respondsToSelector(uVar18,puVar2);
              if (((uVar6 & 1) != 0) && (func_0x00010c234920(), (uVar18 & 1) != 0))
              goto LAB_107146228;
              uVar17 = uVar17 + 1;
            } while (uVar5 != uVar17);
            uVar5 = uVar4;
            func_0x00010bf52a60();
            puVar2 = PTR_s_shouldSkipDiscardDialogForLocked_11266ac70;
          }
          _objc_release(uVar4);
          uVar5 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar5;
          FUN_1070c2ed4();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar17;
          func_0x00010bf5aea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          _objc_release(uVar5);
          uVar5 = uVar4;
          func_0x00010c110b00();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar5;
          func_0x00010c071800();
          uVar6 = param_1;
          func_0x00010c15d5a0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar6;
          func_0x00010bf529e0();
          if ((int)uVar17 == 0) {
            _objc_release(uVar6);
            if ((1 < uVar18) ||
               (_CACurrentMediaTime(),
               10.0 < ABS(dVar20 - *(double *)(param_1 + (long)_DAT_112764560))))
            goto LAB_107146614;
            uVar17 = param_1;
            func_0x00010c13b420();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar17;
            func_0x00010bfadbe0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar6;
            func_0x00010bf07a40();
            _objc_retainAutoreleasedReturnValue();
            uStack_208 = uVar18;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar18);
            _objc_release(uVar6);
            _objc_release(uVar17);
            uVar17 = param_1;
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar17;
            func_0x00010bf89ea0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar6;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar18;
            func_0x00010c25dbe0();
            uVar19 = param_1;
            func_0x00010bfa3600(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar19;
            func_0x00010c253b20();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c253c00();
            func_0x00010bfa3600(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = param_1;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010bf2fd60();
            uVar14 = uStack_208;
            func_0x00010bf07e40(uStack_208);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(param_1);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar19);
            _objc_release(uVar18);
            _objc_release(uVar6);
            _objc_release(uVar17);
            if (param_3 + 1U < 0xc) {
              lVar16 = *(long *)(&UNK_10de1fc20 + (param_3 + 1U) * 8);
            }
            else {
              lVar16 = 1;
            }
            bVar1 = lVar16 <= (long)(uVar10 + uVar7 + uVar13 + uVar14);
LAB_1071467ac:
            uVar17 = (ulong)bVar1;
            _objc_release(uStack_208);
          }
          else {
            uVar17 = uVar5;
            func_0x00010c122fc0();
            _objc_release(uVar6);
            if (uVar18 < (ulong)(long)(int)uVar17) {
              _CACurrentMediaTime();
              dVar21 = *(double *)(param_1 + (long)_DAT_112764560);
              uVar17 = uVar5;
              func_0x00010c111c20();
              if (ABS(dVar20 - dVar21) < (double)(int)uVar17) {
                uVar17 = param_1;
                func_0x00010c13b420();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar17;
                func_0x00010bfadbe0();
                _objc_retainAutoreleasedReturnValue();
                uVar18 = uVar6;
                func_0x00010bf07a40();
                _objc_retainAutoreleasedReturnValue();
                uStack_208 = uVar18;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar18);
                _objc_release(uVar6);
                _objc_release(uVar17);
                uVar17 = uStack_208;
                func_0x00010bf07e40(uStack_208);
                func_0x00010c240aa0();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = param_1;
                func_0x00010bf52a60();
                lVar16 = lRam0000000000000000;
                puVar2 = PTR_s_editCount_1125c0a40;
                puVar3 = PTR_s_hasOnlyPrePreviewEdits_1125d4070;
                while (PTR_s_editCount_1125c0a40 = puVar2,
                      PTR_s_hasOnlyPrePreviewEdits_1125d4070 = puVar3, uVar6 != 0) {
                  uVar18 = 0;
                  do {
                    if (lRam0000000000000000 != lVar16) {
                      _objc_enumerationMutation(param_1);
                    }
                    uVar19 = *(ulong *)(uVar18 * 8);
                    uVar7 = uVar19;
                    _objc_opt_respondsToSelector(uVar19,puVar3);
                    if (((((uVar7 & 1) == 0) ||
                         (uVar7 = uVar19, func_0x00010bfd9ac0(), (int)uVar7 == 0)) ||
                        (uVar7 = uVar5, func_0x00010c230fa0(), (uVar7 & 1) == 0)) &&
                       (uVar7 = uVar19, _objc_opt_respondsToSelector(uVar19,puVar2),
                       (uVar7 & 1) != 0)) {
                      func_0x00010bf8c260(uVar19);
                      uVar17 = uVar19 + uVar17;
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar6 != uVar18);
                  uVar6 = param_1;
                  func_0x00010bf52a60();
                  puVar2 = PTR_s_editCount_1125c0a40;
                  puVar3 = PTR_s_hasOnlyPrePreviewEdits_1125d4070;
                }
                _objc_release(param_1);
                uVar6 = uVar5;
                func_0x00010bf5ae60(uVar5);
                bVar1 = (long)(int)uVar6 <= (long)uVar17;
                goto LAB_1071467ac;
              }
            }
LAB_107146614:
            uVar17 = 1;
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
          goto LAB_1071462bc;
        }
      }
    }
  }
  else {
LAB_107146228:
    _objc_release(uVar4);
  }
LAB_1071462b8:
  uVar17 = 0;
LAB_1071462bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return uVar17;
  }
  ___stack_chk_fail();
  func_0x00010bf3de40();
  uVar5 = uVar4;
  func_0x00010c1122a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161840();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be0c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s__exitPreviewWithExitType__112560a10,6);
  return uVar4;
}



/* Entry: 1071467d0; end: 10714681b; -[PreviewViewController clearupBeforeHandleQuickAction] */

void FUN_1071467d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3de40();
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161840();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitPreviewWithExitType__112560a10,6);
  return;
}



/* Entry: 10714681c; end: 107146897; -[PreviewViewController sendingEphemeralMediaList] */

void FUN_10714681c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107146898; end: 1071468fb; -[PreviewViewController singleSendingSnapVideoFilter] */

void FUN_107146898(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071468fc; end: 107146c33; -[PreviewViewController parametersForImageHealthCheck] */

void FUN_1071468fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2fd60();
  func_0x00010c0df760(puVar6,param_2,0 < lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110ea0a58);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar6,param_2,lVar5 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e296f8);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c25dbe0();
  func_0x00010c0df780(puVar6,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e29718);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c253c00();
  func_0x00010c0df780(puVar6,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e2a278);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfae100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfadee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  lVar2 = lVar5;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bef7f60(puVar1,param_2,lVar5);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107146c34; end: 10714701f; -[PreviewViewController prepareMediaImage:chatMediaImage:withScreenshot:withScreenOverlay:shouldUseMediaOrientation:transcodingTaskId:imageProcessingError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107146c34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined1 param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar8 = (long)_DAT_1127644ac;
  uVar1 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010bfb6c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar8);
  func_0x00010bf311e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37fc0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar8 = param_7;
  func_0x000108eb5ca8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if ((param_8 != 0) && (lVar4 != 0)) {
    lVar3 = param_3;
    func_0x00010bde9680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7540(param_5);
    func_0x00010c1d77a0(param_5);
    func_0x00010c08fa60(lVar3);
    _objc_release(lVar3);
  }
  lVar3 = lVar8;
  func_0x00010c08fa60();
  lVar4 = param_3;
  func_0x00010c13b540(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x0001070c53ec();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b3820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c255ba0(lVar7);
  }
  else {
    func_0x00010c23d0a0(param_7);
    func_0x00010c08fa60(lVar8);
    func_0x00010c255bc0(param_1,param_2,lVar7);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar3 = param_3;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5caa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if ((lVar5 != 0) && (lVar3 = lVar8, func_0x00010c08fa60(), lVar3 != 0)) {
    func_0x00010853f278();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c0ef740(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb0100(lVar3);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107147020;
  puStack_b0 = &UNK_110853a60;
  uStack_a8 = param_5;
  lStack_a0 = lVar8;
  uStack_98 = param_6;
  lStack_90 = param_3;
  lStack_88 = param_7;
  lStack_80 = param_8;
  uStack_78 = param_9;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(lVar8);
  _objc_retain(param_5);
  func_0x000100162d98("APPSTORE",&puStack_c8);
  _objc_release(lStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_98);
  _objc_release(lStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar8);
  _objc_release(param_5);
  _objc_release(lVar5);
  _objc_release(param_11);
  _objc_release(param_10);
  return;
}



/* Entry: 107147020; end: 107147277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107147020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  func_0x00010c1c4480(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfe86c0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfa3600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2039e0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010be23c20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar10);
    }
    else {
      func_0x00010c2208c0(*(undefined8 *)(param_1 + 0x30));
    }
    _objc_release(lVar4);
    uVar8 = *(ulong *)(param_1 + 0x30);
    puVar5 = PTR_PTR_1126d2a10;
    _objc_opt_class(PTR_PTR_1126d2a10);
    _objc_opt_isKindOfClass(uVar8,puVar5);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar9 = *(undefined **)(param_1 + 0x30);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(param_1 + 0x50) == '\x01') {
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        _objc_retainAutorelease(uVar10);
        _objc_retain(puVar9);
        func_0x00010bdc1020(uVar10);
        func_0x00010c0c5ae0(*(undefined8 *)(*(long *)(param_1 + 0x38) + (long)_DAT_1127644ac));
        func_0x00010bfe9260(0x3ff0000000000000,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(puVar9);
        _objc_release(puVar9);
        puVar9 = puVar5;
      }
      else {
        _objc_retain(puVar9);
        func_0x00010c1a9f00(puVar9);
      }
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x38);
      _objc_retain(puVar9);
      func_0x00010bfa3600(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2705e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe75c0();
      func_0x00010c1a9f60(puVar9);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar9 = puVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 107147278; end: 1071476b3; -[PreviewViewController _prepareSingleMediaVideo:chatSingleMediaVideo:overlayImage:overlayPngData:rotationalOverlay:overlayImageForMask:thumbnailImage:videoTrackedImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107147278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar9 = (long)_DAT_1127644ac;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c07f160();
  lVar3 = param_6;
  if ((int)uVar8 == 0) {
LAB_10714735c:
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c2440e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e820();
    _objc_release(uVar5);
    if ((int)uVar8 == 0) goto LAB_107147388;
  }
  else {
    lVar3 = *(long *)(param_1 + lVar9);
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb4f60();
    if (lVar4 != 1) goto LAB_10714735c;
  }
  _objc_release(lVar3);
LAB_107147388:
  _objc_release(uVar2);
  func_0x00010c06ba20(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c0d2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1071476b4;
  uStack_88 = 0x1071476c4;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1071476b4;
  uStack_b8 = 0x1071476c4;
  uStack_b0 = 0;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  _objc_initWeak(auStack_e0,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1071476cc;
  puStack_120 = &UNK_110866228;
  _objc_copyWeak(auStack_e8,auStack_e0);
  puStack_f8 = &uStack_a8;
  _objc_retain(param_5);
  uStack_118 = param_5;
  _objc_retain(param_6);
  lStack_110 = param_6;
  _objc_retain(param_3);
  uStack_108 = param_3;
  puStack_f0 = &uStack_d8;
  _objc_retain(param_9);
  uStack_100 = param_9;
  ppuVar6 = &puStack_138;
  _objc_retainBlock();
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_107147860;
  puStack_188 = &UNK_11098ff98;
  lStack_180 = param_1;
  _objc_retain(param_3);
  uStack_178 = param_3;
  _objc_retain(param_4);
  uStack_170 = param_4;
  _objc_retain(param_5);
  uStack_168 = param_5;
  _objc_retain(param_7);
  uStack_160 = param_7;
  puStack_148 = &uStack_a8;
  puStack_140 = &uStack_d8;
  _objc_retain(param_8);
  uStack_158 = param_8;
  _objc_retain(param_10);
  uStack_150 = param_10;
  ppuVar7 = &puStack_1a0;
  _objc_retainBlock();
  uVar8 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_107148664;
  puStack_1b8 = &UNK_11088fcb8;
  ppuStack_1b0 = ppuVar6;
  ppuStack_1a8 = ppuVar7;
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar6);
  func_0x00010007380c(uVar8,&puStack_1d0);
  _objc_release(uVar8);
  _objc_release(ppuStack_1a8);
  _objc_release(ppuStack_1b0);
  _objc_release(ppuVar7);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(ppuVar6);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(lStack_110);
  _objc_release(uStack_118);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071476b4; end: 1071476cb;  */

void FUN_1071476b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1071476cc; end: 10714785f;  */

void FUN_1071476cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar7 = lVar1;
    func_0x00010bde9680(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar7;
    _objc_release(uVar4);
    func_0x00010c1d7540(*(undefined8 *)(param_1 + 0x30),param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
    func_0x00010c1d77a0(*(undefined8 *)(param_1 + 0x30),param_2,
                        *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0);
    lVar7 = lVar1;
    func_0x00010c13b540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c08fa60(uVar4);
    func_0x00010c2b7b00(lVar3,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar7);
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar7;
      _UIImageJPEGRepresentation(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    _objc_retain(lVar5);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x28) = lVar5;
    _objc_release(uVar4);
    if (lVar7 != 0) {
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107147860; end: 107147c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107147860(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010c23cd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    if ((*(long *)(param_2 + 0x38) == 0) && (*(long *)(param_2 + 0x40) == 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bfa3600(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252a60();
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010bfd9800();
      if ((int)uVar3 != 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfa3600(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c253b20();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd97e0();
        _objc_release(uVar6);
        _objc_release(uVar3);
        _objc_release(uVar5);
      }
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar4);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c078080();
    _objc_release(uVar7);
    if ((int)uVar8 != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c15e020(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7540();
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c15e020(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d77a0();
      _objc_release(uVar8);
    }
    lVar2 = (long)_DAT_1127644ac;
    uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar2);
    func_0x00010bf82940(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213f60();
    _objc_release(uVar8);
    iVar1 = (int)*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar2);
    func_0x00010c07e920();
    if (iVar1 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126ae560;
      _objc_opt_new();
      lVar2 = *(long *)(param_2 + 0x20);
      lVar10 = (long)_DAT_112764564;
      _objc_retain();
      uVar8 = *(undefined8 *)(lVar2 + lVar10);
      *(undefined **)(lVar2 + lVar10) = puVar9;
      _objc_release(uVar8);
    }
    func_0x00010bfc43e0(*(undefined8 *)(param_2 + 0x20));
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c23cd20(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186240(param_1);
    _objc_release(uVar8);
    uVar8 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107147c04;
    puStack_a8 = &UNK_110958868;
    uStack_a0 = *(undefined8 *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    uStack_98 = uVar7;
    _objc_retain(uVar3);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uStack_90 = uVar3;
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uStack_88 = uVar7;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uStack_80 = uVar3;
    _objc_retain(uVar4);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uStack_78 = uVar4;
    puStack_70 = puVar9;
    _objc_retain(uVar7);
    uStack_68 = uVar7;
    _objc_retain(puVar9);
    func_0x00010007380c(uVar8,&puStack_c0);
    _objc_release(uVar8);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(puVar9);
  }
  return;
}



/* Entry: 107147c04; end: 107148577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107147c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar15 = (long)_DAT_1127644ac;
  uVar1 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91760();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d75e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d9a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7660();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c0ef740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7640();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222140();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bfa3600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186260();
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c242400(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15));
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c232fa0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar13 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar3 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar1 = param_1;
    uVar2 = param_2;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15);
    func_0x00010c2440e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar13;
    func_0x000107ff9fe0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c23cd20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x000109023cdc(uVar13);
    uVar1 = param_1;
    uVar2 = param_2;
    _objc_release(uVar13);
    uVar13 = param_1;
    uVar3 = param_2;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c07f160();
  _objc_release(uVar5);
  if ((int)uVar4 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15);
    func_0x00010c2440e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0;
    uVar5 = uVar4;
    func_0x000109024c88();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c23cd20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207b40();
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar15);
    func_0x00010c0d2100(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb4f40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c23cd20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214ee0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c078080();
  _objc_release(uVar5);
  lVar8 = *(long *)(param_5 + 0x20);
  if ((int)uVar4 != 0) {
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  uVar9 = *(ulong *)(lVar8 + lVar15);
  func_0x00010c233020();
  if ((uVar9 & 1) == 0) {
    uVar10 = *(ulong *)(*(long *)(param_5 + 0x20) + lVar15);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c077e00();
    _objc_release(uVar10);
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)(param_5 + 0x20);
      func_0x00010c23cd20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar8;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar8);
      if (lVar15 == 0) {
        uVar2 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c15e020(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010bfb1160();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c23cd20(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        _objc_release(uVar13);
        _objc_release(uVar1);
        _objc_release(uVar2);
      }
      lVar8 = *(long *)(param_5 + 0x20);
      func_0x00010c23cd20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar8;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      uVar4 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010c23cd20();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107148578;
      puStack_98 = &UNK_11098ff38;
      _objc_retain(lVar15);
      lStack_90 = lVar15;
      _objc_retain(uVar4);
      ppuVar14 = &puStack_b0;
      uStack_88 = uVar4;
      _objc_retainBlock(ppuVar14);
      lVar12 = *(long *)(param_5 + 0x20);
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar12;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar12);
      uVar13 = *(undefined8 *)(param_5 + 0x20);
      func_0x00010c15e020(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar13;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf5caa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(uVar13);
      lVar8 = lVar11;
      func_0x00010c08fa60();
      if (lVar8 == 0) {
        func_0x00010bfae6c0(uVar4);
      }
      else {
        func_0x00010853f278();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfae6a0();
        _objc_release(lVar8);
      }
      _objc_release(uVar2);
      _objc_release(lVar11);
      _objc_release(ppuVar14);
      _objc_release(uStack_88);
      lVar8 = lStack_90;
      goto LAB_10714853c;
    }
  }
  lVar11 = *(long *)(*(long *)(param_5 + 0x20) + lVar15);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c11cac0(*(undefined8 *)(param_5 + 0x20));
  lVar15 = *(long *)(param_5 + 0x20);
  func_0x00010c23cd20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c15e020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(lVar15);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c23cd20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107148594;
  puStack_110 = &UNK_11098ff68;
  lVar8 = *(long *)(param_5 + 0x50);
  _objc_retain(lVar8);
  lStack_108 = lVar8;
  _objc_retain(lVar15);
  lStack_100 = lVar15;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_5 + 0x58);
  uStack_f8 = uVar4;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_5 + 0x38);
  uStack_f0 = uVar5;
  _objc_retain(uVar6);
  uStack_b8 = 1;
  uStack_e0 = 1;
  ppuVar14 = &puStack_128;
  uStack_e8 = uVar6;
  uStack_d8 = uVar1;
  uStack_d0 = uVar2;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  uStack_b7 = lVar11 != 0;
  _objc_retainBlock(ppuVar14);
  lVar12 = *(long *)(param_5 + 0x20);
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar12);
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c15e020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5caa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar8 = lVar11;
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    func_0x00010bfae7c0(uVar13,uVar3,lVar15);
  }
  else {
    func_0x00010853f278();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae7a0(uVar13,uVar3);
    _objc_release(lVar8);
  }
  _objc_release(uVar2);
  _objc_release(lVar11);
  _objc_release(ppuVar14);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(lStack_100);
  lVar8 = lStack_108;
LAB_10714853c:
  _objc_release(lVar8);
  _objc_release(uVar4);
  _objc_release(lVar15);
  return;
}



/* Entry: 107148578; end: 107148593;  */

void FUN_107148578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c29adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_videoProcessingDidFailForSnapVid_112684590);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_videoProcessingDidSucceedForSnap_1126845a0,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 107148594; end: 107148663;  */

void FUN_107148594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb710;
  _objc_retain(param_4);
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3420(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107148664; end: 107148697;  */

void FUN_107148664(long param_1)

{
  char *pcVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  pcVar1 = "APPSTORE";
  func_0x0001000d77b8("APPSTORE",*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c3b500;
  puStack_30 = &UNK_110849530;
  pcStack_28 = pcVar1;
  func_0x000107c61174();
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  func_0x000107c61170(pcStack_28);
  func_0x000107c61170(pcVar1);
  return;
}



/* Entry: 107148698; end: 107148993; +[PreviewViewController _completeThumbnailPromise:videoFilter:snapVideoFilterDelegate:chatMedia:withVideoUrl:error:retriable:overlayImage:useWebP:webpQuality:isSpectaclesSnap:insets:] */

void FUN_107148698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,long param_11,long param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15,undefined1 param_16,undefined4 param_17,
                  long param_18,undefined1 param_19)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puVar1 = PTR_PTR_1126d2a00;
  if ((param_11 == 0) || (param_12 != 0)) {
    _objc_retain(param_9);
    _objc_retain(param_8);
    func_0x00010c29ada0(param_9);
    _objc_release(param_9);
    _objc_release(param_8);
    puVar1 = PTR_PTR_1126d2a00;
    _objc_opt_class(PTR_PTR_1126d2a00);
    uVar2 = param_10;
    _objc_opt_isKindOfClass(param_10,puVar1);
    if ((uVar2 & 1) != 0) {
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x107148d80;
      puStack_108 = &UNK_110861e68;
      _objc_retain(param_10);
      uStack_f0 = param_16;
      lStack_f8 = param_18;
      uStack_100 = param_10;
      func_0x000100162d98("APPSTORE",&puStack_120);
      _objc_release(uStack_100);
    }
    if (param_7 == (undefined *)0x0) goto LAB_107148908;
    if (param_12 != 0) {
      func_0x00010bf43ca0(param_7);
      goto LAB_107148908;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_7);
  }
  else {
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_opt_class(puVar1);
    uVar2 = param_10;
    _objc_opt_isKindOfClass(param_10,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c222260((double)param_18,param_10);
    }
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_107148994;
    puStack_d0 = &UNK_11090f6f8;
    _objc_retain(param_7);
    uStack_90 = param_19;
    puStack_c8 = param_7;
    _objc_retain(param_11);
    lStack_c0 = param_11;
    _objc_retain(param_15);
    uStack_b8 = param_15;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_e8);
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c14d640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ade0(param_9);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(puVar1);
    _objc_release(uStack_b8);
    _objc_release(lStack_c0);
    puVar1 = puStack_c8;
  }
  _objc_release(puVar1);
LAB_107148908:
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  return;
}



/* Entry: 107148994; end: 107148bfb;  */

void FUN_107148994(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107148a80;
    puStack_78 = &UNK_11090f6f8;
    uStack_38 = *(undefined1 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = uVar2;
    _objc_retain(uVar3);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = uVar3;
    _objc_retain(uVar2);
    uStack_60 = uVar2;
    func_0x00010007380c(uVar1,&puStack_90);
    _objc_release(uVar1);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  return;
}



/* Entry: 107148bfc; end: 107148d67;  */

void FUN_107148bfc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_6;
  if (*(char *)(param_5 + 0x48) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    dVar4 = (param_3 - *(double *)(param_5 + 0x30)) - *(double *)(param_5 + 0x40);
    dVar5 = 0.0;
    if (dVar4 != 0.0) {
      dVar5 = (param_4 - *(double *)(param_5 + 0x28)) - *(double *)(param_5 + 0x38);
      if (dVar5 == 0.0) {
        dVar5 = INFINITY;
      }
      else {
        dVar5 = dVar4 / dVar5;
      }
    }
    _objc_release(puVar1);
    func_0x000108544668(dVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107148d68;
  puStack_60 = &UNK_110848ba8;
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  uStack_58 = param_7;
  _objc_retain(uVar3);
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(param_7);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 107148d68; end: 107148da7;  */

void FUN_107148d68(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107148da8; end: 107148e37; -[PreviewViewController _convertToPngImage:withOptimizedPngData:] */

void FUN_107148da8(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    if (param_3 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126b9658;
      func_0x00010bf92f60(0x3ff0000000000000,PTR_PTR_1126b9658,param_2,param_3,9);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107148e38; end: 107148f33; -[PreviewViewController _prepareImageToVideoSnapWithChatMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107148e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d4d60;
  _objc_alloc_init(PTR_PTR_1126d4d60);
  uVar1 = (undefined4)*(undefined8 *)(param_1 + _DAT_112764490);
  func_0x00010bfec280();
  lVar3 = param_1;
  func_0x00010beb73a0();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112764474);
  func_0x00010bf9d440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107148f34;
  puStack_60 = &UNK_11098fff8;
  uStack_44 = (undefined1)lVar3;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  _objc_retain(param_3);
  func_0x00010c29a0e0(uVar4,param_2,puVar2,&puStack_78);
  _objc_release(uVar4);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 107148f34; end: 107149143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107148f34(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764490);
    func_0x00010c296d80();
    if (iVar2 != iVar3) goto LAB_107149120;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127644ac);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf91760();
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c0ef960(param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar5 == 0) {
    uVar13 = 0;
    uVar5 = uVar4;
  }
  else {
    uVar5 = param_2;
    func_0x00010c0efa40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1f440();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar1 = *(long *)(param_1 + 0x20);
  lVar14 = *(long *)(param_1 + 0x28);
  if (((uVar9 & 1) == 0) && (lVar14 == 0)) {
    lVar14 = *(long *)(lVar1 + _DAT_112764568);
  }
  _objc_retain(lVar14);
  lVar10 = lVar1;
  func_0x00010c15e020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79240(lVar1);
  _objc_release(lVar14);
  _objc_release(uVar4);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar13);
  _objc_release(uVar5);
LAB_107149120:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107149144; end: 107149147; -[PreviewViewController sendingWillStart] */

void FUN_107149144(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyListenersWillStartSending_112576ce0);
  return;
}



/* Entry: 107149148; end: 1071491c3; -[PreviewViewController prepareMedia:chatMedia:destinationInfo:] */

void FUN_107149148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfd4160(param_1);
  func_0x00010c109ae0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071491c4; end: 10714aa1b; -[PreviewViewController prepareMedia:chatMedia:destinationInfo:hasAnimatedOrExternalAudioContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071491c4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **unaff_x27;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *apuStack_108 [16];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_220 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuStack_228 = param_7;
  _objc_retain(param_7);
  func_0x00010c2876e0(param_3);
  ppuVar15 = param_3;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar15;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar17;
  func_0x00010bf0d6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2039e0(param_6);
  _objc_release(ppuVar10);
  _objc_release(ppuVar17);
  _objc_release(ppuVar20);
  _objc_release(ppuVar15);
  ppuVar15 = param_6;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar20 = param_3;
    func_0x00010be23c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(param_6);
    _objc_release(ppuVar20);
  }
  else {
    func_0x00010c2208c0(param_6);
  }
  _objc_release(ppuVar15);
  uVar21 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  ppuVar15 = param_3;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar15;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  ppuVar14 = apuStack_108;
  ppuVar15 = (undefined **)0x10;
  ppuVar17 = ppuVar20;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    lVar16 = *plStack_150;
    do {
      ppuVar15 = (undefined **)0x0;
      do {
        if (*plStack_150 != lVar16) {
          _objc_enumerationMutation(ppuVar20);
        }
        func_0x00010c26f000(*(undefined8 *)(lStack_158 + (long)ppuVar15 * 8));
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar17 != ppuVar15);
      ppuVar14 = apuStack_108;
      ppuVar15 = (undefined **)0x10;
      ppuVar17 = ppuVar20;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar20);
  ppuVar20 = param_3;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar20;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar8;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = (undefined **)(ulong)(ppuVar4 == (undefined **)0x0);
  _objc_release();
  _objc_release(ppuVar8);
  _objc_release(ppuVar3);
  _objc_release(ppuVar20);
  ppuVar20 = (undefined **)(long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)((long)param_3 + (long)ppuVar20);
  func_0x00010c075080();
  ppuVar3 = param_3;
  ppuStack_230 = param_6;
  if (iVar1 == 0) {
    ppuVar17 = param_3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar17;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar14;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_238 = ppuVar6;
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar8);
    _objc_release(ppuVar14);
    _objc_release(ppuVar17);
    ppuVar17 = param_3;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar17;
    func_0x00010c078080();
    _objc_release(ppuVar17);
    if ((int)ppuVar14 == 0) {
      ppuVar10 = param_3;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar10;
      func_0x00010bfadbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar17;
      func_0x00010bf07a40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010bf07e20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_240 = ppuVar5;
      _objc_release(ppuVar4);
      _objc_release(ppuVar8);
      _objc_release(ppuVar14);
      _objc_release(ppuVar17);
      _objc_release(ppuVar10);
      lVar16 = *(long *)((long)param_3 + (long)ppuVar20);
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x00010bf4d820(param_3);
      if (lVar16 == 0) {
        func_0x00010c07e920();
      }
      ppuVar10 = param_3;
      func_0x00010c15e020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219700();
      _objc_release(ppuVar10);
      ppuVar17 = param_3;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x0001070c47b4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010c243b20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_3;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = unaff_x27;
      func_0x00010c27a040();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar5;
      ppuVar14 = ppuVar6;
      func_0x00010bf58fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(unaff_x27);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      ppuVar17 = param_3;
      func_0x00010bf46560(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010bf12b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221d20(ppuVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      ppuVar17 = param_3;
      func_0x00010bfa3600(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60b40();
      func_0x00010c221cc0(ppuVar10);
      _objc_release(ppuVar4);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      func_0x00010c2284a0(param_3);
      func_0x00010c19c2e0(ppuVar10);
      ppuVar17 = param_3;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010bfadbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010bf07a40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf08000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      puVar19 = PTR_PTR_1126c4798;
      ppuStack_248 = ppuVar6;
      func_0x00010c0b7b40(PTR_PTR_1126c4798);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21b160(ppuVar10);
      _objc_release(puVar19);
      ppuVar17 = param_3;
      func_0x00010c13b420(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010bfadbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010bf07a40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf07e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb040(ppuVar10);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      uVar13 = uVar21;
      func_0x00010c222080(ppuVar10);
      func_0x00010c2142c0(ppuVar10);
      func_0x00010c1f5d00(ppuVar10);
      uVar9 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
      func_0x00010bf311e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179260(ppuVar10);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
      func_0x00010c243320(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205640(ppuVar10);
      _objc_release(uVar9);
      ppuVar17 = param_3;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      ppuStack_250 = ppuVar4;
      func_0x00010bf44740(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar4;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4c60(ppuVar10);
      _objc_release(ppuVar17);
      _objc_release(ppuVar4);
      ppuVar17 = ppuStack_238;
      func_0x00010c24b740();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar17 == (undefined **)0x0) {
        ppuVar8 = param_3;
        func_0x00010bebee00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c208880(ppuVar10);
        _objc_release(ppuVar8);
      }
      else {
        func_0x00010c208880(ppuVar10);
      }
      _objc_release(ppuVar17);
      uVar9 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
      func_0x00010bfb6c80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f340(ppuVar10);
      _objc_release(uVar9);
      func_0x00010c1faa60(ppuVar10);
      ppuVar17 = param_3;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf14000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar4);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar17 = param_3;
        func_0x00010c13b420();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_260 = ppuVar17;
        func_0x00010c29f540();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_268 = ppuVar17;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_270 = ppuVar17;
        func_0x00010bf14000();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_278 = ppuVar17;
        func_0x00010c274320();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = param_3;
        ppuStack_118 = ppuVar17;
        func_0x00010c13b420();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = unaff_x27;
        ppuStack_258 = ppuVar20;
        func_0x00010c29f540();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar20;
        func_0x00010bf14000();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bf20040();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = (undefined **)0x2;
        puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_110 = ppuVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e4e0(ppuVar10);
        _objc_release(puVar19);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar20);
        _objc_release(ppuVar8);
        ppuVar20 = ppuStack_258;
        _objc_release(unaff_x27);
        _objc_release(ppuVar17);
        _objc_release(ppuStack_278);
        _objc_release(ppuStack_270);
        _objc_release(ppuStack_268);
        _objc_release(ppuStack_260);
      }
      ppuVar17 = param_3;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010c29a9c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      ppuVar17 = param_3;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010c29a9a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      ppuVar17 = ppuVar5;
      func_0x00010c0818c0();
      if ((int)ppuVar17 == 0) {
        ppuVar17 = ppuVar4;
        func_0x00010c0818a0();
        param_6 = ppuStack_230;
        if (((int)ppuVar17 != 0) && (ppuVar17 = ppuVar4, func_0x00010c0778e0(), (int)ppuVar17 != 0))
        {
          ppuVar17 = ppuVar4;
          func_0x00010c100500(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10714a084;
        }
      }
      else {
        ppuVar17 = ppuVar5;
        func_0x00010c27c960(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        param_6 = ppuStack_230;
LAB_10714a084:
        func_0x00010c214ee0(ppuVar10);
        _objc_release(ppuVar17);
      }
      func_0x00010c242400(*(undefined8 *)((long)param_3 + (long)ppuVar20));
      func_0x00010c2056c0(ppuVar10);
      ppuVar17 = param_3;
      func_0x00010be8e7a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010c0918c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb2c0(ppuVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      uVar12 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar12;
      func_0x00010c081be0();
      _objc_release(uVar12);
      if ((int)uVar9 != 0) {
        uVar9 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
        func_0x00010c249660(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c207a40(ppuVar10);
        _objc_release(uVar9);
      }
      ppuVar17 = param_3;
      func_0x00010c15e020(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar17;
      func_0x00010bfb1160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2216a0();
      _objc_release(ppuVar8);
      _objc_release(ppuVar17);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuStack_250);
      _objc_release(ppuStack_248);
      _objc_release(ppuVar10);
      ppuVar17 = ppuStack_240;
      unaff_d8 = uVar21;
    }
    else {
      uVar13 = *(undefined8 *)((long)param_3 + (long)_DAT_112764538);
      ppuVar17 = param_3;
      func_0x00010c15e020(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuStack_228;
      func_0x00010c109dc0(uVar13);
      uVar13 = uVar21;
    }
    _objc_release(ppuVar17);
    ppuVar8 = param_3;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar8;
    func_0x00010c078080();
    _objc_release(ppuVar8);
    if ((int)ppuVar17 == 0) {
      uVar2 = (undefined4)*(undefined8 *)((long)param_3 + (long)_DAT_112764490);
      func_0x00010bfec280();
      param_8 = param_3;
      func_0x00010beb73a0();
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar3;
      func_0x00010c0ef680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc43e0(param_3);
      ppuVar10 = (undefined **)0x19;
      param_4 = (undefined **)0x0;
      func_0x0001000819a8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuStack_220;
      puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_10714aa5c;
      puStack_200 = &UNK_110990058;
      uStack_1dc = SUB81(param_8,0);
      ppuStack_1f8 = param_3;
      uStack_1e0 = uVar2;
      _objc_retain(ppuStack_220);
      ppuStack_1f0 = ppuVar17;
      _objc_retain(param_6);
      ppuVar15 = &puStack_218;
      ppuVar14 = ppuVar10;
      uVar21 = uVar13;
      ppuStack_1e8 = param_6;
      func_0x00010bfc8660(uVar13,ppuVar5);
      _objc_release(ppuVar10);
      _objc_release(ppuVar5);
      _objc_release(ppuVar8);
      _objc_release(ppuVar3);
      _objc_release(ppuStack_1e8);
      _objc_release(ppuStack_1f0);
      ppuVar4 = ppuStack_238;
      uVar9 = param_2;
    }
    else {
      ppuVar8 = param_3;
      func_0x00010c15e020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078120();
      _objc_release(ppuVar8);
      ppuVar8 = param_3;
      func_0x00010c15e020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c242400(*(undefined8 *)((long)param_3 + (long)ppuVar20));
      func_0x00010c204fa0(ppuVar8);
      _objc_release(ppuVar8);
      ppuVar4 = param_3;
      func_0x00010c15e020(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuStack_238;
      func_0x00010c24b740();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar17 = param_3;
        func_0x00010bebee00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c208880(ppuVar4);
        _objc_release(ppuVar17);
      }
      else {
        func_0x00010c208880(ppuVar4);
      }
      _objc_release(ppuVar8);
      _objc_release(ppuVar4);
      ppuVar4 = param_3;
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      param_8 = ppuVar4;
      func_0x00010c243b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      func_0x00010c15e020();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar3;
      func_0x00010bf98360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar4 = param_8;
      func_0x00010bf529e0();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar8 = (undefined **)0x0;
        ppuVar10 = &PTR____CFConstantStringClassReference_110dbdd98;
        do {
          ppuVar4 = ppuVar5;
          func_0x00010bf529e0();
          if (ppuVar4 <= ppuVar8) break;
          ppuVar3 = param_8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar3;
          func_0x00010c0c5a40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar17;
          func_0x00010c08fa60();
          _objc_release(ppuVar17);
          if (ppuVar4 == (undefined **)0x0) {
            ppuVar17 = ppuVar5;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar17;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar17);
            ppuVar17 = ppuVar4;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = ppuVar17;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1c4c60(ppuVar3);
            _objc_release(unaff_x27);
            _objc_release(ppuVar17);
            _objc_release(ppuVar4);
          }
          _objc_release(ppuVar3);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          ppuVar4 = param_8;
          func_0x00010bf529e0();
        } while (ppuVar8 < ppuVar4);
      }
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uVar21 = 0xc2000000;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_10714aa28;
      puStack_1c0 = &UNK_110842e18;
      param_4 = &puStack_1d8;
      ppuStack_1b8 = param_3;
      func_0x000100162d98("APPSTORE");
      _objc_release(ppuVar5);
      _objc_release(param_8);
      ppuVar4 = ppuStack_238;
      param_6 = ppuStack_230;
      uVar9 = param_2;
      uVar13 = unaff_d8;
    }
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar5;
    func_0x00010bf0d6c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00010bf51e00();
    func_0x00010c16b3c0(ppuStack_220);
    _objc_release(ppuVar6);
    _objc_release(ppuVar10);
    _objc_release(ppuVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar3);
    param_6 = ppuStack_230;
    if ((int)param_8 != 0) {
      func_0x00010be78740(param_3);
      uVar9 = param_2;
      uVar13 = unaff_d8;
      goto LAB_10714a59c;
    }
    ppuStack_238 = (undefined **)CONCAT44(ppuStack_238._4_4_,(uint)(ppuVar4 == (undefined **)0x0));
    ppuVar10 = (undefined **)PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar16 = (long)_DAT_112764564;
    _objc_retain();
    ppuVar15 = *(undefined ***)((long)param_3 + lVar16);
    *(undefined ***)((long)param_3 + lVar16) = ppuVar10;
    ppuStack_240 = ppuVar10;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)((long)param_3 + (long)ppuVar20);
    func_0x00010c07e920();
    ppuStack_248 = (undefined **)0x3;
    if (iVar1 == 0) {
      ppuStack_248 = (undefined **)0x0;
    }
    ppuVar10 = param_3;
    func_0x00010c110480();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_258 = ppuVar17;
    func_0x0001070c53ec();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_260 = ppuVar17;
    func_0x00010c0b3820();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_268 = ppuVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
    func_0x00010bf311e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
    func_0x00010c243320(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)param_3 + (long)ppuVar20);
    func_0x00010bfbbbc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    ppuVar20 = param_3;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar20;
    func_0x00010bfb1160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar14;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uStack_288 = 0;
    uStack_290 = ppuStack_248;
    uVar9 = param_2;
    ppuStack_280 = ppuVar3;
    ppuStack_250 = ppuVar10;
    ppuStack_248 = ppuVar15;
    func_0x00010c24e320(uVar21,param_2,ppuVar17);
    _objc_release(ppuVar3);
    _objc_release(ppuVar14);
    _objc_release(ppuVar20);
    _objc_release(uVar7);
    _objc_release(uVar12);
    _objc_release(uVar13);
    _objc_release(ppuVar17);
    _objc_release(ppuStack_268);
    _objc_release(ppuStack_260);
    _objc_release(ppuStack_258);
    ppuVar4 = param_3;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_258 = ppuVar4;
    func_0x00010c0ef680();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_260 = ppuVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)0x19;
    param_4 = (undefined **)0x0;
    func_0x0001000819a8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar3;
    func_0x00010c06c680();
    uVar13 = 0x3fe2000000000000;
    if (((ulong)ppuVar10 & 1) == 0) {
      func_0x00010bfc43e0(param_3);
      uVar13 = uVar21;
    }
    ppuVar10 = param_3;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar10;
    func_0x0001070c48d4();
    _objc_retainAutoreleasedReturnValue();
    param_8 = ppuVar17;
    func_0x00010c06c320();
    ppuVar6 = ppuStack_220;
    unaff_x27 = ppuStack_240;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x10714a5f4;
    puStack_198 = &UNK_110990028;
    ppuStack_188 = ppuStack_240;
    ppuStack_190 = param_3;
    _objc_retain(ppuStack_220);
    ppuVar5 = ppuStack_230;
    ppuStack_180 = ppuVar6;
    _objc_retain(ppuStack_230);
    ppuVar20 = ppuStack_248;
    uStack_168 = SUB81(ppuStack_238,0);
    ppuStack_178 = ppuVar5;
    ppuStack_170 = ppuStack_248;
    _objc_retain(ppuStack_248);
    _objc_retain(unaff_x27);
    ppuVar14 = param_8;
    ppuVar15 = ppuVar20;
    uVar21 = uVar13;
    func_0x00010bfc9ea0(uVar13,ppuVar4);
    _objc_release(ppuVar17);
    _objc_release(ppuVar10);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_260);
    _objc_release(ppuStack_258);
    _objc_release(ppuStack_170);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_180);
    _objc_release(ppuStack_188);
    _objc_release(ppuVar20);
    _objc_release(unaff_x27);
    ppuVar4 = ppuStack_250;
    param_3 = ppuVar6;
    param_6 = ppuVar5;
    unaff_d9 = param_2;
  }
  _objc_release(ppuVar4);
LAB_10714a59c:
  _objc_release(ppuStack_228);
  _objc_release(param_6);
  ppuVar4 = ppuStack_220;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    uStack_298 = 0x10714a5f4;
    uStack_300 = unaff_d9;
    uStack_2f8 = uVar13;
    ppuStack_2f0 = ppuVar20;
    ppuStack_2e8 = unaff_x27;
    ppuStack_2e0 = param_6;
    ppuStack_2d8 = ppuVar10;
    ppuStack_2d0 = ppuVar5;
    ppuStack_2c8 = param_8;
    ppuStack_2c0 = param_3;
    ppuStack_2b8 = ppuVar8;
    ppuStack_2b0 = ppuVar17;
    ppuStack_2a8 = ppuVar3;
    puStack_2a0 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    _objc_retain(ppuVar14);
    _objc_retain(param_4);
    puVar18 = ppuVar4[4];
    _objc_retain(ppuVar15);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar19;
    func_0x00010c232fa0();
    _objc_release(puVar19);
    _objc_release(puVar18);
    ppuVar10 = param_4;
    if ((int)puVar11 != 0) {
      puVar11 = ppuVar4[4];
      func_0x00010bf46560(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar11;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e180();
      func_0x00010bf5c820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar19);
      _objc_release(puVar11);
    }
    lVar16 = (long)_DAT_1127644ac;
    uVar12 = *(undefined8 *)(ppuVar4[4] + lVar16);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c22ff00();
    _objc_release(uVar12);
    ppuVar20 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((int)uVar13 != 0) {
      puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = 0;
      func_0x00010c12fbe0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(puVar19);
      ppuVar10 = ppuVar20;
    }
    _objc_retain(ppuVar10);
    puVar11 = ppuVar4[4];
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar11;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar11);
    ppuVar20 = ppuVar10;
    if (puVar19 != (undefined *)0x0) {
      func_0x00010c23d0a0(param_4);
      puVar18 = ppuVar4[4];
      func_0x00010bf46560(puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar19;
      func_0x00010c0b8420();
      ppuVar17 = ppuVar14;
      func_0x00010854478c(uVar21,uVar9,0x3ff0000000000000,0x3ff0000000000000,ppuVar14,0,param_4,
                          puVar11 == (undefined *)0x2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(puVar19);
      _objc_release(puVar18);
      puVar18 = ppuVar4[4];
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar19;
      func_0x00010c232fa0();
      _objc_release(puVar19);
      _objc_release(puVar18);
      ppuVar20 = ppuVar17;
      if ((int)puVar11 != 0) {
        puVar11 = ppuVar4[4];
        func_0x00010bf46560(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar11;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e180();
        func_0x00010bf5c820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        _objc_release(puVar19);
        _objc_release(puVar11);
      }
      uVar13 = *(undefined8 *)(ppuVar4[4] + lVar16);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar13;
      func_0x00010c22ff00();
      _objc_release(uVar13);
      ppuVar17 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      if ((int)uVar21 != 0) {
        puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12fbe0(0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar20);
        _objc_release(puVar19);
        ppuVar20 = ppuVar17;
      }
    }
    puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_328 = 0xc2000000;
    pcStack_320 = FUN_10714aa1c;
    puStack_318 = &UNK_110841f80;
    puVar19 = ppuVar4[5];
    ppuStack_310 = ppuVar20;
    _objc_retain(puVar19);
    puStack_308 = puVar19;
    _objc_retain(ppuVar20);
    func_0x000100162d98("APPSTORE",&puStack_330);
    func_0x00010c109b80(ppuVar4[4]);
    _objc_release(ppuVar15);
    _objc_release(puStack_308);
    _objc_release(ppuStack_310);
    _objc_release(ppuVar20);
    _objc_release(ppuVar10);
    _objc_release(ppuVar14);
    _objc_release(param_4);
    return;
  }
  return;
}



/* Entry: 10714aa1c; end: 10714aa27;  */

void FUN_10714aa1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10714aa28; end: 10714aa5b;  */

void FUN_10714aa28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15e020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10714aa5c; end: 10714ac97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714aa5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x38);
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764490);
    func_0x00010c296d80();
    if (iVar1 != iVar2) goto LAB_10714ac68;
  }
  uVar3 = param_2;
  func_0x00010c151a00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = param_2;
  func_0x00010c0efcc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c141d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0ef9e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c29b720();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c29b880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79240(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127644ac);
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf51e00();
  _objc_release(uVar8);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10714ac98;
  puStack_88 = &UNK_110848218;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar3);
  uStack_80 = uVar3;
  _objc_retain(uVar9);
  uStack_78 = uVar9;
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar9);
  _objc_release(uVar3);
LAB_10714ac68:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10714ac98; end: 10714ad2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714ac98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_1127644ac);
    func_0x00010bfb6c80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar5 = lVar3;
    func_0x00010c0f38a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf38720(uVar4,param_2,uVar1,uVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10714ad30; end: 10714adab; -[PreviewViewController videoDuration] */

undefined8 FUN_10714ad30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10714adac; end: 10714b377; -[PreviewViewController didBecomeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714adac(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar3 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = param_1;
  func_0x00010c293700();
  if ((int)lVar5 != 0) {
    func_0x00010c21f2a0(param_1);
    lVar5 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x0001070c54e8();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c09ef40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287660();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    func_0x00010c23ac40(param_1);
  }
  lVar5 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfae100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3360();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar9 = *(ulong *)(param_1 + _DAT_1127644ac);
  func_0x00010c07e920();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar9 & 1) != 0) goto LAB_10714b0c0;
  lVar5 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf049a0();
  if ((int)lVar7 == 0) {
    lVar7 = param_1;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c23eb00();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    if ((int)lVar10 == 0) goto LAB_10714b0c0;
    lVar6 = param_1;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfadbe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf324a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x0001070c5674();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c292d20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c076e40();
    if ((int)lVar11 == 0) {
      bVar1 = false;
    }
    else {
      lVar11 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf00280();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar13 != 0;
      _objc_release();
      _objc_release(lVar12);
      _objc_release(lVar11);
    }
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x0001070c5698();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf70a00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c09eaa0();
    if (lVar11 == 2) {
      lVar11 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf00280();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar13 != 0;
      _objc_release();
      _objc_release(lVar12);
      _objc_release(lVar11);
    }
    else {
      bVar2 = false;
    }
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (bVar1 || bVar2) {
      lVar6 = param_1;
      func_0x00010c13b420();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c297c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1290c0();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      lVar6 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x0001070c5674();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c292d20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf10fa0();
      _objc_release(lVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      if (lVar11 == 4) {
        lVar6 = param_1;
        func_0x00010c09ea80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = puVar4;
        uStack_80 = 0xc2000000;
        uStack_78 = 0x10714b410;
        puStack_70 = &UNK_110842e18;
        lStack_68 = param_1;
        func_0x00010c136c80();
        goto LAB_10714af70;
      }
    }
  }
  else {
LAB_10714af70:
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
LAB_10714b0c0:
  lVar5 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar5 == 0) || (*(char *)(param_1 + _DAT_11276456c) == '\x01')) {
    puVar3 = PTR_PTR_1126b6b20;
    func_0x00010c22ba80(PTR_PTR_1126b6b20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ab40();
    _objc_release(puVar3);
  }
  puStack_b0 = puVar4;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10714b460;
  puStack_98 = &UNK_110842e18;
  lStack_90 = param_1;
  func_0x000100c749e0(0x3e4ccccd,"APPSTORE",&puStack_b0);
  return;
}



/* Entry: 10714b378; end: 10714b45f;  */

undefined8 FUN_10714b378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10714b460; end: 10714b467;  */

void FUN_10714b460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc94b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__adjustScreenBrightnessIfNeeded_11254fec8);
  return;
}



/* Entry: 10714b468; end: 10714b6bf; -[PreviewViewController prepareToExitPreviewWithLogging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714b468(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c083340();
  if (iVar1 == 0) {
LAB_10714b608:
    iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
    func_0x00010c0811c0();
    if (iVar1 == 0) goto LAB_10714b61c;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + lVar9);
      func_0x00010c25e340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) goto LAB_10714b608;
    }
    else {
      _objc_release();
    }
    lVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001070c5260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef1320();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c29ae80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf276c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(lVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010c25e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c25e340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf276c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12f0c0(lVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(lVar5);
  }
  func_0x00010c256e40(param_1);
LAB_10714b61c:
  if (param_3 != 0) {
    func_0x00010c286260(param_1);
    lVar9 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfc12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6860();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar9);
  }
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010c18e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisableLayoutWhenDisappearing_112641458,1)
  ;
  return;
}



/* Entry: 10714b6c0; end: 10714bdb3; -[PreviewViewController _exitPreviewWithExitType:] */

/* WARNING: Possible PIC construction at 0x00010714bbac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010714bbb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714b6c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127644f0);
  func_0x00010bf20760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar2);
  lVar10 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c070a20();
  uVar6 = param_1;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
    func_0x00010c06d080();
    if (iVar1 == 0) {
      uVar5 = *(ulong *)(param_1 + lVar10);
      func_0x00010c0811c0();
      uVar6 = *(ulong *)(param_1 + lVar10);
      if ((uVar5 & 1) == 0) {
        func_0x00010c06ba20();
        if ((int)uVar6 == 0) goto LAB_10714b870;
        uVar6 = *(ulong *)(param_1 + lVar10);
        func_0x00010befb5a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c26fea0();
        _objc_retainAutoreleasedReturnValue();
      }
      if (uVar6 == 0) goto LAB_10714b870;
      uVar5 = uVar6;
      func_0x00010c110bc0();
      uVar7 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 2) {
        func_0x00010c14a680(uVar9);
      }
      else {
        func_0x00010bf80fa0(uVar9);
      }
      _objc_release(uVar9);
    }
    else {
      uVar5 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf5fa80();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar5 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5fac0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      if (uVar9 == 0x7fffffffffffffff) goto LAB_10714b870;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf16700();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf16ae0();
    }
  }
  else {
    uVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a680();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0e0(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e3c80();
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
LAB_10714b870:
  uVar6 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5ce0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  if ((param_3 | 4) == 5) {
    uVar6 = param_1;
    func_0x00010c15df80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afc60();
    _objc_release(uVar5);
    _objc_release(uVar6);
    func_0x00010be64c60(param_1);
  }
  uVar6 = param_1;
  func_0x00010c15df80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5140();
  _objc_release(uVar5);
  _objc_release(uVar6);
  *(undefined1 *)(param_1 + (long)_DAT_112764530) = 1;
  uVar6 = param_1;
  func_0x00010c15df80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc20();
  _objc_release(uVar5);
  _objc_release(uVar6);
  func_0x00010c10a100(param_1);
  func_0x00010bf72ce0(param_1);
  func_0x00010bde0f80(param_1);
  uVar6 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010beffe80();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  if ((uVar8 & 1) == 0) {
    uVar6 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf6d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4de0();
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  uVar6 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a3a0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112764468);
  uVar6 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar6);
  if (param_3 != 2) {
    if (param_3 == 5) {
      uVar6 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c2647e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfafd80();
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0ad370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + (long)_DAT_11276454c),
               PTR_s_logPublicStoryMetricsWithIsSendi_112608ee8,0);
    return;
  }
  return;
}



/* Entry: 10714bdb4; end: 10714be47; -[PreviewViewController _clearSnapRecoveryDataOnExitIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714bdb4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127644ac);
  func_0x00010c0811c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c242ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ea20();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714be48; end: 10714bf2f; -[PreviewViewController startImageDisplayIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714be48(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c075080();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e9e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10714bf30; end: 10714c017; -[PreviewViewController stopImageDisplayIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714bf30(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c075080();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e80();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10714c018; end: 10714c14b; -[PreviewViewController stopVideoAndAudioIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714c018(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c083340();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256e20();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + _DAT_112764500) = 0;
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5c20();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714c14c; end: 10714c4af; -[PreviewViewController showVideoIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714c14c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + _DAT_112764574) & 1) != 0) {
    return;
  }
  lVar9 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c083340();
  if (iVar1 == 0) goto LAB_10714c44c;
  lVar8 = (long)_DAT_112764500;
  if ((*(byte *)(param_1 + lVar8) & 1) != 0) goto LAB_10714c44c;
  uVar2 = *(ulong *)(param_1 + lVar9);
  func_0x00010c235600();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000108edf704();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar6 != 0) goto LAB_10714c204;
  }
  else {
LAB_10714c204:
    lVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d600();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  func_0x00010bf461a0(param_1);
  lVar9 = *(long *)(param_1 + lVar9);
  func_0x00010bf30e80();
  if (lVar9 < 2) {
    lVar3 = param_1;
    if (lVar9 == 0) {
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010c29a9c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar9 != 1) goto LAB_10714c444;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112764538);
    *(long *)(param_1 + _DAT_112764538) = lVar4;
    _objc_release(uVar7);
    _objc_release(lVar9);
    _objc_release(lVar3);
    func_0x00010bebaf00(param_1);
  }
  else if (lVar9 == 2) {
    lVar9 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112764538);
    *(long *)(param_1 + _DAT_112764538) = lVar4;
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(lVar9);
    func_0x00010beb7ee0(param_1);
  }
  else if (lVar9 == 3) {
    lVar9 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112764538);
    *(long *)(param_1 + _DAT_112764538) = lVar4;
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(lVar9);
    func_0x00010bebb6c0(param_1);
  }
  else if (lVar9 == 4) {
    lVar9 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112764538);
    *(long *)(param_1 + _DAT_112764538) = lVar4;
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(lVar9);
    func_0x00010beb8b20(param_1);
  }
LAB_10714c444:
  *(undefined1 *)(param_1 + lVar8) = 1;
LAB_10714c44c:
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d300();
  _objc_release(lVar8);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714c4b0; end: 10714c9a7; -[PreviewViewController _showBatchCaptureMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714c4b0(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  long lVar14;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  puVar12 = (undefined *)(long)_DAT_1127644ac;
  puVar2 = *(undefined **)(param_1 + (long)puVar12);
  func_0x00010c06d080();
  if ((int)puVar2 != 0) {
    unaff_x20 = *(undefined **)(param_1 + (long)puVar12);
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x21;
    func_0x00010bf529e0();
    _objc_release(unaff_x21);
    puVar2 = unaff_x20;
    _objc_release();
    unaff_x22 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      unaff_x20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lVar3 = *(long *)(param_1 + (long)puVar12);
      puStack_178 = param_1;
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar14;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        unaff_x28 = *plStack_130;
        do {
          lVar13 = 0;
          do {
            if (*plStack_130 != unaff_x28) {
              _objc_enumerationMutation(lVar14);
            }
            puVar2 = *(undefined **)(lStack_138 + lVar13 * 8);
            puVar12 = puVar2;
            func_0x00010c083320();
            _objc_retain(puVar2);
            if ((int)puVar12 == 0) {
              unaff_x24 = PTR_PTR_1126d4d70;
              _objc_alloc();
              unaff_x26 = puVar2;
              func_0x00010c0fc940();
              unaff_x25 = puVar2;
              func_0x00010bfb6cc0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x25;
              func_0x00010bfe8380();
              if (puVar2 == (undefined *)0x0) {
                uStack_170 = 0;
                uStack_168 = 0;
                uStack_160 = 0;
              }
              else {
                func_0x00010bf8b160(&uStack_170,puVar2);
              }
              func_0x00010c0361a0();
            }
            else {
              unaff_x24 = PTR_PTR_1126d4d68;
              _objc_alloc();
              puVar12 = puVar2;
              func_0x00010bf0b7e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c057840();
              _objc_release(puVar12);
              unaff_x25 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              if (puVar2 == (undefined *)0x0) {
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_148 = 0;
                uStack_150 = 0;
                uStack_168 = 0;
                uStack_170 = 0;
              }
              else {
                func_0x00010c09e0e0(&uStack_170,puVar2);
              }
              func_0x00010c297240();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_f8 = unaff_x25;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c9a00(unaff_x24);
              _objc_release(unaff_x26);
            }
            _objc_release(unaff_x25);
            func_0x00010befa120(unaff_x20);
            _objc_release(unaff_x24);
            _objc_release(puVar2);
            lVar13 = lVar13 + 1;
          } while (lVar3 != lVar13);
          lVar3 = lVar14;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar14);
      puVar12 = puStack_178;
      puVar2 = puStack_178;
      func_0x00010bfa3600(puStack_178);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f500();
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar2);
      puVar2 = puVar12;
      func_0x00010bfa3600(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dd720();
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar2);
      uVar5 = *(undefined8 *)(puVar12 + _DAT_112764474);
      func_0x00010bfaeca0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beefbc0();
      _objc_release(uVar5);
      puVar2 = puVar12;
      func_0x00010bfa3600(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b3580();
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar2);
      puVar2 = puVar12;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = puVar2;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      param_1 = unaff_x22;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23ac20();
      _objc_release(param_1);
      _objc_release(unaff_x22);
      _objc_release(puVar2);
      puVar2 = puVar12;
      func_0x00010bf16da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      unaff_x21 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        unaff_x21 = puVar12;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x21;
        func_0x00010c29a960();
        _objc_retainAutoreleasedReturnValue();
        param_1 = unaff_x22;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf16da0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc920(param_1);
        _objc_release(puVar12);
        _objc_release(param_1);
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
      }
      puVar2 = unaff_x20;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10714c9a8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_1127644ac;
  puVar6 = *(undefined **)(puVar2 + lVar14);
  lStack_1e0 = unaff_x28;
  puStack_1d8 = unaff_x27;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = param_1;
  puStack_1b0 = unaff_x22;
  puStack_1a8 = unaff_x21;
  puStack_1a0 = unaff_x20;
  puStack_198 = puVar12;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010c0811c0();
  if ((int)puVar6 != 0) {
    unaff_x20 = PTR_PTR_1126bf608;
    _objc_alloc();
    uVar5 = *(undefined8 *)(puVar2 + lVar14);
    func_0x00010c26fea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010c13b540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c23eec0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052720();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(uVar5);
    puVar12 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd720();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar12 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1f0 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f500(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar12);
    uVar5 = *(undefined8 *)(puVar2 + _DAT_112764474);
    func_0x00010bfaeca0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefbc0();
    _objc_release(uVar5);
    puVar12 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = puVar9;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2291e0(puVar4);
    _objc_release(unaff_x27);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar12);
    iVar1 = (int)*(undefined8 *)(puVar2 + lVar14);
    func_0x00010c07e920();
    if (iVar1 != 0) {
      puVar12 = puVar2;
      func_0x00010c13b420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010bfaee80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = puVar9;
      func_0x00010bfccf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c960();
      _objc_release(unaff_x27);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar12);
    }
    puVar12 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar12 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ac20();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar12);
    unaff_x21 = puVar2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    param_1 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar2;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(param_1);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar6 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10714cef0;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (long)_DAT_1127644ac;
  puVar12 = *(undefined **)(puVar6 + lVar3);
  lStack_250 = lVar14;
  puStack_248 = unaff_x27;
  puStack_240 = unaff_x26;
  puStack_238 = unaff_x25;
  puStack_230 = unaff_x24;
  puStack_228 = param_1;
  puStack_220 = unaff_x22;
  puStack_218 = unaff_x21;
  puStack_210 = unaff_x20;
  puStack_208 = puVar2;
  ppuStack_200 = &puStack_190;
  func_0x00010c070a20();
  if ((int)puVar12 != 0) {
    unaff_x20 = PTR_PTR_1126bf608;
    _objc_alloc();
    uVar5 = *(undefined8 *)(puVar6 + lVar3);
    func_0x00010c26fea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar6;
    func_0x00010c13b540(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c23eec0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052720();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar5);
    puVar12 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd720();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_260 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f500(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229200(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    uVar5 = *(undefined8 *)(puVar6 + _DAT_112764474);
    func_0x00010bfaeca0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefbc0();
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(puVar6 + lVar3);
    func_0x00010c07e920();
    if (iVar1 != 0) {
      puVar12 = puVar6;
      func_0x00010c13b420(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar12;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bfaee80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfa3600(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfccf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c960();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar12);
    }
    puVar12 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010bfa3600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ac20();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar12);
    unaff_x21 = puVar6;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar12 = unaff_x20;
    _objc_release(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_2c0;
  pcStack_268 = FUN_10714d474;
  puStack_290 = unaff_x22;
  puStack_288 = unaff_x21;
  puStack_280 = unaff_x20;
  puStack_278 = puVar6;
  ppuStack_270 = &ppuStack_200;
  _objc_initWeak(auStack_298,puVar12);
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_10714d534;
  puStack_2a8 = &UNK_1109900e8;
  _objc_copyWeak(auStack_2a0,auStack_298);
  _objc_retainBlock(&puStack_2c0);
  func_0x00010c29aee0(puVar12);
  _objc_release(ppuVar11);
  _objc_destroyWeak(auStack_2a0);
  _objc_destroyWeak(auStack_298);
  return;
}



/* Entry: 10714c9a8; end: 10714ceef; -[PreviewViewController _showTimelineVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714c9a8(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar12;
  long lVar13;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_1127644ac;
  puVar2 = *(undefined **)(param_1 + lVar12);
  func_0x00010c0811c0();
  if ((int)puVar2 != 0) {
    unaff_x20 = PTR_PTR_1126bf608;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c26fea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c23eec0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052720();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd720();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f500(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764474);
    func_0x00010bfaeca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefbc0();
    _objc_release(uVar3);
    puVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = puVar7;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2291e0(puVar4);
    _objc_release(unaff_x27);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
    func_0x00010c07e920();
    if (iVar1 != 0) {
      puVar2 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bfaee80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = puVar7;
      func_0x00010bfccf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c960();
      _objc_release(unaff_x27);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar2);
    }
    puVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ac20();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar2);
    unaff_x21 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c26e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(unaff_x23);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(param_1);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10714cef0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_1127644ac;
  puVar8 = *(undefined **)(puVar2 + lVar13);
  lStack_d0 = lVar12;
  puStack_c8 = unaff_x27;
  puStack_c0 = unaff_x26;
  puStack_b8 = unaff_x25;
  puStack_b0 = unaff_x24;
  puStack_a8 = unaff_x23;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  puStack_90 = unaff_x20;
  puStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c070a20();
  if ((int)puVar8 != 0) {
    unaff_x20 = PTR_PTR_1126bf608;
    _objc_alloc();
    uVar3 = *(undefined8 *)(puVar2 + lVar13);
    func_0x00010c26fea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c13b540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c23eec0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052720();
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(uVar3);
    puVar8 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd720();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f500(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229200(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    uVar3 = *(undefined8 *)(puVar2 + _DAT_112764474);
    func_0x00010bfaeca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefbc0();
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(puVar2 + lVar13);
    func_0x00010c07e920();
    if (iVar1 != 0) {
      puVar8 = puVar2;
      func_0x00010c13b420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfaee80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfa3600(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfccf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c960();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar8);
    }
    puVar8 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bfa3600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ac20();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    unaff_x21 = puVar2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar8 = unaff_x20;
    _objc_release(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_140;
  pcStack_e8 = FUN_10714d474;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  puStack_100 = unaff_x20;
  puStack_f8 = puVar2;
  ppuStack_f0 = &puStack_80;
  _objc_initWeak(auStack_118,puVar8);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_10714d534;
  puStack_128 = &UNK_1109900e8;
  _objc_copyWeak(auStack_120,auStack_118);
  _objc_retainBlock(&puStack_140);
  func_0x00010c29aee0(puVar8);
  _objc_release(ppuVar11);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_118);
  return;
}



/* Entry: 10714cef0; end: 10714d473; -[PreviewViewController _showDirectorModeVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714cef0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar12;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_1127644ac;
  puVar2 = *(undefined **)(param_1 + lVar12);
  func_0x00010c070a20();
  if ((int)puVar2 != 0) {
    unaff_x20 = PTR_PTR_1126bf608;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c26fea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_1070c4574();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c23eec0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052720();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd720();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f500(lVar6);
    _objc_release(puVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229200(lVar6);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764474);
    func_0x00010bfaeca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefbc0();
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
    func_0x00010c07e920();
    if (iVar1 != 0) {
      lVar12 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar12;
      func_0x00010bfaeca0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfaee80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf7f1c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfccf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c960();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar12);
    }
    lVar12 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3580();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar12);
    lVar12 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ac20();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar12);
    unaff_x21 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(lVar12);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar12);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar2 = unaff_x20;
    _objc_release(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_d0;
  pcStack_78 = FUN_10714d474;
  lStack_a0 = unaff_x22;
  lStack_98 = unaff_x21;
  puStack_90 = unaff_x20;
  lStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_a8,puVar2);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10714d534;
  puStack_b8 = &UNK_1109900e8;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retainBlock(&puStack_d0);
  func_0x00010c29aee0(puVar2);
  _objc_release(ppuVar11);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  return;
}



/* Entry: 10714d474; end: 10714d533; -[PreviewViewController _showSingleVideo] */

void FUN_10714d474(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10714d534;
  puStack_48 = &UNK_1109900e8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010c29aee0(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10714d534; end: 10714db7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714d534(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) goto LAB_10714d7ac;
  lVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c078120();
  _objc_release(lVar1);
  lVar1 = param_2;
  lVar5 = param_2;
  if ((int)lVar2 == 0) {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfdb680();
    if ((int)lVar2 == 0) goto LAB_10714d710;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      _objc_release();
      goto LAB_10714d6f8;
    }
    lVar7 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar7;
    func_0x00010c25e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126c4af8;
    if (param_3 != lVar13) {
      lVar1 = param_3;
      func_0x00010c0d9500(param_3);
      func_0x00010bf8eb40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bf207a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(puVar8);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bf46560(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf20960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      lVar5 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf207a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173820((double)param_1);
      _objc_release(lVar13);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bfa3600(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf207a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbf120();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf207a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf207c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar7 != 0) {
        lVar1 = param_2;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        FUN_1070c4574();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c1104a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_2;
        func_0x00010bfa3600(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf207a0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar13;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf207c0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar5;
        func_0x00010c29aec0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20ebe0();
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar13);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2295e0(param_2);
        goto LAB_10714d710;
      }
    }
  }
  else {
    lVar2 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_1127644ac;
    uVar3 = *(undefined8 *)(param_2 + lVar13);
    func_0x00010c0d2100(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e620(*(undefined8 *)(param_2 + lVar13));
    func_0x00010bf90d60(lVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    func_0x00010c0d2440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bfaee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf731a0(lVar1);
LAB_10714d6f8:
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
LAB_10714d710:
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bfa3600(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf12b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bde5940(param_2);
LAB_10714d7ac:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10714db80; end: 10714e053; -[PreviewViewController _configureSingleVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714db80(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (int)&uStack_80;
  uVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c52a8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(uVar8,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c52a8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  func_0x00010c221580(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3580();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ac20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar8 = *(ulong *)(param_1 + (long)_DAT_1127644ac);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf91760();
  uVar3 = param_1;
  uVar4 = param_1;
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar8);
  }
  else {
    uVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf60ce0(&uStack_80,uVar6);
    }
    _CGAffineTransformIsIdentity();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar8);
    if (iVar1 == 0) {
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010bf60ce0(&uStack_80,uVar6);
      }
      func_0x00010c2235a0(uVar8,param_2,&uStack_80);
      _objc_release(uVar6);
      _objc_release(uVar5);
      goto LAB_10714df74;
    }
  }
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_80,uVar4,param_2,1);
  }
  func_0x00010c2235a0(uVar8,param_2,&uStack_80);
LAB_10714df74:
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010c0d2600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c0d2600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920(uVar4,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010be3f8a0();
  if ((uVar2 & 1) == 0) {
    func_0x00010beaa720(param_1);
  }
  return;
}



/* Entry: 10714e054; end: 10714e0c7; -[PreviewViewController currentSnapEditingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714e054(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127644ac);
    func_0x00010c06ba20();
    _objc_release(lVar2);
    if (iVar1 == 0) goto LAB_10714e0b8;
  }
  func_0x00010bf58f40(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
LAB_10714e0b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10714e0c8; end: 10714edd3; -[PreviewViewController createSnapEditingStateForFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714e0c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
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
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_90;
  undefined8 uStack_80;
  
  lVar2 = param_2;
  if (param_4 == 1) {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = lVar4;
    func_0x00010c255480();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 0) {
      uStack_80 = 0;
      goto LAB_10714e1a8;
    }
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = lVar4;
    func_0x00010c255460();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_10714e1a8:
  lVar2 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2702c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfadbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf07a40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c0720c0();
  if ((int)lVar2 == 0) {
    uStack_90 = 0;
    uVar87 = 0;
    uVar50 = param_1;
  }
  else {
    lVar2 = param_2;
    func_0x00010c13b420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c297c40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = lVar7;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c13b420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c297c40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60();
    uVar50 = param_1;
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    uVar87 = param_1;
  }
  puVar9 = PTR_PTR_1126d4d78;
  _objc_alloc();
  func_0x00010c06c1e0();
  lVar2 = lVar5;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  lVar17 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf01f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e660();
  lVar20 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf01f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2807a0();
  lVar23 = param_2;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c2a2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a2d00();
  lVar26 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28be00();
  lVar34 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279160();
  func_0x00010c2992a0();
  lVar85 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar85);
  func_0x00010c075080();
  uVar86 = 0;
  if (iVar1 != 0) {
    uStack_330 = param_2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uStack_338 = uStack_330;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_340 = uStack_338;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe75c0();
    uVar86 = uVar50;
  }
  uVar37 = *(undefined8 *)(param_2 + lVar85);
  func_0x00010c23faa0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar39;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010bf0d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = lVar43;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  lVar45 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010bf207a0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010bf208a0();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_2 + lVar85);
  func_0x00010c1115c0();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar49;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar50;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar85;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar55;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar59;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = lVar60;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = lVar61;
  func_0x00010c08fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = lVar5;
  func_0x00010bf08000();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = lVar62;
  func_0x000108452f14(lVar62,lVar63);
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = lVar66;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = lVar67;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = lVar69;
  func_0x00010bf5ce40();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = lVar70;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = lVar71;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = lVar73;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = lVar74;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = lVar75;
  func_0x000108453c74();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_2;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = lVar77;
  func_0x00010c26c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = lVar78;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = lVar79;
  func_0x00010bf60820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_2;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = lVar81;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  lVar83 = lVar82;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = lVar83;
  func_0x00010befee00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019ba0(uVar87,uVar86);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(param_2);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar85);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(uVar37);
  if (iVar1 != 0) {
    _objc_release(uStack_340);
    _objc_release(uStack_338);
    _objc_release(uStack_330);
  }
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uStack_90);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10714edd4; end: 10714eec3;  */

void FUN_10714edd4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf730;
  _objc_alloc(PTR_PTR_1126bf730);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_60,param_2);
  }
  func_0x00010c297240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_60,param_2);
  }
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055780(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10714eec4; end: 10714f02b; -[PreviewViewController presentMusicPicker] */

void FUN_10714eec4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d880();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c111f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eb00();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c111f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e8a0();
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06ba20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165540();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10714f02c; end: 10714f277; -[PreviewViewController _subsribeOnMediaPlaybackEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714f02c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112764578);
  *(undefined **)(param_1 + _DAT_112764578) = puVar1;
  _objc_release(uVar7);
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe8440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ff340();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10714f278;
  puStack_88 = &UNK_110990138;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ff340();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 10714f278; end: 10714f31b;  */

void FUN_10714f278(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd660(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10714f31c; end: 10714f347;  */

void FUN_10714f31c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be375a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714f348; end: 10714f573;  */

void FUN_10714f348(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10714f574;
  puStack_88 = &UNK_110850658;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10714f5a8;
  puStack_b0 = &UNK_110990168;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10714f604;
  puStack_d8 = &UNK_110990198;
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10714f648;
  puStack_100 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f8,param_1 + 0x20);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10714f674;
  puStack_128 = &UNK_1108434b0;
  _objc_copyWeak(auStack_120,param_1 + 0x20);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x10714f6a0;
  puStack_150 = &UNK_1108434b0;
  _objc_copyWeak(auStack_148,param_1 + 0x20);
  _objc_copyWeak(auStack_170,param_1 + 0x20);
  func_0x00010c0bd640(param_2);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_2);
  return;
}



/* Entry: 10714f574; end: 10714f5a7;  */

void FUN_10714f574(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714f5a8; end: 10714f603;  */

void FUN_10714f5a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714f604; end: 10714f647;  */

void FUN_10714f604(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714f648; end: 10714f6f7;  */

void FUN_10714f648(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714f6f8; end: 10714f78f; -[PreviewViewController _imagePlaybackDidRenderImage] */

void FUN_10714f6f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beffe80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePlaceholderView_112580d28);
    return;
  }
  return;
}



/* Entry: 10714f790; end: 10714fb53; -[PreviewViewController _videoPlaybackDidRenderFirstFrameOfFrameSourceAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714f790(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  uVar7 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c09b840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acbe0();
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c15df80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afbc0();
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c110620();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar7 & 1) != 0) {
    return;
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10714fb54;
  puStack_88 = &UNK_110848c48;
  ppuVar4 = &puStack_a0;
  uStack_80 = param_1;
  uStack_78 = param_3;
  _objc_retainBlock();
  lVar10 = (long)_DAT_1127644ac;
  lVar5 = *(long *)(param_1 + lVar10);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar5 == 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  else {
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x10714fc5c;
    puStack_b0 = &UNK_110842e18;
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10714fd00;
    puStack_d8 = &UNK_110842508;
    uStack_a8 = param_1;
    _objc_retain(ppuVar4);
    ppuStack_d0 = ppuVar4;
    func_0x00010bf03420(0x3fd0000000000000,puVar6);
    _objc_release(ppuStack_d0);
  }
  lVar5 = (long)_DAT_11276457c;
  uVar7 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar3 = uVar7;
  _objc_opt_respondsToSelector();
  _objc_release(uVar7);
  if ((uVar3 & 1) == 0) goto LAB_10714fac8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c06d080();
  if (iVar2 == 0) {
    uVar7 = *(ulong *)(param_1 + lVar10);
    func_0x00010c0811c0();
    if ((uVar7 & 1) != 0) goto LAB_10714fac8;
    uVar7 = *(ulong *)(param_1 + lVar10);
    func_0x00010c070a20();
    if ((uVar7 & 1) != 0) goto LAB_10714fac8;
    uVar3 = param_1 + lVar5;
    _objc_loadWeakRetained(uVar3);
    uVar9 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2bd7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79bc0(uVar3);
LAB_10714fa9c:
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    uVar7 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf16b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar7);
    puVar6 = PTR_PTR_1126c4280;
    _objc_retain(uVar3);
    _objc_opt_class(puVar6);
    uVar9 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar6);
    uVar7 = uVar3;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar3);
    if (uVar7 != 0) {
      uVar7 = param_1 + lVar5;
      _objc_loadWeakRetained(uVar7);
      uVar8 = uVar3;
      func_0x00010bf0b7e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf79bc0(uVar7);
      uVar9 = uVar3;
      goto LAB_10714fa9c;
    }
    uVar9 = 0;
  }
  _objc_release(uVar9);
  _objc_release(uVar3);
LAB_10714fac8:
  _objc_initWeak(auStack_f8,param_1);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10714fd0c;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_f8);
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_120);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 10714fb54; end: 10714fcff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714fb54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010be8ce20(*(undefined8 *)(param_1 + 0x20));
  lVar4 = (long)_DAT_1127644f0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c27ac80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c219b00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2580();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf169e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10714fd00; end: 10714fd0b;  */

void FUN_10714fd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010714fd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10714fd0c; end: 10714fd3f;  */

void FUN_10714fd0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4dc60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10714fd40; end: 10714fdff; -[PreviewViewController _videoPlaybackDidPlayToSnapAtIndex:lastPlayedIndex:] */

void FUN_10714fd40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d2540();
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10714fe00; end: 1071500cf; -[PreviewViewController _videoPlaybackDidPlayFromSourceAtIndex:snapIndex:toSourceAtIndex:snapIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10714fe00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + _DAT_112764580) = param_6;
  lVar2 = param_1;
  func_0x00010bec24c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab860();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf21f60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(param_1,param_2,lVar7);
  _objc_release(lVar7);
  lVar7 = (long)_DAT_1127644ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c0811c0();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010c070a20();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
      func_0x00010c06d080();
      if (iVar1 == 0) {
        func_0x00010bee8d40(param_1,param_2,param_6,param_4);
      }
      else {
        func_0x00010bf16940(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      goto LAB_107150074;
    }
    lVar7 = param_1;
    func_0x00010bfede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfedea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2868c0(lVar7,param_2,lVar4,lVar6 == 0);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111960();
  }
  else {
    lVar7 = param_1;
    func_0x00010bfede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfedea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2868c0(lVar7,param_2,lVar4,lVar6 == 0);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2700a0();
  }
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(param_1);
LAB_107150074:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071500d0; end: 10715017f; -[PreviewViewController _videoPlaybackResetVideoAsset] */

void FUN_1071500d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf12b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107150180; end: 1071502b3; -[PreviewViewController _videoPlaybackWillLoopVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107150180(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + _DAT_1127644ac);
  func_0x00010c0d2100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d20c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf5fac0();
    func_0x00010c14a2a0(lVar1,param_2,lVar6,1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1071502b4; end: 1071502c3; -[PreviewViewController _videoPlaybackPlayerItemFailedToSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071502b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0afb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logSnapCreateAVPlayerSetupFailur_1126098f0,
             *(undefined8 *)(param_1 + _DAT_1127644ac));
  return;
}



/* Entry: 1071502c4; end: 1071502d3; -[PreviewViewController _videoPlaybackPlayerItemStatusFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071502c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0afbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logSnapCreateStepPlaybackFailure_112609908,
             *(undefined8 *)(param_1 + _DAT_1127644ac));
  return;
}



/* Entry: 1071502d4; end: 10715048b; -[PreviewViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071502d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  long lStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126f8a50;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1fca20(param_1);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112764468);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ed2a18;
  func_0x00010c07e920(*(undefined8 *)(param_1 + _DAT_1127644ac));
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001084236ec();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  if ((int)lVar6 != 0) {
    func_0x00010be77a80(param_1);
  }
  func_0x00010be64cc0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_d8,param_1);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_e0,auStack_d8);
  func_0x00010c0311a0(puVar3);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3400;
  puVar7 = auStack_d8;
  _objc_loadWeakRetained(puVar7);
  _objc_retain();
  puVar8 = puVar7;
  func_0x00010c275a00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_d8;
  _objc_loadWeakRetained(puVar9);
  _objc_retain();
  puVar10 = auStack_d8;
  _objc_loadWeakRetained(puVar10);
  func_0x00010bfd9540();
  func_0x00010c108a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  return;
}



/* Entry: 10715048c; end: 107150687; -[PreviewViewController _preloadQuickPost] */

void FUN_10715048c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0311a0(puVar1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c3400;
  puVar4 = auStack_68;
  _objc_loadWeakRetained(puVar4);
  _objc_retain();
  puVar5 = puVar4;
  func_0x00010c275a00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_loadWeakRetained(puVar6);
  _objc_retain();
  puVar7 = auStack_68;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bfd9540();
  func_0x00010c108a00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 107150688; end: 10715070f;  */

void FUN_107150688(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befbb60(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107150710; end: 10715071b;  */

void FUN_107150710(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107150718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}



/* Entry: 10715071c; end: 107150f03; -[PreviewViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10715071c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126f8a50;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar2 = param_5;
  func_0x00010bf80220();
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010c11cac0(param_5);
  uVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010be5e400(param_5);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c254bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_5;
    func_0x00010c254bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fbbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + (long)_DAT_1127644f0));
    func_0x00010c2293a0(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06bc00();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar13 = (long)_DAT_1127644f0;
  lVar7 = *(long *)(param_5 + lVar13);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar7 != 0) && ((uVar6 & 1) == 0)) {
    func_0x00010be5e460(param_1,param_2,param_3,param_4,param_5);
    uVar8 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010bf4b2a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar8);
  }
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  uVar2 = param_5;
  func_0x00010c1122a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0x404e000000000000;
  uVar14 = 0;
  uVar8 = 0;
  uVar17 = 0x404e000000000000;
  func_0x00010c11cb00(0,0,0x404e000000000000,0x404e000000000000,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar9 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c15b700(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960();
    _objc_release(uVar9);
    uVar10 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c15b700(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar9);
    _objc_release(uVar10);
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    uVar9 = *(undefined8 *)(param_5 + lVar13);
    func_0x00010c15b700(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b720();
    func_0x00010c11cb00(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar9);
  }
  uVar2 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288740();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c08c840(param_5);
  uVar2 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001084236ec();
  if ((int)uVar5 == 0) {
    uVar5 = param_5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x0001070c4748();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c258e00();
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar12 & 1) != 0) goto LAB_107150c28;
    uVar2 = param_5;
    func_0x00010c25ac00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 == 0) goto LAB_107150c28;
    func_0x00010c25abe0(param_5);
    uVar2 = param_5;
    uVar9 = uVar14;
    uVar10 = uVar8;
    uVar16 = uVar15;
    uVar18 = uVar17;
    func_0x00010c25ac00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb68e0();
    _CGRectEqualToRect(uVar14,uVar8,uVar15,uVar17,uVar9,uVar10,uVar16,uVar18);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_107150c28;
    func_0x00010c25abe0(param_5);
    uVar2 = param_5;
    func_0x00010c25ac00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(uVar14,uVar8,uVar15,uVar17);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c25ac00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
  }
  else {
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_107150c28:
  func_0x00010bfbb9e0(param_5);
  uVar2 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar13);
  func_0x00010bf4b2a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c29caa0(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar5 != 0) {
    uVar2 = param_5;
    func_0x00010bfa3600(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ca80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ca80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bfa3600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c112400();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befd920(*(undefined8 *)(param_5 + lVar13));
  uVar8 = *(undefined8 *)(param_5 + lVar13);
  func_0x00010bf4b2a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar8);
  return;
}



/* Entry: 107150f04; end: 107150f33; -[PreviewViewController sizeForChildContentContainer:withParentContainerSize:] */

undefined1  [16] FUN_107150f04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010be5e400(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 107150f34; end: 107150f37; -[PreviewViewController prefersStatusBarHidden] */

void FUN_107150f34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prefersStatusBarHidden_11257b538);
  return;
}



/* Entry: 107150f38; end: 107151003; -[PreviewViewController _prefersStatusBarHidden] */

bool FUN_107150f38(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  iVar2 = (int)puVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar5 = param_3;
  func_0x000100841590(param_3,param_4);
  _objc_release();
  func_0x0001007f8afc();
  if ((iVar2 == 0) || (param_3 = dVar5 / param_4, param_3 <= 0.0)) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar5 = param_3;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    bVar1 = param_3 < dVar5;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107151004; end: 107151047; -[PreviewViewController preferredStatusBarStyle] */

undefined * FUN_107151004(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107151048; end: 107151067; -[PreviewViewController preferredScreenEdgesDeferringSystemGestures] */

undefined8 FUN_107151048(int param_1)

{
  undefined8 uVar1;
  
  func_0x0001008522a8();
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0xf;
  }
  return uVar1;
}



/* Entry: 107151068; end: 10715106f; -[PreviewViewController prefersHomeIndicatorAutoHidden] */

undefined8 FUN_107151068(void)

{
  return 1;
}



/* Entry: 107151070; end: 1071510fb; -[PreviewViewController layoutAllSubviewsWithFixedOrientation] */

void FUN_107151070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be976a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be49580(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bde77c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bde77a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cc20(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071510fc; end: 107151193; -[PreviewViewController _rootSubviewWithFixedOrientationAndSafeAreaSize] */

void FUN_1071510fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c720(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107151194; end: 107151387; -[PreviewViewController _layoutRootSubviewsWithFixedOrientationAndSafeAreaSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107151194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar6 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010be5e400(param_5);
  _objc_release(uVar6);
  func_0x00010be5e460(param_1,param_2,param_3,param_4,param_5);
  uVar6 = param_3;
  uVar15 = param_4;
  func_0x00010b6908b0();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_140,auStack_f8,0x10);
  if (lVar2 != 0) {
    func_0x000100841590(param_3,param_4);
    lVar9 = *plStack_130;
    uVar17 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar16 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_7);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        func_0x00010c1739e0(param_3,param_4,uVar6,uVar15,uVar8);
        uStack_170 = uVar16;
        uStack_168 = uVar17;
        uStack_160 = uVar11;
        uStack_158 = uVar13;
        uStack_150 = uVar12;
        uStack_148 = uVar14;
        func_0x00010c219960(uVar8,param_6,&uStack_170);
        func_0x00010c17a6a0(param_1,param_2,uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_7;
      func_0x00010bf52a60(param_7,param_6,&uStack_140,auStack_f8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_6,5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127644ac;
  lVar2 = *(long *)(param_7 + lVar9);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_7;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_7;
      func_0x00010c13b420(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar2;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1302a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar1,param_6,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar10);
      _objc_release(lVar2);
    }
    lVar2 = param_7;
    func_0x00010bfa3600(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar1,param_6,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_release(lVar2);
    func_0x00010c14c720(puVar1,param_6,*(undefined8 *)(param_7 + _DAT_1127644f4));
    uVar5 = *(ulong *)(param_7 + lVar9);
    func_0x00010c075080();
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_7 + _DAT_1127644f0);
      func_0x00010c27ac80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar1,param_6,uVar6);
      _objc_release(uVar6);
    }
    lVar2 = param_7;
    func_0x00010bfa3600(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010beffa20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010bf20a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar1,param_6,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar2);
    func_0x00010bfa3600(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010beffa20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bfcfbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c13b420(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14c720(puVar1,param_6,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(param_7);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107151388; end: 1071516cb; -[PreviewViewController _containerSubviewsWithFixedOrientationAndFullSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107151388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127644ac;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 != 0) {
      lVar2 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c1302a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar1,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar1,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c14c720(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127644f4));
    uVar6 = *(ulong *)(param_1 + lVar9);
    func_0x00010c075080();
    if ((uVar6 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + _DAT_1127644f0);
      func_0x00010c27ac80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar1,param_2,uVar7);
      _objc_release(uVar7);
    }
    lVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010beffa20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf20a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar1,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar2);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010beffa20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010bfcfbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c1302a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14c720(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar8 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1071516cc; end: 10715188f; -[PreviewViewController _containerSubviewsWithFixedOrientationAndContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071516cc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127644ac;
  lVar3 = *(long *)(param_1 + lVar11);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf5e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar6 == 0) {
      lVar3 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c1302a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar2,param_2,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c075080();
  if (iVar1 != 0) {
    uVar7 = *(ulong *)(param_1 + lVar11);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c07f120();
    _objc_release(uVar7);
    if ((uVar8 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + _DAT_1127644f0);
      func_0x00010c27ac80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar2,param_2,uVar9);
      _objc_release(uVar9);
    }
  }
  puVar10 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107151890; end: 107151c1b; -[PreviewViewController layoutContainerSubviewsWithFixedOrientationAndFullSize:contentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107151890(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long lVar21;
  double dVar22;
  long lVar23;
  double dVar24;
  undefined *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined *puStack_328;
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  ulong uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  double dStack_2f8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar12 = (long)_DAT_1127644f0;
  uVar2 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar24 = param_1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar18 = dVar24;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010b6908b0();
  _objc_release(uVar2);
  dVar19 = 0.0;
  _objc_retain(param_7);
  uVar11 = param_7;
  func_0x00010bf52a60();
  uVar2 = param_3;
  uVar14 = param_4;
  if (uVar11 != 0) {
    dVar20 = param_1;
    dVar22 = dVar24;
    func_0x000100841590(param_1,dVar24);
    lVar12 = lRam0000000000000000;
    do {
      uVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(param_7);
        }
        uVar13 = *(undefined8 *)(uVar16 * 8);
        uVar2 = param_3;
        uVar14 = param_4;
        func_0x00010c1739e0(dVar20,dVar22,param_3,param_4,uVar13);
        func_0x00010c219960(uVar13);
        dVar19 = dVar18;
        func_0x00010c17a6a0(uVar13);
        uVar16 = uVar16 + 1;
      } while (uVar11 != uVar16);
      uVar11 = param_7;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  _objc_release(param_7);
  func_0x00010c0c4080(*(undefined8 *)(param_5 + _DAT_1127644ac));
  _objc_retain(param_8);
  lVar12 = param_8;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    dVar20 = 0.0;
    if (dVar19 != 0.0) {
      if (dVar19 == INFINITY) {
        dVar24 = 0.0;
        dVar20 = param_1;
      }
      else {
        dVar20 = dVar24 * dVar19;
        if (param_1 <= dVar24 * dVar19) {
          dVar24 = param_1 / dVar19;
          dVar20 = param_1;
        }
      }
    }
    lVar21 = (long)dVar20;
    lVar23 = (long)dVar24;
    func_0x000100841590(lVar21,lVar23);
    lVar7 = lRam0000000000000000;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_8);
        }
        uVar13 = *(undefined8 *)(lVar15 * 8);
        func_0x00010c1739e0(lVar21,lVar23,uVar2,uVar14,uVar13);
        func_0x00010c219960(uVar13);
        func_0x00010c17a6a0(uVar13);
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      lVar12 = param_8;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puStack_308 = PTR_PTR_1126f8a50;
  uStack_310 = param_7;
  uStack_300 = param_2;
  dStack_2f8 = dVar18;
  _objc_msgSendSuper2(&uStack_310,PTR_s_viewWillAppear__1126853f0);
  uVar11 = param_7;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06bc00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar11 = param_7;
  func_0x00010c13b540(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c111920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e21e0();
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  puVar6 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar6);
  func_0x00010c169600(param_7);
  puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76e60(param_7);
  func_0x00010c14dc20(puVar6);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar6);
  uVar11 = param_7;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beffe80();
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  if ((uVar4 & 1) == 0) {
    uVar11 = param_7;
    func_0x00010c13b540(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010bf6d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d9a0();
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar11);
    _objc_initWeak(auStack_318,param_7);
    puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_338 = 0xc2000000;
    pcStack_330 = FUN_107152600;
    puStack_328 = &UNK_1108434b0;
    _objc_copyWeak(auStack_320,auStack_318);
    func_0x000100c749e0("APPSTORE",&puStack_340);
    _objc_destroyWeak(auStack_320);
    _objc_destroyWeak(auStack_318);
  }
  else {
    uVar11 = param_7;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar11);
  }
  lVar10 = (long)_DAT_1127644ac;
  iVar17 = (int)*(undefined8 *)(param_7 + lVar10);
  func_0x00010c07e840();
  if (iVar17 == 0) {
LAB_107151f88:
    uVar11 = param_7;
    func_0x00010c13b540(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x0001070c52a8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0680();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar16);
    _objc_release(uVar11);
  }
  else {
    iVar17 = (int)*(undefined8 *)(param_7 + lVar10);
    func_0x00010c06d080();
    if (iVar17 != 0) goto LAB_107151f88;
  }
  uVar11 = param_7;
  func_0x00010c13b420(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x00010bfae100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  func_0x00010c0b0840(uVar4);
  uVar11 = param_7;
  func_0x00010c13b540(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5c00();
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  uVar11 = param_7;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010beffe80();
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  if ((int)uVar5 != 0) {
    func_0x00010c23ac40(param_7);
  }
  func_0x00010bdfd4c0(param_7);
  iVar1 = (int)*(undefined8 *)(param_7 + lVar10);
  func_0x00010c075080();
  iVar17 = _DAT_1127644f0;
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_7 + (long)_DAT_1127644f0);
    func_0x00010c27ac80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar2);
    lVar12 = *(long *)(param_7 + lVar10);
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar16 = param_7;
      func_0x00010bf46560(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar16;
      func_0x00010bf5edc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
    }
    _objc_release(lVar12);
    func_0x00010be3f4e0(param_7);
    uVar14 = *(undefined8 *)(param_7 + (long)iVar17);
    uVar2 = *(undefined8 *)(param_7 + lVar10);
    func_0x00010c0fd9a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ae0(uVar14);
    _objc_release(uVar2);
    func_0x00010c24ef40(param_7);
    goto LAB_107152374;
  }
  iVar17 = (int)*(undefined8 *)(param_7 + lVar10);
  func_0x00010c07e920();
  if (iVar17 == 0) {
LAB_10715222c:
    iVar1 = (int)*(undefined8 *)(param_7 + lVar10);
    func_0x00010c07e860();
    iVar17 = _DAT_1127644f0;
    if (iVar1 == 0) {
      func_0x00010c0c4080(*(undefined8 *)(param_7 + lVar10));
      iVar17 = _DAT_1127644f0;
      uVar2 = *(undefined8 *)(param_7 + (long)_DAT_1127644f0);
      func_0x00010c27ac80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107152334;
    }
    uVar2 = *(undefined8 *)(param_7 + (long)_DAT_1127644f0);
    func_0x00010c27ac80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
  }
  else {
    uVar11 = *(ulong *)(param_7 + lVar10);
    func_0x00010c07e880();
    if ((uVar11 & 1) == 0) {
      uVar14 = *(undefined8 *)(param_7 + lVar10);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010c06e820();
      _objc_release(uVar14);
      if ((int)uVar2 == 0) goto LAB_10715222c;
    }
    uVar2 = *(undefined8 *)(param_7 + lVar10);
    func_0x00010c29a1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar2);
    iVar17 = _DAT_1127644f0;
    uVar2 = *(undefined8 *)(param_7 + (long)_DAT_1127644f0);
    func_0x00010c27ac80(uVar2);
    _objc_retainAutoreleasedReturnValue();
LAB_107152334:
    func_0x00010c182220();
  }
  _objc_release(uVar2);
  func_0x00010be3f4e0(param_7);
  uVar2 = *(undefined8 *)(param_7 + (long)iVar17);
  uVar11 = *(ulong *)(param_7 + lVar10);
  func_0x00010c29a1e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219ae0(uVar2);
LAB_107152374:
  _objc_release(uVar11);
  func_0x00010bef7be0(param_7);
  uVar11 = param_7;
  func_0x00010c13b540(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar11;
  func_0x0001070c562c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010c28dee0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fde0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar11);
  iVar1 = (int)*(undefined8 *)(param_7 + lVar10);
  func_0x00010c070a20();
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_7 + lVar10);
    func_0x00010bf7f7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010c159f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    uVar11 = param_7;
    if (lVar12 == 0) {
      func_0x00010bec24c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ab840(uVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar16 = uVar11;
      func_0x00010bf21f60(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0(param_7);
    }
    else {
      uVar8 = *(undefined8 *)(param_7 + lVar10);
      func_0x00010bf7f7e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c0c45a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar2;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_7 + lVar10);
      func_0x00010bf7f7e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar9;
      func_0x00010c159f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar9);
      _objc_release(uVar14);
      _objc_release(uVar2);
      _objc_release(uVar8);
      func_0x00010bec24c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ab840(uVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar16 = uVar11;
      func_0x00010bf21f60(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0(param_7);
      _objc_release(uVar16);
      uVar16 = *(ulong *)(param_7 + (long)iVar17);
      func_0x00010c0da200(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174840();
    }
    _objc_release(uVar16);
    _objc_release(uVar11);
  }
  func_0x00010be64cc0(param_7);
  _objc_release(uVar4);
  return;
}



/* Entry: 107151c1c; end: 1071525ff; -[PreviewViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107151c1c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f8a50;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_viewWillAppear__1126853f0);
  uVar13 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06bc00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar13 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c111920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e21e0();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  puVar5 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar5);
  func_0x00010c169600(param_1);
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76e60(param_1);
  func_0x00010c14dc20(puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar5);
  uVar13 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beffe80();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  if ((uVar3 & 1) == 0) {
    uVar13 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf6d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6d9a0();
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar13);
    _objc_initWeak(auStack_88,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107152600;
    puStack_98 = &UNK_1108434b0;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x000100c749e0("APPSTORE",&puStack_b0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    uVar13 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar13);
  }
  lVar15 = (long)_DAT_1127644ac;
  iVar16 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010c07e840();
  if (iVar16 == 0) {
LAB_107151f88:
    uVar13 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x0001070c52a8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf2a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0680();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar13);
  }
  else {
    iVar16 = (int)*(undefined8 *)(param_1 + lVar15);
    func_0x00010c06d080();
    if (iVar16 != 0) goto LAB_107151f88;
  }
  uVar13 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bfae100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  func_0x00010c0b0840(uVar3);
  uVar13 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5c00();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  uVar13 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010beffe80();
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  if ((int)uVar4 != 0) {
    func_0x00010c23ac40(param_1);
  }
  func_0x00010bdfd4c0(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010c075080();
  iVar16 = _DAT_1127644f0;
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127644f0);
    func_0x00010c27ac80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar6);
    lVar7 = *(long *)(param_1 + lVar15);
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      uVar13 = 0;
    }
    else {
      uVar12 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf5edc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
    }
    _objc_release(lVar7);
    func_0x00010be3f4e0(param_1);
    uVar14 = *(undefined8 *)(param_1 + (long)iVar16);
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c0fd9a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ae0(uVar14);
    _objc_release(uVar6);
    func_0x00010c24ef40(param_1);
    goto LAB_107152374;
  }
  iVar16 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010c07e920();
  if (iVar16 == 0) {
LAB_10715222c:
    iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
    func_0x00010c07e860();
    iVar16 = _DAT_1127644f0;
    if (iVar1 == 0) {
      func_0x00010c0c4080(*(undefined8 *)(param_1 + lVar15));
      iVar16 = _DAT_1127644f0;
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127644f0);
      func_0x00010c27ac80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107152334;
    }
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127644f0);
    func_0x00010c27ac80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
  }
  else {
    uVar13 = *(ulong *)(param_1 + lVar15);
    func_0x00010c07e880();
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar14;
      func_0x00010c06e820();
      _objc_release(uVar14);
      if ((int)uVar6 == 0) goto LAB_10715222c;
    }
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c29a1e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar6);
    iVar16 = _DAT_1127644f0;
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127644f0);
    func_0x00010c27ac80(uVar6);
    _objc_retainAutoreleasedReturnValue();
LAB_107152334:
    func_0x00010c182220();
  }
  _objc_release(uVar6);
  func_0x00010be3f4e0(param_1);
  uVar6 = *(undefined8 *)(param_1 + (long)iVar16);
  uVar13 = *(ulong *)(param_1 + lVar15);
  func_0x00010c29a1e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219ae0(uVar6);
LAB_107152374:
  _objc_release(uVar13);
  func_0x00010bef7be0(param_1);
  uVar13 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x0001070c562c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c28dee0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fde0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar13);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x00010c070a20();
  if (iVar1 != 0) {
    lVar8 = *(long *)(param_1 + lVar15);
    func_0x00010bf7f7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c159f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    uVar13 = param_1;
    if (lVar7 == 0) {
      func_0x00010bec24c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ab840(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar12 = uVar13;
      func_0x00010bf21f60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0(param_1);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bf7f7e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c0c45a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar6;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010bf7f7e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c159f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0(uVar14);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar14);
      _objc_release(uVar6);
      _objc_release(uVar9);
      func_0x00010bec24c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ab840(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar12 = uVar13;
      func_0x00010bf21f60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0(param_1);
      _objc_release(uVar12);
      uVar12 = *(ulong *)(param_1 + (long)iVar16);
      func_0x00010c0da200(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174840();
    }
    _objc_release(uVar12);
    _objc_release(uVar13);
  }
  func_0x00010be64cc0(param_1);
  _objc_release(uVar3);
  return;
}


