/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068c3348; end: 1068c33ef;  */

undefined8 FUN_1068c3348(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_3 = 1;
    param_1 = 0;
  }
  else {
    *param_3 = 0;
    lVar1 = param_2;
    func_0x00010c0cc0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f9a0();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c33f0; end: 1068c34ab;  */

undefined8 FUN_1068c33f0(void)

{
  int iVar1;
  
  if ((bRam000000011381b100 & 1) == 0) {
    iVar1 = 0x1381b100;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381b098 = 0xe;
      puRam000000011381b0a0 = &UNK_10f39fbf2;
      uRam000000011381b0a8 = 0x1010000;
      pcRam000000011381b0b0 = FUN_1068c34ac;
      pcRam000000011381b0b8 = FUN_1068c3518;
      ppuRam000000011381b090 = &PTR_DAT_11086d7d0;
      uRam000000011381b0d0 = 0;
      uRam000000011381b0c8 = 0;
      uRam000000011381b0e0 = 0;
      uRam000000011381b0d8 = 0;
      uRam000000011381b0f0 = 0;
      uRam000000011381b0e8 = 0;
      uRam000000011381b0f8 = 0;
      ___cxa_atexit(&DAT_105187b98,0x11381b090,0x100000000);
      ___cxa_guard_release(0x11381b100);
    }
  }
  return 0x11381b090;
}



/* Entry: 1068c34ac; end: 1068c3517;  */

undefined8 FUN_1068c34ac(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((0x12 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar3 != 0)) {
      return *(undefined8 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}



/* Entry: 1068c3518; end: 1068c35bf;  */

undefined8 FUN_1068c3518(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_3 = 1;
    param_1 = 0;
  }
  else {
    *param_3 = 0;
    lVar1 = param_2;
    func_0x00010c0cc0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123160();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c35c0; end: 1068c35cb; +[SCBoostState table] */

undefined * FUN_1068c35c0(void)

{
  return &UNK_10f39fc11;
}



/* Entry: 1068c35cc; end: 1068c37af; +[SCBoostState immutableObjectParse:bufferSize:] */

void FUN_1068c35cc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126b5b98;
  _objc_alloc(PTR_PTR_1126b5b98);
  lVar9 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar7 < 5) {
    puVar11 = (undefined *)0x0;
LAB_1068c3684:
    lVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar10 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar10);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar9);
    }
    if ((uVar7 < 7) || (uVar10 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar9)), uVar10 == 0))
    goto LAB_1068c3684;
    puVar2 = (uint *)((long)piVar1 + uVar10);
    lVar9 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1068c2cdc(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar10);
    lVar6 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1068c46cc(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar8 < 0xb) {
    bVar3 = false;
  }
  else {
    if ((ulong)puVar8[5] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + (ulong)puVar8[5]) != '\0';
    }
    if ((0xc < *puVar8) && ((ulong)puVar8[6] != 0)) {
      bVar4 = *(char *)((long)piVar1 + (ulong)puVar8[6]) != '\0';
      goto LAB_1068c3734;
    }
  }
  bVar4 = false;
LAB_1068c3734:
  func_0x00010c04c080(puVar5,param_2,puVar11,lVar9,lVar6,bVar3,bVar4);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1068c37b0; end: 1068c37d3; +[SCBoostState objectClassFunctionPointer] */

undefined1  [16] FUN_1068c37b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1068c37cc;
  auVar1._0_8_ = 0x1068c37c4;
  return auVar1;
}



/* Entry: 1068c37d4; end: 1068c38ef;  */

undefined1 *
FUN_1068c37d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f3b20;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
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
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_6;
      *(undefined1 *)((long)plVar1 + 0x15) = param_7;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1068c38f0; end: 1068c3cd3;  */

