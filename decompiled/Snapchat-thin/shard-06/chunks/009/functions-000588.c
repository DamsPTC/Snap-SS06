/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f42e30; end: 104f42ed3;  */

void FUN_104f42e30(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104f42ea8;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x30);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f42ed4; end: 104f42f1b; -[SCRemoveFromGroupAction _nativeConversationManager] */

void FUN_104f42ed4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f42f1c; end: 104f42faf; -[SCRemoveFromGroupAction _handleError] */

void FUN_104f42f1c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f42fb0; end: 104f42fb7; -[SCRemoveFromGroupAction actionSheetCell] */

undefined8 FUN_104f42fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f42fb8; end: 104f42fbf; -[SCRemoveFromGroupAction position] */

undefined8 FUN_104f42fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f42fc0; end: 104f42fc7; -[SCRemoveFromGroupAction prominentActionButton] */

undefined8 FUN_104f42fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f42fc8; end: 104f4303f; -[SCRemoveFromGroupAction .cxx_destruct] */

void FUN_104f42fc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f43040; end: 104f43307; -[SCRemoveFromGroupActionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f43040(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
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
  
  lVar19 = (long)_DAT_11271774c;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = param_1 + _DAT_112717750;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfc61a0(uVar5,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c06ecc0();
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR_PTR_1126b2968;
      _objc_alloc();
      lVar1 = param_1 + lVar19;
      _objc_loadWeakRetained();
      lVar9 = lVar1;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + lVar19;
      _objc_loadWeakRetained();
      lVar10 = lVar2;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1 + lVar19;
      _objc_loadWeakRetained();
      lVar12 = lVar11;
      func_0x00010bfce860();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1 + _DAT_112717754;
      _objc_loadWeakRetained();
      lVar14 = lVar13;
      func_0x00010c0d5c60();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + _DAT_112717758;
      _objc_loadWeakRetained(lVar15);
      lVar16 = lVar15;
      func_0x00010bf89340();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + _DAT_11271775c;
      _objc_loadWeakRetained(lVar17);
      lVar18 = lVar17;
      func_0x00010c0dc640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004480(puVar8,param_2,lVar9,lVar10,lVar12,lVar14,lVar16,lVar18);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(lVar1);
      param_1 = param_1 + lVar19;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar1);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
  }
  return;
}



/* Entry: 104f43308; end: 104f43363; -[SCRemoveFromGroupActionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f43308(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717750);
  _objc_destroyWeak(param_1 + _DAT_11271775c);
  _objc_destroyWeak(param_1 + _DAT_112717758);
  _objc_destroyWeak(param_1 + _DAT_112717754);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271774c);
  return;
}



/* Entry: 104f43364; end: 104f433f3;  */

void FUN_104f43364(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbbd18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbbd18,
                      &PTR____CFConstantStringClassReference_110dbbd38,0);
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



/* Entry: 104f433f4; end: 104f445b7;  */

