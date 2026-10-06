/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10668b3bc; end: 10668b653; -[SCLensExplorerRenderedLensSelector selectRandomRankedLensInRouter:section:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10668b3bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
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
  lVar1 = param_3;
  func_0x00010c07ab40();
  if ((int)lVar1 == 0) {
    uVar16 = 3;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0939a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c093980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar16 = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c0939e0(lVar2,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar16 = 2;
      }
      else {
        lVar15 = lVar3;
        func_0x00010c0939c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar15 == 0) {
          uVar16 = 1;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          lStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          _objc_retain(lVar15);
          lVar5 = lVar15;
          func_0x00010bf52a60(lVar15,param_2,&uStack_130,auStack_f0,0x10);
          if (lVar5 != 0) {
            lVar14 = *plStack_120;
            do {
              lVar13 = 0;
              do {
                if (*plStack_120 != lVar14) {
                  _objc_enumerationMutation(lVar15);
                }
                lVar17 = *(long *)(lStack_128 + lVar13 * 8);
                lVar6 = lVar17;
                func_0x00010c094be0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c2810a0();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c08fa60();
                _objc_release(lVar7);
                _objc_release(lVar6);
                if (lVar8 != 0) {
                  func_0x00010befa120(puVar4,param_2,lVar17);
                }
                lVar13 = lVar13 + 1;
              } while (lVar5 != lVar13);
              lVar5 = lVar15;
              func_0x00010bf52a60(lVar15,param_2,&uStack_130,auStack_f0,0x10);
            } while (lVar5 != 0);
          }
          _objc_release(lVar15);
          puVar9 = puVar4;
          func_0x00010bf529e0();
          if (puVar9 == (undefined *)0x0) {
            uVar16 = 2;
          }
          else {
            puVar9 = puVar4;
            func_0x00010bf529e0(puVar4);
            _arc4random_uniform();
            puVar10 = puVar4;
            func_0x00010c0dfd40(puVar4,param_2,(ulong)puVar9 & 0xffffffff);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar3;
            func_0x00010c093960(lVar3,param_2,puVar10);
            uVar16 = (ulong)((uint)lVar5 ^ 1);
            _objc_release(puVar10);
          }
          _objc_release(puVar4);
        }
        _objc_release(lVar15);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + _DAT_11274d940);
  *(long *)(param_3 + _DAT_11274d940) = lVar15;
  _objc_release(uVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  FUN_10668b8e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bdf2ac0(param_3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11274d944;
  uVar12 = *(undefined8 *)(param_3 + lVar15);
  *(long *)(param_3 + lVar15) = lVar3;
  _objc_release(uVar12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar12 = *(undefined8 *)(param_3 + lVar15);
  lVar1 = param_3;
  FUN_10668b8e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(uVar12,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar12 = *(undefined8 *)(param_3 + lVar15);
  lVar1 = param_3;
  FUN_10668b8e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(uVar12,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  FUN_10668b8e8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb880();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010668b90c(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  FUN_10668b8e8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar12 = *(undefined8 *)(param_3 + lVar15);
  uVar16 = param_3 + _DAT_11274d950;
  _objc_loadWeakRetained(uVar16);
  uVar11 = uVar16;
  if (lVar2 == 0) {
    func_0x00010bfbb120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cac0(uVar12,param_2,uVar11,0);
  }
  else {
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cbe0(uVar12,param_2,uVar11,0);
  }
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return uVar16;
}



/* Entry: 10668b654; end: 10668b8e7; -[SCLensExplorerSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b654(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274d940);
  *(long *)(param_1 + _DAT_11274d940) = lVar5;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_10668b8e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf2ac0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274d944;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar1 = param_1;
  FUN_10668b8e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(uVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar1 = param_1;
  FUN_10668b8e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(uVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_10668b8e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb880();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010668b90c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_10668b8e8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  param_1 = param_1 + _DAT_11274d950;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  if (lVar2 == 0) {
    func_0x00010bfbb120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cac0(uVar4,param_2,lVar1,0);
  }
  else {
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cbe0(uVar4,param_2,lVar1,0);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10668b8e8; end: 10668b92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b8e8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d950);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668b930; end: 10668ba83; -[SCLensExplorerSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b930(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = param_1;
  func_0x00010668b90c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d944;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24e0;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d948;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10668ba84;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10668ba84; end: 10668ba8b;  */

void FUN_10668ba84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10668ba8c; end: 10668c163; -[SCLensExplorerSessionEntryPoint _createRouterWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668ba8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11274d964;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar26;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c248540();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar3;
  func_0x00010c0f2ba0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar26);
  lVar26 = param_1;
  func_0x00010668b90c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar26;
  if ((int)lVar28 == 0) {
    func_0x00010bf6ad80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe0b20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar26);
  lVar28 = (long)_DAT_11274d940;
  puVar4 = *(undefined **)(param_1 + lVar28);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010668b8e8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar26;
  func_0x00010c10f340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cfd40();
  _objc_release(lVar2);
  _objc_release(lVar26);
  lVar26 = param_1;
  func_0x00010be0cb60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cca30;
  _objc_alloc();
  func_0x00010c037580();
  if (lVar3 == 1) {
    puVar27 = PTR_PTR_1126cc930;
    _objc_alloc();
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044100();
    _objc_release(puVar6);
  }
  else {
    puVar27 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar7 = lVar1;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar1;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11274d95c;
  _objc_loadWeakRetained();
  lVar14 = lVar2;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274d968;
  _objc_loadWeakRetained();
  lVar17 = lVar3;
  func_0x00010c248ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0();
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(lVar28);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 1;
  uVar13 = param_3;
  func_0x00010c10f7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcf60();
  _objc_release(uVar13);
  if (*(char *)(puStack_80 + 3) == '\x01') {
    puVar19 = PTR_PTR_1126cca28;
    _objc_alloc(PTR_PTR_1126cca28);
    puVar18 = (undefined *)(param_1 + _DAT_11274d95c);
    _objc_loadWeakRetained(puVar18);
    puVar20 = puVar18;
    func_0x00010c0b37c0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = (undefined *)(param_1 + _DAT_11274d950);
    _objc_loadWeakRetained(puVar21);
    puVar22 = puVar21;
    func_0x00010c10f340();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126cc950;
    func_0x00010bf690c0(PTR_PTR_1126cc950);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023cc0(puVar19);
  }
  else {
    puVar18 = puVar4;
    func_0x00010c25df60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126cca00;
    _objc_alloc(PTR_PTR_1126cca00);
    puVar20 = (undefined *)(param_1 + _DAT_11274d95c);
    _objc_loadWeakRetained(puVar20);
    puVar21 = puVar20;
    func_0x00010c0b37c0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = (undefined *)(param_1 + _DAT_11274d950);
    _objc_loadWeakRetained(puVar22);
    puVar23 = puVar22;
    func_0x00010c10f340();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126cc950;
    func_0x00010bf690c0(PTR_PTR_1126cc950);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be88640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126cca08;
    _objc_opt_new();
    func_0x00010c023ca0(puVar19);
    _objc_release(puVar25);
    _objc_release(param_1);
    _objc_release(puVar24);
  }
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar18);
  func_0x00010c1bb880(puVar6);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(puVar6);
  _objc_release(puVar27);
  _objc_release(puVar5);
  _objc_release(lVar26);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 10668c164; end: 10668c173;  */

void FUN_10668c164(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 10668c174; end: 10668c33f; -[SCLensExplorerSessionEntryPoint _refreshHandlerWithStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126cca38;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11274d96c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar2 = lVar10;
  func_0x00010c1176a0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048320();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126cc988;
  _objc_alloc();
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_11274d970;
    _objc_loadWeakRetained(lVar10);
  }
  lVar2 = lVar10;
  func_0x00010c093ba0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024020();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
  puVar5 = PTR_PTR_1126cc958;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar1;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d980();
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_10668c340;
    puVar8 = PTR_PTR_1126ae560;
    puStack_90 = puVar4;
    puStack_88 = puVar6;
    puStack_80 = puVar5;
    puStack_78 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    _objc_initWeak(auStack_98,puVar7);
    uVar9 = *(undefined8 *)(puVar7 + _DAT_11274d94c);
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(puVar8);
    func_0x00010bf9d5c0(uVar9);
    puVar5 = puVar8;
    func_0x00010bfbc3e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10668c340; end: 10668c447; -[SCLensExplorerSessionEntryPoint _exposeBannerProviderPluginScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c340(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274d94c);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10668c448; end: 10668c493;  */

void FUN_10668c448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cca40;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668c494; end: 10668c57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c494(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0d3c80(uVar2);
  _objc_release(uVar2);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1 + _DAT_11274d974;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar5;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar5);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10668c57c; end: 10668c6a3; -[SCLensExplorerSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c57c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d960;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d940);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d978);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10668c6a4;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10668c6a4; end: 10668c70b;  */

void FUN_10668c6a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668c70c; end: 10668c72b; -[SCLensExplorerSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c70c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668c72c; end: 10668c73f; -[SCLensExplorerSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c72c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d958,param_3);
  return;
}



/* Entry: 10668c740; end: 10668c74f; -[SCLensExplorerSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668c740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d97c);
}



/* Entry: 10668c750; end: 10668c78f; -[SCLensExplorerSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d97c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668c790; end: 10668c79f; -[SCLensExplorerSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668c790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d980);
}



/* Entry: 10668c7a0; end: 10668c7df; -[SCLensExplorerSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d980;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668c7e0; end: 10668c7ef; -[SCLensExplorerSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668c7e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d984);
}



/* Entry: 10668c7f0; end: 10668c82f; -[SCLensExplorerSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d984;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668c830; end: 10668c83f; -[SCLensExplorerSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668c830(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d988);
}



/* Entry: 10668c840; end: 10668c87f; -[SCLensExplorerSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d988;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668c880; end: 10668c88f; -[SCLensExplorerSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668c880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d98c);
}



/* Entry: 10668c890; end: 10668c8cf; -[SCLensExplorerSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d98c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668c8d0; end: 10668c8df; -[SCLensExplorerSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668c8d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d990);
}



/* Entry: 10668c8e0; end: 10668c91f; -[SCLensExplorerSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d990;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668c920; end: 10668ca67; -[SCLensExplorerSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668c920(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d990,0);
  _objc_storeStrong(param_1 + _DAT_11274d98c,0);
  _objc_storeStrong(param_1 + _DAT_11274d988,0);
  _objc_storeStrong(param_1 + _DAT_11274d984,0);
  _objc_storeStrong(param_1 + _DAT_11274d980,0);
  _objc_storeStrong(param_1 + _DAT_11274d97c,0);
  _objc_storeStrong(param_1 + _DAT_11274d978,0);
  _objc_storeStrong(param_1 + _DAT_11274d94c,0);
  _objc_destroyWeak(param_1 + _DAT_11274d974);
  _objc_destroyWeak(param_1 + _DAT_11274d970);
  _objc_destroyWeak(param_1 + _DAT_11274d96c);
  _objc_destroyWeak(param_1 + _DAT_11274d968);
  _objc_destroyWeak(param_1 + _DAT_11274d964);
  _objc_destroyWeak(param_1 + _DAT_11274d960);
  _objc_destroyWeak(param_1 + _DAT_11274d95c);
  _objc_destroyWeak(param_1 + _DAT_11274d958);
  _objc_destroyWeak(param_1 + _DAT_11274d954);
  _objc_destroyWeak(param_1 + _DAT_11274d950);
  _objc_storeStrong(param_1 + _DAT_11274d948,0);
  _objc_storeStrong(param_1 + _DAT_11274d944,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d940,0);
  return;
}



/* Entry: 10668ca68; end: 10668d083; -[SCLensExplorerSpectaclesSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668ca68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11274d994;
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  *(long *)(param_1 + lVar23) = lVar4;
  _objc_release(uVar22);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_10668d084();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe0ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar5,param_2,0,puVar6,0);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar3 = lVar2;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar2;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010668d0a8();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11274d9b4;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010c248ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126cc940;
  _objc_opt_new();
  puVar17 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar6,param_2,uVar22,lVar3,lVar4,lVar24,lVar7,lVar8,lVar9,uVar10,lVar23,
                      lVar12,lVar13,lVar14,1);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar23);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar24);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar16 = PTR_PTR_1126cc958;
  _objc_alloc();
  func_0x00010c03d980();
  puVar17 = PTR_PTR_1126b1b50;
  func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  func_0x00010c04a5a0();
  puVar19 = PTR_PTR_1126cca00;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010668d0a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126cc950;
  func_0x00010bf690c0(PTR_PTR_1126cc950);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126cca08;
  _objc_opt_new();
  func_0x00010c023ca0(puVar19,param_2,puVar6,uVar22,lVar3,puVar18,puVar20,puVar16,puVar21,0x84,0,0);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c1bb880(puVar6,param_2,puVar19);
  lVar1 = param_1;
  func_0x00010668d0cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar19,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010668d0cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar19,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar24 = (long)_DAT_11274d998;
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar19;
  _objc_retain(puVar19);
  _objc_release(uVar10);
  lVar4 = param_1;
  FUN_10668d084();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar4);
  uVar10 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010668d0cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfbb120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cac0(uVar10,param_2,lVar1,0);
  _objc_release(puVar19);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar22);
  return;
}



/* Entry: 10668d084; end: 10668d0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d084(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d9a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668d0f0; end: 10668d243; -[SCLensExplorerSpectaclesSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d0f0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = param_1;
  FUN_10668d084();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d998;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24e8;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d99c;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10668d244;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10668d244; end: 10668d24b;  */

void FUN_10668d244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10668d24c; end: 10668d373; -[SCLensExplorerSpectaclesSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d24c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d9b0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d994);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d9b8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10668d374;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10668d374; end: 10668d3db;  */

void FUN_10668d374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668d3dc; end: 10668d3fb; -[SCLensExplorerSpectaclesSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d3dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668d3fc; end: 10668d40f; -[SCLensExplorerSpectaclesSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d9a8,param_3);
  return;
}



/* Entry: 10668d410; end: 10668d41f; -[SCLensExplorerSpectaclesSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668d410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d9bc);
}



/* Entry: 10668d420; end: 10668d45f; -[SCLensExplorerSpectaclesSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d9bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668d460; end: 10668d46f; -[SCLensExplorerSpectaclesSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668d460(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d9c0);
}



/* Entry: 10668d470; end: 10668d4af; -[SCLensExplorerSpectaclesSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d9c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668d4b0; end: 10668d4bf; -[SCLensExplorerSpectaclesSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668d4b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d9c4);
}



/* Entry: 10668d4c0; end: 10668d4ff; -[SCLensExplorerSpectaclesSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d9c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668d500; end: 10668d50f; -[SCLensExplorerSpectaclesSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668d500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d9c8);
}



/* Entry: 10668d510; end: 10668d54f; -[SCLensExplorerSpectaclesSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d9c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668d550; end: 10668d55f; -[SCLensExplorerSpectaclesSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668d550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d9cc);
}



/* Entry: 10668d560; end: 10668d59f; -[SCLensExplorerSpectaclesSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d9cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668d5a0; end: 10668d5af; -[SCLensExplorerSpectaclesSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668d5a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d9d0);
}



/* Entry: 10668d5b0; end: 10668d5ef; -[SCLensExplorerSpectaclesSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d9d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668d5f0; end: 10668d6f7; -[SCLensExplorerSpectaclesSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668d5f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d9d0,0);
  _objc_storeStrong(param_1 + _DAT_11274d9cc,0);
  _objc_storeStrong(param_1 + _DAT_11274d9c8,0);
  _objc_storeStrong(param_1 + _DAT_11274d9c4,0);
  _objc_storeStrong(param_1 + _DAT_11274d9c0,0);
  _objc_storeStrong(param_1 + _DAT_11274d9bc,0);
  _objc_storeStrong(param_1 + _DAT_11274d9b8,0);
  _objc_destroyWeak(param_1 + _DAT_11274d9b4);
  _objc_destroyWeak(param_1 + _DAT_11274d9b0);
  _objc_destroyWeak(param_1 + _DAT_11274d9ac);
  _objc_destroyWeak(param_1 + _DAT_11274d9a8);
  _objc_destroyWeak(param_1 + _DAT_11274d9a4);
  _objc_destroyWeak(param_1 + _DAT_11274d9a0);
  _objc_storeStrong(param_1 + _DAT_11274d99c,0);
  _objc_storeStrong(param_1 + _DAT_11274d998,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d994,0);
  return;
}



/* Entry: 10668d6f8; end: 10668db4b; -[SCLensExplorerFactory initWithDependencyProvider:dataStoreFactory:sectionConfigurationsDataStore:containersProvider:categoriesProviderFactory:queryCoordinatorFactory:categoriesBatchRefreshFactory:notificationPresenter:queryFactory:loggerFactory:collectionCategoryProvider:deeplinkHandlerProvider:lensCreatorPageEnabled:pickingConfiguration:spectaclesLensHandler:bannerProvider:generalStyleOverride:infoCardEnabled:viewCountEnabled:shouldResetDataServices:autoSelectionBehavior:lazyDailyGameBadgeProvider:itemScrollPolicyProvider:] */

undefined8 *
FUN_10668d6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126f24f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = param_15;
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar1[0x10] = param_20;
    *(undefined1 *)(puVar1 + 0x11) = (undefined1)param_21;
    *(undefined1 *)((long)puVar1 + 0x89) = param_21._1_1_;
    *(undefined1 *)((long)puVar1 + 0x8a) = param_21._2_1_;
    _objc_retain(param_23);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_25;
    _objc_release(uVar2);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10668db4c; end: 10668dbb7; -[SCLensExplorerFactory lensExplorerPerformanceLogger] */

void FUN_10668db4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf577e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10668dbb8; end: 10668dc1b; -[SCLensExplorerFactory loggerProvider] */

void FUN_10668dbb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cca48;
    _objc_alloc();
    func_0x00010c0276a0();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10668dc1c; end: 10668dc9f; -[SCLensExplorerFactory createAssetsProvider] */

void FUN_10668dc1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cca50;
  _objc_alloc(PTR_PTR_1126cca50);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c095b60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029380(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10668dca0; end: 10668dca7; -[SCLensExplorerFactory createQueryFactory] */

void FUN_10668dca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 200),PTR_s_target_112678178);
  return;
}



/* Entry: 10668dca8; end: 10668dd8f; -[SCLensExplorerFactory userSettings] */

void FUN_10668dca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    puVar1 = PTR_PTR_1126cca58;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c293260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25df60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfa2b80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    func_0x00010c05cbc0(puVar1,param_2,uVar2,uVar3,uVar4,puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10668dd90; end: 10668dd97; -[SCLensExplorerFactory queryCoordinatorFactory] */

void FUN_10668dd90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb8),PTR_s_target_112678178);
  return;
}



/* Entry: 10668dd98; end: 10668dd9f; -[SCLensExplorerFactory categoriesProviderFactory] */

void FUN_10668dd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_target_112678178);
  return;
}



/* Entry: 10668dda0; end: 10668ddc7; -[SCLensExplorerFactory dependencyProvider] */

void FUN_10668dda0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10668ddc8; end: 10668df43; -[SCLensExplorerFactory actionHandlerFactory] */

void FUN_10668ddc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c093520(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf67f60(uVar1,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(uVar1);
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      func_0x00010c0fb900();
    }
    puVar3 = PTR_PTR_1126cca60;
    _objc_alloc();
    lVar7 = *(long *)(param_1 + 0x68);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    lVar4 = param_1;
    func_0x00010c0b3860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c2939a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023d00(puVar3,param_2,param_1,lVar7 != 0,uVar1,uVar2,lVar4,lVar5,lVar6,
                        *(undefined8 *)(param_1 + 0x80),lVar8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar2);
    lVar8 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10668df44; end: 10668df4b; -[SCLensExplorerFactory dataStoreFactory] */

void FUN_10668df44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_target_112678178);
  return;
}



