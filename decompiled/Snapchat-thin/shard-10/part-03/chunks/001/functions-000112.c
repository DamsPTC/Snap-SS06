/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f39d98; end: 107f39e23; -[SCMemoriesSearch resumeServiceForVisualConceptUpdaterIfNeeded] */

void FUN_107f39d98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d86b8;
  func_0x00010bf69960(PTR_PTR_1126d86b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar1,param_2,uVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f39e24; end: 107f39eaf; -[SCMemoriesSearch resumeServiceForSuggestedQueryUpdaterIfNeeded] */

void FUN_107f39e24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d86c8;
  func_0x00010bf69960(PTR_PTR_1126d86c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar1,param_2,uVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f39eb0; end: 107f39f27; -[SCMemoriesSearch suspendServiceForSuggestedQueryUpdaterIfNeeded] */

void FUN_107f39eb0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x118);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x118);
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



/* Entry: 107f39f28; end: 107f3a113; -[SCMemoriesSearch _searchResultsFromSuggestedResults:] */

void FUN_107f39f28(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  func_0x00010bf00840();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = 0.0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    puVar6 = &uStack_1b0;
    param_5 = auStack_f0;
    lVar2 = param_2;
    func_0x00010bf52a60(param_2,param_3,puVar6,param_5,0x10);
    if (lVar2 != 0) {
      lVar9 = *plStack_1a0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(param_2);
          }
          lVar8 = *(long *)(lStack_1a8 + lVar10 * 8);
          param_1 = 0.0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lVar3 = lVar8;
          func_0x00010c086f60();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf52a60();
          if (lVar4 != 0) {
            lVar11 = *plStack_1e0;
            do {
              lVar7 = 0;
              do {
                if (*plStack_1e0 != lVar11) {
                  _objc_enumerationMutation(lVar3);
                }
                uVar5 = *(undefined8 *)(lStack_1e8 + lVar7 * 8);
                func_0x00010bfda7c0(uVar5,param_3,param_4);
                if ((int)uVar5 != 0) {
                  func_0x00010befa120(puVar1,param_3,lVar8);
                  goto LAB_107f3a094;
                }
                lVar7 = lVar7 + 1;
              } while (lVar4 != lVar7);
              lVar4 = lVar3;
              func_0x00010bf52a60(lVar3,param_3,&uStack_1f0,auStack_170,0x10);
            } while (lVar4 != 0);
          }
LAB_107f3a094:
          _objc_release(lVar3);
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar2);
        puVar6 = &uStack_1b0;
        param_5 = auStack_f0;
        lVar2 = param_2;
        func_0x00010bf52a60(param_2,param_3,puVar6,param_5,0x10);
      } while (lVar2 != 0);
    }
  }
  _objc_release(param_2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    func_0x00010c26f380(param_5,param_3,puVar6);
    dVar12 = -259200.0;
    if (param_1 / 10.0 <= 259200.0) {
      dVar12 = -(param_1 / 10.0);
    }
    puVar1 = puVar6;
    func_0x00010bf64e40(dVar12,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f3a114; end: 107f3a18b; -[SCMemoriesSearch _fuzzyTimeStartDateWithOriginalStartDate:endDate:] */

void FUN_107f3a114(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010c26f380(param_5,param_3,param_4);
  dVar2 = -259200.0;
  if (param_1 / 10.0 <= 259200.0) {
    dVar2 = -(param_1 / 10.0);
  }
  uVar1 = param_4;
  func_0x00010bf64e40(dVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f3a18c; end: 107f3a4db; -[SCMemoriesSearch _snapMatchInfosFromFuzzyTimeParsing:] */

void FUN_107f3a18c(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x26;
  undefined8 uVar12;
  undefined **unaff_x27;
  undefined **ppuVar13;
  long lVar14;
  undefined *puStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int aiStack_1c0 [2];
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_128;
  long lStack_120;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  int aiStack_88 [2];
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  FUN_107f52c60(aiStack_88);
  if (aiStack_88[0] == -1 || aiStack_88[0] == 1) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lStack_80);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lStack_78);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_1;
    func_0x00010be19f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(unaff_x21);
    unaff_x24 = PTR_PTR_1126af4d0;
    unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = (undefined **)param_1[0x20];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1[0x1f];
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = unaff_x23;
    func_0x00010bfa7320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    puVar2 = unaff_x24;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0x0;
      puVar2 = param_1[0x1f];
      func_0x00010c269d40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_107f44da0(unaff_x24,&ppuStack_90,&puStack_98,puVar2);
      param_1 = ppuStack_90;
      _objc_retain(ppuStack_90);
      unaff_x26 = puStack_98;
      _objc_retain(puStack_98);
      _objc_release(puVar2);
      unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar13 = &PTR____CFConstantStringClassReference_110ec7818;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec7818,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar13;
      ppuStack_b0 = param_3;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      ppuVar13 = param_1;
      func_0x00010bf529e0();
      if ((ppuVar13 == (undefined **)0x0) ||
         (puVar2 = unaff_x26, func_0x00010bf529e0(), puVar2 == (undefined *)0x0)) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar13 = (undefined **)PTR_PTR_1126c3bb8;
        _objc_alloc();
        ppuVar3 = unaff_x27;
        func_0x00010bf2fac0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_b0 = (undefined **)((ulong)ppuStack_b0 & 0xffffffffffffff00);
        ppuVar4 = ppuVar3;
        puStack_a0 = unaff_x20;
        func_0x00010c03fe00(0x3f800000);
        unaff_x20 = puStack_a0;
        _objc_release(ppuVar3);
      }
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      _objc_release(param_1);
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x21);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_107f3a4dc;
    lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar11 = ppuVar4;
    ppuStack_110 = ppuVar13;
    ppuStack_108 = unaff_x27;
    puStack_100 = unaff_x26;
    ppuStack_f8 = param_1;
    puStack_f0 = unaff_x24;
    ppuStack_e8 = unaff_x23;
    puStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    puStack_d0 = unaff_x20;
    ppuStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    FUN_107f52c60(aiStack_1c0);
    if (aiStack_1c0[0] == -1 || aiStack_1c0[0] == 1) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0((double)lStack_1b8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0((double)lStack_1b0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126af4d0;
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_128 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = ppuVar3[0x20];
      func_0x00010c269d40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = ppuVar3[0x1f];
      func_0x00010c269d40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar5;
      func_0x00010bfa7320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = puVar2;
      func_0x00010bf529e0();
      if (puVar8 == (undefined *)0x0) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lStack_1f8 = 0;
        puStack_200 = (undefined *)0x0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        _objc_retain(puVar2);
        ppuVar11 = &puStack_200;
        puVar8 = puVar2;
        func_0x00010bf52a60();
        if (puVar8 != (undefined *)0x0) {
          lVar14 = *plStack_1f0;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_1f0 != lVar14) {
                _objc_enumerationMutation(puVar2);
              }
              uVar12 = *(undefined8 *)(lStack_1f8 + (long)puVar9 * 8);
              puVar10 = PTR_PTR_1126d86d0;
              _objc_alloc(PTR_PTR_1126d86d0);
              func_0x00010c241220(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c047d40(0x3ff0000000000000,puVar10);
              _objc_release(uVar12);
              func_0x00010befa120(ppuVar3);
              _objc_release(puVar10);
              puVar9 = puVar9 + 1;
            } while (puVar8 != puVar9);
            ppuVar11 = &puStack_200;
            puVar8 = puVar2;
            func_0x00010bf52a60();
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puVar2);
        ppuVar13 = ppuVar3;
        func_0x00010bf51e00(ppuVar3);
        _objc_release(ppuVar3);
      }
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_120) {
      ___stack_chk_fail();
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      iVar1 = 0x10dc7958;
      func_0x00010bfda7c0();
      if ((iVar1 == 0) || (ppuVar4 = ppuVar11, func_0x00010c08fa60(), ppuVar4 < (undefined **)0x2))
      {
        _objc_retain(ppuVar11);
        ppuVar13 = ppuVar11;
      }
      else {
        ppuVar13 = &PTR____CFConstantStringClassReference_110dc7958;
      }
      _objc_release(ppuVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 107f3a4dc; end: 107f3a7db; -[SCMemoriesSearch _snapMatchInfosFromTimeParsing:] */

void FUN_107f3a4dc(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int aiStack_110 [2];
  long lStack_108;
  long lStack_100;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  FUN_107f52c60(aiStack_110);
  if (aiStack_110[0] == -1 || aiStack_110[0] == 1) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lStack_108);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)lStack_100);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110f6e2d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af4d0;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar2;
    func_0x00010bfa7320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar5 = puVar8;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      puStack_150 = (undefined *)0x0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(puVar8);
      ppuVar11 = &puStack_150;
      puVar5 = puVar8;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar14 = *plStack_140;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_140 != lVar14) {
              _objc_enumerationMutation(puVar8);
            }
            uVar6 = *(undefined8 *)(lStack_148 + (long)puVar12 * 8);
            puVar10 = PTR_PTR_1126d86d0;
            _objc_alloc(PTR_PTR_1126d86d0);
            func_0x00010c241220(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c047d40(0x3ff0000000000000,puVar10,param_2,uVar6,0,1);
            _objc_release(uVar6);
            func_0x00010befa120(ppuVar9,param_2,puVar10);
            _objc_release(puVar10);
            puVar12 = puVar12 + 1;
          } while (puVar5 != puVar12);
          ppuVar11 = &puStack_150;
          puVar5 = puVar8;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar8);
      ppuVar13 = ppuVar9;
      func_0x00010bf51e00(ppuVar9);
      _objc_release(ppuVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 0x10dc7958;
    func_0x00010bfda7c0(&PTR____CFConstantStringClassReference_110dc7958,param_2,ppuVar11);
    if ((iVar1 == 0) || (ppuVar2 = ppuVar11, func_0x00010c08fa60(), ppuVar2 < (undefined **)0x2)) {
      _objc_retain(ppuVar11);
      ppuVar13 = ppuVar11;
    }
    else {
      ppuVar13 = &PTR____CFConstantStringClassReference_110dc7958;
    }
    _objc_release(ppuVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 107f3a7dc; end: 107f3a84f; -[SCMemoriesSearch _autocompleteUserSpecificConcept:] */

void FUN_107f3a7dc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x10dc7958;
  func_0x00010bfda7c0(&PTR____CFConstantStringClassReference_110dc7958,param_2,param_3);
  if ((iVar1 == 0) || (ppuVar2 = param_3, func_0x00010c08fa60(), ppuVar2 < (undefined **)0x2)) {
    _objc_retain(param_3);
    ppuVar2 = param_3;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc7958;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107f3a850; end: 107f3ad2f; -[SCMemoriesSearch _snapMatchInfosFromUserSpecificConcept:] */

undefined ** FUN_107f3a850(undefined **param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **unaff_x27;
  undefined **unaff_x28;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long *plStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long lStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  undefined **ppuStack_7c8;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined **ppuStack_7a0;
  undefined **ppuStack_798;
  undefined1 ****ppppuStack_790;
  code *pcStack_788;
  long lStack_778;
  undefined **ppuStack_770;
  long lStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined8 uStack_740;
  long lStack_738;
  undefined8 *puStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  long lStack_6f8;
  long *plStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  long *plStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long lStack_500;
  undefined1 ***pppuStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  long lStack_468;
  long lStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined1 **ppuStack_440;
  code *pcStack_438;
  long lStack_428;
  undefined **ppuStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined **ppuStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_210;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = &PTR____CFConstantStringClassReference_110dc7958;
  lVar18 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar18 != 0) {
    ppuVar2 = (undefined **)param_1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = ppuVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (unaff_x23 != (undefined **)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      ppuStack_160 = param_1;
      _objc_alloc_init();
      puVar4 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
      _objc_alloc_init();
      func_0x00010c189d40();
      ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSDateComponents_1126aef68;
      _objc_alloc_init();
      ppuStack_148 = ppuVar19;
      func_0x00010c2278a0();
      puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      puStack_150 = puVar7;
      func_0x00010bf5e300();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar2;
      func_0x00010bf44640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      ppuVar19 = ppuVar2;
      func_0x00010bf44640();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_170 = unaff_x25;
      func_0x00010c2bedc0(unaff_x25);
      func_0x00010c2278a0(ppuVar19);
      ppuVar5 = ppuVar2;
      ppuStack_178 = ppuVar19;
      func_0x00010bf650e0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = ppuVar5;
      puStack_168 = puVar4;
      ppuStack_158 = ppuVar2;
      func_0x00010bf64e20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = (undefined **)0xa;
      do {
        ppuVar6 = ppuVar2;
        ppuVar19 = unaff_x23;
        func_0x00010bf433a0();
        ppuVar9 = (undefined **)PTR_PTR_1126af4d0;
        ppuVar21 = ppuVar5;
        ppuVar15 = ppuVar2;
        if (ppuVar6 == (undefined **)0xffffffffffffffff) break;
        puStack_78 = puStack_150;
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuStack_160;
        puVar7 = ppuStack_160[0x20];
        func_0x00010c269d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = ppuVar19[0x1f];
        func_0x00010c269d40(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7320();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar4);
        func_0x00010befa160(puVar3);
        ppuVar19 = ppuStack_148;
        ppuVar15 = ppuStack_158;
        ppuVar21 = ppuStack_158;
        func_0x00010bf64e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        param_4 = ppuVar2;
        func_0x00010bf64e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(ppuVar9);
        uVar1 = (int)unaff_x28 - 1;
        unaff_x28 = (undefined **)(ulong)uVar1;
        unaff_x25 = ppuVar9;
        ppuVar5 = ppuVar21;
        ppuVar2 = ppuVar15;
      } while (uVar1 != 0);
      puVar4 = puVar3;
      func_0x00010bf529e0();
      unaff_x24 = ppuVar21;
      unaff_x27 = ppuVar15;
      if (puVar4 != (undefined *)0x0) {
        unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_188 = puVar4;
        ppuStack_180 = ppuVar21;
        ppuStack_160 = unaff_x23;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_138 = 0;
        puStack_140 = (undefined *)0x0;
        uStack_128 = 0;
        puStack_130 = (undefined8 *)0x0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        _objc_retain(puVar3);
        ppuVar19 = &puStack_140;
        param_4 = (undefined **)0x0;
        puVar4 = puVar3;
        func_0x00010bf52a60();
        if (puVar4 != (undefined *)0x0) {
          unaff_x25 = (undefined **)*puStack_130;
          unaff_x28 = &PTR_PTR_1126d8000;
          do {
            puVar7 = (undefined *)0x0;
            do {
              if ((undefined **)*puStack_130 != unaff_x25) {
                _objc_enumerationMutation(puVar3);
              }
              uVar17 = *(undefined8 *)(lStack_138 + (long)puVar7 * 8);
              puVar8 = PTR_PTR_1126d86d0;
              _objc_alloc(PTR_PTR_1126d86d0);
              func_0x00010c241220(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c047d40(0x3ff0000000000000,puVar8);
              _objc_release(uVar17);
              func_0x00010befa120(unaff_x27);
              _objc_release(puVar8);
              puVar7 = puVar7 + 1;
            } while (puVar4 != puVar7);
            ppuVar19 = &puStack_140;
            param_4 = (undefined **)0x0;
            puVar4 = puVar3;
            func_0x00010bf52a60();
          } while (puVar4 != (undefined *)0x0);
        }
        _objc_release(puVar3);
        ppuVar21 = unaff_x27;
        func_0x00010bf51e00();
        _objc_release(unaff_x27);
        puVar4 = puStack_188;
        unaff_x23 = ppuStack_160;
        unaff_x24 = ppuStack_180;
      }
      _objc_release(ppuVar15);
      _objc_release(unaff_x24);
      _objc_release(ppuStack_178);
      _objc_release(ppuStack_170);
      _objc_release(ppuStack_158);
      _objc_release(puStack_150);
      _objc_release(ppuStack_148);
      _objc_release(puStack_168);
      _objc_release(puVar3);
      _objc_release(unaff_x23);
      if (puVar4 != (undefined *)0x0) goto LAB_107f3ace8;
    }
  }
  ppuVar21 = (undefined **)0x0;
LAB_107f3ace8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_198 = FUN_107f3ad30;
    lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar19);
    puStack_348 = &uStack_340;
    uStack_340 = 0;
    uStack_330 = 0x3032000000;
    pcStack_328 = FUN_107f38338;
    uStack_320 = 0x107f38348;
    uStack_318 = 0;
    uVar17 = *(undefined8 *)(param_3 + 0x20);
    puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
    fVar23 = -32.0;
    uStack_370 = 0xc2000000;
    pcStack_368 = FUN_107f3b0fc;
    puStack_360 = &UNK_110a13f10;
    lStack_358 = param_3;
    puStack_338 = puStack_348;
    _objc_retain(ppuVar19);
    ppuStack_350 = ppuVar19;
    func_0x00010c0f8240(uVar17);
    fVar26 = 0.0;
    if (((ulong)param_4 & 1) == 0) {
      fVar26 = fVar23;
      func_0x00010becb9e0(param_3);
    }
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    lVar10 = puStack_338[5];
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar10;
    func_0x00010bf52a60();
    lStack_428 = lVar10;
    lStack_410 = lVar18;
    if (lVar18 != 0) {
      lStack_418 = *plStack_3b0;
      lVar10 = 6;
      do {
        lStack_408 = 0;
        do {
          if (*plStack_3b0 != lStack_418) {
            _objc_enumerationMutation(lStack_428);
          }
          unaff_x25 = *(undefined ***)(lStack_3b8 + lStack_408 * 8);
          unaff_x24 = unaff_x25;
          func_0x00010c25d280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = unaff_x25;
          func_0x00010c25d280();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 != (undefined **)0x0 && ppuVar5 != (undefined **)0x0) {
            ppuStack_420 = ppuVar5;
            FUN_107f3e2e8();
            _objc_retainAutoreleasedReturnValue();
            dVar25 = 0.0;
            uStack_3d8 = 0;
            uStack_3e0 = 0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            lStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3e8 = 0;
            puStack_3f0 = (undefined8 *)0x0;
            _objc_retain();
            ppuVar9 = ppuVar5;
            func_0x00010bf52a60();
            if (ppuVar9 != (undefined **)0x0) {
              unaff_x25 = (undefined **)*puStack_3f0;
              do {
                unaff_x23 = (undefined **)0x0;
                do {
                  if ((undefined **)*puStack_3f0 != unaff_x25) {
                    _objc_enumerationMutation(ppuVar5);
                  }
                  uVar11 = *(ulong *)(lStack_3f8 + (long)unaff_x23 * 8);
                  func_0x00010bf41780();
                  unaff_x28 = (undefined **)0x6;
                  if (uVar11 < 4) {
                    unaff_x28 = (undefined **)(uVar11 + 1);
                  }
                  func_0x00010beca580(param_3);
                  if ((double)fVar26 <= dVar25) {
                    unaff_x28 = (undefined **)PTR_PTR_1126d86d0;
                    _objc_alloc();
                    func_0x00010c047d40();
                    func_0x00010befa120(ppuVar2);
                    _objc_release(unaff_x28);
                  }
                  unaff_x23 = (undefined **)((long)unaff_x23 + 1);
                } while (ppuVar9 != unaff_x23);
                ppuVar9 = ppuVar5;
                func_0x00010bf52a60();
              } while (ppuVar9 != (undefined **)0x0);
            }
            unaff_x27 = (undefined **)0x0;
            _objc_release(ppuVar5);
            _objc_release(ppuVar5);
          }
          _objc_release();
          _objc_release(unaff_x24);
          lStack_408 = lStack_408 + 1;
        } while (lStack_408 != lStack_410);
        lVar18 = lStack_428;
        func_0x00010bf52a60();
        lStack_410 = lVar18;
      } while (lVar18 != 0);
    }
    _objc_release(lStack_428);
    ppuVar21 = ppuVar2;
    func_0x00010bf51e00();
    _objc_release(ppuVar2);
    _objc_release(ppuStack_350);
    __Block_object_dispose(&uStack_340,8);
    _objc_release(uStack_318);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
      ___stack_chk_fail();
      ppuVar15 = (undefined **)0x8;
      __Block_object_dispose(&uStack_340);
      ppuVar9 = ppuVar19;
      __Unwind_Resume();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      pcStack_438 = FUN_107f3b0fc;
      lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_470 = ppuVar9[5];
      lVar18 = *(long *)(ppuVar9[4] + 0x68);
      lStack_460 = lVar10;
      ppuStack_458 = ppuVar2;
      ppuStack_450 = ppuVar21;
      ppuStack_448 = ppuVar19;
      ppuStack_440 = &puStack_1a0;
      _objc_retain(ppuVar15);
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar15;
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      uVar17 = *(undefined8 *)(*(long *)(ppuVar9[6] + 8) + 0x28);
      *(undefined ***)(*(long *)(ppuVar9[6] + 8) + 0x28) = ppuVar19;
      _objc_release(uVar17);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
        return ppuVar5;
      }
      ___stack_chk_fail();
      pcStack_478 = FUN_107f3b1d0;
      lStack_500 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_480 = &ppuStack_440;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar5;
      lStack_778 = lVar18;
      func_0x00010be85500();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_6b8 = 0;
      uStack_6c0 = 0;
      uStack_6a8 = 0;
      plStack_6b0 = (long *)0x0;
      uStack_698 = 0;
      uStack_6a0 = 0;
      uStack_688 = 0;
      uStack_690 = 0;
      ppuStack_748 = ppuVar9;
      _objc_retain(ppuVar2);
      ppuStack_770 = ppuVar2;
      func_0x00010bf52a60();
      ppuStack_760 = ppuVar2;
      if (ppuVar2 != (undefined **)0x0) {
        lStack_768 = *plStack_6b0;
        do {
          ppuVar2 = (undefined **)0x0;
          do {
            if (*plStack_6b0 != lStack_768) {
              _objc_enumerationMutation(ppuStack_770);
            }
            unaff_x25 = *(undefined ***)(lStack_6b8 + (long)ppuVar2 * 8);
            unaff_x24 = unaff_x25;
            ppuStack_750 = ppuVar2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x25;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_758 = unaff_x27;
            FUN_107f3e2e8();
            _objc_retainAutoreleasedReturnValue();
            dVar25 = 0.0;
            lStack_6f8 = 0;
            uStack_700 = 0;
            uStack_6e8 = 0;
            plStack_6f0 = (long *)0x0;
            uStack_6d8 = 0;
            uStack_6e0 = 0;
            uStack_6c8 = 0;
            uStack_6d0 = 0;
            ppuVar2 = unaff_x27;
            func_0x00010bf52a60();
            if (ppuVar2 != (undefined **)0x0) {
              lVar18 = *plStack_6f0;
              unaff_x28 = ppuVar2;
              do {
                ppuVar19 = (undefined **)0x0;
                do {
                  if (*plStack_6f0 != lVar18) {
                    _objc_enumerationMutation(unaff_x27);
                  }
                  unaff_x23 = *(undefined ***)(lStack_6f8 + (long)ppuVar19 * 8);
                  func_0x00010bf41780(unaff_x23);
                  ppuVar2 = unaff_x25;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf25e60(unaff_x23);
                  func_0x00010c0c1a60(unaff_x23);
                  ppuVar9 = ppuVar2;
                  func_0x00010c260c60();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar9 != (undefined **)0x0) {
                    func_0x00010becb9e0(ppuVar5);
                    dVar24 = dVar25;
                    func_0x00010beca580(ppuVar5);
                    dVar25 = (double)SUB84(dVar25,0);
                    if (dVar25 <= dVar24) {
                      func_0x00010bf41780();
                      dVar25 = dVar24;
                      if ((1 < (long)unaff_x23) && (unaff_x23 == (undefined **)0x2)) {
                        dVar25 = (double)NEON_fminnm(dVar24,0x3fefae147ae147ae);
                      }
                      unaff_x23 = (undefined **)PTR_PTR_1126d86d0;
                      _objc_alloc();
                      func_0x00010c047d40();
                      func_0x00010befa120(ppuStack_748);
                      _objc_release(unaff_x23);
                    }
                  }
                  _objc_release(ppuVar9);
                  _objc_release(ppuVar2);
                  ppuVar19 = (undefined **)((long)ppuVar19 + 1);
                } while (unaff_x28 != ppuVar19);
                unaff_x28 = unaff_x27;
                func_0x00010bf52a60();
              } while (unaff_x28 != (undefined **)0x0);
            }
            _objc_release(unaff_x27);
            _objc_release(ppuStack_758);
            _objc_release(unaff_x24);
            ppuVar2 = (undefined **)((long)ppuStack_750 + 1);
          } while (ppuVar2 != ppuStack_760);
          ppuVar2 = ppuStack_770;
          func_0x00010bf52a60();
          ppuStack_760 = ppuVar2;
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuStack_770);
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuStack_748;
      lStack_738 = 0;
      uStack_740 = 0;
      uStack_728 = 0;
      puStack_730 = (undefined8 *)0x0;
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_708 = 0;
      uStack_710 = 0;
      _objc_retain(ppuStack_748);
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar19 = (undefined **)*puStack_730;
        do {
          unaff_x25 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_730 != ppuVar19) {
              _objc_enumerationMutation(ppuStack_748);
            }
            unaff_x23 = *(undefined ***)(lStack_738 + (long)unaff_x25 * 8);
            ppuVar9 = unaff_x23;
            func_0x00010c1536e0(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = ppuVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 == (undefined **)0x0) {
              unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppuVar5);
            }
            func_0x00010befa120(unaff_x24);
            _objc_release(unaff_x24);
            _objc_release(ppuVar9);
            unaff_x25 = (undefined **)((long)unaff_x25 + 1);
          } while (ppuVar2 != unaff_x25);
          ppuVar2 = ppuStack_748;
          func_0x00010bf52a60();
        } while (ppuVar2 != (undefined **)0x0);
      }
      ppuVar2 = ppuStack_748;
      _objc_release(ppuStack_748);
      ppuVar21 = ppuVar5;
      func_0x00010bf51e00();
      _objc_release(ppuVar5);
      _objc_release(ppuVar2);
      _objc_release(ppuStack_770);
      lVar18 = lStack_778;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_500) {
        ___stack_chk_fail();
        puVar16 = &uStack_8b0;
        ppuStack_7d0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        ppuStack_7a0 = ppuVar2;
        pcStack_788 = FUN_107f3b690;
        lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = *(long *)(lVar18 + 0xf0);
        ppuStack_7e0 = unaff_x28;
        ppuStack_7d8 = unaff_x27;
        ppuStack_7c8 = unaff_x25;
        ppuStack_7c0 = unaff_x24;
        ppuStack_7b8 = unaff_x23;
        ppuStack_7b0 = ppuVar5;
        ppuStack_7a8 = ppuVar19;
        ppuStack_798 = ppuVar21;
        ppppuStack_790 = &pppuStack_480;
        func_0x00010c1084e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_8a8 = 0;
        uStack_8b0 = 0;
        uStack_898 = 0;
        plStack_8a0 = (long *)0x0;
        uStack_888 = 0;
        uStack_890 = 0;
        uStack_878 = 0;
        uStack_880 = 0;
        _objc_retain(lVar12);
        lVar10 = lVar12;
        func_0x00010bf52a60();
        if (lVar10 != 0) {
          lVar20 = *plStack_8a0;
          do {
            lVar22 = 0;
            do {
              if (*plStack_8a0 != lVar20) {
                _objc_enumerationMutation(lVar12);
              }
              ppuVar2 = ppuVar19;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar2 == (undefined **)0x0) {
                lVar13 = lVar18;
                func_0x00010bebcee0(lVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuVar19);
                _objc_release(lVar13);
              }
              lVar22 = lVar22 + 1;
            } while (lVar10 != lVar22);
            lVar10 = lVar12;
            puVar16 = &uStack_8b0;
            func_0x00010bf52a60();
          } while (lVar10 != 0);
        }
        _objc_release(lVar12);
        ppuVar21 = ppuVar19;
        func_0x00010bf51e00();
        _objc_release(ppuVar19);
        _objc_release(lVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7e8) {
          ___stack_chk_fail();
          _objc_retain(puVar16);
          puVar14 = (undefined1 *)puVar16;
          func_0x00010c08fa60();
          if (puVar14 == (undefined1 *)0x24) {
            ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
            func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar2;
            func_0x00010bf99aa0();
            _objc_release(ppuVar2);
          }
          else {
            ppuVar19 = (undefined **)0x0;
          }
          _objc_release(puVar16);
          return ppuVar19;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar21);
  return ppuVar21;
}