void FUN_1068c38f0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c252600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar8,&UNK_10f39fc1e);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c252600(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b5b98);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_1068c3c0c;
            puVar8 = PTR_PTR_1126cec30;
            _objc_alloc(PTR_PTR_1126cec30);
            puVar2 = puVar3;
            func_0x00010c252600(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf45460(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0cc0c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c06d760(puVar3);
            puVar7 = puVar3;
            func_0x00010c07bea0(puVar3);
            FUN_1068c37d4(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_1 = puVar3;
            goto LAB_1068c3a10;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b5b98);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126cec30;
        _objc_alloc(PTR_PTR_1126cec30);
        puVar2 = puVar3;
        func_0x00010c252600(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf45460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0cc0c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c06d760(puVar3);
        puVar7 = puVar3;
        func_0x00010c07bea0(puVar3);
        FUN_1068c37d4(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_1068c3a10:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1068c3c14;
      }
LAB_1068c3c0c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1068c3c14:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1068c3cd4; end: 1068c3d47;  */

void FUN_1068c3cd4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1068c38f0();
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



/* Entry: 1068c3d48; end: 1068c3ff7;  */

void FUN_1068c3d48(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cec30;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1068c38f0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126cec30;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126cec30;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c252600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf45460(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c06d760(param_1);
      puVar6 = param_1;
      func_0x00010c07bea0(param_1);
      FUN_1068c37d4(puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar7 = param_1;
    func_0x00010c252600(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010bf45460(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c06d760();
    puVar1[0x14] = (char)puVar7;
    puVar7 = param_1;
    func_0x00010c07bea0();
    puVar1[0x15] = (char)puVar7;
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068c3ff8; end: 1068c4063;  */

void FUN_1068c3ff8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5b98;
    _objc_alloc(PTR_PTR_1126b5b98);
    func_0x00010c04c080();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068c4064; end: 1068c409f; -[SCBoostStateChangeRequest .cxx_destruct] */

void FUN_1068c4064(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1068c40a0; end: 1068c40ab; -[SCBoostStateChangeRequest table] */

undefined * FUN_1068c40a0(void)

{
  return &UNK_10f39fc11;
}



/* Entry: 1068c40ac; end: 1068c40f3; -[SCBoostStateChangeRequest createTableWithSQLite:] */

void FUN_1068c40ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde290e,0x7c,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1068c40f4; end: 1068c447b; -[SCBoostStateChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1068c40f4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1068c3ff8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1068c447c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f39fc81);
    if (lVar6 == 0) goto LAB_1068c4418;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1068c4418;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b5b98);
    func_0x00010c21c9a0(puVar7);
LAB_1068c4400:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f39fc59);
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
            _objc_opt_class(PTR_PTR_1126b5b98);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068c4424;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1068c4424;
    }
    FUN_1068c3ff8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1068c447c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f39fcb7);
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
        _objc_opt_class(PTR_PTR_1126b5b98);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1068c4400;
      }
    }
LAB_1068c4418:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1068c4424:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068c447c; end: 1068c46cb;  */

ulong FUN_1068c447c(ulong param_1,ulong param_2)

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
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar8 = param_2;
    func_0x00010bf45460(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    FUN_1068c2df8(param_1,uVar8);
    _objc_release(uVar8);
    uVar9 = uVar9 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010c0cc0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_1068c48a8(param_1,uVar5);
    _objc_release(uVar5);
    uVar8 = uVar8 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c252600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1068c4a50(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c06d760();
  uVar7 = param_2;
  func_0x00010c07bea0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  if (uVar8 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,8,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar8) + 4,0);
  }
  FUN_1068c3038(param_1,6,uVar9);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,0xc,uVar7,0);
  func_0x000100ab13ac(param_1,10,uVar6 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c46cc; end: 1068c48a7;  */

void FUN_1068c46cc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_1068c47c8;
  }
  puVar7 = PTR_PTR_1126b5b20;
  _objc_alloc(PTR_PTR_1126b5b20);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar6 = (undefined *)0x0;
LAB_1068c478c:
    bVar2 = false;
LAB_1068c4790:
    puVar8 = (undefined *)0x0;
LAB_1068c4798:
    uVar9 = 0;
LAB_1068c479c:
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar3 < 0xb) goto LAB_1068c478c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar5 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar5) != '\0';
    }
    if (uVar3 < 0xd) goto LAB_1068c4790;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    uVar10 = 0;
    if (uVar3 < 0xf) goto LAB_1068c4798;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe);
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if (uVar3 < 0x11) goto LAB_1068c479c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x10);
    if (uVar5 != 0) {
      uVar10 = *(undefined8 *)((long)param_1 + uVar5);
    }
    uVar11 = 0;
    if ((0x12 < uVar3) &&
       (uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x12), uVar11 = 0, uVar5 != 0)) {
      uVar11 = *(undefined8 *)((long)param_1 + uVar5);
    }
  }
  func_0x00010c04d920(uVar9,uVar10,uVar11,puVar7,param_2,puVar6,bVar2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
LAB_1068c47c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068c48a8; end: 1068c4a4f;  */

ulong FUN_1068c48a8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_1068c4a50(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c06b7e0(param_3);
  uVar7 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  FUN_1068c4a50(param_2,uVar7);
  func_0x00010bf1f9a0(param_3);
  uVar9 = param_1;
  func_0x00010bf1f740(param_3);
  func_0x00010c123160(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_2,0x12);
  func_0x0001001ce11c(uVar9,0,param_2,0x10);
  func_0x0001001ce11c(param_1,0,param_2,0xe);
  func_0x0001001ce2e4(param_2,0xc,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_2,10,uVar6,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1068c4a50; end: 1068c4b7f;  */

undefined8 FUN_1068c4a50(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1068c4b30;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1068c4b30;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1068c4af0;
    param_1 = 0;
  }
  else {
LAB_1068c4af0:
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
LAB_1068c4b30:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1068c4b80; end: 1068c4b8b; +[SCBoostMetadata table] */

undefined * FUN_1068c4b80(void)

{
  return &UNK_10f39fcf7;
}



/* Entry: 1068c4b8c; end: 1068c4b97; +[SCBoostMetadata immutableObjectParse:bufferSize:] */

void FUN_1068c4b8c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  piVar2 = (int *)((long)param_3 + (ulong)*param_3);
  if (piVar2 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_1068c47c8;
  }
  puVar8 = PTR_PTR_1126b5b20;
  _objc_alloc(PTR_PTR_1126b5b20);
  lVar5 = (long)*piVar2;
  uVar4 = *(ushort *)((long)piVar2 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_1068c478c:
    bVar3 = false;
LAB_1068c4790:
    puVar9 = (undefined *)0x0;
LAB_1068c4798:
    uVar10 = 0;
LAB_1068c479c:
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar2 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar2;
      uVar4 = *(ushort *)((long)piVar2 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 0xb) goto LAB_1068c478c;
    uVar6 = (ulong)*(ushort *)((long)piVar2 + lVar5 + 10);
    if (uVar6 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar2 + uVar6) != '\0';
    }
    if (uVar4 < 0xd) goto LAB_1068c4790;
    uVar6 = (ulong)*(ushort *)((long)piVar2 + lVar5 + 0xc);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar2;
      uVar4 = *(ushort *)((long)piVar2 - (long)*piVar2);
    }
    uVar11 = 0;
    if (uVar4 < 0xf) goto LAB_1068c4798;
    uVar6 = (ulong)*(ushort *)((long)piVar2 + lVar5 + 0xe);
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = *(undefined8 *)((long)piVar2 + uVar6);
    }
    if (uVar4 < 0x11) goto LAB_1068c479c;
    uVar6 = (ulong)*(ushort *)((long)piVar2 + lVar5 + 0x10);
    if (uVar6 != 0) {
      uVar11 = *(undefined8 *)((long)piVar2 + uVar6);
    }
    uVar12 = 0;
    if ((0x12 < uVar4) &&
       (uVar6 = (ulong)*(ushort *)((long)piVar2 + lVar5 + 0x12), uVar12 = 0, uVar6 != 0)) {
      uVar12 = *(undefined8 *)((long)piVar2 + uVar6);
    }
  }
  func_0x00010c04d920(uVar10,uVar11,uVar12,puVar8,param_2,puVar7,bVar3,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
LAB_1068c47c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1068c4b98; end: 1068c4bbb; +[SCBoostMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_1068c4b98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1068c4bb4;
  auVar1._0_8_ = 0x1068c4bac;
  return auVar1;
}



/* Entry: 1068c4bbc; end: 1068c4c27;  */

void FUN_1068c4bbc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b5b20;
    _objc_alloc(PTR_PTR_1126b5b20);
    func_0x00010c04d920(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068c4c28; end: 1068c4c57; -[SCBoostMetadataChangeRequest .cxx_destruct] */

void FUN_1068c4c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1068c4c58; end: 1068c4c63; -[SCBoostMetadataChangeRequest table] */

undefined * FUN_1068c4c58(void)

{
  return &UNK_10f39fcf7;
}



/* Entry: 1068c4c64; end: 1068c4cab; -[SCBoostMetadataChangeRequest createTableWithSQLite:] */

void FUN_1068c4c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde298a,0x7f,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1068c4cac; end: 1068c5033; -[SCBoostMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1068c4cac(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1068c4bbc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1068c48a8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f39fd32);
    if (lVar6 == 0) goto LAB_1068c4fd0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1068c4fd0;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b5b20);
    func_0x00010c21c9a0(puVar7);
LAB_1068c4fb8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f39fd07);
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
            _objc_opt_class(PTR_PTR_1126b5b20);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068c4fdc;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1068c4fdc;
    }
    FUN_1068c4bbc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1068c48a8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f39fd6b);
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
        _objc_opt_class(PTR_PTR_1126b5b20);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1068c4fb8;
      }
    }
