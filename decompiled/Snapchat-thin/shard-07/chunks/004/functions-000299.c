/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105569330; end: 105569573;  */

void FUN_105569330(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar10 = PTR_PTR_1126bad20;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c084f80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c11f6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf5cfe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c1554e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c27dd80(param_2);
    lVar7 = param_2;
    func_0x00010bf4e080();
    lVar8 = param_2;
    func_0x00010c298be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3cba0();
    lVar9 = param_2;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    FUN_105569574(puVar10,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,(char)lVar7);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar10 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105569574; end: 10556976f;  */

long * FUN_105569574(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,undefined1 param_8,undefined1 param_9,undefined4 param_10,
                    long param_11,undefined4 param_12,undefined4 param_13,long param_14)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_14);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e8f90;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[4];
      plVar1[4] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[5];
      plVar1[5] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[6];
      plVar1[6] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[7];
      plVar1[7] = param_6;
      _objc_release(lVar2);
      _objc_retain(param_7);
      lVar2 = plVar1[8];
      plVar1[8] = param_7;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_8;
      *(undefined1 *)((long)plVar1 + 0x15) = param_9;
      _objc_retain(param_11);
      lVar2 = plVar1[9];
      plVar1[9] = param_11;
      _objc_release(lVar2);
      *(undefined4 *)(plVar1 + 3) = param_12;
      _objc_retain(param_14);
      lVar2 = plVar1[10];
      plVar1[10] = param_14;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 105569770; end: 1055697e3;  */

void FUN_105569770(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1055697e4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055697e4; end: 105569d3f;  */

void FUN_1055697e4(undefined *param_1)

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
  undefined *puVar11;
  undefined *puStack_68;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c084f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar11,&UNK_10f2d147a);
        if (puVar11 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c084f80(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar11,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar11;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar11;
            _sqlite3_column_int64(puVar11,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bacd8);
            _sqlite3_column_blob(puVar11,1);
            _sqlite3_column_bytes(puVar11,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar11);
            if (puVar3 == (undefined *)0x0) goto LAB_105569c20;
            puVar11 = PTR_PTR_1126bad20;
            _objc_alloc(PTR_PTR_1126bad20);
            puVar2 = puVar3;
            func_0x00010c084f80();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c11f6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf63640(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puStack_68 = puVar3;
            func_0x00010bf5cfe0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c1554e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c27dd80(puVar3);
            puVar8 = puVar3;
            func_0x00010bf4e080();
            puVar9 = puVar3;
            func_0x00010c298be0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf3cba0();
            puVar10 = puVar3;
            func_0x00010c135700();
            _objc_retainAutoreleasedReturnValue();
            FUN_105569574(puVar11,puVar1,puVar2,puVar4,puVar5,puStack_68,puVar6,puVar7,(char)puVar8)
            ;
            goto LAB_105569988;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar11 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bacd8);
      puVar3 = puVar11;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar11);
      if (puVar3 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126bad20;
        _objc_alloc(PTR_PTR_1126bad20);
        puVar2 = puVar3;
        func_0x00010c084f80();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c11f6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf63640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_68 = puVar3;
        func_0x00010bf5cfe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c1554e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c27dd80(puVar3);
        puVar8 = puVar3;
        func_0x00010bf4e080();
        puVar9 = puVar3;
        func_0x00010c298be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3cba0();
        puVar10 = puVar3;
        func_0x00010c135700();
        _objc_retainAutoreleasedReturnValue();
        FUN_105569574(puVar11,puVar1,puVar2,puVar4,puVar5,puStack_68,puVar6,puVar7,(char)puVar8);
LAB_105569988:
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puStack_68);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        param_1 = puVar3;
        goto LAB_105569c28;
      }
LAB_105569c20:
      param_1 = (undefined *)0x0;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_105569c28:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105569d40; end: 105569db3;  */

void FUN_105569d40(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1055697e4();
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



/* Entry: 105569db4; end: 105569ff7;  */

void FUN_105569db4(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bad20;
  FUN_105569770(PTR_PTR_1126bad20,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar3 = PTR_PTR_1126bad20;
    FUN_105569330(PTR_PTR_1126bad20,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    uVar2 = param_1;
    func_0x00010c084f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c11f6e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf63640(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf5cfe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c1554e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c27dd80();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_1;
    func_0x00010bf4e080();
    puVar1[0x15] = (char)uVar2;
    uVar2 = param_1;
    func_0x00010c298be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf3cba0();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_1;
    func_0x00010c135700(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105569ff8; end: 10556a087;  */

void FUN_105569ff8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bacd8;
    _objc_alloc(PTR_PTR_1126bacd8);
    func_0x00010c020440();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10556a088; end: 10556a0f3; -[SCCTPItemChangeRequest .cxx_destruct] */

void FUN_10556a088(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10556a0f4; end: 10556a0ff; -[SCCTPItemChangeRequest table] */

undefined * FUN_10556a0f4(void)

{
  return &UNK_10f2d13c0;
}



/* Entry: 10556a100; end: 10556a213; -[SCCTPItemChangeRequest createTableWithSQLite:] */

void FUN_10556a100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb2009,0x7b,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb2084,0x60,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddb20e4,0x67,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb214b,0x6d,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddb21b8,0x79,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10556a214; end: 10556aaf3; -[SCCTPItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556a214(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_105569ff8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_10556aaf4(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar17 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar17;
    puVar15 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010bf636c0();
    FUN_1050da3a4();
    _objc_release(puVar15);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d1549);
    if (lVar8 == 0) goto LAB_10556a974;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar17 + (ulong)uVar4);
    puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar17 + (ulong)*puVar17);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_10556a974;
    uVar16 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      lVar8 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f2d13e2);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar14 == 0)) {
        _sqlite3_bind_null(lVar8,2);
      }
      else {
        puVar17 = (uint *)((long)piVar1 + uVar14);
        puVar2 = (undefined4 *)((long)puVar17 + (ulong)*puVar17);
        _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_10556a974;
    }
    if (((uint)puVar9 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f2d1428);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
         (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar14 == 0)) {
        _sqlite3_bind_null(param_3,2);
      }
      else {
        puVar17 = (uint *)((long)piVar1 + uVar14);
        piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
           (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar14 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)((long)piVar1 + uVar14);
        }
        _sqlite3_bind_int64(param_3,2,uVar13);
      }
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_10556a974;
    }
    *(undefined8 *)(param_1 + 8) = uVar16;
    func_0x00010c1eeb60(puVar7);
    puVar15 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacd8);
    func_0x00010c21c9a0(puVar15);
LAB_10556aa08:
    _objc_release(puVar15);
    _objc_retain(puVar7);
    puVar15 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2d14b4);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f2d14db);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_10556a378;
            }
            func_0x0001001b9e08(param_3,&UNK_10f2d150f);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_10556a378;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bacd8);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar15);
            _objc_release(puVar7);
            puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556a980;
          }
        }
      }