/* Entry: 107f3ad30; end: 107f3b0fb; -[SCMemoriesSearch _snapMatchInfosFromTagMatching:isForContentUnderstandingTab:] */

undefined * FUN_107f3ad30(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar13;
  long lVar14;
  undefined *unaff_x27;
  undefined *unaff_x28;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined8 uStack_720;
  undefined8 uStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined **ppuStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined1 ***pppuStack_600;
  code *pcStack_5f8;
  long lStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_370;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  long lStack_298;
  undefined *puStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
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
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_1b8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_107f38338;
  uStack_190 = 0x107f38348;
  uStack_188 = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  fVar15 = -32.0;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_107f3b0fc;
  puStack_1d0 = &UNK_110a13f10;
  lStack_1c8 = param_1;
  puStack_1a8 = puStack_1b8;
  _objc_retain(param_3);
  lStack_1c0 = param_3;
  func_0x00010c0f8240(uVar12);
  fVar18 = 0.0;
  if ((param_4 & 1) == 0) {
    fVar18 = fVar15;
    func_0x00010becb9e0(param_1);
  }
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  lVar1 = puStack_1a8[5];
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf52a60();
  lStack_298 = lVar1;
  lStack_280 = lVar8;
  if (lVar8 != 0) {
    lStack_288 = *plStack_220;
    lVar1 = 6;
    do {
      lStack_278 = 0;
      do {
        if (*plStack_220 != lStack_288) {
          _objc_enumerationMutation(lStack_298);
        }
        unaff_x25 = *(undefined **)(lStack_228 + lStack_278 * 8);
        unaff_x24 = unaff_x25;
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = unaff_x25;
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x24 != (undefined *)0x0 && puVar9 != (undefined *)0x0) {
          puStack_290 = puVar9;
          FUN_107f3e2e8();
          _objc_retainAutoreleasedReturnValue();
          dVar17 = 0.0;
          uStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          puStack_260 = (undefined8 *)0x0;
          _objc_retain();
          puVar2 = puVar9;
          func_0x00010bf52a60();
          if (puVar2 != (undefined *)0x0) {
            unaff_x25 = (undefined *)*puStack_260;
            do {
              unaff_x23 = (undefined *)0x0;
              do {
                if ((undefined *)*puStack_260 != unaff_x25) {
                  _objc_enumerationMutation(puVar9);
                }
                uVar3 = *(ulong *)(lStack_268 + (long)unaff_x23 * 8);
                func_0x00010bf41780();
                unaff_x28 = (undefined *)0x6;
                if (uVar3 < 4) {
                  unaff_x28 = (undefined *)(uVar3 + 1);
                }
                func_0x00010beca580(param_1);
                if ((double)fVar18 <= dVar17) {
                  unaff_x28 = PTR_PTR_1126d86d0;
                  _objc_alloc();
                  func_0x00010c047d40();
                  func_0x00010befa120(puVar11);
                  _objc_release(unaff_x28);
                }
                unaff_x23 = unaff_x23 + 1;
              } while (puVar2 != unaff_x23);
              puVar2 = puVar9;
              func_0x00010bf52a60();
            } while (puVar2 != (undefined *)0x0);
          }
          unaff_x27 = (undefined *)0x0;
          _objc_release(puVar9);
          _objc_release(puVar9);
        }
        _objc_release();
        _objc_release(unaff_x24);
        lStack_278 = lStack_278 + 1;
      } while (lStack_278 != lStack_280);
      lVar8 = lStack_298;
      func_0x00010bf52a60();
      lStack_280 = lVar8;
    } while (lVar8 != 0);
  }
  _objc_release(lStack_298);
  puVar9 = puVar11;
  func_0x00010bf51e00();
  _objc_release(puVar11);
  _objc_release(lStack_1c0);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar6 = (undefined *)0x8;
    __Block_object_dispose(&uStack_1b0);
    lVar8 = param_3;
    __Unwind_Resume();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pcStack_2a8 = FUN_107f3b0fc;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_2e0 = *(undefined8 *)(lVar8 + 0x28);
    lVar10 = *(long *)(*(long *)(lVar8 + 0x20) + 0x68);
    lStack_2d0 = lVar1;
    puStack_2c8 = puVar11;
    puStack_2c0 = puVar9;
    lStack_2b8 = param_3;
    puStack_2b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
    uVar12 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar11;
    _objc_release(uVar12);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
      return puVar2;
    }
    ___stack_chk_fail();
    pcStack_2e8 = FUN_107f3b1d0;
    lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_2f0 = &puStack_2b0;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    lStack_5e8 = lVar10;
    func_0x00010be85500();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    plStack_520 = (long *)0x0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    puStack_5b8 = puVar6;
    _objc_retain(puVar9);
    puStack_5e0 = puVar9;
    func_0x00010bf52a60();
    puStack_5d0 = puVar9;
    if (puVar9 != (undefined *)0x0) {
      lStack_5d8 = *plStack_520;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_520 != lStack_5d8) {
            _objc_enumerationMutation(puStack_5e0);
          }
          unaff_x25 = *(undefined **)(lStack_528 + (long)puVar9 * 8);
          unaff_x24 = unaff_x25;
          puStack_5c0 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x25;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puStack_5c8 = unaff_x27;
          FUN_107f3e2e8();
          _objc_retainAutoreleasedReturnValue();
          dVar17 = 0.0;
          lStack_568 = 0;
          uStack_570 = 0;
          uStack_558 = 0;
          plStack_560 = (long *)0x0;
          uStack_548 = 0;
          uStack_550 = 0;
          uStack_538 = 0;
          uStack_540 = 0;
          puVar9 = unaff_x27;
          func_0x00010bf52a60();
          if (puVar9 != (undefined *)0x0) {
            lVar8 = *plStack_560;
            unaff_x28 = puVar9;
            do {
              puVar11 = (undefined *)0x0;
              do {
                if (*plStack_560 != lVar8) {
                  _objc_enumerationMutation(unaff_x27);
                }
                unaff_x23 = *(undefined **)(lStack_568 + (long)puVar11 * 8);
                func_0x00010bf41780(unaff_x23);
                puVar9 = unaff_x25;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf25e60(unaff_x23);
                func_0x00010c0c1a60(unaff_x23);
                puVar6 = puVar9;
                func_0x00010c260c60();
                _objc_retainAutoreleasedReturnValue();
                if (puVar6 != (undefined *)0x0) {
                  func_0x00010becb9e0(puVar2);
                  dVar16 = dVar17;
                  func_0x00010beca580(puVar2);
                  dVar17 = (double)SUB84(dVar17,0);
                  if (dVar17 <= dVar16) {
                    func_0x00010bf41780();
                    dVar17 = dVar16;
                    if ((1 < (long)unaff_x23) && (unaff_x23 == (undefined *)0x2)) {
                      dVar17 = (double)NEON_fminnm(dVar16,0x3fefae147ae147ae);
                    }
                    unaff_x23 = PTR_PTR_1126d86d0;
                    _objc_alloc();
                    func_0x00010c047d40();
                    func_0x00010befa120(puStack_5b8);
                    _objc_release(unaff_x23);
                  }
                }
                _objc_release(puVar6);
                _objc_release(puVar9);
                puVar11 = puVar11 + 1;
              } while (unaff_x28 != puVar11);
              unaff_x28 = unaff_x27;
              func_0x00010bf52a60();
            } while (unaff_x28 != (undefined *)0x0);
          }
          _objc_release(unaff_x27);
          _objc_release(puStack_5c8);
          _objc_release(unaff_x24);
          puVar9 = puStack_5c0 + 1;
        } while (puVar9 != puStack_5d0);
        puVar9 = puStack_5e0;
        func_0x00010bf52a60();
        puStack_5d0 = puVar9;
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puStack_5e0);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_5b8;
    lStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_598 = 0;
    puStack_5a0 = (undefined8 *)0x0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    _objc_retain(puStack_5b8);
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      puVar11 = (undefined *)*puStack_5a0;
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_5a0 != puVar11) {
            _objc_enumerationMutation(puStack_5b8);
          }
          unaff_x23 = *(undefined **)(lStack_5a8 + (long)unaff_x25 * 8);
          puVar6 = unaff_x23;
          func_0x00010c1536e0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x24 == (undefined *)0x0) {
            unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
          }
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x24);
          _objc_release(puVar6);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar9 != unaff_x25);
        puVar9 = puStack_5b8;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    puVar6 = puStack_5b8;
    _objc_release(puStack_5b8);
    puVar9 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puStack_5e0);
    lVar8 = lStack_5e8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_370) {
      ___stack_chk_fail();
      puVar7 = &uStack_720;
      ppuStack_640 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puStack_610 = puVar6;
      pcStack_5f8 = FUN_107f3b690;
      lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar10 = *(long *)(lVar8 + 0xf0);
      puStack_650 = unaff_x28;
      puStack_648 = unaff_x27;
      puStack_638 = unaff_x25;
      puStack_630 = unaff_x24;
      puStack_628 = unaff_x23;
      puStack_620 = puVar2;
      puStack_618 = puVar11;
      puStack_608 = puVar9;
      pppuStack_600 = &ppuStack_2f0;
      func_0x00010c1084e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_708 = 0;
      plStack_710 = (long *)0x0;
      uStack_6f8 = 0;
      uStack_700 = 0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      _objc_retain(lVar10);
      lVar1 = lVar10;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar13 = *plStack_710;
        do {
          lVar14 = 0;
          do {
            if (*plStack_710 != lVar13) {
              _objc_enumerationMutation(lVar10);
            }
            puVar9 = puVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar9 == (undefined *)0x0) {
              lVar4 = lVar8;
              func_0x00010bebcee0(lVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar11);
              _objc_release(lVar4);
            }
            lVar14 = lVar14 + 1;
          } while (lVar1 != lVar14);
          lVar1 = lVar10;
          puVar7 = &uStack_720;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(lVar10);
      puVar9 = puVar11;
      func_0x00010bf51e00();
      _objc_release(puVar11);
      _objc_release(lVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
        ___stack_chk_fail();
        _objc_retain(puVar7);
        puVar5 = (undefined1 *)puVar7;
        func_0x00010c08fa60();
        if (puVar5 == (undefined1 *)0x24) {
          puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
          func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010bf99aa0();
          _objc_release(puVar9);
        }
        else {
          puVar11 = (undefined *)0x0;
        }
        _objc_release(puVar7);
        return puVar11;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 107f3b0fc; end: 107f3b1cf;  */

undefined * FUN_107f3b0fc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar12;
  long lVar13;
  undefined *unaff_x27;
  undefined *unaff_x28;
  double dVar14;
  double dVar15;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  long lStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_d0;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_2;
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar11;
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_107f3b1d0;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  lStack_348 = lVar10;
  func_0x00010be85500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puStack_318 = puVar3;
  _objc_retain(puVar9);
  puStack_340 = puVar9;
  func_0x00010bf52a60();
  puStack_330 = puVar9;
  if (puVar9 != (undefined *)0x0) {
    lStack_338 = *plStack_280;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_280 != lStack_338) {
          _objc_enumerationMutation(puStack_340);
        }
        unaff_x25 = *(undefined **)(lStack_288 + (long)puVar9 * 8);
        unaff_x24 = unaff_x25;
        puStack_320 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x25;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puStack_328 = unaff_x27;
        FUN_107f3e2e8();
        _objc_retainAutoreleasedReturnValue();
        dVar15 = 0.0;
        lStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        plStack_2c0 = (long *)0x0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        puVar9 = unaff_x27;
        func_0x00010bf52a60();
        if (puVar9 != (undefined *)0x0) {
          lVar10 = *plStack_2c0;
          unaff_x28 = puVar9;
          do {
            puVar11 = (undefined *)0x0;
            do {
              if (*plStack_2c0 != lVar10) {
                _objc_enumerationMutation(unaff_x27);
              }
              unaff_x23 = *(undefined **)(lStack_2c8 + (long)puVar11 * 8);
              func_0x00010bf41780(unaff_x23);
              puVar9 = unaff_x25;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf25e60(unaff_x23);
              func_0x00010c0c1a60(unaff_x23);
              puVar3 = puVar9;
              func_0x00010c260c60();
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010becb9e0(puVar1);
                dVar14 = dVar15;
                func_0x00010beca580(puVar1);
                dVar15 = (double)SUB84(dVar15,0);
                if (dVar15 <= dVar14) {
                  func_0x00010bf41780();
                  dVar15 = dVar14;
                  if ((1 < (long)unaff_x23) && (unaff_x23 == (undefined *)0x2)) {
                    dVar15 = (double)NEON_fminnm(dVar14,0x3fefae147ae147ae);
                  }
                  unaff_x23 = PTR_PTR_1126d86d0;
                  _objc_alloc();
                  func_0x00010c047d40();
                  func_0x00010befa120(puStack_318);
                  _objc_release(unaff_x23);
                }
              }
              _objc_release(puVar3);
              _objc_release(puVar9);
              puVar11 = puVar11 + 1;
            } while (unaff_x28 != puVar11);
            unaff_x28 = unaff_x27;
            func_0x00010bf52a60();
          } while (unaff_x28 != (undefined *)0x0);
        }
        _objc_release(unaff_x27);
        _objc_release(puStack_328);
        _objc_release(unaff_x24);
        puVar9 = puStack_320 + 1;
      } while (puVar9 != puStack_330);
      puVar9 = puStack_340;
      func_0x00010bf52a60();
      puStack_330 = puVar9;
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puStack_340);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_318;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  _objc_retain(puStack_318);
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)*puStack_300;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_300 != puVar11) {
          _objc_enumerationMutation(puStack_318);
        }
        unaff_x23 = *(undefined **)(lStack_308 + (long)unaff_x25 * 8);
        puVar3 = unaff_x23;
        func_0x00010c1536e0(unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x24 == (undefined *)0x0) {
          unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
        }
        func_0x00010befa120(unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(puVar3);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar1 != unaff_x25);
      puVar1 = puStack_318;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  puVar1 = puStack_318;
  _objc_release(puStack_318);
  puVar3 = puVar9;
  func_0x00010bf51e00();
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puStack_340);
  lVar10 = lStack_348;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d0) {
    ___stack_chk_fail();
    puVar7 = &uStack_480;
    ppuStack_3a0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puStack_370 = puVar1;
    pcStack_358 = FUN_107f3b690;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *(long *)(lVar10 + 0xf0);
    puStack_3b0 = unaff_x28;
    puStack_3a8 = unaff_x27;
    puStack_398 = unaff_x25;
    puStack_390 = unaff_x24;
    puStack_388 = unaff_x23;
    puStack_380 = puVar9;
    puStack_378 = puVar11;
    puStack_368 = puVar3;
    ppuStack_360 = &puStack_50;
    func_0x00010c1084e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    plStack_470 = (long *)0x0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    _objc_retain(lVar4);
    lVar8 = lVar4;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar12 = *plStack_470;
      do {
        lVar13 = 0;
        do {
          if (*plStack_470 != lVar12) {
            _objc_enumerationMutation(lVar4);
          }
          puVar1 = puVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar1 == (undefined *)0x0) {
            lVar5 = lVar10;
            func_0x00010bebcee0(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(lVar5);
          }
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
        lVar8 = lVar4;
        puVar7 = &uStack_480;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar4);
    puVar3 = puVar11;
    func_0x00010bf51e00();
    _objc_release(puVar11);
    _objc_release(lVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
      ___stack_chk_fail();
      _objc_retain(puVar7);
      puVar6 = (undefined1 *)puVar7;
      func_0x00010c08fa60();
      if (puVar6 == (undefined1 *)0x24) {
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf99aa0();
        _objc_release(puVar1);
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      _objc_release(puVar7);
      return puVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 107f3b1d0; end: 107f3b68f; -[SCMemoriesSearch _autocompleteConceptToSnapMatchInfosDictForPrefix:] */

undefined * FUN_107f3b1d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *unaff_x21;
  undefined *unaff_x23;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar13;
  long lVar14;
  undefined *unaff_x27;
  undefined *unaff_x28;
  double dVar15;
  double dVar16;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 *puStack_320;
  code *pcStack_318;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110ddcc18);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  lStack_308 = param_3;
  func_0x00010be85500();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puStack_2d8 = puVar11;
  _objc_retain(lVar10);
  lStack_300 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_250,auStack_110,0x10);
  lStack_2f0 = lVar10;
  if (lVar10 != 0) {
    lStack_2f8 = *plStack_240;
    do {
      lVar10 = 0;
      do {
        if (*plStack_240 != lStack_2f8) {
          _objc_enumerationMutation(lStack_300);
        }
        unaff_x25 = *(undefined **)(lStack_248 + lVar10 * 8);
        unaff_x24 = unaff_x25;
        lStack_2e0 = lVar10;
        func_0x00010c0dfd40(unaff_x25,param_2,5);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x25;
        func_0x00010c0dfd40(unaff_x25,param_2,4);
        _objc_retainAutoreleasedReturnValue();
        puStack_2e8 = unaff_x27;
        FUN_107f3e2e8();
        _objc_retainAutoreleasedReturnValue();
        dVar16 = 0.0;
        lStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        plStack_280 = (long *)0x0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        puVar11 = unaff_x27;
        func_0x00010bf52a60();
        if (puVar11 != (undefined *)0x0) {
          lVar10 = *plStack_280;
          unaff_x28 = puVar11;
          do {
            unaff_x21 = (undefined *)0x0;
            do {
              if (*plStack_280 != lVar10) {
                _objc_enumerationMutation(unaff_x27);
              }
              unaff_x23 = *(undefined **)(lStack_288 + (long)unaff_x21 * 8);
              puVar11 = unaff_x23;
              func_0x00010bf41780(unaff_x23);
              puVar1 = unaff_x25;
              func_0x00010c0dfd40(unaff_x25,param_2,puVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = unaff_x23;
              func_0x00010bf25e60(unaff_x23);
              puVar2 = unaff_x23;
              func_0x00010c0c1a60(unaff_x23);
              puVar3 = puVar1;
              func_0x00010c260c60(puVar1,param_2,puVar11,puVar2,4);
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010becb9e0(param_1,param_2,puVar3);
                dVar15 = dVar16;
                func_0x00010beca580(param_1,param_2,unaff_x24,puVar3);
                dVar16 = (double)SUB84(dVar16,0);
                if (dVar16 <= dVar15) {
                  func_0x00010bf41780();
                  dVar16 = dVar15;
                  if ((1 < (long)unaff_x23) && (unaff_x23 == (undefined *)0x2)) {
                    dVar16 = (double)NEON_fminnm(dVar15,0x3fefae147ae147ae);
                  }
                  unaff_x23 = PTR_PTR_1126d86d0;
                  _objc_alloc();
                  func_0x00010c047d40();
                  func_0x00010befa120(puStack_2d8,param_2,unaff_x23);
                  _objc_release(unaff_x23);
                }
              }
              _objc_release(puVar3);
              _objc_release(puVar1);
              unaff_x21 = unaff_x21 + 1;
            } while (unaff_x28 != unaff_x21);
            unaff_x28 = unaff_x27;
            func_0x00010bf52a60(unaff_x27,param_2,&uStack_290,auStack_190,0x10);
          } while (unaff_x28 != (undefined *)0x0);
        }
        _objc_release(unaff_x27);
        _objc_release(puStack_2e8);
        _objc_release(unaff_x24);
        lVar10 = lStack_2e0 + 1;
      } while (lVar10 != lStack_2f0);
      lVar10 = lStack_300;
      func_0x00010bf52a60(lStack_300,param_2,&uStack_250,auStack_110,0x10);
      lStack_2f0 = lVar10;
    } while (lVar10 != 0);
  }
  _objc_release(lStack_300);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puStack_2d8;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  _objc_retain(puStack_2d8);
  puVar8 = &uStack_2d0;
  puVar7 = auStack_210;
  func_0x00010bf52a60(puVar11,param_2,puVar8,puVar7,0x10);
  if (puVar11 != (undefined *)0x0) {
    unaff_x21 = (undefined *)*puStack_2c0;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_2c0 != unaff_x21) {
          _objc_enumerationMutation(puStack_2d8);
        }
        unaff_x23 = *(undefined **)(lStack_2c8 + (long)unaff_x25 * 8);
        puVar2 = unaff_x23;
        func_0x00010c1536e0(unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = puVar1;
        func_0x00010c0e00e0(puVar1,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x24 == (undefined *)0x0) {
          unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,unaff_x24,puVar2);
        }
        func_0x00010befa120(unaff_x24,param_2,unaff_x23);
        _objc_release(unaff_x24);
        _objc_release(puVar2);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar11 != unaff_x25);
      puVar8 = &uStack_2d0;
      puVar7 = auStack_210;
      puVar11 = puStack_2d8;
      func_0x00010bf52a60(puStack_2d8,param_2,puVar8,puVar7,0x10);
    } while (puVar11 != (undefined *)0x0);
  }
  puVar11 = puStack_2d8;
  _objc_release(puStack_2d8);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(puVar11);
  _objc_release(lStack_300);
  lVar10 = lStack_308;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    puVar9 = &uStack_440;
    ppuStack_360 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puStack_330 = puVar11;
    pcStack_318 = FUN_107f3b690;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *(long *)(lVar10 + 0xf0);
    puStack_370 = unaff_x28;
    puStack_368 = unaff_x27;
    puStack_358 = unaff_x25;
    puStack_350 = unaff_x24;
    puStack_348 = unaff_x23;
    puStack_340 = puVar1;
    puStack_338 = unaff_x21;
    puStack_328 = puVar2;
    puStack_320 = &stack0xfffffffffffffff0;
    func_0x00010c1084e0(lVar4,param_2,*(undefined8 *)(lVar10 + 0x60),puVar8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    plStack_430 = (long *)0x0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    _objc_retain(lVar4);
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar13 = *plStack_430;
      do {
        lVar14 = 0;
        do {
          if (*plStack_430 != lVar13) {
            _objc_enumerationMutation(lVar4);
          }
          uVar12 = *(undefined8 *)(lStack_438 + lVar14 * 8);
          puVar1 = puVar11;
          func_0x00010c0e00e0(puVar11,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar1 == (undefined *)0x0) {
            lVar6 = lVar10;
            func_0x00010bebcee0(lVar10,param_2,uVar12,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11,param_2,lVar6,uVar12);
            _objc_release(lVar6);
          }
          lVar14 = lVar14 + 1;
        } while (lVar5 != lVar14);
        lVar5 = lVar4;
        puVar9 = &uStack_440;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    puVar2 = puVar11;
    func_0x00010bf51e00();
    _objc_release(puVar11);
    _objc_release(lVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
      ___stack_chk_fail();
      _objc_retain(puVar9);
      puVar7 = (undefined1 *)puVar9;
      func_0x00010c08fa60();
      if (puVar7 == (undefined1 *)0x24) {
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110db3198);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf99aa0();
        _objc_release(puVar1);
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      _objc_release(puVar9);
      return puVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 107f3b690; end: 107f3b837; -[SCMemoriesSearch _prefixMatchingConceptToSnapMatchInfosDictForPrefix:languageId:] */

undefined * FUN_107f3b690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0xf0);
  func_0x00010c1084e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x60),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar3 = puVar7;
        func_0x00010c0e00e0(puVar7,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar3 == (undefined *)0x0) {
          lVar4 = param_1;
          func_0x00010bebcee0(param_1,param_2,uVar8,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7,param_2,lVar4,uVar8);
          _objc_release(lVar4);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar3 = puVar7;
  func_0x00010bf51e00();
  _objc_release(puVar7);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = (undefined1 *)puVar6;
  func_0x00010c08fa60();
  if (puVar5 == (undefined1 *)0x24) {
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3198);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf99aa0();
    _objc_release(puVar3);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  return puVar7;
}



/* Entry: 107f3b838; end: 107f3b8cf; -[SCMemoriesSearch _isSnapIdFormat:] */

undefined * FUN_107f3b838(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0x24) {
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3198);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf99aa0();
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107f3b8d0; end: 107f3b8d7; -[SCMemoriesSearch _searchResultFromSnapIdMatching:] */

undefined8 FUN_107f3b8d0(void)

{
  return 0;
}



/* Entry: 107f3b8d8; end: 107f3bb27; -[SCMemoriesSearch _searchResultFromCaptionMatching:source:] */

void FUN_107f3b8d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010becd0a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be64080(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bebcea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e2b998);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0720c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
          if ((int)puVar5 == 0) {
            func_0x00010bf06ba0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ec77b8);
          }
          else {
            func_0x00010bf070e0(puVar4,param_2,puVar9);
          }
          _objc_release(puVar9);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    puVar9 = PTR_PTR_1126d86d8;
    _objc_alloc(PTR_PTR_1126d86d8);
    lVar7 = param_1;
    func_0x00010c048200();
    _objc_release(puVar4);
  }
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7898);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x78);
  *(long *)(param_3 + 0x78) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec78b8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x80);
  *(long *)(param_3 + 0x80) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec78d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x70);
  *(long *)(param_3 + 0x70) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec78f8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x98);
  *(long *)(param_3 + 0x98) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7918);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x90);
  *(long *)(param_3 + 0x90) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7938);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x68);
  *(long *)(param_3 + 0x68) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7958);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x88);
  *(long *)(param_3 + 0x88) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7978);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  *(long *)(param_3 + 0xc0) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7998);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 200);
  *(long *)(param_3 + 200) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec79b8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0xa0);
  *(long *)(param_3 + 0xa0) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec79d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0xa8);
  *(long *)(param_3 + 0xa8) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec79f8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0xb0);
  *(long *)(param_3 + 0xb0) = lVar1;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c252980(lVar7,param_2,&PTR____CFConstantStringClassReference_110ec7a18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar6 = *(undefined8 *)(param_3 + 0xb8);
  *(long *)(param_3 + 0xb8) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107f3bb28; end: 107f3bd63; -[SCMemoriesSearch _setupDatabase:] */

void FUN_107f3bb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7898);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec78b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec78d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec78f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7918);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7938);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7958);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7978);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7998);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec79b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec79d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec79f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c252980(param_3,param_2,&PTR____CFConstantStringClassReference_110ec7a18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f3bd64; end: 107f3bfef; -[SCMemoriesSearch _snapMatchInfosForCaptionMatchingText:source:] */

double FUN_107f3bd64(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  int iVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long lVar29;
  double dVar30;
  float fVar31;
  undefined8 uStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 uStack_8c0;
  code *pcStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5a0;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined auStack_480 [256];
  undefined auStack_380 [256];
  long lStack_280;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar15 = param_4;
  func_0x00010c08fa60();
  puVar26 = PTR____NSArray0__struct_11034ab48;
  if (lVar15 != 0) {
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_107f38338;
    uStack_f8 = 0x107f38348;
    uStack_f0 = 0;
    uVar23 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar23);
    puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lVar1 = puStack_110[5];
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar29 = 0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = *(long *)(lVar29 * 8);
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          puVar26 = PTR_PTR_1126d86d0;
          _objc_alloc();
          param_1 = 1.0;
          func_0x00010c047d40(0x3ff0000000000000);
          func_0x00010befa120(puVar24);
          _objc_release(puVar26);
        }
        _objc_release(lVar2);
        lVar29 = lVar29 + 1;
      } while (lVar15 != lVar29);
      lVar15 = lVar1;
      func_0x00010bf52a60();
    }
    _objc_release(lVar1);
    puVar26 = puVar24;
    func_0x00010bf51e00();
    _objc_release(puVar24);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar15 = 8;
  __Block_object_dispose(&uStack_118);
  __Unwind_Resume();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar15);
  uVar3 = *(ulong *)(param_4 + 0x20);
  func_0x00010c08fa60();
  if ((uVar3 < 5) || (*(long *)(param_4 + 0x38) == 1)) {
    lVar29 = *(long *)(*(long *)(param_4 + 0x28) + 0xc0);
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar15;
    puVar24 = puVar26;
    func_0x00010bf9b000();
    iVar16 = (int)puVar24;
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_4 + 0x30) + 8);
    puVar24 = *(undefined **)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar1;
  }
  else {
    lVar29 = *(long *)(*(long *)(param_4 + 0x28) + 200);
    puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar15;
    puVar5 = puVar17;
    func_0x00010bf9b000();
    iVar16 = (int)puVar5;
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_4 + 0x30) + 8);
    uVar23 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar1;
    _objc_release(uVar23);
    _objc_release(puVar17);
  }
  _objc_release(puVar24);
  _objc_release(puVar26);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar29);
  puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = 0.0;
  lStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  plStack_4f0 = (long *)0x0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  _objc_retain(lVar29);
  puVar10 = &uStack_500;
  puVar24 = auStack_380;
  lVar1 = 0x10;
  lVar18 = lVar29;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar2 = *plStack_4f0;
    do {
      lVar1 = 0;
      do {
        if (*plStack_4f0 != lVar2) {
          _objc_enumerationMutation(lVar29);
        }
        lVar4 = *(long *)(lStack_4f8 + lVar1 * 8);
        param_1 = 0.0;
        lStack_538 = 0;
        uStack_540 = 0;
        uStack_528 = 0;
        plStack_530 = (long *)0x0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        func_0x00010c241e40();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar4;
        func_0x00010bf52a60();
        if (lVar22 != 0) {
          lVar19 = *plStack_530;
          do {
            lVar21 = 0;
            do {
              if (*plStack_530 != lVar19) {
                _objc_enumerationMutation(lVar4);
              }
              uVar23 = *(undefined8 *)(lStack_538 + lVar21 * 8);
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar17);
              _objc_release(uVar23);
              lVar21 = lVar21 + 1;
            } while (lVar22 != lVar21);
            lVar22 = lVar4;
            func_0x00010bf52a60();
          } while (lVar22 != 0);
        }
        _objc_release(lVar4);
        lVar1 = lVar1 + 1;
      } while (lVar1 != lVar18);
      puVar10 = &uStack_500;
      puVar24 = auStack_380;
      lVar1 = 0x10;
      lVar18 = lVar29;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar29);
  lVar18 = *(long *)(lVar15 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af4d0;
  if (lVar18 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    puVar26 = puVar17;
    func_0x00010bf00560(puVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(lVar15 + 0xf8);
    func_0x00010c269d40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    _objc_release(puVar26);
    uVar6 = *(undefined8 *)(lVar15 + 0x120);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar6;
    func_0x000108ec0158();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar15 + 0xf8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar5;
    if (iVar16 == 0) {
      _objc_retain(puVar5);
      _objc_retain(uVar6);
      puStack_5a0 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar5);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar5);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_5b8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_5c0 = PTR_PTR_1126c45e8;
      _objc_alloc();
      param_7 = (undefined8 *)0x0;
      func_0x00010c038000();
      if ((int)uVar23 != 0) {
        puVar26 = PTR_PTR_1126af4c0;
        func_0x00010bfa6ea0();
        _objc_retainAutoreleasedReturnValue();
        lStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        plStack_4b0 = (long *)0x0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        _objc_retain(puVar5);
        puVar7 = puVar5;
        func_0x00010bf52a60();
        if (puVar7 != (undefined *)0x0) {
          lVar1 = *plStack_4b0;
          do {
            puVar25 = (undefined *)0x0;
            do {
              if (*plStack_4b0 != lVar1) {
                _objc_enumerationMutation(puVar5);
              }
              uVar27 = *(undefined8 *)(lStack_4b8 + (long)puVar25 * 8);
              uVar23 = uVar27;
              func_0x00010c241220(uVar27);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar24;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar23);
              if (puVar8 == (undefined *)0x0) {
                uVar23 = uVar27;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar26;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar23);
                if ((puVar8 != (undefined *)0x0) &&
                   (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                  uVar23 = uVar27;
                  func_0x00010c241220();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar24);
                  _objc_release(uVar23);
                  func_0x00010c241220(uVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puStack_5a0);
                  _objc_release(uVar27);
                }
                _objc_release(puVar8);
              }
              puVar25 = puVar25 + 1;
            } while (puVar7 != puVar25);
            puVar7 = puVar5;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
        }
        goto LAB_107f3c88c;
      }
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      lStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      plStack_4b0 = (long *)0x0;
      _objc_retain(puVar5);
      puVar7 = puVar5;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar1 = *plStack_4b0;
        do {
          puVar25 = (undefined *)0x0;
          do {
            if (*plStack_4b0 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            uVar27 = *(undefined8 *)(lStack_4b8 + (long)puVar25 * 8);
            uVar23 = uVar27;
            func_0x00010c241220(uVar27);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar23);
            if (puVar8 == (undefined *)0x0) {
              puVar8 = PTR_PTR_1126af4c0;
              func_0x00010bfa7060();
              _objc_retainAutoreleasedReturnValue();
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar23 = uVar27;
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar24);
                _objc_release(uVar23);
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_5a0);
                _objc_release(uVar27);
              }
              _objc_release(puVar8);
            }
            puVar25 = puVar25 + 1;
          } while (puVar7 != puVar25);
          puVar7 = puVar5;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
    }
    else {
      _objc_retain(puVar5);
      _objc_retain(uVar6);
      puStack_5a0 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar5);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar5);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      puStack_5b8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_5c0 = PTR_PTR_1126c45e8;
      _objc_alloc();
      param_7 = (undefined8 *)0x0;
      func_0x00010c038000();
      if ((int)uVar23 == 0) {
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        lStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        plStack_4b0 = (long *)0x0;
        _objc_retain(puVar5);
        puVar7 = puVar5;
        func_0x00010bf52a60();
        if (puVar7 != (undefined *)0x0) {
          lVar1 = *plStack_4b0;
          do {
            puVar25 = (undefined *)0x0;
            do {
              if (*plStack_4b0 != lVar1) {
                _objc_enumerationMutation(puVar5);
              }
              uVar27 = *(undefined8 *)(lStack_4b8 + (long)puVar25 * 8);
              uVar23 = uVar27;
              func_0x00010c241220(uVar27);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar24;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar23);
              if (puVar8 == (undefined *)0x0) {
                puVar8 = PTR_PTR_1126af4c0;
                func_0x00010bfa7060();
                _objc_retainAutoreleasedReturnValue();
                if ((puVar8 != (undefined *)0x0) &&
                   (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                  uVar23 = uVar27;
                  func_0x00010c241220(uVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar24);
                  _objc_release(uVar23);
                  func_0x00010c241220(uVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puStack_5a0);
                  _objc_release(uVar27);
                }
                _objc_release(puVar8);
              }
              puVar25 = puVar25 + 1;
            } while (puVar7 != puVar25);
            puVar7 = puVar5;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
        }
      }
      else {
        puVar26 = PTR_PTR_1126af4c0;
        func_0x00010bfa6ea0();
        _objc_retainAutoreleasedReturnValue();
        lStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        plStack_4b0 = (long *)0x0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        _objc_retain(puVar5);
        puVar7 = puVar5;
        func_0x00010bf52a60();
        if (puVar7 != (undefined *)0x0) {
          lVar1 = *plStack_4b0;
          do {
            puVar25 = (undefined *)0x0;
            do {
              if (*plStack_4b0 != lVar1) {
                _objc_enumerationMutation(puVar5);
              }
              uVar27 = *(undefined8 *)(lStack_4b8 + (long)puVar25 * 8);
              uVar23 = uVar27;
              func_0x00010c241220(uVar27);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar24;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar23);
              if (puVar8 == (undefined *)0x0) {
                uVar23 = uVar27;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar26;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar23);
                if ((puVar8 != (undefined *)0x0) &&
                   (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                  uVar23 = uVar27;
                  func_0x00010c241220();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar24);
                  _objc_release(uVar23);
                  func_0x00010c241220(uVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puStack_5a0);
                  _objc_release(uVar27);
                }
                _objc_release(puVar8);
              }
              puVar25 = puVar25 + 1;
            } while (puVar7 != puVar25);
            puVar7 = puVar5;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
        }
LAB_107f3c88c:
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar26);
    puVar7 = puStack_5a0;
    func_0x00010bf51e00(puStack_5a0);
    _objc_autorelease();
    puVar25 = puVar24;
    func_0x00010bf51e00();
    _objc_autorelease();
    _objc_release(puStack_5c0);
    _objc_release(puStack_5b8);
    _objc_release(puVar24);
    _objc_release(puStack_5a0);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_retain(puVar7);
    _objc_retain(puVar25);
    _objc_release(uVar6);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    plStack_570 = (long *)0x0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    _objc_retain(lVar29);
    puVar10 = &uStack_580;
    puVar24 = auStack_480;
    lVar1 = 0x10;
    lVar2 = lVar29;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar22 = *plStack_570;
      do {
        lVar1 = 0;
        do {
          if (*plStack_570 != lVar22) {
            _objc_enumerationMutation(lVar29);
          }
          puVar28 = *(undefined8 **)(lStack_578 + lVar1 * 8);
          puVar10 = puVar28;
          func_0x00010c241e40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13cdc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07e100();
          lVar4 = lVar15;
          param_7 = puVar28;
          func_0x00010bdcf4c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar28);
          _objc_release(puVar10);
          if (lVar4 != 0) {
            func_0x00010befa120(puVar8);
          }
          _objc_release(lVar4);
          lVar1 = lVar1 + 1;
        } while (lVar2 != lVar1);
        puVar10 = &uStack_580;
        puVar24 = auStack_480;
        lVar1 = 0x10;
        lVar2 = lVar29;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar29);
    puVar26 = puVar8;
    func_0x00010bf51e00();
    _objc_release(puVar8);
    _objc_release(puVar25);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(lVar29);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar20 = puVar10;
    puVar17 = puVar24;
    _objc_retain(puVar10);
    _objc_retain(puVar24);
    _objc_retain(lVar1);
    _objc_retain(param_7);
    puVar28 = puVar10;
    func_0x00010bf529e0();
    if (puVar28 == (undefined8 *)0x0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar10);
      puVar28 = puVar10;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      while (puVar28 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(puVar10);
          }
          uVar6 = *(undefined8 *)((long)puVar20 * 8);
          uVar23 = uVar6;
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar24;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar23);
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar29 = lVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          if (puVar26 != (undefined *)0x0 && lVar29 != 0) {
            lVar2 = lVar29;
            func_0x00010c241220(lVar29);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar8;
            func_0x00010bf4b900();
            _objc_release(lVar2);
            if (((ulong)puVar17 & 1) == 0) {
              puVar17 = puVar26;
              func_0x00010bf97200(puVar26);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar25;
              func_0x00010bf4b900();
              _objc_release(puVar17);
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010befa120(puVar5);
                puVar17 = puVar26;
                func_0x00010bf97200(puVar26);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar25);
                _objc_release(puVar17);
              }
              func_0x00010befa120(puVar7);
              lVar2 = lVar29;
              func_0x00010c241220(lVar29);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8);
              _objc_release(lVar2);
            }
          }
          _objc_release(lVar29);
          _objc_release(puVar26);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar28 != puVar20);
        puVar28 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0.0;
      _objc_retain(puVar10);
      puVar28 = puVar10;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      while (puVar28 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(puVar10);
          }
          puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar6 = *(undefined8 *)((long)puVar20 * 8);
          func_0x00010c13cc20(uVar6);
          func_0x00010c0df780(puVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar26);
          uVar23 = uVar6;
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar23);
          puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar17 == (undefined *)0x0) {
            func_0x00010bf45da0(uVar6);
          }
          else {
            uVar23 = uVar6;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar9;
            func_0x00010c0e00e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar30 = param_1;
            _objc_release(puVar17);
            _objc_release(uVar23);
            func_0x00010bf45da0(uVar6);
            fVar31 = SUB84(param_1,0);
            param_1 = dVar30;
            if (dVar30 <= (double)fVar31) {
              param_1 = (double)fVar31;
            }
          }
          func_0x00010c0df720(puVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
          _objc_release(uVar6);
          _objc_release(puVar26);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar28 != puVar20);
        puVar28 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar26 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246bc0(puVar5);
      _objc_release(puVar12);
      _objc_release(puVar17);
      _objc_release(puVar26);
      puVar26 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = (undefined *)0x1;
      puVar28 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar28;
      func_0x00010c246bc0(puVar7);
      _objc_release(puVar28);
      _objc_release(puVar26);
      puVar26 = puVar7;
      func_0x00010bf529e0();
      if (puVar26 == (undefined *)0x0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar26 = puVar5;
        func_0x00010bf529e0();
        if (puVar26 == (undefined *)0x0) {
          puVar26 = (undefined *)0x0;
        }
        else {
          puVar26 = puVar7;
          func_0x00010bf529e0();
          puVar17 = puVar26;
          if ((undefined *)0x7 < puVar26) {
            puVar17 = (undefined *)0x8;
          }
          if (puVar26 == (undefined *)0x0) {
            fVar31 = 0.0;
          }
          else {
            puVar26 = (undefined *)0x0;
            fVar31 = 0.0;
            do {
              puVar12 = puVar7;
              func_0x00010c0dfd40(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar9;
              func_0x00010c0e00e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              fVar31 = fVar31 + SUB84(param_1,0);
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar12);
              puVar26 = puVar26 + 1;
            } while (puVar17 != puVar26);
          }
          puVar26 = PTR_PTR_1126c3bb8;
          _objc_alloc();
          puVar28 = param_7;
          func_0x00010bf2fac0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010bf51e00();
          puVar13 = puVar7;
          func_0x00010bf51e00(puVar7);
          param_1 = (double)(ulong)(uint)(fVar31 / (float)puVar17);
          puVar14 = puVar11;
          func_0x00010bf00560(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar28;
          puVar17 = puVar12;
          func_0x00010c03fe00(param_1);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar28);
        }
      }
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar25);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_release(param_7);
    _objc_release(lVar1);
    _objc_release(puVar24);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      _objc_retain(puVar20);
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = puVar10[6];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar15 == 0) {
        puStack_8c8 = &uStack_8d0;
        uStack_8d0 = 0;
        uStack_8c0 = 0x3032000000;
        pcStack_8b8 = FUN_107f38338;
        uStack_8b0 = 0x107f38348;
        uStack_8a8 = 0;
        uVar23 = puVar10[4];
        param_1 = 1.60807493534087e-314;
        _objc_retain(puVar20);
        _objc_retain(puVar17);
        func_0x00010c0f8240(uVar23);
        lVar1 = puStack_8c8[5];
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        if (lVar18 == 0) {
          param_1 = 1.0;
        }
        else {
          func_0x00010bf88340(lVar18);
        }
        puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10[6]);
        _objc_release(puVar24);
        _objc_release(lVar18);
        _objc_release(puVar17);
        _objc_release(puVar20);
        __Block_object_dispose(&uStack_8d0,8);
        _objc_release(uStack_8a8);
      }
      else {
        func_0x00010bf885a0(lVar15);
      }
      _objc_release(lVar15);
      _objc_release(puVar26);
      _objc_release(puVar17);
      _objc_release(puVar20);
      return param_1;
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return param_1;
}



