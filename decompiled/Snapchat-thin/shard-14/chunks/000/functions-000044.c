/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af543d0; end: 10af54457;  */

void FUN_10af543d0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af54458; end: 10af544e3;  */

void FUN_10af54458(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10af544e4; end: 10af54507; +[SCFideliusFriendMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_10af544e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10af54500;
  auVar1._0_8_ = 0x10af544f8;
  return auVar1;
}



/* Entry: 10af54508; end: 10af545d3;  */

undefined1 * FUN_10af54508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112702d58;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10af545d4; end: 10af5492b;  */

void FUN_10af545d4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar5,&UNK_10f6e79ed);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2923e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar5,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar5;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar5;
            _sqlite3_column_int64(puVar5,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c04c0);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_10af5487c;
            puVar5 = PTR_PTR_1126deb90;
            _objc_alloc(PTR_PTR_1126deb90);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf71280(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10af54508(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_10af546bc;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c04c0);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126deb90;
        _objc_alloc(PTR_PTR_1126deb90);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf71280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10af54508(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_10af546bc:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10af54884;
      }
LAB_10af5487c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10af54884:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10af5492c; end: 10af5499f;  */

void FUN_10af5492c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10af545d4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10af549a0; end: 10af54bb3;  */

void FUN_10af549a0(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126deb90;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_10af545d4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126deb90;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126deb90;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf71280(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10af54508(puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar4 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bf71280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10af54bb4; end: 10af54c13;  */

void FUN_10af54bb4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c04c0;
    _objc_alloc(PTR_PTR_1126c04c0);
    func_0x00010c05b060();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af54c14; end: 10af54c43; -[SCFideliusFriendMetadataChangeRequest .cxx_destruct] */

void FUN_10af54c14(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af54c44; end: 10af54c4f; -[SCFideliusFriendMetadataChangeRequest table] */

undefined * FUN_10af54c44(void)

{
  return &UNK_10f6e79d0;
}



/* Entry: 10af54c50; end: 10af54c97; -[SCFideliusFriendMetadataChangeRequest createTableWithSQLite:] */

void FUN_10af54c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10e53a643,0x8a,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10af54c98; end: 10af5501f; -[SCFideliusFriendMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10af54c98(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10af54bb4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10af55020(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f6e7a6f);
    if (lVar6 == 0) goto LAB_10af54fbc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10af54fbc;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c04c0);
    func_0x00010c21c9a0(puVar7);
LAB_10af54fa4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f6e7a37);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c04c0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10af54fc8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10af54fc8;
    }
    FUN_10af54bb4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10af55020(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f6e7ab4);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c04c0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10af54fa4;
      }
    }
LAB_10af54fbc:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10af54fc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10af55020; end: 10af554f3;  */

ulong FUN_10af55020(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110c98a28;
  pcStack_108 = FUN_10af554f4;
  pppuStack_f8 = &ppuStack_110;
  uVar9 = param_2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar9);
  uVar5 = uVar9;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar16 = (undefined4 *)0x0;
  puVar18 = (undefined4 *)0x0;
  if (uVar5 != 0) {
    puVar12 = (undefined4 *)0x0;
    do {
      uVar13 = 0;
      puVar17 = puVar16;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(uVar9);
        }
        uVar14 = *(undefined8 *)(uVar13 * 8);
        _objc_retain(uVar14);
        _objc_retain(uVar14);
        uStack_118 = uVar14;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10af55408;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar18 < puVar12) {
          *puVar18 = (int)pppuVar6;
          puVar16 = puVar17;
        }
        else {
          lVar15 = (long)puVar18 - (long)puVar17;
          uVar8 = (lVar15 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_10af55714();
LAB_10af55408:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10af5540c);
            (*pcVar4)();
          }
          uVar11 = (long)puVar12 - (long)puVar17 >> 1;
          if (uVar11 <= uVar8) {
            uVar11 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar12 - (long)puVar17)) {
            uVar11 = 0x3fffffffffffffff;
          }
          if (uVar11 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10af55408;
          }
          lVar7 = uVar11 << 2;
          __Znwm();
          puVar18 = (undefined4 *)(lVar7 + lVar15);
          puVar12 = (undefined4 *)(lVar7 + uVar11 * 4);
          puVar16 = puVar18 + -(lVar15 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar16,puVar17,lVar15);
          if (puVar17 != (undefined4 *)0x0) {
            __ZdlPv(puVar17);
          }
        }
        puVar18 = puVar18 + 1;
        _objc_release(uVar14);
        uVar13 = uVar13 + 1;
        puVar17 = puVar16;
      } while (uVar5 != uVar13);
      uVar5 = uVar9;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar9);
  _objc_release(uVar9);
  _objc_release(uVar9);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar10 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10af55260;
    lVar10 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar10))();
