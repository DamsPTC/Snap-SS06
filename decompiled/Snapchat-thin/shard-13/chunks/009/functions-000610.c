/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aedee34; end: 10aedee87;  */

undefined8 FUN_10aedee34(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bfceb20(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10aedee88; end: 10aedee93; +[SCLensNamespaceGroupDataModel table] */

undefined * FUN_10aedee88(void)

{
  return &UNK_10f6d5c7c;
}



/* Entry: 10aedee94; end: 10aedf113; +[SCLensNamespaceGroupDataModel immutableObjectParse:bufferSize:] */

void FUN_10aedee94(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126de850;
  _objc_alloc(PTR_PTR_1126de850);
  lVar6 = (long)*piVar1;
  puVar7 = (ushort *)((long)piVar1 - lVar6);
  uVar5 = *puVar7;
  if (uVar5 < 5) {
    uVar10 = 0;
LAB_10aedefc0:
    puVar9 = (undefined *)0x0;
    uVar13 = 0;
  }
  else {
    if ((ulong)puVar7[2] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[2]);
    }
    if (uVar5 < 7) goto LAB_10aedefc0;
    if ((ulong)puVar7[3] == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar12 + (ulong)*puVar12 + 4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 != (undefined *)0x0) {
            func_0x00010befa120(puVar11,param_2,puVar9);
          }
          _objc_release(puVar9);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar2 + 1 + *puVar2);
      }
      puVar9 = puVar11;
      func_0x00010bf51e00(puVar11);
      _objc_release(puVar11);
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    uVar14 = 0;
    uVar13 = 0;
    if (8 < uVar5) {
      uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
      if (uVar8 != 0) {
        uVar14 = *(undefined8 *)((long)piVar1 + uVar8);
      }
      uVar13 = uVar14;
      if (10 < uVar5) {
        uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 10);
        if (uVar8 == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar12 = (uint *)((long)piVar1 + uVar8);
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar12 + (ulong)*puVar12 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = -(long)*piVar1;
          uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        if (uVar5 < 0xd) {
          bVar3 = false;
          uVar14 = 0;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc);
          if (uVar8 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = *(char *)((long)piVar1 + uVar8) != '\0';
          }
          uVar14 = 0;
          if ((0xe < uVar5) &&
             (uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xe), uVar14 = 0, uVar8 != 0)) {
            uVar14 = *(undefined8 *)((long)piVar1 + uVar8);
          }
        }
        goto LAB_10aedefd4;
      }
    }
  }
  puVar11 = (undefined *)0x0;
  bVar3 = false;
  uVar14 = 0;