/* Entry: 107f3bff0; end: 107f3c197;  */

double FUN_107f3bff0(double param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long lVar16;
  undefined8 *in_x5;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  undefined8 uStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  code *pcStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_400;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined auStack_2e0 [256];
  undefined auStack_1e0 [256];
  long lStack_e0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if ((uVar1 < 5) || (*(long *)(param_2 + 0x38) == 1)) {
    lVar23 = *(long *)(*(long *)(param_2 + 0x28) + 0xc0);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_3;
    puVar24 = puVar2;
    func_0x00010bf9b000();
    iVar15 = (int)puVar24;
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    puVar24 = *(undefined **)(lVar18 + 0x28);
    *(long *)(lVar18 + 0x28) = lVar16;
  }
  else {
    lVar23 = *(long *)(*(long *)(param_2 + 0x28) + 200);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_3;
    puVar26 = puVar3;
    func_0x00010bf9b000();
    iVar15 = (int)puVar26;
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    uVar5 = *(undefined8 *)(lVar18 + 0x28);
    *(long *)(lVar18 + 0x28) = lVar16;
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar24);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar23);
  puVar24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 0.0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  _objc_retain(lVar23);
  puVar10 = &uStack_360;
  puVar2 = auStack_1e0;
  lVar16 = 0x10;
  lVar17 = lVar23;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar18 = *plStack_350;
    do {
      lVar16 = 0;
      do {
        if (*plStack_350 != lVar18) {
          _objc_enumerationMutation(lVar23);
        }
        lVar4 = *(long *)(lStack_358 + lVar16 * 8);
        dVar30 = 0.0;
        lStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        plStack_390 = (long *)0x0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        func_0x00010c241e40();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar4;
        func_0x00010bf52a60();
        if (lVar22 != 0) {
          lVar19 = *plStack_390;
          do {
            lVar21 = 0;
            do {
              if (*plStack_390 != lVar19) {
                _objc_enumerationMutation(lVar4);
              }
              uVar5 = *(undefined8 *)(lStack_398 + lVar21 * 8);
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar24);
              _objc_release(uVar5);
              lVar21 = lVar21 + 1;
            } while (lVar22 != lVar21);
            lVar22 = lVar4;
            func_0x00010bf52a60();
          } while (lVar22 != 0);
        }
        _objc_release(lVar4);
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar17);
      puVar10 = &uStack_360;
      puVar2 = auStack_1e0;
      lVar16 = 0x10;
      lVar17 = lVar23;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(lVar23);
  lVar17 = *(long *)(param_3 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  if (lVar17 == 0) {
    puVar26 = (undefined *)0x0;
    goto LAB_107f3cd50;
  }
  puVar2 = puVar24;
  func_0x00010bf00560(puVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0xf8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_3 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x000108ec0158();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  if (iVar15 == 0) {
    _objc_retain(puVar3);
    _objc_retain(uVar6);
    puStack_400 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_418 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_420 = PTR_PTR_1126c45e8;
    _objc_alloc();
    in_x5 = (undefined8 *)0x0;
    func_0x00010c038000();
    if ((int)uVar5 != 0) {
      puVar2 = PTR_PTR_1126af4c0;
      func_0x00010bfa6ea0();
      _objc_retainAutoreleasedReturnValue();
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      _objc_retain(puVar3);
      puVar7 = puVar3;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar16 = *plStack_310;
        do {
          puVar25 = (undefined *)0x0;
          do {
            if (*plStack_310 != lVar16) {
              _objc_enumerationMutation(puVar3);
            }
            uVar27 = *(undefined8 *)(lStack_318 + (long)puVar25 * 8);
            uVar5 = uVar27;
            func_0x00010c241220(uVar27);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar26;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (puVar8 == (undefined *)0x0) {
              uVar5 = uVar27;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar5);
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar5 = uVar27;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar26);
                _objc_release(uVar5);
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_400);
                _objc_release(uVar27);
              }
              _objc_release(puVar8);
            }
            puVar25 = puVar25 + 1;
          } while (puVar7 != puVar25);
          puVar7 = puVar3;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      goto LAB_107f3c88c;
    }
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    _objc_retain(puVar3);
    puVar7 = puVar3;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar16 = *plStack_310;
      do {
        puVar25 = (undefined *)0x0;
        do {
          if (*plStack_310 != lVar16) {
            _objc_enumerationMutation(puVar3);
          }
          uVar27 = *(undefined8 *)(lStack_318 + (long)puVar25 * 8);
          uVar5 = uVar27;
          func_0x00010c241220(uVar27);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar26;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar5);
          if (puVar8 == (undefined *)0x0) {
            puVar8 = PTR_PTR_1126af4c0;
            func_0x00010bfa7060();
            _objc_retainAutoreleasedReturnValue();
            if ((puVar8 != (undefined *)0x0) &&
               (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
              uVar5 = uVar27;
              func_0x00010c241220(uVar27);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar26);
              _objc_release(uVar5);
              func_0x00010c241220(uVar27);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_400);
              _objc_release(uVar27);
            }
            _objc_release(puVar8);
          }
          puVar25 = puVar25 + 1;
        } while (puVar7 != puVar25);
        puVar7 = puVar3;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
  }
  else {
    _objc_retain(puVar3);
    _objc_retain(uVar6);
    puStack_400 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_418 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_420 = PTR_PTR_1126c45e8;
    _objc_alloc();
    in_x5 = (undefined8 *)0x0;
    func_0x00010c038000();
    if ((int)uVar5 == 0) {
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      _objc_retain(puVar3);
      puVar7 = puVar3;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar16 = *plStack_310;
        do {
          puVar25 = (undefined *)0x0;
          do {
            if (*plStack_310 != lVar16) {
              _objc_enumerationMutation(puVar3);
            }
            uVar27 = *(undefined8 *)(lStack_318 + (long)puVar25 * 8);
            uVar5 = uVar27;
            func_0x00010c241220(uVar27);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar26;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (puVar8 == (undefined *)0x0) {
              puVar8 = PTR_PTR_1126af4c0;
              func_0x00010bfa7060();
              _objc_retainAutoreleasedReturnValue();
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar5 = uVar27;
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar26);
                _objc_release(uVar5);
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_400);
                _objc_release(uVar27);
              }
              _objc_release(puVar8);
            }
            puVar25 = puVar25 + 1;
          } while (puVar7 != puVar25);
          puVar7 = puVar3;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
    }
    else {
      puVar2 = PTR_PTR_1126af4c0;
      func_0x00010bfa6ea0();
      _objc_retainAutoreleasedReturnValue();
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      _objc_retain(puVar3);
      puVar7 = puVar3;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar16 = *plStack_310;
        do {
          puVar25 = (undefined *)0x0;
          do {
            if (*plStack_310 != lVar16) {
              _objc_enumerationMutation(puVar3);
            }
            uVar27 = *(undefined8 *)(lStack_318 + (long)puVar25 * 8);
            uVar5 = uVar27;
            func_0x00010c241220(uVar27);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar26;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (puVar8 == (undefined *)0x0) {
              uVar5 = uVar27;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar5);
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar5 = uVar27;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar26);
                _objc_release(uVar5);
                func_0x00010c241220(uVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_400);
                _objc_release(uVar27);
              }
              _objc_release(puVar8);
            }
            puVar25 = puVar25 + 1;
          } while (puVar7 != puVar25);
          puVar7 = puVar3;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