LAB_10af55260:
  uVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_10af555e4(param_1,uVar5);
  uVar9 = (long)puVar18 - (long)puVar16;
  puVar12 = (undefined4 *)&UNK_10e53a886;
  if (uVar9 != 0) {
    puVar12 = puVar16;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,uVar9,4);
  func_0x000107c27dc8(param_1,uVar9,4);
  if (puVar16 != puVar18) {
    lVar10 = (long)uVar9 >> 2;
    do {
      iVar3 = puVar12[lVar10 + -1];
      func_0x000107c27db4(param_1,4);
      func_0x000107c27dcc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar8 = param_1;
  func_0x000107c27dcc(param_1,uVar9 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  if ((int)uVar8 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,6,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar8) + 4,0);
  }
  func_0x000107c27ddc(param_1,4,uVar13 & 0xffffffff);
  uVar9 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x000107c27dc0(param_1,uVar9);
  _objc_release(uVar5);
  if (puVar16 != (undefined4 *)0x0) {
    __ZdlPv(puVar16);
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puVar16 != (undefined4 *)0x0) {
      __ZdlPv(puVar16);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar9);
    uVar13 = uVar9;
    func_0x00010c0ee500(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_10af555e4(uVar5,uVar13);
    uVar11 = uVar9;
    func_0x00010c298be0(uVar9);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x000107c27db0(uVar5,6,uVar11,0);
    func_0x000107c27ddc(uVar5,4,uVar8 & 0xffffffff);
    func_0x000107c27dc0(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar13);
    _objc_release(uVar9);
    return uVar5;
  }
  return param_1;
}



/* Entry: 10af554f4; end: 10af555e3;  */

ulong FUN_10af554f4(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0ee500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10af555e4(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c298be0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10af555e4; end: 10af55713;  */

undefined8 FUN_10af555e4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10af556c4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10af556c4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10af55684;
    param_1 = 0;
  }
  else {
LAB_10af55684:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c27df0(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_10af556c4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10af55714; end: 10af55727;  */

void FUN_10af55714(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10af55728; end: 10af5572f;  */

void FUN_10af55728(void)

{
  return;
}



/* Entry: 10af55730; end: 10af55763;  */

void FUN_10af55730(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c98a28;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10af55764; end: 10af557a3;  */

void FUN_10af55764(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c98a28;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10af557a4; end: 10af557df;  */

long FUN_10af557a4(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c98a98);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10af557e0; end: 10af557eb;  */

undefined ** FUN_10af557e0(void)

{
  return &PTR_DAT_110c98a98;
}



/* Entry: 10af557ec; end: 10af55853; +[SCAtlasGetOutgoingFriendsRequest descriptor] */

void FUN_10af557ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c21e50,
                        &PTR____CFConstantStringClassReference_110f3a578,&PTR_DAT_1133335f0,
                        &PTR_s_userId_113333608,2,0x18,0x1c);
    puRam00000001137f0070 = puVar1;
  }
  return;
}



/* Entry: 10af55854; end: 10af558bb; +[SCAtlasGetOutgoingFriendsResponse descriptor] */

void FUN_10af55854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c21ea0,
                        &PTR____CFConstantStringClassReference_110f3a598,&PTR_DAT_1133335f0,
                        &PTR_DAT_113333688,3,0x20,0x1c);
    puRam00000001137f0078 = puVar1;
  }
  return;
}