LAB_1068c4fd0:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1068c4fdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1068c5034; end: 1068c51f3;  */

void FUN_1068c5034(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1088;
  _objc_alloc_init(PTR_PTR_1126c1088);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852b578(puVar1,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010852b860(param_1,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068c51f4; end: 1068c5a5f; -[SCStoriesEverywhereQueryCoordinator initWithUserSession:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:discoverFeedDataLoader:snapTokenProvider:interactionHistoryManager:sectionsCoordinator:storiesConfigProvider:endpointManager:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:userRegistrationInfoProvider:snapchattersDataFetcher:userSegmentsProvider:networkConnectivityMonitor:locationProvider:adsClientInfoProvider:readReceiptCoordinator:promotedStoriesLogger:storiesGrapheneMetricsEmitter:discoverFeedEventsController:crashLogger:blizzardLogger:httpRequestModifier:httpMetadataService:rtusClientCacheManager:pageLoadMetricManager:dpaConfigProvider:friendStoriesSyncer:mixedStoriesDataCoordinator:discoverPerformanceLogging:adRenderDataParser:storiesSyncNetworkRequester:] */

undefined8 *
FUN_1068c51f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  puStack_70 = PTR_PTR_1126f3b30;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(0);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = 0;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_24;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cec38;
    _objc_alloc();
    uVar2 = puVar1[3];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00cca0();
    uVar5 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_29;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar6 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_35;
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 1068c5a60; end: 1068c5a8f;  */

void FUN_1068c5a60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f543e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 1068c5a90; end: 1068c5acf; +[SCStoriesEverywhereQueryCoordinator announcerIdentifier] */

void FUN_1068c5a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e280f8);
  return;
}



/* Entry: 1068c5ad0; end: 1068c5b1f; -[SCStoriesEverywhereQueryCoordinator setSectionExtensionServices:] */

void FUN_1068c5ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x168);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068c5b20; end: 1068c5b27; -[SCStoriesEverywhereQueryCoordinator canPerformQuery:] */