/* Entry: 10668df4c; end: 10668e033; -[SCLensExplorerFactory selectionTracker] */

void FUN_10668df4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x68);
    func_0x00010c15ab40();
    if ((uVar1 & 1) == 0) {
      puVar5 = PTR_PTR_1126cca70;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar5;
    }
    else {
      puVar5 = PTR_PTR_1126cca68;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c159a80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c095b60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0113e0(puVar5,param_2,uVar2,uVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar5;
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    lVar7 = *(long *)(param_1 + 0x70);
  }
  _objc_retain(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10668e034; end: 10668e03b; -[SCLensExplorerFactory sectionConfigurationsDataStore] */

void FUN_10668e034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa0),PTR_s_target_112678178);
  return;
}



/* Entry: 10668e03c; end: 10668e043; -[SCLensExplorerFactory containersProvider] */

void FUN_10668e03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa8),PTR_s_target_112678178);
  return;
}



/* Entry: 10668e044; end: 10668e293; -[SCLensExplorerFactory sectionFactory] */

void FUN_10668e044(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar16 = *(long *)(param_1 + 0x28);
  if (lVar16 == 0) {
    puVar2 = PTR_PTR_1126cca78;
    _objc_alloc();
    lVar16 = param_1;
    func_0x00010bf6d9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0933e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010beee5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf54aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf64740();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c2939a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c094f00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0xf0);
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x60);
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf61480();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00b800(puVar2,param_2,lVar16,lVar3,lVar4,lVar5,lVar6,lVar7,uVar8,uVar9,uVar15,
                        uVar10,uVar1);
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar16);
    lVar16 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
  return;
}