/* Entry: 10af558bc; end: 10af55937; +[SCAtlasOutgoingFriend descriptor] */

undefined * FUN_10af558bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c21ef0,
                        &PTR____CFConstantStringClassReference_110f3a5b8,&PTR_DAT_1133335f0,
                        &PTR_s_userId_1133336e8,0x26,0xe0,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f0080 = puVar1;
  }
  return puRam00000001137f0080;
}



/* Entry: 10af55938; end: 10af559b3; +[SCAtlasOutgoingFriend_FideliusDeviceInfo descriptor] */

undefined * FUN_10af55938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c21f40,
                        &PTR____CFConstantStringClassReference_110f3a5d8,&PTR_DAT_1133335f0,
                        &PTR_DAT_113333648,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f0088 = puVar1;
  }
  return puRam00000001137f0088;
}



/* Entry: 10af559b4; end: 10af55a1b; +[SCAtlasFriendmoji descriptor] */

void FUN_10af559b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c21fe0,
                        &PTR____CFConstantStringClassReference_110dc5a18,&PTR_DAT_113333ba8,
                        &PTR_s_categoryName_113333bc0,2,0x18,0x1c);
    puRam00000001137f0090 = puVar1;
  }
  return;
}



/* Entry: 10af55a1c; end: 10af55aff; +[SCAtlasExtraFriendmoji descriptor] */

void FUN_10af55a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22030,
                        &PTR____CFConstantStringClassReference_110f3a5f8,&PTR_DAT_113333ba8,
                        &PTR_s_categoryName_113333c00,2,0x18,0x1c);
    puRam00000001137f0098 = puVar1;
  }
  return;
}



/* Entry: 10af55b00; end: 10af55b0b;  */

bool FUN_10af55b00(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af55b0c; end: 10af55b73; +[SCAtlasEmojiInfo descriptor] */

void FUN_10af55b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c220d0,
                        &PTR____CFConstantStringClassReference_110ef0798,&PTR_DAT_113333c40,
                        &PTR_DAT_113333c58,8,0x38,0x1c);
    puRam00000001137f00a8 = puVar1;
  }
  return;
}



/* Entry: 10af55b74; end: 10af55bdb; +[SCAtlasSnapProInfo descriptor] */

void FUN_10af55b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22170,
                        &PTR____CFConstantStringClassReference_110f3a638,&PTR_DAT_113333d58,
                        &PTR_DAT_113333db0,6,0x28,0x1c);
    puRam00000001137f00b0 = puVar1;
  }
  return;
}



/* Entry: 10af55bdc; end: 10af55c43; +[SCAtlasSnapProInfoLogo descriptor] */

void FUN_10af55bdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c221c0,
                        &PTR____CFConstantStringClassReference_110f3a658,&PTR_DAT_113333d58,
                        &PTR_DAT_113333d70,2,0x10,0x1c);
    puRam00000001137f00b8 = puVar1;
  }
  return;
}



/* Entry: 10af55c44; end: 10af55cab; +[SCBitmojiAvatarMetadata descriptor] */

void FUN_10af55c44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22260,
                        &PTR____CFConstantStringClassReference_110f3a678,
                        &PTR_s_snapchat_bitmoji_profile_v1_113333e70,&PTR_DAT_113333e88,2,0x10,0x1c)
    ;
    puRam00000001137f00c0 = puVar1;
  }
  return;
}



/* Entry: 10af55cac; end: 10af55d37; +[SCBitmojiGarment descriptor] */

undefined * FUN_10af55cac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22300,
                        &PTR____CFConstantStringClassReference_110f3a698,&PTR_DAT_113334810,
                        &PTR_s_top_113335188,0xc,0x68,0x1c);
    func_0x00010c229040();
    puRam00000001137f00c8 = puVar1;
  }
  return puRam00000001137f00c8;
}



/* Entry: 10af55d38; end: 10af55da3; +[SCBitmojiOutfit descriptor] */

void FUN_10af55d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22350,
                        &PTR____CFConstantStringClassReference_110f3a6b8,&PTR_DAT_113334810,
                        &PTR_DAT_113333ec8,0x4a,0x134,0x1c);
    puRam00000001137f00d0 = puVar1;
  }
  return;
}