undefined8 FUN_1068c5b20(void)

{
  return 1;
}



/* Entry: 1068c5b28; end: 1068c5be3; -[SCStoriesEverywhereQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1068c5b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be13880(param_1);
  }
  func_0x00010becfe80(param_1,param_2,param_4,param_3,2,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068c5be4; end: 1068c5d1b; -[SCStoriesEverywhereQueryCoordinator _triggerUpdatingBlockIfNeeded:query:resultState:error:] */

void FUN_1068c5be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068c5d1c; end: 1068c5d5f;  */

void FUN_1068c5d1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010becfea0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068c5d60; end: 1068c5df7; -[SCStoriesEverywhereQueryCoordinator _triggerUpdatingBlockIfNeededOnPerformer:query:resultState:error:] */

void FUN_1068c5d60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_3 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_3);
    func_0x00010be22580(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1,param_6);
    _objc_release(param_6);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068c5df8; end: 1068c5f5b; -[SCStoriesEverywhereQueryCoordinator _getSearchQueryResultWithQuery:resultState:] */

void FUN_1068c5df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  if ((lVar4 == 0) && (lVar4 = *(long *)(param_1 + 0x168), lVar4 != 0)) {
    func_0x00010c09de60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c09de80(lVar1,param_2,&PTR____CFConstantStringClassReference_110eb5378);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = lVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar3);
    }
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126b16f0;
  _objc_alloc();
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bf51e00();
  func_0x00010c042a40(puVar2,param_2,param_3,lVar4,param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar4 + 0xd0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1068c5f5c; end: 1068c5f93; -[SCStoriesEverywhereQueryCoordinator _fetchRemoteFriendStoriesWithQuery] */

void FUN_1068c5f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068c5f94; end: 1068c5f9b; -[SCStoriesEverywhereQueryCoordinator isLoading] */

undefined1 FUN_1068c5f94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x158);
}



/* Entry: 1068c5f9c; end: 1068c5fa3; -[SCStoriesEverywhereQueryCoordinator currentQuery] */

undefined8 FUN_1068c5f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 1068c5fa4; end: 1068c5fab; -[SCStoriesEverywhereQueryCoordinator setCurrentQuery:] */

void FUN_1068c5fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1068c5fac; end: 1068c5fb3; -[SCStoriesEverywhereQueryCoordinator sectionExtensionServices] */

undefined8 FUN_1068c5fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 1068c5fb4; end: 1068c5fcb; -[SCStoriesEverywhereQueryCoordinator delegate] */

void FUN_1068c5fb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068c5fcc; end: 1068c5fd7; -[SCStoriesEverywhereQueryCoordinator setDelegate:] */

void FUN_1068c5fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x170,param_3);
  return;
}



/* Entry: 1068c5fd8; end: 1068c6207; -[SCStoriesEverywhereQueryCoordinator .cxx_destruct] */

void FUN_1068c5fd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
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



/* Entry: 1068c6208; end: 1068c62eb; -[SCStoriesEverywhereQueryServiceProvider provide] */