LAB_10aedefd4:
  func_0x00010c018f00(uVar13,uVar14,puVar4,param_2,uVar10,puVar9,puVar11,bVar3);
  _objc_release(puVar11);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aedf114; end: 10aedf137; +[SCLensNamespaceGroupDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_10aedf114(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10aedf130;
  auVar1._0_8_ = 0x10aedf128;
  return auVar1;
}



/* Entry: 10aedf138; end: 10aedf233;  */

undefined1 *
FUN_10aedf138(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_58 = PTR_PTR_1127019b8;
    lStack_60 = param_3;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      *(undefined4 *)((long)plVar1 + 0x18) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_8;
      *(undefined8 *)((long)plVar1 + 0x38) = param_2;
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar3;
}



/* Entry: 10aedf234; end: 10aedf5bb;  */

void FUN_10aedf234(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf636c0();
      _objc_release(puVar1);
      func_0x000107c310d8(puVar7,&UNK_10f6d5c9c);
      if (puVar7 != (undefined *)0x0) {
        puVar1 = param_2;
        func_0x00010bfceb20(param_2);
        _sqlite3_bind_int64(puVar7,1,(long)(int)puVar1);
        puVar1 = puVar7;
        _sqlite3_step();
        if ((int)puVar1 == 100) {
          puVar1 = puVar7;
          _sqlite3_column_int64(puVar7,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126de850);
          _sqlite3_column_blob(puVar7,1);
          _sqlite3_column_bytes(puVar7,1);
          puVar3 = puVar2;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar2);
          _sqlite3_reset(puVar7);
          if (puVar3 == (undefined *)0x0) goto LAB_10aedf514;
          puVar7 = PTR_PTR_1126de8d8;
          _objc_alloc(PTR_PTR_1126de8d8);
          puVar2 = puVar3;
          func_0x00010bfceb20(puVar3);
          puVar4 = puVar3;
          func_0x00010c0d5400(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08a700(puVar3);
          puVar5 = puVar3;
          uVar8 = param_1;
          func_0x00010c09e1e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010bf9adc0(puVar3);
          func_0x00010bfa4640(puVar3);
          FUN_10aedf138(param_1,uVar8,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
          param_2 = puVar3;
          goto LAB_10aedf364;
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de850);
      puVar2 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar7);
      if (puVar2 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126de8d8;
        _objc_alloc(PTR_PTR_1126de8d8);
        puVar3 = puVar2;
        func_0x00010bfceb20(puVar2);
        puVar4 = puVar2;
        func_0x00010c0d5400(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08a700(puVar2);
        puVar5 = puVar2;
        uVar8 = param_1;
        func_0x00010c09e1e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf9adc0(puVar2);
        func_0x00010bfa4640(puVar2);
        FUN_10aedf138(param_1,uVar8,puVar7,puVar1,puVar3,puVar4,puVar5,puVar6);
        param_2 = puVar2;
LAB_10aedf364:
        _objc_release(puVar5);
        _objc_release(puVar4);
        goto LAB_10aedf51c;
      }
LAB_10aedf514:
      param_2 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10aedf51c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aedf5bc; end: 10aedf62f;  */

void FUN_10aedf5bc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10aedf234();
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



/* Entry: 10aedf630; end: 10aedf8bf;  */

void FUN_10aedf630(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126de8d8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_10aedf234();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar6 = PTR_PTR_1126de8d8;
    _objc_retain(param_2);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126de8d8;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bfceb20(param_2);
      puVar3 = param_2;
      func_0x00010c0d5400(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08a700(param_2);
      puVar4 = param_2;
      uVar7 = param_1;
      func_0x00010c09e1e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010bf9adc0(param_2);
      func_0x00010bfa4640(param_2);
      FUN_10aedf138(param_1,uVar7,puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
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
    func_0x00010bfceb20();
    *(int *)(puVar1 + 0x18) = (int)puVar6;
    puVar6 = param_2;
    func_0x00010c0d5400(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    func_0x00010c08a700(param_2);
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    puVar6 = param_2;
    func_0x00010c09e1e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010bf9adc0();
    puVar1[0x14] = (char)puVar6;
    func_0x00010bfa4640(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
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



/* Entry: 10aedf8c0; end: 10aedf933;  */

void FUN_10aedf8c0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126de850;
    _objc_alloc(PTR_PTR_1126de850);
    func_0x00010c018f00(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aedf934; end: 10aedf963; -[SCLensNamespaceGroupDataModelChangeRequest .cxx_destruct] */

void FUN_10aedf934(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10aedf964; end: 10aedf96f; -[SCLensNamespaceGroupDataModelChangeRequest table] */

undefined * FUN_10aedf964(void)

{
  return &UNK_10f6d5c7c;
}



/* Entry: 10aedf970; end: 10aedf9b7; -[SCLensNamespaceGroupDataModelChangeRequest createTableWithSQLite:] */

void FUN_10aedf970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10e534572,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10aedf9b8; end: 10aedfd4f; -[SCLensNamespaceGroupDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10aedf9b8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_10aedf8c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_10aedfd50(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f6d5d25);
    if (lVar5 == 0) goto LAB_10aedfcec;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (long)*(int *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,lVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_10aedfcec;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126de850);
    func_0x00010c21c9a0(puVar8);
LAB_10aedfcd4:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f6d5cea);
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
            _objc_opt_class(PTR_PTR_1126de850);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10aedfcf8;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_10aedfcf8;
    }
    FUN_10aedf8c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_10aedfd50(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f6d5d6e);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = (long)*(int *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,lVar5);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126de850);
        func_0x00010c21c9a0(puVar8);
        goto LAB_10aedfcd4;
      }
    }
LAB_10aedfcec:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_10aedfcf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10aedfd50; end: 10aee0057;  */

ulong FUN_10aedfd50(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  int aiStack_144 [3];
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar12 = param_2;
  func_0x00010c0d5400();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_160 = 0;
  uVar15 = 0;
  lStack_138 = 0;
  aiStack_144[1] = 0;
  aiStack_144[2] = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(uVar12);
  uVar4 = uVar12;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar13 = *plStack_130;
    do {
      uVar14 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(uVar12);
        }
        uVar5 = param_1;
        FUN_10aee0058(param_1,*(undefined8 *)(lStack_138 + uVar14 * 8));
        aiStack_144[0] = (int)uVar5;
        if (aiStack_144[0] != 0) {
          func_0x000107c27e20(&lStack_160,aiStack_144);
        }
        uVar14 = uVar14 + 1;
      } while (uVar4 != uVar14);
      uVar4 = uVar12;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar12);
  uVar12 = param_2;
  func_0x00010bfceb20();
  lVar13 = 0x1130c2400;
  if (lStack_158 - lStack_160 != 0) {
    lVar13 = lStack_160;
  }
  uVar4 = param_1;
  func_0x000107c27e28(param_1,lVar13,lStack_158 - lStack_160 >> 2);
  func_0x00010c08a700(param_2);
  uVar14 = param_2;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aee0058(param_1,uVar14);
  uVar6 = param_2;
  func_0x00010bf9adc0(param_2);
  func_0x00010bfa4640(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db8(param_1,0xe);
  func_0x000107c27db8(uVar15,0,param_1,8);
  func_0x000107c27ddc(param_1,10,uVar5 & 0xffffffff);
  func_0x000107c27e24(param_1,6,uVar4 & 0xffffffff);
  func_0x000107c27e08(param_1,4,uVar12,0);
  func_0x000107c27dec(param_1,0xc,uVar6,0);
  pcVar11 = (char *)(ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x000107c27dc0(param_1);
  _objc_release(uVar14);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  uVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar14);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  _objc_release(uVar14);
  _objc_release(uVar14);
  _objc_release(param_2);
  __Unwind_Resume(uVar12);
  _objc_retain(pcVar11);
  if (pcVar11 == (char *)0x0) {
    uVar12 = 0;
    goto LAB_10aee0138;
  }
  pcVar7 = pcVar11;
  _CFStringGetCStringPtr(pcVar11,0x8000100);
  if (pcVar7 != (char *)0x0) {
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    func_0x000107c27df0(uVar12,pcVar7,pcVar8);
    goto LAB_10aee0138;
  }
  pcVar7 = pcVar11;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar7 == (char *)0x0) {
    pcVar7 = pcVar11;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar7 != (char *)0x0) goto LAB_10aee00f8;
    uVar12 = 0;
  }
  else {
LAB_10aee00f8:
    pcVar9 = pcVar7;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar10 = pcVar7;
    func_0x00010c08fa60(pcVar7);
    pcVar8 = "";
    if (pcVar9 != (char *)0x0) {
      pcVar8 = pcVar9;
    }
    func_0x000107c27df0(uVar12,pcVar8,pcVar10);
  }
  _objc_release(pcVar7);
LAB_10aee0138:
  _objc_release(pcVar11);
  return uVar12;
}



/* Entry: 10aee0058; end: 10aee0187;  */

undefined8 FUN_10aee0058(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10aee0138;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10aee0138;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10aee00f8;
    param_1 = 0;
  }
  else {
LAB_10aee00f8:
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
LAB_10aee0138:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aee0188; end: 10aee01b3; +[SCGrapheneLensdatastoresMetric bgPrefetchStep] */

void FUN_10aee0188(void)

{
  _objc_alloc(PTR_PTR_1126de4f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee01b4; end: 10aee01df; +[SCGrapheneLensdatastoresMetric bgPrefetchLensCount] */

void FUN_10aee01b4(void)

{
  _objc_alloc(PTR_PTR_1126de4f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee01e0; end: 10aee020b; +[SCGrapheneLensdatastoresMetric bgPrefetchEnd] */

void FUN_10aee01e0(void)

{
  _objc_alloc(PTR_PTR_1126de4f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee020c; end: 10aee0237; +[SCGrapheneLensdatastoresMetric bgPrefetchMetadataCb] */

void FUN_10aee020c(void)

{
  _objc_alloc(PTR_PTR_1126de4f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aee0238; end: 10aee02d7; -[SCGrapheneLensdatastoresMetric description] */

void FUN_10aee0238(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2f9d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f2f9d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1127019c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10aee02d8; end: 10aee0437; -[SCGrapheneRegistry lensdatastoresGraphene] */

void FUN_10aee02d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10aee0360;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137edc48 != -1) {
    func_0x000107c27d9c(0x1137edc48,&puStack_48);
  }
  uVar1 = uRam00000001137edc40;
  _objc_retain(uRam00000001137edc40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aee0438; end: 10aee0443; -[SCLensMetadataMappingServices .cxx_destruct] */

void FUN_10aee0438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee0444; end: 10aee052b; -[SCLPLensSnapchatFieldDescriptor initWithLensType:checksum:defaultExpiration:namespaceId:] */

undefined1 *
FUN_10aee0444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127019d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee052c; end: 10aee054f; -[SCLPLensSnapchatFieldDescriptor copyWithZone:] */

undefined8 FUN_10aee052c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee0550; end: 10aee05db; -[SCLPLensSnapchatFieldDescriptor hash] */

long * FUN_10aee0550(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10aee0684:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10aee0690;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && (plVar3[1] == param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[4];
          if (plVar6 != (long *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10aee0690;
          }
          goto LAB_10aee0684;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10aee0690:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10aee05dc; end: 10aee06ab; -[SCLPLensSnapchatFieldDescriptor isEqual:] */

long FUN_10aee05dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee0684:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee0690;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10aee0690;
          }
          goto LAB_10aee0684;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aee0690:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee06ac; end: 10aee06b3; -[SCLPLensSnapchatFieldDescriptor lensType] */

undefined8 FUN_10aee06ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee06b4; end: 10aee06bb; -[SCLPLensSnapchatFieldDescriptor checksum] */

undefined8 FUN_10aee06b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee06bc; end: 10aee06c3; -[SCLPLensSnapchatFieldDescriptor defaultExpiration] */

undefined8 FUN_10aee06bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee06c4; end: 10aee06cb; -[SCLPLensSnapchatFieldDescriptor namespaceId] */

undefined8 FUN_10aee06c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee06cc; end: 10aee0707; -[SCLPLensSnapchatFieldDescriptor .cxx_destruct] */

void FUN_10aee06cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aee0708; end: 10aee07cf; -[SCLensCarouselPositionInfo initWithAbsoluteCarouselPosition:priority:isLeftCarousel:carouselGroup:globalScores:] */

undefined1 *
FUN_10aee0708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127019d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee07d0; end: 10aee07f3; -[SCLensCarouselPositionInfo copyWithZone:] */

undefined8 FUN_10aee07d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee07f4; end: 10aee087b; -[SCLensCarouselPositionInfo hash] */

undefined8 * FUN_10aee07f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aee092c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aee0938;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
        if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10aee0938;
        }
        goto LAB_10aee092c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aee0938:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aee087c; end: 10aee0953; -[SCLensCarouselPositionInfo isEqual:] */

long FUN_10aee087c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee092c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee0938;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10aee0938;
        }
        goto LAB_10aee092c;
      }
    }
    lVar3 = 0;
  }
LAB_10aee0938:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee0954; end: 10aee095b; -[SCLensCarouselPositionInfo absoluteCarouselPosition] */

undefined8 FUN_10aee0954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee095c; end: 10aee0963; -[SCLensCarouselPositionInfo priority] */

undefined8 FUN_10aee095c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee0964; end: 10aee096b; -[SCLensCarouselPositionInfo isLeftCarousel] */

undefined1 FUN_10aee0964(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee096c; end: 10aee0973; -[SCLensCarouselPositionInfo carouselGroup] */

undefined8 FUN_10aee096c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee0974; end: 10aee097b; -[SCLensCarouselPositionInfo globalScores] */

undefined8 FUN_10aee0974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aee097c; end: 10aee09ab; -[SCLensCarouselPositionInfo .cxx_destruct] */

void FUN_10aee097c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10aee09ac; end: 10aee0abf; -[SCLensMetadataTrackingInfo initWithTrackInfo:snapInfo:encGeoData:isRanked:targetingCampaignId:] */

undefined1 *
FUN_10aee09ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127019e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee0ac0; end: 10aee0ae3; -[SCLensMetadataTrackingInfo copyWithZone:] */

undefined8 FUN_10aee0ac0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee0ae4; end: 10aee0b73; -[SCLensMetadataTrackingInfo hash] */

undefined8 * FUN_10aee0ae4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aee0c34:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aee0c40;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10aee0c40;
            }
            goto LAB_10aee0c34;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aee0c40:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aee0b74; end: 10aee0c5b; -[SCLensMetadataTrackingInfo isEqual:] */

long FUN_10aee0b74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee0c34:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee0c40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10aee0c40;
            }
            goto LAB_10aee0c34;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aee0c40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee0c5c; end: 10aee0c63; -[SCLensMetadataTrackingInfo trackInfo] */

undefined8 FUN_10aee0c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee0c64; end: 10aee0c6b; -[SCLensMetadataTrackingInfo snapInfo] */

undefined8 FUN_10aee0c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee0c6c; end: 10aee0c73; -[SCLensMetadataTrackingInfo encGeoData] */

undefined8 FUN_10aee0c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee0c74; end: 10aee0c7b; -[SCLensMetadataTrackingInfo isRanked] */

undefined1 FUN_10aee0c74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee0c7c; end: 10aee0c83; -[SCLensMetadataTrackingInfo targetingCampaignId] */

undefined8 FUN_10aee0c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aee0c84; end: 10aee0ccb; -[SCLensMetadataTrackingInfo .cxx_destruct] */

void FUN_10aee0c84(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aee0ccc; end: 10aee0cd3; -[SCLensUnlockableMetadataServices lensUnlockableMetadataManager] */

undefined8 FUN_10aee0ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee0cd4; end: 10aee0cdf; -[SCLensUnlockableMetadataServices .cxx_destruct] */

void FUN_10aee0cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee0ce0; end: 10aee0d03; -[SCMixerInternalNamespaceData copyWithZone:] */

undefined8 FUN_10aee0ce0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee0d04; end: 10aee0dd7; -[SCMixerInternalNamespaceData hash] */

undefined8 * FUN_10aee0d04(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aee0f18:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aee0f24;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[8];
                    if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[9];
                      if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[10];
                        if (puVar6 != (undefined8 *)param_3[10]) {
                          func_0x00010c071ae0();
                          goto LAB_10aee0f24;
                        }
                        goto LAB_10aee0f18;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aee0f24:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aee0dd8; end: 10aee0f3f; -[SCMixerInternalNamespaceData isEqual:] */

long FUN_10aee0dd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee0f18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee0f24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if (lVar3 != *(long *)(param_3 + 0x50)) {
                          func_0x00010c071ae0();
                          goto LAB_10aee0f24;
                        }
                        goto LAB_10aee0f18;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aee0f24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee0f40; end: 10aee0fcf; -[SCMixerInternalNamespaceData .cxx_destruct] */

void FUN_10aee0f40(long param_1)

{
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



/* Entry: 10aee0fd0; end: 10aee1033; +[SCMixerInternalMetadataItem ctItemWithCtItem:] */

void FUN_10aee0fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de598;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee1034; end: 10aee1057; -[SCMixerInternalMetadataItem copyWithZone:] */

undefined8 FUN_10aee1034(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee1058; end: 10aee10cf; -[SCMixerInternalMetadataItem hash] */

undefined8 * FUN_10aee1058(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aee1160:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aee116c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aee116c;
        }
        goto LAB_10aee1160;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aee116c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aee10d0; end: 10aee1187; -[SCMixerInternalMetadataItem isEqual:] */

long FUN_10aee10d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee1160:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee116c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aee116c;
        }
        goto LAB_10aee1160;
      }
    }
    lVar3 = 0;
  }
LAB_10aee116c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee1188; end: 10aee11b7; -[SCMixerInternalMetadataItem .cxx_destruct] */

void FUN_10aee1188(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aee11b8; end: 10aee1263; -[SCMixerInternalCTMetadataItem initWithChecksum:item:] */

undefined1 *
FUN_10aee11b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701a00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee1264; end: 10aee1287; -[SCMixerInternalCTMetadataItem copyWithZone:] */

undefined8 FUN_10aee1264(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee1288; end: 10aee12fb; -[SCMixerInternalCTMetadataItem hash] */

undefined8 * FUN_10aee1288(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aee137c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aee1388;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10aee1388;
        }
        goto LAB_10aee137c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aee1388:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aee12fc; end: 10aee13a3; -[SCMixerInternalCTMetadataItem isEqual:] */

long FUN_10aee12fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee137c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee1388;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10aee1388;
        }
        goto LAB_10aee137c;
      }
    }
    lVar3 = 0;
  }
LAB_10aee1388:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee13a4; end: 10aee13ab; -[SCMixerInternalCTMetadataItem checksum] */

undefined8 FUN_10aee13a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee13ac; end: 10aee13b3; -[SCMixerInternalCTMetadataItem item] */

undefined8 FUN_10aee13ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee13b4; end: 10aee13e3; -[SCMixerInternalCTMetadataItem .cxx_destruct] */

void FUN_10aee13b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee13e4; end: 10aee13ef; -[SCLensMetadataFetchingServices .cxx_destruct] */

void FUN_10aee13e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee13f0; end: 10aee149b; -[SCLensFetchIdentifier initWithLensId:sponsoredAdId:] */

undefined1 *
FUN_10aee13f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701a10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee149c; end: 10aee14bf; -[SCLensFetchIdentifier copyWithZone:] */

undefined8 FUN_10aee149c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee14c0; end: 10aee1533; -[SCLensFetchIdentifier hash] */

undefined8 * FUN_10aee14c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aee15b4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aee15c0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10aee15c0;
        }
        goto LAB_10aee15b4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aee15c0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aee1534; end: 10aee15db; -[SCLensFetchIdentifier isEqual:] */

long FUN_10aee1534(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee15b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee15c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10aee15c0;
        }
        goto LAB_10aee15b4;
      }
    }
    lVar3 = 0;
  }
LAB_10aee15c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee15dc; end: 10aee15e3; -[SCLensFetchIdentifier lensId] */

undefined8 FUN_10aee15dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee15e4; end: 10aee15eb; -[SCLensFetchIdentifier sponsoredAdId] */

undefined8 FUN_10aee15e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee15ec; end: 10aee161b; -[SCLensFetchIdentifier .cxx_destruct] */

void FUN_10aee15ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee161c; end: 10aee1623; -[SCMixerNamespaceServices mixerNamespaceServiceProvider] */

undefined8 FUN_10aee161c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee1624; end: 10aee162f; -[SCMixerNamespaceServices .cxx_destruct] */

void FUN_10aee1624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee1630; end: 10aee1693; +[SCMixerMetadataItem ctItemWithCtItem:] */

void FUN_10aee1630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee1694; end: 10aee16b7; -[SCMixerMetadataItem copyWithZone:] */

undefined8 FUN_10aee1694(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee16b8; end: 10aee172f; -[SCMixerMetadataItem hash] */

undefined8 * FUN_10aee16b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aee17c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aee17cc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aee17cc;
        }
        goto LAB_10aee17c0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aee17cc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aee1730; end: 10aee17e7; -[SCMixerMetadataItem isEqual:] */

long FUN_10aee1730(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee17c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee17cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aee17cc;
        }
        goto LAB_10aee17c0;
      }
    }
    lVar3 = 0;
  }
LAB_10aee17cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee17e8; end: 10aee180b; -[SCMixerNamespaceData copyWithZone:] */

undefined8 FUN_10aee17e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee180c; end: 10aee18df; -[SCMixerNamespaceData hash] */

undefined8 * FUN_10aee180c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aee1a20:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aee1a2c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[8];
                    if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[9];
                      if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[10];
                        if (puVar6 != (undefined8 *)param_3[10]) {
                          func_0x00010c071ae0();
                          goto LAB_10aee1a2c;
                        }
                        goto LAB_10aee1a20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aee1a2c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aee18e0; end: 10aee1a47; -[SCMixerNamespaceData isEqual:] */

long FUN_10aee18e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee1a20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee1a2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if (lVar3 != *(long *)(param_3 + 0x50)) {
                          func_0x00010c071ae0();
                          goto LAB_10aee1a2c;
                        }
                        goto LAB_10aee1a20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aee1a2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee1a48; end: 10aee1b8f; -[SCMixerFeed initWithNamespaceId:rearNamespaceOverride:renderStrategy:displayName:iconURL:defaultNamespace:] */

undefined1 *
FUN_10aee1a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112701a30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aee1b90; end: 10aee1bb3; -[SCMixerFeed copyWithZone:] */

undefined8 FUN_10aee1b90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee1bb4; end: 10aee1c4f; -[SCMixerFeed hash] */

undefined8 * FUN_10aee1bb4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aee1d28:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aee1d34;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10aee1d34;
              }
              goto LAB_10aee1d28;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aee1d34:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aee1c50; end: 10aee1d4f; -[SCMixerFeed isEqual:] */