/* Entry: 10af55da4; end: 10af55e0b; +[SCBitmojiTop descriptor] */

void FUN_10af55da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c223a0,
                        &PTR____CFConstantStringClassReference_110ed4458,&PTR_DAT_113334810,
                        &PTR_s_top_113334948,0xb,0x30,0x1c);
    puRam00000001137f00d8 = puVar1;
  }
  return;
}



/* Entry: 10af55e0c; end: 10af55e73; +[SCBitmojiBottom descriptor] */

void FUN_10af55e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c223f0,
                        &PTR____CFConstantStringClassReference_110ed4498,&PTR_DAT_113334810,
                        &PTR_s_bottom_113334aa8,0xb,0x30,0x1c);
    puRam00000001137f00e0 = puVar1;
  }
  return;
}



/* Entry: 10af55e74; end: 10af55edb; +[SCBitmojiFootwear descriptor] */

void FUN_10af55e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22440,
                        &PTR____CFConstantStringClassReference_110f3a6d8,&PTR_DAT_113334810,
                        &PTR_DAT_113334c08,0xb,0x30,0x1c);
    puRam00000001137f00e8 = puVar1;
  }
  return;
}



/* Entry: 10af55edc; end: 10af55f43; +[SCBitmojiSock descriptor] */

void FUN_10af55edc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22490,
                        &PTR____CFConstantStringClassReference_110f3a6f8,&PTR_DAT_113334810,
                        &PTR_DAT_1133348a8,5,0x18,0x1c);
    puRam00000001137f00f0 = puVar1;
  }
  return;
}



/* Entry: 10af55f44; end: 10af55fab; +[SCBitmojiOuterwear descriptor] */

void FUN_10af55f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f00f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c224e0,
                        &PTR____CFConstantStringClassReference_110f3a718,&PTR_DAT_113334810,
                        &PTR_DAT_113334d68,0xb,0x30,0x1c);
    puRam00000001137f00f8 = puVar1;
  }
  return;
}



/* Entry: 10af55fac; end: 10af56013; +[SCBitmojiOnePiece descriptor] */

void FUN_10af55fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22530,
                        &PTR____CFConstantStringClassReference_110f3a738,&PTR_DAT_113334810,
                        &PTR_s_top_113335308,0x16,0x5c,0x1c);
    puRam00000001137f0100 = puVar1;
  }
  return;
}



/* Entry: 10af56014; end: 10af5607b; +[SCBitmojiHat descriptor] */

void FUN_10af56014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22580,
                        &PTR____CFConstantStringClassReference_110f3a758,&PTR_DAT_113334810,
                        &PTR_DAT_113334ec8,0xb,0x30,0x1c);
    puRam00000001137f0108 = puVar1;
  }
  return;
}



/* Entry: 10af5607c; end: 10af560e3; +[SCBitmojiLipstick descriptor] */

void FUN_10af5607c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c225d0,
                        &PTR____CFConstantStringClassReference_110f3a778,&PTR_DAT_113334810,
                        &PTR_DAT_113334828,1,8,0x1c);
    puRam00000001137f0110 = puVar1;
  }
  return;
}



/* Entry: 10af560e4; end: 10af5614b; +[SCBitmojiEyeshadow descriptor] */

void FUN_10af560e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22620,
                        &PTR____CFConstantStringClassReference_110f3a798,&PTR_DAT_113334810,
                        &PTR_DAT_113334848,1,8,0x1c);
    puRam00000001137f0118 = puVar1;
  }
  return;
}



/* Entry: 10af5614c; end: 10af561b3; +[SCBitmojiBlush descriptor] */

void FUN_10af5614c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22670,
                        &PTR____CFConstantStringClassReference_110f3a7b8,&PTR_DAT_113334810,
                        &PTR_DAT_113334868,1,8,0x1c);
    puRam00000001137f0120 = puVar1;
  }
  return;
}



/* Entry: 10af561b4; end: 10af5621b; +[SCBitmojiGlasses descriptor] */