LAB_10556a378:
      puVar15 = (undefined *)0x0;
      goto LAB_10556a980;
    }
    FUN_105569ff8();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_10556aaf4(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar17 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar17;
    uVar16 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d157e);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar16);
      piVar1 = (int *)((long)puVar17 + (ulong)uVar4);
      puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar17 + (ulong)*puVar17);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar15 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bacd8);
        puVar9 = puVar15;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = puVar9;
        func_0x00010c11f6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c11f6e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar15);
        _objc_retain(puVar5);
        if (puVar15 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_10556a7d0:
          puVar15 = puVar9;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar7;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 == puVar5) {
            puVar6 = puVar9;
            func_0x00010c1554e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar6;
            func_0x00010c11f520();
            puVar11 = puVar7;
            func_0x00010c1554e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010c11f520();
            _objc_release(puVar11);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar15);
            if ((int)puVar10 != (int)puVar12) goto LAB_10556a878;
          }
          else {
            _objc_release(puVar5);
            _objc_release(puVar15);
LAB_10556a878:
            func_0x0001001b9e08(param_3,&UNK_10f2d1603);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
               (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar14 == 0)) {
              _sqlite3_bind_null(param_3,1);
            }
            else {
              puVar17 = (uint *)((long)piVar1 + uVar14);
              piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
              if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
                 (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar14 == 0)) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined4 *)((long)piVar1 + uVar14);
              }
              _sqlite3_bind_int64(param_3,1,uVar13);
            }
            _sqlite3_bind_int64(param_3,2,uVar16);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_10556a964;
          }
          _objc_release(puVar9);
          _objc_release(puVar7);
          puVar15 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bacd8);
          func_0x00010c21c9a0(puVar15);
          goto LAB_10556aa08;
        }
        if ((puVar15 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          _objc_release(puVar5);
          _objc_release(puVar15);
          _objc_release(puVar5);
          _objc_release(puVar15);
        }
        else {
          puVar6 = puVar15;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar15);
          _objc_release(puVar5);
          _objc_release(puVar15);
          if (((ulong)puVar6 & 1) != 0) goto LAB_10556a7d0;
        }
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2d15bd);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar14 == 0)) {
          _sqlite3_bind_null(lVar8,1);
        }
        else {
          puVar17 = (uint *)((long)piVar1 + uVar14);
          puVar2 = (undefined4 *)((long)puVar17 + (ulong)*puVar17);
          _sqlite3_bind_text(lVar8,1,puVar2 + 1,*puVar2,0);
        }
        _sqlite3_bind_int64(lVar8,2,uVar16);
        _sqlite3_step();
        if ((int)lVar8 == 0x65) goto LAB_10556a7d0;
LAB_10556a964:
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar7);
LAB_10556a974:
    puVar15 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_10556a980:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10556aaf4; end: 10556aecf;  */

ulong FUN_10556aaf4(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  undefined4 uStack_84;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uStack_68 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010c1554e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = param_1;
    FUN_10556b030(param_1,uVar5);
    _objc_release(uVar5);
    uStack_68 = uStack_68 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c084f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10556b188(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c11f6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10556b188(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar8 == 0) {
    uStack_84 = 0;
  }
  else {
    uVar9 = uVar8;
    _objc_retainAutorelease(uVar8);
    func_0x00010bf25f00();
    uVar10 = uVar8;
    func_0x00010c08fa60(uVar8);
    uVar11 = param_1;
    func_0x0001001d1030(param_1,uVar9,uVar10);
    uStack_84 = (undefined4)uVar11;
  }
  _objc_release(uVar8);
  uVar9 = param_2;
  func_0x00010bf5cfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_10556b188(param_1,uVar9);
  uVar11 = param_2;
  func_0x00010c27dd80();
  uVar12 = param_2;
  func_0x00010bf4e080();
  uVar13 = param_2;
  func_0x00010c298be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_10556b188(param_1,uVar13);
  uVar15 = param_2;
  func_0x00010bf3cba0(param_2);
  uVar16 = param_2;
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_10556b188(param_1,uVar16);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,0x16,uVar17 & 0xffffffff);
  func_0x0001001ce354(param_1,0x14,uVar15,0);
  func_0x0001001ce2e4(param_1,0x12,uVar14 & 0xffffffff);
  if (uStack_68 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_68) + 4,0);
  }
  func_0x0001001ce2e4(param_1,10,uVar10 & 0xffffffff);
  func_0x0001001ce220(param_1,8,uStack_84);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce42c(param_1,0x10,uVar12 & 0xffffffff,0);
  func_0x0001001ce42c(param_1,0xe,uVar11 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar16);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10556aed0; end: 10556b02f;  */

void FUN_10556aed0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  if (param_1 == (int *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10556afc8;
  }
  puVar9 = PTR_PTR_1126bacf8;
  _objc_alloc(PTR_PTR_1126bacf8);
  lVar6 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar6);
  if (uVar2 < 5) {
    puVar10 = (undefined *)0x0;
LAB_10556af98:
    cVar5 = '\0';
LAB_10556afa0:
    cVar7 = '\0';
    uVar3 = 0;
LAB_10556afa4:
    uVar4 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_1 - lVar6))[2];
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar6);
    }
    if (uVar2 < 7) goto LAB_10556af98;
    uVar8 = (ulong)*(ushort *)((long)param_1 + (6 - lVar6));
    cVar5 = '\0';
    if (uVar8 != 0) {
      cVar5 = *(char *)((long)param_1 + uVar8);
    }
    if (uVar2 < 9) goto LAB_10556afa0;
    uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - lVar6));
    if (uVar8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((long)param_1 + uVar8);
    }
    if (uVar2 < 0xb) {
      cVar7 = '\0';
      goto LAB_10556afa4;
    }
    uVar8 = (ulong)*(ushort *)((long)param_1 + (10 - lVar6));
    cVar7 = '\0';
    if (uVar8 != 0) {
      cVar7 = *(char *)((long)param_1 + uVar8);
    }
    if ((uVar2 < 0xd) || (uVar8 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar6)), uVar8 == 0))
    goto LAB_10556afa4;
    uVar4 = *(undefined4 *)((long)param_1 + uVar8);
  }
  func_0x00010c0437c0(puVar9,param_2,puVar10,(int)cVar5,uVar3,(int)cVar7,uVar4);
  _objc_release(puVar10);
LAB_10556afc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10556b030; end: 10556b187;  */

