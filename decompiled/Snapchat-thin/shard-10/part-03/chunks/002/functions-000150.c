/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fe61dc; end: 107fe63f7;  */

long * FUN_107fe61dc(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    undefined1 param_7,long param_8,undefined4 param_9,undefined4 param_10,
                    long param_11,undefined1 param_12,undefined4 param_13,long param_14,
                    long param_15,long param_16,undefined4 param_17,undefined4 param_18,
                    long param_19,long param_20)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_20);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126fc048;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[5];
      plVar1[5] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[6];
      plVar1[6] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[7];
      plVar1[7] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[8];
      plVar1[8] = param_6;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_7;
      _objc_retain(param_8);
      lVar2 = plVar1[9];
      plVar1[9] = param_8;
      _objc_release(lVar2);
      *(undefined4 *)(plVar1 + 3) = param_9;
      *(undefined4 *)((long)plVar1 + 0x1c) = param_10;
      *(undefined1 *)((long)plVar1 + 0x15) = param_12;
      plVar1[10] = param_11;
      plVar1[0xb] = param_14;
      plVar1[0xc] = param_15;
      plVar1[0xd] = param_16;
      *(undefined4 *)(plVar1 + 4) = param_17;
      plVar1[0xe] = param_19;
      _objc_retain(param_20);
      lVar2 = plVar1[0xf];
      plVar1[0xf] = param_20;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_20);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 107fe63f8; end: 107fe646b;  */

void FUN_107fe63f8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107fe646c();
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



/* Entry: 107fe646c; end: 107fe6a63;  */

void FUN_107fe646c(undefined *param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar14 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar14 < 0) {
      puVar14 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar14;
        func_0x00010bf636c0();
        _objc_release(puVar14);
        func_0x0001001b9e08(puVar1,&UNK_10f46e59d);
        puVar14 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_107fe6960;
        puVar14 = param_1;
        func_0x00010bfe5ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar14;
        _objc_retainAutorelease(puVar14);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar14);
        _objc_release(puVar14);
        puVar14 = puVar1;
        _sqlite3_step();
        if ((int)puVar14 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar14 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bf840);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar14;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar14);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_107fe6958;
          puVar14 = PTR_PTR_1126d8cd8;
          _objc_alloc();
          puVar1 = puVar3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c29eac0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c1577e0();
          puVar8 = puVar3;
          func_0x00010bf0b2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010bf2a800();
          puVar10 = puVar3;
          func_0x00010bf97860();
          puVar11 = puVar3;
          func_0x00010bf9c740();
          puVar12 = puVar3;
          func_0x00010c074c20();
          func_0x00010bef0260();
          func_0x00010c113c80();
          func_0x00010c08a360();
          func_0x00010bf977c0();
          func_0x00010c124e40();
          puVar13 = puVar3;
          func_0x00010c2410e0();
          _objc_retainAutoreleasedReturnValue();
          FUN_107fe61dc(puVar14,puVar2,puVar1,puVar4,puVar5,puVar6,(ulong)puVar7 & 0xffffffff,puVar8
                        ,(int)puVar9,(int)puVar10,puVar11,(char)puVar12);
          goto LAB_107fe666c;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0();
      puVar14 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bf840);
      puVar3 = puVar14;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar14);
      if (puVar3 != (undefined *)0x0) {
        puVar14 = PTR_PTR_1126d8cd8;
        _objc_alloc();
        puVar1 = puVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c260dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c29eac0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c1577e0();
        puVar8 = puVar3;
        func_0x00010bf0b2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010bf2a800();
        puVar10 = puVar3;
        func_0x00010bf97860();
        puVar11 = puVar3;
        func_0x00010bf9c740();
        puVar12 = puVar3;
        func_0x00010c074c20();
        func_0x00010bef0260();
        func_0x00010c113c80();
        func_0x00010c08a360();
        func_0x00010bf977c0();
        func_0x00010c124e40();
        puVar13 = puVar3;
        func_0x00010c2410e0();
        _objc_retainAutoreleasedReturnValue();
        FUN_107fe61dc(puVar14,puVar2,puVar1,puVar4,puVar5,puVar6,(ulong)puVar7 & 0xffffffff,puVar8,
                      (int)puVar9,(int)puVar10,puVar11,(char)puVar12);
LAB_107fe666c:
        _objc_release(puVar13);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar1);
        param_1 = puVar3;
        goto LAB_107fe6960;
      }
LAB_107fe6958:
      param_1 = (undefined *)0x0;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_107fe6960:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107fe6a64; end: 107fe6ad7;  */