LAB_107f3c88c:
      _objc_release(puVar3);
    }
  }
  _objc_release(puVar2);
  puVar7 = puStack_400;
  func_0x00010bf51e00(puStack_400);
  _objc_autorelease();
  puVar25 = puVar26;
  func_0x00010bf51e00();
  _objc_autorelease();
  _objc_release(puStack_420);
  _objc_release(puStack_418);
  _objc_release(puVar26);
  _objc_release(puStack_400);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_retain(puVar7);
  _objc_retain(puVar25);
  _objc_release(uVar6);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 0.0;
  lStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  _objc_retain(lVar23);
  puVar10 = &uStack_3e0;
  puVar2 = auStack_2e0;
  lVar16 = 0x10;
  lVar18 = lVar23;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar22 = *plStack_3d0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_3d0 != lVar22) {
          _objc_enumerationMutation(lVar23);
        }
        puVar28 = *(undefined8 **)(lStack_3d8 + lVar16 * 8);
        puVar10 = puVar28;
        func_0x00010c241e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13cdc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07e100();
        lVar4 = param_3;
        in_x5 = puVar28;
        func_0x00010bdcf4c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar28);
        _objc_release(puVar10);
        if (lVar4 != 0) {
          func_0x00010befa120(puVar8);
        }
        _objc_release(lVar4);
        lVar16 = lVar16 + 1;
      } while (lVar18 != lVar16);
      puVar10 = &uStack_3e0;
      puVar2 = auStack_2e0;
      lVar16 = 0x10;
      lVar18 = lVar23;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar23);
  puVar26 = puVar8;
  func_0x00010bf51e00();
  _objc_release(puVar8);
  _objc_release(puVar25);
  _objc_release(puVar7);
  _objc_release(puVar3);