long FUN_10aee1c50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aee1d28:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aee1d34;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10aee1d34;
              }
              goto LAB_10aee1d28;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aee1d34:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aee1d50; end: 10aee1d57; -[SCMixerFeed namespaceId] */

undefined8 FUN_10aee1d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee1d58; end: 10aee1d5f; -[SCMixerFeed rearNamespaceOverride] */

undefined8 FUN_10aee1d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aee1d60; end: 10aee1d67; -[SCMixerFeed renderStrategy] */

undefined8 FUN_10aee1d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aee1d68; end: 10aee1d6f; -[SCMixerFeed displayName] */

undefined8 FUN_10aee1d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aee1d70; end: 10aee1d77; -[SCMixerFeed iconURL] */

undefined8 FUN_10aee1d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aee1d78; end: 10aee1d7f; -[SCMixerFeed defaultNamespace] */

undefined1 FUN_10aee1d78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aee1d80; end: 10aee1dd3; -[SCMixerFeed .cxx_destruct] */

void FUN_10aee1d80(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aee1dd4; end: 10aee1e67; -[SCMixerFeedRenderStrategy initWithSpans:orientation:contentType:itemsSpacingMultiplier:useItemsCardBackground:useItemsDivider:lensTileLayout:lensTileAspectRatio:] */

void FUN_10aee1dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112701a38;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
  }
  return;
}



/* Entry: 10aee1e68; end: 10aee1e8b; -[SCMixerFeedRenderStrategy copyWithZone:] */

undefined8 FUN_10aee1e68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aee1e8c; end: 10aee1f3b; -[SCMixerFeedRenderStrategy hash] */

undefined8 * FUN_10aee1e8c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_60;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_48 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x000107c3191c(&uStack_60,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) != 0) &&
          ((((*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10) &&
             (*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18))) &&
            (*(long *)((long)puVar1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           ((*(char *)((long)puVar1 + 8) == param_3[8] &&
            (*(char *)((long)puVar1 + 9) == param_3[9])))))) &&
         (*(long *)((long)puVar1 + 0x30) == *(long *)(param_3 + 0x30))) {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x28) - *(double *)(param_3 + 0x28));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)((long)puVar1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16)) {
          dVar5 = ABS(*(double *)((long)puVar1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          if (dVar5 <= 2.2250738585072014e-308) {
            dVar5 = 2.2250738585072014e-308;
          }
          puVar4 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar1 + 0x38) - *(double *)(param_3 + 0x38)) <
                          dVar5);
          goto LAB_10aee202c;
        }
      }
      puVar4 = (undefined1 *)0x0;
    }
  }
LAB_10aee202c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}