void FUN_107fe6a64(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107fe646c();
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



/* Entry: 107fe6ad8; end: 107fe6f7f;  */

void FUN_107fe6ad8(ulong param_1,undefined1 *param_2)

{
  undefined *puVar1;
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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8cd8;
  FUN_107fe63f8(PTR_PTR_1126d8cd8,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar13 = PTR_PTR_1126d8cd8;
    _objc_retain(param_1);
    _objc_opt_self(puVar13);
    puVar13 = PTR_PTR_1126d8cd8;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      uVar2 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c29eac0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c1577e0();
      uVar7 = param_1;
      func_0x00010bf0b2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010bf2a800();
      uVar9 = param_1;
      func_0x00010bf97860();
      uVar10 = param_1;
      func_0x00010bf9c740();
      uVar11 = param_1;
      func_0x00010c074c20();
      func_0x00010bef0260();
      func_0x00010c113c80();
      func_0x00010c08a360();
      func_0x00010bf977c0();
      func_0x00010c124e40();
      uVar12 = param_1;
      func_0x00010c2410e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_107fe61dc(puVar13,0xffffffffffffffff,uVar2,uVar3,uVar4,uVar5,uVar6 & 0xffffffff,uVar7,
                    (int)uVar8,(int)uVar9,uVar10,(char)uVar11);
      _objc_release(uVar12);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    *(undefined4 *)(puVar13 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    uVar2 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c260dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c29eac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c1577e0();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_1;
    func_0x00010bf0b2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf2a800();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_1;
    func_0x00010bf97860();
    *(int *)(puVar1 + 0x1c) = (int)uVar2;
    uVar2 = param_1;
    func_0x00010bf9c740();
    *(ulong *)(puVar1 + 0x50) = uVar2;
    uVar2 = param_1;
    func_0x00010c074c20();
    puVar1[0x15] = (char)uVar2;
    uVar2 = param_1;
    func_0x00010bef0260();
    *(ulong *)(puVar1 + 0x58) = uVar2;
    uVar2 = param_1;
    func_0x00010c113c80();
    *(ulong *)(puVar1 + 0x60) = uVar2;
    uVar2 = param_1;
    func_0x00010c08a360();
    *(ulong *)(puVar1 + 0x68) = uVar2;
    uVar2 = param_1;
    func_0x00010bf977c0();
    *(int *)(puVar1 + 0x20) = (int)uVar2;
    uVar2 = param_1;
    func_0x00010c124e40();
    *(ulong *)(puVar1 + 0x70) = uVar2;
    uVar2 = param_1;
    func_0x00010c2410e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    _objc_retain(puVar1);
    puVar13 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107fe6f80; end: 107fe7027;  */

void FUN_107fe6f80(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bf840;
    _objc_alloc(PTR_PTR_1126bf840);
    func_0x00010c01bba0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fe7028; end: 107fe7087; -[SCMemoriesCameraRollFeaturedStoryChangeRequest .cxx_destruct] */

void FUN_107fe7028(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 107fe7088; end: 107fe7093; -[SCMemoriesCameraRollFeaturedStoryChangeRequest table] */

undefined * FUN_107fe7088(void)

{
  return &UNK_10f46e57b;
}



/* Entry: 107fe7094; end: 107fe70db; -[SCMemoriesCameraRollFeaturedStoryChangeRequest createTableWithSQLite:] */

void FUN_107fe7094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10deec60c,0x97,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107fe70dc; end: 107fe7463; -[SCMemoriesCameraRollFeaturedStoryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107fe70dc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_107fe6f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107fe7464(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f46e62d);
    if (lVar6 == 0) goto LAB_107fe7400;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_107fe7400;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bf840);
    func_0x00010c21c9a0(puVar7);
LAB_107fe73e8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f46e5f0);
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
            _objc_opt_class(PTR_PTR_1126bf840);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107fe740c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_107fe740c;
    }
    FUN_107fe6f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107fe7464(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f46e67b);
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
        _objc_opt_class(PTR_PTR_1126bf840);
        func_0x00010c21c9a0(puVar7);
        goto LAB_107fe73e8;
      }
    }
LAB_107fe7400:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_107fe740c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107fe7464; end: 107fe7907;  */

ulong FUN_107fe7464(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c29eac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107fe79f4(&lStack_78,param_1,uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf0b2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107fe79f4(&lStack_90,param_1,uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c2410e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107fe79f4(&lStack_a8,param_1,uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_107fe7b64(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_107fe7b64(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_107fe7b64(param_1,uVar10);
  lVar1 = 0x1130c2400;
  lVar2 = lVar1;
  if (lStack_70 - lStack_78 != 0) {
    lVar2 = lStack_78;
  }
  uVar12 = param_1;
  func_0x000100c47e34(param_1,lVar2,lStack_70 - lStack_78 >> 2);
  uVar13 = param_2;
  func_0x00010c1577e0();
  lVar2 = lVar1;
  if (lStack_88 - lStack_90 != 0) {
    lVar2 = lStack_90;
  }
  uVar14 = param_1;
  func_0x000100c47e34(param_1,lVar2,lStack_88 - lStack_90 >> 2);
  uVar15 = param_2;
  func_0x00010bf2a800();
  uVar16 = param_2;
  func_0x00010bf97860(param_2);
  uVar17 = param_2;
  func_0x00010bf9c740(param_2);
  uVar18 = param_2;
  func_0x00010c074c20();
  uVar19 = param_2;
  func_0x00010bef0260(param_2);
  uVar20 = param_2;
  func_0x00010c113c80(param_2);
  uVar21 = param_2;
  func_0x00010c08a360(param_2);
  uVar22 = param_2;
  func_0x00010bf977c0(param_2);
  uVar23 = param_2;
  func_0x00010c124e40(param_2);
  if (lStack_a0 - lStack_a8 != 0) {
    lVar1 = lStack_a8;
  }
  uVar24 = param_1;
  func_0x000100c47e34(param_1,lVar1,lStack_a0 - lStack_a8 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0x20,uVar23,0);
  func_0x0001001ce1c8(param_1,0x1c,uVar21,0);
  func_0x0001001ce170(param_1,0x1a,uVar20,0);
  func_0x0001001ce1c8(param_1,0x18,uVar19,0);
  func_0x0001001ce1c8(param_1,0x14,uVar17,0);
  func_0x000100c47f00(param_1,0x22,uVar24 & 0xffffffff);
  func_0x000100c3b024(param_1,0x1e,uVar22,0);
  func_0x000100c3b024(param_1,0x12,uVar16,0);
  func_0x0001001ce354(param_1,0x10,uVar15 & 0xffffffff,0);
  func_0x000100c47f00(param_1,0xe,uVar14 & 0xffffffff);
  func_0x000100c47f00(param_1,10,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x16,uVar18 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0xc,uVar13 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107fe7908; end: 107fe79f3;  */

void FUN_107fe7908(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar3 + (ulong)*puVar3 + 4);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010befa120(puVar1,param_2,puVar2);
        }
        _objc_release(puVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_1 + 1 + *param_1);
    }
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fe79f4; end: 107fe7b63;  */

long FUN_107fe79f4(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int aiStack_124 [3];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar5 = param_2;
  _objc_retain(param_3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_118 = 0;
  aiStack_124[1] = 0;
  aiStack_124[2] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        piVar5 = *(int **)(lStack_118 + lVar8 * 8);
        piVar1 = param_2;
        FUN_107fe7b64();
        aiStack_124[0] = (int)piVar1;
        if (aiStack_124[0] != 0) {
          piVar5 = aiStack_124;
          func_0x000100c47d40(param_1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_3);
  __Unwind_Resume(lVar6);
  _objc_retain(piVar5);
  if (piVar5 == (int *)0x0) {
    lVar6 = 0;
    goto LAB_107fe7c44;
  }
  piVar1 = piVar5;
  _CFStringGetCStringPtr(piVar5,0x8000100);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    _strlen(piVar1);
    func_0x0001001cde08(lVar6,piVar1,piVar2);
    goto LAB_107fe7c44;
  }
  piVar1 = piVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (piVar1 == (int *)0x0) {
    piVar1 = piVar5;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (piVar1 != (int *)0x0) goto LAB_107fe7c04;
    lVar6 = 0;
  }
  else {
LAB_107fe7c04:
    piVar3 = piVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    piVar4 = piVar1;
    func_0x00010c08fa60(piVar1);
    piVar2 = (int *)"";
    if (piVar3 != (int *)0x0) {
      piVar2 = piVar3;
    }
    func_0x0001001cde08(lVar6,piVar2,piVar4);
  }
  _objc_release(piVar1);
LAB_107fe7c44:
  _objc_release(piVar5);
  return lVar6;
}



/* Entry: 107fe7b64; end: 107fe7c93;  */

undefined8 FUN_107fe7b64(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_107fe7c44;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_107fe7c44;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_107fe7c04;
    param_1 = 0;
  }
  else {
LAB_107fe7c04:
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
LAB_107fe7c44:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107fe7c94; end: 107fe7cf7;  */

undefined ** FUN_107fe7c94(void)

{
  int iVar1;
  
  if ((bRam0000000113824958 & 1) == 0) {
    iVar1 = 0x13824958;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_11324fa20,0x100000000);
      ___cxa_guard_release(0x113824958);
    }
  }
  return &PTR_PTR_11324fa20;
}



/* Entry: 107fe7cf8; end: 107fe7d7f;  */

void FUN_107fe7cf8(uint *param_1,undefined1 *param_2)

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



/* Entry: 107fe7d80; end: 107fe7e0b;  */

void FUN_107fe7d80(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf2a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf2a8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fe7e0c; end: 107fe7e17; +[SCMemoriesCameraRollFeaturedStoryVisualTags table] */

undefined * FUN_107fe7e0c(void)

{
  return &UNK_10f46e6e0;
}



/* Entry: 107fe7e18; end: 107fe7f4b; +[SCMemoriesCameraRollFeaturedStoryVisualTags immutableObjectParse:bufferSize:] */

void FUN_107fe7e18(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d1770;
  _objc_alloc(PTR_PTR_1126d1770);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
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
    if ((6 < uVar3) && (*(short *)((long)piVar1 + (6 - lVar5)) != 0)) {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      goto LAB_107fe7ef0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_107fe7ef0:
  func_0x00010bffbaa0(puVar4,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fe7f4c; end: 107fe7f6f; +[SCMemoriesCameraRollFeaturedStoryVisualTags objectClassFunctionPointer] */

undefined1  [16] FUN_107fe7f4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107fe7f68;
  auVar1._0_8_ = 0x107fe7f60;
  return auVar1;
}



/* Entry: 107fe7f70; end: 107fe803b;  */

undefined1 * FUN_107fe7f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fc050;
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



/* Entry: 107fe803c; end: 107fe8393;  */

void FUN_107fe803c(undefined *param_1)

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
      func_0x00010bf2a8a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar5,&UNK_10f46e70c);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bf2a8a0(param_1);
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
            _objc_opt_class(PTR_PTR_1126d1770);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_107fe82e4;
            puVar5 = PTR_PTR_1126d8ce0;
            _objc_alloc(PTR_PTR_1126d8ce0);
            puVar2 = puVar3;
            func_0x00010bf2a8a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c2a0540(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_107fe7f70(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_107fe8124;
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
      _objc_opt_class(PTR_PTR_1126d1770);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d8ce0;
        _objc_alloc(PTR_PTR_1126d8ce0);
        puVar2 = puVar3;
        func_0x00010bf2a8a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2a0540(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107fe7f70(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_107fe8124:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_107fe82ec;
      }
LAB_107fe82e4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107fe82ec:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fe8394; end: 107fe8407;  */

void FUN_107fe8394(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107fe803c();
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



/* Entry: 107fe8408; end: 107fe861b;  */

void FUN_107fe8408(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8ce0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_107fe803c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126d8ce0;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126d8ce0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bf2a8a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c2a0540(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_107fe7f70(puVar4,0xffffffffffffffff,puVar2,puVar3);
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
    func_0x00010bf2a8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c2a0540(param_1);
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



/* Entry: 107fe861c; end: 107fe867b;  */

void FUN_107fe861c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d1770;
    _objc_alloc(PTR_PTR_1126d1770);
    func_0x00010bffbaa0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fe867c; end: 107fe86ab; -[SCMemoriesCameraRollFeaturedStoryVisualTagsChangeRequest .cxx_destruct] */

void FUN_107fe867c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107fe86ac; end: 107fe86b7; -[SCMemoriesCameraRollFeaturedStoryVisualTagsChangeRequest table] */

undefined * FUN_107fe86ac(void)

{
  return &UNK_10f46e6e0;
}



/* Entry: 107fe86b8; end: 107fe86ff; -[SCMemoriesCameraRollFeaturedStoryVisualTagsChangeRequest createTableWithSQLite:] */

void FUN_107fe86b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10deec6a3,0xa5,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107fe8700; end: 107fe8a87; -[SCMemoriesCameraRollFeaturedStoryVisualTagsChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107fe8700(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_107fe861c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107fe8a88(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f46e7b2);
    if (lVar6 == 0) goto LAB_107fe8a24;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_107fe8a24;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d1770);
    func_0x00010c21c9a0(puVar7);
LAB_107fe8a0c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f46e76b);
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
            _objc_opt_class(PTR_PTR_1126d1770);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107fe8a30;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_107fe8a30;
    }
    FUN_107fe861c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107fe8a88(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f46e80c);
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
        _objc_opt_class(PTR_PTR_1126d1770);
        func_0x00010c21c9a0(puVar7);
        goto LAB_107fe8a0c;
      }
    }
LAB_107fe8a24:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_107fe8a30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107fe8a88; end: 107fe8cd3;  */

ulong FUN_107fe8a88(ulong param_1,char *param_2)

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
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010bf2a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_107fe8b88;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_107fe8b88;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_107fe8b48;
    uVar9 = 0;
  }
  else {
LAB_107fe8b48:
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
LAB_107fe8b88:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c2a0540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    pcVar6 = pcVar5;
    _objc_retainAutorelease(pcVar5);
    func_0x00010bf25f00();
    pcVar7 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    uVar10 = param_1;
    func_0x0001001d1030(param_1,pcVar6,pcVar7);
  }
  _objc_release(pcVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce220(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107fe8cd4; end: 107fe8def;  */

void FUN_107fe8cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_4);
  func_0x00010c0f84e0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 107fe8df0; end: 107fe9233;  */

void FUN_107fe8df0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  ulong uVar16;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  puVar8 = &uStack_130;
  lVar3 = lVar10;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar16 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar15 = (uint)uVar16;
        _objc_opt_class();
        uVar4 = uVar16;
        _objc_opt_isKindOfClass();
        if ((uVar4 & 1) == 0) {
          _objc_opt_class();
          _objc_opt_isKindOfClass();
          if ((uVar16 & 1) != 0) {
            func_0x00010bfc99e0();
            puVar13 = (undefined *)0x0;
            _objc_retain(0);
            puVar14 = (undefined *)0x0;
            _objc_retain(0);
            if (((uVar15 & 1) == 0) && (uVar15 != 0)) {
              puVar14 = puVar13;
              _UTTypeConformsTo();
              if (((int)puVar14 == 0) &&
                 ((puVar14 = puVar13, _UTTypeConformsTo(), (int)puVar14 == 0 &&
                  (_UTTypeConformsTo(), (int)puVar13 == 0)))) {
                puVar14 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
                func_0x00010bf5a8e0();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar14 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
                func_0x00010bf5a8c0();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(0);
              _objc_release(0);
              puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
              goto joined_r0x000107fe8fec;
            }
LAB_107fe9024:
            _objc_release(puVar13);
            goto LAB_107fe9028;
          }
        }
        else {
          puVar14 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
          func_0x00010bf5a8a0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
joined_r0x000107fe8fec:
          PTR__OBJC_CLASS___NSDate_1126ae770 = puVar13;
          if (puVar14 != (undefined *)0x0) {
            if (*(long *)(param_1 + 0x28) == 0) {
              func_0x00010bf64de0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1855e0(puVar14);
              goto LAB_107fe9024;
            }
            func_0x00010befa120(puVar2);
LAB_107fe9028:
            _objc_release(puVar14);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar8 = &uStack_130;
      lVar3 = lVar10;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar10);
  puVar5 = puVar2;
  func_0x00010bf529e0();
  puVar14 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  if (puVar5 != (undefined8 *)0x0) {
    _objc_retain(puVar2);
    _objc_opt_new();
    puVar13 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar14);
    _objc_release(puVar13);
    func_0x00010c19b420(puVar14);
    puVar6 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
    func_0x00010bfa4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    puVar13 = PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8;
    if (puVar7 == (undefined *)0x0) {
      func_0x00010bf5a880();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = puVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    puVar5 = puVar2;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar8 = puVar5;
    func_0x00010bef6dc0(puVar13);
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar14);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = puVar8;
    _objc_retain(puVar8);
    if (puVar2[5] != 0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = puVar2[4];
      _objc_retain(uVar11);
      _objc_retain(puVar8);
      uVar1 = puVar2[5];
      _objc_retain(uVar1);
      func_0x00010c0f7fc0(puVar5);
      _objc_release(puVar5);
      _objc_release(uVar1);
      _objc_release(puVar8);
      _objc_release(uVar11);
    }
    _objc_release(puVar8);
    return;
  }
  return;
}



/* Entry: 107fe9234; end: 107fe9323;  */

void FUN_107fe9234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107fe9324; end: 107fe9567;  */

undefined * FUN_107fe9324(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lVar10 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar10);
  uVar8 = 0x10;
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar11 = *(ulong *)(lVar12 * 8);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_opt_isKindOfClass(uVar11,puVar5);
      if ((uVar11 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(puVar5);
      }
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    uVar8 = 0x10;
    lVar2 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = *(long *)(param_3 + 0x28);
  if (lVar2 == 0) {
    puVar5 = *(undefined **)(param_3 + 0x30);
    uVar11 = (ulong)*(byte *)(param_3 + 0x40);
    (**(code **)(puVar5 + 0x10))(puVar5,uVar11,0);
  }
  else {
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    uVar11 = (ulong)*(byte *)(param_3 + 0x40);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    lVar2 = *(long *)(param_3 + 0x30);
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf3ec40();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar11,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar11);
  _objc_retain(uVar8);
  puVar4 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c18ba80();
  func_0x00010c1ec960(puVar4);
  func_0x00010c1cc000(puVar4);
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  dVar14 = 6.81691147847594e-313;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 1;
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_retain(uVar8);
  puVar7 = puVar5;
  func_0x00010c1357a0(dVar13 * dVar14,param_2 * dVar14,puVar5);
  _objc_release(puVar6);
  *(undefined1 *)(puStack_1b8 + 3) = 0;
  _objc_release(uVar8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(puVar5);
  return puVar7;
}



/* Entry: 107fe9568; end: 107fe96ff;  */

undefined8
FUN_107fe9568(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c18ba80();
  func_0x00010c1ec960(puVar1);
  func_0x00010c1cc000(puVar1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  dVar4 = 6.81691147847594e-313;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_retain(param_7);
  uVar3 = param_3;
  func_0x00010c1357a0(param_1 * dVar4,param_2 * dVar4,param_3);
  _objc_release(puVar2);
  *(undefined1 *)(puStack_68 + 3) = 0;
  _objc_release(param_7);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107fe9700; end: 107fe982b;  */

void FUN_107fe9700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_107fe982c;
      puStack_60 = &UNK_1108ecac0;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_50 = uVar2;
      _objc_retain(param_2);
      uStack_48 = (undefined4)uVar1;
      uStack_58 = param_2;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(uStack_58);
      _objc_release(uStack_50);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,uVar1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107fe982c; end: 107fe983f;  */

void FUN_107fe982c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fe983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 107fe9840; end: 107fe9893;  */

ulong FUN_107fe9840(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar1 = param_1, func_0x00010c0c6c20(), uVar1 != 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0c6ac0(param_1);
    uVar1 = uVar1 >> 3 & 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107fe9894; end: 107fe998b;  */

undefined1  [16] FUN_107fe9894(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  param_3 = param_3 / 3.0;
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010c0fce40();
  uVar3 = param_4;
  func_0x00010c0fcaa0();
  if (uVar3 < uVar2) {
    uVar2 = param_4;
    func_0x00010c0fcaa0(param_4);
    uVar3 = param_4;
    func_0x00010c0fce40(param_4);
    dVar4 = (double)uVar2 / (double)uVar3;
    dVar5 = param_3;
    param_3 = param_3 * dVar4;
  }
  else {
    uVar2 = param_4;
    func_0x00010c0fce40(param_4);
    uVar3 = param_4;
    func_0x00010c0fcaa0(param_4);
    dVar4 = (double)uVar2 / (double)uVar3;
    dVar5 = param_3 * dVar4;
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  _objc_release(param_4);
  auVar6._8_8_ = param_3 * dVar4;
  auVar6._0_8_ = dVar5 * dVar4;
  return auVar6;
}



/* Entry: 107fe998c; end: 107fe9a23;  */

void FUN_107fe998c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a16c88);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b7043dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fe9a24; end: 107fe9b83;  */

void FUN_107fe9a24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c18ba80();
  func_0x00010c1ec960(puVar1);
  func_0x00010c1cc000(puVar1);
  func_0x00010c210f80(puVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107fe9b84;
  uStack_40 = 0x107fe9b94;
  uStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1357a0(0x406c000000000000,0x406c000000000000);
  _objc_release(puVar2);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107fe9b84; end: 107fe9b9b;  */

void FUN_107fe9b84(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107fe9b9c; end: 107fe9bd3;  */

void FUN_107fe9b9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fe9bd4; end: 107fe9e3f;  */

undefined * FUN_107fe9bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60(PTR__OBJC_CLASS___PHAssetCollection_1126bf858,param_2,2,0xd2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa50c0(PTR__OBJC_CLASS___PHAsset_1126bd898,param_2,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar3;
  func_0x00010bf4b900(puVar3,param_2,param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 107fe9e40; end: 107fe9f3f;  */

long FUN_107fe9e40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lVar6 * 8);
        func_0x00010c072a60(uVar3);
        lVar5 = lVar5 + (uVar3 & 0xffffffff);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0fd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_placeholderForCreatedAsset_11261d030);
    return param_2;
  }
  return lVar5;
}



/* Entry: 107fe9f40; end: 107fe9f47;  */

void FUN_107fe9f40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_placeholderForCreatedAsset_11261d030);
  return;
}



/* Entry: 107fe9f48; end: 107fe9f87;  */

void FUN_107fe9f48(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf00a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107fe9f88; end: 107fea12f; -[SCMemoriesSearchDatabaseServiceProvider _createMemoriesSearchDataBase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fe9f88(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d8cf0;
  _objc_alloc(PTR_PTR_1126d8cf0);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112772f18;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar9;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112772f1c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bf398e0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112772f20;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010bfcdfa0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112772f24;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010c0c8940(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ae60(puVar1,param_2,lVar3,lVar4,lVar5,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fea130; end: 107fea17f; -[SCMemoriesSearchDatabaseServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fea130(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112772f24);
  _objc_destroyWeak(param_1 + _DAT_112772f20);
  _objc_destroyWeak(param_1 + _DAT_112772f1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112772f18);
  return;
}



/* Entry: 107fea180; end: 107fea333; -[SCMemoriesSearchDatabase initWithUserId:circumstanceEngine:grapheneRegistry:experimentService:] */

undefined8 *
FUN_107fea180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fc058;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    _objc_retain(puVar1);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_6);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107fea334; end: 107fea363;  */

void FUN_107fea334(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf571a0();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010beabf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupDatabase_112588968);
  return;
}



/* Entry: 107fea364; end: 107fea3f3; -[SCMemoriesSearchDatabase perform:] */

void FUN_107fea364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107fea3f4;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107fea3f4; end: 107fea407;  */

void FUN_107fea3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fea404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 107fea408; end: 107fea493; -[SCMemoriesSearchDatabase performAndWait:] */

void FUN_107fea408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107fea494;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fea494; end: 107fea4a7;  */

void FUN_107fea494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fea4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 107fea4a8; end: 107fea4af; -[SCMemoriesSearchDatabase isInsideDatabasePerformer] */

void FUN_107fea4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isCurrentPerformer_1125f9930);
  return;
}



/* Entry: 107fea4b0; end: 107fea507; -[SCMemoriesSearchDatabase removeAllData] */

void FUN_107fea4b0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107fea508;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 107fea508; end: 107fea5b3;  */

void FUN_107fea508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  func_0x00010bf3d9e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf8000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010c12cc60(puVar2,param_2,uVar3,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 107fea5b4; end: 107fea66b; -[SCMemoriesSearchDatabase deleteSnapWithSnapIds:docObjectContext:] */

void FUN_107fea5b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fea66c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fea66c; end: 107feab57;  */

void FUN_107fea66c(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010be97be0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010c0b4ca0(*(undefined8 *)(lVar12 * 8));
          func_0x00010bf9b060(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18));
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar6);
          _objc_release(puVar5);
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar6);
          _objc_release(puVar5);
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar6);
          _objc_release(puVar5);
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar5);
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar5);
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar5);
          uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b080(uVar13);
          _objc_release(puVar5);
          lVar7 = *(long *)(param_1 + 0x28);
          if (*(char *)(lVar7 + 0x30) == '\x01') {
            uVar13 = *(undefined8 *)(lVar7 + 0x18);
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9b080(uVar13);
            _objc_release(puVar5);
            lVar7 = *(long *)(param_1 + 0x28);
          }
          func_0x00010bf9b060(*(undefined8 *)(lVar7 + 0x18));
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar9);
    lVar9 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  func_0x00010c0f8500(uVar13);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar10 = *(long *)(lVar9 + 0x20);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar13 = *(undefined8 *)(lVar11 * 8);
      FUN_107ff183c(param_2,uVar13);
      FUN_107ff1cbc(param_2,uVar13);
      lVar11 = lVar11 + 1;
    } while (lVar9 != lVar11);
    lVar9 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be71ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107feab58; end: 107feac7b;  */

void FUN_107feab58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      FUN_107ff183c(param_2,uVar5);
      FUN_107ff1cbc(param_2,uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be71ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107feac7c; end: 107feac8f; -[SCMemoriesSearchDatabase conceptCountsWithQueue:completionHandler:] */

void FUN_107feac7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performDictionaryQueryWithState_11257a048,
             *(undefined8 *)(param_1 + 0x40),0,param_3,param_4);
  return;
}



/* Entry: 107feac90; end: 107fead5f; -[SCMemoriesSearchDatabase conceptCountsSynchronously] */

void FUN_107feac90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107fead60;
  uStack_30 = 0x107fead70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107fead78;
  puStack_60 = &UNK_1108a5f78;
  puStack_48 = puStack_58;
  func_0x00010be71aa0(param_1,param_2,*(undefined8 *)(param_1 + 0x40),1,0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fead60; end: 107fead77;  */

void FUN_107fead60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107fead78; end: 107feadaf;  */

void FUN_107fead78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107feadb0; end: 107feae87; -[SCMemoriesSearchDatabase conceptCountsWithMaxConfidenceSnapIdSynchronously] */

void FUN_107feadb0(long param_1)

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
  pcStack_38 = FUN_107fead60;
  uStack_30 = 0x107fead70;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107feae88; end: 107feb037;  */

void FUN_107feae88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf9afc0(lVar2,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar4 = uVar7;
      func_0x00010c25d280(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067e00(uVar7);
      func_0x00010c25d280(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d8cf8;
      _objc_alloc(PTR_PTR_1126d8cf8);
      func_0x00010c000ce0();
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      _objc_release(puVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be71ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107feb038; end: 107feb04b; -[SCMemoriesSearchDatabase locationCountsWithQueue:completionHandler:] */

void FUN_107feb038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performDictionaryQueryWithState_11257a048,
             *(undefined8 *)(param_1 + 0x50),0,param_3,param_4);
  return;
}



/* Entry: 107feb04c; end: 107feb11b; -[SCMemoriesSearchDatabase locationCountsSynchronously] */

void FUN_107feb04c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107fead60;
  uStack_30 = 0x107fead70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107feb11c;
  puStack_60 = &UNK_1108a5f78;
  puStack_48 = puStack_58;
  func_0x00010be71aa0(param_1,param_2,*(undefined8 *)(param_1 + 0x50),1,0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107feb11c; end: 107feb153;  */

void FUN_107feb11c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107feb154; end: 107feb167; -[SCMemoriesSearchDatabase timeTagCountsWithQueue:completionHandler:] */

void FUN_107feb154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performDictionaryQueryWithState_11257a048,
             *(undefined8 *)(param_1 + 0x58),0,param_3,param_4);
  return;
}



/* Entry: 107feb168; end: 107feb233; -[SCMemoriesSearchDatabase primaryYearCountsSynchronously] */

void FUN_107feb168(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107fead60;
  uStack_30 = 0x107fead70;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107feb234;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107feb234; end: 107feb273;  */

void FUN_107feb234(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0bd60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107feb274; end: 107feb3d3; -[SCMemoriesSearchDatabase primaryYearCountsWithQueue:completionHandler:] */

void FUN_107feb274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107feb32c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107feb3d4; end: 107feb3e3;  */

void FUN_107feb3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feb3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107feb3e4; end: 107feb543; -[SCMemoriesSearchDatabase primaryLocationCountsWithQueue:completionHandler:] */

void FUN_107feb3e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107feb49c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107feb544; end: 107feb553;  */

void FUN_107feb544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feb550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107feb554; end: 107feb6b3; -[SCMemoriesSearchDatabase primaryMonthCountsWithQueue:completionHandler:] */

void FUN_107feb554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107feb60c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107feb6b4; end: 107feb6c3;  */

void FUN_107feb6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feb6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107feb6c4; end: 107feb78b; -[SCMemoriesSearchDatabase snapIdsByYear:queue:completionHandler:] */

void FUN_107feb6c4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107feb78c;
  puStack_68 = &UNK_1108ecb60;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107feb78c; end: 107feb837;  */

void FUN_107feb78c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0be40(uVar3,param_2,*(undefined4 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107feb838;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 107feb838; end: 107feb847;  */

void FUN_107feb838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feb844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107feb848; end: 107feb92b; -[SCMemoriesSearchDatabase snapIdsByNormalizedYearMonthKey:queue:completionHandler:] */

void FUN_107feb848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107feb92c;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107feb92c; end: 107feb9d7;  */

void FUN_107feb92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0be00(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107feb9d8;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 107feb9d8; end: 107feb9e7;  */

void FUN_107feb9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107feb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107feb9e8; end: 107febacb; -[SCMemoriesSearchDatabase snapIdsByNormalizedYearMonthKeys:queue:completionHandler:] */

void FUN_107feb9e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107febacc;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107febacc; end: 107febb77;  */

void FUN_107febacc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0be20(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107febb78;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 107febb78; end: 107febb87;  */

void FUN_107febb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107febb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107febb88; end: 107febc6b; -[SCMemoriesSearchDatabase snapIdsByLocationComponent:queue:completionHandler:] */

void FUN_107febb88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107febc6c;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107febc6c; end: 107febd17;  */

void FUN_107febc6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0bde0(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107febd18;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 107febd18; end: 107febd27;  */

void FUN_107febd18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107febd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107febd28; end: 107febef7; -[SCMemoriesSearchDatabase _executePrimaryYearCountsQuery] */

void FUN_107febd28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 unaff_x23;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *unaff_x24;
  long lVar18;
  int iVar19;
  undefined *unaff_x25;
  long unaff_x26;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **unaff_x27;
  long lVar23;
  undefined *puVar24;
  long unaff_x28;
  undefined8 uStack_5d0;
  long lStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [128];
  undefined1 auStack_450 [128];
  undefined1 auStack_3d0 [128];
  undefined1 auStack_350 [128];
  long lStack_2d0;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf9afc0(lVar2,param_2,*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar22 = lVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar22);
        }
        unaff_x25 = *(undefined **)(lStack_128 + unaff_x28 * 8);
        puVar13 = unaff_x25;
        func_0x00010c067e00(unaff_x25,param_2,0);
        puVar4 = unaff_x25;
        func_0x00010c067e00(unaff_x25,param_2,1);
        unaff_x24 = puVar13;
        if (0 < (int)puVar13) {
          unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(int)puVar4);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,unaff_x25,unaff_x24);
          _objc_release(unaff_x24);
          _objc_release(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar3 != unaff_x28);
      lVar3 = lVar22;
      func_0x00010bf52a60(lVar22,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x23 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar22);
  func_0x00010c088a40(*(undefined8 *)(param_1 + 0x18));
  puVar13 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107febef8;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = lVar22;
    lStack_158 = lVar2;
    puStack_150 = puVar13;
    puStack_148 = puVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(puVar4 + 0x18);
    func_0x00010bf9afc0(lVar2,param_2,*(undefined8 *)(puVar4 + 0x70));
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar22 = lVar2;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar22;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      unaff_x26 = *plStack_250;
      unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_250 != unaff_x26) {
            _objc_enumerationMutation(lVar22);
          }
          unaff_x25 = *(undefined **)(lStack_258 + unaff_x28 * 8);
          unaff_x24 = unaff_x25;
          func_0x00010c25d280(unaff_x25,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067e00(unaff_x25,param_2,1);
          puVar1 = unaff_x24;
          func_0x00010c08fa60();
          iVar19 = (int)unaff_x25;
          if (puVar1 == (undefined *)0x7 && iVar19 != 0) {
            unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)iVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5,param_2,unaff_x25,unaff_x24);
            _objc_release(unaff_x25);
          }
          _objc_release(unaff_x24);
          unaff_x28 = unaff_x28 + 1;
        } while (lVar3 != unaff_x28);
        lVar3 = lVar22;
        func_0x00010bf52a60(lVar22,param_2,&uStack_260,auStack_220,0x10);
        unaff_x23 = 0;
      } while (lVar3 != 0);
    }
    _objc_release(lVar22);
    func_0x00010c088a40(*(undefined8 *)(puVar4 + 0x18));
    puVar13 = puVar5;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      pcStack_268 = FUN_107fec0c8;
      lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      lStack_2c0 = unaff_x28;
      ppuStack_2b8 = unaff_x27;
      lStack_2b0 = unaff_x26;
      puStack_2a8 = unaff_x25;
      puStack_2a0 = unaff_x24;
      uStack_298 = unaff_x23;
      lStack_290 = lVar22;
      lStack_288 = lVar2;
      puStack_280 = puVar13;
      puStack_278 = puVar5;
      ppuStack_270 = &puStack_140;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(puVar1 + 0x18);
      func_0x00010bf9afc0(lVar2,param_2,*(undefined8 *)(puVar1 + 0x68));
      _objc_retainAutoreleasedReturnValue();
      lStack_548 = 0;
      uStack_550 = 0;
      uStack_538 = 0;
      plStack_540 = (long *)0x0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      lVar22 = lVar2;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar22;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar14 = *plStack_540;
        do {
          lVar18 = 0;
          do {
            if (*plStack_540 != lVar14) {
              _objc_enumerationMutation(lVar22);
            }
            lVar12 = *(long *)(lStack_548 + lVar18 * 8);
            lVar6 = lVar12;
            func_0x00010c25d280(lVar12,param_2,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067e00(lVar12,param_2,1);
            lVar21 = lVar6;
            func_0x00010c08fa60();
            if (lVar21 != 0 && (int)lVar12 != 0) {
              uStack_568 = 0;
              uStack_570 = 0;
              uStack_558 = 0;
              uStack_560 = 0;
              lStack_588 = 0;
              uStack_590 = 0;
              uStack_578 = 0;
              plStack_580 = (long *)0x0;
              lVar21 = lVar6;
              func_0x00010bf44740(lVar6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              func_0x00010c1607a0();
              _objc_retainAutoreleasedReturnValue();
              lStack_508 = 0;
              uStack_510 = 0;
              uStack_4f8 = 0;
              plStack_500 = (long *)0x0;
              uStack_4e8 = 0;
              uStack_4f0 = 0;
              uStack_4d8 = 0;
              uStack_4e0 = 0;
              _objc_retain(lVar21);
              lVar7 = lVar21;
              func_0x00010bf52a60(lVar21,param_2,&uStack_510,auStack_350,0x10);
              if (lVar7 != 0) {
                lVar20 = *plStack_500;
                do {
                  lVar23 = 0;
                  do {
                    if (*plStack_500 != lVar20) {
                      _objc_enumerationMutation(lVar21);
                    }
                    lVar15 = *(long *)(lStack_508 + lVar23 * 8);
                    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c25d0a0(lVar15,param_2,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar8);
                    lVar9 = lVar15;
                    FUN_107fec674();
                    _objc_retainAutoreleasedReturnValue();
                    if ((lVar9 != 0) &&
                       (puVar8 = puVar24, func_0x00010bf4b900(puVar24,param_2,lVar9),
                       ((ulong)puVar8 & 1) == 0)) {
                      func_0x00010befa120(puVar24,param_2,lVar9);
                      func_0x00010befa120(puVar13,param_2,lVar15);
                    }
                    _objc_release(lVar9);
                    _objc_release(lVar15);
                    lVar23 = lVar23 + 1;
                  } while (lVar7 != lVar23);
                  lVar7 = lVar21;
                  func_0x00010bf52a60(lVar21,param_2,&uStack_510,auStack_350,0x10);
                } while (lVar7 != 0);
              }
              _objc_release(lVar21);
              puVar8 = puVar13;
              func_0x00010bf51e00();
              _objc_release(puVar24);
              _objc_release(puVar13);
              _objc_release(lVar21);
              puVar13 = puVar8;
              func_0x00010bf52a60(puVar8,param_2,&uStack_590,auStack_450,0x10);
              if (puVar13 != (undefined *)0x0) {
                lVar21 = *plStack_580;
                do {
                  puVar24 = (undefined *)0x0;
                  do {
                    if (*plStack_580 != lVar21) {
                      _objc_enumerationMutation(puVar8);
                    }
                    puVar16 = *(undefined **)(lStack_588 + (long)puVar24 * 8);
                    puVar17 = puVar16;
                    FUN_107fec674();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar17 != (undefined *)0x0) {
                      puVar10 = puVar5;
                      func_0x00010c0e00e0(puVar5,param_2,puVar17);
                      _objc_retainAutoreleasedReturnValue();
                      if (puVar10 != (undefined *)0x0) {
                        puVar16 = puVar10;
                      }
                      func_0x00010c1d0640(puVar5,param_2,puVar16,puVar17);
                      _objc_release(puVar10);
                      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      puVar10 = puVar4;
                      func_0x00010c0e00e0(puVar4,param_2,puVar17);
                      _objc_retainAutoreleasedReturnValue();
                      puVar11 = puVar10;
                      func_0x00010c2827c0();
                      func_0x00010c0df840(puVar16,param_2,puVar11 + (int)lVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar4,param_2,puVar16,puVar17);
                      _objc_release(puVar16);
                      _objc_release(puVar10);
                    }
                    _objc_release(puVar17);
                    puVar24 = puVar24 + 1;
                  } while (puVar13 != puVar24);
                  puVar13 = puVar8;
                  func_0x00010bf52a60(puVar8,param_2,&uStack_590,auStack_450,0x10);
                } while (puVar13 != (undefined *)0x0);
              }
              _objc_release(puVar8);
            }
            _objc_release(lVar6);
            lVar18 = lVar18 + 1;
          } while (lVar18 != lVar3);
          lVar3 = lVar22;
          func_0x00010bf52a60(lVar22,param_2,&uStack_550,auStack_3d0,0x10);
        } while (lVar3 != 0);
      }
      _objc_release(lVar22);
      func_0x00010c088a40(*(undefined8 *)(puVar1 + 0x18));
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      plStack_5c0 = (long *)0x0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      _objc_retain(puVar4);
      puVar13 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_5d0,auStack_4d0,0x10);
      if (puVar13 != (undefined *)0x0) {
        lVar22 = *plStack_5c0;
        do {
          puVar24 = (undefined *)0x0;
          do {
            if (*plStack_5c0 != lVar22) {
              _objc_enumerationMutation(puVar4);
            }
            puVar17 = *(undefined **)(lStack_5c8 + (long)puVar24 * 8);
            puVar16 = puVar5;
            func_0x00010c0e00e0(puVar5,param_2,puVar17);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar17;
            if (puVar16 != (undefined *)0x0) {
              puVar8 = puVar16;
            }
            _objc_retain(puVar8);
            _objc_release(puVar16);
            puVar16 = puVar4;
            func_0x00010c0e00e0(puVar4,param_2,puVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1,param_2,puVar16,puVar8);
            _objc_release(puVar8);
            _objc_release(puVar16);
            puVar24 = puVar24 + 1;
          } while (puVar13 != puVar24);
          puVar13 = puVar4;
          func_0x00010bf52a60(puVar4,param_2,&uStack_5d0,auStack_4d0,0x10);
        } while (puVar13 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puVar13 = puVar1;
      func_0x00010bf51e00();
      _objc_release(puVar1);
      _objc_release(lVar2);
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        _objc_retain();
        func_0x00010c2a4bc0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar4;
        func_0x00010c25d0a0(puVar4,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar13;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar1);
        puVar1 = puVar4;
        func_0x00010c08fa60();
        if (puVar1 < (undefined *)0x3) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c06a520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar1 = puVar4;
          func_0x00010c11f340(puVar4,param_2,puVar5);
          if (puVar1 == (undefined *)0x7fffffffffffffff) {
            puVar13 = (undefined *)0x0;
          }
          else {
            _objc_retain(puVar4);
            puVar13 = puVar4;
          }
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107febef8; end: 107fec0c7; -[SCMemoriesSearchDatabase _executePrimaryMonthCountsQuery] */

void FUN_107febef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 unaff_x23;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *unaff_x24;
  long lVar18;
  int iVar19;
  undefined *unaff_x25;
  long unaff_x26;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **unaff_x27;
  long lVar23;
  undefined *puVar24;
  long unaff_x28;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [128];
  undefined1 auStack_320 [128];
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf9afc0(lVar2,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar22 = lVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar22);
        }
        unaff_x25 = *(undefined **)(lStack_128 + unaff_x28 * 8);
        unaff_x24 = unaff_x25;
        func_0x00010c25d280(unaff_x25,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067e00(unaff_x25,param_2,1);
        puVar13 = unaff_x24;
        func_0x00010c08fa60();
        iVar19 = (int)unaff_x25;
        if (puVar13 == (undefined *)0x7 && iVar19 != 0) {
          unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)iVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,unaff_x25,unaff_x24);
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x24);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar3 != unaff_x28);
      lVar3 = lVar22;
      func_0x00010bf52a60(lVar22,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x23 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar22);
  func_0x00010c088a40(*(undefined8 *)(param_1 + 0x18));
  puVar13 = puVar1;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107fec0c8;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = lVar22;
    lStack_158 = lVar2;
    puStack_150 = puVar13;
    puStack_148 = puVar1;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(puVar4 + 0x18);
    func_0x00010bf9afc0(lVar2,param_2,*(undefined8 *)(puVar4 + 0x68));
    _objc_retainAutoreleasedReturnValue();
    lStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    plStack_410 = (long *)0x0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    lVar22 = lVar2;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar22;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar14 = *plStack_410;
      do {
        lVar18 = 0;
        do {
          if (*plStack_410 != lVar14) {
            _objc_enumerationMutation(lVar22);
          }
          lVar12 = *(long *)(lStack_418 + lVar18 * 8);
          lVar6 = lVar12;
          func_0x00010c25d280(lVar12,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067e00(lVar12,param_2,1);
          lVar21 = lVar6;
          func_0x00010c08fa60();
          if (lVar21 != 0 && (int)lVar12 != 0) {
            uStack_438 = 0;
            uStack_440 = 0;
            uStack_428 = 0;
            uStack_430 = 0;
            lStack_458 = 0;
            uStack_460 = 0;
            uStack_448 = 0;
            plStack_450 = (long *)0x0;
            lVar21 = lVar6;
            func_0x00010bf44740(lVar6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            func_0x00010c1607a0();
            _objc_retainAutoreleasedReturnValue();
            lStack_3d8 = 0;
            uStack_3e0 = 0;
            uStack_3c8 = 0;
            plStack_3d0 = (long *)0x0;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            uStack_3a8 = 0;
            uStack_3b0 = 0;
            _objc_retain(lVar21);
            lVar7 = lVar21;
            func_0x00010bf52a60(lVar21,param_2,&uStack_3e0,auStack_220,0x10);
            if (lVar7 != 0) {
              lVar20 = *plStack_3d0;
              do {
                lVar23 = 0;
                do {
                  if (*plStack_3d0 != lVar20) {
                    _objc_enumerationMutation(lVar21);
                  }
                  lVar15 = *(long *)(lStack_3d8 + lVar23 * 8);
                  puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25d0a0(lVar15,param_2,puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar8);
                  lVar9 = lVar15;
                  FUN_107fec674();
                  _objc_retainAutoreleasedReturnValue();
                  if ((lVar9 != 0) &&
                     (puVar8 = puVar24, func_0x00010bf4b900(puVar24,param_2,lVar9),
                     ((ulong)puVar8 & 1) == 0)) {
                    func_0x00010befa120(puVar24,param_2,lVar9);
                    func_0x00010befa120(puVar13,param_2,lVar15);
                  }
                  _objc_release(lVar9);
                  _objc_release(lVar15);
                  lVar23 = lVar23 + 1;
                } while (lVar7 != lVar23);
                lVar7 = lVar21;
                func_0x00010bf52a60(lVar21,param_2,&uStack_3e0,auStack_220,0x10);
              } while (lVar7 != 0);
            }
            _objc_release(lVar21);
            puVar8 = puVar13;
            func_0x00010bf51e00();
            _objc_release(puVar24);
            _objc_release(puVar13);
            _objc_release(lVar21);
            puVar13 = puVar8;
            func_0x00010bf52a60(puVar8,param_2,&uStack_460,auStack_320,0x10);
            if (puVar13 != (undefined *)0x0) {
              lVar21 = *plStack_450;
              do {
                puVar24 = (undefined *)0x0;
                do {
                  if (*plStack_450 != lVar21) {
                    _objc_enumerationMutation(puVar8);
                  }
                  puVar16 = *(undefined **)(lStack_458 + (long)puVar24 * 8);
                  puVar17 = puVar16;
                  FUN_107fec674();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar17 != (undefined *)0x0) {
                    puVar10 = puVar1;
                    func_0x00010c0e00e0(puVar1,param_2,puVar17);
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar10 != (undefined *)0x0) {
                      puVar16 = puVar10;
                    }
                    func_0x00010c1d0640(puVar1,param_2,puVar16,puVar17);
                    _objc_release(puVar10);
                    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    puVar10 = puVar5;
                    func_0x00010c0e00e0(puVar5,param_2,puVar17);
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    func_0x00010c2827c0();
                    func_0x00010c0df840(puVar16,param_2,puVar11 + (int)lVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar5,param_2,puVar16,puVar17);
                    _objc_release(puVar16);
                    _objc_release(puVar10);
                  }
                  _objc_release(puVar17);
                  puVar24 = puVar24 + 1;
                } while (puVar13 != puVar24);
                puVar13 = puVar8;
                func_0x00010bf52a60(puVar8,param_2,&uStack_460,auStack_320,0x10);
              } while (puVar13 != (undefined *)0x0);
            }
            _objc_release(puVar8);
          }
          _objc_release(lVar6);
          lVar18 = lVar18 + 1;
        } while (lVar18 != lVar3);
        lVar3 = lVar22;
        func_0x00010bf52a60(lVar22,param_2,&uStack_420,auStack_2a0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar22);
    func_0x00010c088a40(*(undefined8 *)(puVar4 + 0x18));
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_498 = 0;
    uStack_4a0 = 0;
    uStack_488 = 0;
    plStack_490 = (long *)0x0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    _objc_retain(puVar5);
    puVar13 = puVar5;
    func_0x00010bf52a60(puVar5,param_2,&uStack_4a0,auStack_3a0,0x10);
    if (puVar13 != (undefined *)0x0) {
      lVar22 = *plStack_490;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (*plStack_490 != lVar22) {
            _objc_enumerationMutation(puVar5);
          }
          puVar17 = *(undefined **)(lStack_498 + (long)puVar24 * 8);
          puVar16 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,puVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar17;
          if (puVar16 != (undefined *)0x0) {
            puVar8 = puVar16;
          }
          _objc_retain(puVar8);
          _objc_release(puVar16);
          puVar16 = puVar5;
          func_0x00010c0e00e0(puVar5,param_2,puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4,param_2,puVar16,puVar8);
          _objc_release(puVar8);
          _objc_release(puVar16);
          puVar24 = puVar24 + 1;
        } while (puVar13 != puVar24);
        puVar13 = puVar5;
        func_0x00010bf52a60(puVar5,param_2,&uStack_4a0,auStack_3a0,0x10);
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    puVar13 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      _objc_retain();
      func_0x00010c2a4bc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c25d0a0(puVar5,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar4 = puVar13;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar1);
      puVar1 = puVar4;
      func_0x00010c08fa60();
      if (puVar1 < (undefined *)0x3) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c06a520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = puVar4;
        func_0x00010c11f340(puVar4,param_2,puVar5);
        if (puVar1 == (undefined *)0x7fffffffffffffff) {
          puVar13 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar4);
          puVar13 = puVar4;
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107fec0c8; end: 107fec673; -[SCMemoriesSearchDatabase _executePrimaryLocationCountsQuery] */

void FUN_107fec0c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
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
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf9afc0(lVar3,param_2,*(undefined8 *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar19 = lVar3;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_2e0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_2e0 != lVar12) {
          _objc_enumerationMutation(lVar19);
        }
        lVar11 = *(long *)(lStack_2e8 + lVar16 * 8);
        lVar5 = lVar11;
        func_0x00010c25d280(lVar11,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067e00(lVar11,param_2,1);
        lVar18 = lVar5;
        func_0x00010c08fa60();
        if (lVar18 != 0 && (int)lVar11 != 0) {
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          lVar18 = lVar5;
          func_0x00010bf44740(lVar5,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
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
          _objc_retain(lVar18);
          lVar7 = lVar18;
          func_0x00010bf52a60(lVar18,param_2,&uStack_2b0,auStack_f0,0x10);
          if (lVar7 != 0) {
            lVar17 = *plStack_2a0;
            do {
              lVar20 = 0;
              do {
                if (*plStack_2a0 != lVar17) {
                  _objc_enumerationMutation(lVar18);
                }
                lVar13 = *(long *)(lStack_2a8 + lVar20 * 8);
                puVar22 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25d0a0(lVar13,param_2,puVar22);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar22);
                lVar8 = lVar13;
                FUN_107fec674();
                _objc_retainAutoreleasedReturnValue();
                if ((lVar8 != 0) &&
                   (puVar22 = puVar21, func_0x00010bf4b900(puVar21,param_2,lVar8),
                   ((ulong)puVar22 & 1) == 0)) {
                  func_0x00010befa120(puVar21,param_2,lVar8);
                  func_0x00010befa120(puVar6,param_2,lVar13);
                }
                _objc_release(lVar8);
                _objc_release(lVar13);
                lVar20 = lVar20 + 1;
              } while (lVar7 != lVar20);
              lVar7 = lVar18;
              func_0x00010bf52a60(lVar18,param_2,&uStack_2b0,auStack_f0,0x10);
            } while (lVar7 != 0);
          }
          _objc_release(lVar18);
          puVar22 = puVar6;
          func_0x00010bf51e00();
          _objc_release(puVar21);
          _objc_release(puVar6);
          _objc_release(lVar18);
          puVar6 = puVar22;
          func_0x00010bf52a60(puVar22,param_2,&uStack_330,auStack_1f0,0x10);
          if (puVar6 != (undefined *)0x0) {
            lVar18 = *plStack_320;
            do {
              puVar21 = (undefined *)0x0;
              do {
                if (*plStack_320 != lVar18) {
                  _objc_enumerationMutation(puVar22);
                }
                puVar14 = *(undefined **)(lStack_328 + (long)puVar21 * 8);
                puVar9 = puVar14;
                FUN_107fec674();
                _objc_retainAutoreleasedReturnValue();
                if (puVar9 != (undefined *)0x0) {
                  puVar15 = puVar2;
                  func_0x00010c0e00e0(puVar2,param_2,puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar15 != (undefined *)0x0) {
                    puVar14 = puVar15;
                  }
                  func_0x00010c1d0640(puVar2,param_2,puVar14,puVar9);
                  _objc_release(puVar15);
                  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  puVar15 = puVar1;
                  func_0x00010c0e00e0(puVar1,param_2,puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar15;
                  func_0x00010c2827c0();
                  func_0x00010c0df840(puVar14,param_2,puVar10 + (int)lVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar1,param_2,puVar14,puVar9);
                  _objc_release(puVar14);
                  _objc_release(puVar15);
                }
                _objc_release(puVar9);
                puVar21 = puVar21 + 1;
              } while (puVar6 != puVar21);
              puVar6 = puVar22;
              func_0x00010bf52a60(puVar22,param_2,&uStack_330,auStack_1f0,0x10);
            } while (puVar6 != (undefined *)0x0);
          }
          _objc_release(puVar22);
        }
        _objc_release(lVar5);
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar4);
      lVar4 = lVar19;
      func_0x00010bf52a60(lVar19,param_2,&uStack_2f0,auStack_170,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar19);
  func_0x00010c088a40(*(undefined8 *)(param_1 + 0x18));
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  _objc_retain(puVar1);
  puVar21 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_370,auStack_270,0x10);
  if (puVar21 != (undefined *)0x0) {
    lVar19 = *plStack_360;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_360 != lVar19) {
          _objc_enumerationMutation(puVar1);
        }
        puVar15 = *(undefined **)(lStack_368 + (long)puVar22 * 8);
        puVar9 = puVar2;
        func_0x00010c0e00e0(puVar2,param_2,puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar15;
        if (puVar9 != (undefined *)0x0) {
          puVar14 = puVar9;
        }
        _objc_retain(puVar14);
        _objc_release(puVar9);
        puVar9 = puVar1;
        func_0x00010c0e00e0(puVar1,param_2,puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,puVar9,puVar14);
        _objc_release(puVar14);
        _objc_release(puVar9);
        puVar22 = puVar22 + 1;
      } while (puVar21 != puVar22);
      puVar21 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_370,auStack_270,0x10);
    } while (puVar21 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar21 = puVar6;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    _objc_retain();
    func_0x00010c2a4bc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c25d0a0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 < (undefined *)0x3) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c06a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010c11f340(puVar1,param_2,puVar6);
      if (puVar2 == (undefined *)0x7fffffffffffffff) {
        puVar21 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar1);
        puVar21 = puVar1;
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 107fec674; end: 107fec77f;  */

void FUN_107fec674(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = uVar2;
  func_0x00010c08fa60();
  if (uVar4 < 3) {
    uVar4 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar4 = uVar2;
    func_0x00010c11f340(uVar2,param_2,puVar3);
    if (uVar4 == 0x7fffffffffffffff) {
      uVar4 = 0;
    }
    else {
      _objc_retain(uVar2);
      uVar4 = uVar2;
    }
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fec780; end: 107fec857; +[SCMemoriesSearchDatabase _yearLikeBoundsForYear:] */

undefined * FUN_107fec780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ece698);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_48 = puVar7;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ece6b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar3 = ppuVar6;
  func_0x00010c08fa60();
  if ((ppuVar3 == (undefined **)0x7) &&
     (ppuVar3 = ppuVar6, func_0x00010bf35920(ppuVar6,param_2,4), (int)ppuVar3 == 0x2d)) {
    puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    ppuVar3 = ppuVar6;
    func_0x00010c260c20(ppuVar6,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c11f340();
    if (ppuVar4 == (undefined **)0x7fffffffffffffff) {
      ppuVar4 = ppuVar6;
      func_0x00010c260c80(ppuVar6,param_2,5,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c11f340();
      puVar7 = (undefined *)(ulong)(ppuVar5 == (undefined **)0x7fffffffffffffff);
      _objc_release(ppuVar4);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    _objc_release(ppuVar3);
    _objc_release(puVar1);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(ppuVar6);
  return puVar7;
}



/* Entry: 107fec858; end: 107fec96b; +[SCMemoriesSearchDatabase _isCanonicalYearMonthKey:] */

bool FUN_107fec858(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if ((lVar2 == 7) && (lVar2 = param_3, func_0x00010bf35920(param_3,param_2,4), (int)lVar2 == 0x2d))
  {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar2 = param_3;
    func_0x00010c260c20(param_3,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c11f340();
    if (lVar5 == 0x7fffffffffffffff) {
      lVar5 = param_3;
      func_0x00010c260c80(param_3,param_2,5,2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c11f340();
      bVar1 = lVar6 == 0x7fffffffffffffff;
      _objc_release(lVar5);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107fec96c; end: 107feca47; +[SCMemoriesSearchDatabase _monthLikeBoundsForYearMonthKey:] */

void FUN_107fec96c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  long unaff_x28;
  undefined *puVar21;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5b8 [128];
  undefined8 *puStack_538;
  long lStack_530;
  long lStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined **ppuStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [128];
  undefined1 auStack_3a0 [128];
  long lStack_320;
  undefined1 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1e8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar19 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = param_3;
  ppuStack_48 = ppuVar19;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_40 = ppuVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_180;
    pcStack_58 = FUN_107feca48;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar13 = (undefined **)ppuVar19[3];
    ppuVar17 = ppuVar19;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    func_0x00010beebe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_178 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_168 = 0;
    puStack_170 = (undefined8 *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    ppuVar1 = ppuVar13;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar18 != (undefined **)0x0) {
      unaff_x25 = (undefined **)*puStack_170;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_170 != unaff_x25) {
            _objc_enumerationMutation(ppuVar1);
          }
          unaff_x24 = *(undefined ***)(lStack_178 + (long)unaff_x26 * 8);
          func_0x00010c25d280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = unaff_x24;
          func_0x00010c08fa60();
          if (ppuVar17 != (undefined **)0x0) {
            func_0x00010befa120(ppuVar14);
          }
          _objc_release(unaff_x24);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar18 != unaff_x26);
        ppuVar18 = ppuVar1;
        ppuVar3 = &puStack_180;
        func_0x00010bf52a60();
        ppuVar17 = (undefined **)0x0;
      } while (ppuVar18 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    func_0x00010c088a40(ppuVar19[3]);
    ppuVar1 = ppuVar14;
    func_0x00010bf51e00();
    _objc_release(ppuVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      ppuVar18 = &puStack_2b0;
      pcStack_188 = FUN_107fecc04;
      lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar14 = ppuVar3;
      ppuStack_190 = &puStack_60;
      _objc_retain(ppuVar3);
      ppuVar19 = ppuVar3;
      func_0x00010c08fa60();
      ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar14 = (undefined **)ppuVar13[3];
        ppuVar19 = ppuVar13;
        _objc_opt_class(ppuVar13);
        func_0x00010be611c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar19);
        ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_2a8 = 0;
        puStack_2b0 = (undefined *)0x0;
        uStack_298 = 0;
        puStack_2a0 = (undefined8 *)0x0;
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        ppuVar17 = ppuVar14;
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar17;
        func_0x00010bf52a60();
        if (ppuVar1 != (undefined **)0x0) {
          unaff_x26 = (undefined **)*puStack_2a0;
          do {
            ppuVar18 = (undefined **)0x0;
            do {
              if ((undefined **)*puStack_2a0 != unaff_x26) {
                _objc_enumerationMutation(ppuVar17);
              }
              unaff_x25 = *(undefined ***)(lStack_2a8 + (long)ppuVar18 * 8);
              func_0x00010c25d280();
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = unaff_x25;
              func_0x00010c08fa60();
              if (ppuVar2 != (undefined **)0x0) {
                func_0x00010befa120(ppuVar19);
              }
              _objc_release(unaff_x25);
              ppuVar18 = (undefined **)((long)ppuVar18 + 1);
            } while (ppuVar1 != ppuVar18);
            ppuVar1 = ppuVar17;
            ppuVar18 = &puStack_2b0;
            func_0x00010bf52a60();
            unaff_x24 = (undefined **)0x0;
          } while (ppuVar1 != (undefined **)0x0);
        }
        _objc_release(ppuVar17);
        func_0x00010c088a40(ppuVar13[3]);
        ppuVar1 = ppuVar19;
        func_0x00010bf51e00();
        _objc_release(ppuVar19);
        _objc_release(ppuVar14);
        ppuVar14 = ppuVar18;
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
        ___stack_chk_fail();
        pcStack_2b8 = FUN_107fecdec;
        lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_2c0 = &ppuStack_190;
        _objc_retain(ppuVar14);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_458 = 0;
        uStack_460 = 0;
        uStack_448 = 0;
        plStack_450 = (long *)0x0;
        uStack_438 = 0;
        uStack_440 = 0;
        uStack_428 = 0;
        uStack_430 = 0;
        _objc_retain(ppuVar14);
        puVar10 = &uStack_460;
        puVar12 = auStack_3a0;
        ppuVar1 = ppuVar14;
        func_0x00010bf52a60();
        ppuVar19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        if (ppuVar1 != (undefined **)0x0) {
          unaff_x28 = *plStack_450;
          ppuVar17 = &PTR____CFConstantStringClassReference_110ece6f8;
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if (*plStack_450 != unaff_x28) {
                _objc_enumerationMutation(ppuVar14);
              }
              unaff_x25 = *(undefined ***)(lStack_458 + (long)unaff_x26 * 8);
              puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
              ppuVar18 = unaff_x25;
              _objc_opt_isKindOfClass(unaff_x25,puVar15);
              if ((((ulong)ppuVar18 & 1) != 0) &&
                 (ppuVar18 = unaff_x25, func_0x00010c08fa60(), ppuVar18 != (undefined **)0x0)) {
                func_0x00010befa120(puVar4);
                unaff_x25 = ppuVar3;
                _objc_opt_class();
                func_0x00010be611c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(puVar5);
                _objc_release(unaff_x25);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar1 != unaff_x26);
            puVar10 = &uStack_460;
            puVar12 = auStack_3a0;
            ppuVar1 = ppuVar14;
            func_0x00010bf52a60();
            unaff_x24 = (undefined **)0x0;
          } while (ppuVar1 != (undefined **)0x0);
        }
        _objc_release(ppuVar14);
        puVar21 = puVar4;
        func_0x00010bf529e0();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
        if (puVar21 != (undefined *)0x0) {
          puVar21 = puVar4;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_4c0 = puVar21;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar21);
          unaff_x24 = (undefined **)ppuVar3[3];
          ppuVar1 = unaff_x24;
          puStack_4a8 = puVar15;
          func_0x00010c252980(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = unaff_x24;
          func_0x00010bf9b000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar1);
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          puStack_490 = (undefined8 *)0x0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_468 = 0;
          uStack_470 = 0;
          unaff_x26 = ppuVar17;
          ppuStack_4b0 = ppuVar17;
          func_0x00010c142300();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = &uStack_4a0;
          puVar12 = auStack_420;
          ppuVar1 = unaff_x26;
          func_0x00010bf52a60();
          if (ppuVar1 != (undefined **)0x0) {
            ppuVar17 = (undefined **)*puStack_490;
            do {
              unaff_x24 = (undefined **)0x0;
              do {
                if ((undefined **)*puStack_490 != ppuVar17) {
                  _objc_enumerationMutation(unaff_x26);
                }
                unaff_x28 = *(long *)(lStack_498 + (long)unaff_x24 * 8);
                func_0x00010c25d280();
                _objc_retainAutoreleasedReturnValue();
                lVar20 = unaff_x28;
                func_0x00010c08fa60();
                if (lVar20 != 0) {
                  func_0x00010befa120(unaff_x25);
                }
                _objc_release(unaff_x28);
                unaff_x24 = (undefined **)((long)unaff_x24 + 1);
              } while (ppuVar1 != unaff_x24);
              puVar10 = &uStack_4a0;
              puVar12 = auStack_420;
              ppuVar1 = unaff_x26;
              func_0x00010bf52a60();
              ppuVar19 = (undefined **)0x0;
            } while (ppuVar1 != (undefined **)0x0);
          }
          _objc_release(unaff_x26);
          func_0x00010c088a40(ppuVar3[3]);
          ppuVar1 = unaff_x25;
          func_0x00010bf51e00();
          _objc_release(unaff_x25);
          _objc_release(ppuStack_4b0);
          _objc_release(puStack_4a8);
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
        ppuVar18 = ppuVar14;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_320) {
          ___stack_chk_fail();
          puVar11 = &uStack_600;
          pcStack_4c8 = FUN_107fed158;
          lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lStack_520 = unaff_x28;
          ppuStack_518 = ppuVar19;
          ppuStack_510 = unaff_x26;
          ppuStack_508 = unaff_x25;
          ppuStack_500 = unaff_x24;
          ppuStack_4f8 = ppuVar17;
          ppuStack_4f0 = ppuVar1;
          puStack_4e8 = puVar5;
          puStack_4e0 = puVar4;
          ppuStack_4d8 = ppuVar14;
          pppuStack_4d0 = &pppuStack_2c0;
          _objc_retain(puVar10);
          puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar10;
          puVar5 = puVar4;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar7 = puVar6;
          func_0x00010c08fa60();
          ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
          if (puVar7 != (undefined8 *)0x0) {
            puVar15 = ppuVar18[3];
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_538 = puVar6;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9b000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            lStack_5f8 = 0;
            uStack_600 = 0;
            uStack_5e8 = 0;
            plStack_5f0 = (long *)0x0;
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            uStack_5c8 = 0;
            uStack_5d0 = 0;
            puVar4 = puVar15;
            func_0x00010c142300();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = auStack_5b8;
            puVar5 = puVar4;
            func_0x00010bf52a60();
            if (puVar5 != (undefined *)0x0) {
              lVar20 = *plStack_5f0;
              do {
                puVar21 = (undefined *)0x0;
                do {
                  if (*plStack_5f0 != lVar20) {
                    _objc_enumerationMutation(puVar4);
                  }
                  lVar8 = *(long *)(lStack_5f8 + (long)puVar21 * 8);
                  func_0x00010c25d280();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010c08fa60();
                  if (lVar9 != 0) {
                    func_0x00010befa120(ppuVar19);
                  }
                  _objc_release(lVar8);
                  puVar21 = puVar21 + 1;
                } while (puVar5 != puVar21);
                puVar12 = auStack_5b8;
                puVar5 = puVar4;
                puVar11 = &uStack_600;
                func_0x00010bf52a60();
              } while (puVar5 != (undefined *)0x0);
            }
            _objc_release(puVar4);
            func_0x00010c088a40(ppuVar18[3]);
            ppuVar1 = ppuVar19;
            func_0x00010bf51e00();
            _objc_release(ppuVar19);
            _objc_release(puVar15);
            puVar5 = (undefined *)puVar11;
          }
          _objc_release(puVar6);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_530) {
            ___stack_chk_fail();
            _objc_retain(puVar5);
            _objc_retain(puVar12);
            uVar16 = puVar10[2];
            _objc_retain(puVar12);
            _objc_retain(puVar5);
            func_0x00010c0f7fc0(uVar16);
            _objc_release(puVar12);
            _objc_release(puVar5);
            _objc_release(puVar12);
            _objc_release(puVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107feca48; end: 107fecc03; -[SCMemoriesSearchDatabase _executeSnapIdsByYear:] */

void FUN_107feca48(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  long unaff_x28;
  undefined *puVar21;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_568 [128];
  undefined8 *puStack_4e8;
  long lStack_4e0;
  long lStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined **ppuStack_488;
  undefined1 ***pppuStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  undefined **ppuStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [128];
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar3 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = (undefined **)param_1[3];
  ppuVar17 = param_1;
  _objc_opt_class();
  func_0x00010beebe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = ppuVar13;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined ***)(lStack_128 + (long)unaff_x26 * 8);
        func_0x00010c25d280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = unaff_x24;
        func_0x00010c08fa60();
        if (ppuVar17 != (undefined **)0x0) {
          func_0x00010befa120(ppuVar19);
        }
        _objc_release(unaff_x24);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar14 != unaff_x26);
      ppuVar14 = ppuVar1;
      ppuVar3 = &puStack_130;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar14 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  func_0x00010c088a40(param_1[3]);
  ppuVar1 = ppuVar19;
  func_0x00010bf51e00();
  _objc_release(ppuVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar18 = &puStack_260;
    pcStack_138 = FUN_107fecc04;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar14 = ppuVar3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    ppuVar19 = ppuVar3;
    func_0x00010c08fa60();
    ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar14 = (undefined **)ppuVar13[3];
      ppuVar17 = ppuVar13;
      _objc_opt_class(ppuVar13);
      func_0x00010be611c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar17);
      ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_258 = 0;
      puStack_260 = (undefined *)0x0;
      uStack_248 = 0;
      puStack_250 = (undefined8 *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      ppuVar17 = ppuVar14;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar17;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        unaff_x26 = (undefined **)*puStack_250;
        do {
          ppuVar18 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_250 != unaff_x26) {
              _objc_enumerationMutation(ppuVar17);
            }
            unaff_x25 = *(undefined ***)(lStack_258 + (long)ppuVar18 * 8);
            func_0x00010c25d280();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = unaff_x25;
            func_0x00010c08fa60();
            if (ppuVar2 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar19);
            }
            _objc_release(unaff_x25);
            ppuVar18 = (undefined **)((long)ppuVar18 + 1);
          } while (ppuVar1 != ppuVar18);
          ppuVar1 = ppuVar17;
          ppuVar18 = &puStack_260;
          func_0x00010bf52a60();
          unaff_x24 = (undefined **)0x0;
        } while (ppuVar1 != (undefined **)0x0);
      }
      _objc_release(ppuVar17);
      func_0x00010c088a40(ppuVar13[3]);
      ppuVar1 = ppuVar19;
      func_0x00010bf51e00();
      _objc_release(ppuVar19);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar18;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      pcStack_268 = FUN_107fecdec;
      lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_270 = &puStack_140;
      _objc_retain(ppuVar14);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      plStack_400 = (long *)0x0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      _objc_retain(ppuVar14);
      puVar10 = &uStack_410;
      puVar12 = auStack_350;
      ppuVar1 = ppuVar14;
      func_0x00010bf52a60();
      ppuVar19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      if (ppuVar1 != (undefined **)0x0) {
        unaff_x28 = *plStack_400;
        ppuVar17 = &PTR____CFConstantStringClassReference_110ece6f8;
        do {
          unaff_x26 = (undefined **)0x0;
          do {
            if (*plStack_400 != unaff_x28) {
              _objc_enumerationMutation(ppuVar14);
            }
            unaff_x25 = *(undefined ***)(lStack_408 + (long)unaff_x26 * 8);
            puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            ppuVar13 = unaff_x25;
            _objc_opt_isKindOfClass(unaff_x25,puVar15);
            if ((((ulong)ppuVar13 & 1) != 0) &&
               (ppuVar13 = unaff_x25, func_0x00010c08fa60(), ppuVar13 != (undefined **)0x0)) {
              func_0x00010befa120(puVar4);
              unaff_x25 = ppuVar3;
              _objc_opt_class();
              func_0x00010be611c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar5);
              _objc_release(unaff_x25);
            }
            unaff_x26 = (undefined **)((long)unaff_x26 + 1);
          } while (ppuVar1 != unaff_x26);
          puVar10 = &uStack_410;
          puVar12 = auStack_350;
          ppuVar1 = ppuVar14;
          func_0x00010bf52a60();
          unaff_x24 = (undefined **)0x0;
        } while (ppuVar1 != (undefined **)0x0);
      }
      _objc_release(ppuVar14);
      puVar21 = puVar4;
      func_0x00010bf529e0();
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
      if (puVar21 != (undefined *)0x0) {
        puVar21 = puVar4;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_470 = puVar21;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        unaff_x24 = (undefined **)ppuVar3[3];
        ppuVar1 = unaff_x24;
        puStack_458 = puVar15;
        func_0x00010c252980(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = unaff_x24;
        func_0x00010bf9b000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_448 = 0;
        uStack_450 = 0;
        uStack_438 = 0;
        puStack_440 = (undefined8 *)0x0;
        uStack_428 = 0;
        uStack_430 = 0;
        uStack_418 = 0;
        uStack_420 = 0;
        unaff_x26 = ppuVar17;
        ppuStack_460 = ppuVar17;
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = &uStack_450;
        puVar12 = auStack_3d0;
        ppuVar1 = unaff_x26;
        func_0x00010bf52a60();
        if (ppuVar1 != (undefined **)0x0) {
          ppuVar17 = (undefined **)*puStack_440;
          do {
            unaff_x24 = (undefined **)0x0;
            do {
              if ((undefined **)*puStack_440 != ppuVar17) {
                _objc_enumerationMutation(unaff_x26);
              }
              unaff_x28 = *(long *)(lStack_448 + (long)unaff_x24 * 8);
              func_0x00010c25d280();
              _objc_retainAutoreleasedReturnValue();
              lVar20 = unaff_x28;
              func_0x00010c08fa60();
              if (lVar20 != 0) {
                func_0x00010befa120(unaff_x25);
              }
              _objc_release(unaff_x28);
              unaff_x24 = (undefined **)((long)unaff_x24 + 1);
            } while (ppuVar1 != unaff_x24);
            puVar10 = &uStack_450;
            puVar12 = auStack_3d0;
            ppuVar1 = unaff_x26;
            func_0x00010bf52a60();
            ppuVar19 = (undefined **)0x0;
          } while (ppuVar1 != (undefined **)0x0);
        }
        _objc_release(unaff_x26);
        func_0x00010c088a40(ppuVar3[3]);
        ppuVar1 = unaff_x25;
        func_0x00010bf51e00();
        _objc_release(unaff_x25);
        _objc_release(ppuStack_460);
        _objc_release(puStack_458);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
      ppuVar3 = ppuVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
        ___stack_chk_fail();
        puVar11 = &uStack_5b0;
        pcStack_478 = FUN_107fed158;
        lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_4d0 = unaff_x28;
        ppuStack_4c8 = ppuVar19;
        ppuStack_4c0 = unaff_x26;
        ppuStack_4b8 = unaff_x25;
        ppuStack_4b0 = unaff_x24;
        ppuStack_4a8 = ppuVar17;
        ppuStack_4a0 = ppuVar1;
        puStack_498 = puVar5;
        puStack_490 = puVar4;
        ppuStack_488 = ppuVar14;
        pppuStack_480 = &ppuStack_270;
        _objc_retain(puVar10);
        puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar10;
        puVar5 = puVar4;
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar7 = puVar6;
        func_0x00010c08fa60();
        ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
        if (puVar7 != (undefined8 *)0x0) {
          puVar15 = ppuVar3[3];
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_4e8 = puVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9b000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_5a8 = 0;
          uStack_5b0 = 0;
          uStack_598 = 0;
          plStack_5a0 = (long *)0x0;
          uStack_588 = 0;
          uStack_590 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          puVar4 = puVar15;
          func_0x00010c142300();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = auStack_568;
          puVar5 = puVar4;
          func_0x00010bf52a60();
          if (puVar5 != (undefined *)0x0) {
            lVar20 = *plStack_5a0;
            do {
              puVar21 = (undefined *)0x0;
              do {
                if (*plStack_5a0 != lVar20) {
                  _objc_enumerationMutation(puVar4);
                }
                lVar8 = *(long *)(lStack_5a8 + (long)puVar21 * 8);
                func_0x00010c25d280();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010c08fa60();
                if (lVar9 != 0) {
                  func_0x00010befa120(ppuVar17);
                }
                _objc_release(lVar8);
                puVar21 = puVar21 + 1;
              } while (puVar5 != puVar21);
              puVar12 = auStack_568;
              puVar5 = puVar4;
              puVar11 = &uStack_5b0;
              func_0x00010bf52a60();
            } while (puVar5 != (undefined *)0x0);
          }
          _objc_release(puVar4);
          func_0x00010c088a40(ppuVar3[3]);
          ppuVar1 = ppuVar17;
          func_0x00010bf51e00();
          _objc_release(ppuVar17);
          _objc_release(puVar15);
          puVar5 = (undefined *)puVar11;
        }
        _objc_release(puVar6);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e0) {
          ___stack_chk_fail();
          _objc_retain(puVar5);
          _objc_retain(puVar12);
          uVar16 = puVar10[2];
          _objc_retain(puVar12);
          _objc_retain(puVar5);
          func_0x00010c0f7fc0(uVar16);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fecc04; end: 107fecdeb; -[SCMemoriesSearchDatabase _executeSnapIdsByNormalizedYearMonthKey:] */

void FUN_107fecc04(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long unaff_x28;
  undefined *puVar18;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [128];
  undefined8 *puStack_3b8;
  long lStack_3b0;
  long lStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined **ppuStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined **ppuStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar15 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_3;
  _objc_retain(param_3);
  ppuVar16 = param_3;
  func_0x00010c08fa60();
  ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar12 = *(undefined ***)(param_1 + 0x18);
    lVar17 = param_1;
    _objc_opt_class(param_1);
    func_0x00010be611c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    unaff_x23 = ppuVar12;
    func_0x00010c142300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_120;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != unaff_x26) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x25 = *(undefined ***)(lStack_128 + (long)ppuVar15 * 8);
          func_0x00010c25d280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = unaff_x25;
          func_0x00010c08fa60();
          if (ppuVar2 != (undefined **)0x0) {
            func_0x00010befa120(ppuVar16);
          }
          _objc_release(unaff_x25);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar1 != ppuVar15);
        ppuVar1 = unaff_x23;
        ppuVar15 = &puStack_130;
        func_0x00010bf52a60();
        unaff_x24 = (undefined **)0x0;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    func_0x00010c088a40(*(undefined8 *)(param_1 + 0x18));
    ppuVar1 = ppuVar16;
    func_0x00010bf51e00();
    _objc_release(ppuVar16);
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar15;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107fecdec;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    _objc_retain(ppuVar12);
    puVar9 = &uStack_2e0;
    puVar11 = auStack_220;
    ppuVar1 = ppuVar12;
    func_0x00010bf52a60();
    ppuVar16 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x28 = *plStack_2d0;
      unaff_x23 = &PTR____CFConstantStringClassReference_110ece6f8;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if (*plStack_2d0 != unaff_x28) {
            _objc_enumerationMutation(ppuVar12);
          }
          unaff_x25 = *(undefined ***)(lStack_2d8 + (long)unaff_x26 * 8);
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar15 = unaff_x25;
          _objc_opt_isKindOfClass(unaff_x25,puVar13);
          if ((((ulong)ppuVar15 & 1) != 0) &&
             (ppuVar15 = unaff_x25, func_0x00010c08fa60(), ppuVar15 != (undefined **)0x0)) {
            func_0x00010befa120(puVar3);
            unaff_x25 = param_3;
            _objc_opt_class();
            func_0x00010be611c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar4);
            _objc_release(unaff_x25);
          }
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar1 != unaff_x26);
        puVar9 = &uStack_2e0;
        puVar11 = auStack_220;
        ppuVar1 = ppuVar12;
        func_0x00010bf52a60();
        unaff_x24 = (undefined **)0x0;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar12);
    puVar18 = puVar3;
    func_0x00010bf529e0();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (puVar18 != (undefined *)0x0) {
      puVar18 = puVar3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_340 = puVar18;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      unaff_x24 = (undefined **)param_3[3];
      ppuVar1 = unaff_x24;
      puStack_328 = puVar13;
      func_0x00010c252980(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x24;
      func_0x00010bf9b000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      puStack_310 = (undefined8 *)0x0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      unaff_x26 = unaff_x23;
      ppuStack_330 = unaff_x23;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = &uStack_320;
      puVar11 = auStack_2a0;
      ppuVar1 = unaff_x26;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        unaff_x23 = (undefined **)*puStack_310;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_310 != unaff_x23) {
              _objc_enumerationMutation(unaff_x26);
            }
            unaff_x28 = *(long *)(lStack_318 + (long)unaff_x24 * 8);
            func_0x00010c25d280();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = unaff_x28;
            func_0x00010c08fa60();
            if (lVar17 != 0) {
              func_0x00010befa120(unaff_x25);
            }
            _objc_release(unaff_x28);
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar1 != unaff_x24);
          puVar9 = &uStack_320;
          puVar11 = auStack_2a0;
          ppuVar1 = unaff_x26;
          func_0x00010bf52a60();
          ppuVar16 = (undefined **)0x0;
        } while (ppuVar1 != (undefined **)0x0);
      }
      _objc_release(unaff_x26);
      func_0x00010c088a40(param_3[3]);
      ppuVar1 = unaff_x25;
      func_0x00010bf51e00();
      _objc_release(unaff_x25);
      _objc_release(ppuStack_330);
      _objc_release(puStack_328);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    ppuVar15 = ppuVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar10 = &uStack_480;
      pcStack_348 = FUN_107fed158;
      lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_3a0 = unaff_x28;
      ppuStack_398 = ppuVar16;
      ppuStack_390 = unaff_x26;
      ppuStack_388 = unaff_x25;
      ppuStack_380 = unaff_x24;
      ppuStack_378 = unaff_x23;
      ppuStack_370 = ppuVar1;
      puStack_368 = puVar4;
      puStack_360 = puVar3;
      ppuStack_358 = ppuVar12;
      ppuStack_350 = &puStack_140;
      _objc_retain(puVar9);
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      puVar4 = puVar3;
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar6 = puVar5;
      func_0x00010c08fa60();
      ppuVar1 = (undefined **)PTR____NSArray0__struct_11034ab48;
      if (puVar6 != (undefined8 *)0x0) {
        puVar13 = ppuVar15[3];
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_3b8 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9b000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_478 = 0;
        uStack_480 = 0;
        uStack_468 = 0;
        plStack_470 = (long *)0x0;
        uStack_458 = 0;
        uStack_460 = 0;
        uStack_448 = 0;
        uStack_450 = 0;
        puVar3 = puVar13;
        func_0x00010c142300();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = auStack_438;
        puVar4 = puVar3;
        func_0x00010bf52a60();
        if (puVar4 != (undefined *)0x0) {
          lVar17 = *plStack_470;
          do {
            puVar18 = (undefined *)0x0;
            do {
              if (*plStack_470 != lVar17) {
                _objc_enumerationMutation(puVar3);
              }
              lVar7 = *(long *)(lStack_478 + (long)puVar18 * 8);
              func_0x00010c25d280();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c08fa60();
              if (lVar8 != 0) {
                func_0x00010befa120(ppuVar16);
              }
              _objc_release(lVar7);
              puVar18 = puVar18 + 1;
            } while (puVar4 != puVar18);
            puVar11 = auStack_438;
            puVar4 = puVar3;
            puVar10 = &uStack_480;
            func_0x00010bf52a60();
          } while (puVar4 != (undefined *)0x0);
        }
        _objc_release(puVar3);
        func_0x00010c088a40(ppuVar15[3]);
        ppuVar1 = ppuVar16;
        func_0x00010bf51e00();
        _objc_release(ppuVar16);
        _objc_release(puVar13);
        puVar4 = (undefined *)puVar10;
      }
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b0) {
        ___stack_chk_fail();
        _objc_retain(puVar4);
        _objc_retain(puVar11);
        uVar14 = puVar9[2];
        _objc_retain(puVar11);
        _objc_retain(puVar4);
        func_0x00010c0f7fc0(uVar14);
        _objc_release(puVar11);
        _objc_release(puVar4);
        _objc_release(puVar11);
        _objc_release(puVar4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}