LAB_107f3cd50:
  _objc_release(lVar17);
  _objc_release(puVar24);
  _objc_release(lVar23);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar20 = puVar10;
    puVar24 = puVar2;
    _objc_retain(puVar10);
    _objc_retain(puVar2);
    _objc_retain(lVar16);
    _objc_retain(in_x5);
    puVar28 = puVar10;
    func_0x00010bf529e0();
    if (puVar28 == (undefined8 *)0x0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar10);
      puVar28 = puVar10;
      func_0x00010bf52a60();
      lVar23 = lRam0000000000000000;
      while (puVar28 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar23) {
            _objc_enumerationMutation(puVar10);
          }
          uVar6 = *(undefined8 *)((long)puVar20 * 8);
          uVar5 = uVar6;
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          if (puVar24 != (undefined *)0x0 && lVar18 != 0) {
            lVar22 = lVar18;
            func_0x00010c241220(lVar18);
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puVar8;
            func_0x00010bf4b900();
            _objc_release(lVar22);
            if (((ulong)puVar26 & 1) == 0) {
              puVar26 = puVar24;
              func_0x00010bf97200(puVar24);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar25;
              func_0x00010bf4b900();
              _objc_release(puVar26);
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010befa120(puVar3);
                puVar26 = puVar24;
                func_0x00010bf97200(puVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar25);
                _objc_release(puVar26);
              }
              func_0x00010befa120(puVar7);
              lVar22 = lVar18;
              func_0x00010c241220(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8);
              _objc_release(lVar22);
            }
          }
          _objc_release(lVar18);
          _objc_release(puVar24);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar28 != puVar20);
        puVar28 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      dVar30 = 0.0;
      _objc_retain(puVar10);
      puVar28 = puVar10;
      func_0x00010bf52a60();
      lVar23 = lRam0000000000000000;
      while (puVar28 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar23) {
            _objc_enumerationMutation(puVar10);
          }
          puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar6 = *(undefined8 *)((long)puVar20 * 8);
          func_0x00010c13cc20(uVar6);
          func_0x00010c0df780(puVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar24);
          uVar5 = uVar6;
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar5);
          puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar26 == (undefined *)0x0) {
            func_0x00010bf45da0(uVar6);
          }
          else {
            uVar5 = uVar6;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puVar9;
            func_0x00010c0e00e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar29 = dVar30;
            _objc_release(puVar26);
            _objc_release(uVar5);
            func_0x00010bf45da0(uVar6);
            fVar31 = SUB84(dVar30,0);
            dVar30 = dVar29;
            if (dVar29 <= (double)fVar31) {
              dVar30 = (double)fVar31;
            }
          }
          func_0x00010c0df720(puVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
          _objc_release(uVar6);
          _objc_release(puVar24);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar28 != puVar20);
        puVar28 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar24 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246bc0(puVar3);
      _objc_release(puVar12);
      _objc_release(puVar26);
      _objc_release(puVar24);
      puVar26 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = (undefined *)0x1;
      puVar28 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar28;
      func_0x00010c246bc0(puVar7);
      _objc_release(puVar28);
      _objc_release(puVar26);
      puVar26 = puVar7;
      func_0x00010bf529e0();
      if (puVar26 == (undefined *)0x0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar26 = puVar3;
        func_0x00010bf529e0();
        if (puVar26 == (undefined *)0x0) {
          puVar26 = (undefined *)0x0;
        }
        else {
          puVar26 = puVar7;
          func_0x00010bf529e0();
          puVar24 = puVar26;
          if ((undefined *)0x7 < puVar26) {
            puVar24 = (undefined *)0x8;
          }
          if (puVar26 == (undefined *)0x0) {
            fVar31 = 0.0;
          }
          else {
            puVar26 = (undefined *)0x0;
            fVar31 = 0.0;
            do {
              puVar12 = puVar7;
              func_0x00010c0dfd40(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar9;
              func_0x00010c0e00e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              fVar31 = fVar31 + SUB84(dVar30,0);
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar12);
              puVar26 = puVar26 + 1;
            } while (puVar24 != puVar26);
          }
          puVar26 = PTR_PTR_1126c3bb8;
          _objc_alloc();
          puVar28 = in_x5;
          func_0x00010bf2fac0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010bf51e00();
          puVar13 = puVar7;
          func_0x00010bf51e00(puVar7);
          dVar30 = (double)(ulong)(uint)(fVar31 / (float)puVar24);
          puVar14 = puVar11;
          func_0x00010bf00560(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar28;
          puVar24 = puVar12;
          func_0x00010c03fe00(dVar30);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar28);
        }
      }
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar25);
      _objc_release(puVar7);
      _objc_release(puVar3);
    }
    _objc_release(in_x5);
    _objc_release(lVar16);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
      _objc_retain(puVar20);
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = puVar10[6];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar17 == 0) {
        puStack_728 = &uStack_730;
        uStack_730 = 0;
        uStack_720 = 0x3032000000;
        pcStack_718 = FUN_107f38338;
        uStack_710 = 0x107f38348;
        uStack_708 = 0;
        uVar5 = puVar10[4];
        dVar30 = 1.60807493534087e-314;
        _objc_retain(puVar20);
        _objc_retain(puVar24);
        func_0x00010c0f8240(uVar5);
        lVar23 = puStack_728[5];
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar23;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar23);
        if (lVar16 == 0) {
          dVar30 = 1.0;
        }
        else {
          func_0x00010bf88340(lVar16);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar30,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10[6]);
        _objc_release(puVar3);
        _objc_release(lVar16);
        _objc_release(puVar24);
        _objc_release(puVar20);
        __Block_object_dispose(&uStack_730,8);
        _objc_release(uStack_708);
      }
      else {
        func_0x00010bf885a0(lVar17);
      }
      _objc_release(lVar17);
      _objc_release(puVar2);
      _objc_release(puVar24);
      _objc_release(puVar20);
      return dVar30;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return dVar30;
}



