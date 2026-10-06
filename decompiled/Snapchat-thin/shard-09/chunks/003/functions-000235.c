/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c3c220; end: 106c3c4d7; +[SCNotificationData immutableObjectParse:bufferSize:] */

void FUN_106c3c220(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d17d0;
  _objc_alloc(PTR_PTR_1126d17d0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_106c3c2d8:
    uVar8 = 0;
LAB_106c3c2dc:
    uVar10 = 0;
LAB_106c3c2e0:
    puVar9 = (undefined *)0x0;
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
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_106c3c2d8;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
    if (uVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    if (uVar4 < 9) goto LAB_106c3c2dc;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    if (uVar4 < 0xb) goto LAB_106c3c2e0;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0xc < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc);
      if (uVar6 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = -(long)*piVar1;
        uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if (uVar4 < 0xf) {
        uVar12 = 0;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xe);
        if (uVar6 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)((long)piVar1 + uVar6);
        }
        if ((0x10 < uVar4) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x10), uVar6 != 0))
        {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106c3c2f0;
        }
      }
      puVar13 = (undefined *)0x0;
      goto LAB_106c3c2f0;
    }
  }
  puVar13 = (undefined *)0x0;
  puVar11 = (undefined *)0x0;
  uVar12 = 0;
LAB_106c3c2f0:
  func_0x00010c02d6c0(puVar3,param_2,puVar7,uVar8,uVar10,puVar9,puVar11,uVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c3c4d8; end: 106c3c4fb; +[SCNotificationData objectClassFunctionPointer] */

undefined1  [16] FUN_106c3c4d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106c3c4f4;
  auVar1._0_8_ = 0x106c3c4ec;
  return auVar1;
}



/* Entry: 106c3c4fc; end: 106c3c653;  */

undefined1 *
FUN_106c3c4fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126f5e20;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      _objc_retain(param_9);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_9;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106c3c654; end: 106c3cabb;  */