ulong FUN_10556b030(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c156a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10556b188(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c27dd80(param_2);
  uVar7 = param_2;
  func_0x00010c11f520(param_2);
  uVar8 = param_2;
  func_0x00010c08cc60(param_2);
  uVar9 = param_2;
  func_0x00010bf85520(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce354(param_1,0xc,uVar9,0);
  func_0x0001001ce354(param_1,8,uVar7,0);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce42c(param_1,10,uVar8,0);
  func_0x0001001ce42c(param_1,6,uVar6,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10556b188; end: 10556b2b7;  */

undefined8 FUN_10556b188(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10556b268;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_10556b268;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10556b228;
    param_1 = 0;
  }
  else {
LAB_10556b228:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_10556b268:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10556b2b8; end: 10556b373;  */

undefined8 FUN_10556b2b8(void)

{
  int iVar1;
  
  if ((bRam0000000113819a08 & 1) == 0) {
    iVar1 = 0x13819a08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138199a0 = 0xe;
      puRam00000001138199a8 = &UNK_10f2d1655;
      uRam00000001138199b0 = 0x1010000;
      pcRam00000001138199b8 = FUN_10556b374;
      pcRam00000001138199c0 = FUN_10556b3b0;
      ppuRam0000000113819998 = &PTR_DAT_110897208;
      uRam00000001138199d8 = 0;
      uRam00000001138199d0 = 0;
      uRam00000001138199e8 = 0;
      uRam00000001138199e0 = 0;
      uRam00000001138199f8 = 0;
      uRam00000001138199f0 = 0;
      uRam0000000113819a00 = 0;
      ___cxa_atexit(0x10555a158,0x113819998,0x100000000);
      ___cxa_guard_release(0x113819a08);
    }
  }
  return 0x113819998;
}



/* Entry: 10556b374; end: 10556b3af;  */

int FUN_10556b374(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 10556b3b0; end: 10556b403;  */

undefined8 FUN_10556b3b0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c27dd80(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10556b404; end: 10556b4bf;  */

undefined8 FUN_10556b404(void)

{
  int iVar1;
  
  if ((bRam0000000113819a80 & 1) == 0) {
    iVar1 = 0x13819a80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819a18 = 0xe;
      puRam0000000113819a20 = &UNK_10f2d165a;
      uRam0000000113819a28 = 0x1010000;
      pcRam0000000113819a30 = FUN_10556b4c0;
      pcRam0000000113819a38 = FUN_10556b4fc;
      ppuRam0000000113819a10 = &PTR_DAT_110897278;
      uRam0000000113819a50 = 0;
      uRam0000000113819a48 = 0;
      uRam0000000113819a60 = 0;
      uRam0000000113819a58 = 0;
      uRam0000000113819a70 = 0;
      uRam0000000113819a68 = 0;
      uRam0000000113819a78 = 0;
      ___cxa_atexit(0x10555ad28,0x113819a10,0x100000000);
      ___cxa_guard_release(0x113819a80);
    }
  }
  return 0x113819a10;
}



/* Entry: 10556b4c0; end: 10556b4fb;  */

int FUN_10556b4c0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 10556b4fc; end: 10556b54f;  */

undefined8 FUN_10556b4fc(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf4e080(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10556b550; end: 10556b55b; +[SCCTPFeedSyncMetadata table] */

undefined * FUN_10556b550(void)

{
  return &UNK_10f2d1662;
}



/* Entry: 10556b55c; end: 10556b71f; +[SCCTPFeedSyncMetadata immutableObjectParse:bufferSize:] */

void FUN_10556b55c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126bacc8;
  _objc_alloc(PTR_PTR_1126bacc8);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
    cVar10 = '\0';
    cVar9 = '\0';
    puVar8 = (undefined *)0x0;
    uVar11 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    uVar11 = 0;
    if (uVar3 < 7) {
      cVar10 = '\0';
      cVar9 = '\0';
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5));
      if (uVar6 == 0) {
        cVar9 = '\0';
      }
      else {
        cVar9 = *(char *)((long)piVar1 + uVar6);
      }
      if (uVar3 < 9) {
        cVar10 = '\0';
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar5));
        if (uVar6 == 0) {
          cVar10 = '\0';
        }
        else {
          cVar10 = *(char *)((long)piVar1 + uVar6);
        }
        if (10 < uVar3) {
          uVar6 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar5));
          if (uVar6 != 0) {
            uVar11 = *(undefined8 *)((long)piVar1 + uVar6);
          }
          if ((0xc < uVar3) && (*(short *)((long)piVar1 + (0xc - lVar5)) != 0)) {
            puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
            func_0x00010bffa160();
            goto LAB_10556b6b0;
          }
        }
      }
    }
    puVar8 = (undefined *)0x0;
  }