/* Entry: 107f3c198; end: 107f3cda7; -[SCMemoriesSearch _assembleSearchResultsFromSearchIntermediateResults:includePrivate:] */

double FUN_107f3c198(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                    undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined8 uStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 uStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_390;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined auStack_270 [256];
  undefined auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 0.0;
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  _objc_retain(param_3);
  puVar10 = &uStack_2f0;
  puVar4 = auStack_170;
  lVar16 = 0x10;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar25 = *plStack_2e0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_2e0 != lVar25) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(lStack_2e8 + lVar16 * 8);
        dVar27 = 0.0;
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        func_0x00010c241e40();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar1;
        func_0x00010bf52a60();
        if (lVar20 != 0) {
          lVar17 = *plStack_320;
          do {
            lVar19 = 0;
            do {
              if (*plStack_320 != lVar17) {
                _objc_enumerationMutation(lVar1);
              }
              uVar2 = *(undefined8 *)(lStack_328 + lVar19 * 8);
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar15);
              _objc_release(uVar2);
              lVar19 = lVar19 + 1;
            } while (lVar20 != lVar19);
            lVar20 = lVar1;
            func_0x00010bf52a60();
          } while (lVar20 != 0);
        }
        _objc_release(lVar1);
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar3);
      puVar10 = &uStack_2f0;
      puVar4 = auStack_170;
      lVar16 = 0x10;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af4d0;
  if (lVar3 == 0) {
    puVar22 = (undefined *)0x0;
    goto LAB_107f3cd50;
  }
  puVar4 = puVar15;
  func_0x00010bf00560(puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x000108ec0158();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  if (param_4 == 0) {
    _objc_retain(puVar5);
    _objc_retain(uVar6);
    puStack_390 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar5);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar5);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3a8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3b0 = PTR_PTR_1126c45e8;
    _objc_alloc();
    param_6 = (undefined8 *)0x0;
    func_0x00010c038000();
    if ((int)uVar2 != 0) {
      puVar4 = PTR_PTR_1126af4c0;
      func_0x00010bfa6ea0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      _objc_retain(puVar5);
      puVar7 = puVar5;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar16 = *plStack_2a0;
        do {
          puVar21 = (undefined *)0x0;
          do {
            if (*plStack_2a0 != lVar16) {
              _objc_enumerationMutation(puVar5);
            }
            uVar23 = *(undefined8 *)(lStack_2a8 + (long)puVar21 * 8);
            uVar2 = uVar23;
            func_0x00010c241220(uVar23);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar22;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar2);
            if (puVar8 == (undefined *)0x0) {
              uVar2 = uVar23;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar2 = uVar23;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar22);
                _objc_release(uVar2);
                func_0x00010c241220(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_390);
                _objc_release(uVar23);
              }
              _objc_release(puVar8);
            }
            puVar21 = puVar21 + 1;
          } while (puVar7 != puVar21);
          puVar7 = puVar5;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      goto LAB_107f3c88c;
    }
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(puVar5);
    puVar7 = puVar5;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar16 = *plStack_2a0;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar16) {
            _objc_enumerationMutation(puVar5);
          }
          uVar23 = *(undefined8 *)(lStack_2a8 + (long)puVar21 * 8);
          uVar2 = uVar23;
          func_0x00010c241220(uVar23);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar22;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar2);
          if (puVar8 == (undefined *)0x0) {
            puVar8 = PTR_PTR_1126af4c0;
            func_0x00010bfa7060();
            _objc_retainAutoreleasedReturnValue();
            if ((puVar8 != (undefined *)0x0) &&
               (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
              uVar2 = uVar23;
              func_0x00010c241220(uVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar22);
              _objc_release(uVar2);
              func_0x00010c241220(uVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_390);
              _objc_release(uVar23);
            }
            _objc_release(puVar8);
          }
          puVar21 = puVar21 + 1;
        } while (puVar7 != puVar21);
        puVar7 = puVar5;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
  }
  else {
    _objc_retain(puVar5);
    _objc_retain(uVar6);
    puStack_390 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar5);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar5);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3a8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_3b0 = PTR_PTR_1126c45e8;
    _objc_alloc();
    param_6 = (undefined8 *)0x0;
    func_0x00010c038000();
    if ((int)uVar2 == 0) {
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      _objc_retain(puVar5);
      puVar7 = puVar5;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar16 = *plStack_2a0;
        do {
          puVar21 = (undefined *)0x0;
          do {
            if (*plStack_2a0 != lVar16) {
              _objc_enumerationMutation(puVar5);
            }
            uVar23 = *(undefined8 *)(lStack_2a8 + (long)puVar21 * 8);
            uVar2 = uVar23;
            func_0x00010c241220(uVar23);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar22;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar2);
            if (puVar8 == (undefined *)0x0) {
              puVar8 = PTR_PTR_1126af4c0;
              func_0x00010bfa7060();
              _objc_retainAutoreleasedReturnValue();
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar2 = uVar23;
                func_0x00010c241220(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar22);
                _objc_release(uVar2);
                func_0x00010c241220(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_390);
                _objc_release(uVar23);
              }
              _objc_release(puVar8);
            }
            puVar21 = puVar21 + 1;
          } while (puVar7 != puVar21);
          puVar7 = puVar5;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
    }
    else {
      puVar4 = PTR_PTR_1126af4c0;
      func_0x00010bfa6ea0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      _objc_retain(puVar5);
      puVar7 = puVar5;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar16 = *plStack_2a0;
        do {
          puVar21 = (undefined *)0x0;
          do {
            if (*plStack_2a0 != lVar16) {
              _objc_enumerationMutation(puVar5);
            }
            uVar23 = *(undefined8 *)(lStack_2a8 + (long)puVar21 * 8);
            uVar2 = uVar23;
            func_0x00010c241220(uVar23);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar22;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar2);
            if (puVar8 == (undefined *)0x0) {
              uVar2 = uVar23;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              if ((puVar8 != (undefined *)0x0) &&
                 (puVar9 = puVar8, func_0x00010c080ca0(), ((ulong)puVar9 & 1) == 0)) {
                uVar2 = uVar23;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar22);
                _objc_release(uVar2);
                func_0x00010c241220(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_390);
                _objc_release(uVar23);
              }
              _objc_release(puVar8);
            }
            puVar21 = puVar21 + 1;
          } while (puVar7 != puVar21);
          puVar7 = puVar5;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
LAB_107f3c88c:
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar4);
  puVar7 = puStack_390;
  func_0x00010bf51e00(puStack_390);
  _objc_autorelease();
  puVar21 = puVar22;
  func_0x00010bf51e00();
  _objc_autorelease();
  _objc_release(puStack_3b0);
  _objc_release(puStack_3a8);
  _objc_release(puVar22);
  _objc_release(puStack_390);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_retain(puVar7);
  _objc_retain(puVar21);
  _objc_release(uVar6);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 0.0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  _objc_retain(param_3);
  puVar10 = &uStack_370;
  puVar4 = auStack_270;
  lVar16 = 0x10;
  lVar25 = param_3;
  func_0x00010bf52a60();
  if (lVar25 != 0) {
    lVar20 = *plStack_360;
    do {
      lVar16 = 0;
      do {
        if (*plStack_360 != lVar20) {
          _objc_enumerationMutation(param_3);
        }
        puVar24 = *(undefined8 **)(lStack_368 + lVar16 * 8);
        puVar10 = puVar24;
        func_0x00010c241e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13cdc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07e100();
        lVar1 = param_1;
        param_6 = puVar24;
        func_0x00010bdcf4c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        _objc_release(puVar10);
        if (lVar1 != 0) {
          func_0x00010befa120(puVar8);
        }
        _objc_release(lVar1);
        lVar16 = lVar16 + 1;
      } while (lVar25 != lVar16);
      puVar10 = &uStack_370;
      puVar4 = auStack_270;
      lVar16 = 0x10;
      lVar25 = param_3;
      func_0x00010bf52a60();
    } while (lVar25 != 0);
  }
  _objc_release(param_3);
  puVar22 = puVar8;
  func_0x00010bf51e00();
  _objc_release(puVar8);
  _objc_release(puVar21);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_107f3cd50:
  _objc_release(lVar3);
  _objc_release(puVar15);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar18 = puVar10;
    puVar15 = puVar4;
    _objc_retain(puVar10);
    _objc_retain(puVar4);
    _objc_retain(lVar16);
    _objc_retain(param_6);
    puVar24 = puVar10;
    func_0x00010bf529e0();
    if (puVar24 == (undefined8 *)0x0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar10);
      puVar24 = puVar10;
      func_0x00010bf52a60();
      lVar25 = lRam0000000000000000;
      while (puVar24 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar25) {
            _objc_enumerationMutation(puVar10);
          }
          uVar6 = *(undefined8 *)((long)puVar18 * 8);
          uVar2 = uVar6;
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          if (puVar15 != (undefined *)0x0 && lVar20 != 0) {
            lVar1 = lVar20;
            func_0x00010c241220(lVar20);
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puVar8;
            func_0x00010bf4b900();
            _objc_release(lVar1);
            if (((ulong)puVar22 & 1) == 0) {
              puVar22 = puVar15;
              func_0x00010bf97200(puVar15);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar21;
              func_0x00010bf4b900();
              _objc_release(puVar22);
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010befa120(puVar5);
                puVar22 = puVar15;
                func_0x00010bf97200(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar21);
                _objc_release(puVar22);
              }
              func_0x00010befa120(puVar7);
              lVar1 = lVar20;
              func_0x00010c241220(lVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8);
              _objc_release(lVar1);
            }
          }
          _objc_release(lVar20);
          _objc_release(puVar15);
          puVar18 = (undefined8 *)((long)puVar18 + 1);
        } while (puVar24 != puVar18);
        puVar24 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      dVar27 = 0.0;
      _objc_retain(puVar10);
      puVar24 = puVar10;
      func_0x00010bf52a60();
      lVar25 = lRam0000000000000000;
      while (puVar24 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar25) {
            _objc_enumerationMutation(puVar10);
          }
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar6 = *(undefined8 *)((long)puVar18 * 8);
          func_0x00010c13cc20(uVar6);
          func_0x00010c0df780(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar15);
          uVar2 = uVar6;
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar2);
          puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar22 == (undefined *)0x0) {
            func_0x00010bf45da0(uVar6);
          }
          else {
            uVar2 = uVar6;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puVar9;
            func_0x00010c0e00e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar26 = dVar27;
            _objc_release(puVar22);
            _objc_release(uVar2);
            func_0x00010bf45da0(uVar6);
            fVar28 = SUB84(dVar27,0);
            dVar27 = dVar26;
            if (dVar26 <= (double)fVar28) {
              dVar27 = (double)fVar28;
            }
          }
          func_0x00010c0df720(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
          _objc_release(uVar6);
          _objc_release(puVar15);
          puVar18 = (undefined8 *)((long)puVar18 + 1);
        } while (puVar24 != puVar18);
        puVar24 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar15 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246bc0(puVar5);
      _objc_release(puVar12);
      _objc_release(puVar22);
      _objc_release(puVar15);
      puVar22 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = (undefined *)0x1;
      puVar24 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar24;
      func_0x00010c246bc0(puVar7);
      _objc_release(puVar24);
      _objc_release(puVar22);
      puVar22 = puVar7;
      func_0x00010bf529e0();
      if (puVar22 == (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar22 = puVar5;
        func_0x00010bf529e0();
        if (puVar22 == (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar22 = puVar7;
          func_0x00010bf529e0();
          puVar15 = puVar22;
          if ((undefined *)0x7 < puVar22) {
            puVar15 = (undefined *)0x8;
          }
          if (puVar22 == (undefined *)0x0) {
            fVar28 = 0.0;
          }
          else {
            puVar22 = (undefined *)0x0;
            fVar28 = 0.0;
            do {
              puVar12 = puVar7;
              func_0x00010c0dfd40(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar9;
              func_0x00010c0e00e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              fVar28 = fVar28 + SUB84(dVar27,0);
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar12);
              puVar22 = puVar22 + 1;
            } while (puVar15 != puVar22);
          }
          puVar22 = PTR_PTR_1126c3bb8;
          _objc_alloc();
          puVar24 = param_6;
          func_0x00010bf2fac0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010bf51e00();
          puVar13 = puVar7;
          func_0x00010bf51e00(puVar7);
          dVar27 = (double)(ulong)(uint)(fVar28 / (float)puVar15);
          puVar14 = puVar11;
          func_0x00010bf00560(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar24;
          puVar15 = puVar12;
          func_0x00010c03fe00(dVar27);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar24);
        }
      }
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar21);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_release(param_6);
    _objc_release(lVar16);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
      ___stack_chk_fail();
      _objc_retain(puVar18);
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = puVar10[6];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puStack_6b8 = &uStack_6c0;
        uStack_6c0 = 0;
        uStack_6b0 = 0x3032000000;
        pcStack_6a8 = FUN_107f38338;
        uStack_6a0 = 0x107f38348;
        uStack_698 = 0;
        uVar2 = puVar10[4];
        dVar27 = 1.60807493534087e-314;
        _objc_retain(puVar18);
        _objc_retain(puVar15);
        func_0x00010c0f8240(uVar2);
        lVar25 = puStack_6b8[5];
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar25;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar25);
        if (lVar16 == 0) {
          dVar27 = 1.0;
        }
        else {
          func_0x00010bf88340(lVar16);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar27,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10[6]);
        _objc_release(puVar5);
        _objc_release(lVar16);
        _objc_release(puVar15);
        _objc_release(puVar18);
        __Block_object_dispose(&uStack_6c0,8);
        _objc_release(uStack_698);
      }
      else {
        func_0x00010bf885a0(lVar3);
      }
      _objc_release(lVar3);
      _objc_release(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar18);
      return dVar27;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return dVar27;
}