void FUN_1068c6208(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cec40;
  _objc_alloc(PTR_PTR_1126cec40);
  func_0x00010c04d120();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068c62ec; end: 1068c632b;  */

void FUN_1068c62ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c632c; end: 1068c6ae3; -[SCStoriesEverywhereQueryServiceProvider _createQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c632c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
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
  long lVar37;
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
  long lVar49;
  long lVar50;
  long lVar51;
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
  
  lVar1 = param_1 + _DAT_112752e6c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b1170;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112752e70;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cec48;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112752e74;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = (long)_DAT_112752e78;
  lVar4 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar7 = lVar4;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar10 = lVar64;
  func_0x00010c08d420();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112752e7c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112752e80;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112752e84;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112752e88;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112752e8c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112752e90;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112752e94;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112752e98;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112752e9c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112752ea0;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112752ea4;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112752ea8;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = (long)_DAT_112752eac;
  lVar36 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_112752eb0;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar40 = lVar65;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112752eb4;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_112752eb8;
  lVar43 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112752ebc;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = (long)_DAT_112752ec0;
  lVar47 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar49 = lVar67;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112752ec4;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_112752ec8;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_112752ecc;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + _DAT_112752ed0;
  _objc_loadWeakRetained();
  lVar57 = lVar56;
  func_0x00010bfb8d60();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_112752ed4;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010bf4cbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar60 = lVar66;
  func_0x00010bf82700();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_112752ed8;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752edc;
  _objc_loadWeakRetained();
  lVar63 = param_1;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d220(puVar5,param_2,lVar2,lVar6,lVar7,lVar9,lVar10,lVar12,lVar14,lVar16,lVar18,
                      lVar21,lVar23,lVar25,lVar27,lVar29,lVar31,lVar33,lVar35,lVar37,lVar39,lVar40,
                      lVar42,lVar44,puVar3,lVar46,lVar48,lVar49,lVar51,lVar53,lVar55,lVar57,lVar59,
                      lVar60,lVar62,lVar63);
  _objc_release(lVar63);
  _objc_release(param_1);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar66);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar67);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar65);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
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
  _objc_release(lVar64);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1068c6ae4; end: 1068c6c6b; -[SCStoriesEverywhereQueryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c6ae4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752edc);
  _objc_destroyWeak(param_1 + _DAT_112752ed8);
  _objc_destroyWeak(param_1 + _DAT_112752ed0);
  _objc_destroyWeak(param_1 + _DAT_112752ea8);
  _objc_destroyWeak(param_1 + _DAT_112752ecc);
  _objc_destroyWeak(param_1 + _DAT_112752ec8);
  _objc_destroyWeak(param_1 + _DAT_112752ed4);
  _objc_destroyWeak(param_1 + _DAT_112752ec4);
  _objc_destroyWeak(param_1 + _DAT_112752ebc);
  _objc_destroyWeak(param_1 + _DAT_112752eb0);
  _objc_destroyWeak(param_1 + _DAT_112752e70);
  _objc_destroyWeak(param_1 + _DAT_112752eb4);
  _objc_destroyWeak(param_1 + _DAT_112752eac);
  _objc_destroyWeak(param_1 + _DAT_112752eb8);
  _objc_destroyWeak(param_1 + _DAT_112752ea4);
  _objc_destroyWeak(param_1 + _DAT_112752ea0);
  _objc_destroyWeak(param_1 + _DAT_112752e88);
  _objc_destroyWeak(param_1 + _DAT_112752e84);
  _objc_destroyWeak(param_1 + _DAT_112752e98);
  _objc_destroyWeak(param_1 + _DAT_112752e9c);
  _objc_destroyWeak(param_1 + _DAT_112752e94);
  _objc_destroyWeak(param_1 + _DAT_112752e90);
  _objc_destroyWeak(param_1 + _DAT_112752ec0);
  _objc_destroyWeak(param_1 + _DAT_112752e8c);
  _objc_destroyWeak(param_1 + _DAT_112752e7c);
  _objc_destroyWeak(param_1 + _DAT_112752e78);
  _objc_destroyWeak(param_1 + _DAT_112752e80);
  _objc_destroyWeak(param_1 + _DAT_112752e74);
  _objc_destroyWeak(param_1 + _DAT_112752e6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752ee0);
  return;
}



/* Entry: 1068c6c6c; end: 1068c77fb; -[SCDiscoverFeedActionHandlerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c6c6c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
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
  long lVar37;
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
  long lVar49;
  long lVar50;
  long lVar51;
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
  undefined *puVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  undefined8 uVar75;
  long lVar76;
  long lVar77;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126c2158;
  _objc_alloc();
  lVar77 = (long)_DAT_112752ee4;
  lVar2 = param_1 + lVar77;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + _DAT_112752ee8;
  _objc_loadWeakRetained(lVar76);
  lVar4 = lVar76;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_112752eec;
  lVar5 = param_1 + lVar68;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cd60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar70);
  _objc_release(lVar4);
  _objc_release(lVar76);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_70,param_1);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b1170;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112752ef0;
  _objc_loadWeakRetained(lVar2);
  lVar76 = lVar2;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480();
  _objc_release(lVar76);
  _objc_release(lVar2);
  lVar9 = param_1;
  func_0x00010bdc43e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c2160;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112752ef4;
  _objc_loadWeakRetained();
  lVar11 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + _DAT_112752ef8;
  _objc_loadWeakRetained();
  lVar12 = lVar76;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112752efc;
  _objc_loadWeakRetained();
  lVar13 = lVar5;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = (long)_DAT_112752f00;
  lVar3 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar14 = lVar3;
  func_0x00010c131580();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = (long)_DAT_112752f04;
  lVar4 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar15 = lVar4;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar16 = lVar70;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = (long)_DAT_112752f08;
  lVar6 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar17 = lVar6;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112752f0c;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112752f10;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar24 = lVar77;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar25 = lVar71;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = (long)_DAT_112752f14;
  lVar26 = param_1 + lVar72;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1 + lVar72;
  _objc_loadWeakRetained();
  lVar28 = lVar72;
  func_0x00010bf40000();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112752f1c;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112752f20;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112752f24;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_112752f28;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = (long)_DAT_112752f2c;
  lVar38 = param_1 + lVar73;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c2527c0();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + lVar73;
  _objc_loadWeakRetained();
  lVar40 = lVar73;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_112752f30;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = (long)_DAT_112752f34;
  lVar43 = param_1 + lVar74;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112752f38;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_112752f3c;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_112752f40;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + lVar74;
  _objc_loadWeakRetained();
  lVar51 = lVar74;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_112752f44;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_112752f48;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar56 = lVar69;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  uVar75 = *(undefined8 *)(param_1 + _DAT_112752f84);
  _objc_retain(uVar75);
  lVar57 = param_1 + _DAT_112752f4c;
  _objc_loadWeakRetained();
  lVar58 = param_1 + _DAT_112752f54;
  _objc_loadWeakRetained();
  lVar59 = param_1 + _DAT_112752f58;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010c11a360();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar61 = lVar68;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_112752f5c;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_112752f64;
  _objc_loadWeakRetained();
  lVar65 = param_1 + _DAT_112752f68;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e580();
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar68);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(uVar75);
  _objc_release(lVar56);
  _objc_release(lVar69);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar74);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar73);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar72);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar71);
  _objc_release(lVar24);
  _objc_release(lVar77);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar70);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar76);
  _objc_release(lVar11);
  _objc_release(lVar2);
  lVar76 = (long)_DAT_112752f6c;
  lVar2 = param_1 + lVar76;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c293ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f480(puVar10);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c24ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182020(puVar10);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar76 = param_1 + lVar76;
  _objc_loadWeakRetained(lVar76);
  lVar2 = lVar76;
  func_0x00010bf82ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f220(puVar10);
  _objc_release(lVar2);
  _objc_release(lVar76);
  param_1 = param_1 + _DAT_112752f70;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c08d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0520(puVar10);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar67 = PTR_PTR_1126cec50;
  _objc_alloc(PTR_PTR_1126cec50);
  func_0x00010c00cc40();
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar67);
  return;
}



/* Entry: 1068c77fc; end: 1068c783b;  */