LAB_10556b6b0:
  func_0x00010c012800(uVar11,puVar4,param_2,puVar7,(int)cVar9,(int)cVar10,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10556b720; end: 10556b743; +[SCCTPFeedSyncMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_10556b720(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10556b73c;
  auVar1._0_8_ = 0x10556b734;
  return auVar1;
}



/* Entry: 10556b744; end: 10556b837;  */

undefined1 *
FUN_10556b744(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_1126e8f98;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_5;
      *(undefined1 *)((long)plVar1 + 0x15) = param_6;
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10556b838; end: 10556bbff;  */

void FUN_10556b838(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010bfa4500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,&UNK_10f2d167a);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010bfa4500(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bacc8);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_10556bb48;
            puVar7 = PTR_PTR_1126bad30;
            _objc_alloc(PTR_PTR_1126bad30);
            puVar2 = puVar3;
            func_0x00010bfa4500(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c27dd80(puVar3);
            puVar5 = puVar3;
            func_0x00010bf4e080(puVar3);
            func_0x00010c08ac80(puVar3);
            puVar6 = puVar3;
            func_0x00010c0f2460(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10556b744(param_1,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_2 = puVar3;
            goto LAB_10556b958;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bacc8);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126bad30;
        _objc_alloc(PTR_PTR_1126bad30);
        puVar2 = puVar3;
        func_0x00010bfa4500(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c27dd80(puVar3);
        puVar5 = puVar3;
        func_0x00010bf4e080(puVar3);
        func_0x00010c08ac80(puVar3);
        puVar6 = puVar3;
        func_0x00010c0f2460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10556b744(param_1,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_2 = puVar3;
LAB_10556b958:
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_10556bb50;
      }
LAB_10556bb48:
      param_2 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10556bb50:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10556bc00; end: 10556bc73;  */

void FUN_10556bc00(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10556b838();
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



/* Entry: 10556bc74; end: 10556beeb;  */

void FUN_10556bc74(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bad30;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_10556b838();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar6 = PTR_PTR_1126bad30;
    _objc_retain(param_2);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126bad30;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bfa4500(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c27dd80(param_2);
      puVar4 = param_2;
      func_0x00010bf4e080(param_2);
      func_0x00010c08ac80(param_2);
      puVar5 = param_2;
      func_0x00010c0f2460(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_10556b744(param_1,puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar6 = param_2;
    func_0x00010bfa4500(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010c27dd80();
    puVar1[0x14] = (char)puVar6;
    puVar6 = param_2;
    func_0x00010bf4e080();
    puVar1[0x15] = (char)puVar6;
    func_0x00010c08ac80(param_2);
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    puVar6 = param_2;
    func_0x00010c0f2460(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10556beec; end: 10556bf5b;  */

void FUN_10556beec(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bacc8;
    _objc_alloc(PTR_PTR_1126bacc8);
    func_0x00010c012800(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10556bf5c; end: 10556bf8b; -[SCCTPFeedSyncMetadataChangeRequest .cxx_destruct] */

void FUN_10556bf5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10556bf8c; end: 10556bf97; -[SCCTPFeedSyncMetadataChangeRequest table] */

undefined * FUN_10556bf8c(void)

{
  return &UNK_10f2d1662;
}



/* Entry: 10556bf98; end: 10556bfdf; -[SCCTPFeedSyncMetadataChangeRequest createTableWithSQLite:] */

void FUN_10556bf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb2231,0x87,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10556bfe0; end: 10556c367; -[SCCTPFeedSyncMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556bfe0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10556beec(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10556c368(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d16f3);
    if (lVar6 == 0) goto LAB_10556c304;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10556c304;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacc8);
    func_0x00010c21c9a0(puVar7);
LAB_10556c2ec:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d16c0);
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
            _objc_opt_class(PTR_PTR_1126bacc8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556c310;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10556c310;
    }
    FUN_10556beec(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10556c368(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d1734);
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
        _objc_opt_class(PTR_PTR_1126bacc8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10556c2ec;
      }
    }
LAB_10556c304:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10556c310:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10556c368; end: 10556c62f;  */

ulong FUN_10556c368(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010bfa4500();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar10 = 0;
    goto LAB_10556c478;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar10 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_2,pcVar5,pcVar6);
    goto LAB_10556c478;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_10556c438;
    uVar10 = 0;
  }
  else {
LAB_10556c438:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_2,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_10556c478:
  _objc_release(pcVar4);
  pcVar5 = param_3;
  func_0x00010c27dd80(param_3);
  pcVar6 = param_3;
  func_0x00010bf4e080(param_3);
  func_0x00010c08ac80(param_3);
  pcVar7 = param_3;
  func_0x00010c0f2460();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar7 == (char *)0x0) {
    uVar11 = 0;
  }
  else {
    pcVar8 = pcVar7;
    _objc_retainAutorelease(pcVar7);
    func_0x00010bf25f00();
    pcVar9 = pcVar7;
    func_0x00010c08fa60(pcVar7);
    uVar11 = param_2;
    func_0x0001001d1030(param_2,pcVar8,pcVar9);
  }
  _objc_release(pcVar7);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x0001001ce220(param_2,0xc,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar10 & 0xffffffff);
  func_0x0001001ce42c(param_2,8,pcVar6,0);
  func_0x0001001ce42c(param_2,6,pcVar5,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10556c630; end: 10556c6e7;  */

undefined8 FUN_10556c630(void)

{
  int iVar1;
  
  if ((bRam0000000113819af8 & 1) == 0) {
    iVar1 = 0x13819af8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819a90 = 0xe;
      puRam0000000113819a98 = &UNK_10f2d177f;
      uRam0000000113819aa0 = 0x10001;
      pcRam0000000113819aa8 = FUN_10556c6e8;
      pcRam0000000113819ab0 = FUN_10556c720;
      ppuRam0000000113819a88 = &PTR_FUN_1108962d0;
      uRam0000000113819ac8 = 0;
      uRam0000000113819ac0 = 0;
      uRam0000000113819ad8 = 0;
      uRam0000000113819ad0 = 0;
      uRam0000000113819ae8 = 0;
      uRam0000000113819ae0 = 0;
      uRam0000000113819af0 = 0;
      ___cxa_atexit(FUN_105535dc4,0x113819a88,0x100000000);
      ___cxa_guard_release(0x113819af8);
    }
  }
  return 0x113819a88;
}



/* Entry: 10556c6e8; end: 10556c71f;  */

undefined4 FUN_10556c6e8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 10556c720; end: 10556c773;  */

undefined8 FUN_10556c720(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c1554e0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10556c774; end: 10556c7d7;  */

undefined ** FUN_10556c774(void)

{
  int iVar1;
  
  if ((bRam0000000113819b00 & 1) == 0) {
    iVar1 = 0x13819b00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130e3aa0,0x100000000);
      ___cxa_guard_release(0x113819b00);
    }
  }
  return &PTR_PTR_1130e3aa0;
}



/* Entry: 10556c7d8; end: 10556c85f;  */

void FUN_10556c7d8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
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



/* Entry: 10556c860; end: 10556c8eb;  */

void FUN_10556c860(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c26b3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c26b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10556c8ec; end: 10556c8f7; +[SCCTPSearchSection table] */

undefined * FUN_10556c8ec(void)

{
  return &UNK_10f2d178c;
}



/* Entry: 10556c8f8; end: 10556cae3; +[SCCTPSearchSection immutableObjectParse:bufferSize:] */

void FUN_10556c8f8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar6 = PTR_PTR_1126bad38;
  _objc_alloc(PTR_PTR_1126bad38);
  lVar7 = (long)*piVar1;
  puVar8 = (ushort *)((long)piVar1 - lVar7);
  uVar3 = *puVar8;
  if (uVar3 < 5) {
    uVar11 = 0;
LAB_10556c9a4:
    puVar10 = (undefined *)0x0;
LAB_10556c9a8:
    bVar4 = false;
    uVar12 = 0;
LAB_10556c9b0:
    bVar5 = false;
  }
  else {
    if ((ulong)puVar8[2] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[2]);
    }
    if (uVar3 < 7) goto LAB_10556c9a4;
    if ((ulong)puVar8[3] == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar8[3]);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar7);
    }
    if (uVar3 < 9) goto LAB_10556c9a8;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar7));
    if (uVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 0xb) {
      bVar4 = false;
      goto LAB_10556c9b0;
    }
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar7));
    if (uVar9 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + uVar9) != '\0';
    }
    if (uVar3 < 0xd) goto LAB_10556c9b0;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (0xc - lVar7));
    if (uVar9 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)piVar1 + uVar9) != '\0';
    }
    if ((0xe < uVar3) && (*(short *)((long)piVar1 + (0xe - lVar7)) != 0)) {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      goto LAB_10556c9b8;
    }
  }
  puVar13 = (undefined *)0x0;
LAB_10556c9b8:
  func_0x00010c042dc0(puVar6,param_2,uVar11,puVar10,uVar12,bVar4,bVar5,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10556cae4; end: 10556cb07; +[SCCTPSearchSection objectClassFunctionPointer] */

undefined1  [16] FUN_10556cae4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10556cb00;
  auVar1._0_8_ = 0x10556caf8;
  return auVar1;
}



/* Entry: 10556cb08; end: 10556cc53;  */

void FUN_10556cb08(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar7 = PTR_PTR_1126bad48;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c1554e0(param_2);
    lVar2 = param_2;
    func_0x00010c26b3c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c08ac80(param_2);
    lVar4 = param_2;
    func_0x00010bfd4a60(param_2);
    lVar5 = param_2;
    func_0x00010bfd5000(param_2);
    lVar6 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10556cc54(puVar7,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar7 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10556cc54; end: 10556cd4f;  */

undefined1 *
FUN_10556cc54(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  _objc_retain(param_8);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126e8fa0;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined4 *)((long)plVar1 + 0x18) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      *(undefined1 *)((long)plVar1 + 0x14) = param_6;
      *(undefined1 *)((long)plVar1 + 0x15) = param_7;
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_8;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10556cd50; end: 10556d157;  */

void FUN_10556cd50(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c26b3c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar9,&UNK_10f2d17a1);
        if (puVar9 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c1554e0(param_1);
          _sqlite3_bind_int64(puVar9,1,(ulong)puVar1 & 0xffffffff);
          puVar1 = param_1;
          func_0x00010c26b3c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar9,2,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar9;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar9;
            _sqlite3_column_int64(puVar9,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bad38);
            _sqlite3_column_blob(puVar9,1);
            _sqlite3_column_bytes(puVar9,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar9);
            if (puVar3 == (undefined *)0x0) goto LAB_10556d0a0;
            puVar9 = PTR_PTR_1126bad48;
            _objc_alloc(PTR_PTR_1126bad48);
            puVar2 = puVar3;
            func_0x00010c1554e0(puVar3);
            puVar4 = puVar3;
            func_0x00010c26b3c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c08ac80(puVar3);
            puVar6 = puVar3;
            func_0x00010bfd4a60(puVar3);
            puVar7 = puVar3;
            func_0x00010bfd5000(puVar3);
            puVar8 = puVar3;
            func_0x00010bf63640(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10556cc54(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
            param_1 = puVar3;
            goto LAB_10556ce84;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bad38);
      puVar2 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar9);
      if (puVar2 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126bad48;
        _objc_alloc(PTR_PTR_1126bad48);
        puVar3 = puVar2;
        func_0x00010c1554e0(puVar2);
        puVar4 = puVar2;
        func_0x00010c26b3c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c08ac80(puVar2);
        puVar6 = puVar2;
        func_0x00010bfd4a60(puVar2);
        puVar7 = puVar2;
        func_0x00010bfd5000(puVar2);
        puVar8 = puVar2;
        func_0x00010bf63640(puVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10556cc54(puVar9,puVar1,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8);
        param_1 = puVar2;
LAB_10556ce84:
        _objc_release(puVar8);
        _objc_release(puVar4);
        goto LAB_10556d0a8;
      }
LAB_10556d0a0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10556d0a8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10556d158; end: 10556d1cb;  */

void FUN_10556d158(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10556cd50();
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



/* Entry: 10556d1cc; end: 10556d23b;  */

void FUN_10556d1cc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bad38;
    _objc_alloc(PTR_PTR_1126bad38);
    func_0x00010c042dc0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10556d23c; end: 10556d26b; -[SCCTPSearchSectionChangeRequest .cxx_destruct] */

void FUN_10556d23c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10556d26c; end: 10556d277; -[SCCTPSearchSectionChangeRequest table] */

undefined * FUN_10556d26c(void)

{
  return &UNK_10f2d178c;
}



/* Entry: 10556d278; end: 10556d2bf; -[SCCTPSearchSectionChangeRequest createTableWithSQLite:] */

void FUN_10556d278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb22b8,0x98,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10556d2c0; end: 10556d6af; -[SCCTPSearchSectionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556d2c0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10556d1cc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10556d6b0(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d1820);
    if (lVar6 == 0) goto LAB_10556d64c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + uVar8);
    }
    _sqlite3_bind_int64(lVar6,2,uVar7);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10556d64c;
    uVar10 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bad38);
    func_0x00010c21c9a0(puVar9);
LAB_10556d634:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d17f0);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bad38);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556d658;
          }
        }
      }
      puVar9 = (undefined *)0x0;
      goto LAB_10556d658;
    }
    FUN_10556d1cc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10556d6b0(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d1868);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_int64(param_3,3,uVar7);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(param_3,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bad38);
        func_0x00010c21c9a0(puVar9);
        goto LAB_10556d634;
      }
    }