/* Entry: 107f3cda8; end: 107f3d563; -[SCMemoriesSearch _assembleSearchResultWithSnapMatchInfos:entries:snaps:resultTitle:isSimilarResult:] */

double FUN_107f3cda8(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                    undefined *param_5,long param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  float fVar21;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_4;
  puVar14 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar17 = param_4;
  func_0x00010bf529e0();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar17 = param_4;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar17 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(param_4);
        }
        uVar18 = *(undefined8 *)((long)puVar16 * 8);
        uVar19 = uVar18;
        func_0x00010c241220(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar19);
        func_0x00010c241220(uVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        if (puVar14 != (undefined *)0x0 && lVar12 != 0) {
          lVar5 = lVar12;
          func_0x00010c241220(lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010bf4b900();
          _objc_release(lVar5);
          if (((ulong)puVar6 & 1) == 0) {
            puVar6 = puVar14;
            func_0x00010bf97200(puVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bf4b900();
            _objc_release(puVar6);
            if (((ulong)puVar7 & 1) == 0) {
              func_0x00010befa120(puVar1);
              puVar6 = puVar14;
              func_0x00010bf97200(puVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(puVar6);
            }
            func_0x00010befa120(puVar2);
            lVar5 = lVar12;
            func_0x00010c241220(lVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(lVar5);
          }
        }
        _objc_release(lVar12);
        _objc_release(puVar14);
        puVar16 = puVar16 + 1;
      } while (puVar17 != puVar16);
      puVar17 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain(param_4);
    puVar17 = param_4;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar17 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(param_4);
        }
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar18 = *(undefined8 *)((long)puVar16 * 8);
        func_0x00010c13cc20(uVar18);
        func_0x00010c0df780(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(puVar14);
        uVar19 = uVar18;
        func_0x00010c241220(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar19);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar8 == (undefined *)0x0) {
          func_0x00010bf45da0(uVar18);
        }
        else {
          uVar19 = uVar18;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          dVar20 = param_1;
          _objc_release(puVar8);
          _objc_release(uVar19);
          func_0x00010bf45da0(uVar18);
          fVar21 = SUB84(param_1,0);
          param_1 = dVar20;
          if (dVar20 <= (double)fVar21) {
            param_1 = (double)fVar21;
          }
        }
        func_0x00010c0df720(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220(uVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar18);
        _objc_release(puVar14);
        puVar16 = puVar16 + 1;
      } while (puVar17 != puVar16);
      puVar17 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    puVar17 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar16);
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)0x1;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar8;
    func_0x00010c246bc0(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar17);
    puVar17 = puVar2;
    func_0x00010bf529e0();
    if (puVar17 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = puVar1;
      func_0x00010bf529e0();
      if (puVar17 == (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar2;
        func_0x00010bf529e0();
        puVar16 = puVar17;
        if ((undefined *)0x7 < puVar17) {
          puVar16 = (undefined *)0x8;
        }
        if (puVar17 == (undefined *)0x0) {
          fVar21 = 0.0;
        }
        else {
          puVar17 = (undefined *)0x0;
          fVar21 = 0.0;
          do {
            puVar14 = puVar2;
            func_0x00010c0dfd40(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar14;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar6;
            func_0x00010c0e00e0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            fVar21 = fVar21 + SUB84(param_1,0);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar14);
            puVar17 = puVar17 + 1;
          } while (puVar16 != puVar17);
        }
        puVar17 = PTR_PTR_1126c3bb8;
        _objc_alloc();
        puVar8 = param_7;
        func_0x00010bf2fac0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf51e00();
        puVar10 = puVar2;
        func_0x00010bf51e00(puVar2);
        param_1 = (double)(ulong)(uint)(fVar21 / (float)puVar16);
        puVar11 = puVar7;
        func_0x00010bf00560(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar8;
        puVar14 = puVar9;
        func_0x00010c03fe00(param_1);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(param_4 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    puStack_2f8 = &uStack_300;
    uStack_300 = 0;
    uStack_2f0 = 0x3032000000;
    pcStack_2e8 = FUN_107f38338;
    uStack_2e0 = 0x107f38348;
    uStack_2d8 = 0;
    uVar19 = *(undefined8 *)(param_4 + 0x20);
    param_1 = 1.60807493534087e-314;
    _objc_retain(puVar16);
    _objc_retain(puVar14);
    func_0x00010c0f8240(uVar19);
    lVar12 = puStack_2f8[5];
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    if (lVar13 == 0) {
      param_1 = 1.0;
    }
    else {
      func_0x00010bf88340(lVar13);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x30));
    _objc_release(puVar1);
    _objc_release(lVar13);
    _objc_release(puVar14);
    _objc_release(puVar16);
    __Block_object_dispose(&uStack_300,8);
    _objc_release(uStack_2d8);
  }
  else {
    func_0x00010bf885a0(lVar15);
  }
  _objc_release(lVar15);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar16);
  return param_1;
}



/* Entry: 107f3d564; end: 107f3d793; -[SCMemoriesSearch _tagConfidenceForSnap:tag:] */

undefined8
FUN_107f3d564(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_107f38338;
    uStack_70 = 0x107f38348;
    uStack_68 = 0;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    param_1 = 0xc2000000;
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f8240(uVar6);
    lVar3 = puStack_88[5];
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      param_1 = 0x3ff0000000000000;
    }
    else {
      func_0x00010bf88340(lVar4);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30));
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  else {
    func_0x00010bf885a0(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107f3d794; end: 107f3d86b;  */

void FUN_107f3d794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  _objc_retain(param_2);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  puVar4 = puVar1;
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c0d3c80();
  _objc_retain();
  func_0x00010bf97ce0(puVar4);
  _objc_release(puVar4);
  uVar2 = uVar7;
  func_0x00010bf51e00(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f3d86c; end: 107f3d90f; -[SCMemoriesSearch _outerJoinDictionary:andDictionary:] */

void FUN_107f3d86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  func_0x00010c0d3c80();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107f3d910;
  puStack_30 = &UNK_1108c0730;
  uStack_28 = param_3;
  _objc_retain();
  func_0x00010bf97ce0(param_4,param_2,&puStack_48);
  _objc_release(param_4);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f3d910; end: 107f3d9c7;  */

void FUN_107f3d910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010befa160(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f3d9c8; end: 107f3db7f; -[SCMemoriesSearch _normalizeString:] */

void FUN_107f3d9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000113728528 != -1) {
    func_0x00010002a2fc(0x113728528,&PTR___NSConcreteGlobalBlock_110a13fc0);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = (ulong)puRam0000000113728520;
      func_0x00010bf4b900();
      if ((uVar4 & 1) == 0) {
        func_0x00010befa120(puVar2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar5 = puVar2;
  func_0x00010bf446e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = (ulong)puRam0000000113728520;
  puRam0000000113728520 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107f3db80; end: 107f3df4b;  */

void FUN_107f3db80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110e6fab8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113728520;
  puRam0000000113728520 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f3df4c; end: 107f3e04b; -[SCMemoriesSearch _tokenize:] */

void FUN_107f3df4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  _objc_retain(param_3);
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  func_0x00010c265a40(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf44700(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0d3c80(uVar3);
  _objc_release(uVar3);
  func_0x00010c12d360(uVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  uVar3 = uVar4;
  func_0x00010bf51e00(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f3e04c; end: 107f3e0b7; -[SCMemoriesSearch _getTagsFromString:] */

void FUN_107f3e04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
  func_0x00010c12d360(uVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f3e0b8; end: 107f3e107; -[SCMemoriesSearch invalidate] */

void FUN_107f3e0b8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x110);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107f3e108; end: 107f3e2e7; -[SCMemoriesSearch .cxx_destruct] */

void FUN_107f3e108(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f3e2e8; end: 107f3e50f;  */

void FUN_107f3e2e8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar14;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010bf44700(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_110a13fe0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bfaea40(uVar13,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(puVar1);
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar13 = uVar4 >> 2;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  if (3 < uVar4) {
    lVar14 = 0;
    do {
      uVar4 = uVar3;
      func_0x00010c25e980(uVar3,param_2,lVar14,4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d86f0;
      _objc_alloc();
      uVar5 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c067fc0();
      uVar7 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c067fc0();
      uVar9 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c067fc0();
      uVar11 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c067fc0();
      func_0x00010bfffca0(puVar2,param_2,uVar6,uVar8,uVar10,uVar12);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar4);
      lVar14 = lVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f3e510; end: 107f3e533;  */

uint FUN_107f3e510(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  return (uint)param_2 ^ 1;
}



/* Entry: 107f3e534; end: 107f3ed8b;  */

undefined * FUN_107f3e534(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
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
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  long unaff_x19;
  long lVar20;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *puVar21;
  undefined **unaff_x24;
  long unaff_x25;
  ulong uVar22;
  long unaff_x28;
  long lStack_400;
  long lStack_3f8;
  undefined *puStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined1 *puStack_390;
  undefined8 uStack_388;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  puVar21 = PTR____NSArray0__struct_11034ab48;
  if ((lVar1 != 0) &&
     (lVar1 = param_2, func_0x00010bf529e0(), puVar21 = PTR____NSArray0__struct_11034ab48,
     lVar1 != 0)) {
    unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x21 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x25 = *plStack_2a0;
      do {
        lVar20 = 0;
        do {
          if (*plStack_2a0 != unaff_x25) {
            _objc_enumerationMutation(param_1);
          }
          uVar2 = *(undefined8 *)(lStack_2a8 + lVar20 * 8);
          func_0x00010c241220(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x21);
          _objc_release(uVar2);
          lVar20 = lVar20 + 1;
        } while (lVar1 != lVar20);
        lVar1 = param_1;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x25 = *plStack_2e0;
      do {
        lVar20 = 0;
        do {
          if (*plStack_2e0 != unaff_x25) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x24 = *(undefined ***)(lStack_2e8 + lVar20 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x22);
          _objc_release(unaff_x24);
          lVar20 = lVar20 + 1;
        } while (lVar1 != lVar20);
        lVar1 = param_2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    lStack_378 = param_2;
    _objc_release(param_2);
    func_0x00010c069840(unaff_x21);
    puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x28 = *plStack_320;
      do {
        lVar20 = 0;
        do {
          if (*plStack_320 != unaff_x28) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x25 = *(long *)(lStack_328 + lVar20 * 8);
          lVar3 = unaff_x25;
          func_0x00010c241220(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x21;
          func_0x00010bf4b900();
          _objc_release(lVar3);
          if ((int)puVar4 != 0) {
            func_0x00010befa120(puVar21);
          }
          lVar20 = lVar20 + 1;
        } while (lVar1 != lVar20);
        lVar1 = param_1;
        func_0x00010bf52a60();
        unaff_x24 = (undefined **)0x0;
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
    unaff_x19 = lStack_378;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    _objc_retain(lStack_378);
    lVar1 = unaff_x19;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x28 = *plStack_360;
      do {
        unaff_x19 = 0;
        do {
          if (*plStack_360 != unaff_x28) {
            _objc_enumerationMutation(lStack_378);
          }
          unaff_x25 = *(long *)(lStack_368 + unaff_x19 * 8);
          lVar20 = unaff_x25;
          func_0x00010c241220(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x21;
          func_0x00010bf4b900();
          _objc_release(lVar20);
          if ((int)puVar4 != 0) {
            func_0x00010befa120(puVar21);
          }
          unaff_x19 = unaff_x19 + 1;
        } while (lVar1 != unaff_x19);
        lVar1 = lStack_378;
        func_0x00010bf52a60();
        unaff_x24 = (undefined **)0x0;
      } while (lVar1 != 0);
    }
    param_2 = lStack_378;
    _objc_release(lStack_378);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    unaff_x20 = param_1;
  }
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_388 = 0x107f3e950;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_3e0 = unaff_x28;
    lStack_3d8 = param_2;
    lStack_3d0 = param_1;
    lStack_3c8 = unaff_x25;
    ppuStack_3c0 = unaff_x24;
    puStack_3b8 = puVar21;
    puStack_3b0 = unaff_x22;
    puStack_3a8 = unaff_x21;
    lStack_3a0 = unaff_x20;
    lStack_398 = unaff_x19;
    puStack_390 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(lVar19);
    puVar21 = (undefined *)0x0;
    if ((lVar1 != 0) && (lVar19 != 0)) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126af4d0;
      func_0x00010bfa9000();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar21;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
      if (puVar5 != (undefined *)0x0) {
        puVar21 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
        func_0x00010bf5e300();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar21;
        func_0x00010bf44640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar21;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
        _objc_alloc_init();
        func_0x00010c189d40();
        puVar9 = puVar21;
        func_0x00010bf64e20(puVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189d40(puVar8);
        puVar10 = puVar21;
        func_0x00010bf64e20(puVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
        _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
        uVar22 = 0xffffffffffffffff;
        do {
          func_0x00010c2278a0(puVar12);
          puVar13 = puVar21;
          func_0x00010bf64e20(puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar21;
          func_0x00010bf64e20(puVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010c070260();
          puVar16 = PTR_PTR_1126af4d0;
          if (((ulong)puVar15 & 1) != 0) {
            _objc_release(puVar14);
            _objc_release(puVar13);
            break;
          }
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_3f0 = puVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7320();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          puVar15 = puVar16;
          func_0x00010bf529e0();
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa160(puVar4);
          }
          _objc_release(puVar16);
          _objc_release(puVar14);
          _objc_release(puVar13);
          uVar22 = uVar22 - 1;
        } while (0xfffffffffffffff5 < uVar22);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar7);
        _objc_release(puVar21);
      }
      lStack_400 = 0;
      lStack_3f8 = 0;
      FUN_107f44da0(puVar4,&lStack_3f8,&lStack_400,lVar1);
      lVar3 = lStack_3f8;
      _objc_retain(lStack_3f8);
      lVar20 = lStack_400;
      _objc_retain(lStack_400);
      lVar17 = lVar3;
      func_0x00010bf529e0();
      if ((lVar17 == 0) || (lVar17 = lVar20, func_0x00010bf529e0(), lVar17 == 0)) {
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar21 = PTR_PTR_1126c3bb8;
        _objc_alloc(PTR_PTR_1126c3bb8);
        ppuVar18 = &PTR____CFConstantStringClassReference_110ec7ab8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec7ab8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03fe00(puVar21);
        _objc_release(ppuVar18);
      }
      _objc_release(lVar20);
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar19);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e8) {
      ___stack_chk_fail();
      return *(undefined **)(lVar1 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return puVar21;
}



/* Entry: 107f3ed8c; end: 107f3ed93; -[SCMemoriesInternalSearchServices gallerySearch] */

undefined8 FUN_107f3ed8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f3ed94; end: 107f3edc3; -[SCMemoriesInternalSearchServices .cxx_destruct] */

void FUN_107f3ed94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f3edc4; end: 107f3eedb;  */

void FUN_107f3edc4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = PTR_PTR_1126b24e0;
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ec7ad8;
  if (param_2 != 2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e699d8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec7af8;
  if (param_2 != 1) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbaad8;
  if (param_3 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ec7b18;
  }
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  func_0x00010c106cc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb03e0(param_1,puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107f3eedc; end: 107f3f08b; -[SCGalleryVisualConceptThresholdUpdater initWithCoreConfigProvider:simpleContentFetcher:] */

undefined8 *
FUN_107f3eedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fbb50;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = puVar1[9];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107f3f08c; end: 107f3f093;  */

void FUN_107f3f08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateFromFile_112593c48);
  return;
}



/* Entry: 107f3f094; end: 107f3f0f7; +[SCGalleryVisualConceptThresholdUpdater defaultImmediateNotifier] */

void FUN_107f3f094(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3c40;
  func_0x00010c14fbe0(0x4000000000000000,PTR_PTR_1126c3c40);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bc7cf3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f3f0f8; end: 107f3f15f; +[SCGalleryVisualConceptThresholdUpdater defaultLongRunningNotifier] */

void FUN_107f3f0f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3c40;
  func_0x00010c14fbe0(0x40ac200000000000,PTR_PTR_1126c3c40);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bc7cf3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f3f160; end: 107f3f167; -[SCGalleryVisualConceptThresholdUpdater dedicatedQueue] */

void FUN_107f3f160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 107f3f168; end: 107f3f247; -[SCGalleryVisualConceptThresholdUpdater runWithServiceTerm:] */

void FUN_107f3f168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107f3f248;
  puStack_40 = &UNK_11087bb00;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7f68;
  uStack_38 = param_3;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1fc0(param_1,param_2,&puStack_58,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f3f248; end: 107f3f29f;  */

void FUN_107f3f248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d86b8;
  func_0x00010bf69ba0(PTR_PTR_1126d86b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f3f2a0; end: 107f3f37f; -[SCGalleryVisualConceptThresholdUpdater thresholdForConcepts] */

void FUN_107f3f2a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107f3f380;
  uStack_30 = 0x107f3f390;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x48));
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f3f380; end: 107f3f397;  */

void FUN_107f3f380(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f3f398; end: 107f3f3d3;  */

void FUN_107f3f398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f3f3d4; end: 107f3f90b; -[SCGalleryVisualConceptThresholdUpdater _updateThresholdForConcepts:requestManager:] */

void FUN_107f3f3d4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000108ec1b1c();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110ec7b78;
    func_0x00010801b7a8();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar5 = ppuVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar9 = PTR_PTR_1126b4960;
    puVar6 = PTR_PTR_1126b19f8;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58700(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010c25f5a0(param_4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(puVar9);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x000108ec1b74();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuVar4 = (undefined **)PTR_PTR_1126b08b0;
    func_0x00010bf33760();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c13e600(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar12);
  _objc_release(param_4);
  lVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar11 = param_2;
  func_0x00010bfcaaa0();
  if (lVar11 == 0) {
    lVar11 = param_2;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010be9a2a0(*(undefined8 *)(lVar10 + 0x20));
      }
      _objc_release(puVar12);
    }
    _objc_release(lVar11);
  }
  (**(code **)(*(long *)(lVar10 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f3f90c; end: 107f3f9ef;  */

void FUN_107f3f90c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        func_0x00010be9a2a0(*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f3f9f0; end: 107f3fb37;  */

void FUN_107f3f9f0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = param_3;
    func_0x00010bf001c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9a2a0(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f3fb38; end: 107f3fb43;  */

void FUN_107f3fb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f3fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107f3fb44; end: 107f3fcd7; -[SCGalleryVisualConceptThresholdUpdater _updateFromFile] */

void FUN_107f3fb44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1;
  func_0x00010be15aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar4 = puVar3;
    func_0x00010bf67000(puVar3,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107f3fcd8;
    puStack_58 = &UNK_110883780;
    lStack_50 = param_1;
    _objc_retain();
    puStack_48 = puVar4;
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_70);
    puVar5 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ec7b38);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar5;
    _objc_release(uVar6);
    _objc_release(puStack_48);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107f3fcd8; end: 107f3fd1b;  */

void FUN_107f3fcd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ec7b58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f3fd1c; end: 107f3ffab; -[SCGalleryVisualConceptThresholdUpdater _saveToFile:eTag:] */

void FUN_107f3fd1c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar2,param_2,param_4,&PTR____CFConstantStringClassReference_110ec7b38);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = param_4;
    _objc_release(uVar3);
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar1;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107f3ffac;
    puStack_70 = &UNK_110a140c0;
    _objc_retain();
    puStack_68 = puVar4;
    func_0x00010bf97ce0(param_3,param_2,&puStack_88);
    puVar5 = puVar4;
    func_0x00010bf51e00();
    _objc_release(param_3);
    func_0x00010c1d0640(puVar2,param_2,puVar5,&PTR____CFConstantStringClassReference_110ec7b58);
    _objc_release(puStack_68);
    _objc_release(puVar4);
  }
  lVar6 = param_1;
  func_0x00010be15aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0f5800(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e020(puVar4,param_2,lVar7,1);
  _objc_release(lVar7);
  if (puVar5 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107f40038;
    puStack_a0 = &UNK_110883780;
    lStack_98 = param_1;
    _objc_retain(puVar5);
    puStack_90 = puVar5;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_b8);
    _objc_release(puStack_90);
  }
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(puVar5);
  return;
}



/* Entry: 107f3ffac; end: 107f40037;  */

void FUN_107f3ffac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b5ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f40038; end: 107f40063;  */

void FUN_107f40038(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f40064; end: 107f401cb; -[SCGalleryVisualConceptThresholdUpdater _fileURL] */

void FUN_107f40064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = puVar1;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar3,param_2,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bdc2c60(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec7bd8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010bf55da0(puVar1,param_2,puVar2,1,0,0);
  }
  puVar4 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec7bf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f401cc; end: 107f40227; -[SCGalleryVisualConceptThresholdUpdater .cxx_destruct] */

void FUN_107f401cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107f40228; end: 107f40247; -[SCGalleryVisualConceptThresholdUpdater .cxx_construct] */

void FUN_107f40228(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 107f40248; end: 107f40507; -[SCGallerySearchQueryResultsCollector initWithDataObjectContext:galleryProfile:galleryEncryptedDatabase:memoriesSearchDatabase:locationPermissionsManager:locationProvider:grapheneRegistry:] */

undefined8 *
FUN_107f40248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fbb58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d86f8;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d8700;
    _objc_alloc();
    func_0x00010c034ba0();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d86a0;
    _objc_alloc();
    func_0x00010c02abe0();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    func_0x00010be66b00(puVar1);
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



/* Entry: 107f40508; end: 107f40563; -[SCGallerySearchQueryResultsCollector markSearchQueryResultsOutdated] */

void FUN_107f40508(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107f40564;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 107f40564; end: 107f4056b;  */

void FUN_107f40564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__markSearchQueryResultsOutdated_112574f90);
  return;
}



/* Entry: 107f4056c; end: 107f405a7; -[SCGallerySearchQueryResultsCollector allSearchQueryResults] */

void FUN_107f4056c(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f405a8; end: 107f405af; -[SCGallerySearchQueryResultsCollector prepareTagClusteringSearchWith:] */

void FUN_107f405a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setUpWithGallerySearch__112664b28);
  return;
}



/* Entry: 107f405b0; end: 107f4062f; -[SCGallerySearchQueryResultsCollector setAllSearchQueryResults:] */

void FUN_107f405b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f40630; end: 107f406f3; -[SCGallerySearchQueryResultsCollector addListener:] */

void FUN_107f40630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f406f4;
  puStack_48 = &UNK_110883780;
  lStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f406f4; end: 107f407a7;  */

void FUN_107f406f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010bf51e00();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f407a8;
    puStack_50 = &UNK_110896e48;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = uVar2;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107f407a8; end: 107f407b7;  */

void FUN_107f407a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_searchQueryResultsCollector_didU_112632a10,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107f407b8; end: 107f407bf; -[SCGallerySearchQueryResultsCollector removeListener:] */

void FUN_107f407b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107f407c0; end: 107f407fb; -[SCGallerySearchQueryResultsCollector invalidate] */

void FUN_107f407c0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be41400();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bed1bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unobserveProfileChanges_112592090);
  return;
}



/* Entry: 107f407fc; end: 107f4081b; -[SCGallerySearchQueryResultsCollector getSearchResultTakenNearbyToSnapIds:withGeoTag:] */

void FUN_107f407fc(long param_1)

{
  func_0x00010bfc9f60(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f4081c; end: 107f40823; -[SCGallerySearchQueryResultsCollector dedicatedQueue] */

void FUN_107f4081c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 107f40824; end: 107f40bab; -[SCGallerySearchQueryResultsCollector runWithServiceTerm:] */

void FUN_107f40824(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010be41400();
  if ((uVar2 & 1) == 0) {
    _CACurrentMediaTime();
    *(undefined1 *)(param_2 + 0x78) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x000107f3e950(uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release();
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_107f40bac;
    uStack_98 = 0x107f40bbc;
    uStack_90 = 0;
    puStack_b0 = &uStack_b8;
    _dispatch_group_create();
    _dispatch_group_enter();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_107f40bc4;
    puStack_d8 = &UNK_110994c48;
    uStack_d0 = param_2;
    puStack_c0 = &uStack_b8;
    _objc_retain(uVar4);
    uStack_c8 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_f0);
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_107f40bac;
    uStack_100 = 0x107f40bbc;
    uStack_f8 = 0;
    puStack_118 = &uStack_120;
    _dispatch_group_enter(uVar4);
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar1;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_107f40d0c;
    puStack_138 = &UNK_110a14120;
    puStack_128 = &uStack_120;
    _objc_retain(uVar4);
    uStack_130 = uVar4;
    func_0x00010bfa4c60(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_107f40d84;
    puStack_190 = &UNK_110a14150;
    puStack_168 = &uStack_b8;
    puStack_160 = &uStack_120;
    puStack_188 = puVar3;
    uStack_180 = uVar6;
    uStack_178 = param_2;
    uStack_158 = param_1;
    _objc_retain(param_4);
    uStack_170 = param_4;
    _objc_retain(uVar6);
    _objc_retain(puVar3);
    func_0x000100bc0718(uVar4,uVar5,&puStack_1a8);
    _objc_release(uVar5);
    _objc_release(uStack_170);
    _objc_release(uStack_180);
    _objc_release(puStack_188);
    _objc_release(uStack_130);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    _objc_release(uStack_c8);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107f40bac; end: 107f40bc3;  */

void FUN_107f40bac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f40bc4; end: 107f40c8f;  */

void FUN_107f40bc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f40c90;
  puStack_48 = &UNK_110a140f0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x00010bfaace0(uVar1,param_2,uVar2,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_40);
  return;
}



/* Entry: 107f40c90; end: 107f40d0b;  */

void FUN_107f40c90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f40d0c; end: 107f40d83;  */

void FUN_107f40d0c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f40d84; end: 107f40f13;  */

void FUN_107f40d84(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x28);
  if (lVar3 != 0) {
    func_0x00010c066b00(*(undefined8 *)(param_2 + 0x20),param_3,lVar3,0);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    func_0x00010c066b00(*(undefined8 *)(param_2 + 0x20));
  }
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28) != 0) {
    func_0x00010befa160(*(undefined8 *)(param_2 + 0x20));
  }
  _CACurrentMediaTime();
  dVar4 = *(double *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf529e0(uVar1);
  FUN_107f3edc4(param_1 - dVar4,0,0,uVar1,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x98));
  func_0x00010c166f40(*(undefined8 *)(param_2 + 0x30));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f40f14;
  puStack_48 = &UNK_110883780;
  uStack_40 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  puVar2 = PTR_PTR_1126c3c50;
  if (*(char *)(*(long *)(param_2 + 0x30) + 0x78) == '\x01') {
    func_0x00010bf69d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(uVar1);
  }
  else {
    func_0x00010c0d83e0(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(uVar1);
  }
  _objc_release(puVar2);
  _objc_release(uStack_38);
  return;
}



/* Entry: 107f40f14; end: 107f40f1f;  */

void FUN_107f40f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),
             PTR_s_searchQueryResultsCollector_didU_112632a10,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f40f20; end: 107f40f3f; -[SCGallerySearchQueryResultsCollector _isInvalidated] */

bool FUN_107f40f20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 107f40f40; end: 107f40fdb; -[SCGallerySearchQueryResultsCollector _markSearchQueryResultsOutdated] */

void FUN_107f40f40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + 0x78) = 1;
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3c50;
  func_0x00010bf69d80(PTR_PTR_1126c3c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2254a0(puVar1,param_2,puVar2,param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f40fdc; end: 107f40fe3; -[SCGallerySearchQueryResultsCollector _unobserveProfileChanges] */

void FUN_107f40fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 107f40fe4; end: 107f4108b; -[SCGallerySearchQueryResultsCollector _observeProfileChanges] */

void FUN_107f40fe4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107f4108c; end: 107f410d3;  */

void FUN_107f4108c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2d1e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f410d4; end: 107f41237; -[SCGallerySearchQueryResultsCollector _handleObserveProfileChanges] */

void FUN_107f410d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126b2500;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0e0700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107f41238; end: 107f412bf;  */

void FUN_107f41238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     (uVar1 = param_3,
     func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110eb2578),
     (int)uVar1 != 0)) {
    func_0x00010be5d7c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f412c0; end: 107f41357; -[SCGallerySearchQueryResultsCollector .cxx_destruct] */

void FUN_107f412c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107f41358; end: 107f41377; -[SCGallerySearchQueryResultsCollector .cxx_construct] */

void FUN_107f41358(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 107f41378; end: 107f414c7; -[SCGallerySuggestedQueryUpdater initWithSessionRequestManager:snapTokenProvider:] */

undefined1 *
FUN_107f41378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_48 = PTR_PTR_1126fbb60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f414c8; end: 107f41527; +[SCGallerySuggestedQueryUpdater defaultImmediateNotifier] */

void FUN_107f414c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3c50;
  func_0x00010bf69d80(PTR_PTR_1126c3c50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bc7cf3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f41528; end: 107f4158f; +[SCGallerySuggestedQueryUpdater defaultLongRunningNotifier] */

void FUN_107f41528(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3c40;
  func_0x00010c14fbe0(0x4082c00000000000,PTR_PTR_1126c3c40);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bc7cf3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f41590; end: 107f41597; -[SCGallerySuggestedQueryUpdater dedicatedQueue] */

void FUN_107f41590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 107f41598; end: 107f4175f; -[SCGallerySuggestedQueryUpdater runWithServiceTerm:] */

void FUN_107f41598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f41760;
  puStack_70 = &UNK_110a141b0;
  _objc_retain(param_3);
  ppuVar3 = &puStack_88;
  uStack_68 = param_3;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107f417b8;
  puStack_a8 = &UNK_110a141e0;
  _objc_retain(ppuVar3);
  lStack_a0 = param_1;
  ppuStack_90 = ppuVar3;
  _objc_retain(param_3);
  uStack_98 = param_3;
  func_0x00010bfa4900(uVar2,param_2,6,uVar4,uVar5,&puStack_c0,ppuVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_98);
  _objc_release(ppuStack_90);
  _objc_release(ppuVar3);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107f41760; end: 107f417b7;  */

void FUN_107f41760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d86c8;
  func_0x00010bf69ba0(PTR_PTR_1126d86c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f417b8; end: 107f4187b;  */

void FUN_107f417b8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2,param_3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be981a0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f4187c; end: 107f41be7; -[SCGallerySuggestedQueryUpdater _runWithServiceTerm:accessToken:] */

void FUN_107f4187c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107f41be8;
  puStack_90 = &UNK_110a14210;
  lStack_88 = param_1;
  _objc_retain(param_3);
  ppuVar1 = &puStack_a8;
  uStack_80 = param_3;
  _objc_retainBlock();
  uVar2 = 1;
  func_0x00010801b6e8(1,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b4960;
  ppuVar3 = &PTR____CFConstantStringClassReference_110ec7c58;
  func_0x00010801b7a8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = ppuVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58740(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  func_0x00010c25f660(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f41be8; end: 107f41cf3;  */

void FUN_107f41be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8708;
  _objc_alloc();
  func_0x00010c0206e0();
  puVar2 = puVar1;
  func_0x00010bf6a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c20faa0(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
    func_0x00010be98c40(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126d86c8;
  func_0x00010bf69ba0(PTR_PTR_1126d86c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f41cf4; end: 107f41d07;  */

void FUN_107f41cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000107f41d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,param_4);
  return;
}



/* Entry: 107f41d08; end: 107f41d5f;  */

void FUN_107f41d08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d86c8;
  func_0x00010bf69ba0(PTR_PTR_1126d86c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f41d60; end: 107f41db3; -[SCGallerySuggestedQueryUpdater setSuggestedQueries:] */

void FUN_107f41d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}