void FUN_10af561b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c226c0,
                        &PTR____CFConstantStringClassReference_110f3a7d8,&PTR_DAT_113334810,
                        &PTR_DAT_113334888,1,8,0x1c);
    puRam00000001137f0128 = puVar1;
  }
  return;
}



/* Entry: 10af5621c; end: 10af562ff; +[SCBitmojiBag descriptor] */

void FUN_10af5621c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22710,
                        &PTR____CFConstantStringClassReference_110f3a7f8,&PTR_DAT_113334810,
                        &PTR_DAT_113335028,0xb,0x30,0x1c);
    puRam00000001137f0130 = puVar1;
  }
  return;
}



/* Entry: 10af56300; end: 10af5630b;  */

bool FUN_10af56300(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af5630c; end: 10af56373; +[SCFideliusFideliusDeviceKey descriptor] */

void FUN_10af5630c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c227b0,
                        &PTR____CFConstantStringClassReference_110f3a838,&PTR_DAT_1133355c8,
                        &PTR_DAT_1133357c0,7,0x40,0x1c);
    puRam00000001137f0140 = puVar1;
  }
  return;
}



/* Entry: 10af56374; end: 10af563db; +[SCFideliusWebAppInfo descriptor] */

void FUN_10af56374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22800,
                        &PTR____CFConstantStringClassReference_110f3a858,&PTR_DAT_1133355c8,
                        &PTR_DAT_1133358a0,8,0x48,0x1c);
    puRam00000001137f0148 = puVar1;
  }
  return;
}



/* Entry: 10af563dc; end: 10af56443; +[SCFideliusFideliusUserKey descriptor] */

void FUN_10af563dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22850,
                        &PTR____CFConstantStringClassReference_110f3a878,&PTR_DAT_1133355c8,
                        &PTR_DAT_1133355e0,1,0x10,0x1c);
    puRam00000001137f0150 = puVar1;
  }
  return;
}



/* Entry: 10af56444; end: 10af564ab; +[SCFideliusFideliusWebRecord descriptor] */

void FUN_10af56444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c228a0,
                        &PTR____CFConstantStringClassReference_110f3a898,&PTR_DAT_1133355c8,
                        &PTR_DAT_113335600,1,0x10,0x1c);
    puRam00000001137f0158 = puVar1;
  }
  return;
}



/* Entry: 10af564ac; end: 10af56513; +[SCFideliusFideliusTentativeDeviceKey descriptor] */

void FUN_10af564ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c228f0,
                        &PTR____CFConstantStringClassReference_110f39d78,&PTR_DAT_1133355c8,
                        &PTR_DAT_1133356c0,4,0x28,0x1c);
    puRam00000001137f0160 = puVar1;
  }
  return;
}



/* Entry: 10af56514; end: 10af5657b; +[SCFideliusFideliusTentativeWebKey descriptor] */

void FUN_10af56514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22940,
                        &PTR____CFConstantStringClassReference_110f3a8b8,&PTR_DAT_1133355c8,
                        &PTR_DAT_113335740,4,0x28,0x1c);
    puRam00000001137f0168 = puVar1;
  }
  return;
}



/* Entry: 10af5657c; end: 10af565e3; +[SCFideliusFriendKeys descriptor] */

void FUN_10af5657c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22990,
                        &PTR____CFConstantStringClassReference_110f3a8d8,&PTR_DAT_1133355c8,
                        &PTR_s_userId_113335620,2,0x18,0x1c);
    puRam00000001137f0170 = puVar1;
  }
  return;
}



/* Entry: 10af565e4; end: 10af566c7; +[SCFideliusFriendDeviceKey descriptor] */

void FUN_10af565e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c229e0,
                        &PTR____CFConstantStringClassReference_110f3a8f8,&PTR_DAT_1133355c8,
                        &PTR_DAT_113335660,3,0x18,0x1c);
    puRam00000001137f0178 = puVar1;
  }
  return;
}



/* Entry: 10af566c8; end: 10af566d3;  */

bool FUN_10af566c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af566d4; end: 10af5674f;  */

