/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10678210c; end: 106782557; -[SCMemoriesOperaPlaylistDataSource updateDataModels:] */

undefined8 FUN_10678210c(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  undefined1 auStack_188 [8];
  undefined1 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be52260(param_1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  ppuVar2 = *(undefined ***)(param_1 + 0x30);
  func_0x00010bf002e0(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106782558;
  puStack_110 = &UNK_11093a918;
  _objc_retain(puVar3);
  ppuVar12 = &puStack_128;
  uVar4 = param_3;
  puStack_108 = puVar3;
  func_0x0001006372a4(param_3,ppuVar12);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
  func_0x00010bf1f440();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (iVar1 == 0) {
    uVar8 = param_3;
    func_0x00010bf529e0();
    uVar9 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (uVar8 < uVar9) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e5e1f8;
LAB_10678231c:
      func_0x00010b5f162c(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38520(param_1);
      _objc_release(ppuVar10);
LAB_106782340:
      uVar14 = 0;
      goto LAB_1067824b8;
    }
    uVar8 = uVar4;
    func_0x00010bf529e0();
    uVar9 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (uVar8 != uVar9) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e5e218;
      goto LAB_10678231c;
    }
  }
  else {
    uVar8 = param_3;
    func_0x00010c0b8600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_106782414:
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          lStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          puStack_160 = (undefined8 *)0x0;
          lVar13 = *(long *)(param_1 + 8);
          _objc_retain(lVar13);
          lVar11 = lVar13;
          func_0x00010bf52a60();
          if (lVar11 != 0) {
            ppuVar2 = (undefined **)*puStack_160;
            do {
              lVar15 = 0;
              do {
                if ((undefined **)*puStack_160 != ppuVar2) {
                  _objc_enumerationMutation(lVar13);
                }
                lVar6 = *(long *)(lStack_168 + lVar15 * 8);
                uVar8 = param_1;
                func_0x00010be1fb40();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c0720c0();
                _objc_release(uVar8);
                if ((uVar9 & 1) != 0) {
                  _objc_retain(lVar6);
                  _objc_release(lVar13);
                  if (lVar6 == 0) goto LAB_106782418;
                  goto LAB_106782260;
                }
                lVar15 = lVar15 + 1;
              } while (lVar11 != lVar15);
              lVar11 = lVar13;
              func_0x00010bf52a60();
            } while (lVar11 != 0);
          }
          _objc_release(lVar13);
        }
        goto LAB_106782414;
      }
LAB_106782260:
      lVar11 = lVar6;
      func_0x00010c0844e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf4b900();
      _objc_release(lVar11);
      if (((ulong)puVar7 & 1) == 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e5e1d8;
        func_0x00010b5f162c(&PTR____CFConstantStringClassReference_110e5e1d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be38520(param_1);
        _objc_release(ppuVar10);
        _objc_release(lVar6);
        _objc_release(puVar5);
        goto LAB_106782340;
      }
    }
LAB_106782418:
    _objc_release(lVar6);
    _objc_release(puVar5);
  }
  _objc_initWeak(&puStack_178,param_1);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1067825ac;
  puStack_198 = &UNK_11093a988;
  ppuVar2 = &puStack_1b0;
  ppuVar12 = &puStack_178;
  _objc_copyWeak(auStack_188,ppuVar12);
  _objc_retain(uVar4);
  uStack_180 = (undefined1)iVar1;
  uStack_190 = uVar4;
  func_0x00010c2889a0(lVar6);
  _objc_release(lVar6);
  _objc_release(uStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(&puStack_178);
  uVar14 = 1;
LAB_1067824b8:
  _objc_release(uVar4);
  _objc_release(puStack_108);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar2 + 5);
    _objc_destroyWeak(&puStack_178);
    __Unwind_Resume();
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0844e0(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar14);
    _objc_release(ppuVar12);
    return uVar14;
  }
  return uVar14;
}



/* Entry: 106782558; end: 1067825a3;  */

undefined8 FUN_106782558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1067825a4; end: 1067825ab;  */

void FUN_1067825a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 1067825ac; end: 10678289b;  */

void FUN_1067825ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar13 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar13);
    lVar4 = lVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar13);
        }
        lVar15 = *(long *)(lVar14 * 8);
        if (lVar15 == 0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110e5e238;
          func_0x00010b5f16a0(&PTR____CFConstantStringClassReference_110e5e238);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be38520(lVar2);
          _objc_release(ppuVar5);
        }
        lVar6 = lVar15;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
LAB_1067826ec:
          ppuVar5 = &PTR____CFConstantStringClassReference_110e5e258;
          func_0x00010b5f16a0(&PTR____CFConstantStringClassReference_110e5e258);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be38520(lVar2);
          _objc_release(ppuVar5);
        }
        else {
          lVar7 = lVar15;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c08fa60();
          _objc_release(lVar7);
          _objc_release(lVar6);
          if (lVar8 == 0) goto LAB_1067826ec;
        }
        uVar11 = *(undefined8 *)(lVar2 + 0x30);
        func_0x00010c0844e0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar11);
        _objc_release(lVar15);
        func_0x00010be74d00(lVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar15 = lVar2;
        func_0x00010c1014e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar15 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar15);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    puVar9 = puVar3;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      func_0x00010c130e60(param_2);
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar12);
      uVar11 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = uVar12;
      _objc_release(uVar11);
      lVar4 = lVar2;
      func_0x00010bdd62e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(lVar2 + 0x30);
      *(long *)(lVar2 + 0x30) = lVar4;
      _objc_release(uVar11);
      lVar4 = lVar2;
      func_0x00010bdd6400();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(lVar2 + 0x50);
      *(long *)(lVar2 + 0x50) = lVar4;
      _objc_release(uVar11);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_11093a9d8);
  return;
}



/* Entry: 10678289c; end: 1067828b3; -[SCMemoriesOperaPlaylistDataSource playlistItemIds] */

void FUN_10678289c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_11093a9d8);
  return;
}



/* Entry: 1067828b4; end: 106782b5f; -[SCMemoriesOperaPlaylistDataSource updateCameraRollPlaylistDataModels:displayingItemInDataModelsArray:] */

uint FUN_1067828b4(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf21520();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
      uVar7 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010bf5f9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0x7fffffffffffffff;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106782b60;
      puStack_98 = &UNK_11093a9f8;
      puStack_78 = &uStack_80;
      _objc_retain(lVar2);
      lStack_90 = lVar2;
      puStack_88 = &uStack_80;
      func_0x00010bf97e80(param_3);
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      uVar7 = 0;
      if (puStack_78[3] == 0x7fffffffffffffff) {
        uVar7 = param_4;
      }
      if ((uVar7 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0b8600(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
        lVar1 = param_3;
        func_0x00010c0b8600(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        puVar6 = puVar4;
        func_0x00010c071ae0();
        if (((ulong)puVar6 & 1) == 0) {
          _objc_initWeak(auStack_b8,param_1);
          param_1 = param_1 + 0x28;
          _objc_loadWeakRetained(param_1);
          _objc_copyWeak(auStack_c0,auStack_b8);
          _objc_retain(param_3);
          func_0x00010c2889a0(param_1);
          _objc_release(param_1);
          _objc_release(param_3);
          _objc_destroyWeak(auStack_c0);
          _objc_destroyWeak(auStack_b8);
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      uVar7 = uVar7 ^ 1;
      _objc_release(lStack_90);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(lVar2);
    }
  }
  else {
    uVar7 = 1;
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106782b60; end: 106782bdb;  */

void FUN_106782b60(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(param_2);
  if (iVar1 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 106782bdc; end: 106782be3;  */

void FUN_106782bdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 106782be4; end: 106782ebf;  */

ulong FUN_106782be4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_2;
  _objc_retain(param_2);
  lVar11 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar11 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80();
    lVar2 = lVar11;
    func_0x00010bdd62e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010bfade80(param_2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar14 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar14);
    lVar4 = lVar14;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    if (lVar4 != 0) {
      bVar13 = false;
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(lVar14);
          }
          uVar16 = *(undefined8 *)(lVar10 * 8);
          lVar15 = *(long *)(lVar11 + 0x30);
          func_0x00010c0844e0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          if (lVar15 == 0) {
            lVar5 = lVar11;
            func_0x00010c1014e0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            if (bVar13) {
              func_0x00010bf06bc0(param_2);
            }
            else {
              func_0x00010befa120(puVar3);
            }
            _objc_release(lVar5);
          }
          else {
            bVar13 = true;
          }
          _objc_release(lVar15);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar14;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar14);
    puVar6 = puVar3;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c10a600(param_2);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar12);
    uVar16 = *(undefined8 *)(lVar11 + 8);
    *(undefined8 *)(lVar11 + 8) = uVar12;
    _objc_release(uVar16);
    lVar7 = lVar11;
    func_0x00010bdd62e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar11 + 0x30);
    *(long *)(lVar11 + 0x30) = lVar7;
    _objc_release(uVar16);
    lVar7 = lVar11;
    func_0x00010bdd6400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar11 + 0x50);
    *(long *)(lVar11 + 0x50) = lVar7;
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)(param_2 + 0x20);
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar8);
  return (ulong)(lVar11 != 0);
}



/* Entry: 106782ec0; end: 106782f1b;  */

bool FUN_106782ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be36bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 106782f1c; end: 106782f7b; -[SCMemoriesOperaPlaylistDataSource navigateToItem:] */