LAB_10556d64c:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10556d658:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10556d6b0; end: 10556d99b;  */

ulong FUN_10556d6b0(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c1554e0(param_2);
  pcVar5 = param_2;
  func_0x00010c26b3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar12 = 0;
    goto LAB_10556d7c8;
  }
  pcVar6 = pcVar5;
  _CFStringGetCStringPtr(pcVar5,0x8000100);
  uVar12 = param_1;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    _strlen(pcVar6);
    func_0x0001001cde08(param_1,pcVar6,pcVar7);
    goto LAB_10556d7c8;
  }
  pcVar6 = pcVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar5;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar6 != (char *)0x0) goto LAB_10556d788;
    uVar12 = 0;
  }
  else {
LAB_10556d788:
    pcVar8 = pcVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar9 = pcVar6;
    func_0x00010c08fa60(pcVar6);
    pcVar7 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
    }
    func_0x0001001cde08(param_1,pcVar7,pcVar9);
  }
  _objc_release(pcVar6);
LAB_10556d7c8:
  _objc_release(pcVar5);
  pcVar6 = param_2;
  func_0x00010c08ac80(param_2);
  pcVar7 = param_2;
  func_0x00010bfd4a60();
  pcVar8 = param_2;
  func_0x00010bfd5000(param_2);
  pcVar9 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar9 == (char *)0x0) {
    uVar13 = 0;
  }
  else {
    pcVar10 = pcVar9;
    _objc_retainAutorelease(pcVar9);
    func_0x00010bf25f00();
    pcVar11 = pcVar9;
    func_0x00010c08fa60(pcVar9);
    uVar13 = param_1;
    func_0x0001001d1030(param_1,pcVar10,pcVar11);
  }
  _objc_release(pcVar9);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,8,pcVar6,0);
  func_0x0001001ce220(param_1,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar12 & 0xffffffff);
  func_0x0001001ce354(param_1,4,pcVar4,0);
  func_0x000100ab13ac(param_1,0xc,pcVar8,0);
  func_0x000100ab13ac(param_1,10,(ulong)pcVar7 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar9);
  _objc_release(pcVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10556d99c; end: 10556d9ff;  */

undefined ** FUN_10556d99c(void)

{
  int iVar1;
  
  if ((bRam0000000113819b08 & 1) == 0) {
    iVar1 = 0x13819b08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130e3b10,0x100000000);
      ___cxa_guard_release(0x113819b08);
    }
  }
  return &PTR_PTR_1130e3b10;
}



/* Entry: 10556da00; end: 10556da87;  */

void FUN_10556da00(uint *param_1,undefined1 *param_2)

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



/* Entry: 10556da88; end: 10556db13;  */

void FUN_10556da88(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf9e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf9e720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10556db14; end: 10556dbcb;  */

undefined8 FUN_10556db14(void)

{
  int iVar1;
  
  if ((bRam0000000113819b80 & 1) == 0) {
    iVar1 = 0x13819b80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819b18 = 0xe;
      puRam0000000113819b20 = &UNK_10f2d18c5;
      uRam0000000113819b28 = 0x10001;
      pcRam0000000113819b30 = FUN_10556dbcc;
      pcRam0000000113819b38 = FUN_10556dc08;
      ppuRam0000000113819b10 = &PTR_DAT_110896c88;
      uRam0000000113819b50 = 0;
      uRam0000000113819b48 = 0;
      uRam0000000113819b60 = 0;
      uRam0000000113819b58 = 0;
      uRam0000000113819b70 = 0;
      uRam0000000113819b68 = 0;
      uRam0000000113819b78 = 0;
      ___cxa_atexit(0x1055530c4,0x113819b10,0x100000000);
      ___cxa_guard_release(0x113819b80);
    }
  }
  return 0x113819b10;
}



/* Entry: 10556dbcc; end: 10556dc07;  */

int FUN_10556dbcc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 10556dc08; end: 10556dc5b;  */

undefined8 FUN_10556dc08(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c084fa0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10556dc5c; end: 10556dc67; +[SCCTPExternalId table] */

undefined * FUN_10556dc5c(void)

{
  return &UNK_10f2d18cf;
}



/* Entry: 10556dc68; end: 10556dd5b; +[SCCTPExternalId immutableObjectParse:bufferSize:] */

void FUN_10556dc68(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126bace0;
  _objc_alloc(PTR_PTR_1126bace0);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    if (6 < uVar3) {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6));
      cVar5 = '\0';
      if (uVar7 != 0) {
        cVar5 = *(char *)((long)piVar1 + uVar7);
      }
      goto LAB_10556dd18;
    }
  }
  cVar5 = '\0';
LAB_10556dd18:
  func_0x00010c011480(puVar4,param_2,puVar8,(int)cVar5);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10556dd5c; end: 10556dd7f; +[SCCTPExternalId objectClassFunctionPointer] */

undefined1  [16] FUN_10556dd5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10556dd78;
  auVar1._0_8_ = 0x10556dd70;
  return auVar1;
}



/* Entry: 10556dd80; end: 10556de57;  */