undefined * FUN_10af566d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0188 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3a938,
                        &UNK_10e53a914,&UNK_10e53a95c,3,FUN_10af56750,0);
    do {
      if (puRam00000001137f0188 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0188;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0188,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0188 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0188;
}



/* Entry: 10af56750; end: 10af5675b;  */

bool FUN_10af56750(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af5675c; end: 10af567d7;  */

undefined * FUN_10af5675c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0190 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3a958,
                        &UNK_10e53a968,&UNK_10e53a9bc,3,FUN_10af567d8,0);
    do {
      if (puRam00000001137f0190 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0190;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0190,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0190 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0190;
}



/* Entry: 10af567d8; end: 10af567e3;  */

bool FUN_10af567d8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af567e4; end: 10af5684b; +[SCMAGetActionmojiAssetsRequest descriptor] */

void FUN_10af567e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22a80,
                        &PTR____CFConstantStringClassReference_110f3a978,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335b00,2,0x10,0x1c);
    puRam00000001137f0198 = puVar1;
  }
  return;
}



/* Entry: 10af5684c; end: 10af568b3; +[SCMAGetActionmojiAssetsResponse descriptor] */

void FUN_10af5684c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22ad0,
                        &PTR____CFConstantStringClassReference_110f3a998,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335b40,2,0x18,0x1c);
    puRam00000001137f01a0 = puVar1;
  }
  return;
}



/* Entry: 10af568b4; end: 10af5691b; +[SCMAProduct descriptor] */

void FUN_10af568b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22b20,
                        &PTR____CFConstantStringClassReference_110f37098,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335b80,2,0x18,0x1c);
    puRam00000001137f01a8 = puVar1;
  }
  return;
}



/* Entry: 10af5691c; end: 10af569b7; +[SCMAAsset descriptor] */

undefined * FUN_10af5691c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22b70,
                        &PTR____CFConstantStringClassReference_110e7e598,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335da0,7,0x38,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e53a9c8);
    puRam00000001137f01b0 = puVar1;
  }
  return puRam00000001137f01b0;
}



/* Entry: 10af569b8; end: 10af56a1f; +[SCMASetActionmojiPreferencesRequest descriptor] */

void FUN_10af569b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22bc0,
                        &PTR____CFConstantStringClassReference_110f3a9b8,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335d00,5,0x28,0x1c);
    puRam00000001137f01b8 = puVar1;
  }
  return;
}



/* Entry: 10af56a20; end: 10af56a87; +[SCMASetActionmojiPreferencesResponse descriptor] */

void FUN_10af56a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22c10,
                        &PTR____CFConstantStringClassReference_110f3a9d8,&PTR_DAT_1133359a8,
                        &PTR_DAT_1133359c0,1,0x10,0x1c);
    puRam00000001137f01c0 = puVar1;
  }
  return;
}



/* Entry: 10af56a88; end: 10af56aef; +[SCMAGetActionmojiPreferencesRequest descriptor] */

void FUN_10af56a88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22c60,
                        &PTR____CFConstantStringClassReference_110f3a9f8,&PTR_DAT_1133359a8,0,0,4,
                        0x1c);
    puRam00000001137f01c8 = puVar1;
  }
  return;
}



/* Entry: 10af56af0; end: 10af56b57; +[SCMAGetActionmojiPreferencesResponse descriptor] */

void FUN_10af56af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22cb0,
                        &PTR____CFConstantStringClassReference_110f3aa18,&PTR_DAT_1133359a8,
                        &PTR_DAT_1133359e0,1,0x10,0x1c);
    puRam00000001137f01d0 = puVar1;
  }
  return;
}



/* Entry: 10af56b58; end: 10af56bbf; +[SCMAGetActionmojiSharingOptionsRequest descriptor] */

void FUN_10af56b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22d00,
                        &PTR____CFConstantStringClassReference_110f3aa38,&PTR_DAT_1133359a8,0,0,4,
                        0x1c);
    puRam00000001137f01d8 = puVar1;
  }
  return;
}



/* Entry: 10af56bc0; end: 10af56c27; +[SCMAGetActionmojiSharingOptionsResponse descriptor] */

void FUN_10af56bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22d50,
                        &PTR____CFConstantStringClassReference_110f3aa58,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335a00,1,0x10,0x1c);
    puRam00000001137f01e0 = puVar1;
  }
  return;
}