undefined **
FUN_104f433f4(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x27;
  long lVar20;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
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
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
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
  undefined *apuStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  ppuStack_260 = param_3;
  _objc_retain(param_3);
  uStack_1f8 = param_4;
  _objc_retain(param_4);
  ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_1);
  ppuVar6 = apuStack_170;
  ppuVar15 = (undefined **)0x10;
  ppuVar5 = param_1;
  ppuStack_258 = param_1;
  func_0x00010bf52a60();
  ppuStack_240 = ppuVar5;
  ppuStack_238 = ppuVar19;
  if (ppuVar5 != (undefined **)0x0) {
    lStack_248 = *plStack_1e0;
    ppuStack_250 = param_2;
    do {
      param_1 = (undefined **)0x0;
      do {
        if (*plStack_1e0 != lStack_248) {
          _objc_enumerationMutation(ppuStack_258);
        }
        ppuVar18 = *(undefined ***)(lStack_1e8 + (long)param_1 * 8);
        ppuStack_218 = param_1;
        _objc_retain(ppuVar18);
        _objc_retain(uStack_1f8);
        _objc_retain(ppuVar19);
        _objc_retain(param_2);
        ppuVar5 = param_2;
        func_0x00010c08a0a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = param_2;
        func_0x00010c08a160();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_2;
        func_0x00010c088500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = param_2;
        ppuStack_228 = ppuVar6;
        func_0x00010c088540();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_2;
        ppuStack_220 = ppuVar19;
        func_0x00010c0887e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = param_2;
        ppuStack_210 = ppuVar6;
        func_0x00010c08a1c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_2;
        func_0x00010c08aaa0();
        ppuStack_230 = ppuVar6;
        _objc_release(param_2);
        ppuVar19 = ppuVar18;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf5a4a0();
        func_0x00010bf651a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar18;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c071ae0();
        _objc_release(ppuVar8);
        puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
        ppuStack_200 = ppuVar6;
        ppuStack_208 = ppuVar19;
        if ((int)ppuVar9 == 0) {
          func_0x00010c1211c0(ppuVar19);
          func_0x00010bf651a0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08aee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          ppuVar9 = ppuVar18;
          func_0x00010c07ea80();
          ppuVar8 = ppuStack_228;
          if ((int)ppuVar9 != 0) {
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar19;
            func_0x00010bf4b900();
            _objc_release(ppuVar19);
            ppuVar8 = ppuStack_228;
            if ((int)ppuVar9 != 0) {
              if (ppuVar15 == (undefined **)0x0) {
                _objc_retain(ppuVar6);
                ppuVar15 = ppuVar6;
              }
              else {
                ppuVar19 = ppuVar15;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar15);
                ppuVar15 = ppuVar19;
              }
              ppuVar8 = ppuStack_228;
              ppuVar19 = ppuVar18;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar19;
              func_0x00010c0c6c20();
              ppuStack_230 = (undefined **)0x1;
              if (ppuVar9 != (undefined **)0x0) {
                ppuStack_230 = (undefined **)0x2;
              }
              _objc_release(ppuVar19);
            }
          }
          ppuVar9 = ppuStack_220;
          ppuVar10 = ppuVar18;
          func_0x00010c07ea80();
          ppuVar12 = ppuStack_210;
          ppuVar19 = ppuStack_238;
          if (((ulong)ppuVar10 & 1) == 0) {
            ppuVar19 = ppuStack_208;
            func_0x00010c157500();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar19;
            func_0x00010bf4b900();
            _objc_release(ppuVar19);
            ppuVar12 = ppuStack_210;
            ppuVar19 = ppuStack_238;
            if (((int)ppuVar10 != 0) &&
               (ppuVar10 = ppuVar18, func_0x00010c0807c0(), ppuVar12 = ppuStack_210,
               ppuVar19 = ppuStack_238, ((ulong)ppuVar10 & 1) == 0)) {
              if (ppuVar9 == (undefined **)0x0) {
                _objc_retain(ppuVar6);
                ppuStack_230 = (undefined **)0x0;
                ppuVar9 = ppuVar6;
              }
              else {
                ppuVar12 = ppuVar9;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar9);
                ppuStack_230 = (undefined **)0x0;
                ppuVar9 = ppuVar12;
                ppuVar12 = ppuStack_210;
              }
            }
          }
          _objc_release(ppuVar6);
          param_2 = ppuStack_250;
LAB_104f438cc:
          if (ppuVar5 != (undefined **)0x0) {
            func_0x00010c1d0640(ppuVar19);
          }
          if (ppuVar15 != (undefined **)0x0) {
            func_0x00010c1d0640(ppuVar19);
          }
          if (ppuVar8 != (undefined **)0x0) {
            func_0x00010c1d0640(ppuVar19);
          }
          if (ppuVar9 != (undefined **)0x0) {
            func_0x00010c1d0640(ppuVar19);
          }
          if (ppuStack_230 != (undefined **)0x0) {
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar19);
            _objc_release(puVar14);
          }
          if (ppuVar12 != (undefined **)0x0) {
            func_0x00010c1d0640(ppuVar19);
          }
          if (ppuVar7 != (undefined **)0x0) {
            func_0x00010c1d0640(ppuVar19);
          }
        }
        else {
          ppuVar6 = ppuVar18;
          func_0x00010c0cb9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuVar8 = ppuStack_228;
          param_2 = ppuStack_250;
          ppuVar9 = ppuStack_220;
          ppuVar12 = ppuStack_210;
          ppuVar19 = ppuStack_238;
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar8 = ppuVar18;
            func_0x00010c07ea80();
            ppuVar6 = ppuStack_200;
            ppuVar12 = ppuStack_210;
            ppuVar19 = ppuStack_238;
            param_2 = ppuStack_250;
            if ((int)ppuVar8 == 0) {
              ppuVar10 = ppuVar18;
              func_0x00010c0807c0();
              ppuVar9 = ppuStack_200;
              ppuVar6 = ppuStack_228;
              param_2 = ppuStack_250;
              ppuVar8 = ppuStack_228;
              if (((ulong)ppuVar10 & 1) == 0) {
                if (ppuStack_228 == (undefined **)0x0) {
                  _objc_retain(ppuStack_200);
                  ppuVar8 = ppuVar9;
                }
                else {
                  func_0x00010c08aee0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                }
              }
            }
            else if (ppuVar5 == (undefined **)0x0) {
              _objc_retain(ppuStack_200);
              ppuVar8 = ppuStack_228;
              ppuVar5 = ppuVar6;
            }
            else {
              ppuVar6 = ppuVar5;
              func_0x00010c08aee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar5);
              ppuVar8 = ppuStack_228;
              ppuVar5 = ppuVar6;
            }
            ppuVar10 = ppuVar18;
            func_0x00010c06f4c0();
            ppuVar6 = ppuStack_200;
            ppuVar9 = ppuStack_220;
            if ((int)ppuVar10 != 0) {
              if (ppuVar12 == (undefined **)0x0) {
                _objc_retain(ppuStack_200);
                ppuVar12 = ppuVar6;
              }
              else {
                ppuVar6 = ppuVar12;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar12);
                ppuVar12 = ppuVar6;
              }
            }
            ppuVar10 = ppuVar18;
            func_0x00010c07f620();
            ppuVar6 = ppuStack_200;
            if ((int)ppuVar10 != 0) {
              if (ppuVar7 == (undefined **)0x0) {
                _objc_retain(ppuStack_200);
                ppuVar7 = ppuVar6;
              }
              else {
                ppuVar6 = ppuVar7;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar7);
                ppuVar7 = ppuVar6;
              }
            }
            goto LAB_104f438cc;
          }
        }
        _objc_release(ppuStack_200);
        _objc_release(ppuStack_208);
        _objc_release(ppuVar7);
        _objc_release(ppuVar12);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(ppuVar15);
        _objc_release(ppuVar5);
        _objc_release(ppuVar19);
        uVar1 = uStack_1f8;
        _objc_release(uStack_1f8);
        _objc_release(ppuVar18);
        _objc_retain(ppuVar18);
        _objc_retain(uVar1);
        _objc_retain(param_2);
        _objc_retain(ppuVar19);
        ppuVar6 = param_2;
        func_0x00010c08a080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_2;
        ppuStack_208 = ppuVar6;
        func_0x00010c08a140();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_2;
        func_0x00010c0884e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = param_2;
        func_0x00010c088520();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = ppuVar18;
        ppuStack_200 = ppuVar15;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf5a4a0();
        func_0x00010bf651a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar18;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar15;
        func_0x00010c071ae0();
        _objc_release(ppuVar15);
        puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if ((int)ppuVar7 == 0) {
          ppuVar7 = ppuVar18;
          func_0x00010c07ea80();
          ppuVar15 = ppuStack_208;
          if ((int)ppuVar7 == 0) {
            ppuVar15 = ppuVar18;
            func_0x00010c0807c0();
            param_1 = ppuStack_218;
            unaff_x23 = ppuStack_200;
            ppuVar7 = ppuStack_208;
            if (((ulong)ppuVar15 & 1) == 0) {
              if (ppuVar6 == (undefined **)0x0) {
                _objc_retain(unaff_x24);
                param_1 = ppuStack_218;
                unaff_x23 = ppuStack_200;
                ppuVar7 = ppuStack_208;
                ppuVar6 = unaff_x24;
              }
              else {
                ppuVar15 = ppuVar6;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar6);
                param_1 = ppuStack_218;
                unaff_x23 = ppuStack_200;
                ppuVar7 = ppuStack_208;
                ppuVar6 = ppuVar15;
              }
            }
          }
          else if (ppuStack_208 == (undefined **)0x0) {
            _objc_retain(unaff_x24);
            param_1 = ppuStack_218;
            unaff_x23 = ppuStack_200;
            ppuVar7 = unaff_x24;
          }
          else {
            ppuVar7 = ppuStack_208;
            func_0x00010c08aee0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar15);
            param_1 = ppuStack_218;
            unaff_x23 = ppuStack_200;
          }
        }
        else {
          func_0x00010c1211c0(unaff_x27);
          func_0x00010bf651a0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_220 = unaff_x24;
          func_0x00010c08aee0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_210 = unaff_x24;
          _objc_release(puVar14);
          ppuVar15 = ppuVar18;
          func_0x00010c07ea80();
          ppuVar8 = unaff_x27;
          if ((int)ppuVar15 == 0) {
LAB_104f43c40:
            ppuVar15 = unaff_x27;
            func_0x00010c157500();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar15;
            func_0x00010bf529e0();
            _objc_release(ppuVar15);
            unaff_x23 = ppuStack_200;
            ppuVar7 = ppuStack_208;
            if (ppuVar9 != (undefined **)0x0) {
              uStack_188 = 0;
              uStack_190 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              lStack_1a8 = 0;
              uStack_1b0 = 0;
              uStack_198 = 0;
              plStack_1a0 = (long *)0x0;
              func_0x00010c157500();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar8;
              func_0x00010bf52a60();
              ppuVar7 = ppuStack_208;
              unaff_x23 = ppuStack_200;
              if (ppuVar15 != (undefined **)0x0) {
                lVar20 = *plStack_1a0;
                do {
                  ppuVar19 = (undefined **)0x0;
                  do {
                    if (*plStack_1a0 != lVar20) {
                      _objc_enumerationMutation(ppuVar8);
                    }
                    uVar11 = *(ulong *)(lStack_1a8 + (long)ppuVar19 * 8);
                    func_0x00010c071ae0();
                    if ((uVar11 & 1) == 0) {
                      ppuVar9 = ppuVar18;
                      func_0x00010c07ea80();
                      ppuVar15 = ppuStack_210;
                      ppuVar19 = ppuStack_238;
                      if ((int)ppuVar9 == 0) {
                        ppuVar12 = ppuVar18;
                        func_0x00010c0807c0();
                        ppuVar9 = ppuStack_200;
                        ppuVar15 = ppuStack_210;
                        ppuVar19 = ppuStack_238;
                        unaff_x23 = ppuStack_200;
                        if (((ulong)ppuVar12 & 1) == 0) {
                          if (ppuStack_200 == (undefined **)0x0) {
                            _objc_retain(ppuStack_210);
                            unaff_x23 = ppuVar15;
                          }
                          else {
                            func_0x00010c08aee0();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(ppuVar9);
                          }
                        }
                      }
                      else if (ppuVar5 == (undefined **)0x0) {
                        _objc_retain(ppuStack_210);
                        ppuVar5 = ppuVar15;
                        unaff_x23 = ppuStack_200;
                      }
                      else {
                        ppuVar15 = ppuVar5;
                        func_0x00010c08aee0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(ppuVar5);
                        ppuVar5 = ppuVar15;
                        unaff_x23 = ppuStack_200;
                      }
                      goto LAB_104f43ea4;
                    }
                    ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                  } while (ppuVar15 != ppuVar19);
                  ppuVar15 = ppuVar8;
                  func_0x00010bf52a60();
                  unaff_x23 = ppuStack_200;
                  ppuVar19 = ppuStack_238;
                } while (ppuVar15 != (undefined **)0x0);
              }
              goto LAB_104f43ea4;
            }
          }
          else {
            ppuVar15 = unaff_x27;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar15;
            func_0x00010bf529e0();
            _objc_release(ppuVar15);
            if (ppuVar7 == (undefined **)0x0) goto LAB_104f43c40;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            lStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            plStack_1a0 = (long *)0x0;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = ppuVar8;
            func_0x00010bf52a60();
            ppuVar7 = ppuStack_208;
            unaff_x23 = ppuStack_200;
            if (ppuVar15 != (undefined **)0x0) {
              lVar20 = *plStack_1a0;
              do {
                ppuVar19 = (undefined **)0x0;
                do {
                  if (*plStack_1a0 != lVar20) {
                    _objc_enumerationMutation(ppuVar8);
                  }
                  uVar11 = *(ulong *)(lStack_1a8 + (long)ppuVar19 * 8);
                  func_0x00010c071ae0();
                  ppuVar9 = ppuStack_210;
                  if ((uVar11 & 1) == 0) {
                    if (ppuVar5 == (undefined **)0x0) {
                      _objc_retain(ppuStack_210);
                      ppuVar5 = ppuVar9;
                      unaff_x23 = ppuStack_200;
                      ppuVar19 = ppuStack_238;
                    }
                    else {
                      ppuVar19 = ppuVar5;
                      func_0x00010c08aee0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar5);
                      ppuVar5 = ppuVar19;
                      unaff_x23 = ppuStack_200;
                      ppuVar19 = ppuStack_238;
                    }
                    goto LAB_104f43ea4;
                  }
                  ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                } while (ppuVar15 != ppuVar19);
                ppuVar15 = ppuVar8;
                func_0x00010bf52a60();
                unaff_x23 = ppuStack_200;
                ppuVar19 = ppuStack_238;
              } while (ppuVar15 != (undefined **)0x0);
            }
LAB_104f43ea4:
            _objc_release(ppuVar8);
          }
          param_1 = ppuStack_218;
          _objc_release(ppuStack_210);
          unaff_x24 = ppuStack_220;
        }
        if (ppuVar7 != (undefined **)0x0) {
          func_0x00010c1d0640(ppuVar19);
        }
        if (ppuVar5 != (undefined **)0x0) {
          func_0x00010c1d0640(ppuVar19);
        }
        if (ppuVar6 != (undefined **)0x0) {
          func_0x00010c1d0640(ppuVar19);
        }
        if (unaff_x23 != (undefined **)0x0) {
          func_0x00010c1d0640(ppuVar19);
        }
        _objc_release(unaff_x24);
        _objc_release(unaff_x27);
        _objc_release(unaff_x23);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(ppuVar7);
        _objc_release(ppuVar19);
        _objc_release(param_2);
        _objc_release(uStack_1f8);
        _objc_release(ppuVar18);
        param_1 = (undefined **)((long)param_1 + 1);
      } while (param_1 != ppuStack_240);
      ppuVar6 = apuStack_170;
      ppuVar15 = (undefined **)0x10;
      ppuVar5 = ppuStack_258;
      func_0x00010bf52a60();
      ppuStack_240 = ppuVar5;
    } while (ppuVar5 != (undefined **)0x0);
  }
  ppuVar5 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  _objc_release(ppuStack_258);
  _objc_retain(ppuVar19);
  ppuVar7 = ppuVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar8 = ppuVar19;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 == (undefined **)0x0) {
      unaff_x23 = ppuVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 == (undefined **)0x0) {
        unaff_x24 = ppuVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x24 == (undefined **)0x0) {
          ppuVar9 = ppuVar19;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          bVar2 = ppuVar9 != (undefined **)0x0;
          _objc_release();
        }
        else {
          bVar2 = true;
        }
        _objc_release(unaff_x24);
      }
      else {
        bVar2 = true;
      }
      _objc_release(unaff_x23);
    }
    else {
      bVar2 = true;
    }
    _objc_release(ppuVar8);
  }
  else {
    bVar2 = true;
  }
  _objc_release(ppuVar7);
  ppuVar7 = ppuVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = ppuVar19;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 != (undefined **)0x0) goto LAB_104f44110;
    ppuVar7 = &PTR____CFConstantStringClassReference_110dbbf18;
    ppuVar8 = ppuVar19;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110dbbf38;
      ppuVar9 = ppuVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      bVar3 = ppuVar9 != (undefined **)0x0;
      _objc_release();
    }
    else {
      bVar3 = true;
    }
    _objc_release(ppuVar8);
    _objc_release(0);
    _objc_release(ppuVar19);
    ppuStack_208 = (undefined **)0x0;
    if (!bVar2 && !bVar3) {
      ppuVar9 = (undefined **)0x0;
      ppuVar18 = ppuStack_260;
      goto LAB_104f444d8;
    }
  }
  else {
LAB_104f44110:
    _objc_release();
    _objc_release(ppuVar19);
  }
  _objc_retain(ppuStack_260);
  _objc_retain(ppuVar19);
  ppuVar6 = ppuVar19;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  func_0x00010c067fc0();
  ppuStack_208 = ppuVar5;
  _objc_release(ppuVar6);
  ppuVar6 = (undefined **)PTR_PTR_1126b2970;
  _objc_alloc();
  ppuVar5 = ppuVar19;
  ppuStack_210 = ppuVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar6 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar14);
  ppuStack_200 = ppuVar5;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuStack_200 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar5);
  ppuVar6 = ppuVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar5 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  param_1 = ppuVar6;
  if (((ulong)ppuVar5 & 1) == 0) {
    param_1 = (undefined **)0x0;
  }
  _objc_retain(param_1);
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar5 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  ppuStack_218 = ppuVar6;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuStack_218 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar5 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  ppuStack_220 = ppuVar6;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuStack_220 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar15 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar6 = ppuVar19;
  _objc_opt_isKindOfClass(ppuVar19,puVar14);
  ppuVar9 = ppuVar19;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar9 = (undefined **)0x0;
  }
  _objc_retain(ppuVar9);
  _objc_release(ppuVar19);
  ppuVar6 = ppuStack_238;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar19 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  unaff_x23 = ppuVar6;
  if (((ulong)ppuVar19 & 1) == 0) {
    unaff_x23 = (undefined **)0x0;
  }
  _objc_retain(unaff_x23);
  _objc_release(ppuVar6);
  ppuVar6 = ppuStack_238;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar15 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  ppuVar19 = ppuVar6;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar19 = (undefined **)0x0;
  }
  _objc_retain(ppuVar19);
  _objc_release(ppuVar6);
  ppuVar6 = ppuStack_238;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar15 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  unaff_x24 = ppuVar6;
  if (((ulong)ppuVar15 & 1) == 0) {
    unaff_x24 = (undefined **)0x0;
  }
  _objc_retain(unaff_x24);
  _objc_release(ppuVar6);
  ppuVar6 = ppuStack_238;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuStack_238);
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar15 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar14);
  ppuVar12 = ppuVar6;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar12 = (undefined **)0x0;
  }
  _objc_retain(ppuVar12);
  _objc_release(ppuVar6);
  unaff_x27 = ppuStack_218;
  ppuVar8 = ppuStack_220;
  ppuVar10 = ppuStack_210;
  ppuVar7 = ppuStack_260;
  ppuVar6 = ppuStack_200;
  ppuVar15 = param_1;
  param_6 = ppuStack_218;
  param_7 = ppuStack_220;
  ppuStack_290 = ppuVar5;
  ppuStack_288 = ppuVar9;
  ppuStack_280 = unaff_x23;
  ppuStack_278 = ppuVar19;
  ppuStack_270 = unaff_x24;
  ppuStack_268 = ppuVar12;
  func_0x00010c050bc0();
  ppuVar18 = ppuStack_260;
  param_8 = ppuStack_208;
  ppuStack_208 = ppuVar10;
  _objc_release(ppuVar12);
  _objc_release(unaff_x24);
  _objc_release(ppuVar19);
  _objc_release(unaff_x23);
  ppuVar19 = ppuStack_238;
  _objc_release(ppuVar9);
  _objc_release(ppuVar5);
  _objc_release(ppuVar8);
  _objc_release(unaff_x27);
  _objc_release(param_1);
  _objc_release(ppuStack_200);
  _objc_release(ppuVar18);