void FUN_1068c77fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c783c; end: 1068c7a97; -[SCDiscoverFeedActionHandlerServiceProvider _actionHandlersFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c783c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar8 = param_1 + _DAT_112752f74;
  _objc_loadWeakRetained();
  lVar2 = lVar8;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_initWeak(auStack_68,param_1);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112752f88;
    _objc_loadWeakRetained();
  }
  param_1 = param_1 + _DAT_112752f78;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae960;
  puVar5 = PTR_PTR_1126be840;
  func_0x00010bf81660(PTR_PTR_1126be840);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bc80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  func_0x00010c2a15e0(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1068c7a98; end: 1068c7c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c7a98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112752f80);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1068c7b68;
    puStack_40 = &UNK_1108d4780;
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x1068c7bc4;
    puStack_70 = &UNK_110844e40;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    uStack_68 = uVar3;
    uStack_60 = uVar4;
    func_0x00010bf9d5c0(uVar2,param_2,&puStack_58,&puStack_88);
    _objc_release(uStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1068c7c50; end: 1068c7c97; -[SCDiscoverFeedActionHandlerServiceProvider _creatorSubscriptionsInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c7c50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112752f7c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c260aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c7c98; end: 1068c7ec3; -[SCDiscoverFeedActionHandlerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c7c98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752f88);
  _objc_destroyWeak(param_1 + _DAT_112752f4c);
  _objc_destroyWeak(param_1 + _DAT_112752f70);
  _objc_destroyWeak(param_1 + _DAT_112752f6c);
  _objc_destroyWeak(param_1 + _DAT_112752f68);
  _objc_destroyWeak(param_1 + _DAT_112752f7c);
  _objc_storeStrong(param_1 + _DAT_112752f60,0);
  _objc_destroyWeak(param_1 + _DAT_112752f64);
  _objc_destroyWeak(param_1 + _DAT_112752f54);
  _objc_storeStrong(param_1 + _DAT_112752f50,0);
  _objc_storeStrong(param_1 + _DAT_112752f84,0);
  _objc_storeStrong(param_1 + _DAT_112752f18,0);
  _objc_storeStrong(param_1 + _DAT_112752f80,0);
  _objc_destroyWeak(param_1 + _DAT_112752f5c);
  _objc_destroyWeak(param_1 + _DAT_112752eec);
  _objc_destroyWeak(param_1 + _DAT_112752f78);
  _objc_destroyWeak(param_1 + _DAT_112752ef0);
  _objc_destroyWeak(param_1 + _DAT_112752f48);
  _objc_destroyWeak(param_1 + _DAT_112752f44);
  _objc_destroyWeak(param_1 + _DAT_112752f40);
  _objc_destroyWeak(param_1 + _DAT_112752f3c);
  _objc_destroyWeak(param_1 + _DAT_112752f34);
  _objc_destroyWeak(param_1 + _DAT_112752f2c);
  _objc_destroyWeak(param_1 + _DAT_112752f20);
  _objc_destroyWeak(param_1 + _DAT_112752f1c);
  _objc_destroyWeak(param_1 + _DAT_112752f14);
  _objc_destroyWeak(param_1 + _DAT_112752f24);
  _objc_destroyWeak(param_1 + _DAT_112752f58);
  _objc_destroyWeak(param_1 + _DAT_112752f30);
  _objc_destroyWeak(param_1 + _DAT_112752f38);
  _objc_destroyWeak(param_1 + _DAT_112752f28);
  _objc_destroyWeak(param_1 + _DAT_112752f10);
  _objc_destroyWeak(param_1 + _DAT_112752f0c);
  _objc_destroyWeak(param_1 + _DAT_112752ee8);
  _objc_destroyWeak(param_1 + _DAT_112752ee4);
  _objc_destroyWeak(param_1 + _DAT_112752f08);
  _objc_destroyWeak(param_1 + _DAT_112752f04);
  _objc_destroyWeak(param_1 + _DAT_112752f00);
  _objc_destroyWeak(param_1 + _DAT_112752efc);
  _objc_destroyWeak(param_1 + _DAT_112752ef8);
  _objc_destroyWeak(param_1 + _DAT_112752ef4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752f74);
  return;
}



/* Entry: 1068c7ec4; end: 1068c7f67; -[SCDiscoverOnboardingTrackerImpl initWithFeatureSettingsService:userPreferences:] */

undefined1 *
FUN_1068c7ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3b38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068c7f68; end: 1068c7fa7; -[SCDiscoverOnboardingTrackerImpl vOperaV2OnboardingComplete] */

undefined8 FUN_1068c7f68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf43fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1068c7fa8; end: 1068c8087; -[SCDiscoverOnboardingTrackerImpl setVOperaV2OnboardingComplete:] */

void FUN_1068c7fa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068c8088; end: 1068c80e7;  */

void FUN_1068c8088(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17fb00();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068c80e8; end: 1068c812f; -[SCDiscoverOnboardingTrackerImpl vOperaScrollEducationComplete] */

undefined8 FUN_1068c80e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1068c8130; end: 1068c8173; -[SCDiscoverOnboardingTrackerImpl setVOperaScrollEducationComplete:] */

void FUN_1068c8130(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068c8174; end: 1068c81b3; -[SCDiscoverOnboardingTrackerImpl spotlightFeedOnboardingComplete] */

undefined8 FUN_1068c8174(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf43f40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1068c81b4; end: 1068c8293; -[SCDiscoverOnboardingTrackerImpl setSpotlightFeedOnboardingComplete:] */

void FUN_1068c81b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1068c8294; end: 1068c82c7;  */

void FUN_1068c8294(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068c82c8; end: 1068c8303; -[SCDiscoverOnboardingTrackerImpl _setSpotlightFeedOnboardingComplete:] */

void FUN_1068c82c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068c8304; end: 1068c8333; -[SCDiscoverOnboardingTrackerImpl .cxx_destruct] */

void FUN_1068c8304(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068c8334; end: 1068c833f; -[SCFeatureSettingsService isCompletedVOperaV2Onboarding] */

void FUN_1068c8334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e641f8);
  return;
}



/* Entry: 1068c8340; end: 1068c834b; -[SCFeatureSettingsService completedVOperaV2OnboardingServerParam] */

undefined ** FUN_1068c8340(void)

{
  return &PTR____CFConstantStringClassReference_110e641f8;
}



/* Entry: 1068c834c; end: 1068c835b; -[SCFeatureSettingsService setCompletedVOperaV2Onboarding:] */

void FUN_1068c834c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e641f8,param_3);
  return;
}



/* Entry: 1068c835c; end: 1068c8363; -[SCFeatureSettingsService completed_vopera_v2_onboarding_with_swiep_left_client_value:] */

undefined * FUN_1068c835c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1068c8364; end: 1068c836b; -[SCFeatureSettingsService completed_vopera_v2_onboarding_with_swiep_left_server_value:] */

void FUN_1068c8364(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1068c836c; end: 1068c837b; -[SCFeatureSettingsService completedVOperaV2Onboarding] */

void FUN_1068c836c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e641f8,0);
  return;
}



/* Entry: 1068c837c; end: 1068c8387; -[SCFeatureSettingsService getDateLastCompletedVOperaOnboardingExitTooltipMilliseconds] */

void FUN_1068c837c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e64218);
  return;
}