/* Entry: 10af56c28; end: 10af56c8f; +[SCMASetActionmojiSharingOptionsRequest descriptor] */

void FUN_10af56c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22da0,
                        &PTR____CFConstantStringClassReference_110f3aa78,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335a20,1,0x10,0x1c);
    puRam00000001137f01e8 = puVar1;
  }
  return;
}



/* Entry: 10af56c90; end: 10af56cf7; +[SCMASetActionmojiSharingOptionsResponse descriptor] */

void FUN_10af56c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22df0,
                        &PTR____CFConstantStringClassReference_110f3aa98,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335a40,1,0x10,0x1c);
    puRam00000001137f01f0 = puVar1;
  }
  return;
}



/* Entry: 10af56cf8; end: 10af56d5f; +[SCMADeleteUserGeneratedActionmojiAssetRequest descriptor] */

void FUN_10af56cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f01f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22e40,
                        &PTR____CFConstantStringClassReference_110f3aab8,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335bc0,2,0x10,0x1c);
    puRam00000001137f01f8 = puVar1;
  }
  return;
}



/* Entry: 10af56d60; end: 10af56dc7; +[SCMADeleteUserGeneratedActionmojiAssetResponse descriptor] */

void FUN_10af56d60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22e90,
                        &PTR____CFConstantStringClassReference_110f3aad8,&PTR_DAT_1133359a8,0,0,4,
                        0x1c);
    puRam00000001137f0200 = puVar1;
  }
  return;
}



/* Entry: 10af56dc8; end: 10af56e43; +[SCMACustomPet descriptor] */

undefined * FUN_10af56dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22ee0,
                        &PTR____CFConstantStringClassReference_110f3aaf8,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335e80,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f0208 = puVar1;
  }
  return puRam00000001137f0208;
}



/* Entry: 10af56e44; end: 10af56eab; +[SCMASharingOptions descriptor] */

void FUN_10af56e44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22f30,
                        &PTR____CFConstantStringClassReference_110f3ab18,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335a60,1,4,0x1c);
    puRam00000001137f0210 = puVar1;
  }
  return;
}



/* Entry: 10af56eac; end: 10af56f13; +[SCMAActionmojiPreferences descriptor] */

void FUN_10af56eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22f80,
                        &PTR____CFConstantStringClassReference_110f3ab38,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335c00,2,0x18,0x1c);
    puRam00000001137f0218 = puVar1;
  }
  return;
}



/* Entry: 10af56f14; end: 10af56f7b; +[SCMAUserPickedLocations descriptor] */

void FUN_10af56f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c22fd0,
                        &PTR____CFConstantStringClassReference_110f3ab58,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335c80,4,0x20,0x1c);
    puRam00000001137f0220 = puVar1;
  }
  return;
}



/* Entry: 10af56f7c; end: 10af56fe3; +[SCMAHidableLocation descriptor] */

void FUN_10af56f7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c23020,
                        &PTR____CFConstantStringClassReference_110f3ab78,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335c40,2,0x10,0x1c);
    puRam00000001137f0228 = puVar1;
  }
  return;
}



/* Entry: 10af56fe4; end: 10af5704b; +[SCMAGetUserPickedLocationsRequest descriptor] */

void FUN_10af56fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c23070,
                        &PTR____CFConstantStringClassReference_110f3ab98,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335a80,1,4,0x1c);
    puRam00000001137f0230 = puVar1;
  }
  return;
}



/* Entry: 10af5704c; end: 10af570b3; +[SCMAGetUserPickedLocationsResponse descriptor] */

void FUN_10af5704c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0238 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c230c0,
                        &PTR____CFConstantStringClassReference_110f3abb8,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335aa0,1,0x10,0x1c);
    puRam00000001137f0238 = puVar1;
  }
  return;
}



/* Entry: 10af570b4; end: 10af5711b; +[SCMAUpdateUserPickedLocationsRequest descriptor] */

void FUN_10af570b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c23110,
                        &PTR____CFConstantStringClassReference_110f3abd8,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335ac0,1,0x10,0x1c);
    puRam00000001137f0240 = puVar1;
  }
  return;
}