/* Entry: 10668e294; end: 10668e39b; -[SCLensExplorerFactory lensItemQueryProviderWithCategoryIdentifier:] */

void FUN_10668e294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cca80;
    _objc_alloc(PTR_PTR_1126cca80);
    lVar2 = param_1;
    func_0x00010bf581e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf6d9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1dac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    func_0x00010c03c3a0(puVar1,param_2,lVar2,lVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668e39c; end: 10668e437; -[SCLensExplorerFactory categoriesFactory] */

void FUN_10668e39c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126cca88;
    _objc_alloc();
    lVar4 = param_1;
    func_0x00010bf6d9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ea00(puVar1,param_2,lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10668e438; end: 10668e563; -[SCLensExplorerFactory onboardingManager] */

void FUN_10668e438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) {
    puVar1 = PTR_PTR_1126cca90;
    _objc_alloc();
    lVar8 = param_1;
    func_0x00010c093520(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2939a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf6d9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25df60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf54aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c095b60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040980(puVar1,param_2,lVar8,lVar2,lVar4,lVar5,uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    lVar8 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 10668e564; end: 10668e58b; -[SCLensExplorerFactory lensCollectionCategoryProvider] */

void FUN_10668e564(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10668e58c; end: 10668e5f7; -[SCLensExplorerFactory categoriesBatchRefresher] */

void FUN_10668e58c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf33100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x50);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10668e5f8; end: 10668e6c3; -[SCLensExplorerFactory storyDataSourceFactory] */

void FUN_10668e5f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126cca98;
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010bf64740(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c11d320(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf581e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0092e0(puVar1,param_2,lVar5,lVar2,lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar1;
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 0x58);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10668e6c4; end: 10668e757; -[SCLensExplorerFactory pageProviderWithUIConfig:] */

void FUN_10668e6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ccaa0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c095b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d20(puVar1,param_2,param_1,param_3,uVar3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668e758; end: 10668e873; -[SCLensExplorerFactory reset] */

void FUN_10668e758(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  func_0x00010c138fa0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x8a) == '\x01') {
    lVar3 = param_1;
    func_0x00010c11d320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf33160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf64740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(lVar3);
    func_0x00010c1556e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10668e874; end: 10668e883; -[SCLensExplorerFactory resetLoggers] */

void FUN_10668e874(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668e884; end: 10668e89b; -[SCLensExplorerFactory lensExplorerRouter] */

void FUN_10668e884(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668e89c; end: 10668e8a7; -[SCLensExplorerFactory setLensExplorerRouter:] */

void FUN_10668e89c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 10668e8a8; end: 10668e8af; -[SCLensExplorerFactory notificationPresenter] */

undefined8 FUN_10668e8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10668e8b0; end: 10668e8b7; -[SCLensExplorerFactory bannerProvider] */

undefined8 FUN_10668e8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10668e8b8; end: 10668e8bf; -[SCLensExplorerFactory itemScrollPolicyProvider] */

undefined8 FUN_10668e8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10668e8c0; end: 10668e8ef; -[SCLensExplorerFactory setItemScrollPolicyProvider:] */

void FUN_10668e8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668e8f0; end: 10668ea6b; -[SCLensExplorerFactory .cxx_destruct] */

void FUN_10668e8f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
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
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 10668ea6c; end: 10668eaf7; -[SCLensExplorerPickingConfiguration initWithSelectionTrackingEnabled:selectedLensId:pickedLensSource:] */

undefined1 *
FUN_10668ea6c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f24f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10668eaf8; end: 10668eaff; -[SCLensExplorerPickingConfiguration selectionTrackingEnabled] */

undefined1 FUN_10668eaf8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10668eb00; end: 10668eb07; -[SCLensExplorerPickingConfiguration selectedLensId] */

undefined8 FUN_10668eb00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10668eb08; end: 10668eb0f; -[SCLensExplorerPickingConfiguration pickedLensSource] */

undefined8 FUN_10668eb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10668eb10; end: 10668eb1b; -[SCLensExplorerPickingConfiguration .cxx_destruct] */

void FUN_10668eb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10668eb1c; end: 10668eecf; -[SCLensExplorerSectionFactory initWithDependencyProvider:lensExplorerPerformanceLogger:actionHandlerFactory:lensExplorerAssetsProvider:dataStoreFactory:userSettings:lensPerformerProvider:lensMediaDownloaderFactory:lazyDailyGameBadgeProvider:storiesThumbnailCoordinator:lensCreatorPageEnabled:studySettingsProvider:bannerProvider:customLayoutBuilder:selectionTracker:generalStyleOverride:infoCardEnabled:viewCountEnabled:] */

undefined8 *
FUN_10668eb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f2500;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = param_13;
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    puVar1[0x10] = param_19;
    *(undefined1 *)(puVar1 + 0x11) = (undefined1)param_20;
    *(undefined1 *)((long)puVar1 + 0x89) = param_20._1_1_;
    _objc_release(param_10);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 10668eed0; end: 10668ef1f;  */

void FUN_10668eed0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf570a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10668ef20; end: 10668fa6b; -[SCLensExplorerSectionFactory lensSectionWithConfiguration:mediator:] */

void FUN_10668ef20(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7,long param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  float fVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long lStack_230;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  char *pcStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = (undefined *)0x0;
  if ((param_7 == (undefined *)0x0) || (param_8 == 0)) goto LAB_10668f094;
  puVar3 = param_7;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    func_0x00010be0e800(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    goto LAB_10668f094;
  }
  puVar3 = param_7;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    func_0x00010be0e820(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    goto LAB_10668f094;
  }
  puVar3 = param_7;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    func_0x00010bdf6160(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    goto LAB_10668f094;
  }
  puVar3 = param_7;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    func_0x00010be86e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    goto LAB_10668f094;
  }
  lVar5 = param_8;
  func_0x00010c0b39a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c08fca0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = *(long *)(param_5 + 0x68);
  puVar3 = param_7;
  func_0x00010c155f60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf12600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lVar19 == 0) {
    puVar3 = param_7;
    func_0x00010c130180();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c097520();
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010c130180();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2480c0();
    _objc_release(puVar3);
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uVar21 = 0x4010000000;
    uStack_b8 = 0x4010000000;
    pcStack_b0 = "";
    puVar3 = PTR_PTR_1126cc910;
    func_0x00010c093ee0(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33520();
    uStack_a8 = uVar21;
    dStack_a0 = param_2;
    dStack_98 = param_3;
    uStack_90 = param_4;
    _objc_release(puVar3);
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uVar21 = 0x2020000000;
    uStack_d8 = 0x2020000000;
    puVar3 = PTR_PTR_1126cc910;
    func_0x00010c093ee0(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084b20();
    _objc_release(puVar3);
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    dVar22 = 1.02270250269256e-312;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_10668fa6c;
    uStack_f8 = 0x10668fa7c;
    puVar3 = PTR_PTR_1126ccaa8;
    uStack_d0 = uVar21;
    func_0x00010bf69a80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_7;
    puStack_f0 = puVar3;
    func_0x00010c130180(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0ed100();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_10668fa84;
    puStack_140 = &UNK_110932c18;
    puStack_130 = &uStack_118;
    _objc_retain(param_7);
    puStack_170 = &uStack_e8;
    puStack_168 = &uStack_c8;
    puStack_198 = puVar3;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_10668fbc8;
    puStack_180 = &UNK_110932c48;
    puStack_178 = &uStack_118;
    puStack_160 = puVar7;
    puStack_138 = param_7;
    puStack_128 = puStack_170;
    puStack_120 = puStack_168;
    func_0x00010c0be340(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar7 = param_7;
    func_0x00010bf61c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bfe42e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x00010bfe42e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar20 = SUB84(dVar22,0);
      _objc_release(puVar3);
      puVar2 = puStack_c0;
      puStack_c0[5] = (double)fVar20;
      puVar2[7] = (double)fVar20;
    }
    puVar3 = puVar7;
    func_0x00010bfe43a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x00010bfe43a0(puVar7);
      fVar20 = SUB84(dVar22,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar22 = (double)fVar20;
      puStack_e0[3] = dVar22;
      _objc_release(puVar3);
    }
    puVar3 = puVar7;
    func_0x00010c299020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x00010c299020(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar20 = SUB84(dVar22,0);
      _objc_release(puVar3);
      puStack_c0[4] = (double)fVar20;
      puStack_c0[6] = (double)fVar20;
    }
    puVar3 = param_7;
    func_0x00010c130180();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf4dac0();
    _objc_release(puVar3);
    if (puVar8 == (undefined *)0x2) {
      puVar3 = PTR_PTR_1126cc910;
      func_0x00010bfa3860(PTR_PTR_1126cc910);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0913a0();
      dVar23 = dVar22;
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126cc910;
      func_0x00010c093ee0(PTR_PTR_1126cc910);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24d800();
      dVar24 = dVar23;
      _objc_release(puVar3);
      puVar3 = param_7;
      func_0x00010c130180(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0852a0();
      puStack_e0[3] = dVar23 * dVar24;
      dVar23 = dVar23 * dVar24;
      dVar24 = dVar22;
LAB_10668f524:
      dVar22 = dVar23;
      _objc_release(puVar3);
    }
    else {
      if (puVar8 == (undefined *)0x1) {
        puVar3 = PTR_PTR_1126cc910;
        func_0x00010bfa3860(PTR_PTR_1126cc910);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0944a0();
        dVar23 = dVar22;
        dVar24 = dVar22;
        goto LAB_10668f524;
      }
      if (puVar8 == (undefined *)0x0) {
        dVar22 = (double)puStack_c0[5];
        param_2 = (double)puStack_e0[3];
        func_0x00010c096080(PTR_PTR_1126cc910);
        dVar24 = dVar22;
      }
      else {
        dVar24 = *(double *)PTR__CGSizeZero_110347620;
        param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      }
    }
    if (puVar4 == (undefined *)0x2) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar23 = (double)puStack_c0[5];
      dVar24 = (double)puStack_c0[7];
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ccab0;
      puVar4 = param_7;
      func_0x00010c130180(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c097500();
      dVar24 = (param_3 - dVar23) - dVar24;
      func_0x00010c084ac0(puVar3);
      _objc_release(puVar4);
      param_2 = dVar22;
    }
    puStack_1c0 = &uStack_1c8;
    uStack_1c8 = 0;
    uStack_1b8 = 0x3010000000;
    pcStack_1b0 = "";
    puVar3 = param_7;
    dStack_1a8 = dVar24;
    dStack_1a0 = param_2;
    func_0x00010c130180(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0ed100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be340();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ccab8;
    _objc_alloc();
    func_0x00010c021340();
    puVar3 = param_7;
    func_0x00010bf34000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c233a80();
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010c155f60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf46a00(dVar24,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar9 = puVar7;
    func_0x00010c299060();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ccac0;
    _objc_alloc();
    func_0x00010c02c1e0(puStack_e0[3],puStack_c0[4],puStack_c0[5],puStack_c0[6],puStack_c0[7],
                        puStack_1c0[4],puStack_1c0[5]);
    puVar3 = param_7;
    func_0x00010c155f60(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_5;
    func_0x00010be9cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar12 = param_5;
    func_0x00010be4bba0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_5;
    func_0x00010be36f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_230 = *(long *)(param_5 + 0x28);
    _objc_retain(lStack_230);
    lVar14 = lStack_230;
    func_0x00010010fab4(lStack_230,PTR_DAT_1126a55a0);
    lVar1 = lStack_230;
    if ((int)lVar14 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lStack_230);
    if (lVar1 == 0) {
      lStack_230 = *(long *)(param_5 + 0x28);
      puVar3 = param_7;
      func_0x00010c155f60(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c093d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      func_0x00010c093d40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126ccac8;
    _objc_alloc();
    uVar21 = *(undefined8 *)(param_5 + 8);
    func_0x00010bf1dac0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_5;
    func_0x00010bdd1e40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_5 + 8);
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_5 + 8);
    func_0x00010bf8b960();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + 8);
    func_0x00010bf8b940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a220(puVar3);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar21);
    _objc_release(lVar1);
    _objc_release(lStack_230);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_1c8,8);
    _objc_release(puVar7);
    _objc_release(puStack_138);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(puStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    __Block_object_dispose(&uStack_c8,8);
  }
  else {
    func_0x00010bdd2980(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
  }
  _objc_release(lVar19);
  _objc_release(uVar6);
  _objc_release(lVar5);
LAB_10668f094:
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10668fa6c; end: 10668fa83;  */

void FUN_10668fa6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10668fa84; end: 10668fbc7;  */

void FUN_10668fa84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ccaa8;
  func_0x00010c0edc00(PTR_PTR_1126ccaa8,param_6,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_5 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_5 + 0x20);
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4dac0();
  _objc_release(lVar2);
  if (lVar4 != 2) {
    if (lVar4 == 1) {
      puVar1 = PTR_PTR_1126cc910;
      func_0x00010c093ee0(PTR_PTR_1126cc910);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24d800();
      *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x18) = param_1;
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126cc910;
      func_0x00010c093ee0(PTR_PTR_1126cc910);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1520();
      goto LAB_10668fb94;
    }
    if (lVar4 != 0) {
      return;
    }
  }
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4280();
  *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x18) = param_1;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33520();
LAB_10668fb94:
  lVar4 = *(long *)(*(long *)(param_5 + 0x38) + 8);
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  *(undefined8 *)(lVar4 + 0x28) = param_2;
  *(undefined8 *)(lVar4 + 0x30) = param_3;
  *(undefined8 *)(lVar4 + 0x38) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10668fbc8; end: 10668fc9f;  */

void FUN_10668fbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ccaa8;
  func_0x00010bf69a80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_5 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c084b60(PTR_PTR_1126cc910,param_6,*(undefined8 *)(param_5 + 0x38));
  *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x18) = param_1;
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33520();
  lVar3 = *(long *)(*(long *)(param_5 + 0x30) + 8);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  *(undefined8 *)(lVar3 + 0x30) = param_3;
  *(undefined8 *)(lVar3 + 0x38) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10668fca0; end: 10668ff13; -[SCLensExplorerSectionFactory _favoritesOnboardingSectionWithMediator:configuration:] */

void FUN_10668fca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  iVar1 = (int)*(undefined8 *)(param_5 + 0x30);
  func_0x00010c2337e0();
  if (iVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    func_0x00010c126460(*(undefined8 *)(param_5 + 0x30));
    puVar9 = PTR_PTR_1126cc910;
    func_0x00010c093ee0(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1520();
    uVar8 = param_1;
    uVar10 = param_2;
    _objc_release(puVar9);
    uVar2 = param_7;
    func_0x00010c0b39a0(param_7,param_6,param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c08fca0(uVar3,param_6,param_8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ccad0;
    _objc_alloc(PTR_PTR_1126ccad0);
    func_0x00010bff04e0();
    puVar9 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1480();
    _objc_release(puVar9);
    puVar5 = PTR_PTR_1126ccac0;
    _objc_alloc(PTR_PTR_1126ccac0);
    puVar9 = PTR_PTR_1126ccaa8;
    func_0x00010bf69a80(PTR_PTR_1126ccaa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c1e0(0,param_1,param_2,param_3,param_4,uVar8,uVar10,puVar5,param_6,puVar9,0,0);
    _objc_release(puVar9);
    puVar6 = PTR_PTR_1126ccad8;
    _objc_alloc(PTR_PTR_1126ccad8);
    func_0x00010c05eee0();
    puVar7 = PTR_PTR_1126ccae0;
    _objc_alloc(PTR_PTR_1126ccae0);
    func_0x00010c0319a0();
    puVar9 = PTR_PTR_1126ccae8;
    _objc_alloc(PTR_PTR_1126ccae8);
    uVar8 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c093d60(uVar8,param_6,&PTR____CFConstantStringClassReference_110f30bd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c042e40(puVar9,param_6,param_8,puVar5,puVar7,uVar8,puVar4,puVar6);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10668ff14; end: 1066900f7; -[SCLensExplorerSectionFactory _favoritesPageOnboardingWithConfiguration:] */

void FUN_10668ff14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ccaf0;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010bff4740();
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa14e0();
  uVar5 = param_1;
  uVar7 = param_2;
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1520();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ccac0;
  _objc_alloc(PTR_PTR_1126ccac0);
  puVar3 = PTR_PTR_1126ccaa8;
  func_0x00010bf69a80(PTR_PTR_1126ccaa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c1e0(0,uVar5,uVar7,param_3,param_4,param_1,param_2,puVar2,param_6,puVar3,0,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccae8;
  _objc_alloc(PTR_PTR_1126ccae8);
  puVar4 = PTR_PTR_1126ccaf8;
  _objc_opt_new(PTR_PTR_1126ccaf8);
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c093d60(uVar5,param_6,&PTR____CFConstantStringClassReference_110f30bf8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ccb00;
  _objc_opt_new(PTR_PTR_1126ccb00);
  func_0x00010c042e40(puVar3,param_6,param_7,puVar2,puVar4,uVar5,puVar1,puVar6);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066900f8; end: 1066902db; -[SCLensExplorerSectionFactory _recentPageOnboardingWithConfiguration:] */

void FUN_1066900f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ccb08;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010bff4740();
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1224e0();
  uVar5 = param_1;
  uVar7 = param_2;
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1520();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ccac0;
  _objc_alloc(PTR_PTR_1126ccac0);
  puVar3 = PTR_PTR_1126ccaa8;
  func_0x00010bf69a80(PTR_PTR_1126ccaa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c1e0(0,uVar5,uVar7,param_3,param_4,param_1,param_2,puVar2,param_6,puVar3,0,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccae8;
  _objc_alloc(PTR_PTR_1126ccae8);
  puVar4 = PTR_PTR_1126ccaf8;
  _objc_opt_new(PTR_PTR_1126ccaf8);
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c093d60(uVar5,param_6,&PTR____CFConstantStringClassReference_110e79d38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ccb00;
  _objc_opt_new(PTR_PTR_1126ccb00);
  func_0x00010c042e40(puVar3,param_6,param_7,puVar2,puVar4,uVar5,puVar1,puVar6);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066902dc; end: 1066904cb; -[SCLensExplorerSectionFactory _bannerSectionWithConfiguration:bannerModel:actionHandler:] */

void FUN_1066902dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ccb10;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  uVar6 = *(undefined8 *)(param_5 + 0x78);
  uVar2 = param_7;
  func_0x00010c155f60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff69c0(puVar1,param_6,param_8,uVar6,param_9,uVar2);
  _objc_release(param_9);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33520();
  uVar2 = param_2;
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccac0;
  _objc_alloc(PTR_PTR_1126ccac0);
  puVar4 = PTR_PTR_1126ccaa8;
  func_0x00010bf69a80(PTR_PTR_1126ccaa8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0913a0();
  func_0x00010c02c1e0(0,0,param_2,0,param_4,param_1,uVar2,puVar3,param_6,puVar4,0,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ccb18;
  _objc_alloc(PTR_PTR_1126ccb18);
  puVar5 = PTR_PTR_1126ccaf8;
  _objc_opt_new(PTR_PTR_1126ccaf8);
  uVar2 = param_8;
  func_0x00010c083820(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c042e20(puVar4,param_6,param_7,puVar3,puVar5,puVar1,uVar2);
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066904cc; end: 106690737; -[SCLensExplorerSectionFactory _lensSectionHeaderProviderWithConfiguration:actionHandler:] */

void FUN_1066904cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfdf5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ccb20;
    _objc_opt_new(PTR_PTR_1126ccb20);
  }
  else {
    lVar1 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e82e38);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfdf5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf68280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    lVar3 = param_3;
    lVar7 = param_3;
    if (lVar4 == 0) {
      puVar6 = PTR_PTR_1126ccb38;
      _objc_alloc(PTR_PTR_1126ccb38);
      func_0x00010bfdf5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdf5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0436a0(puVar6,param_2,lVar4,lVar8,puVar2,*(undefined8 *)(param_1 + 0x80));
    }
    else {
      puVar6 = PTR_PTR_1126ccb28;
      _objc_alloc(PTR_PTR_1126ccb28);
      func_0x00010bfdf5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdf5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ccb30;
      func_0x00010c29cd00(PTR_PTR_1126ccb30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0436c0(puVar6,param_2,lVar4,lVar8,puVar5,puVar2,param_3,param_4,
                          *(undefined8 *)(param_1 + 0x80));
      _objc_release(puVar5);
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106690738; end: 106690b13; -[SCLensExplorerSectionFactory _creatorsSectionWithMediator:configuration:horizontalMode:] */

void FUN_106690738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126cc910;
  _objc_retain(&PTR____CFConstantStringClassReference_110f307d8);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bfa3860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b260();
  uVar14 = param_1;
  uVar15 = param_2;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b240();
  uVar8 = uVar14;
  uVar7 = uVar15;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ccaa8;
  func_0x00010bf69a80();
  _objc_retainAutoreleasedReturnValue();
  if (param_9 == 0) {
    uVar13 = 3;
    uVar9 = uVar8;
    uVar11 = uVar7;
  }
  else {
    puVar2 = PTR_PTR_1126ccaa8;
    func_0x00010c0edc00(PTR_PTR_1126ccaa8,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43220();
    uVar14 = uVar8;
    uVar15 = uVar7;
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43200();
    uVar9 = uVar14;
    uVar11 = uVar15;
    _objc_release(puVar1);
    uVar13 = 2;
    puVar1 = puVar2;
    param_1 = uVar8;
    param_2 = uVar7;
  }
  puVar2 = PTR_PTR_1126ccac0;
  _objc_alloc();
  puVar3 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b500();
  puVar4 = PTR_PTR_1126cc910;
  uVar8 = uVar9;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bde0();
  func_0x00010c02c1e0(uVar9,uVar8,uVar11,param_3,param_4,param_1,param_2,puVar2,param_6,puVar1,0,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = param_5;
  func_0x00010be9cf80(param_5,param_6,&PTR____CFConstantStringClassReference_110f307d8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010be36f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccb40;
  _objc_alloc();
  func_0x00010bfeeda0();
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c093d60(uVar7,param_6,&PTR____CFConstantStringClassReference_110f307d8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010c0b39a0(param_7,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c08fca0(uVar9,param_6,param_8,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010be4bba0(param_5,param_6,param_8,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccb48;
  _objc_alloc();
  uVar11 = *(undefined8 *)(param_5 + 8);
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f307d8);
  lVar12 = param_5;
  func_0x00010bdd1e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042e00(uVar14,uVar15,param_1,param_2,puVar4,param_6,param_8,puVar2,uVar13,param_7,
                      lVar10,uVar9,uVar7,lVar6,puVar3,uVar11,lVar12,lVar5,
                      *(undefined8 *)(param_5 + 0x80));
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106690b14; end: 106690b5b; -[SCLensExplorerSectionFactory _sectionPerformerForIdentifier:] */

void FUN_106690b14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106690b5c; end: 106690cb3; -[SCLensExplorerSectionFactory _imageDataStore] */

void FUN_106690b5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c0c42a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdef500(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccb50;
  _objc_opt_new(PTR_PTR_1126ccb50);
  puVar3 = PTR_PTR_1126ccb58;
  _objc_alloc(PTR_PTR_1126ccb58);
  func_0x00010c01d1c0();
  puVar4 = PTR_PTR_1126ccb60;
  _objc_alloc(PTR_PTR_1126ccb60);
  func_0x00010c01c6a0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccb68;
  _objc_alloc(PTR_PTR_1126ccb68);
  func_0x00010c01c700(0x4008000000000000);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ccb70;
  _objc_alloc(PTR_PTR_1126ccb70);
  func_0x00010c01c6e0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccb78;
  _objc_alloc(PTR_PTR_1126ccb78);
  func_0x00010c01c6e0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ccb80;
  _objc_alloc(PTR_PTR_1126ccb80);
  func_0x00010bff6d00(0x3ff0000000000000);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106690cb4; end: 106690ceb; -[SCLensExplorerSectionFactory _createLensExplorerMediaDownloader] */

void FUN_106690cb4(void)

{
  _objc_alloc(PTR_PTR_1126ccb88);
  func_0x00010c029320(0x4008000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