LAB_104f444d8:
  _objc_release(ppuVar19);
  _objc_release(uStack_1f8);
  _objc_release(ppuVar18);
  _objc_release(param_2);
  ppuVar12 = ppuStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pppuVar13 = &ppuStack_300;
    pcStack_298 = FUN_104f445b8;
    ppuStack_2f0 = ppuVar19;
    ppuStack_2e8 = unaff_x27;
    ppuStack_2e0 = ppuVar5;
    ppuStack_2d8 = ppuVar18;
    ppuStack_2d0 = unaff_x24;
    ppuStack_2c8 = unaff_x23;
    ppuStack_2c0 = param_1;
    ppuStack_2b8 = ppuVar9;
    ppuStack_2b0 = param_2;
    ppuStack_2a8 = ppuVar8;
    puStack_2a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar15);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puStack_2f8 = PTR_PTR_1126e5258;
    ppuStack_300 = ppuVar12;
    _objc_msgSendSuper2(&ppuStack_300,PTR_s_init_1125d9248);
    if (pppuVar13 != (undefined ***)0x0) {
      _objc_retain(ppuVar7);
      puVar14 = (undefined *)pppuVar13[1];
      pppuVar13[1] = ppuVar7;
      _objc_release(puVar14);
      _objc_retain(param_6);
      puVar14 = (undefined *)pppuVar13[2];
      pppuVar13[2] = param_6;
      _objc_release(puVar14);
      _objc_retain(param_7);
      puVar14 = (undefined *)pppuVar13[3];
      pppuVar13[3] = param_7;
      _objc_release(puVar14);
      ppuVar19 = ppuVar6;
      func_0x00010bf51e00();
      puVar14 = (undefined *)pppuVar13[4];
      pppuVar13[4] = ppuVar19;
      _objc_release(puVar14);
      puVar14 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = (undefined *)pppuVar13[5];
      pppuVar13[5] = (undefined **)puVar14;
      _objc_release(puVar16);
      _objc_retain(ppuVar15);
      puVar14 = (undefined *)pppuVar13[7];
      pppuVar13[7] = ppuVar15;
      _objc_release(puVar14);
      _objc_retain(param_8);
      puVar14 = (undefined *)pppuVar13[8];
      pppuVar13[8] = param_8;
      _objc_release(puVar14);
      puVar14 = PTR_PTR_1126ae810;
      _objc_opt_new();
      puVar16 = (undefined *)pppuVar13[9];
      pppuVar13[9] = (undefined **)puVar14;
      _objc_release(puVar16);
      uVar4 = SUB81(pppuVar13[2],0);
      func_0x00010bf1f440();
      *(undefined1 *)(pppuVar13 + 10) = uVar4;
      puVar14 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      puVar17 = (undefined *)pppuVar13[6];
      pppuVar13[6] = (undefined **)puVar14;
      _objc_release(puVar17);
      _objc_release(puVar16);
      func_0x00010bec7560(pppuVar13);
    }
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(ppuVar15);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    return (undefined **)pppuVar13;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuStack_208);
  return ppuStack_208;
}