void FUN_10556dd80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126bad08;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bf9e720(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c084fa0(param_2);
    FUN_10556de58(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10556de58; end: 10556defb;  */

undefined1 * FUN_10556de58(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126e8fa8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_4;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10556defc; end: 10556e237;  */

void FUN_10556defc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
LAB_10556e1a0:
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar1 = param_1;
      func_0x00010bf9e720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_10556e1a4;
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010bf636c0();
      _objc_release(puVar5);
      func_0x0001001b9e08(puVar1,&UNK_10f2d18df);
      puVar5 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x0) goto LAB_10556e1a4;
      puVar5 = param_1;
      func_0x00010bf9e720(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
      _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
      _objc_release(puVar5);
      _objc_release(puVar5);
      puVar5 = param_1;
      func_0x00010c084fa0(param_1);
      _sqlite3_bind_int64(puVar1,2,(long)(int)puVar5);
      puVar5 = puVar1;
      _sqlite3_step();
      if ((int)puVar5 != 100) goto LAB_10556e1a0;
      puVar2 = puVar1;
      _sqlite3_column_int64(puVar1,0);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bace0);
      _sqlite3_column_blob(puVar1,1);
      _sqlite3_column_bytes(puVar1,1);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      _sqlite3_reset(puVar1);
      if (puVar3 == (undefined *)0x0) goto LAB_10556e19c;
      puVar5 = PTR_PTR_1126bad08;
      _objc_alloc(PTR_PTR_1126bad08);
      puVar1 = puVar3;
      func_0x00010bf9e720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c084fa0(puVar3);
      FUN_10556de58(puVar5,puVar2,puVar1,puVar4);
      param_1 = puVar3;
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bace0);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 == (undefined *)0x0) {
LAB_10556e19c:
        param_1 = (undefined *)0x0;
        goto LAB_10556e1a0;
      }
      puVar5 = PTR_PTR_1126bad08;
      _objc_alloc(PTR_PTR_1126bad08);
      puVar1 = puVar3;
      func_0x00010bf9e720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c084fa0(puVar3);
      FUN_10556de58(puVar5,puVar2,puVar1,puVar4);
      param_1 = puVar3;
    }
    _objc_release(puVar1);
  }
LAB_10556e1a4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10556e238; end: 10556e2ab;  */

void FUN_10556e238(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10556defc();
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



/* Entry: 10556e2ac; end: 10556e3e7;  */

void FUN_10556e2ac(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bad08;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_10556defc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar2 = PTR_PTR_1126bad08;
    FUN_10556dd80(PTR_PTR_1126bad08,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar2 = param_1;
    func_0x00010bf9e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c084fa0();
    puVar1[0x14] = (char)puVar2;
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10556e3e8; end: 10556e44b;  */

void FUN_10556e3e8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bace0;
    _objc_alloc(PTR_PTR_1126bace0);
    func_0x00010c011480();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10556e44c; end: 10556e457; -[SCCTPExternalIdChangeRequest .cxx_destruct] */

void FUN_10556e44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10556e458; end: 10556e463; -[SCCTPExternalIdChangeRequest table] */

undefined * FUN_10556e458(void)

{
  return &UNK_10f2d18cf;
}



/* Entry: 10556e464; end: 10556e4ab; -[SCCTPExternalIdChangeRequest createTableWithSQLite:] */

void FUN_10556e464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb2350,0xa5,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10556e4ac; end: 10556e8a3; -[SCCTPExternalIdChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556e4ac(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar6 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar6 == 1) {
    FUN_10556e3e8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_10556e8a4(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d195d);
    if (lVar5 == 0) goto LAB_10556e840;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
    _sqlite3_bind_text(lVar5,2,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar7 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)*(char *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,3,iVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_10556e840;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bace0);
    func_0x00010c21c9a0(puVar8);
LAB_10556e828:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d1932);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bace0);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556e84c;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_10556e84c;
    }
    FUN_10556e3e8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_10556e8a4(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d19a9);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar10 + (ulong)*puVar10);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar7 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)*(char *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,4,iVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bace0);
        func_0x00010c21c9a0(puVar8);
        goto LAB_10556e828;
      }
    }
LAB_10556e840:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_10556e84c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10556e8a4; end: 10556ea83;  */

ulong FUN_10556e8a4(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010bf9e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_10556e9a4;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_10556e9a4;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_10556e964;
    uVar9 = 0;
  }
  else {
LAB_10556e964:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_10556e9a4:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c084fa0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce42c(param_1,6,pcVar5,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10556ea84; end: 10556eb3b;  */

undefined8 FUN_10556ea84(void)

{
  int iVar1;
  
  if ((bRam0000000113819bf8 & 1) == 0) {
    iVar1 = 0x13819bf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819b90 = 0xe;
      puRam0000000113819b98 = &UNK_10f2d19fe;
      uRam0000000113819ba0 = 0x10001;
      pcRam0000000113819ba8 = FUN_10556eb3c;
      pcRam0000000113819bb0 = FUN_10556eb78;
      ppuRam0000000113819b88 = &PTR_DAT_110896c88;
      uRam0000000113819bc8 = 0;
      uRam0000000113819bc0 = 0;
      uRam0000000113819bd8 = 0;
      uRam0000000113819bd0 = 0;
      uRam0000000113819be8 = 0;
      uRam0000000113819be0 = 0;
      uRam0000000113819bf0 = 0;
      ___cxa_atexit(0x1055530c4,0x113819b88,0x100000000);
      ___cxa_guard_release(0x113819bf8);
    }
  }
  return 0x113819b88;
}



/* Entry: 10556eb3c; end: 10556eb77;  */

int FUN_10556eb3c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)((long)piVar1 + uVar3);
  }
  return (int)cVar2;
}



/* Entry: 10556eb78; end: 10556ebcb;  */