/* Entry: 1068c8388; end: 1068c8393; -[SCFeatureSettingsService dateLastCompletedVOperaOnboardingExitTooltipMillisecondsServerParam] */

undefined ** FUN_1068c8388(void)

{
  return &PTR____CFConstantStringClassReference_110e64218;
}



/* Entry: 1068c8394; end: 1068c83a3; -[SCFeatureSettingsService setDateLastCompletedVOperaOnboardingExitTooltipMilliseconds:] */

void FUN_1068c8394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e64218,param_3);
  return;
}



/* Entry: 1068c83a4; end: 1068c83ab; -[SCFeatureSettingsService completed_vertical_opera_onboarding_exit_tooltip_date_client_value:] */

void FUN_1068c83a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1068c83ac; end: 1068c83b3; -[SCFeatureSettingsService completed_vertical_opera_onboarding_exit_tooltip_date_server_value:] */

void FUN_1068c83ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1068c83b4; end: 1068c83c3; -[SCFeatureSettingsService dateLastCompletedVOperaOnboardingExitTooltipMilliseconds] */

void FUN_1068c83b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e64218,0);
  return;
}



/* Entry: 1068c83c4; end: 1068c83cf; -[SCFeatureSettingsService isCompletedSpotlightFeedOnboarding] */

void FUN_1068c83c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e64238);
  return;
}