/* Entry: 104f445b8; end: 104f447df; -[SCChatLastInteractionManager initWithLastInteractionDataService:userId:chatMessageActionHandler:circumstanceEngine:messagingExperimentService:conversationUpdateAccumulatedAnnouncer:] */

undefined1 *
FUN_104f445b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5258;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_7;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = uVar3;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined **)((long)puVar2 + 0x28) = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined **)((long)puVar2 + 0x48) = puVar4;
    _objc_release(uVar3);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x10);
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar2 + 0x50) = uVar1;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    func_0x00010bec7560(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104f447e0; end: 104f448d7; -[SCChatLastInteractionManager _subscribeToConversationUpdates] */

void FUN_104f447e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf50a00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104f448d8; end: 104f4497f;  */

void FUN_104f448d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 104f44980; end: 104f44acb;  */

void FUN_104f44980(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar7;
  long lVar8;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  puVar4 = auStack_e8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        unaff_x23 = *(undefined8 *)(param_1 + 0x28);
        unaff_x24 = unaff_x22;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28d4a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee4a00(unaff_x23);
        _objc_release(unaff_x22);
        _objc_release(unaff_x24);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_e8;
      lVar1 = lVar5;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104f44acc;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = lVar5;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if ((puVar3 != (undefined8 *)0x0) && (puVar4 != (undefined1 *)0x0)) {
    _objc_initWeak(auStack_178,lVar1);
    uVar6 = *(undefined8 *)(lVar1 + 0x38);
    puVar2 = (undefined1 *)puVar3;
    func_0x00010c272380(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_178);
    _objc_retain(puVar3);
    _objc_retain(puVar4);
    func_0x00010bfa5f80(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 104f44acc; end: 104f44c03; -[SCChatLastInteractionManager _updateWithNativeConversationId:updatedMessages:] */

void FUN_104f44acc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_3;
    func_0x00010c272380(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfa5f80(uVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f44c04; end: 104f44d1b;  */

void FUN_104f44c04(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 != 1)) {
    uVar2 = *(ulong *)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf80b40();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010c261400();
      _objc_release(uVar2);
      if (uVar4 == 8) goto LAB_104f44cfc;
    }
    else {
      _objc_release(uVar2);
    }
    uVar4 = param_2;
    func_0x00010c074920();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010c122e40(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c272380(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920(param_2);
    func_0x00010bed4700(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
LAB_104f44cfc:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f44d1c; end: 104f44e53; -[SCChatLastInteractionManager _updateByPerformerWithNativeConversationId:isGroup:recipientUserId:updatedMessages:] */

void FUN_104f44d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104f44e54; end: 104f44e8f;  */

void FUN_104f44e54(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee49e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f44e90; end: 104f44fe7; -[SCChatLastInteractionManager _updateWithNativeConversationId:isGroup:recipientUserId:updatedMessages:] */

void FUN_104f44e90(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  if (param_4 == 0) {
    lVar1 = param_5;
  }
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(lVar1);
    _objc_retain(param_6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfa7d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_6;
    FUN_104f433f4(param_6,uVar2,lVar1,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14b700();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286fa0();
    _objc_release(lVar1);
    _objc_release(param_6);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f44fe8; end: 104f44feb; -[SCChatLastInteractionManager didCreateConversation:] */

void FUN_104f44fe8(void)

{
  return;
}



/* Entry: 104f44fec; end: 104f45123; -[SCChatLastInteractionManager didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_104f44fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f45124; end: 104f45157;  */

void FUN_104f45124(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f45158; end: 104f4515b; -[SCChatLastInteractionManager didRemoveConversation:] */

void FUN_104f45158(void)

{
  return;
}



/* Entry: 104f4515c; end: 104f4515f; -[SCChatLastInteractionManager didSendStart:] */

void FUN_104f4515c(void)

{
  return;
}



/* Entry: 104f45160; end: 104f45163; -[SCChatLastInteractionManager didSendComplete:] */

void FUN_104f45160(void)

{
  return;
}



/* Entry: 104f45164; end: 104f45167; -[SCChatLastInteractionManager didConfirmConversationServerCreation:] */

void FUN_104f45164(void)

{
  return;
}



/* Entry: 104f45168; end: 104f4526f; -[SCChatLastInteractionManager didConversationReset:messages:] */

void FUN_104f45168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f45270; end: 104f452cf;  */

void FUN_104f45270(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee4a00(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f452d0; end: 104f45353; -[SCChatLastInteractionManager .cxx_destruct] */

void FUN_104f452d0(long param_1)

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



/* Entry: 104f45354; end: 104f45523; -[SCChatSnapchatterLastInteractionTimestampUpdater initWithUserId:snapchattersDataMutator:snapchattersDataTracker:friendsFeedEntryStore:crashLogger:translator:] */

undefined1 *
FUN_104f45354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5260;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f45524; end: 104f4564b; -[SCChatSnapchatterLastInteractionTimestampUpdater subscribeToFeedUpdates] */

void FUN_104f45524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f4564c; end: 104f456bb;  */

void FUN_104f4564c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c28d320(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee0480(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f456bc; end: 104f456c3; -[SCChatSnapchatterLastInteractionTimestampUpdater stopObservingFeedUpdates] */

void FUN_104f456bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 104f456c4; end: 104f4593f; -[SCChatSnapchatterLastInteractionTimestampUpdater _updateSnapchatterWithUpdatedFeedEntries:] */

void FUN_104f456c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar5 = lVar8;
        func_0x00010bf509a0();
        if (lVar5 == 0) {
          lVar7 = *(long *)(param_1 + 0x28);
          lVar5 = lVar8;
          func_0x00010c0f4aa0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c122e20(lVar7,param_2,lVar5,*(undefined8 *)(param_1 + 8));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          lVar5 = lVar7;
          func_0x00010c08fa60();
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar5 == 0) {
            lVar5 = *(long *)(param_1 + 8);
            func_0x00010c08fa60();
            if (lVar5 == 0) {
              ppuVar6 = &PTR____CFConstantStringClassReference_110dbbf98;
            }
            else {
              func_0x00010c0f4aa0();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar8;
              func_0x00010bf529e0();
              _objc_release(lVar8);
              ppuVar6 = &PTR____CFConstantStringClassReference_110dbbfb8;
              if (lVar5 != 1) {
                ppuVar6 = &PTR____CFConstantStringClassReference_110dbbfd8;
              }
            }
            func_0x00010c1330a0(*(undefined8 *)(param_1 + 0x20),param_2,ppuVar6);
          }
          else {
            func_0x00010c088aa0(lVar8);
            func_0x00010c0df7c0(puVar3,param_2,lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf65140(puVar4,param_2,puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            func_0x00010c1d0640(puVar1,param_2,puVar4,lVar7);
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar4,lVar7);
            _objc_release(puVar4);
          }
          _objc_release(lVar7);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bee22a0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 104f45940; end: 104f45943; -[SCChatSnapchatterLastInteractionTimestampUpdater didStartSnapchattersUpdateDataRequest:] */

void FUN_104f45940(void)

{
  return;
}



/* Entry: 104f45944; end: 104f45947; -[SCChatSnapchatterLastInteractionTimestampUpdater didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_104f45944(void)

{
  return;
}



/* Entry: 104f45948; end: 104f45a27; -[SCChatSnapchatterLastInteractionTimestampUpdater didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_104f45948(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104f45a28; end: 104f45a53;  */

void FUN_104f45a28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f45a54; end: 104f45a8b; -[SCChatSnapchatterLastInteractionTimestampUpdater _didEndSnapchattersFetchDataRequest] */

void FUN_104f45a54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar1);
  func_0x00010bee22a0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f45a8c; end: 104f45b63; -[SCChatSnapchatterLastInteractionTimestampUpdater _updateTimestampsWithUserIdToTimestamps:] */

void FUN_104f45a8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104f45b64;
    puStack_40 = &UNK_110841f20;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c289160(uVar2,param_2,param_3,uVar3,&puStack_58);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f45b64; end: 104f45b67;  */

void FUN_104f45b64(void)

{
  return;
}



/* Entry: 104f45b68; end: 104f45bdf; -[SCChatSnapchatterLastInteractionTimestampUpdater .cxx_destruct] */

void FUN_104f45b68(long param_1)

{
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



/* Entry: 104f45be0; end: 104f460b7; -[SCChatLastInteractionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f45be0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_1127177a8;
  _objc_loadWeakRetained();
  lVar19 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar19;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127177ac;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c069180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127177b0;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0890a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127177b4;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127177b8;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar19 = (long)_DAT_1127177bc;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bf509c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b2978;
  _objc_alloc();
  func_0x00010c021760();
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127177c0);
  *(undefined **)(param_1 + _DAT_1127177c0) = puVar8;
  _objc_release(uVar17);
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bf50180();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar1);
  func_0x00010bef9980(lVar9);
  lVar18 = (long)_DAT_1127177c4;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar19);
  lVar11 = lVar19;
  func_0x00010bfb9e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar18);
  lVar19 = lVar18;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puVar12 = PTR_PTR_1126b2980;
  _objc_alloc(PTR_PTR_1126b2980);
  lVar1 = param_1 + _DAT_1127177c8;
  _objc_loadWeakRetained(lVar1);
  lVar18 = lVar1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar12);
  _objc_release(lVar18);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b2988;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127177cc;
  _objc_loadWeakRetained(lVar1);
  lVar18 = lVar1;
  func_0x00010c27ae60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bb60();
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127177d0);
  *(undefined **)(param_1 + _DAT_1127177d0) = puVar8;
  _objc_release(uVar17);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar16 = PTR_PTR_1126aeec0;
  puVar8 = PTR_PTR_1126ae960;
  puVar14 = PTR_PTR_1126b2990;
  func_0x00010bf36a00(PTR_PTR_1126b2990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51740(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf0caa0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127177d4);
  *(undefined **)(param_1 + _DAT_1127177d4) = puVar16;
  _objc_release(uVar17);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar12);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 104f460b8; end: 104f460eb;  */

void FUN_104f460b8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f460ec; end: 104f460fb; -[SCChatLastInteractionEntryPoint _subscribeToFeedUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f460ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2601b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127177d0),PTR_s_subscribeToFeedUpdates_112675a90);
  return;
}



/* Entry: 104f460fc; end: 104f46177; -[SCChatLastInteractionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f460fc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_1127177d4;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c256440(*(undefined8 *)(param_1 + _DAT_1127177d0));
  puStack_38 = PTR_PTR_1126e5268;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f46178; end: 104f4623f; -[SCChatLastInteractionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46178(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127177d8);
  _objc_destroyWeak(param_1 + _DAT_1127177cc);
  _objc_destroyWeak(param_1 + _DAT_1127177c8);
  _objc_destroyWeak(param_1 + _DAT_1127177b8);
  _objc_destroyWeak(param_1 + _DAT_1127177b4);
  _objc_destroyWeak(param_1 + _DAT_1127177b0);
  _objc_destroyWeak(param_1 + _DAT_1127177c4);
  _objc_destroyWeak(param_1 + _DAT_1127177bc);
  _objc_destroyWeak(param_1 + _DAT_1127177ac);
  _objc_destroyWeak(param_1 + _DAT_1127177a8);
  _objc_storeStrong(param_1 + _DAT_1127177d4,0);
  _objc_storeStrong(param_1 + _DAT_1127177d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127177c0,0);
  return;
}



/* Entry: 104f46240; end: 104f46533; -[SCContactMeSettingsComposerViewController initWithValdiRuntime:alertPresenterFactory:userSnapContactsPrivacyProvider:snapContactsPrivacyMutator:friendsFeedFetcher:notificationPool:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:chatEligibilityProvider:snapProServices:newScbInChatEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f46240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
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
  puStack_68 = PTR_PTR_1126e5270;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    uVar3 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c06fd80();
    *(char *)((long)puVar1 + (long)_DAT_1127177dc) = (char)uVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177e0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177e4;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177e8;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177ec;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177f0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177f4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177f8;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127177fc;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112717800;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112717804;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112717808) = param_14;
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271780c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271780c) = puVar4;
    _objc_release(uVar3);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f46534; end: 104f4653b; -[SCContactMeSettingsComposerViewController pageViewName] */

undefined8 FUN_104f46534(void)

{
  return 0x111;
}



/* Entry: 104f4653c; end: 104f46583; -[SCContactMeSettingsComposerViewController viewDidLoad] */

void FUN_104f4653c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be22b00(param_1);
  return;
}



/* Entry: 104f46584; end: 104f4667b; -[SCContactMeSettingsComposerViewController _getSnapProProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112717804);
  func_0x00010c2932e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c116a60(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f4667c; end: 104f466c3;  */

void FUN_104f4667c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be22b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f466c4; end: 104f46917; -[SCContactMeSettingsComposerViewController _getSnapProStatusWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f466c4(long param_1,undefined1 *param_2,long param_3)

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
  undefined1 auStack_f8 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be4eee0(param_1);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112717804);
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c1176c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0e0ea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_78;
    _objc_copyWeak(auStack_80,param_2);
    _objc_retain(param_3);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_copyWeak(auStack_f8,param_3 + 0x30);
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c0c0800(param_2);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_f8);
  _objc_release(param_2);
  return;
}



/* Entry: 104f46918; end: 104f46a03;  */

void FUN_104f46918(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 104f46a04; end: 104f46a7b;  */

void FUN_104f46a04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c078f60(uVar1);
  func_0x00010be4eee0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f46a7c; end: 104f46a7f;  */

void FUN_104f46a7c(void)

{
  return;
}



/* Entry: 104f46a80; end: 104f46ab3; -[SCContactMeSettingsComposerViewController _loadViewWithIsSnapProOfficial:] */

void FUN_104f46a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be4ce40();
  func_0x00010bec8180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedfff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSnapContactsPrivacyIfNeed_1125959a0,param_3);
  return;
}



/* Entry: 104f46ab4; end: 104f46ba7; -[SCContactMeSettingsComposerViewController _loadContactMeSettingsViewWithIsSnapProOfficial:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2998;
  _objc_alloc_init(PTR_PTR_1126b2998);
  lVar2 = param_1;
  func_0x00010be5b4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0ba0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b29a0;
  _objc_alloc(PTR_PTR_1126b29a0);
  lVar2 = param_1;
  func_0x00010be5b6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3,param_2,puVar1,lVar2,*(undefined8 *)(param_1 + _DAT_1127177ec));
  func_0x00010c222380(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f46ba8; end: 104f46c2b; -[SCContactMeSettingsComposerViewController _makeAlertPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46ba8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127177f0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f46c2c; end: 104f46dff; -[SCContactMeSettingsComposerViewController _makeComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46c2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b29a8;
  _objc_opt_new(PTR_PTR_1126b29a8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f46e00;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1d2060(puVar1);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c1d3540(puVar1);
  puVar2 = PTR_PTR_1126b29b0;
  _objc_alloc();
  func_0x00010c062de0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112717810);
  *(undefined **)(param_1 + _DAT_112717810) = puVar2;
  _objc_release(uVar3);
  func_0x00010c21d360(puVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar4 = (long)_DAT_112717814;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3500(puVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f46e00; end: 104f46e73;  */

void FUN_104f46e00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f46e74; end: 104f46e7f; -[SCContactMeSettingsComposerViewController _handleDismissButtonTapped] */

void FUN_104f46e74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f46e80; end: 104f46fd7; -[SCContactMeSettingsComposerViewController _handleSettingsChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46e80(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127177f4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf01180();
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010c113ea0();
    iVar1 = (int)lVar5;
    puVar7 = PTR_PTR_1126b29b8;
    if (iVar1 == 0) {
      func_0x00010bfb9b80(PTR_PTR_1126b29b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 1) {
      func_0x00010bf9a640(PTR_PTR_1126b29b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 2) {
      func_0x00010c2808e0(PTR_PTR_1126b29b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    puVar6 = PTR_PTR_1126b29c0;
    _objc_alloc(PTR_PTR_1126b29c0);
    lVar5 = param_3;
    func_0x00010c078620(param_3);
    _objc_release(param_3);
    func_0x00010c05ef20(puVar6,param_2,puVar7,uVar4,lVar5);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010be99a80(param_1,param_2,puVar6);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f46fd8; end: 104f470db; -[SCContactMeSettingsComposerViewController _saveSnapContactsPrivacy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f46fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127177f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c28a000(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f470dc; end: 104f471e7;  */

void FUN_104f470dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f471e8;
  puStack_68 = &UNK_110841fb0;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  func_0x00010c0c07e0(param_2);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104f471e8; end: 104f47263;  */

void FUN_104f471e8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f47264; end: 104f472a3; -[SCContactMeSettingsComposerViewController _handleUpdateSettingsSuccessWithSnapPrivacy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f47264(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127177fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f472a4; end: 104f47387; -[SCContactMeSettingsComposerViewController _handleUpdateSettingsErrorWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f472a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f47388;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127177f4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84420(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f47388; end: 104f473cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f47388(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112717800);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f473d0; end: 104f47547; -[SCContactMeSettingsComposerViewController _subscribeToPrivacySettingsUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f473d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127177f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104f47548; end: 104f475b7;  */

void FUN_104f47548(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be84420(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f475b8; end: 104f47727; -[SCContactMeSettingsComposerViewController _publishSnapContactsPrivacy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f475b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR_PTR_1126b29c8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_opt_new();
    lVar3 = param_3;
    func_0x00010c2939e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104f47b7c;
    puStack_60 = &UNK_110842e18;
    _objc_retain(puVar2);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x104f47b88;
    puStack_88 = &UNK_110842e18;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x104f47b94;
    puStack_b0 = &UNK_110842e18;
    puStack_80 = puVar2;
    _objc_retain(puVar2);
    puStack_a8 = puVar2;
    func_0x00010c0c0ec0(lVar3,param_2,&puStack_78,&puStack_a0,&puStack_c8);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf01160(param_3);
    _objc_release(param_3);
    func_0x00010c1b2b80(puVar2,param_2,lVar3);
    puVar1 = puStack_a8;
    _objc_retain(puVar2);
    _objc_release(puVar1);
    _objc_release(puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112717814),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104f47728; end: 104f4797b; -[SCContactMeSettingsComposerViewController _updateSnapContactsPrivacyIfNeededWithIsSnapProOfficial:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f47728(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar1 = *(undefined **)(param_1 + _DAT_1127177f4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(char *)(param_1 + _DAT_1127177dc) == '\x01') {
    puVar1 = puVar2;
    func_0x00010bf01180();
    uVar5 = (uint)puVar1 ^ 1;
  }
  else {
    uVar5 = 0;
  }
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = (undefined1)uVar5;
  puVar1 = puVar2;
  func_0x00010c2939e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0ec0();
  _objc_release(puVar1);
  if ((*(byte *)(puStack_78 + 3) & 1) != 0) {
    if (param_3 == 0) {
      puVar1 = PTR_PTR_1126b29b8;
      func_0x00010bfb9b80(PTR_PTR_1126b29b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puVar2;
      func_0x00010c2939e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    if ((uVar5 & 1) == 0) {
      func_0x00010bf01160(puVar2);
    }
    puVar3 = PTR_PTR_1126b29c0;
    _objc_alloc();
    func_0x00010c05ef20();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127177f8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    func_0x00010c28a000(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar2);
  return;
}



/* Entry: 104f4797c; end: 104f4799b;  */

void FUN_104f4797c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | *(byte *)(param_1 + 0x28) ^ 1;
  return;
}



/* Entry: 104f4799c; end: 104f47a6b;  */

void FUN_104f4799c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c07e0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104f47a6c; end: 104f47a73;  */

void FUN_104f47a6c(void)

{
  return;
}



/* Entry: 104f47a74; end: 104f47a7f; -[SCContactMeSettingsComposerViewController defaultProjectNameV3] */

void FUN_104f47a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_chat_1125ab100);
  return;
}



/* Entry: 104f47a80; end: 104f47a8b; -[SCContactMeSettingsComposerViewController defaultProjectNameV2] */

void FUN_104f47a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_chat_1125ab100);
  return;
}



/* Entry: 104f47a8c; end: 104f47b7b; -[SCContactMeSettingsComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f47a8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271780c,0);
  _objc_storeStrong(param_1 + _DAT_112717814,0);
  _objc_storeStrong(param_1 + _DAT_112717804,0);
  _objc_storeStrong(param_1 + _DAT_1127177e8,0);
  _objc_storeStrong(param_1 + _DAT_1127177e4,0);
  _objc_storeStrong(param_1 + _DAT_1127177e0,0);
  _objc_storeStrong(param_1 + _DAT_112717810,0);
  _objc_storeStrong(param_1 + _DAT_112717800,0);
  _objc_storeStrong(param_1 + _DAT_1127177fc,0);
  _objc_storeStrong(param_1 + _DAT_1127177f8,0);
  _objc_storeStrong(param_1 + _DAT_1127177f4,0);
  _objc_storeStrong(param_1 + _DAT_1127177f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127177ec,0);
  return;
}



/* Entry: 104f47b7c; end: 104f47b9f;  */

void FUN_104f47b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e3490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPrivacyOptionType__112656748,2);
  return;
}



/* Entry: 104f47ba0; end: 104f47c3f; -[SCContactMeSettingsImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f47ba0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aeae0;
  func_0x00010c2a4c00(PTR_PTR_1126aeae0,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf3320(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112717818;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f47c40; end: 104f47db7; -[SCContactMeSettingsImplEntryPoint _createSettingsRowProviderWithSectionRow:] */

void FUN_104f47c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbbff8;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbff8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbff8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126aeae8;
  _objc_alloc(PTR_PTR_1126aeae8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0435e0(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f47db8; end: 104f47dff;  */

void FUN_104f47db8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ac00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f47e00; end: 104f4810f; -[SCContactMeSettingsImplEntryPoint _presentComposerContactMeWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f47e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
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
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar19 = (long)_DAT_11271781c;
  _objc_retain(param_3);
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar1 = lVar19;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar20;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(lVar1);
  _objc_release(lVar19);
  puVar3 = PTR_PTR_1126b29d0;
  _objc_alloc();
  lVar19 = param_1 + _DAT_112717820;
  _objc_loadWeakRetained();
  lVar4 = lVar19;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112717824;
  lVar1 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c23f980();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar6 = lVar20;
  func_0x00010c23f960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112717828;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfb9e60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271782c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112717830);
  uVar22 = *(undefined8 *)(param_1 + _DAT_112717834);
  lVar11 = param_1 + _DAT_112717838;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11271783c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf36440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112717840;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112717844;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0d8f80();
  func_0x00010c05fbc0(puVar3,param_2,lVar2,lVar4,lVar5,lVar6,lVar8,lVar10,uVar21,uVar22,lVar11,
                      lVar13,lVar14,(char)lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar19);
  puVar18 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar21 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c038f40(puVar18,param_2,uVar21,1);
  _objc_release(uVar21);
  func_0x00010bf0c980(puVar18,param_2,puVar3);
  _objc_release(puVar18);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f48110; end: 104f481c7; -[SCContactMeSettingsImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f48110(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717834,0);
  _objc_storeStrong(param_1 + _DAT_112717830,0);
  _objc_destroyWeak(param_1 + _DAT_112717838);
  _objc_destroyWeak(param_1 + _DAT_112717844);
  _objc_destroyWeak(param_1 + _DAT_112717840);
  _objc_destroyWeak(param_1 + _DAT_11271783c);
  _objc_destroyWeak(param_1 + _DAT_11271782c);
  _objc_destroyWeak(param_1 + _DAT_11271781c);
  _objc_destroyWeak(param_1 + _DAT_112717820);
  _objc_destroyWeak(param_1 + _DAT_112717828);
  _objc_destroyWeak(param_1 + _DAT_112717824);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717818);
  return;
}



/* Entry: 104f481c8; end: 104f482df; -[SCContactMeSettingsURLActionHandler initWithWebBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:contactMeSettingsViewController:newScbInChatEnabled:] */

undefined1 *
FUN_104f481c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5278;
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
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f482e0; end: 104f48593; -[SCContactMeSettingsURLActionHandler openUrlWithUrl:sourceType:] */

void FUN_104f482e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      _objc_initWeak(auStack_68,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_104f48594;
      puStack_80 = &UNK_110841fb0;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(puVar1);
      puStack_78 = puVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_98);
      _objc_release(puStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    else {
      puVar2 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2ad780();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_initWeak(auStack_68,param_1);
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      puVar3 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a0,auStack_68);
      _objc_retain(puVar1);
      func_0x00010c297260(puVar3);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ae638;
      _objc_opt_new(PTR_PTR_1126ae638);
      puVar5 = puVar3;
      func_0x00010bf22ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f48594; end: 104f485ff;  */

void FUN_104f48594(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010bf24620(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x20),
                        4,lVar1,&PTR___NSConcreteGlobalBlock_11085d6a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f48600; end: 104f48603;  */

void FUN_104f48600(void)

{
  return;
}



/* Entry: 104f48604; end: 104f48643;  */

void FUN_104f48604(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f48644; end: 104f48647; -[SCContactMeSettingsURLActionHandler shareUrlWithUrl:] */

void FUN_104f48644(void)

{
  return;
}



/* Entry: 104f48648; end: 104f4864f; -[SCContactMeSettingsURLActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104f48648(void)

{
  return 0;
}



/* Entry: 104f48650; end: 104f4865b; -[SCContactMeSettingsURLActionHandler pushToValdiMarshaller:] */

void FUN_104f48650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 104f4865c; end: 104f486a3; -[SCContactMeSettingsURLActionHandler webBrowserScopeDidComplete] */

void FUN_104f4865c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f486a4; end: 104f486a7; -[SCContactMeSettingsURLActionHandler webBrowserDidDismiss:] */

void FUN_104f486a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissBrowser_11255e338);
  return;
}



/* Entry: 104f486a8; end: 104f4871b; -[SCContactMeSettingsURLActionHandler _dismissBrowser] */

void FUN_104f486a8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 8);
  lVar1 = *plVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    plVar2 = (long *)(param_1 + 0x10);
    lVar1 = *plVar2;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      return;
    }
  }
  func_0x00010c12e1c0(*plVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104f4871c; end: 104f48763; -[SCContactMeSettingsURLActionHandler .cxx_destruct] */

void FUN_104f4871c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f48764; end: 104f4876f; +[SCCContactMeSettingsView componentPath] */

undefined ** FUN_104f48764(void)

{
  return &PTR____CFConstantStringClassReference_110dbc018;
}



/* Entry: 104f48770; end: 104f487a3; -[SCCContactMeSettingsView initWithViewModel:componentContext:runtime:] */

void FUN_104f48770(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5280;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}