/* Entry: 10af5711c; end: 10af57183; +[SCMAUpdateUserPickedLocationsResponse descriptor] */

void FUN_10af5711c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c23160,
                        &PTR____CFConstantStringClassReference_110f3abf8,&PTR_DAT_1133359a8,0,0,4,
                        0x1c);
    puRam00000001137f0248 = puVar1;
  }
  return;
}



/* Entry: 10af57184; end: 10af571eb; +[SCMAUpdateSchoolPermissionRequest descriptor] */

void FUN_10af57184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c231b0,
                        &PTR____CFConstantStringClassReference_110f3ac18,&PTR_DAT_1133359a8,
                        &PTR_DAT_113335ae0,1,4,0x1c);
    puRam00000001137f0250 = puVar1;
  }
  return;
}



/* Entry: 10af571ec; end: 10af572cf; +[SCMAUpdateSchoolPermissionResponse descriptor] */

void FUN_10af571ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c23200,
                        &PTR____CFConstantStringClassReference_110f3ac38,&PTR_DAT_1133359a8,0,0,4,
                        0x1c);
    puRam00000001137f0258 = puVar1;
  }
  return;
}



/* Entry: 10af572d0; end: 10af572db;  */

bool FUN_10af572d0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10af572dc; end: 10af5736b;  */

undefined * FUN_10af572dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0268 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3ac78,
                        &UNK_10e53aa38,&UNK_10e53ab04,6,FUN_10af5736c,0,&UNK_10e53ab1c);
    do {
      if (puRam00000001137f0268 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0268;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0268,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0268 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0268;
}



/* Entry: 10af5736c; end: 10af57377;  */

bool FUN_10af5736c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10af57378; end: 10af57407;  */

undefined * FUN_10af57378(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0270 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3ac98,
                        &UNK_10e53ab28,&UNK_10e53ab68,2,FUN_10af57408,0,&UNK_10e53ab70);
    do {
      if (puRam00000001137f0270 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0270;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0270,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0270 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0270;
}



/* Entry: 10af57408; end: 10af57413;  */

bool FUN_10af57408(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af57414; end: 10af5748f;  */

undefined * FUN_10af57414(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0278 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3acb8,
                        &UNK_10e53ab7d,&UNK_10e53abd8,3,FUN_10af57490,0);
    do {
      if (puRam00000001137f0278 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0278;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0278,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0278 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0278;
}



/* Entry: 10af57490; end: 10af5749b;  */

bool FUN_10af57490(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af5749c; end: 10af57517;  */

undefined * FUN_10af5749c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0280 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3acd8,
                        &UNK_10e53abe4,&UNK_10e53ac40,3,FUN_10af57518,0);
    do {
      if (puRam00000001137f0280 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0280;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0280,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0280 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0280;
}



/* Entry: 10af57518; end: 10af57523;  */

bool FUN_10af57518(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af57524; end: 10af5759f;  */

undefined * FUN_10af57524(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0288 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3acf8,
                        &UNK_10e53ac4c,&UNK_10e53ac64,2,FUN_10af575a0,0);
    do {
      if (puRam00000001137f0288 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0288;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0288,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0288 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0288;
}



/* Entry: 10af575a0; end: 10af575ab;  */

bool FUN_10af575a0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af575ac; end: 10af57627;  */

undefined * FUN_10af575ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0290 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3ad18,
                        &UNK_10e53ac6c,&UNK_10e53ac88,3,FUN_10af57628,0);
    do {
      if (puRam00000001137f0290 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0290;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0290,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0290 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0290;
}



/* Entry: 10af57628; end: 10af57633;  */

bool FUN_10af57628(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af57634; end: 10af576af;  */

undefined * FUN_10af57634(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0298 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3ad38,
                        &UNK_10e53ac94,&UNK_10e53acac,2,FUN_10af576b0,0);
    do {
      if (puRam00000001137f0298 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0298;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0298,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0298 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0298;
}



/* Entry: 10af576b0; end: 10af576bb;  */

bool FUN_10af576b0(uint param_1)

{
  return param_1 < 2;
}