/* Entry: 1068c83d0; end: 1068c83db; -[SCFeatureSettingsService completedSpotlightFeedOnboardingServerParam] */

undefined ** FUN_1068c83d0(void)

{
  return &PTR____CFConstantStringClassReference_110e64238;
}



/* Entry: 1068c83dc; end: 1068c83eb; -[SCFeatureSettingsService setCompletedSpotlightFeedOnboarding:] */

void FUN_1068c83dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e64238,param_3);
  return;
}



/* Entry: 1068c83ec; end: 1068c83f3; -[SCFeatureSettingsService completed_spotlight_feed_onboarding_client_value:] */

undefined * FUN_1068c83ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1068c83f4; end: 1068c83fb; -[SCFeatureSettingsService completed_spotlight_feed_onboarding_server_value:] */

void FUN_1068c83f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1068c83fc; end: 1068c840b; -[SCFeatureSettingsService completedSpotlightFeedOnboarding] */

void FUN_1068c83fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e64238,0);
  return;
}



/* Entry: 1068c840c; end: 1068c8417; -[SCFeatureSettingsService isOneTapQuickPostToolTipShownCountAvailable] */

void FUN_1068c840c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e64258);
  return;
}



/* Entry: 1068c8418; end: 1068c8423; -[SCFeatureSettingsService oneTapQuickPostToolTipShownCountServerParam] */

undefined ** FUN_1068c8418(void)

{
  return &PTR____CFConstantStringClassReference_110e64258;
}



/* Entry: 1068c8424; end: 1068c8433; -[SCFeatureSettingsService setSeenOneTapQuickPostToolTipShownCount:] */

void FUN_1068c8424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e64258,param_3);
  return;
}



/* Entry: 1068c8434; end: 1068c843b; -[SCFeatureSettingsService one_tap_quick_post_preview_long_press_tooltip_client_value:] */

void FUN_1068c8434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1068c843c; end: 1068c8443; -[SCFeatureSettingsService one_tap_quick_post_preview_long_press_tooltip_server_value:] */

void FUN_1068c843c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1068c8444; end: 1068c8453; -[SCFeatureSettingsService oneTapQuickPostToolTipShownCount] */

void FUN_1068c8444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e64258,0);
  return;
}



/* Entry: 1068c8454; end: 1068c85e7;  */

void FUN_1068c8454(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c85e8; end: 1068c864f;  */

void FUN_1068c85e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = lVar1;
  func_0x00010bdec120(lVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1068c8650; end: 1068c875b;  */

void FUN_1068c8650(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068c875c; end: 1068c8877; -[SCDiscoverFeedDataServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c875c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112752fac;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112752f98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109600();
  _objc_release(uVar2);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068c8878; end: 1068c8d2b; -[SCDiscoverFeedDataServicesEntryPoint _createDiscoverFeedDataStoreWithlazyDiscoverFeedRanker:lazyDiscoverFeedInteractionHistoryManager:lazyDiscoverCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c8878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  puVar1 = PTR_PTR_1126cec80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112752fc0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar27;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112752fe8;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar25;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112752fb0;
  lVar7 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar11 = lVar28;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112752fb4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112752fb8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  FUN_1068c8d2c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112753000;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar26;
  func_0x00010c134260();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x0001068c8d50();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112752fbc;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c24c880();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112752fc0;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d9e0(puVar1,param_2,lVar3,uVar4,uVar5,lVar6,lVar8,lVar10,lVar11,lVar13,lVar15,
                      lVar17,lVar18,lVar20,param_5,lVar22,lVar24);
  _objc_release(param_5);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar26);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar28);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar25);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar27);
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112753004;
    _objc_loadWeakRetained(lVar27);
  }
  lVar2 = lVar27;
  func_0x00010c1176a0(lVar27);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar3;
  func_0x00010c0e6c00();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1068c8d74;
  puStack_78 = &UNK_110936320;
  _objc_retain(puVar1);
  lVar7 = lVar25;
  puStack_70 = puVar1;
  func_0x00010c25ff60(lVar25,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar27);
  func_0x00010bef7e00(*(undefined8 *)(param_1 + _DAT_112752f94),param_2,lVar7);
  func_0x00010c27c000(puVar1);
  _objc_retain(puVar1);
  _objc_release(lVar7);
  _objc_release(puStack_70);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068c8d2c; end: 1068c8d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c8d2c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112752fc4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068c8d74; end: 1068c8d7f;  */

void FUN_1068c8d74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSnapProSubscriptionEvent__112617420,param_2);
  return;
}



/* Entry: 1068c8d80; end: 1068c8e2b; -[SCDiscoverFeedDataServicesEntryPoint _createDiscoverFeedRanker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068c8d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cec88;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  FUN_1068c8d2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021da0(puVar1,param_2,param_3,lVar3,*(undefined8 *)(param_1 + _DAT_112752f98));
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