undefined8 FUN_10556eb78(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c084fa0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10556ebcc; end: 10556ebd7; +[SCCTPExternalIdSyncMetadata table] */

undefined * FUN_10556ebcc(void)

{
  return &UNK_10f2d1a08;
}



/* Entry: 10556ebd8; end: 10556ec4b; +[SCCTPExternalIdSyncMetadata immutableObjectParse:bufferSize:] */

void FUN_10556ebd8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  _objc_alloc(PTR_PTR_1126bacf0);
  uVar2 = *(ushort *)((long)piVar1 - (long)*piVar1);
  uVar4 = 0;
  if (((4 < uVar2) && (6 < uVar2)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 != 0)) {
    uVar4 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  func_0x00010c020460(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10556ec4c; end: 10556ec6f; +[SCCTPExternalIdSyncMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_10556ec4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10556ec68;
  auVar1._0_8_ = 0x10556ec60;
  return auVar1;
}



/* Entry: 10556ec70; end: 10556f0af;  */

void FUN_10556ec70(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_70;
  ppuVar6 = &puStack_70;
  ppuVar7 = &puStack_70;
  _objc_retain();
  puVar8 = PTR_PTR_1126bad50;
  _objc_retain(param_2);
  _objc_opt_self(puVar8);
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
LAB_10556ef34:
    puVar8 = (undefined *)0x0;
LAB_10556ef38:
    _objc_release(puVar8);
  }
  else {
    puVar8 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar8 < 0) {
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010bf636c0();
      _objc_release(puVar8);
      func_0x0001001b9e08(puVar3,&UNK_10f2d1a24);
      puVar8 = param_2;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = param_2;
        func_0x00010c084fa0(param_2);
        _sqlite3_bind_int64(puVar3,1,(long)(int)puVar4);
        puVar4 = puVar3;
        _sqlite3_step();
        if ((int)puVar4 == 100) {
          puVar8 = puVar3;
          _sqlite3_column_int64(puVar3,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bacf0);
          _sqlite3_column_blob(puVar3,1);
          _sqlite3_column_bytes(puVar3,1);
          puVar5 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar4);
          _sqlite3_reset(puVar3);
          if (puVar5 == (undefined *)0x0) goto LAB_10556ef34;
          puVar4 = PTR_PTR_1126bad50;
          _objc_alloc();
          puVar3 = puVar5;
          func_0x00010c084fa0();
          uVar1 = SUB81(puVar3,0);
          func_0x00010c08ac80(puVar5);
          puVar3 = (undefined *)0x0;
          if (puVar4 != (undefined *)0x0) {
            puStack_68 = PTR_PTR_1126e8fb0;
            uVar9 = param_1;
            puStack_70 = puVar4;
            _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
            uVar10 = param_1;
            goto LAB_10556ed80;
          }
          goto LAB_10556ed94;
        }
      }
      goto LAB_10556ef38;
    }
    puVar8 = param_2;
    func_0x00010c1422e0();
    puVar3 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacf0);
    puVar5 = puVar3;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x0) goto LAB_10556ef34;
    puVar4 = PTR_PTR_1126bad50;
    _objc_alloc();
    puVar3 = puVar5;
    func_0x00010c084fa0();
    uVar1 = SUB81(puVar3,0);
    func_0x00010c08ac80(puVar5);
    puVar3 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) {
      puStack_68 = PTR_PTR_1126e8fb0;
      uVar9 = param_1;
      puStack_70 = puVar4;
      _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
      ppuVar6 = ppuVar2;
      uVar10 = param_1;
LAB_10556ed80:
      puVar3 = (undefined *)ppuVar6;
      param_1 = uVar9;
      if (ppuVar6 != (undefined **)0x0) {
        *(undefined **)((long)ppuVar6 + 8) = puVar8;
        *(undefined1 *)((long)ppuVar6 + 0x14) = uVar1;
        *(undefined8 *)((long)ppuVar6 + 0x18) = uVar10;
      }
    }
LAB_10556ed94:
    _objc_release(puVar5);
    if (puVar3 != (undefined *)0x0) {
      *(undefined4 *)(puVar3 + 0x10) = 2;
      _objc_release(param_2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0;
      }
      puVar8 = param_2;
      func_0x00010c084fa0();
      puVar3[0x14] = (char)puVar8;
      func_0x00010c08ac80(param_2);
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      _objc_retain(puVar3);
      puVar8 = puVar3;
      goto LAB_10556efec;
    }
  }
  _objc_release(param_2);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  puVar8 = PTR_PTR_1126bad50;
  _objc_retain(param_2);
  _objc_opt_self(puVar8);
  if (param_2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126bad50;
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    puVar8 = PTR_PTR_1126bad50;
    _objc_alloc();
    puVar4 = param_2;
    func_0x00010c084fa0();
    func_0x00010c08ac80(param_2);
    puVar3 = (undefined *)0x0;
    if (puVar8 != (undefined *)0x0) {
      puStack_68 = PTR_PTR_1126e8fb0;
      puStack_70 = puVar8;
      _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
      puVar3 = (undefined *)ppuVar7;
      if (ppuVar7 != (undefined **)0x0) {
        *(undefined8 *)((long)ppuVar7 + 8) = 0xffffffffffffffff;
        *(char *)((long)ppuVar7 + 0x14) = (char)puVar4;
        *(undefined8 *)((long)ppuVar7 + 0x18) = param_1;
      }
    }
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
  puVar8 = (undefined *)0x0;
LAB_10556efec:
  _objc_release(puVar8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10556f0b0; end: 10556f113;  */

void FUN_10556f0b0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bacf0;
    _objc_alloc(PTR_PTR_1126bacf0);
    func_0x00010c020460(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10556f114; end: 10556f11f; -[SCCTPExternalIdSyncMetadataChangeRequest table] */

undefined * FUN_10556f114(void)

{
  return &UNK_10f2d1a08;
}



/* Entry: 10556f120; end: 10556f167; -[SCCTPExternalIdSyncMetadataChangeRequest createTableWithSQLite:] */

void FUN_10556f120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb23f5,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10556f168; end: 10556f5d7; -[SCCTPExternalIdSyncMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556f168(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  
  iVar7 = *(int *)(param_2 + 0x10);
  puVar5 = param_2;
  if (iVar7 == 1) {
    FUN_10556f0b0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar9 = puVar5;
    func_0x00010c084fa0(puVar5);
    func_0x00010c08ac80(puVar5);
    *(undefined1 *)(param_5 + 0x46) = 1;
    iVar7 = *(int *)(param_5 + 0x20);
    iVar2 = *(int *)(param_5 + 0x30);
    iVar3 = *(int *)(param_5 + 0x28);
    func_0x0001001ce11c(param_1,0,param_5,6);
    func_0x0001001ce42c(param_5,4,puVar9,0);
    lVar6 = param_5;
    func_0x0001001ce548(param_5,(iVar7 - iVar2) + iVar3);
    _objc_release(puVar5);
    func_0x0001001ce6fc(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    lVar6 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f2d1aa7);
    if (lVar6 == 0) goto LAB_10556f564;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*(char *)((long)piVar1 + uVar8);
    }
    _sqlite3_bind_int64(lVar6,2,iVar7);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10556f564;
    uVar10 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_2 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacf0);
    func_0x00010c21c9a0(puVar9);
LAB_10556f54c:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar7 != 2) {
      if (iVar7 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        func_0x0001001b9e08(param_4,&UNK_10f2d1a70);
        if (param_4 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_4 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bacf0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556f570;
          }
        }
      }
      puVar9 = (undefined *)0x0;
      goto LAB_10556f570;
    }
    FUN_10556f0b0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar9 = puVar5;
    func_0x00010c084fa0(puVar5);
    func_0x00010c08ac80(puVar5);
    *(undefined1 *)(param_5 + 0x46) = 1;
    iVar7 = *(int *)(param_5 + 0x20);
    iVar2 = *(int *)(param_5 + 0x30);
    iVar3 = *(int *)(param_5 + 0x28);
    func_0x0001001ce11c(param_1,0,param_5,6);
    func_0x0001001ce42c(param_5,4,puVar9,0);
    lVar6 = param_5;
    func_0x0001001ce548(param_5,(iVar7 - iVar2) + iVar3);
    _objc_release(puVar5);
    func_0x0001001ce6fc(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x0001001b9e08(param_4,&UNK_10f2d1aee);
    if (param_4 != 0) {
      _sqlite3_bind_blob(param_4,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(param_4,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)*(char *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_int64(param_4,3,iVar7);
      _sqlite3_step();
      if ((int)param_4 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bacf0);
        func_0x00010c21c9a0(puVar9);
        goto LAB_10556f54c;
      }
    }
LAB_10556f564:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10556f570:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10556f5d8; end: 10556f5e3; +[SCCTPSectionMetadata table] */

undefined * FUN_10556f5d8(void)

{
  return &UNK_10f2d1b3f;
}



/* Entry: 10556f5e4; end: 10556f5ef; +[SCCTPSectionMetadata immutableObjectParse:bufferSize:] */

void FUN_10556f5e4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  piVar2 = (int *)((long)param_3 + (ulong)*param_3);
  if (piVar2 == (int *)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_10556afc8;
  }
  puVar10 = PTR_PTR_1126bacf8;
  _objc_alloc(PTR_PTR_1126bacf8);
  lVar7 = (long)*piVar2;
  uVar3 = *(ushort *)((long)piVar2 - lVar7);
  if (uVar3 < 5) {
    puVar11 = (undefined *)0x0;
LAB_10556af98:
    cVar6 = '\0';
LAB_10556afa0:
    cVar8 = '\0';
    uVar4 = 0;
LAB_10556afa4:
    uVar5 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar2 - lVar7))[2];
    if (uVar9 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar9);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar2;
      uVar3 = *(ushort *)((long)piVar2 - lVar7);
    }
    if (uVar3 < 7) goto LAB_10556af98;
    uVar9 = (ulong)*(ushort *)((long)piVar2 + (6 - lVar7));
    cVar6 = '\0';
    if (uVar9 != 0) {
      cVar6 = *(char *)((long)piVar2 + uVar9);
    }
    if (uVar3 < 9) goto LAB_10556afa0;
    uVar9 = (ulong)*(ushort *)((long)piVar2 + (8 - lVar7));
    if (uVar9 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)piVar2 + uVar9);
    }
    if (uVar3 < 0xb) {
      cVar8 = '\0';
      goto LAB_10556afa4;
    }
    uVar9 = (ulong)*(ushort *)((long)piVar2 + (10 - lVar7));
    cVar8 = '\0';
    if (uVar9 != 0) {
      cVar8 = *(char *)((long)piVar2 + uVar9);
    }
    if ((uVar3 < 0xd) || (uVar9 = (ulong)*(ushort *)((long)piVar2 + (0xc - lVar7)), uVar9 == 0))
    goto LAB_10556afa4;
    uVar5 = *(undefined4 *)((long)piVar2 + uVar9);
  }
  func_0x00010c0437c0(puVar10,param_2,puVar11,(int)cVar6,uVar4,(int)cVar8,uVar5);
  _objc_release(puVar11);