long FUN_106782f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1ddd60();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106782f7c; end: 106782f83; -[SCMemoriesOperaPlaylistDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_106782f7c(void)

{
  return 1;
}



/* Entry: 106782f84; end: 106782fd7; -[SCMemoriesOperaPlaylistDataSource dataModelFor:] */

void FUN_106782f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106782fd8; end: 106783037; -[SCMemoriesOperaPlaylistDataSource dataModelForGroup:] */

void FUN_106782fd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106783038; end: 1067831c3; -[SCMemoriesOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_106783038(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf63e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126cdc48;
  if (uVar3 != 0) {
    _objc_retain(uVar3);
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      func_0x00010be74d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      func_0x00010c0c0800(param_1);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067831c4; end: 1067832f7;  */

void FUN_1067831c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cdc40;
  uVar5 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126cdc50;
  uVar6 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  if (uVar3 != 0) {
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    func_0x00010c13a9c0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010c13a9e0();
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067832f8; end: 1067832fb;  */

void FUN_1067832f8(void)

{
  return;
}



/* Entry: 1067832fc; end: 1067832ff; -[SCMemoriesOperaPlaylistDataSource postResolvePlaylistItemGroupWithResolver:] */

void FUN_1067832fc(void)

{
  return;
}



/* Entry: 106783300; end: 10678372f; -[SCMemoriesOperaPlaylistDataSource pageDataForDataModel:completion:] */

void FUN_106783300(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126cdc48;
  _objc_retain(param_4);
  _objc_opt_class(puVar3);
  uVar10 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar8 = *(ulong *)(param_1 + 0x48);
  uVar10 = uVar1;
  func_0x00010c0844e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (uVar8 == 0) {
    uVar11 = 0;
    func_0x00010b5f1714(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38520(param_1);
    _objc_release(uVar11);
LAB_106783444:
    puVar3 = PTR_PTR_1126cdc18;
    _objc_opt_class(PTR_PTR_1126cdc18);
    uVar10 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar7 = param_1;
    if ((uVar10 & 1) == 0) {
      puVar3 = PTR_PTR_1126cdc58;
      _objc_opt_class(PTR_PTR_1126cdc58);
      uVar10 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar3);
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)(param_1 + 0x38);
        _objc_retain(uVar1);
        uVar10 = uVar1;
        func_0x00010c0844e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        puVar3 = PTR_PTR_1126cdc50;
        _objc_opt_class(PTR_PTR_1126cdc50);
        uVar6 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar3);
        uVar10 = uVar9;
        if ((uVar6 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar9);
        func_0x00010be38ba0(param_1);
        func_0x00010be38ba0(param_1);
        func_0x00010c0ea0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x000106d4a82c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar1);
        goto LAB_10678367c;
      }
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x38);
      _objc_retain(uVar1);
      uVar10 = uVar1;
      func_0x00010c0844e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar3 = PTR_PTR_1126cdc40;
      _objc_opt_class(PTR_PTR_1126cdc40);
      uVar6 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar3);
      uVar10 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar9);
      uVar9 = param_1;
      func_0x00010be38ba0();
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0ea7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x80);
      uVar5 = *(ulong *)(param_1 + 0x98);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x000106d4a37c(uVar1,uVar10,uVar11,uVar7,uVar12,uVar5,uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar1);
      _objc_release(uVar8);
      uVar8 = uVar5;
LAB_10678367c:
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar8 = uVar6;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    uVar10 = uVar1;
    func_0x00010c0844e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c22e900();
    if (iVar2 != 0) {
      puVar3 = PTR_PTR_1126c9e18;
      _objc_alloc();
      func_0x00010c00c560();
      puVar4 = puVar3;
      func_0x00010c0f12c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = (ulong)(puVar4 != (undefined *)0x0);
      _objc_release();
      _objc_release(puVar3);
      func_0x00010b5f1714(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38520(param_1);
      _objc_release(uVar10);
      if (puVar4 != (undefined *)0x0) goto LAB_1067836c0;
      goto LAB_106783444;
    }
    uVar10 = 1;
    func_0x00010b5f1714(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38520(param_1);
  }
  _objc_release(uVar10);
LAB_1067836c0:
  puVar3 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  func_0x00010c033240();
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106783730; end: 106783a87; -[SCMemoriesOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_106783730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar8 = *(ulong *)(param_1 + 0x40);
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cdc18;
  _objc_retain(uVar8);
  _objc_opt_class(puVar3);
  uVar4 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar3);
  uVar1 = uVar8;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126cdc60;
  puVar3 = PTR_PTR_1126cdc58;
  if (uVar1 == 0) {
    _objc_retain(uVar8);
    _objc_opt_class(puVar3);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar4 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126cdc68;
    if (uVar4 != 0) {
      uVar6 = uVar8;
      func_0x00010bf0af00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9fc0(puVar3);
      _objc_release(uVar6);
      (**(code **)(param_5 + 0x10))(param_5,0,0,puVar3);
      _objc_initWeak(auStack_68,param_1);
      lVar7 = param_1;
      func_0x00010c0ea0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234320();
      func_0x00010c29e220(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c2355e0();
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234d00();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      func_0x00010c2511e0(lVar7);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(lVar7);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(uVar4);
  }
  else {
    func_0x00010c0c6c20(uVar8);
    func_0x00010c0e9fe0(puVar5);
    (**(code **)(param_5 + 0x10))(param_5,0,0,puVar5);
    func_0x00010bdcff20(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106783a88; end: 106783b27;  */

void FUN_106783a88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be36bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be501e0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106783b28; end: 106783c0f; -[SCMemoriesOperaPlaylistDataSource removeMediaForItem:] */

void FUN_106783b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48));
  puVar2 = PTR_PTR_1126cdc18;
  _objc_opt_class(PTR_PTR_1126cdc18);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126cdc58;
    _objc_opt_class(PTR_PTR_1126cdc58);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) goto LAB_106783bf4;
    func_0x00010c0ea0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280a40();
  }
  else {
    func_0x00010c0ea7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280ae0();
  }
  _objc_release(param_1);
LAB_106783bf4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106783c10; end: 106783c5f; -[SCMemoriesOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:] */

uint FUN_106783c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cdc48;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 106783c60; end: 106783d17; -[SCMemoriesOperaPlaylistDataSource playlistItemGroupModelForDataModel:] */

void FUN_106783c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf2d460(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126b23e8;
  if ((int)param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    uVar1 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c01ade0(puVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbaad8,1,1,1)
    ;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106783d18; end: 106783f73; -[SCMemoriesOperaPlaylistDataSource asyncResolveGallerySnapAtPage:] */

void FUN_106783d18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if ((param_3 == 0) || (lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puVar3 = PTR_PTR_1126ae6b8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(puVar2);
      _objc_retain(lVar1);
      func_0x00010bf54280(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25ffc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar1);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106783f74; end: 10678427b;  */

void FUN_106783f74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126cdc58;
  if (lVar3 == 0) {
    _objc_retain(puVar2);
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x20);
    _objc_retain(uVar10);
    _objc_opt_class(puVar4);
    uVar5 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar4);
    uVar1 = uVar10;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar10);
    puVar4 = PTR_PTR_1126cdc18;
    if (uVar1 == 0) {
      uVar11 = *(ulong *)(param_1 + 0x20);
      _objc_retain(uVar11);
      _objc_opt_class(puVar4);
      uVar10 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar4);
      uVar5 = uVar11;
      if ((uVar10 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar11);
      puVar4 = PTR_PTR_1126af4d0;
      if (uVar5 == 0) {
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(param_2);
        _objc_release(puVar4);
        _objc_retain(puVar2);
      }
      else {
        uVar6 = *(undefined8 *)(lVar3 + 0x58);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        puVar9 = PTR_PTR_1126af5d0;
        puVar8 = PTR_PTR_1126af4c0;
        if (puVar4 == (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(param_2);
        }
        else {
          uVar6 = *(undefined8 *)(lVar3 + 0x58);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7060(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          puVar7 = PTR_PTR_1126af5d0;
          puVar9 = PTR_PTR_1126b60f8;
          func_0x00010c0f2b40(PTR_PTR_1126b60f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2619e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(param_2);
          _objc_release(puVar7);
        }
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_retain(puVar2);
        _objc_release(puVar4);
      }
      _objc_release(uVar5);
    }
    else {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar4);
      _objc_retain(puVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10678427c; end: 106784483; -[SCMemoriesOperaPlaylistDataSource asyncResolveGalleryOperaSnapAtPage:] */

void FUN_10678427c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puVar4 = PTR_PTR_1126ae6b8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      _objc_retain(lVar1);
      func_0x00010bf54280(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c25ffc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106784484; end: 106784df7;  */

void FUN_106784484(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uStack_e0;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    _objc_retain(puVar3);
    goto LAB_106784dbc;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126cdc18;
  uVar13 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar13);
  _objc_opt_class(puVar14);
  uVar17 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar14);
  uVar1 = uVar13;
  if ((uVar17 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar13);
  puVar6 = PTR_PTR_1126cdc58;
  puVar14 = PTR_PTR_1126af4c0;
  if (uVar1 == 0) {
    puVar14 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar14);
    _objc_opt_class(puVar6);
    puVar7 = puVar14;
    _objc_opt_isKindOfClass(puVar14,puVar6);
    puVar6 = puVar14;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar14);
    puVar10 = PTR_PTR_1126cdc50;
    puVar11 = PTR_PTR_1126b2608;
    puVar7 = PTR_PTR_1126af5d0;
    if (puVar6 != (undefined *)0x0) {
      puVar6 = puVar14;
      func_0x00010bf0af00(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ab60(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar7);
      _objc_release(puVar11);
      _objc_release(puVar6);
      func_0x00010bf436e0(param_2);
      goto LAB_106784784;
    }
    uVar15 = *(ulong *)(param_1 + 0x20);
    _objc_retain(uVar15);
    _objc_opt_class(puVar10);
    uVar13 = uVar15;
    _objc_opt_isKindOfClass(uVar15,puVar10);
    uVar17 = uVar15;
    if ((uVar13 & 1) == 0) {
      uVar17 = 0;
    }
    _objc_retain(uVar17);
    _objc_release(uVar15);
    puVar14 = PTR_PTR_1126cdc40;
    if (uVar17 == 0) {
      uVar16 = *(ulong *)(param_1 + 0x20);
      _objc_retain(uVar16);
      _objc_opt_class(puVar14);
      uVar15 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar14);
      uVar13 = uVar16;
      if ((uVar15 & 1) == 0) {
        uVar13 = 0;
      }
      _objc_retain(uVar13);
      _objc_release(uVar16);
      if (uVar13 == 0) {
        puVar14 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(param_2);
        _objc_release(puVar14);
        func_0x00010bf436e0(param_2);
        _objc_retain(puVar3);
        uVar16 = 0;
      }
      else {
        uVar13 = uVar16;
        func_0x00010c0ff4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar8);
        uVar15 = uVar13;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        puVar7 = PTR_PTR_1126af4d0;
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR_PTR_1126af4c0;
        uVar13 = uVar15;
        func_0x00010bf97200(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa70a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        puVar11 = puVar14;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar6 = PTR_PTR_1126af4c0;
        if (puVar11 == (undefined *)0x0) {
          _objc_retain(puVar3);
        }
        else {
          puVar11 = puVar14;
          func_0x00010bf97200(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7b20(puVar6);
          _objc_release(puVar11);
          puVar6 = PTR_PTR_1126cdc10;
          func_0x00010c0eb500();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar7 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) {
            puVar11 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
            func_0x00010bf070e0();
            if (puVar7 == (undefined *)0x0) {
              func_0x00010bf070e0(puVar11);
            }
            if (puVar6 == (undefined *)0x0) {
              func_0x00010bf070e0(puVar11);
            }
            puVar12 = PTR_PTR_1126af5d0;
            puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
            uStack_e0 = puVar11;
            func_0x00010bf51e00(puVar11);
            func_0x00010bf99260(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa01c0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(param_2);
            _objc_release(puVar12);
            _objc_release(puVar10);
          }
          else {
            iVar2 = (int)*(undefined8 *)(lVar4 + 0x80);
            func_0x000108ec1014();
            if (iVar2 == 0) {
LAB_106784cf0:
              uStack_e0 = PTR_PTR_1126af5d0;
              puVar11 = PTR_PTR_1126b2608;
              func_0x00010c243fe0(PTR_PTR_1126b2608);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar11 = puVar7;
              func_0x00010c23ff80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar11 == (undefined *)0x0) goto LAB_106784cf0;
              uStack_e0 = PTR_PTR_1126af5d0;
              puVar11 = PTR_PTR_1126b2608;
              func_0x00010c23fe20(PTR_PTR_1126b2608);
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c2619e0(uStack_e0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(param_2);
          }
          _objc_release(uStack_e0);
          _objc_release(puVar11);
          func_0x00010bf436e0(param_2);
          _objc_retain(puVar3);
          _objc_release(puVar6);
        }
        _objc_release(puVar14);
        _objc_release(puVar7);
        _objc_release(uVar15);
        _objc_release(uVar8);
      }
    }
    else {
      func_0x00010c0ff4a0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(ulong *)(param_1 + 0x30);
      _objc_retain(uVar16);
      uVar13 = uVar15;
      func_0x00010bfb2040(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      puVar6 = PTR_PTR_1126b2608;
      puVar14 = PTR_PTR_1126af5d0;
      uVar15 = uVar13;
      func_0x00010bf0af00(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ab60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar14);
      _objc_release(puVar6);
      _objc_release(uVar15);
      func_0x00010bf436e0(param_2);
      _objc_retain(puVar3);
      _objc_release(uVar13);
    }
    _objc_release(uVar16);
    _objc_release(uVar17);
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010bf97200(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar7 = puVar14;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR_PTR_1126af4c0;
    if (puVar7 == (undefined *)0x0) {
LAB_106784784:
      _objc_retain(puVar3);
    }
    else {
      puVar7 = puVar14;
      func_0x00010bf97200(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7b20(puVar6);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126cdc10;
      func_0x00010c0eb500(PTR_PTR_1126cdc10);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(ulong *)(param_1 + 0x20);
      puVar6 = PTR_PTR_1126cdc30;
      _objc_opt_class(PTR_PTR_1126cdc30);
      _objc_opt_isKindOfClass(uVar17,puVar6);
      puVar6 = PTR_PTR_1126af4d0;
      if ((uVar17 & 1) == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010be36bc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(lVar4 + 0x58);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar8);
        if (puVar6 != (undefined *)0x0) {
          puVar10 = puVar6;
          func_0x00010c23ff80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar11 = PTR_PTR_1126af5d0;
          puVar12 = PTR_PTR_1126b2608;
          if (puVar10 == (undefined *)0x0) {
            func_0x00010c243fe0(PTR_PTR_1126b2608);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c23fe20();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c2619e0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(param_2);
          goto LAB_106784b9c;
        }
      }
      else {
        func_0x00010bfa73a0(PTR_PTR_1126af4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126bc808;
        func_0x00010bfa6fc0(PTR_PTR_1126bc808);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126af5d0;
        puVar11 = PTR_PTR_1126b2608;
        func_0x00010c270300(PTR_PTR_1126b2608);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2619e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(param_2);
        _objc_release(puVar10);
LAB_106784b9c:
        _objc_release(puVar11);
        _objc_release(puVar12);
        _objc_release(puVar6);
        func_0x00010bf436e0(param_2);
      }
      _objc_retain(puVar3);
      _objc_release(puVar7);
    }
  }
  _objc_release(puVar14);
  _objc_release(uVar1);
  _objc_release(uVar5);
LAB_106784dbc:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106784df8; end: 106784e87;  */

undefined8 FUN_106784df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106784e88; end: 106784f23; -[SCMemoriesOperaPlaylistDataSource resolvePHAssetAtPage:] */

void FUN_106784e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdc58;
  _objc_opt_class(PTR_PTR_1126cdc58);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf0af00(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106784f24; end: 10678501b; -[SCMemoriesOperaPlaylistDataSource resolveAllGallerySnaps] */

void FUN_106784f24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10678501c; end: 1067855ab;  */

void FUN_10678501c(undefined *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined *unaff_x23;
  long lVar16;
  undefined **unaff_x24;
  undefined *puVar17;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined **ppuStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
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
  undefined *apuStack_1f0 [16];
  undefined *apuStack_170 [16];
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar9 = PTR_PTR_1126af5d0;
  puVar11 = PTR_PTR_1126ae6b8;
  if (puVar2 == (undefined *)0x0) {
    ppuVar15 = &PTR____CFConstantStringClassReference_110e09478;
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar11;
    puVar3 = puVar9;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar9;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    unaff_x26 = *(undefined **)(param_1 + 0x20);
    _objc_retain(unaff_x26);
    ppuVar15 = apuStack_f0;
    puVar8 = unaff_x26;
    func_0x00010bf52a60();
    puVar11 = puVar9;
    if (puVar8 != (undefined *)0x0) {
      unaff_x27 = *plStack_220;
      unaff_x28 = puVar8;
      lStack_2e0 = unaff_x27;
      puStack_2d0 = unaff_x26;
      do {
        param_1 = (undefined *)0x0;
        puStack_2d8 = unaff_x28;
        do {
          unaff_x24 = &PTR_PTR_1126cd000;
          if (*plStack_220 != unaff_x27) {
            _objc_enumerationMutation(unaff_x26);
          }
          unaff_x25 = *(undefined **)(lStack_228 + (long)param_1 * 8);
          puVar8 = PTR_PTR_1126cdc18;
          _objc_opt_class(PTR_PTR_1126cdc18);
          puVar3 = unaff_x25;
          _objc_opt_isKindOfClass(unaff_x25,puVar8);
          if (((ulong)puVar3 & 1) == 0) {
            puVar8 = PTR_PTR_1126cdc58;
            _objc_opt_class(PTR_PTR_1126cdc58);
            puVar3 = unaff_x25;
            _objc_opt_isKindOfClass(unaff_x25,puVar8);
            if (((ulong)puVar3 & 1) != 0) {
              puVar8 = PTR_PTR_1126ae6b8;
              puVar3 = PTR____NSArray0__struct_11034ab48;
              func_0x00010c0860a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x26);
              goto LAB_106785560;
            }
          }
          else {
            _objc_retain(unaff_x25);
            puVar4 = unaff_x25;
            func_0x00010c1005a0();
            puVar7 = PTR_PTR_1126cdc38;
            puVar17 = PTR_PTR_1126cdc30;
            puVar3 = PTR_PTR_1126af4d0;
            puVar8 = unaff_x25;
            if (puVar4 == (undefined *)0x2) {
              puStack_2c0 = param_1;
              _objc_retain(unaff_x25);
              _objc_opt_class(puVar7);
              puVar3 = unaff_x25;
              _objc_opt_isKindOfClass(unaff_x25,puVar7);
              if (((ulong)puVar3 & 1) == 0) {
                puVar8 = (undefined *)0x0;
              }
              _objc_retain(puVar8);
              puStack_2b8 = unaff_x25;
              _objc_release(unaff_x25);
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              lStack_2a8 = 0;
              uStack_2b0 = 0;
              uStack_298 = 0;
              plStack_2a0 = (long *)0x0;
              puStack_2c8 = puVar8;
              func_0x00010c0ff4a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = apuStack_1f0;
              puVar3 = puVar8;
              func_0x00010bf52a60();
              if (puVar3 != (undefined *)0x0) {
                lVar16 = *plStack_2a0;
                do {
                  puVar17 = (undefined *)0x0;
                  do {
                    if (*plStack_2a0 != lVar16) {
                      _objc_enumerationMutation(puVar8);
                    }
                    puVar7 = PTR_PTR_1126af4d0;
                    uVar6 = *(undefined8 *)(lStack_2a8 + (long)puVar17 * 8);
                    func_0x00010c0844e0(uVar6);
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = *(undefined8 *)(puVar2 + 0x58);
                    func_0x00010c269d40(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa72e0(puVar7);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar13);
                    _objc_release(uVar6);
                    func_0x00010befa120(puVar9);
                    _objc_release(puVar7);
                    puVar17 = puVar17 + 1;
                  } while (puVar3 != puVar17);
                  ppuVar15 = apuStack_1f0;
                  puVar3 = puVar8;
                  func_0x00010bf52a60();
                } while (puVar3 != (undefined *)0x0);
              }
LAB_10678543c:
              _objc_release(puVar8);
              param_1 = puStack_2c0;
              unaff_x23 = puStack_2c8;
              unaff_x26 = puStack_2d0;
              unaff_x27 = lStack_2e0;
              unaff_x28 = puStack_2d8;
LAB_106785454:
              _objc_release(unaff_x23);
              unaff_x25 = puStack_2b8;
            }
            else {
              if (puVar4 == (undefined *)0x1) {
                puStack_2c0 = param_1;
                _objc_retain(unaff_x25);
                _objc_opt_class(puVar17);
                puVar3 = unaff_x25;
                _objc_opt_isKindOfClass(unaff_x25,puVar17);
                if (((ulong)puVar3 & 1) == 0) {
                  puVar8 = (undefined *)0x0;
                }
                _objc_retain(puVar8);
                puStack_2b8 = unaff_x25;
                _objc_release(unaff_x25);
                uStack_248 = 0;
                uStack_250 = 0;
                uStack_238 = 0;
                uStack_240 = 0;
                lStack_268 = 0;
                uStack_270 = 0;
                uStack_258 = 0;
                plStack_260 = (long *)0x0;
                puStack_2c8 = puVar8;
                func_0x00010c0ff4a0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = apuStack_170;
                puVar3 = puVar8;
                func_0x00010bf52a60();
                if (puVar3 != (undefined *)0x0) {
                  lVar16 = *plStack_260;
                  do {
                    puVar17 = (undefined *)0x0;
                    do {
                      if (*plStack_260 != lVar16) {
                        _objc_enumerationMutation(puVar8);
                      }
                      puVar7 = PTR_PTR_1126af4d0;
                      uVar6 = *(undefined8 *)(lStack_268 + (long)puVar17 * 8);
                      func_0x00010c0844e0(uVar6);
                      _objc_retainAutoreleasedReturnValue();
                      uVar13 = *(undefined8 *)(puVar2 + 0x58);
                      func_0x00010c269d40(uVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bfa72e0(puVar7);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar13);
                      _objc_release(uVar6);
                      func_0x00010befa120(puVar9);
                      _objc_release(puVar7);
                      puVar17 = puVar17 + 1;
                    } while (puVar3 != puVar17);
                    ppuVar15 = apuStack_170;
                    puVar3 = puVar8;
                    func_0x00010bf52a60();
                  } while (puVar3 != (undefined *)0x0);
                }
                goto LAB_10678543c;
              }
              if (puVar4 == (undefined *)0x0) {
                puStack_2b8 = unaff_x25;
                func_0x00010c0844e0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = *(undefined ***)(puVar2 + 0x58);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = ppuVar5;
                func_0x00010bfa72e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = puStack_2d0;
                _objc_release(ppuVar5);
                _objc_release(unaff_x25);
                func_0x00010befa120(puVar9);
                unaff_x23 = puVar3;
                goto LAB_106785454;
              }
            }
            _objc_release(unaff_x25);
          }
          unaff_x24 = &PTR_PTR_1126cd000;
          param_1 = param_1 + 1;
        } while (param_1 != unaff_x28);
        ppuVar15 = apuStack_f0;
        unaff_x28 = unaff_x26;
        func_0x00010bf52a60();
      } while (unaff_x28 != (undefined *)0x0);
    }
    _objc_release(unaff_x26);
    puVar8 = PTR_PTR_1126ae6b8;
    puVar3 = puVar9;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106785560:
  _objc_release(puVar9);
  puVar9 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_2e8 = FUN_1067855ac;
  puStack_340 = unaff_x28;
  lStack_338 = unaff_x27;
  puStack_330 = unaff_x26;
  puStack_328 = unaff_x25;
  ppuStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar8;
  puStack_308 = param_1;
  puStack_300 = puVar11;
  puStack_2f8 = puVar2;
  puStack_2f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(ppuVar15);
  ppuVar5 = ppuVar15;
  func_0x00010bf529e0();
  if (ppuVar5 != (undefined **)0x0) {
    puVar2 = puVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      uVar10 = *(ulong *)(puVar9 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar10 != 0) {
        puVar11 = PTR_PTR_1126cdc18;
        _objc_opt_class(PTR_PTR_1126cdc18);
        uVar12 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar11);
        uVar1 = uVar10;
        if ((uVar12 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        if ((uVar12 & 1) != 0) {
          puVar11 = PTR_PTR_1126cdc30;
          _objc_opt_class(PTR_PTR_1126cdc30);
          uVar12 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar11);
          if ((uVar12 & 1) == 0) {
            uStack_348 = 0;
            uVar13 = *(undefined8 *)(puVar9 + 8);
            func_0x00010bf51e00(uVar13);
            puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar10;
            FUN_106788ea0(uVar10,&uStack_348,uVar13,puVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uStack_348;
            _objc_retain(uStack_348);
            _objc_release(puVar11);
            _objc_release(uVar13);
            func_0x00010c1d0640(*(undefined8 *)(puVar9 + 0x38));
            uVar13 = *(undefined8 *)(puVar9 + 8);
            *(ulong *)(puVar9 + 8) = uVar12;
            _objc_retain(uVar12);
            _objc_release(uVar13);
            puVar11 = puVar9;
            func_0x00010bdd62e0();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)(puVar9 + 0x30);
            *(undefined **)(puVar9 + 0x30) = puVar11;
            _objc_release(uVar13);
            puVar11 = puVar9;
            func_0x00010bdd6400();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)(puVar9 + 0x50);
            *(undefined **)(puVar9 + 0x50) = puVar11;
            _objc_release(uVar13);
            uVar14 = *(undefined8 *)(puVar9 + 0x48);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            _objc_release(uVar13);
            _objc_release(uVar14);
            puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = PTR_PTR_1126c99e0;
            func_0x00010bf24ba0(PTR_PTR_1126c99e0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar17);
            _objc_release(puVar8);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar8);
            uVar13 = *(undefined8 *)(puVar9 + 0x20);
            _objc_retain(puVar2);
            _objc_retain(uVar10);
            _objc_retain(puVar11);
            func_0x00010c0f7fc0(uVar13);
            _objc_release(puVar11);
            _objc_release(uVar10);
            _objc_release(puVar2);
            _objc_release(puVar11);
            _objc_release(uVar12);
            _objc_release(uVar6);
          }
        }
        _objc_release(uVar1);
      }
      _objc_release(uVar10);
    }
    _objc_release(puVar2);
  }
  _objc_release(ppuVar15);
  _objc_release(puVar3);
  return;
}



/* Entry: 1067855ac; end: 106785bcf; -[SCMemoriesOperaPlaylistDataSource swapFavoriteStateForPageWithPage:forSnapIds:] */

void FUN_1067855ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 != 0) {
        puVar5 = PTR_PTR_1126cdc18;
        _objc_opt_class(PTR_PTR_1126cdc18);
        uVar6 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        uVar1 = uVar4;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        if ((uVar6 & 1) != 0) {
          puVar5 = PTR_PTR_1126cdc30;
          _objc_opt_class(PTR_PTR_1126cdc30);
          uVar6 = uVar4;
          _objc_opt_isKindOfClass(uVar4,puVar5);
          if ((uVar6 & 1) == 0) {
            uStack_68 = 0;
            uVar7 = *(undefined8 *)(param_1 + 8);
            func_0x00010bf51e00(uVar7);
            puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar4;
            FUN_106788ea0(uVar4,&uStack_68,uVar7,puVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uStack_68;
            _objc_retain(uStack_68);
            _objc_release(puVar5);
            _objc_release(uVar7);
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
            uVar7 = *(undefined8 *)(param_1 + 8);
            *(ulong *)(param_1 + 8) = uVar6;
            _objc_retain(uVar6);
            _objc_release(uVar7);
            lVar8 = param_1;
            func_0x00010bdd62e0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            *(long *)(param_1 + 0x30) = lVar8;
            _objc_release(uVar7);
            lVar8 = param_1;
            func_0x00010bdd6400();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_1 + 0x50);
            *(long *)(param_1 + 0x50) = lVar8;
            _objc_release(uVar7);
            uVar9 = *(undefined8 *)(param_1 + 0x48);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            _objc_release(uVar7);
            _objc_release(uVar9);
            puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR_PTR_1126c99e0;
            func_0x00010bf24ba0(PTR_PTR_1126c99e0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar10);
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar10);
            uVar7 = *(undefined8 *)(param_1 + 0x20);
            _objc_retain(lVar3);
            _objc_retain(uVar4);
            _objc_retain(puVar5);
            func_0x00010c0f7fc0(uVar7);
            _objc_release(puVar5);
            _objc_release(uVar4);
            _objc_release(lVar3);
            _objc_release(puVar5);
            _objc_release(uVar6);
            _objc_release(uVar2);
          }
        }
        _objc_release(uVar1);
      }
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106785bd0; end: 106785bdf;  */

void FUN_106785bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__appendMediaLoadedPropertiesForI_112550e40,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106785be0; end: 106785c97; -[SCMemoriesOperaPlaylistDataSource swapFavoriteStateWithPage:forOutdatedAsset:] */

void FUN_106785be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106785c98;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106785c98; end: 106785f4f;  */

void FUN_106785c98(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  long lStack_230;
  
  puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa50e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c072a60();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c99e0;
    func_0x00010bf24ba0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126cdc68;
    func_0x00010c233f20(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    func_0x00010c22dda0();
    func_0x00010c233e80(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    func_0x00010beee940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(puVar6 + 0x20);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = *(long *)(puVar6 + 0x28);
  _objc_retain(lVar19);
  lVar17 = lVar19;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar17 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar19);
      }
      func_0x00010be8c840(*(undefined8 *)(puVar6 + 0x30));
      lVar21 = lVar21 + 1;
    } while (lVar17 != lVar21);
    lVar17 = lVar19;
    func_0x00010bf52a60();
  }
  _objc_release(lVar19);
  func_0x00010bdcd280(*(undefined8 *)(puVar6 + 0x30));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(lVar8 + 0x48);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  puVar16 = &uStack_300;
  lVar17 = lVar9;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar18 = *plStack_2f0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_2f0 != lVar18) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(ulong *)(lVar8 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cdc58;
        _objc_opt_class(PTR_PTR_1126cdc58);
        uVar11 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar5);
        uVar1 = uVar10;
        if ((uVar11 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar10);
        if (uVar1 != 0) {
          func_0x00010bf0af00();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x000107fe9840();
          _objc_release(uVar10);
          if ((int)uVar11 != 0) {
            puVar5 = PTR_PTR_1126c99e0;
            func_0x00010c09a9e0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puStack_2c0 = puVar5;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_2b8 = puVar4;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(puVar5);
            func_0x00010bdcd280(lVar8);
            _objc_release(puVar6);
          }
        }
        _objc_release(uVar1);
        lVar19 = lVar19 + 1;
      } while (lVar17 != lVar19);
      puVar16 = &uStack_300;
      lVar17 = lVar9;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  puVar5 = PTR_PTR_1126cdc58;
  _objc_opt_class(PTR_PTR_1126cdc58);
  puVar12 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar5);
  puVar2 = puVar16;
  if (((ulong)puVar12 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_retain(puVar2);
  puVar5 = PTR_PTR_1126cdc18;
  puVar12 = puVar16;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010bf0af00(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar12;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106786534;
  }
  _objc_retain(puVar16);
  _objc_opt_class(puVar5);
  puVar20 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar5);
  if (((ulong)puVar20 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar16);
  puVar20 = puVar16;
  if (puVar12 != (undefined8 *)0x0) {
    puVar13 = puVar16;
    func_0x00010c1005a0();
    puVar5 = PTR_PTR_1126cdc38;
    if ((puVar13 == (undefined8 *)0x2) || (puVar5 = PTR_PTR_1126cdc30, puVar13 == (undefined8 *)0x1)
       ) {
      _objc_retain(puVar16);
      _objc_opt_class(puVar5);
      _objc_opt_isKindOfClass(puVar16,puVar5);
      if (((ulong)puVar20 & 1) == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      _objc_retain(puVar12);
      _objc_release(puVar16);
      puVar13 = puVar12;
      func_0x00010c0ff4a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar13;
      func_0x00010bfb1920(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar12;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar13);
      puVar12 = puVar16;
      goto LAB_106786534;
    }
    if (puVar13 == (undefined8 *)0x0) {
      func_0x00010c0844e0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar16;
      goto LAB_106786534;
    }
  }
  puVar5 = PTR_PTR_1126cdc40;
  _objc_retain(puVar16);
  _objc_opt_class(puVar5);
  puVar14 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar5);
  puVar13 = puVar16;
  if (((ulong)puVar14 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  _objc_retain(puVar13);
  _objc_release(puVar16);
  puVar5 = PTR_PTR_1126cdc50;
  puVar14 = puVar16;
  if (puVar13 == (undefined8 *)0x0) {
    _objc_retain(puVar16);
    _objc_opt_class(puVar5);
    puVar15 = puVar16;
    _objc_opt_isKindOfClass(puVar16,puVar5);
    if (((ulong)puVar15 & 1) == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    _objc_retain(puVar14);
    _objc_release(puVar16);
    if (puVar14 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      func_0x00010bfb1a00(puVar16);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106786524:
    _objc_release(puVar14);
  }
  else {
    puVar15 = puVar16;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar15 == (undefined8 *)0x0) {
      func_0x00010c0ff4a0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar15;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      goto LAB_106786524;
    }
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar13);
LAB_106786534:
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 106785f50; end: 10678607f;  */

void FUN_106785f50(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_190;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar17);
  lVar4 = lVar17;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar17);
      }
      func_0x00010be8c840(*(undefined8 *)(param_1 + 0x30));
      lVar19 = lVar19 + 1;
    } while (lVar4 != lVar19);
    lVar4 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  func_0x00010bdcd280(*(undefined8 *)(param_1 + 0x30));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(lVar3 + 0x48);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar15 = &uStack_260;
  lVar4 = lVar5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar16 = *plStack_250;
    do {
      lVar17 = 0;
      do {
        if (*plStack_250 != lVar16) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lVar3 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126cdc58;
        _objc_opt_class(PTR_PTR_1126cdc58);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar7);
        uVar1 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar6);
        if (uVar1 != 0) {
          func_0x00010bf0af00();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x000107fe9840();
          _objc_release(uVar6);
          if ((int)uVar8 != 0) {
            puVar7 = PTR_PTR_1126c99e0;
            func_0x00010c09a9e0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puStack_220 = puVar7;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_218 = puVar9;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar7);
            func_0x00010bdcd280(lVar3);
            _objc_release(puVar10);
          }
        }
        _objc_release(uVar1);
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      puVar15 = &uStack_260;
      lVar4 = lVar5;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  puVar7 = PTR_PTR_1126cdc58;
  _objc_opt_class(PTR_PTR_1126cdc58);
  puVar11 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar7);
  puVar2 = puVar15;
  if (((ulong)puVar11 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_retain(puVar2);
  puVar7 = PTR_PTR_1126cdc18;
  puVar11 = puVar15;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010bf0af00(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar11;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106786534;
  }
  _objc_retain(puVar15);
  _objc_opt_class(puVar7);
  puVar18 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar7);
  if (((ulong)puVar18 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(puVar15);
  puVar18 = puVar15;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = puVar15;
    func_0x00010c1005a0();
    puVar7 = PTR_PTR_1126cdc38;
    if ((puVar12 == (undefined8 *)0x2) || (puVar7 = PTR_PTR_1126cdc30, puVar12 == (undefined8 *)0x1)
       ) {
      _objc_retain(puVar15);
      _objc_opt_class(puVar7);
      _objc_opt_isKindOfClass(puVar15,puVar7);
      if (((ulong)puVar18 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      _objc_retain(puVar11);
      _objc_release(puVar15);
      puVar12 = puVar11;
      func_0x00010c0ff4a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar11 = puVar12;
      func_0x00010bfb1920(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar11;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar12);
      puVar11 = puVar15;
      goto LAB_106786534;
    }
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00010c0844e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar15;
      goto LAB_106786534;
    }
  }
  puVar7 = PTR_PTR_1126cdc40;
  _objc_retain(puVar15);
  _objc_opt_class(puVar7);
  puVar13 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar7);
  puVar12 = puVar15;
  if (((ulong)puVar13 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar15);
  puVar7 = PTR_PTR_1126cdc50;
  puVar13 = puVar15;
  if (puVar12 == (undefined8 *)0x0) {
    _objc_retain(puVar15);
    _objc_opt_class(puVar7);
    puVar14 = puVar15;
    _objc_opt_isKindOfClass(puVar15,puVar7);
    if (((ulong)puVar14 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    _objc_retain(puVar13);
    _objc_release(puVar15);
    if (puVar13 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      func_0x00010bfb1a00(puVar15);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106786524:
    _objc_release(puVar13);
  }
  else {
    puVar14 = puVar15;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 == (undefined8 *)0x0) {
      func_0x00010c0ff4a0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar14;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      goto LAB_106786524;
    }
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar12);
LAB_106786534:
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 106786080; end: 10678628b; -[SCMemoriesOperaPlaylistDataSource updatePlaylistForAllLivePhotos:] */

void FUN_106786080(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar14 = &uStack_140;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar17 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar17) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(ulong *)(param_1 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126cdc58;
        _objc_opt_class(PTR_PTR_1126cdc58);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar1 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        if (uVar1 != 0) {
          func_0x00010bf0af00();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x000107fe9840();
          _objc_release(uVar5);
          if ((int)uVar7 != 0) {
            puVar6 = PTR_PTR_1126c99e0;
            func_0x00010c09a9e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puStack_100 = puVar6;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_f8 = puVar8;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            _objc_release(puVar6);
            func_0x00010bdcd280(param_1);
            _objc_release(puVar9);
          }
        }
        _objc_release(uVar1);
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      puVar14 = &uStack_140;
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  puVar6 = PTR_PTR_1126cdc58;
  _objc_opt_class(PTR_PTR_1126cdc58);
  puVar10 = puVar14;
  _objc_opt_isKindOfClass(puVar14,puVar6);
  puVar2 = puVar14;
  if (((ulong)puVar10 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_retain(puVar2);
  puVar6 = PTR_PTR_1126cdc18;
  puVar10 = puVar14;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010bf0af00(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar10;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106786534;
  }
  _objc_retain(puVar14);
  _objc_opt_class(puVar6);
  puVar16 = puVar14;
  _objc_opt_isKindOfClass(puVar14,puVar6);
  if (((ulong)puVar16 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  _objc_retain(puVar10);
  _objc_release(puVar14);
  puVar16 = puVar14;
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = puVar14;
    func_0x00010c1005a0();
    puVar6 = PTR_PTR_1126cdc38;
    if ((puVar11 == (undefined8 *)0x2) || (puVar6 = PTR_PTR_1126cdc30, puVar11 == (undefined8 *)0x1)
       ) {
      _objc_retain(puVar14);
      _objc_opt_class(puVar6);
      _objc_opt_isKindOfClass(puVar14,puVar6);
      if (((ulong)puVar16 & 1) == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      _objc_retain(puVar10);
      _objc_release(puVar14);
      puVar11 = puVar10;
      func_0x00010c0ff4a0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar11;
      func_0x00010bfb1920(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar10;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar11);
      puVar10 = puVar14;
      goto LAB_106786534;
    }
    if (puVar11 == (undefined8 *)0x0) {
      func_0x00010c0844e0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar14;
      goto LAB_106786534;
    }
  }
  puVar6 = PTR_PTR_1126cdc40;
  _objc_retain(puVar14);
  _objc_opt_class(puVar6);
  puVar12 = puVar14;
  _objc_opt_isKindOfClass(puVar14,puVar6);
  puVar11 = puVar14;
  if (((ulong)puVar12 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(puVar14);
  puVar6 = PTR_PTR_1126cdc50;
  puVar12 = puVar14;
  if (puVar11 == (undefined8 *)0x0) {
    _objc_retain(puVar14);
    _objc_opt_class(puVar6);
    puVar13 = puVar14;
    _objc_opt_isKindOfClass(puVar14,puVar6);
    if (((ulong)puVar13 & 1) == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    _objc_retain(puVar12);
    _objc_release(puVar14);
    if (puVar12 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      func_0x00010bfb1a00(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106786524:
    _objc_release(puVar12);
  }
  else {
    puVar13 = puVar14;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar13 == (undefined8 *)0x0) {
      func_0x00010c0ff4a0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar13;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      goto LAB_106786524;
    }
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar11);
LAB_106786534:
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10678628c; end: 106786567; -[SCMemoriesOperaPlaylistDataSource _getInitialItemIdForGroup:] */

void FUN_10678628c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cdc58;
  _objc_opt_class(PTR_PTR_1126cdc58);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126cdc18;
  uVar3 = param_3;
  if (uVar1 != 0) {
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106786534;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar7 = param_3;
  if (uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010c1005a0();
    puVar2 = PTR_PTR_1126cdc38;
    if ((uVar4 == 2) || (puVar2 = PTR_PTR_1126cdc30, uVar4 == 1)) {
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      _objc_opt_isKindOfClass(param_3,puVar2);
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      uVar4 = uVar3;
      func_0x00010c0ff4a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bfb1920(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar4);
      uVar3 = param_3;
      goto LAB_106786534;
    }
    if (uVar4 == 0) {
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      goto LAB_106786534;
    }
  }
  puVar2 = PTR_PTR_1126cdc40;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar4 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cdc50;
  uVar5 = param_3;
  if (uVar4 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar6 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x00010bfb1a00(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106786524:
    _objc_release(uVar5);
  }
  else {
    uVar6 = param_3;
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 == 0) {
      func_0x00010c0ff4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      goto LAB_106786524;
    }
    func_0x00010bfb1a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
LAB_106786534:
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106786568; end: 1067866c3; -[SCMemoriesOperaPlaylistDataSource _buildGroupIdToDataModelMap:] */

void FUN_106786568(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        uVar3 = uVar7;
        func_0x00010c0844e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,uVar7,uVar3);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      puVar6 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_3;
  _objc_release();
  puVar5 = puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    pcStack_128 = FUN_1067866c4;
    puStack_140 = puVar2;
    lStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    if (*(char *)(lVar1 + 0x90) == '\x01') {
      _objc_retain(puVar6);
      puVar4 = (undefined1 *)puVar6;
      func_0x00010bf529e0(puVar6);
      func_0x00010bf71fe0(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_106786780;
      puStack_150 = &UNK_11093ab08;
      _objc_retain();
      puStack_148 = puVar5;
      func_0x00010bf97e80(puVar6,param_2,&puStack_168);
      _objc_release(puVar6);
      _objc_release(puStack_148);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067866c4; end: 10678677f; -[SCMemoriesOperaPlaylistDataSource _buildItemIdToDataModelIndexMap:] */

void FUN_1067866c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106786780;
    puStack_30 = &UNK_11093ab08;
    _objc_retain();
    puStack_28 = puVar2;
    func_0x00010bf97e80(param_3,param_2,&puStack_48);
    _objc_release(param_3);
    _objc_release(puStack_28);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106786780; end: 10678683b;  */

void FUN_106786780(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c0844e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10678683c; end: 106786903; -[SCMemoriesOperaPlaylistDataSource _indexInDataModelsForItem:] */

long FUN_10678683c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    if (param_3 == 0) {
      lVar3 = 0x7fffffffffffffff;
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010bfecde0(lVar3,param_2,param_3);
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = 0x7fffffffffffffff;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x50);
      func_0x00010c0e00e0(lVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar3 = 0x7fffffffffffffff;
      }
      else {
        lVar3 = lVar2;
        func_0x00010c2827c0(lVar2);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106786904; end: 1067873db; -[SCMemoriesOperaPlaylistDataSource _playbackInfoForGroup:] */

void FUN_106786904(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_2d8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cdc18;
  _objc_opt_class(PTR_PTR_1126cdc18);
  puVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126cdc58;
    _objc_opt_class(PTR_PTR_1126cdc58);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126cdc40;
      _objc_opt_class(PTR_PTR_1126cdc40);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      puVar3 = PTR_PTR_1126cdc40;
      puVar2 = param_3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = PTR_PTR_1126cdc50;
        _objc_opt_class(PTR_PTR_1126cdc50);
        puVar4 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar3);
        puVar3 = PTR_PTR_1126cdc50;
        if (((ulong)puVar4 & 1) == 0) goto LAB_106787340;
        _objc_retain(param_3);
        _objc_opt_class(puVar3);
        puVar4 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar3);
        if (((ulong)puVar4 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(param_3);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puVar3 = puVar2;
        func_0x00010c0ff4a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puStack_2d8 = puVar2;
        func_0x00010c0ff4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0x10;
        puVar3 = puStack_2d8;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puStack_2d8);
            }
            uVar8 = *(undefined8 *)((long)puVar12 * 8);
            puVar11 = PTR_PTR_1126b23d8;
            _objc_alloc(PTR_PTR_1126b23d8);
            func_0x00010c0844e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0558c0(puVar11);
            _objc_release(uVar8);
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            puVar6 = puVar11;
            func_0x00010bdc1720(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar8);
            _objc_release(puVar6);
            uVar8 = *(undefined8 *)(param_1 + 0x40);
            puVar6 = puVar11;
            func_0x00010bdc1720(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar8);
            _objc_release(puVar6);
            func_0x00010befa120(puVar4);
            _objc_release(puVar11);
            puVar12 = puVar12 + 1;
          } while (puVar3 != puVar12);
          uVar8 = 0x10;
          puVar3 = puStack_2d8;
          func_0x00010bf52a60();
        }
      }
      else {
        _objc_retain(param_3);
        _objc_opt_class(puVar3);
        puVar4 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar3);
        if (((ulong)puVar4 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(param_3);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puVar3 = puVar2;
        func_0x00010c0ff4a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puStack_2d8 = puVar2;
        func_0x00010c0ff4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0x10;
        puVar3 = puStack_2d8;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puStack_2d8);
            }
            uVar8 = *(undefined8 *)((long)puVar12 * 8);
            puVar11 = PTR_PTR_1126b23d8;
            _objc_alloc(PTR_PTR_1126b23d8);
            func_0x00010c0844e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0558c0(puVar11);
            _objc_release(uVar8);
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            puVar6 = puVar11;
            func_0x00010bdc1720(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar8);
            _objc_release(puVar6);
            uVar8 = *(undefined8 *)(param_1 + 0x40);
            puVar6 = puVar11;
            func_0x00010bdc1720(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar8);
            _objc_release(puVar6);
            func_0x00010befa120(puVar4);
            _objc_release(puVar11);
            puVar12 = puVar12 + 1;
          } while (puVar3 != puVar12);
          uVar8 = 0x10;
          puVar3 = puStack_2d8;
          func_0x00010bf52a60();
        }
      }
      _objc_release(puStack_2d8);
      puVar3 = PTR_PTR_1126af5d0;
      puVar12 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar4);
      _objc_release(puVar2);
      goto LAB_106787394;
    }
    puVar2 = PTR_PTR_1126b23d8;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    func_0x00010c0558c0();
    _objc_release(puVar3);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    puVar3 = puVar2;
    func_0x00010bdc1720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar10);
    _objc_release(puVar3);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    puVar3 = puVar2;
    func_0x00010bdc1720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar10);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126af5d0;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010c1005a0();
    puVar3 = PTR_PTR_1126cdc38;
    puVar2 = PTR_PTR_1126cdc30;
    if (puVar4 == (undefined *)0x2) {
      _objc_retain(param_3);
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      puVar2 = param_3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(param_3);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar3 = puVar2;
      func_0x00010c0ff4a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar12 = puVar2;
      func_0x00010c0ff4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0x10;
      puVar3 = puVar12;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar12);
          }
          uVar8 = *(undefined8 *)((long)puVar11 * 8);
          puVar6 = PTR_PTR_1126b23d8;
          _objc_alloc(PTR_PTR_1126b23d8);
          func_0x00010c0844e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0558c0(puVar6);
          _objc_release(uVar8);
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          puVar5 = puVar6;
          func_0x00010bdc1720(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8);
          _objc_release(puVar5);
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          puVar5 = puVar6;
          func_0x00010bdc1720(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8);
          _objc_release(puVar5);
          func_0x00010befa120(puVar4);
          _objc_release(puVar6);
          puVar11 = puVar11 + 1;
        } while (puVar3 != puVar11);
        uVar8 = 0x10;
        puVar3 = puVar12;
        func_0x00010bf52a60();
      }
      _objc_release(puVar12);
      puVar3 = PTR_PTR_1126af5d0;
      puVar12 = puVar4;
      func_0x00010bf51e00();
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
    else {
      if (puVar4 == (undefined *)0x1) {
        _objc_retain(param_3);
        _objc_opt_class(puVar2);
        puVar4 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar2);
        puVar3 = param_3;
        if (((ulong)puVar4 & 1) == 0) {
          puVar3 = (undefined *)0x0;
        }
        _objc_retain(puVar3);
        _objc_release(param_3);
        puVar2 = PTR_PTR_1126b23d8;
        _objc_alloc();
        puVar4 = puVar3;
        func_0x00010c0ff4a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar12;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0;
        func_0x00010c0558c0();
        _objc_release(puVar11);
        _objc_release(puVar12);
        _objc_release(puVar4);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        puVar4 = puVar2;
        func_0x00010bdc1720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(puVar4);
        puVar4 = puVar3;
        func_0x00010c0ff4a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010bfb1920(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        puVar12 = puVar2;
        func_0x00010bdc1720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(puVar12);
        _objc_release(puVar3);
        _objc_release(puVar4);
      }
      else {
        if (puVar4 != (undefined *)0x0) {
          _objc_release(param_3);
LAB_106787340:
          puVar3 = PTR_PTR_1126af5d0;
          uVar8 = 0xfffffffffffffff6;
          puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106787390;
        }
        puVar2 = PTR_PTR_1126b23d8;
        _objc_alloc();
        puVar3 = param_3;
        func_0x00010c0844e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0;
        func_0x00010c0558c0();
        _objc_release(puVar3);
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        puVar3 = puVar2;
        func_0x00010bdc1720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(puVar3);
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        puVar3 = puVar2;
        func_0x00010bdc1720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(puVar3);
      }
      puVar3 = PTR_PTR_1126af5d0;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = param_3;
  }
LAB_106787390:
  _objc_release(puVar2);
LAB_106787394:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x88);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f14ac(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1067873dc; end: 106787457; -[SCMemoriesOperaPlaylistDataSource _logFailToFetchEntryWithSnapId:entryId:isAsyncLoading:] */

void FUN_1067873dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f14ac(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106787458; end: 1067874c7; -[SCMemoriesOperaPlaylistDataSource _incrementMemoriesGrapheneMetric:] */

void FUN_106787458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067874c8; end: 10678761b; -[SCMemoriesOperaPlaylistDataSource _logAndAppendMediaLoadedPropertiesForItemId:newProperties:shouldUpdateProperties:error:] */

void FUN_1067874c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_6;
  _objc_retain(param_6);
  if (param_5 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10678761c;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010c0f88c0(lVar1,param_2,&puStack_78);
    _objc_release(lVar1);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_6;
    func_0x00010b5f1560(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar3,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10678761c; end: 10678762b;  */

void FUN_10678761c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__appendMediaLoadedPropertiesForI_112550e40,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10678762c; end: 1067877f7; -[SCMemoriesOperaPlaylistDataSource _appendMediaLoadedPropertiesForItemId:newProperties:] */

void FUN_10678762c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  puVar7 = *(undefined **)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c0e00e0(puVar7,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar7 != (undefined *)0x0) {
    puVar1 = puVar7;
  }
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar7 = puVar4;
    }
    _objc_retain(puVar7);
    _objc_release(puVar4);
    lVar5 = param_4;
    func_0x00010c0d3c80(param_4);
    puVar4 = puVar7;
    func_0x00010bf09f80(puVar7,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c1d0640(lVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0e2b8);
    lVar6 = lVar5;
    func_0x00010bf51e00(lVar5);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  func_0x00010bef7f60(puVar1,param_2,lVar6);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar1,param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1067877f8; end: 106787887; -[SCMemoriesOperaPlaylistDataSource applyLoadingErrorProperties:forPage:] */

void FUN_1067877f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cdc70;
    func_0x00010c09ce20(PTR_PTR_1126cdc70,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcd280(param_1,param_2,param_4,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106787888; end: 10678795b; -[SCMemoriesOperaPlaylistDataSource _removeMediaLoadedPropertiesForItemId:key:shouldAnnouncePlaylistUpdate:] */

void FUN_106787888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x48);
  _objc_retain(param_4);
  func_0x00010c0e00e0(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  func_0x00010c0d3c80(puVar1);
  _objc_release(puVar2);
  func_0x00010c12d3e0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar1,param_3);
  if (param_5 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101400();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10678795c; end: 1067879eb; -[SCMemoriesOperaPlaylistDataSource _asyncLoadBasePropertiesAndStartLoadMediasForNonCameraRollMemoriesItem:] */

void FUN_10678795c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067879ec;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1067879ec; end: 106787d4b;  */

void FUN_1067879ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  ulong in_x5;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af4c0;
  if (puVar5 == (undefined *)0x0 || puVar4 == (undefined *)0x0) {
    puVar14 = (undefined *)0x1;
    lVar13 = lVar1;
    puVar7 = puVar2;
    func_0x00010be52f80(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar6 = puVar5;
    func_0x00010bf97200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7b20();
    _objc_release(puVar6);
    puVar8 = PTR_PTR_1126cdc10;
    func_0x00010c0eb500();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126af4d0;
    func_0x00010bfa7400();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar6 = puVar9;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar9);
        }
        uVar10 = *(ulong *)((long)puVar14 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar4;
        func_0x00010c241220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010c0720c0();
        _objc_release(puVar11);
        _objc_release(uVar10);
        if ((uVar12 & 1) != 0) goto LAB_106787c18;
        puVar14 = puVar14 + 1;
      } while (puVar6 != puVar14);
      puVar6 = puVar9;
      func_0x00010bf52a60();
    }
LAB_106787c18:
    _objc_release(puVar9);
    puVar6 = PTR_PTR_1126cdc60;
    func_0x00010be3d460();
    in_x5 = (ulong)puVar7 & 0xffffffff;
    func_0x00010bf511a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    puVar7 = puVar6;
    func_0x00010c0f1980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be501e0(uVar16);
    _objc_release(puVar7);
    lVar13 = *(long *)(param_1 + 0x20);
    puVar7 = puVar4;
    puVar14 = puVar5;
    func_0x00010bec1ca0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar13);
  _objc_retain(puVar7);
  _objc_retain(puVar14);
  _objc_retain(in_x5);
  _objc_initWeak(auStack_1f8,lVar1);
  lVar15 = lVar1;
  func_0x00010c0ea7a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_106787f98;
  puStack_218 = &UNK_11093ab38;
  _objc_copyWeak(auStack_200,auStack_1f8);
  _objc_retain(puVar7);
  puStack_210 = puVar7;
  _objc_retain(lVar13);
  lStack_208 = lVar13;
  func_0x00010c251240(lVar15);
  _objc_release(lVar15);
  lVar15 = lVar1;
  func_0x00010c0ea7a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240(lVar13);
  func_0x00010c29e220(*(undefined8 *)(lVar1 + 0x10));
  func_0x00010c234320(*(undefined8 *)(lVar1 + 0x10));
  _objc_copyWeak(auStack_238,auStack_1f8);
  _objc_retain(puVar7);
  _objc_retain(lVar13);
  func_0x00010c251200(lVar15);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_238);
  _objc_release(lStack_208);
  _objc_release(puStack_210);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(in_x5);
  _objc_release(puVar14);
  _objc_release(puVar7);
  _objc_release(lVar13);
  return;
}



/* Entry: 106787d4c; end: 106787f97; -[SCMemoriesOperaPlaylistDataSource startedToLoadThumbnailAndMediaForRegularMemoriesItem:snap:snapDetail:entryInfo:] */

void FUN_106787d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_1;
  func_0x00010c0ea7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106787f98;
  puStack_98 = &UNK_11093ab38;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x00010c251240(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0ea7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240(param_3);
  func_0x00010c29e220(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c234320(*(undefined8 *)(param_1 + 0x10));
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c251200(lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106787f98; end: 1067880d7;  */

void FUN_106787f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0844e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be501e0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067880d8; end: 1067885c7; -[SCMemoriesOperaPlaylistDataSource _startToLoadMediaFromMediaManagerForMemoriesItem:snap:entry:isFailedEntry:entryInfo:] */

void FUN_1067880d8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c234320();
  lVar2 = param_4;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf97860();
    if (lVar2 == 8) {
      lVar2 = param_4;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar5 = *(undefined **)(param_1 + 0x58);
        func_0x00010c269d40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126af4d0;
        func_0x00010bfa73a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bc808;
        func_0x00010bfa6fc0(PTR_PTR_1126bc808);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b2608;
        func_0x00010c270300();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = auStack_70;
        _objc_initWeak(puVar9,param_1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_106788760;
        puStack_e8 = &UNK_11085d560;
        lStack_e0 = param_1;
        _objc_retain(puVar8);
        puStack_d8 = puVar8;
        uStack_c0 = uVar1;
        _objc_copyWeak(auStack_c8,auStack_70);
        _objc_retain(param_3);
        lStack_d0 = param_3;
        func_0x00010c0f7fc0(puVar9);
        _objc_release(puVar9);
        _objc_release(lStack_d0);
        _objc_destroyWeak(auStack_c8);
        _objc_release(puStack_d8);
        _objc_destroyWeak(auStack_70);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        goto LAB_106788220;
      }
    }
    lVar2 = param_4;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      _objc_initWeak(auStack_70,param_1);
      func_0x00010c0ea7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_148,auStack_70);
      _objc_retain(param_3);
      func_0x00010c251260(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      puVar9 = auStack_148;
    }
    else {
      _objc_initWeak(auStack_70,param_1);
      func_0x00010c0ea7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_1067888f8;
      puStack_128 = &UNK_11093ab68;
      _objc_copyWeak(auStack_108,auStack_70);
      _objc_retain(param_3);
      lStack_120 = param_3;
      _objc_retain(param_4);
      uVar3 = param_7;
      lStack_118 = param_4;
      _objc_retain(param_7);
      uStack_110 = param_7;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa300(param_1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(uStack_110);
      _objc_release(lStack_118);
      _objc_release(lStack_120);
      puVar9 = auStack_108;
    }
    _objc_destroyWeak(puVar9);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puVar5 = PTR_PTR_1126b2608;
    func_0x00010c23fe20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = auStack_70;
    _objc_initWeak(puVar9,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1067885c8;
    puStack_a0 = &UNK_11085d560;
    lStack_98 = param_1;
    _objc_retain(puVar5);
    puStack_90 = puVar5;
    uStack_78 = uVar1;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_4);
    lStack_88 = param_4;
    func_0x00010c0f7fc0(puVar9);
    _objc_release(puVar9);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_70);
LAB_106788220:
    _objc_release(puVar5);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067885c8; end: 1067886bf;  */

void FUN_1067885c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c0ea7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c251220(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1067886c0; end: 10678875f;  */

void FUN_1067886c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be501e0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106788760; end: 106788857;  */

void FUN_106788760(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c0ea7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c251220(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106788858; end: 1067888f7;  */

void FUN_106788858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0844e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be501e0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067888f8; end: 106788957;  */

void FUN_1067888f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c251e80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106788958; end: 1067889f7;  */

void FUN_106788958(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0844e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be501e0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067889f8; end: 1067889ff; -[SCMemoriesOperaPlaylistDataSource operaMediaManager] */

void FUN_1067889f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_getOrBuildOperaMediaManager_1125cfab8);
  return;
}



/* Entry: 106788a00; end: 106788a07; -[SCMemoriesOperaPlaylistDataSource operaCameraRollContentMediaManager] */

void FUN_106788a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_getOrBuildOperaMediaManagerForCa_1125cfac0);
  return;
}



/* Entry: 106788a08; end: 106788aa3; -[SCMemoriesOperaPlaylistDataSource _logDataConsistency:] */

void FUN_106788a08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5e358;
    func_0x00010b5f16a0(&PTR____CFConstantStringClassReference_110e5e358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38520(param_1,param_2,ppuVar1);
    _objc_release(ppuVar1);
  }
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5e378;
    func_0x00010b5f16a0(&PTR____CFConstantStringClassReference_110e5e378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38520(param_1,param_2,ppuVar1);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106788aa4; end: 106788b9b; -[SCMemoriesOperaPlaylistDataSource .cxx_destruct] */

void FUN_106788aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106788b9c; end: 106788d6b; -[SCMemoriesOperaPlaylistDataSourceBuilder initWithMemoriesDataObjectContext:memoriesSearchDatabase:memoriesOperaMediaManagerBuilder:memoriesBackupManager:userId:circumstanceEngine:grapheneRegistry:memoriesUserDefaultsManager:memoriesExperimentService:] */

undefined1 *
FUN_106788b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f3000;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106788d6c; end: 106788e1b; -[SCMemoriesOperaPlaylistDataSourceBuilder buildWithDataModels:firstDisplayGroupDataModel:memoriesOperaSessionConfig:] */

void FUN_106788d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cdc78;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0087c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106788e1c; end: 106788e9f; -[SCMemoriesOperaPlaylistDataSourceBuilder .cxx_destruct] */

void FUN_106788e1c(long param_1)

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



/* Entry: 106788ea0; end: 1067897cf;  */

void FUN_106788ea0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  undefined *puStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined *puStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined1 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  long lStack_318;
  long lStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
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
  puStack_320 = param_2;
  _objc_retain();
  _objc_retain(param_3);
  uStack_2b8 = param_4;
  _objc_retain(param_4);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(param_3);
  lStack_310 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar11 = *plStack_220;
    lStack_338 = lVar11;
    puStack_330 = puVar15;
    uStack_328 = param_1;
    do {
      lVar13 = 0;
      lStack_318 = param_3;
      do {
        if (*plStack_220 != lVar11) {
          _objc_enumerationMutation(lStack_310);
        }
        puVar14 = *(undefined **)(lStack_228 + lVar13 * 8);
        puVar1 = puVar14;
        func_0x00010c071ae0();
        if ((int)puVar1 == 0) {
          func_0x00010befa120(puVar15);
        }
        else {
          puVar15 = PTR_PTR_1126cdc30;
          _objc_opt_class(PTR_PTR_1126cdc30);
          puVar1 = puVar14;
          _objc_opt_isKindOfClass(puVar14,puVar15);
          lStack_300 = lVar13;
          if (((ulong)puVar1 & 1) == 0) {
            puVar15 = PTR_PTR_1126cdc38;
            _objc_opt_class(PTR_PTR_1126cdc38);
            puVar1 = puVar14;
            _objc_opt_isKindOfClass(puVar14,puVar15);
            puVar15 = PTR_PTR_1126cdc18;
            if (((ulong)puVar1 & 1) == 0) {
              _objc_retain(puVar14);
              _objc_alloc();
              puVar1 = puVar14;
              puStack_2c0 = puVar15;
              func_0x00010c0844e0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar14;
              puStack_2c8 = puVar1;
              func_0x00010bf97200(puVar14);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
              func_0x00010bf97860();
              puVar1 = puVar14;
              puStack_2d0 = puVar15;
              func_0x00010c072ac0();
              uStack_2dc = SUB84(puVar1,0);
              puVar15 = puVar14;
              func_0x00010c079e60();
              puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,(int)puVar15);
              puVar15 = puVar14;
              func_0x00010c07b240();
              uStack_2e0 = SUB84(puVar15,0);
              puVar1 = puVar14;
              func_0x00010c06bee0();
              puVar12 = puVar14;
              func_0x00010c0c5180();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar14;
              func_0x00010c0c6c20();
              puVar6 = puVar14;
              func_0x00010c1005a0();
              puVar7 = puVar14;
              func_0x00010c2a5040();
              puVar8 = puVar14;
              func_0x00010bfe0640();
              puVar9 = puVar14;
              func_0x00010c1177c0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar14;
              func_0x00010c240f60();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puStack_2c8;
              uStack_350 = SUB84(puVar7,0);
              uStack_34c = SUB84(puVar8,0);
              uStack_370 = SUB81(puVar1,0);
              puVar1 = puStack_2c0;
              puStack_368 = puVar12;
              puStack_360 = puVar5;
              puStack_358 = puVar6;
              puStack_348 = puVar9;
              puStack_340 = puVar10;
              func_0x00010c01fe40();
              _objc_release(puVar10);
              _objc_release(puVar9);
              param_1 = uStack_328;
              _objc_release(puVar12);
              _objc_release(puVar4);
              _objc_release(puVar15);
              puVar15 = puStack_330;
              func_0x00010befa120(puStack_330);
              _objc_retainAutorelease(puVar1);
              *puStack_320 = puVar1;
              _objc_release();
              _objc_release(puVar14);
              lVar11 = lStack_338;
              param_3 = lStack_318;
              lVar13 = lStack_300;
              goto LAB_106789730;
            }
            _objc_retain(puVar14);
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puVar15 = puVar14;
            func_0x00010c0ff4a0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            func_0x00010bf0a0e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            uStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            lStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            plStack_2a0 = (long *)0x0;
            puStack_308 = puVar14;
            func_0x00010c0ff4a0();
            _objc_retainAutoreleasedReturnValue();
            puStack_2f0 = puVar14;
            func_0x00010bf52a60();
            if (puVar14 != (undefined *)0x0) {
              lVar11 = *plStack_2a0;
              do {
                puVar15 = (undefined *)0x0;
                puStack_2f8 = puVar14;
                do {
                  if (*plStack_2a0 != lVar11) {
                    _objc_enumerationMutation(puStack_2f0);
                  }
                  puVar12 = *(undefined **)(lStack_2a8 + (long)puVar15 * 8);
                  puVar4 = puVar12;
                  func_0x00010c0844e0(puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = uStack_2b8;
                  func_0x00010bf4b900();
                  _objc_release(puVar4);
                  if ((int)uVar2 == 0) {
                    func_0x00010befa120(puVar1);
                  }
                  else {
                    puVar14 = PTR_PTR_1126cdc18;
                    _objc_alloc();
                    puVar4 = puVar12;
                    puStack_2c0 = puVar14;
                    func_0x00010c0844e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar14 = puVar12;
                    puStack_2c8 = puVar4;
                    func_0x00010bf97200();
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar12;
                    puStack_2d0 = puVar14;
                    func_0x00010bf97860();
                    puVar14 = puVar12;
                    puStack_2d8 = puVar4;
                    func_0x00010c072ac0();
                    uStack_2e0 = SUB84(puVar14,0);
                    puVar14 = puVar12;
                    func_0x00010c079e60();
                    uStack_2dc = SUB84(puVar14,0);
                    puVar14 = puVar12;
                    func_0x00010c07b240();
                    uStack_2e4 = SUB84(puVar14,0);
                    puVar14 = puVar12;
                    func_0x00010c06bee0();
                    uStack_2e8 = SUB84(puVar14,0);
                    puVar6 = puVar12;
                    func_0x00010c0c5180();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar12;
                    func_0x00010c0c6c20();
                    puVar8 = puVar12;
                    func_0x00010c1005a0();
                    puVar9 = puVar12;
                    func_0x00010c2a5040();
                    puVar10 = puVar12;
                    func_0x00010bfe0640();
                    puVar3 = puVar12;
                    func_0x00010c1177c0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c240f60();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puStack_2c8;
                    puVar4 = puStack_2d0;
                    puVar14 = puStack_2f8;
                    uStack_350 = SUB84(puVar9,0);
                    uStack_34c = SUB84(puVar10,0);
                    uStack_370 = (undefined1)uStack_2e8;
                    puVar9 = puStack_2c0;
                    puStack_368 = puVar6;
                    puStack_360 = puVar7;
                    puStack_358 = puVar8;
                    puStack_348 = puVar3;
                    puStack_340 = puVar12;
                    func_0x00010c01fe40(puStack_2c0);
                    func_0x00010befa120(puVar1);
                    _objc_release(puVar9);
                    _objc_release(puVar12);
                    _objc_release(puVar3);
                    _objc_release(puVar6);
                    _objc_release(puVar4);
                    _objc_release(puVar5);
                  }
                  puVar15 = puVar15 + 1;
                } while (puVar14 != puVar15);
                puVar14 = puStack_2f0;
                func_0x00010bf52a60();
              } while (puVar14 != (undefined *)0x0);
            }
            _objc_release(puStack_2f0);
            puVar14 = PTR_PTR_1126cdc38;
          }
          else {
            _objc_retain(puVar14);
            puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puVar15 = puVar14;
            func_0x00010c0ff4a0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            lStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            plStack_260 = (long *)0x0;
            puStack_308 = puVar14;
            func_0x00010c0ff4a0();
            _objc_retainAutoreleasedReturnValue();
            puStack_2f0 = puVar14;
            func_0x00010bf52a60();
            if (puVar14 != (undefined *)0x0) {
              lVar11 = *plStack_260;
              puStack_2f8 = puVar1;
              do {
                puVar15 = (undefined *)0x0;
                do {
                  if (*plStack_260 != lVar11) {
                    _objc_enumerationMutation(puStack_2f0);
                  }
                  puVar12 = *(undefined **)(lStack_268 + (long)puVar15 * 8);
                  puVar4 = puVar12;
                  func_0x00010c0844e0(puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = uStack_2b8;
                  func_0x00010bf4b900();
                  _objc_release(puVar4);
                  if ((int)uVar2 == 0) {
                    func_0x00010befa120(puVar1);
                  }
                  else {
                    puVar1 = PTR_PTR_1126cdc18;
                    _objc_alloc();
                    puVar4 = puVar12;
                    puStack_2c0 = puVar1;
                    func_0x00010c0844e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = puVar12;
                    puStack_2c8 = puVar4;
                    func_0x00010bf97200();
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar12;
                    puStack_2d0 = puVar1;
                    func_0x00010bf97860();
                    puVar1 = puVar12;
                    puStack_2d8 = puVar4;
                    func_0x00010c072ac0();
                    uStack_2e0 = SUB84(puVar1,0);
                    puVar1 = puVar12;
                    func_0x00010c079e60();
                    uStack_2dc = SUB84(puVar1,0);
                    puVar1 = puVar12;
                    func_0x00010c07b240();
                    uStack_2e4 = SUB84(puVar1,0);
                    puVar1 = puVar12;
                    func_0x00010c06bee0();
                    uStack_2e8 = SUB84(puVar1,0);
                    puVar6 = puVar12;
                    func_0x00010c0c5180();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar12;
                    func_0x00010c0c6c20();
                    puVar8 = puVar12;
                    func_0x00010c1005a0();
                    puVar9 = puVar12;
                    func_0x00010c2a5040();
                    puVar10 = puVar12;
                    func_0x00010bfe0640();
                    puVar3 = puVar12;
                    func_0x00010c1177c0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c240f60();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puStack_2c8;
                    puVar4 = puStack_2d0;
                    puVar1 = puStack_2f8;
                    uStack_350 = SUB84(puVar9,0);
                    uStack_34c = SUB84(puVar10,0);
                    uStack_370 = (undefined1)uStack_2e8;
                    puVar9 = puStack_2c0;
                    puStack_368 = puVar6;
                    puStack_360 = puVar7;
                    puStack_358 = puVar8;
                    puStack_348 = puVar3;
                    puStack_340 = puVar12;
                    func_0x00010c01fe40(puStack_2c0);
                    func_0x00010befa120(puVar1);
                    _objc_release(puVar9);
                    _objc_release(puVar12);
                    _objc_release(puVar3);
                    _objc_release(puVar6);
                    _objc_release(puVar4);
                    _objc_release(puVar5);
                  }
                  puVar15 = puVar15 + 1;
                } while (puVar14 != puVar15);
                puVar14 = puStack_2f0;
                func_0x00010bf52a60();
              } while (puVar14 != (undefined *)0x0);
            }
            _objc_release(puStack_2f0);
            puVar14 = PTR_PTR_1126cdc30;
          }
          _objc_alloc();
          puVar4 = puStack_308;
          puVar15 = puStack_308;
          func_0x00010c0844e0(puStack_308);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf97860(puVar4);
          func_0x00010c07b240(puVar4);
          func_0x00010c01fe80();
          _objc_release(puVar15);
          puVar15 = puStack_330;
          func_0x00010befa120(puStack_330);
          _objc_retainAutorelease(puVar14);
          *puStack_320 = puVar14;
          _objc_release();
          _objc_release(puVar1);
          _objc_release(puVar4);
          lVar11 = lStack_338;
          param_3 = lStack_318;
          param_1 = uStack_328;
          lVar13 = lStack_300;
        }
LAB_106789730:
        lVar13 = lVar13 + 1;
      } while (lVar13 != param_3);
      param_3 = lStack_310;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar11 = lStack_310;
  _objc_release(lStack_310);
  puVar14 = puVar15;
  func_0x00010bf51e00();
  _objc_release(puVar15);
  _objc_release(uStack_2b8);
  _objc_release(lVar11);
  uVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_390 = lVar11;
    pcStack_378 = FUN_1067897d0;
    puStack_3a0 = puVar15;
    uStack_398 = param_1;
    puStack_388 = puVar14;
    puStack_380 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_3a8,uVar2);
    puVar15 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_3b0,auStack_3a8);
    func_0x00010bf11fe0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126cdc80;
    _objc_alloc(PTR_PTR_1126cdc80);
    func_0x00010c02a9e0();
    _objc_release(puVar15);
    _objc_destroyWeak(auStack_3b0);
    _objc_destroyWeak(auStack_3a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1067897d0; end: 1067898b3; -[SCMemoriesOperaSessionFactoryServiceProvider provide] */

void FUN_1067897d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdc80;
  _objc_alloc(PTR_PTR_1126cdc80);
  func_0x00010c02a9e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067898b4; end: 1067898cb;  */

void FUN_1067898b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067898cc; end: 1067899af; -[SCMemoriesOperaSessionFactoryServiceProvider makeMemoriesOperaSessionServices] */

void FUN_1067898cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdc88;
  _objc_alloc(PTR_PTR_1126cdc88);
  func_0x00010c02aa00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067899b0; end: 1067899ef;  */

void FUN_1067899b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067899f0; end: 106789c3b; -[SCMemoriesOperaSessionFactoryServiceProvider _memoriesOperaSessionPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067899f0(long param_1,undefined8 param_2)

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
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126cdc90;
  _objc_alloc();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11274fbf4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11274fbf8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010c0eb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be5f1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106789c3c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be5f220();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar15 = 0;
    lVar16 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + _DAT_11274fc40);
    _objc_retain(uVar15);
    lVar16 = param_1 + _DAT_11274fc3c;
    _objc_loadWeakRetained();
  }
  lVar8 = param_1;
  func_0x000106789c60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106789c84();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + _DAT_11274fc44);
  }
  func_0x00010c004600(puVar1,param_2,lVar2,lVar3,lVar4,lVar6,lVar7,uVar15,lVar16,lVar9,lVar11,uVar14
                     );
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106789c3c; end: 106789ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106789c3c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274fc00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106789ca8; end: 10678a06f; -[SCMemoriesOperaSessionFactoryServiceProvider _memoriesOperaFeaturePluginBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106789ca8(long param_1,undefined8 param_2)

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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  puVar1 = PTR_PTR_1126cdc98;
  _objc_alloc();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11274fbf0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar22;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11274fbfc;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar18;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106789c3c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c9080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_106789c3c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c90c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11274fc28;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar19;
  func_0x00010c08d520();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000106789c60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11274fc20;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar20;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11274fc1c;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar21;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_10678a070();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010678a094();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0071c0(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar11,lVar12,lVar15,
                      lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar19);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(lVar22);
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11274fc34;
    _objc_loadWeakRetained(lVar22);
  }
  func_0x00010c1c65a0(puVar1,param_2,lVar22);
  _objc_release(lVar22);
  lVar22 = param_1;
  func_0x000106789c84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar22;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfdc0(puVar1,param_2,lVar18);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(lVar22);
  lVar22 = 0;
  if (param_1 != 0) {
    lVar22 = param_1 + _DAT_11274fc38;
    _objc_loadWeakRetained(lVar22);
  }
  lVar2 = lVar22;
  func_0x00010c0da640(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd6a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10678a070; end: 10678a0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678a070(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274fc18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10678a0b8; end: 10678a37b; -[SCMemoriesOperaSessionFactoryServiceProvider _memoriesOperaPlaylistDataSourceBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678a0b8(long param_1,undefined8 param_2)

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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126cdca0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11274fc04;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar15;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11274fc24;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar16;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106789c3c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c90c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11274fc0c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c0c7e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11274fc08;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000106789c60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010678a094();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11274fc30;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar19;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010678a070();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a5e0(puVar1,param_2,lVar2,lVar3,lVar5,lVar6,lVar8,lVar10,lVar12,lVar13,lVar14);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar2);
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10678a37c; end: 10678a4b7; -[SCMemoriesOperaSessionFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678a37c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274fc44,0);
  _objc_storeStrong(param_1 + _DAT_11274fc40,0);
  _objc_destroyWeak(param_1 + _DAT_11274fc3c);
  _objc_destroyWeak(param_1 + _DAT_11274fc38);
  _objc_destroyWeak(param_1 + _DAT_11274fc34);
  _objc_destroyWeak(param_1 + _DAT_11274fc30);
  _objc_destroyWeak(param_1 + _DAT_11274fc2c);
  _objc_destroyWeak(param_1 + _DAT_11274fc28);
  _objc_destroyWeak(param_1 + _DAT_11274fc24);
  _objc_destroyWeak(param_1 + _DAT_11274fc20);
  _objc_destroyWeak(param_1 + _DAT_11274fc1c);
  _objc_destroyWeak(param_1 + _DAT_11274fc18);
  _objc_destroyWeak(param_1 + _DAT_11274fc14);
  _objc_destroyWeak(param_1 + _DAT_11274fc10);
  _objc_destroyWeak(param_1 + _DAT_11274fc0c);
  _objc_destroyWeak(param_1 + _DAT_11274fc08);
  _objc_destroyWeak(param_1 + _DAT_11274fc04);
  _objc_destroyWeak(param_1 + _DAT_11274fc00);
  _objc_destroyWeak(param_1 + _DAT_11274fbfc);
  _objc_destroyWeak(param_1 + _DAT_11274fbf8);
  _objc_destroyWeak(param_1 + _DAT_11274fbf4);
  _objc_destroyWeak(param_1 + _DAT_11274fbf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fbec);
  return;
}



/* Entry: 10678a4b8; end: 10678a573; -[SCUserNavigationScopedMemoriesOperaSessionServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678a4b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cdca8;
  _objc_alloc(PTR_PTR_1126cdca8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11274fc4c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c9120(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b7400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02aa60(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10678a574; end: 10678a5ab; -[SCUserNavigationScopedMemoriesOperaSessionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10678a574(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fc4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fc48);
  return;
}



/* Entry: 10678a5ac; end: 10678a8fb; -[SCMemoriesOperaFeaturePlugin initWithBaseView:dataSource:memoriesOperaPresenterDelegate:memoriesOperaSessionConfig:pageHeight:sourcePageName:currentPageTracker:memoriesLegacyLogger:memoriesOperaActionHandlerSessionBuilder:memoriesOperaMediaManagerBuilder:shakeToReportAnnouncer:circumstanceEngine:cameraConfig:featureSettingsService:coreConfigProvider:grapheneRegistry:] */

undefined8 *
FUN_10678a5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126f3008;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    puVar1[5] = param_1;
    puVar1[6] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[4];
    puVar1[4] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    puVar1[0x16] = 0;
    uVar2 = param_15;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10678a8fc; end: 10678aa0b; -[SCMemoriesOperaFeaturePlugin dealloc] */

void FUN_10678a8fc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar2 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_1 + 0xc0);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010bf86d40(*(undefined8 *)(lStack_108 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  puStack_118 = PTR_PTR_1126f3008;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = (undefined1 *)((long)plVar2 + 0x80);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar6 != (undefined1 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(plVar2,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 10678aa0c; end: 10678aaab; -[SCMemoriesOperaFeaturePlugin dimissIfNoPresentedViewController] */

void FUN_10678aa0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 10678aaac; end: 10678aab3; -[SCMemoriesOperaFeaturePlugin dismiss] */

void FUN_10678aaac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAfterViewModelIsStable__11255e2b0,1);
  return;
}



/* Entry: 10678aab4; end: 10678aaf7; -[SCMemoriesOperaFeaturePlugin resumePlayback] */

void FUN_10678aab4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b4e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10678aaf8; end: 10678aaff; -[SCMemoriesOperaFeaturePlugin dismissAtOnce] */

void FUN_10678aaf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAfterViewModelIsStable__11255e2b0,0);
  return;
}



/* Entry: 10678ab00; end: 10678ac17; -[SCMemoriesOperaFeaturePlugin _dismissAfterViewModelIsStable:] */

void FUN_10678ab00(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_copyWeak(auStack_38,param_1 + 0x80);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010c29cc40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c29d5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c134d60(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10678ac18; end: 10678ac5b;  */

void FUN_10678ac18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10678ac5c; end: 10678ac83; -[SCMemoriesOperaFeaturePlugin playlistDataSource] */

void FUN_10678ac5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10678ac84; end: 10678ad73; -[SCMemoriesOperaFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_10678ac84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,lVar1);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126cdcb0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010a40(uVar6,puVar2,param_2,param_3,uVar5,uVar3,uVar4,*(undefined8 *)(param_1 + 0x68)
                      ,*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10678ad74; end: 10678ad7b; -[SCMemoriesOperaFeaturePlugin type] */

void FUN_10678ad74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_itemType_1125fed20);
  return;
}



/* Entry: 10678ad7c; end: 10678adbf; -[SCMemoriesOperaFeaturePlugin setPlaylistItemController:] */

void FUN_10678ad7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x78,param_3);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10678adc0; end: 10678aeaf; -[SCMemoriesOperaFeaturePlugin setOperaControlling:] */

void FUN_10678adc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x80,param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2340a0(*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10678aeb0; end: 10678af8f; -[SCMemoriesOperaFeaturePlugin navigateToNextGroupAfterDeferredNavigation] */

void FUN_10678aeb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80100();
    _objc_release(lVar3);
    _objc_release(lVar1);
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0d6240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6060();
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10678af90; end: 10678b097; -[SCMemoriesOperaFeaturePlugin updateOperaDependencies:] */

void FUN_10678af90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010bfc8440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab0c0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2aeec0(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c09d260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2fc0(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10678b098; end: 10678b0ab; -[SCMemoriesOperaFeaturePlugin updateOperaConfiguration:] */

void FUN_10678b098(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuStack_c8;
  
  lVar5 = *(long *)(param_1 + 0x18);
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar5,lVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x98));
  puVar10 = PTR_PTR_1126b23c0;
  _objc_retain(param_3);
  func_0x00010c0ea1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5480();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5380(0,puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c2300e0();
  if ((int)lVar1 != 0) {
    func_0x00010c2b69c0(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac5c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf21520(lVar5);
  func_0x00010c2ac520(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c22ff80();
  if ((int)lVar1 != 0) {
    func_0x00010c2a75e0(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2afd20(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = lVar5;
  func_0x00010bfa32a0();
  if (lVar1 - 1U < 3) {
    func_0x00010c0d9c20(PTR_PTR_1126c9b90);
  }
  else {
    if (lVar1 != 0) goto code_r0x000106d49ef8;
    func_0x00010c282640(PTR_PTR_1126c9b90);
  }
  func_0x00010c2bc6c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
code_r0x000106d49ef8:
  func_0x00010c230140(lVar5);
  func_0x00010c2b4880(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5ea0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar8 = param_3;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar3 = ppuVar8;
  func_0x00010c0d3c80();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar3);
    ppuVar4 = ppuVar3;
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar8);
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(ppuVar4);
  _objc_release(puVar2);
  ppuVar8 = ppuVar4;
  func_0x00010c2aba40(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c29e220();
  if (lVar1 == 0x5b) {
    ppuVar8 = (undefined **)0x1;
    func_0x00010c2b5b80(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puVar10);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    ppuVar3 = ppuVar8;
    func_0x00010bf977c0();
    lVar5 = (long)(int)ppuVar3;
    func_0x00010b5f5864(lVar5,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2600;
    _objc_alloc();
    func_0x00010bfbdda0();
    _objc_retain(ppuVar8);
    ppuVar3 = ppuVar8;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar3 = ppuVar8;
      func_0x00010bfbdda0();
      _objc_release(ppuVar8);
      func_0x00010b5fa33c();
      if (ppuVar3 == (undefined **)0x2) {
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110db1e38;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuStack_c8 = (undefined **)0x0;
      }
    }
    else {
      ppuStack_c8 = ppuVar8;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
    }
    func_0x00010bf977c0();
    func_0x00010c07b240();
    func_0x00010b5fc5e4();
    func_0x00010c0f7a20();
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010b5f6b3c();
    ppuVar3 = ppuVar8;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3d240();
    ppuVar4 = ppuVar8;
    func_0x00010bf3fcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar6 = ppuVar4;
    func_0x00010c0fefc0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined *)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar7 = ppuVar4;
      func_0x00010c0fefa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar6);
      if (ppuVar7 == (undefined **)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR_PTR_1126d2520;
        _objc_alloc();
        ppuVar6 = ppuVar4;
        func_0x00010c0fefc0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar4;
        func_0x00010c0fefa0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffe180();
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
      }
    }
    _objc_release(ppuVar4);
    ppuVar6 = ppuVar8;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    func_0x00010c010560(puVar2);
    _objc_release(ppuVar6);
    _objc_release(puVar10);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_c8);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10678b0ac; end: 10678b3d3; -[SCMemoriesOperaFeaturePlugin registeredEventsForOperaSession] */

void FUN_10678b0ac(void)

{
  byte bVar1;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined *in_x4;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
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
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b2330;
  puStack_110 = puVar2;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2330;
  puStack_108 = puVar24;
  func_0x00010c29e020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_100 = puVar23;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_f8 = puVar3;
  func_0x00010c29e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2338;
  puStack_f0 = puVar4;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_e8 = puVar5;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_e0 = puVar6;
  func_0x00010bf18820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  puStack_d8 = puVar7;
  func_0x00010bfafaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2330;
  puStack_d0 = puVar8;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2330;
  puStack_c8 = puVar9;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2330;
  puStack_c0 = puVar10;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2ea8;
  puStack_b8 = puVar11;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2ea8;
  puStack_b0 = puVar12;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2d30;
  puStack_a8 = puVar13;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9460;
  puStack_a0 = puVar14;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9460;
  puStack_98 = puVar15;
  func_0x00010bf11320();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c95c8;
  puStack_90 = puVar16;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2ea8;
  puStack_88 = puVar17;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b5b28;
  puStack_80 = puVar18;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = &puStack_110;
  lVar26 = 0x14;
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar23);
  _objc_release(puVar24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar25);
  _objc_retain(lVar26);
  _objc_retain(in_x4);
  ppuVar21 = ppuVar25;
  func_0x000107b27f14(ppuVar25,lVar26,in_x4);
  if (((ulong)ppuVar21 & 1) != 0) goto LAB_10678b538;
  puVar24 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar25;
  func_0x00010c0720c0();
  _objc_release(puVar24);
  if ((int)ppuVar21 != 0) {
    puVar2[0xb8] = 0;
    func_0x00010c187500(*(undefined8 *)(puVar2 + 8));
    puVar24 = puVar2 + 0x10;
    _objc_loadWeakRetained(puVar24);
    uVar22 = *(undefined8 *)(puVar2 + 8);
    func_0x00010bf5f680(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb040(puVar24);
    _objc_release(uVar22);
    _objc_release(puVar24);
    func_0x00010bdfea60(puVar2);
    goto LAB_10678b538;
  }
  puVar24 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar25;
  func_0x00010c0720c0();
  if ((int)ppuVar21 == 0) {
    puVar23 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar25;
    func_0x00010c0720c0();
    _objc_release(puVar23);
    _objc_release(puVar24);
    if ((int)ppuVar21 == 0) {
      puVar24 = PTR_PTR_1126b2d30;
      func_0x00010bf940a0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar25;
      func_0x00010c0720c0();
      _objc_release(puVar24);
      if ((int)ppuVar21 == 0) {
        puVar24 = PTR_PTR_1126b2330;
        func_0x00010bf3df20(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar25;
        func_0x00010c0720c0();
        _objc_release(puVar24);
        if ((int)ppuVar21 == 0) {
          puVar24 = PTR_PTR_1126b2330;
          func_0x00010bfaf7a0(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar25;
          func_0x00010c0720c0();
          _objc_release(puVar24);
          if ((int)ppuVar21 == 0) {
            puVar24 = PTR_PTR_1126b2330;
            func_0x00010bf17f80(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            ppuVar21 = ppuVar25;
            func_0x00010c0720c0();
            _objc_release(puVar24);
            if ((int)ppuVar21 == 0) {
              puVar24 = PTR_PTR_1126b2330;
              func_0x00010bf2e260(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              ppuVar21 = ppuVar25;
              func_0x00010c0720c0();
              _objc_release(puVar24);
              if ((int)ppuVar21 == 0) {
                puVar24 = PTR_PTR_1126b2330;
                func_0x00010bf18820(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                _objc_release(puVar24);
                if ((int)ppuVar21 != 0) {
                  puVar2[0xa1] = 1;
                  goto LAB_10678b538;
                }
                puVar24 = PTR_PTR_1126b2330;
                func_0x00010bfafaa0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                _objc_release(puVar24);
                if ((int)ppuVar21 != 0) {
                  puVar2[0xa1] = 0;
                  puVar24 = puVar2 + 0x10;
                  _objc_loadWeakRetained(puVar24);
                  func_0x00010c0eaee0();
                  _objc_release(puVar24);
                  func_0x00010bdfe2c0(puVar2);
                  goto LAB_10678b538;
                }
                puVar24 = PTR_PTR_1126c95c8;
                func_0x00010c09d2c0(PTR_PTR_1126c95c8);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                _objc_release(puVar24);
                if ((int)ppuVar21 != 0) {
                  func_0x00010bf82f40(puVar2);
                  goto LAB_10678b538;
                }
                puVar24 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                _objc_release(puVar24);
                if ((int)ppuVar21 != 0) {
                  func_0x00010be092a0(puVar2);
                  goto LAB_10678b538;
                }
                puVar24 = PTR_PTR_1126b5b28;
                func_0x00010c15b3c0(PTR_PTR_1126b5b28);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                _objc_release(puVar24);
                if ((int)ppuVar21 != 0) {
                  puVar2[0xb8] = 1;
                  goto LAB_10678b538;
                }
                puVar24 = PTR_PTR_1126b2ea8;
                func_0x00010c268600(PTR_PTR_1126b2ea8);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                if ((int)ppuVar21 == 0) {
                  _objc_release(puVar24);
                }
                else {
                  bVar1 = puVar2[0xb8];
                  _objc_release(puVar24);
                  if ((bVar1 & 1) == 0) {
                    func_0x00010c10e340(*(undefined8 *)(puVar2 + 0x88));
                    goto LAB_10678b538;
                  }
                }
                puVar24 = PTR_PTR_1126b2338;
                func_0x00010c0c4dc0(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar25;
                func_0x00010c0720c0();
                _objc_release(puVar24);
                if ((int)ppuVar21 == 0) goto LAB_10678b538;
                puVar24 = PTR_PTR_1126b2348;
                func_0x00010c120300(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                puVar23 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar24);
                puVar24 = PTR__OBJC_CLASS___NSError_1126ae858;
                _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                puVar3 = puVar23;
                _objc_opt_isKindOfClass(puVar23,puVar24);
                puVar24 = puVar23;
                if (((ulong)puVar3 & 1) == 0) {
                  puVar24 = (undefined *)0x0;
                }
                _objc_retain(puVar24);
                _objc_release(puVar23);
                if (lVar26 != 0) {
                  puVar23 = puVar24;
                  func_0x00010bf87dc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar3 = PTR_PTR_1126ba158;
                  func_0x00010bf87dc0(PTR_PTR_1126ba158);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar23;
                  func_0x00010c0720c0();
                  if (((ulong)puVar4 & 1) == 0) {
                    _objc_release(puVar3);
                    goto LAB_10678b68c;
                  }
                  puVar4 = puVar24;
                  func_0x00010bf3ec40();
                  if (puVar4 == (undefined *)0x66) {
                    _objc_release(puVar3);
                    _objc_release(puVar23);
                  }
                  else {
                    puVar4 = puVar24;
                    func_0x00010bf3ec40();
                    _objc_release(puVar3);
                    _objc_release(puVar23);
                    if (puVar4 != (undefined *)0x68) goto LAB_10678b6dc;
                  }
                  func_0x00010bf08680(*(undefined8 *)(puVar2 + 8));
                }
                goto LAB_10678b6dc;
              }
              uVar22 = *(undefined8 *)(puVar2 + 0xa8);
            }
            else {
              func_0x00010bdfea60(puVar2);
              uVar22 = *(undefined8 *)(puVar2 + 0xa8);
            }
            func_0x00010c1a7f60(uVar22);
            goto LAB_10678b538;
          }
          func_0x00010c1a7f60(*(undefined8 *)(puVar2 + 0xa8));
          puVar24 = *(undefined **)(puVar2 + 0xa8);
          *(undefined8 *)(puVar2 + 0xa8) = 0;
        }
        else {
          if (*(long *)(puVar2 + 0xb0) == 1) {
            puVar24 = puVar2 + 0x10;
            _objc_loadWeakRetained(puVar24);
            func_0x00010c0eaf80();
            _objc_release(puVar24);
          }
          puVar24 = puVar2 + 0x10;
          _objc_loadWeakRetained(puVar24);
          func_0x00010c0eae00();
          _objc_release(puVar24);
          puVar24 = PTR_PTR_1126afdd8;
          func_0x00010bfc8740();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar24 != (undefined *)0x0) &&
             (puVar23 = puVar24, func_0x00010c08fa60(), puVar23 != (undefined *)0x0)) {
            func_0x00010c24fc40(*(undefined8 *)(puVar2 + 0x38));
          }
          *(undefined8 *)(puVar2 + 0xb0) = 0;
          func_0x00010c1a7f60(*(undefined8 *)(puVar2 + 0xa8));
          uVar22 = *(undefined8 *)(puVar2 + 0x88);
          *(undefined8 *)(puVar2 + 0x88) = 0;
          _objc_release(uVar22);
          uVar22 = *(undefined8 *)(puVar2 + 0xa8);
          *(undefined8 *)(puVar2 + 0xa8) = 0;
          _objc_release(uVar22);
          uVar22 = *(undefined8 *)(puVar2 + 8);
          *(undefined8 *)(puVar2 + 8) = 0;
          _objc_release(uVar22);
          *(undefined2 *)(puVar2 + 0xa0) = 0;
          *(undefined8 *)(puVar2 + 0x30) = 0;
          puVar23 = *(undefined **)(puVar2 + 0x90);
          *(undefined8 *)(puVar2 + 0x90) = 0;
LAB_10678b68c:
          _objc_release(puVar23);
        }
LAB_10678b6dc:
        _objc_release(puVar24);
        goto LAB_10678b538;
      }
    }
  }
  else {
    _objc_release(puVar24);
  }
  func_0x00010be0a5c0(puVar2);
LAB_10678b538:
  _objc_release(in_x4);
  _objc_release(lVar26);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar25);
  return;
}



/* Entry: 10678b3d4; end: 10678ba4f; -[SCMemoriesOperaFeaturePlugin operaViewDidSendEvent:page:params:] */

void FUN_10678b3d4(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined *param_5)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x000107b27f14(param_3,param_4,param_5);
  if ((uVar2 & 1) != 0) goto LAB_10678b538;
  puVar5 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    func_0x00010c187500(*(undefined8 *)(param_1 + 8));
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5f680(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb040(lVar6);
    _objc_release(uVar3);
    _objc_release(lVar6);
    func_0x00010bdfea60(param_1);
    goto LAB_10678b538;
  }
  puVar5 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    puVar4 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(puVar5);
    if ((int)uVar2 == 0) {
      puVar5 = PTR_PTR_1126b2d30;
      func_0x00010bf940a0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if ((int)uVar2 == 0) {
        puVar5 = PTR_PTR_1126b2330;
        func_0x00010bf3df20(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        if ((int)uVar2 == 0) {
          puVar5 = PTR_PTR_1126b2330;
          func_0x00010bfaf7a0(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          if ((int)uVar2 == 0) {
            puVar5 = PTR_PTR_1126b2330;
            func_0x00010bf17f80(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            if ((int)uVar2 == 0) {
              puVar5 = PTR_PTR_1126b2330;
              func_0x00010bf2e260(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar5);
              if ((int)uVar2 == 0) {
                puVar5 = PTR_PTR_1126b2330;
                func_0x00010bf18820(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar2 != 0) {
                  *(undefined1 *)(param_1 + 0xa1) = 1;
                  goto LAB_10678b538;
                }
                puVar5 = PTR_PTR_1126b2330;
                func_0x00010bfafaa0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar2 != 0) {
                  *(undefined1 *)(param_1 + 0xa1) = 0;
                  lVar6 = param_1 + 0x10;
                  _objc_loadWeakRetained(lVar6);
                  func_0x00010c0eaee0();
                  _objc_release(lVar6);
                  func_0x00010bdfe2c0(param_1);
                  goto LAB_10678b538;
                }
                puVar5 = PTR_PTR_1126c95c8;
                func_0x00010c09d2c0(PTR_PTR_1126c95c8);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar2 != 0) {
                  func_0x00010bf82f40(param_1);
                  goto LAB_10678b538;
                }
                puVar5 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar2 != 0) {
                  func_0x00010be092a0(param_1);
                  goto LAB_10678b538;
                }
                puVar5 = PTR_PTR_1126b5b28;
                func_0x00010c15b3c0(PTR_PTR_1126b5b28);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar2 != 0) {
                  *(undefined1 *)(param_1 + 0xb8) = 1;
                  goto LAB_10678b538;
                }
                puVar5 = PTR_PTR_1126b2ea8;
                func_0x00010c268600(PTR_PTR_1126b2ea8);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                if ((int)uVar2 == 0) {
                  _objc_release(puVar5);
                }
                else {
                  bVar1 = *(byte *)(param_1 + 0xb8);
                  _objc_release(puVar5);
                  if ((bVar1 & 1) == 0) {
                    func_0x00010c10e340(*(undefined8 *)(param_1 + 0x88));
                    goto LAB_10678b538;
                  }
                }
                puVar5 = PTR_PTR_1126b2338;
                func_0x00010c0c4dc0(PTR_PTR_1126b2338);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar5);
                if ((int)uVar2 == 0) goto LAB_10678b538;
                puVar5 = PTR_PTR_1126b2348;
                func_0x00010c120300(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = param_5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
                _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
                puVar7 = puVar4;
                _objc_opt_isKindOfClass(puVar4,puVar5);
                puVar5 = puVar4;
                if (((ulong)puVar7 & 1) == 0) {
                  puVar5 = (undefined *)0x0;
                }
                _objc_retain(puVar5);
                _objc_release(puVar4);
                if (param_4 != 0) {
                  puVar4 = puVar5;
                  func_0x00010bf87dc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = PTR_PTR_1126ba158;
                  func_0x00010bf87dc0(PTR_PTR_1126ba158);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar4;
                  func_0x00010c0720c0();
                  if (((ulong)puVar8 & 1) == 0) {
                    _objc_release(puVar7);
                    goto LAB_10678b68c;
                  }
                  puVar8 = puVar5;
                  func_0x00010bf3ec40();
                  if (puVar8 == (undefined *)0x66) {
                    _objc_release(puVar7);
                    _objc_release(puVar4);
                  }
                  else {
                    puVar8 = puVar5;
                    func_0x00010bf3ec40();
                    _objc_release(puVar7);
                    _objc_release(puVar4);
                    if (puVar8 != (undefined *)0x68) goto LAB_10678b6dc;
                  }
                  func_0x00010bf08680(*(undefined8 *)(param_1 + 8));
                }
                goto LAB_10678b6dc;
              }
              uVar3 = *(undefined8 *)(param_1 + 0xa8);
            }
            else {
              func_0x00010bdfea60(param_1);
              uVar3 = *(undefined8 *)(param_1 + 0xa8);
            }
            func_0x00010c1a7f60(uVar3);
            goto LAB_10678b538;
          }
          func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xa8));
          puVar5 = *(undefined **)(param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0xa8) = 0;
        }
        else {
          if (*(long *)(param_1 + 0xb0) == 1) {
            lVar6 = param_1 + 0x10;
            _objc_loadWeakRetained(lVar6);
            func_0x00010c0eaf80();
            _objc_release(lVar6);
          }
          lVar6 = param_1 + 0x10;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c0eae00();
          _objc_release(lVar6);
          puVar5 = PTR_PTR_1126afdd8;
          func_0x00010bfc8740();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar5 != (undefined *)0x0) &&
             (puVar4 = puVar5, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
            func_0x00010c24fc40(*(undefined8 *)(param_1 + 0x38));
          }
          *(undefined8 *)(param_1 + 0xb0) = 0;
          func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xa8));
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          *(undefined8 *)(param_1 + 0x88) = 0;
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0xa8) = 0;
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          _objc_release(uVar3);
          *(undefined2 *)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          puVar4 = *(undefined **)(param_1 + 0x90);
          *(undefined8 *)(param_1 + 0x90) = 0;
LAB_10678b68c:
          _objc_release(puVar4);
        }
LAB_10678b6dc:
        _objc_release(puVar5);
        goto LAB_10678b538;
      }
    }
  }
  else {
    _objc_release(puVar5);
  }
  func_0x00010be0a5c0(param_1);
LAB_10678b538:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