void FUN_106c3c654(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar10,&UNK_10f3c3194);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0d4f60(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar10;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            _sqlite3_column_int64(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d17d0);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_106c3c9d8;
            puVar10 = PTR_PTR_1126d1858;
            _objc_alloc(PTR_PTR_1126d1858);
            puVar2 = puVar3;
            func_0x00010c0d4f60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf929e0(puVar3);
            puVar5 = puVar3;
            func_0x00010c114000(puVar3);
            puVar6 = puVar3;
            func_0x00010bf71140(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bf71220(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010bf1c220(puVar3);
            puVar9 = puVar3;
            func_0x00010bf70a20();
            _objc_retainAutoreleasedReturnValue();
            FUN_106c3c4fc(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9);
            param_1 = puVar3;
            goto LAB_106c3c7a8;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d17d0);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126d1858;
        _objc_alloc(PTR_PTR_1126d1858);
        puVar2 = puVar3;
        func_0x00010c0d4f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf929e0(puVar3);
        puVar5 = puVar3;
        func_0x00010c114000(puVar3);
        puVar6 = puVar3;
        func_0x00010bf71140(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bf71220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bf1c220(puVar3);
        puVar9 = puVar3;
        func_0x00010bf70a20();
        _objc_retainAutoreleasedReturnValue();
        FUN_106c3c4fc(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9);
        param_1 = puVar3;
LAB_106c3c7a8:
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_106c3c9e0;
      }
LAB_106c3c9d8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_106c3c9e0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106c3cabc; end: 106c3cb2f;  */

void FUN_106c3cabc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106c3c654();
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



/* Entry: 106c3cb30; end: 106c3ce6f;  */

void FUN_106c3cb30(undefined *param_1,undefined1 *param_2)

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
  puVar1 = PTR_PTR_1126d1858;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106c3c654();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar9 = PTR_PTR_1126d1858;
    _objc_retain(param_1);
    _objc_opt_self(puVar9);
    puVar9 = PTR_PTR_1126d1858;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c0d4f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf929e0(param_1);
      puVar4 = param_1;
      func_0x00010c114000(param_1);
      puVar5 = param_1;
      func_0x00010bf71140(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bf71220(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010bf1c220(param_1);
      puVar8 = param_1;
      func_0x00010bf70a20();
      _objc_retainAutoreleasedReturnValue();
      FUN_106c3c4fc(puVar9,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar9 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar9 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_1;
    func_0x00010bf929e0();
    *(undefined **)(puVar1 + 0x20) = puVar9;
    puVar9 = param_1;
    func_0x00010c114000();
    *(undefined **)(puVar1 + 0x28) = puVar9;
    puVar9 = param_1;
    func_0x00010bf71140(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_1;
    func_0x00010bf71220(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_1;
    func_0x00010bf1c220();
    *(undefined **)(puVar1 + 0x40) = puVar9;
    puVar9 = param_1;
    func_0x00010bf70a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    _objc_retain(puVar1);
    puVar9 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c3ce70; end: 106c3cee7;  */

void FUN_106c3ce70(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d17d0;
    _objc_alloc(PTR_PTR_1126d17d0);
    func_0x00010c02d6c0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c3cee8; end: 106c3cf2f; -[SCNotificationDataChangeRequest .cxx_destruct] */

void FUN_106c3cee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106c3cf30; end: 106c3cf3b; -[SCNotificationDataChangeRequest table] */

undefined * FUN_106c3cf30(void)

{
  return &UNK_10f3c3181;
}



/* Entry: 106c3cf3c; end: 106c3cf83; -[SCNotificationDataChangeRequest createTableWithSQLite:] */

void FUN_106c3cf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde93e0,0x7c,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106c3cf84; end: 106c3d30b; -[SCNotificationDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106c3cf84(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_106c3ce70(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106c3d30c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c3200);
    if (lVar6 == 0) goto LAB_106c3d2a8;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106c3d2a8;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d17d0);
    func_0x00010c21c9a0(puVar7);
LAB_106c3d290:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3c31d2);
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
            _objc_opt_class(PTR_PTR_1126d17d0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106c3d2b4;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106c3d2b4;
    }
    FUN_106c3ce70(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106c3d30c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3c3239);
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
        _objc_opt_class(PTR_PTR_1126d17d0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106c3d290;
      }
    }
LAB_106c3d2a8:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106c3d2b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c3d30c; end: 106c3d553;  */

ulong FUN_106c3d30c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_106c3d554(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf929e0(param_2);
  uVar7 = param_2;
  func_0x00010c114000(param_2);
  uVar8 = param_2;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_106c3d554(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010bf71220();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_106c3d554(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010bf1c220(param_2);
  uVar13 = param_2;
  func_0x00010bf70a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_106c3d554(param_1,uVar13);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xe,uVar12,0);
  func_0x0001001ce1c8(param_1,8,uVar7,0);
  func_0x0001001ce1c8(param_1,6,uVar6,0);
  func_0x0001001ce2e4(param_1,0x10,uVar14 & 0xffffffff);
  func_0x0001001ce2e4(param_1,0xc,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,10,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106c3d554; end: 106c3d683;  */

undefined8 FUN_106c3d554(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106c3d634;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106c3d634;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106c3d5f4;
    param_1 = 0;
  }
  else {
LAB_106c3d5f4:
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
LAB_106c3d634:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106c3d684; end: 106c3d77f; -[SCNotificationAckViaHttpClient initWithPath:graphene:httpRequestModifier:httpMetadataService:] */

undefined1 *
FUN_106c3d684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5e28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c3d780; end: 106c3da43; -[SCNotificationAckViaHttpClient ackNotificationWithNotificationId:senderUsername:sentTimestamp:clientReceiveTimestampMs:pushType:trackingData:inBackground:systemNotificationEnabled:fromExtension:ackEventName:displayDelayLatencyMillis:displayDelayReason:fromRecovery:clientReceiveSource:] */

void FUN_106c3d780(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15,int param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d1868;
  _objc_retain(param_14);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1ce180();
  _objc_release(param_4);
  func_0x00010c1fcba0(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c26f320(param_6);
  _objc_release(param_6);
  param_1 = param_1 * 1000.0;
  func_0x00010c1fcda0(puVar1,param_3,(long)param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1615a0(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  if (0 < param_7) {
    func_0x00010c17cfe0(puVar1,param_3,param_7);
  }
  puVar2 = PTR_PTR_1126c0308;
  _objc_opt_new(PTR_PTR_1126c0308);
  func_0x00010c220160();
  func_0x00010c1ab7a0(puVar1,param_3,puVar2);
  func_0x00010c1e6040(puVar1,param_3,param_8);
  _objc_release(param_8);
  func_0x00010c2192e0(puVar1,param_3,param_9);
  _objc_release(param_9);
  puVar3 = PTR_PTR_1126c0308;
  _objc_opt_new(PTR_PTR_1126c0308);
  func_0x00010c220160();
  func_0x00010c211120(puVar1,param_3,puVar3);
  puVar4 = PTR_PTR_1126c0308;
  _objc_opt_new(PTR_PTR_1126c0308);
  func_0x00010c220160();
  func_0x00010c1a0ea0(puVar1,param_3,puVar4);
  uVar5 = param_2;
  func_0x00010be1ca40(param_2,param_3,param_12);
  func_0x00010c161520(puVar1,param_3,uVar5);
  func_0x00010c18fa60(puVar1,param_3,param_13);
  func_0x00010c18fa80(puVar1,param_3,param_14);
  _objc_release(param_14);
  puVar6 = PTR_PTR_1126c0308;
  _objc_opt_new(PTR_PTR_1126c0308);
  func_0x00010c220160();
  func_0x00010c1a0fc0(puVar1,param_3,puVar6);
  if (param_16 != -0x4524111) {
    func_0x00010c17cfc0(puVar1);
  }
  puVar7 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104f60(param_2,param_3,puVar7,param_12);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3da44; end: 106c3dd4b; -[SCNotificationAckViaHttpClient postRequestWithData:ackEventName:] */

void FUN_106c3da44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000106c40130();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x000106c40130();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf225e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2bb2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  lVar1 = param_1;
  func_0x00010be1d8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(puVar11);
  _objc_release(uVar7);
  _objc_release(puVar13);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c3dd4c; end: 106c3dd87;  */

void FUN_106c3dd4c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c3dd88; end: 106c3dda3; -[SCNotificationAckViaHttpClient _getStringRepresentingAckEvent:] */

undefined ** FUN_106c3dd88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e7a718;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7a738;
  }
  return ppuVar1;
}



/* Entry: 106c3dda4; end: 106c3ddaf; -[SCNotificationAckViaHttpClient _getAckNotificationRequestEventName:] */

bool FUN_106c3dda4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 106c3ddb0; end: 106c3de4f; -[SCNotificationAckViaHttpClient reportSuccessGrapheneForPnsRequestWithType:] */

void FUN_106c3ddb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010beeda40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c3de50; end: 106c3df5f; -[SCNotificationAckViaHttpClient reportFailureGrapheneForPnsRequestWithType:statusCode:] */

void FUN_106c3de50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010beeda20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e7a6b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106c3df60; end: 106c3e0af; -[SCNotificationAckViaHttpClient _getCallbackForAckCallWithAckEventName:] */

void FUN_106c3df60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be231c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106c3e030;
  puStack_50 = &UNK_11085fe98;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106c3e0b0; end: 106c3e103; -[SCNotificationAckViaHttpClient .cxx_destruct] */

void FUN_106c3e0b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c3e104; end: 106c3e2ff; -[SCNotificationRegisterTokenClient initWithEndpointAddress:unifiedGRPCFactory:userId:asyncQueue:appId:] */

undefined8 *
FUN_106c3e104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f5e30;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    *(undefined4 *)(puVar1 + 5) = param_7;
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c3e300; end: 106c3e347;  */

void FUN_106c3e300(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c3e348; end: 106c3e413; -[SCNotificationRegisterTokenClient initUserId:pndrService:asyncQueue:] */

undefined1 *
FUN_106c3e348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5e30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c3e414; end: 106c3e503; -[SCNotificationRegisterTokenClient _createServiceWithEndpointAddress:queue:] */

void FUN_106c3e414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_4);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,4000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf56360(uVar2,param_2,&PTR____CFConstantStringClassReference_110e7a758,puVar1,param_4)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126d1870;
  _objc_alloc(PTR_PTR_1126d1870);
  func_0x00010c058f80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c3e504; end: 106c3e51b; -[SCNotificationRegisterTokenClient registerApnsToken:encryptionKey:onComplete:] */

void FUN_106c3e504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerToken_tokenType_encrypt_112580128,param_3,1,param_4,1,1,param_5)
  ;
  return;
}



/* Entry: 106c3e51c; end: 106c3e52b; -[SCNotificationRegisterTokenClient registerVoipToken:encryptionKey:onComplete:] */

void FUN_106c3e51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerToken_tokenType_encrypt_112580120,param_3,4,param_4,param_5);
  return;
}



/* Entry: 106c3e52c; end: 106c3e53b; -[SCNotificationRegisterTokenClient registerLPSEToken:encryptionKey:onComplete:] */

void FUN_106c3e52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__registerToken_tokenType_encrypt_112580120,param_3,6,param_4,param_5);
  return;
}



/* Entry: 106c3e53c; end: 106c3e54b; -[SCNotificationRegisterTokenClient _registerToken:tokenType:encryptionKey:onComplete:] */

void FUN_106c3e53c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerToken_tokenType_encrypt_112580128);
  return;
}



/* Entry: 106c3e54c; end: 106c3e8eb; -[SCNotificationRegisterTokenClient _registerToken:tokenType:encryptionKey:uploadDeviceId:enableBundleIdLogging:onComplete:] */

void FUN_106c3e54c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,int param_6,int param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d1878;
  _objc_opt_new();
  func_0x00010c216c80();
  func_0x00010c216b20(puVar1);
  uVar2 = param_1;
  func_0x00010be18ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1880;
  _objc_alloc_init();
  uVar4 = param_1;
  func_0x00010be23860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar3);
  _objc_release(uVar4);
  func_0x00010c18cf20(puVar3);
  func_0x00010c18cf80(puVar3);
  func_0x00010be22100(param_1);
  func_0x00010c1e9ba0(puVar3);
  func_0x00010c168ae0(puVar3);
  if (param_7 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf24a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c174320(puVar3);
    _objc_release(puVar6);
  }
  lVar7 = param_5;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    puVar5 = puVar3;
    func_0x00010bf93d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195d20();
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf93d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195d40();
    _objc_release(puVar5);
  }
  if (param_6 != 0) {
    func_0x00010c18c9a0(puVar3);
  }
  puVar5 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000106c4013c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c08fa60();
  if (puVar8 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  _objc_initWeak(auStack_80,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106c3e8ec;
  puStack_a0 = &UNK_11096abd0;
  puVar10 = auStack_80;
  _objc_copyWeak(auStack_88);
  _objc_retain(uVar2);
  uStack_98 = uVar2;
  _objc_retain(param_8);
  ppuVar9 = &puStack_b8;
  uStack_90 = param_8;
  _objc_retainBlock(ppuVar9);
  puVar8 = puVar3;
  func_0x00010be89e40(param_1);
  _objc_release(ppuVar9);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(puVar10);
  lVar7 = param_3 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126d1888;
  if (lVar7 != 0) {
    lVar11 = *(long *)(param_3 + 0x28);
    if ((puVar10 == (undefined1 *)0x0) || (puVar8 != (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252ee0(puVar10);
      func_0x00010bfbed80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar11 + 0x10))(lVar11,puVar1);
      _objc_release(puVar1);
    }
    else {
      puVar3 = PTR_PTR_1126d1888;
      func_0x00010c261740(PTR_PTR_1126d1888);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar11 + 0x10))(lVar11,puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106c3e8ec; end: 106c3e9f3;  */

void FUN_106c3e8ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126d1888;
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if ((param_2 == 0) || (param_3 != 0)) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252ee0(param_2);
      func_0x00010bfbed80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
      _objc_release(puVar3);
    }
    else {
      puVar2 = PTR_PTR_1126d1888;
      func_0x00010c261740(PTR_PTR_1126d1888);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c3e9f4; end: 106c3eb23; -[SCNotificationRegisterTokenClient _registerTokenRemotely:callOptionsBuilder:handler:] */

void FUN_106c3e9f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c3eb24; end: 106c3eb83;  */

void FUN_106c3eb24(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126320();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c3eb84; end: 106c3ecb3; -[SCNotificationRegisterTokenClient _updateDeviceTokensRemotely:callOptionsBuilder:handler:] */

void FUN_106c3eb84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c3ecb4; end: 106c3ed13;  */

void FUN_106c3ecb4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2851a0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c3ed14; end: 106c3eddb; -[SCNotificationRegisterTokenClient _getUUID:] */

undefined ** FUN_106c3ed14(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR_PTR_1126be8d8;
  _objc_alloc_init(PTR_PTR_1126be8d8);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x00010c057ea0();
  func_0x00010bfcb980();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_48,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c1a99c0(ppuVar1);
  iVar4 = (int)puVar5;
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  if (iVar4 - 1U < 6) {
    return (undefined **)(&PTR_PTR_11096ac00)[iVar4 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e7a7f8;
}



/* Entry: 106c3eddc; end: 106c3ee03; -[SCNotificationRegisterTokenClient _formatTokenTypeToString:] */

undefined ** FUN_106c3eddc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_11096ac00)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e7a7f8;
}



/* Entry: 106c3ee04; end: 106c3eea3; -[SCNotificationRegisterTokenClient _getReleaseType:] */

undefined4 FUN_106c3ee04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e7a818);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dced78);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e7a838);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e7a858);
        uVar2 = 3;
        if ((int)uVar1 == 0) {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 6;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106c3eea4; end: 106c3eef7; -[SCNotificationRegisterTokenClient .cxx_destruct] */

void FUN_106c3eea4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c3eef8; end: 106c3f107; -[SCNotificationUpdateSettingClient initWithEndpointAddress:unifiedGRPCFactory:userId:] */

undefined8 *
FUN_106c3eef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f5e38;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    _objc_release(puVar4);
    _objc_retain(puVar3);
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_retain();
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c3f108; end: 106c3f14f;  */

void FUN_106c3f108(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c3f150; end: 106c3f21b; -[SCNotificationUpdateSettingClient initUserId:pndrService:queuePerformer:] */

undefined1 *
FUN_106c3f150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5e38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c3f21c; end: 106c3f30b; -[SCNotificationUpdateSettingClient _createServiceWithEndpointAddress:queue:] */

void FUN_106c3f21c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_4);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,4000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf56360(uVar2,param_2,&PTR____CFConstantStringClassReference_110e7a758,puVar1,param_4)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126d1870;
  _objc_alloc(PTR_PTR_1126d1870);
  func_0x00010c058f80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c3f30c; end: 106c3f593; -[SCNotificationUpdateSettingClient updateBitmojiSetting:onComplete:] */

void FUN_106c3f30c(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar7 = &puStack_f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar8 = param_1;
  func_0x00010be23860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d1890;
  _objc_alloc_init();
  func_0x00010c1705e0();
  func_0x00010c21e620(puVar1);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000106c4013c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c3f594;
  puStack_90 = &UNK_11096ac30;
  _objc_retain(param_4);
  ppuVar5 = &puStack_a8;
  lStack_88 = param_4;
  uStack_80 = param_3;
  _objc_retainBlock();
  _objc_initWeak(auStack_b0,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106c3f610;
  puStack_d8 = &UNK_110857fd0;
  puVar6 = auStack_b0;
  _objc_copyWeak(auStack_b8);
  _objc_retain(puVar1);
  puStack_d0 = puVar1;
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  _objc_retain(ppuVar5);
  ppuStack_c0 = ppuVar5;
  func_0x00010c0f7fc0(uVar9);
  _objc_release(ppuStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_d0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar5);
  _objc_release(lStack_88);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126d1888;
  lVar8 = *(long *)(param_4 + 0x20);
  if ((puVar6 == (undefined1 *)0x0) || (ppuVar7 != (undefined **)0x0)) {
    func_0x00010c252ee0(puVar6);
    func_0x00010bfbed80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261740(PTR_PTR_1126d1888);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar8 + 0x10))(lVar8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3f594; end: 106c3f647;  */

void FUN_106c3f594(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d1888;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010c252ee0(param_2);
    func_0x00010bfbed80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261740(PTR_PTR_1126d1888);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3f648; end: 106c3f8cf; -[SCNotificationUpdateSettingClient updateEnabledSetting:onComplete:] */

void FUN_106c3f648(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar7 = &puStack_f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar8 = param_1;
  func_0x00010be23860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d1890;
  _objc_alloc_init();
  func_0x00010c195460();
  func_0x00010c21e620(puVar1);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000106c4013c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c3f8d0;
  puStack_90 = &UNK_11096ac30;
  _objc_retain(param_4);
  ppuVar5 = &puStack_a8;
  lStack_88 = param_4;
  uStack_80 = param_3;
  _objc_retainBlock();
  _objc_initWeak(auStack_b0,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106c3f94c;
  puStack_d8 = &UNK_110857fd0;
  puVar6 = auStack_b0;
  _objc_copyWeak(auStack_b8);
  _objc_retain(puVar1);
  puStack_d0 = puVar1;
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  _objc_retain(ppuVar5);
  ppuStack_c0 = ppuVar5;
  func_0x00010c0f7fc0(uVar9);
  _objc_release(ppuStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_d0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar5);
  _objc_release(lStack_88);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126d1888;
  lVar8 = *(long *)(param_4 + 0x20);
  if ((puVar6 == (undefined1 *)0x0) || (ppuVar7 != (undefined **)0x0)) {
    func_0x00010c252ee0(puVar6);
    func_0x00010bfbed80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261740(PTR_PTR_1126d1888);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar8 + 0x10))(lVar8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3f8d0; end: 106c3f983;  */

void FUN_106c3f8d0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d1888;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010c252ee0(param_2);
    func_0x00010bfbed80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261740(PTR_PTR_1126d1888);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3f984; end: 106c3fc0b; -[SCNotificationUpdateSettingClient updatePrivacySetting:onComplete:] */

void FUN_106c3f984(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar7 = &puStack_f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar8 = param_1;
  func_0x00010be23860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d1890;
  _objc_alloc_init();
  func_0x00010c1e3400();
  func_0x00010c21e620(puVar1);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000106c4013c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c3fc0c;
  puStack_90 = &UNK_11096ac60;
  _objc_retain(param_4);
  ppuVar5 = &puStack_a8;
  lStack_88 = param_4;
  uStack_80 = param_3;
  _objc_retainBlock();
  _objc_initWeak(auStack_b0,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106c3fc88;
  puStack_d8 = &UNK_110857fd0;
  puVar6 = auStack_b0;
  _objc_copyWeak(auStack_b8);
  _objc_retain(puVar1);
  puStack_d0 = puVar1;
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  _objc_retain(ppuVar5);
  ppuStack_c0 = ppuVar5;
  func_0x00010c0f7fc0(uVar9);
  _objc_release(ppuStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_d0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar5);
  _objc_release(lStack_88);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126d1888;
  lVar8 = *(long *)(param_4 + 0x20);
  if ((puVar6 == (undefined1 *)0x0) || (ppuVar7 != (undefined **)0x0)) {
    func_0x00010c252ee0(puVar6);
    func_0x00010bfbed80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261740(PTR_PTR_1126d1888);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar8 + 0x10))(lVar8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3fc0c; end: 106c3fcbf;  */

void FUN_106c3fc0c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d1888;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010c252ee0(param_2);
    func_0x00010bfbed80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c261740(PTR_PTR_1126d1888);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c3fcc0; end: 106c3fd47; -[SCNotificationUpdateSettingClient _updateSettingRemotely:callOptionsBuilder:handler:] */

void FUN_106c3fcc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287fe0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c3fd48; end: 106c3fe0f; -[SCNotificationUpdateSettingClient _getUUID:] */

void FUN_106c3fd48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126be8d8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc();
  func_0x00010c057ea0();
  func_0x00010bfcb980();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 106c3fe10; end: 106c3fe57; -[SCNotificationUpdateSettingClient .cxx_destruct] */

void FUN_106c3fe10(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c3fe58; end: 106c3fec7; +[SCPushNotificationNetworkingUpdateResult generalErrorWithMessage:statusCode:] */

void FUN_106c3fe58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1888;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c3fec8; end: 106c3ff0f; +[SCPushNotificationNetworkingUpdateResult success] */

void FUN_106c3fec8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1888;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c3ff10; end: 106c3ff33; -[SCPushNotificationNetworkingUpdateResult copyWithZone:] */

undefined8 FUN_106c3ff10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c3ff34; end: 106c3ffab; -[SCPushNotificationNetworkingUpdateResult hash] */

void FUN_106c3ff34(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f5e40;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c3ffac; end: 106c3ffef; -[SCPushNotificationNetworkingUpdateResult internalInit] */

void FUN_106c3ffac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5e40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c3fff0; end: 106c4009f; -[SCPushNotificationNetworkingUpdateResult isEqual:] */

long FUN_106c3fff0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c40084;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_106c40084;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106c40084;
    }
  }
  lVar3 = 1;
LAB_106c40084:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c400a0; end: 106c40123; -[SCPushNotificationNetworkingUpdateResult matchSuccess:generalError:] */

void FUN_106c400a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c40124; end: 106c40157; -[SCPushNotificationNetworkingUpdateResult .cxx_destruct] */

void FUN_106c40124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c40158; end: 106c401cb; -[UNISCPushNotificationPushNotificationService initWithUnifiedGrpcService:] */

undefined1 * FUN_106c40158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5e48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c401cc; end: 106c402af; -[UNISCPushNotificationPushNotificationService sendPushNotificationToUserWithRequest:callOptionsBuilder:handler:] */

void FUN_106c401cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1898;
  _objc_opt_class(PTR_PTR_1126d1898);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a8d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c402b0; end: 106c40393; -[UNISCPushNotificationPushNotificationService sendPushWithRequest:callOptionsBuilder:handler:] */

void FUN_106c402b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18a0;
  _objc_opt_class(PTR_PTR_1126d18a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a8f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40394; end: 106c40477; -[UNISCPushNotificationPushNotificationService sendPushAsyncWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18a8;
  _objc_opt_class(PTR_PTR_1126d18a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a918,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40478; end: 106c4055b; -[UNISCPushNotificationPushNotificationService ackNotificationWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18b0;
  _objc_opt_class(PTR_PTR_1126d18b0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd1b38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c4055c; end: 106c4063f; -[UNISCPushNotificationPushNotificationService addPendingResendsWithRequest:callOptionsBuilder:handler:] */

void FUN_106c4055c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18b8;
  _objc_opt_class(PTR_PTR_1126d18b8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a938,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40640; end: 106c40723; -[UNISCPushNotificationPushNotificationService sendPushToDeviceWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18c0;
  _objc_opt_class(PTR_PTR_1126d18c0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a958,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40724; end: 106c40807; -[UNISCPushNotificationPushNotificationService scheduleNotificationWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18c8;
  _objc_opt_class(PTR_PTR_1126d18c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a978,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40808; end: 106c408eb; -[UNISCPushNotificationPushNotificationService cancelNotificationWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18d0;
  _objc_opt_class(PTR_PTR_1126d18d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a998,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c408ec; end: 106c409cf; -[UNISCPushNotificationPushNotificationService rescheduleNotificationWithRequest:callOptionsBuilder:handler:] */

void FUN_106c408ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18d8;
  _objc_opt_class(PTR_PTR_1126d18d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a9b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c409d0; end: 106c40ab3; -[UNISCPushNotificationPushNotificationService getUndisplayedNotificationsWithRequest:callOptionsBuilder:handler:] */

void FUN_106c409d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18e0;
  _objc_opt_class(PTR_PTR_1126d18e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a9d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40ab4; end: 106c40abf; -[UNISCPushNotificationPushNotificationService .cxx_destruct] */

void FUN_106c40ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c40ac0; end: 106c40b33; -[UNISCNotificationPushNotificationDataRegistryService initWithUnifiedGrpcService:] */

undefined1 * FUN_106c40ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5e50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c40b34; end: 106c40c17; -[UNISCNotificationPushNotificationDataRegistryService updateNotificationSettingWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40b34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18e8;
  _objc_opt_class(PTR_PTR_1126d18e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7a9f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40c18; end: 106c40cfb; -[UNISCNotificationPushNotificationDataRegistryService updateDeviceTokenWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18f0;
  _objc_opt_class(PTR_PTR_1126d18f0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aa18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40cfc; end: 106c40ddf; -[UNISCNotificationPushNotificationDataRegistryService clearDeviceTokenWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d18f8;
  _objc_opt_class(PTR_PTR_1126d18f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aa38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40de0; end: 106c40ec3; -[UNISCNotificationPushNotificationDataRegistryService getPushNotificationDataWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40de0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1900;
  _objc_opt_class(PTR_PTR_1126d1900);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aa58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40ec4; end: 106c40fa7; -[UNISCNotificationPushNotificationDataRegistryService getNotificationSettingWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1908;
  _objc_opt_class(PTR_PTR_1126d1908);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aa78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c40fa8; end: 106c4108b; -[UNISCNotificationPushNotificationDataRegistryService getTokenStateWithRequest:callOptionsBuilder:handler:] */

void FUN_106c40fa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1910;
  _objc_opt_class(PTR_PTR_1126d1910);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aa98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c4108c; end: 106c4116f; -[UNISCNotificationPushNotificationDataRegistryService deleteUserWithRequest:callOptionsBuilder:handler:] */

void FUN_106c4108c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1918;
  _objc_opt_class(PTR_PTR_1126d1918);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aab8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c41170; end: 106c41253; -[UNISCNotificationPushNotificationDataRegistryService registerDeviceWithRequest:callOptionsBuilder:handler:] */

void FUN_106c41170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1920;
  _objc_opt_class(PTR_PTR_1126d1920);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aad8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c41254; end: 106c41337; -[UNISCNotificationPushNotificationDataRegistryService getSessionDataWithRequest:callOptionsBuilder:handler:] */

void FUN_106c41254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1928;
  _objc_opt_class(PTR_PTR_1126d1928);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7aaf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c41338; end: 106c4141b; -[UNISCNotificationPushNotificationDataRegistryService getUserDeviceSettingsWithRequest:callOptionsBuilder:handler:] */

void FUN_106c41338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1930;
  _objc_opt_class(PTR_PTR_1126d1930);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7ab18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c4141c; end: 106c414ff; -[UNISCNotificationPushNotificationDataRegistryService updateUserDeviceSettingsWithRequest:callOptionsBuilder:handler:] */

void FUN_106c4141c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1938;
  _objc_opt_class(PTR_PTR_1126d1938);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7ab38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c41500; end: 106c415e3; -[UNISCNotificationPushNotificationDataRegistryService deleteUserDeviceSettingsWithRequest:callOptionsBuilder:handler:] */

void FUN_106c41500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d1940;
  _objc_opt_class(PTR_PTR_1126d1940);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7ab58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c415e4; end: 106c415ef; -[UNISCNotificationPushNotificationDataRegistryService .cxx_destruct] */

void FUN_106c415e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c415f0; end: 106c41663; -[SCPlusMerlinInitJobProcessor initWithMerlinServices:] */

undefined1 * FUN_106c415f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5e58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c41664; end: 106c41747; -[SCPlusMerlinInitJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106c41664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c064c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c064940();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106c41748;
    puStack_40 = &UNK_110843510;
    _objc_retain(in_x5);
    lStack_38 = in_x5;
    func_0x00010c297260(uVar3,param_2,&puStack_58,0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106c41748; end: 106c41763;  */

void FUN_106c41748(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c41758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106c41760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return;
}



/* Entry: 106c41764; end: 106c4176f; -[SCPlusMerlinInitJobProcessor .cxx_destruct] */

void FUN_106c41764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c41770; end: 106c4194b; -[SCPlusMerlinJobProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c41770(long param_1)

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
  uVar7 = *(undefined8 *)(param_1 + _DAT_11275b380);
  *(undefined **)(param_1 + _DAT_11275b380) = puVar1;
  _objc_release(uVar7);
  _objc_initWeak(auStack_78,param_1);
  param_1 = param_1 + _DAT_11275b384;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1180();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c4194c;
  puStack_88 = &UNK_11096ac98;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar4 = lVar3;
  func_0x00010c2656e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
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



/* Entry: 106c4194c; end: 106c41a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c4194c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)(param_1 + _DAT_11275b388);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0cae80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c41a20; end: 106c41a4b;  */

void FUN_106c41a20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5e220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c41a4c; end: 106c41aa3; -[SCPlusMerlinJobProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c41a4c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11275b380));
  puStack_28 = PTR_PTR_1126f5e60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c41aa4; end: 106c41c6b; -[SCPlusMerlinJobProcessorEntryPoint _maybeScheduleInitJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c41aa4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + _DAT_11275b38c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c064c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c082580();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126b7238;
    _objc_opt_new(PTR_PTR_1126b7238);
    func_0x00010c1eeea0();
    puVar6 = PTR_PTR_1126b7240;
    _objc_opt_new(PTR_PTR_1126b7240);
    puVar7 = puVar6;
    func_0x00010bf06200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b7228;
    _objc_opt_new(PTR_PTR_1126b7228);
    func_0x00010c1b6840();
    func_0x00010c1b67e0(puVar7,param_2,puVar5);
    func_0x00010c1b6740(puVar7,param_2,1);
    func_0x00010c1b66e0(puVar7,param_2,puVar6);
    puVar8 = PTR_PTR_1126b7230;
    _objc_opt_new(PTR_PTR_1126b7230);
    func_0x00010c1edbc0();
    func_0x00010c1ed860(puVar7,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    param_1 = param_1 + _DAT_11275b390;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c085740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f200();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 106c41c6c; end: 106c41cd7; -[SCPlusMerlinJobProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c41c6c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275b384);
  _objc_destroyWeak(param_1 + _DAT_11275b38c);
  _objc_destroyWeak(param_1 + _DAT_11275b388);
  _objc_destroyWeak(param_1 + _DAT_11275b390);
  _objc_destroyWeak(param_1 + _DAT_11275b394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b380,0);
  return;
}



/* Entry: 106c41cd8; end: 106c41d7b; -[SCPlusMerlinRepinJobProcessor initWithPlusServices:merlinServices:] */

undefined1 *
FUN_106c41cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5e68;
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



/* Entry: 106c41d7c; end: 106c41f67; -[SCPlusMerlinRepinJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c41d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c080120();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c064c20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07a0a0();
      _objc_release(uVar2);
      _objc_release(uVar4);
      if ((int)uVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c064c20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c1dbc00();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_6);
        func_0x00010c297260(uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(param_6);
        goto LAB_106c41f24;
      }
    }
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
LAB_106c41f24:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}