LAB_10556afc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10556f5f0; end: 10556f603; +[SCCTPSectionMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_10556f5f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10556f62c;
  auVar1._0_8_ = FUN_10556f604;
  return auVar1;
}



/* Entry: 10556f604; end: 10556f62b;  */

int FUN_10556f604(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf267e62;
  _strcmp("rank",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 10556f62c; end: 10556f6cb;  */

bool FUN_10556f62c(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f2d1b56);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10556f6cc; end: 10556f737;  */

void FUN_10556f6cc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bacf8;
    _objc_alloc(PTR_PTR_1126bacf8);
    func_0x00010c0437c0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10556f738; end: 10556f743; -[SCCTPSectionMetadataChangeRequest .cxx_destruct] */

void FUN_10556f738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10556f744; end: 10556f74f; -[SCCTPSectionMetadataChangeRequest table] */

undefined * FUN_10556f744(void)

{
  return &UNK_10f2d1b3f;
}



/* Entry: 10556f750; end: 10556f803; -[SCCTPSectionMetadataChangeRequest createTableWithSQLite:] */

void FUN_10556f750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb2485,0x8c,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddb2511,0x66,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddb2577,0x74,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10556f804; end: 10556fd9b; -[SCCTPSectionMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10556f804(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_10556f6cc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10556b030(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    FUN_10507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d1c0f);
    if (lVar7 == 0) goto LAB_10556fcf8;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_10556fcf8;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f2d1b56);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_10556fcf8;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bacf8);
    func_0x00010c21c9a0(puVar11);
LAB_10556fcd0:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2d1ba1);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,&UNK_10f2d1bd3);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_10556f930;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bacf8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10556fd04;
          }
        }
      }
LAB_10556f930:
      puVar11 = (undefined *)0x0;
      goto LAB_10556fd04;
    }
    FUN_10556f6cc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_10556b030(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d1c52);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bacf8);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010c11f520();
        puVar5 = puVar6;
        func_0x00010c11f520();
        if ((int)puVar11 != (int)puVar5) {
          func_0x0001001b9e08(param_3,&UNK_10f2d1c9f);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_10556fcf0;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bacf8);
        func_0x00010c21c9a0(puVar11);
        goto LAB_10556fcd0;
      }
    }
LAB_10556fcf0:
    _objc_release(puVar6);
LAB_10556fcf8:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_10556fd04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10556fd9c; end: 10556fe97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10556fd9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar4 = PTR_PTR_1126bad58;
    _objc_alloc(PTR_PTR_1126bad58);
    lVar1 = param_1;
    FUN_10556fe98(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1 + _DAT_112725abc;
      _objc_loadWeakRetained(lVar5);
    }
    lVar3 = lVar5;
    func_0x00010bf5aea0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe5a0(puVar4,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10556fe98; end: 10556febb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10556fe98(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725ad0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10556febc; end: 10556ff77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10556febc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1 + _DAT_112725ad4;
      _objc_loadWeakRetained(lVar2);
    }
    puVar3 = PTR_PTR_1126bad60;
    _objc_alloc(PTR_PTR_1126bad60);
    lVar1 = lVar2;
    func_0x00010bfcdfa0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0184a0(puVar3,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10556ff78; end: 1055702b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10556ff78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained();
    lVar1 = lVar2;
    FUN_1055702b8();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c085040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126bad68;
    _objc_alloc();
    func_0x00010c011120();
    puVar5 = PTR_PTR_1126bad70;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026700(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010c2353c0();
    _objc_release(uVar7);
    lVar1 = lVar2;
    if ((int)uVar14 == 0) {
      puVar6 = PTR_PTR_1126bad80;
      _objc_alloc();
      func_0x0001055702dc(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010bf6d580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00b580(puVar6,param_2,lVar10,*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38),lVar3,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      puVar6 = PTR_PTR_1126bad78;
      _objc_alloc();
      func_0x0001055702dc(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010bf6d580();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      lVar8 = lVar2 + _DAT_112725ab4;
      _objc_loadWeakRetained(lVar8);
      lVar9 = lVar8;
      func_0x00010bf53fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00b5a0(puVar6,param_2,lVar10,uVar14,lVar3,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar8);
    }
    _objc_release(lVar10);
    _objc_release(lVar1);
    puVar11 = PTR_PTR_1126bad88;
    _objc_alloc();
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = lVar2;
    FUN_10556fe98(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0205e0(puVar11,param_2,uVar14,lVar3,lVar10,*(undefined8 *)(param_1 + 0x40));
    _objc_release(lVar10);
    _objc_release(lVar1);
    puVar12 = PTR_PTR_1126bad90;
    _objc_alloc(PTR_PTR_1126bad90);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    puStack_80 = puVar6;
    puStack_78 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f280(puVar12,param_2,lVar3,puVar13,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release();
  }
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) && (___stack_chk_fail(), lVar2 != 0))
  {
    _objc_loadWeakRetained(lVar2 + _DAT_112725ac8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055702b8; end: 1055702ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055702b8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725ac8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105570300; end: 1055704bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105570300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined *puVar16;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained();
    puVar16 = PTR_PTR_1126bad98;
    _objc_alloc();
    lVar4 = lVar3;
    FUN_1055702b8();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa4660();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    lVar6 = lVar3;
    FUN_10556fe98();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    lVar8 = lVar3 + _DAT_112725ab4;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3 + _DAT_112725ab8;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3 + _DAT_112725abc;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f1e0(puVar16,param_2,lVar5,uVar1,uVar2,uVar14,lVar7,uVar15,lVar9,lVar11,lVar13);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}


