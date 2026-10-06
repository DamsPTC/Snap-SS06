/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d447b8; end: 107d44b93;  */

void FUN_107d447b8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
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
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,&UNK_10f457234);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2923e0(param_1);
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
            _objc_opt_class(PTR_PTR_1126d79c0);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_107d44acc;
            puVar7 = PTR_PTR_1126d79a8;
            _objc_alloc(PTR_PTR_1126d79a8);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c08ede0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf0a2c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c0cd420(puVar3);
            func_0x00010c0cd400(puVar3);
            FUN_107d4469c(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_107d448d4;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d79c0);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d79a8;
        _objc_alloc(PTR_PTR_1126d79a8);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08ede0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf0a2c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c0cd420(puVar3);
        func_0x00010c0cd400(puVar3);
        FUN_107d4469c(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_107d448d4:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_107d44ad4;
      }
LAB_107d44acc:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_107d44ad4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107d44b94; end: 107d44c07;  */

void FUN_107d44b94(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107d447b8();
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



/* Entry: 107d44c08; end: 107d44c6f;  */

void FUN_107d44c08(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d79c0;
    _objc_alloc(PTR_PTR_1126d79c0);
    func_0x00010c05b5a0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d44c70; end: 107d44cab; -[SCArroyoMigrationOneOnOneMetadataChangeRequest .cxx_destruct] */

void FUN_107d44c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d44cac; end: 107d44cb7; -[SCArroyoMigrationOneOnOneMetadataChangeRequest table] */

undefined * FUN_107d44cac(void)

{
  return &UNK_10f4570f9;
}



/* Entry: 107d44cb8; end: 107d44dcb; -[SCArroyoMigrationOneOnOneMetadataChangeRequest createTableWithSQLite:] */

void FUN_107d44cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee6014,0x95,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee60a9,0x96,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dee613f,0xc6,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee6205,0x8d,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dee6292,0xb7,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 107d44dcc; end: 107d45577; -[SCArroyoMigrationOneOnOneMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107d44dcc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
  undefined4 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_107d44c08(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_107d45578(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf636c0();
    func_0x0001050da3a4();
    _objc_release(puVar12);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f457381);
    if (lVar8 == 0) goto LAB_107d454a0;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_107d454a0;
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      lVar8 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f457146);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
        _sqlite3_bind_null(lVar8,2);
      }
      else {
        puVar14 = (uint *)((long)piVar1 + uVar11);
        puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
        _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_107d454a0;
    }
    if (((uint)puVar9 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f4571c2);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar11 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(param_3,2,uVar10);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_107d454a0;
    }
    *(undefined8 *)(param_1 + 8) = uVar13;
    func_0x00010c1eeb60(puVar7);
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d79c0);
    func_0x00010c21c9a0(puVar12);
LAB_107d45478:
    _objc_release(puVar12);
    _objc_retain(puVar7);
    puVar12 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f457289);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f4572cc);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_107d44f2c;
            }
            func_0x0001001b9e08(param_3,&UNK_10f457329);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_107d44f2c;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d79c0);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar12);
            _objc_release(puVar7);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107d454ac;
          }
        }
      }
LAB_107d44f2c:
      puVar12 = (undefined *)0x0;
      goto LAB_107d454ac;
    }
    FUN_107d44c08();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_107d45578(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f4573d1);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar12 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d79c0);
        puVar9 = puVar12;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010c08ede0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c08ede0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar12);
        _objc_retain(puVar5);
        if (puVar12 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_107d453b0:
          puVar12 = puVar9;
          func_0x00010c0cd420();
          puVar5 = puVar7;
          func_0x00010c0cd420();
          if (puVar12 != puVar5) {
            func_0x0001001b9e08(param_3,&UNK_10f4574a7);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar11 == 0)) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
            }
            _sqlite3_bind_int64(param_3,1,uVar10);
            _sqlite3_bind_int64(param_3,2,uVar13);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_107d45490;
          }
          _objc_release(puVar9);
          _objc_release(puVar7);
          puVar12 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d79c0);
          func_0x00010c21c9a0(puVar12);
          goto LAB_107d45478;
        }
        if ((puVar12 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
        }
        else {
          puVar6 = puVar12;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
          if (((ulong)puVar6 & 1) != 0) goto LAB_107d453b0;
        }
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f45742b);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
          _sqlite3_bind_null(lVar8,1);
        }
        else {
          puVar14 = (uint *)((long)piVar1 + uVar11);
          puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
          _sqlite3_bind_text(lVar8,1,puVar2 + 1,*puVar2,0);
        }
        _sqlite3_bind_int64(lVar8,2,uVar13);
        _sqlite3_step();
        if ((int)lVar8 == 0x65) goto LAB_107d453b0;
LAB_107d45490:
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar7);
LAB_107d454a0:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_107d454ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107d45578; end: 107d45737;  */

ulong FUN_107d45578(undefined8 param_1,ulong param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_107d45738(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c08ede0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_107d45738(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010bf0a2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_107d45738(param_2,uVar8);
  uVar10 = param_3;
  func_0x00010c0cd420(param_3);
  func_0x00010c0cd400(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,0xc);
  func_0x0001001ce1c8(param_2,10,uVar10 & 0xffffffff,0);
  func_0x0001001ce2e4(param_2,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 107d45738; end: 107d45867;  */

undefined8 FUN_107d45738(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_107d45818;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_107d45818;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_107d457d8;
    param_1 = 0;
  }
  else {
LAB_107d457d8:
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
LAB_107d45818:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107d45868; end: 107d45aa3;  */

void FUN_107d45868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107d45aa4;
  uStack_50 = 0x107d45ab4;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107d45aa4;
  uStack_80 = 0x107d45ab4;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_107d45aa4;
  uStack_b0 = 0x107d45ab4;
  uStack_a8 = 0;
  func_0x00010c0c11e0(param_3);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d45aa4; end: 107d45abb;  */

void FUN_107d45aa4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d45abc; end: 107d45b9b;  */

void FUN_107d45abc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dbf1d8;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e50838;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d45b9c; end: 107d45cf3; +[SCChatDeepLinkResolver resolveChatDeeplinkType:] */

undefined8 FUN_107d45b9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    func_0x00010c0f5820(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0ad18);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eba038);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de7678);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eba058);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e11bf8
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110db9458);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110dbce78);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110eba078);
                      uVar2 = 9;
                      if ((int)uVar1 == 0) {
                        uVar2 = 0;
                      }
                    }
                    else {
                      uVar2 = 2;
                    }
                  }
                  else {
                    uVar2 = 8;
                  }
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 10;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    _objc_release(param_3);
  }
  return uVar2;
}



/* Entry: 107d45cf4; end: 107d45deb; +[SCChatDeepLinkResolver transformDeepLinkTypeToURL:] */

void FUN_107d45cf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  uVar3 = param_3 - 1;
  if ((uVar3 < 10) && ((0x2ffU >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)) {
    ppuVar4 = (undefined **)(&PTR_PTR_110a0a598)[uVar3];
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110eba078;
    if (param_3 != 9) {
      ppuVar4 = (undefined **)0x0;
    }
  }
  _objc_retain(ppuVar4);
  ppuVar1 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc49f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    func_0x00010c057c40();
    _objc_release(puVar2);
  }
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d45dec; end: 107d460f3; +[SCChatDeepLinkResolver resolveDeeplinkURL:snapchatterFetcher:successBlock:failureBlock:] */

void FUN_107d45dec(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c13a640();
  if (param_1 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
    goto LAB_107d4601c;
  }
  if (param_1 == 2) {
    puVar1 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c08fa60();
    if (puVar1 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b01c0;
      func_0x00010bfcf680(PTR_PTR_1126b01c0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,puVar3);
      goto LAB_107d46010;
    }
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    puVar1 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c08fa60();
    if (((puVar1 == (undefined *)0x0) &&
        (puVar1 = puVar3, func_0x00010c08fa60(), puVar1 == (undefined *)0x0)) &&
       (puVar1 = puVar4, func_0x00010c08fa60(), puVar1 == (undefined *)0x0)) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    else {
      puVar1 = PTR_PTR_1126b01c0;
      if (puVar3 == (undefined *)0x0) {
        if (puVar4 == (undefined *)0x0) {
          uVar5 = param_4;
          func_0x00010c269d40(param_4);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_5);
          _objc_retain(param_6);
          func_0x00010c244960(uVar5);
          _objc_release(uVar5);
          _objc_release(param_6);
          puVar3 = param_5;
          goto LAB_107d46010;
        }
        func_0x00010bfcf680(PTR_PTR_1126b01c0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c294260(PTR_PTR_1126b01c0);
        _objc_retainAutoreleasedReturnValue();
      }
      (**(code **)(param_5 + 0x10))(param_5,puVar1);
      _objc_release(puVar1);
    }
    _objc_release(puVar4);
LAB_107d46010:
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_107d4601c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d460f4; end: 107d461bb;  */

void FUN_107d460f4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b01c0;
  if (lVar3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d461bc; end: 107d4625f; -[SCGenerativeBackgroundsServices initWithBackgroundsFeatureStatusProvider:contextFactory:] */

undefined1 *
FUN_107d461bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fac60;
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



/* Entry: 107d46260; end: 107d46267; -[SCGenerativeBackgroundsServices backgroundsFeatureStatusProvider] */

undefined8 FUN_107d46260(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d46268; end: 107d46297; -[SCGenerativeBackgroundsServices setBackgroundsFeatureStatusProvider:] */

void FUN_107d46268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d46298; end: 107d4629f; -[SCGenerativeBackgroundsServices contextFactory] */

undefined8 FUN_107d46298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d462a0; end: 107d462cf; -[SCGenerativeBackgroundsServices setContextFactory:] */

void FUN_107d462a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d462d0; end: 107d462ff; -[SCGenerativeBackgroundsServices .cxx_destruct] */

void FUN_107d462d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d46300; end: 107d46373; -[SCGenerativeChatWallpapersServices initWithContextFactory:] */

undefined1 * FUN_107d46300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fac68;
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



/* Entry: 107d46374; end: 107d4637b; -[SCGenerativeChatWallpapersServices contextFactory] */

undefined8 FUN_107d46374(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d4637c; end: 107d463ab; -[SCGenerativeChatWallpapersServices setContextFactory:] */

void FUN_107d4637c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d463ac; end: 107d463b7; -[SCGenerativeChatWallpapersServices .cxx_destruct] */

void FUN_107d463ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d463b8; end: 107d463ff; -[SCGenerativeBackgroundsImageLoaderScope initWithGenerativeBackgroundsEnabled:] */

void FUN_107d463b8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fac70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107d46400; end: 107d46407; -[SCGenerativeBackgroundsImageLoaderScope isGenerativeBackgroundsEnabled] */

undefined1 FUN_107d46400(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d46408; end: 107d4640f; -[SCGenerativeBackgroundsImageLoaderScope setIsGenerativeBackgroundsEnabled:] */

void FUN_107d46408(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107d46410; end: 107d466f3; -[SCUnifiedActionMenuAvatarItemTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d46410(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fac78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4730;
    _objc_opt_new();
    lVar8 = (long)_DAT_11276e178;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    func_0x00010c1619c0(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d79c8;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e17c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276e17c) = puVar2;
    _objc_release(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar8 = (long)_DAT_11276e180;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar8 = (long)_DAT_11276e184;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf33840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar8 = (long)_DAT_11276e188;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d466f4; end: 107d46ac3; -[SCUnifiedActionMenuAvatarItemTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d466f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276e18c;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_107d46aac;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d79d0;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar1 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar1 = uVar4;
    func_0x00010bf85d80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c26c280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(lVar6);
    _objc_release(uVar1);
    lVar6 = param_1;
    func_0x00010c26c280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(lVar6);
    uVar1 = uVar4;
    func_0x00010c244520();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276e190;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar2);
    if (*(long *)(param_1 + lVar6) != 0) {
      uVar1 = uVar4;
      func_0x00010c244520();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0ba460();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11276e194;
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar5;
      _objc_release(uVar2);
      _objc_release(uVar1);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6));
      lVar6 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar6);
    }
    uVar1 = uVar4;
    func_0x00010c260dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276e17c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c260dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c244320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11276e178));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c2442e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar7 = (long)_DAT_11276e198;
    lVar6 = *(long *)(param_1 + lVar7);
    if (uVar1 == 0) {
      func_0x00010c1a7f60();
    }
    else {
      if (lVar6 == 0) {
        puVar3 = PTR_PTR_1126cb038;
        _objc_opt_new();
        uVar2 = *(undefined8 *)(param_1 + lVar7);
        *(undefined **)(param_1 + lVar7) = puVar3;
        _objc_release(uVar2);
        func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar7));
        lVar6 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(lVar6);
        lVar6 = *(long *)(param_1 + lVar7);
      }
      func_0x00010c1a7f60(lVar6);
      uVar1 = uVar4;
      func_0x00010c2442e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar7));
      _objc_release(uVar1);
    }
    func_0x00010c23a540(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276e184));
    uVar1 = uVar4;
    func_0x00010bf1ebc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276e180;
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf1ebc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + _DAT_11276e19c) = 0;
    func_0x00010c069fa0(param_1);
  }
  _objc_release(uVar4);
LAB_107d46aac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d46ac4; end: 107d46b97; -[SCUnifiedActionMenuAvatarItemTableViewCell intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d46ac4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_1 + _DAT_11276e19c) <= 0.0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276e188);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276e190;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c233b40();
    if (iVar1 != 0) {
      func_0x00010c0b9d60(*(undefined8 *)(param_1 + lVar3));
    }
    func_0x00010c2a5040(*(undefined8 *)(param_1 + _DAT_11276e178));
  }
  else {
    func_0x00010c2a5040(*(undefined8 *)(param_1 + _DAT_11276e178));
  }
  return;
}



/* Entry: 107d46b98; end: 107d46fb7; -[SCUnifiedActionMenuAvatarItemTableViewCell setProminentActionCells:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d46b98(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  long lStack_3c0;
  undefined *puStack_3b8;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar21 = (long)_DAT_11276e188;
  lVar4 = *(long *)(param_3 + lVar21);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar4;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  while (lVar19 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar22) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c12b280(*(undefined8 *)(param_3 + lVar21));
      lVar16 = lVar16 + 1;
    } while (lVar19 != lVar16);
    lVar19 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar19 = param_5;
  func_0x00010bf529e0();
  if (lVar19 == 2) {
    uVar17 = *(undefined8 *)(param_3 + lVar21);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010bef6d60(uVar17);
    _objc_release(puVar5);
  }
  _objc_retain(param_5);
  lVar19 = param_5;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  while (lVar19 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar22) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010c219b60(*(undefined8 *)(lVar4 * 8));
      func_0x00010bef6d60(*(undefined8 *)(param_3 + lVar21));
      lVar4 = lVar4 + 1;
    } while (lVar19 != lVar4);
    lVar19 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  lVar19 = param_5;
  func_0x00010bf529e0();
  if (lVar19 == 2) {
    uVar17 = *(undefined8 *)(param_3 + lVar21);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    func_0x00010bef6d60(uVar17);
    _objc_release(puVar5);
  }
  dVar25 = 0.0;
  _objc_retain(param_5);
  lVar19 = param_5;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  while (lVar19 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar22) {
        _objc_enumerationMutation(param_5);
      }
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar20 = *(undefined8 *)(lVar4 * 8);
      uVar17 = uVar20;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar17;
      func_0x00010bf49420(0x4051000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar20;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      dVar25 = 46.0;
      uVar7 = uVar6;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_3 + lVar21);
      func_0x00010c274200(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar20;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar20);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar29);
      _objc_release(uVar17);
      lVar4 = lVar4 + 1;
    } while (lVar19 != lVar4);
    lVar19 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  puStack_3b8 = PTR_PTR_1126fac78;
  lStack_3c0 = param_5;
  _objc_msgSendSuper2(&lStack_3c0,PTR_s_layoutSubviews_112600e60);
  lVar19 = (long)_DAT_11276e178;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar19));
  lVar22 = (long)_DAT_11276e190;
  iVar2 = (int)*(undefined8 *)(param_5 + lVar22);
  func_0x00010c233b40();
  dVar31 = 0.0;
  if (iVar2 != 0) {
    func_0x00010c0b9d60(*(undefined8 *)(param_5 + lVar22));
    dVar31 = param_2;
  }
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + lVar19));
  dVar26 = 16.0;
  if (dVar25 <= 0.0) {
    dVar26 = 0.0;
  }
  dVar23 = dVar25 + 16.0;
  dVar26 = dVar23 + dVar26;
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar30 = (dVar23 + -15.0) - dVar26;
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar24 = 1.79769313486232e+308;
  dVar23 = dVar30;
  func_0x00010c23d5a0();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11276e180;
  uVar11 = *(ulong *)(param_5 + lVar4);
  func_0x00010c074c20();
  lVar15 = (long)_DAT_11276e17c;
  if ((uVar11 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_5 + lVar15);
    func_0x00010c074c20();
    if (iVar2 == 0) goto LAB_107d4711c;
    dVar23 = 1.79769313486232e+308;
    func_0x00010c23d5a0(dVar30,*(undefined8 *)(param_5 + lVar4));
    dVar23 = (double)(long)dVar23;
    bVar1 = true;
  }
  else {
LAB_107d4711c:
    uVar11 = *(ulong *)(param_5 + lVar15);
    func_0x00010c074c20();
    puVar5 = PTR_PTR_1126d79d0;
    if ((uVar11 & 1) == 0) {
      uVar18 = *(ulong *)(param_5 + _DAT_11276e18c);
      _objc_retain(uVar18);
      _objc_opt_class(puVar5);
      uVar12 = uVar18;
      _objc_opt_isKindOfClass(uVar18,puVar5);
      uVar11 = uVar18;
      if ((uVar12 & 1) == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      _objc_release(uVar18);
      puVar5 = PTR_PTR_1126d79c8;
      uVar12 = uVar11;
      func_0x00010c260dc0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      func_0x00010bfe0a60(puVar5);
      _objc_release(uVar12);
      bVar1 = false;
    }
    else {
      bVar1 = false;
      dVar23 = 0.0;
    }
  }
  dVar24 = dVar24 + dVar23 + 8.0;
  lVar21 = param_5;
  func_0x00010bf4dce0(0x404c000000000000,param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 16.0;
  func_0x00010b8166f8(0x4030000000000000,(dVar31 + dVar24 * 0.5) - param_2 * 0.5,dVar25,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar19));
  _objc_release(lVar21);
  iVar2 = (int)*(undefined8 *)(param_5 + lVar22);
  func_0x00010c233b40();
  dVar25 = dVar30;
  if (iVar2 != 0) {
    func_0x00010c0b9d60(*(undefined8 *)(param_5 + lVar22));
    dVar25 = 0.0;
    func_0x00010b8166f8(0,0,dVar30,dVar31,param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276e194));
  }
  lVar19 = (long)_DAT_11276e184;
  iVar2 = (int)*(undefined8 *)(param_5 + lVar19);
  func_0x00010c074c20();
  if (iVar2 == 0) {
    lVar22 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar28 = -15.0;
    dVar30 = dVar25 + -15.0;
    _objc_release(lVar22);
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar19));
    dVar30 = dVar30 - dVar25;
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar19));
    dVar25 = dVar24 * 0.5 + dVar28 * -0.5;
    dVar32 = dVar31 + dVar25;
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar19));
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar19));
    lVar22 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(dVar30,dVar32,dVar25,dVar28);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar19));
    _objc_release(lVar22);
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar19));
    dVar30 = dVar30 + 15.0;
    dVar32 = dVar30 + 15.0;
  }
  else {
    dVar30 = *(double *)PTR__CGRectZero_110347608;
    dVar25 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar28 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c19f0e0(dVar30,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar25,dVar28,
                        *(undefined8 *)(param_5 + lVar19));
    dVar32 = 15.0;
  }
  lVar19 = (long)_DAT_11276e198;
  uVar11 = *(ulong *)(param_5 + lVar19);
  dVar27 = dVar25;
  if ((uVar11 != 0) && (func_0x00010c074c20(), dVar27 = dVar25, (uVar11 & 1) == 0)) {
    uVar17 = *(undefined8 *)(param_5 + lVar19);
    lVar22 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c23d5a0(dVar25,dVar28,uVar17);
    dVar30 = dVar25;
    _objc_release(lVar22);
    lVar22 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar22);
    lVar22 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar27 = dVar25;
    func_0x00010b8166f8((dVar30 - dVar32) - dVar25,dVar31 + (dVar24 - dVar28) * 0.5,dVar25,dVar28);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar19));
    _objc_release(lVar22);
    dVar30 = dVar25 + 15.0;
    dVar32 = dVar32 + dVar30;
  }
  lVar19 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar25 = (dVar30 - dVar32) - dVar26;
  _objc_release(lVar19);
  lVar19 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c23d5a0(dVar27,dVar28,lVar19);
  _objc_release(lVar22);
  _objc_release(lVar19);
  lVar19 = param_5;
  if (bVar1) {
    dVar30 = dVar31 + ((dVar24 - dVar28) - dVar23) * 0.5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(dVar26,dVar28 + dVar30,dVar25,dVar23);
    uVar17 = *(undefined8 *)(param_5 + lVar4);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_5 + lVar15);
    func_0x00010c074c20();
    if (iVar2 != 0) {
      dVar30 = (dVar24 - dVar28) * 0.5;
      goto LAB_107d47558;
    }
    dVar30 = dVar31 + ((dVar24 - dVar28) - dVar23) * 0.5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(dVar26,dVar28 + dVar30,dVar25,dVar23);
    uVar17 = *(undefined8 *)(param_5 + lVar15);
  }
  func_0x00010c19f0e0(uVar17);
  _objc_release(lVar19);
LAB_107d47558:
  lVar19 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar23 = dVar25;
  func_0x00010b8166f8(dVar26,dVar30,dVar25,dVar28);
  lVar22 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar26,dVar30,dVar23,dVar28);
  _objc_release(lVar22);
  _objc_release(lVar19);
  puVar5 = PTR_PTR_1126d79d0;
  uVar18 = *(ulong *)(param_5 + _DAT_11276e18c);
  _objc_retain(uVar18);
  _objc_opt_class(puVar5);
  uVar12 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar5);
  uVar11 = uVar18;
  if ((uVar12 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  _objc_release(uVar18);
  lVar19 = param_5;
  func_0x00010c26c280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(lVar19);
  uVar12 = uVar11;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar11;
  func_0x00010bf86000();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar18;
  func_0x00010c08fa60();
  if ((uVar13 != 0) && (dVar25 < dVar26)) {
    uVar13 = uVar12;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf4bb00();
    _objc_release(uVar13);
    if ((int)uVar14 != 0) {
      uVar13 = uVar12;
      func_0x00010bf0e2c0(dVar25,uVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_5;
      func_0x00010c26c280(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar19);
      _objc_release(uVar13);
    }
  }
  lVar15 = (long)_DAT_11276e188;
  lVar22 = *(long *)(param_5 + lVar15);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar22;
  func_0x00010bf529e0();
  _objc_release(lVar22);
  if (lVar19 == 0) {
    dVar25 = *(double *)PTR__CGRectZero_110347608;
    dVar26 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar23 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar17 = *(undefined8 *)(param_5 + lVar15);
  }
  else {
    dVar25 = dVar24 + 8.0;
    dVar26 = dVar31 + dVar25;
    lVar19 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar23 = dVar25 + -16.0 + -16.0;
    _objc_release(lVar19);
    uVar17 = *(undefined8 *)(param_5 + lVar15);
    uVar29 = 0x4047000000000000;
    dVar25 = 16.0;
  }
  func_0x00010c19f0e0(dVar25,dVar26,dVar23,uVar29,uVar17);
  uVar3 = (uint)*(undefined8 *)(param_5 + lVar4);
  func_0x00010c074c20();
  if (bVar1 || (uVar3 & 1) != 0) {
    dVar25 = 0.0;
    if (!bVar1) {
      func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                          *(undefined8 *)(param_5 + lVar4));
    }
  }
  else {
    lVar19 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar19);
    dVar26 = 1.79769313486232e+308;
    func_0x00010c23d5a0(dVar25 + -32.0,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c19f0e0(0x4030000000000000,dVar31 + dVar24,dVar25 + -32.0,(long)dVar26,
                        *(undefined8 *)(param_5 + lVar4));
    dVar25 = (double)(long)dVar26 + 0.0 + 8.0;
  }
  lVar22 = *(long *)(param_5 + lVar15);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar22;
  func_0x00010bf529e0();
  dVar26 = 0.0;
  if (lVar19 != 0) {
    dVar26 = 62.0;
  }
  _objc_release(lVar22);
  dVar25 = dVar25 + dVar31 + dVar24 + dVar26;
  if (*(double *)(param_5 + _DAT_11276e19c) != dVar25) {
    *(double *)(param_5 + _DAT_11276e19c) = dVar25;
    func_0x00010c069fa0(param_5);
  }
  _objc_release(uVar18);
  _objc_release(uVar12);
  _objc_release(uVar11);
  return;
}



/* Entry: 107d46fb8; end: 107d478cf; -[SCUnifiedActionMenuAvatarItemTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d46fb8(double param_1,double param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  long lStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126fac78;
  lStack_b0 = param_3;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_layoutSubviews_112600e60);
  lVar12 = (long)_DAT_11276e178;
  func_0x00010c23d620(*(undefined8 *)(param_3 + lVar12));
  lVar15 = (long)_DAT_11276e190;
  iVar2 = (int)*(undefined8 *)(param_3 + lVar15);
  func_0x00010c233b40();
  dVar24 = 0.0;
  if (iVar2 != 0) {
    func_0x00010c0b9d60(*(undefined8 *)(param_3 + lVar15));
    dVar24 = param_2;
  }
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar12));
  dVar19 = 16.0;
  if (param_1 <= 0.0) {
    dVar19 = 0.0;
  }
  dVar16 = param_1 + 16.0;
  dVar19 = dVar16 + dVar19;
  lVar13 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar23 = (dVar16 + -15.0) - dVar19;
  _objc_release(lVar13);
  lVar13 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = 1.79769313486232e+308;
  dVar16 = dVar23;
  func_0x00010c23d5a0();
  _objc_release(lVar13);
  lVar13 = (long)_DAT_11276e180;
  uVar4 = *(ulong *)(param_3 + lVar13);
  func_0x00010c074c20();
  lVar14 = (long)_DAT_11276e17c;
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_3 + lVar14);
    func_0x00010c074c20();
    if (iVar2 == 0) goto LAB_107d4711c;
    dVar16 = 1.79769313486232e+308;
    func_0x00010c23d5a0(dVar23,*(undefined8 *)(param_3 + lVar13));
    dVar16 = (double)(long)dVar16;
    bVar1 = true;
  }
  else {
LAB_107d4711c:
    uVar4 = *(ulong *)(param_3 + lVar14);
    func_0x00010c074c20();
    puVar5 = PTR_PTR_1126d79d0;
    if ((uVar4 & 1) == 0) {
      uVar11 = *(ulong *)(param_3 + _DAT_11276e18c);
      _objc_retain(uVar11);
      _objc_opt_class(puVar5);
      uVar6 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar5);
      uVar4 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar11);
      puVar5 = PTR_PTR_1126d79c8;
      uVar6 = uVar4;
      func_0x00010c260dc0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bfe0a60(puVar5);
      _objc_release(uVar6);
      bVar1 = false;
    }
    else {
      bVar1 = false;
      dVar16 = 0.0;
    }
  }
  dVar23 = dVar18 + dVar16 + 8.0;
  lVar7 = param_3;
  func_0x00010bf4dce0(0x404c000000000000,param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 16.0;
  func_0x00010b8166f8(0x4030000000000000,(dVar24 + dVar23 * 0.5) - param_2 * 0.5,param_1,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar12));
  _objc_release(lVar7);
  iVar2 = (int)*(undefined8 *)(param_3 + lVar15);
  func_0x00010c233b40();
  dVar18 = dVar17;
  if (iVar2 != 0) {
    func_0x00010c0b9d60(*(undefined8 *)(param_3 + lVar15));
    dVar18 = 0.0;
    func_0x00010b8166f8(0,0,dVar17,dVar24,param_3);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11276e194));
  }
  lVar12 = (long)_DAT_11276e184;
  iVar2 = (int)*(undefined8 *)(param_3 + lVar12);
  func_0x00010c074c20();
  if (iVar2 == 0) {
    lVar15 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar21 = -15.0;
    dVar17 = dVar18 + -15.0;
    _objc_release(lVar15);
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar12));
    dVar17 = dVar17 - dVar18;
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar12));
    dVar18 = dVar23 * 0.5 + dVar21 * -0.5;
    dVar25 = dVar24 + dVar18;
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar12));
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar12));
    lVar15 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(dVar17,dVar25,dVar18,dVar21);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar12));
    _objc_release(lVar15);
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar12));
    dVar17 = dVar17 + 15.0;
    dVar25 = dVar17 + 15.0;
  }
  else {
    dVar17 = *(double *)PTR__CGRectZero_110347608;
    dVar18 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar21 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c19f0e0(dVar17,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar18,dVar21,
                        *(undefined8 *)(param_3 + lVar12));
    dVar25 = 15.0;
  }
  lVar12 = (long)_DAT_11276e198;
  uVar4 = *(ulong *)(param_3 + lVar12);
  dVar20 = dVar18;
  if ((uVar4 != 0) && (func_0x00010c074c20(), dVar20 = dVar18, (uVar4 & 1) == 0)) {
    uVar10 = *(undefined8 *)(param_3 + lVar12);
    lVar15 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c23d5a0(dVar18,dVar21,uVar10);
    dVar17 = dVar18;
    _objc_release(lVar15);
    lVar15 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar15);
    lVar15 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    dVar20 = dVar18;
    func_0x00010b8166f8((dVar17 - dVar25) - dVar18,dVar24 + (dVar23 - dVar21) * 0.5,dVar18,dVar21);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + lVar12));
    _objc_release(lVar15);
    dVar17 = dVar18 + 15.0;
    dVar25 = dVar25 + dVar17;
  }
  lVar12 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar18 = (dVar17 - dVar25) - dVar19;
  _objc_release(lVar12);
  lVar12 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c23d5a0(dVar20,dVar21,lVar12);
  _objc_release(lVar15);
  _objc_release(lVar12);
  lVar12 = param_3;
  if (bVar1) {
    dVar17 = dVar24 + ((dVar23 - dVar21) - dVar16) * 0.5;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(dVar19,dVar21 + dVar17,dVar18,dVar16);
    uVar10 = *(undefined8 *)(param_3 + lVar13);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_3 + lVar14);
    func_0x00010c074c20();
    if (iVar2 != 0) {
      dVar17 = (dVar23 - dVar21) * 0.5;
      goto LAB_107d47558;
    }
    dVar17 = dVar24 + ((dVar23 - dVar21) - dVar16) * 0.5;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(dVar19,dVar21 + dVar17,dVar18,dVar16);
    uVar10 = *(undefined8 *)(param_3 + lVar14);
  }
  func_0x00010c19f0e0(uVar10);
  _objc_release(lVar12);
LAB_107d47558:
  lVar12 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar16 = dVar18;
  func_0x00010b8166f8(dVar19,dVar17,dVar18,dVar21);
  lVar15 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar19,dVar17,dVar16,dVar21);
  _objc_release(lVar15);
  _objc_release(lVar12);
  puVar5 = PTR_PTR_1126d79d0;
  uVar11 = *(ulong *)(param_3 + _DAT_11276e18c);
  _objc_retain(uVar11);
  _objc_opt_class(puVar5);
  uVar6 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar5);
  uVar4 = uVar11;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar11);
  lVar12 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(lVar12);
  uVar6 = uVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf86000();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010c08fa60();
  if ((uVar8 != 0) && (dVar18 < dVar19)) {
    uVar8 = uVar6;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf4bb00();
    _objc_release(uVar8);
    if ((int)uVar9 != 0) {
      uVar8 = uVar6;
      func_0x00010bf0e2c0(dVar18,uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(lVar12);
      _objc_release(uVar8);
    }
  }
  lVar14 = (long)_DAT_11276e188;
  lVar15 = *(long *)(param_3 + lVar14);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010bf529e0();
  _objc_release(lVar15);
  if (lVar12 == 0) {
    dVar19 = *(double *)PTR__CGRectZero_110347608;
    dVar16 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar18 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar10 = *(undefined8 *)(param_3 + lVar14);
  }
  else {
    dVar19 = dVar23 + 8.0;
    dVar16 = dVar24 + dVar19;
    lVar12 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar18 = dVar19 + -16.0 + -16.0;
    _objc_release(lVar12);
    uVar10 = *(undefined8 *)(param_3 + lVar14);
    uVar22 = 0x4047000000000000;
    dVar19 = 16.0;
  }
  func_0x00010c19f0e0(dVar19,dVar16,dVar18,uVar22,uVar10);
  uVar3 = (uint)*(undefined8 *)(param_3 + lVar13);
  func_0x00010c074c20();
  if (bVar1 || (uVar3 & 1) != 0) {
    dVar19 = 0.0;
    if (!bVar1) {
      func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                          *(undefined8 *)(param_3 + lVar13));
    }
  }
  else {
    lVar12 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar12);
    dVar16 = 1.79769313486232e+308;
    func_0x00010c23d5a0(dVar19 + -32.0,*(undefined8 *)(param_3 + lVar13));
    func_0x00010c19f0e0(0x4030000000000000,dVar24 + dVar23,dVar19 + -32.0,(long)dVar16,
                        *(undefined8 *)(param_3 + lVar13));
    dVar19 = (double)(long)dVar16 + 0.0 + 8.0;
  }
  lVar15 = *(long *)(param_3 + lVar14);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010bf529e0();
  dVar16 = 0.0;
  if (lVar12 != 0) {
    dVar16 = 62.0;
  }
  _objc_release(lVar15);
  dVar19 = dVar19 + dVar24 + dVar23 + dVar16;
  if (*(double *)(param_3 + _DAT_11276e19c) != dVar19) {
    *(double *)(param_3 + _DAT_11276e19c) = dVar19;
    func_0x00010c069fa0(param_3);
  }
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar4);
  return;
}



/* Entry: 107d478d0; end: 107d478df; -[SCUnifiedActionMenuAvatarItemTableViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d478d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276e178),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 107d478e0; end: 107d478ef; -[SCUnifiedActionMenuAvatarItemTableViewCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d478e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276e178),PTR_s_setImageFetchingService__1126482d8);
  return;
}



/* Entry: 107d478f0; end: 107d47b2f; -[SCUnifiedActionMenuAvatarItemTableViewCell _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d478f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(param_5);
  uVar3 = uVar2;
  func_0x00010bfe3a40(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if ((uVar5 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11276e194);
    func_0x00010bfb68e0();
    _CGRectContainsPoint();
    puVar4 = PTR_PTR_1126d79d0;
    if (iVar1 == 0) {
      puVar8 = *(undefined **)(param_3 + _DAT_11276e18c);
      _objc_retain(puVar8);
      _objc_opt_class(puVar4);
      puVar7 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar4);
      puVar4 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar8);
      puVar7 = puVar4;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar7 == (undefined *)0x0) goto LAB_107d47b08;
    }
    else {
      puVar7 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar4 = PTR_PTR_1126d79d0;
      uVar9 = *(ulong *)(param_3 + _DAT_11276e18c);
      _objc_retain(uVar9);
      _objc_opt_class(puVar4);
      uVar6 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar4);
      uVar5 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar9);
      uVar6 = uVar5;
      func_0x00010c268c60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010beee2e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar7);
      _objc_release(uVar5);
      _objc_release(uVar6);
    }
    func_0x00010bfd0140(*(undefined8 *)(param_3 + _DAT_11276e1a0));
    _objc_release(puVar7);
  }
  else {
    func_0x00010c15b4c0(uVar3);
  }
LAB_107d47b08:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d47b30; end: 107d47b4b; -[SCUnifiedActionMenuAvatarItemTableViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47b30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276e1a0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_1);
  return;
}



/* Entry: 107d47b4c; end: 107d47b5b; -[SCUnifiedActionMenuAvatarItemTableViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d47b4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e1a0);
}



/* Entry: 107d47b5c; end: 107d47b9b; -[SCUnifiedActionMenuAvatarItemTableViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276e1a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d47b9c; end: 107d47bab; -[SCUnifiedActionMenuAvatarItemTableViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d47b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e18c);
}



/* Entry: 107d47bac; end: 107d47bbb; -[SCUnifiedActionMenuAvatarItemTableViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d47bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e1a4);
}



/* Entry: 107d47bbc; end: 107d47bcb; -[SCUnifiedActionMenuAvatarItemTableViewCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d47bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276e1a8);
}



/* Entry: 107d47bcc; end: 107d47cab; -[SCUnifiedActionMenuAvatarItemTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47bcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e1a8,0);
  _objc_storeStrong(param_1 + _DAT_11276e1a4,0);
  _objc_storeStrong(param_1 + _DAT_11276e18c,0);
  _objc_storeStrong(param_1 + _DAT_11276e1a0,0);
  _objc_storeStrong(param_1 + _DAT_11276e180,0);
  _objc_storeStrong(param_1 + _DAT_11276e184,0);
  _objc_storeStrong(param_1 + _DAT_11276e188,0);
  _objc_storeStrong(param_1 + _DAT_11276e198,0);
  _objc_storeStrong(param_1 + _DAT_11276e17c,0);
  _objc_storeStrong(param_1 + _DAT_11276e190,0);
  _objc_storeStrong(param_1 + _DAT_11276e194,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e178,0);
  return;
}



/* Entry: 107d47cac; end: 107d47d7f; -[SCUnifiedActionMenuBaseTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d47cac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fac80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_11276e1ac;
  uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined **)((long)puVar1 + lVar5) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
  _objc_release(puVar2);
  puVar3 = (undefined1 *)puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(puVar1);
  _objc_release(puVar3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d47d80; end: 107d47e4b; -[SCUnifiedActionMenuBaseTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47d80(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fac80;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276e1ac));
  func_0x00010bf20c00(param_5);
  pdVar1 = (double *)(param_5 + _DAT_11276e1b0);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar4 = pdVar1[2];
  dVar5 = pdVar1[3];
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1 + dVar3,param_2 + dVar2,param_3 - (dVar3 + dVar5),
                      param_4 - (dVar2 + dVar4));
  _objc_release(param_5);
  return;
}



/* Entry: 107d47e4c; end: 107d47e63; -[SCUnifiedActionMenuBaseTableViewCell setContentEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276e1b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107d47e64; end: 107d47eeb; -[SCUnifiedActionMenuBaseTableViewCell setHighlighted:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47e64(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fac80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHighlighted_animated__112647c40);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276e1ac));
  _objc_release(puVar1);
  return;
}



/* Entry: 107d47eec; end: 107d47eef; -[SCUnifiedActionMenuBaseTableViewCell setSelected:animated:] */

void FUN_107d47eec(void)

{
  return;
}



/* Entry: 107d47ef0; end: 107d47f03; -[SCUnifiedActionMenuBaseTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d47ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e1ac,0);
  return;
}



/* Entry: 107d47f04; end: 107d47f27; -[SCUnifiedActionMenuPresenter initWithMenuViewDataProvider:actionHandler:imageDownloader:imageFetchingService:sourcePageType:] */

void FUN_107d47f04(void)

{
  func_0x00010c02b1a0();
  return;
}



/* Entry: 107d47f28; end: 107d480d7; -[SCUnifiedActionMenuPresenter initWithMenuViewDataProvider:actionHandler:imageDownloader:imageFetchingService:sourcePageType:friendPlugins:groupPlugins:] */

undefined1 *
FUN_107d47f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fac88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar3);
    *(undefined2 *)((long)puVar1 + 0x50) = 0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar3);
    func_0x00010bdea4a0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d480d8; end: 107d480e3; +[SCUnifiedActionMenuPresenter announcerIdentifier] */

undefined ** FUN_107d480d8(void)

{
  return &PTR____CFConstantStringClassReference_110eba118;
}



/* Entry: 107d480e4; end: 107d480eb; -[SCUnifiedActionMenuPresenter addListener:] */

void FUN_107d480e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107d480ec; end: 107d480f3; -[SCUnifiedActionMenuPresenter removeListener:] */

void FUN_107d480ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107d480f4; end: 107d48237; -[SCUnifiedActionMenuPresenter presentMenuViewWithUIContainer:completion:] */

void FUN_107d480f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x48,param_3);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c10f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c10c360(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d48238; end: 107d4826b;  */

void FUN_107d48238(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d4826c; end: 107d483d3; -[SCUnifiedActionMenuPresenter presentMenuViewWithPresentingViewController:completion:] */

void FUN_107d4826c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x40,param_3);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  lVar2 = param_1;
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c10af80(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d483d4; end: 107d48407;  */

void FUN_107d483d4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ae00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d48408; end: 107d4840f; -[SCUnifiedActionMenuPresenter presentMenuViewWithPresentingViewController:] */

void FUN_107d48408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentMenuViewWithPresentingVie_112620e58,param_3,0);
  return;
}



/* Entry: 107d48410; end: 107d485fb; -[SCUnifiedActionMenuPresenter dismissMenuViewWithAnimation:completion:] */

void FUN_107d48410(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27fdc0();
    _objc_release(uVar1);
  }
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar3 == 0) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
    }
    else {
      _objc_initWeak(auStack_78,param_1);
      lVar3 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar3);
      _objc_retain(param_4);
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bf6f440(lVar3);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_80);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_78);
    }
  }
  else {
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107d485fc;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_4);
    uStack_50 = param_1;
    lStack_48 = param_4;
    func_0x00010bf84b00(lVar3);
    _objc_release(lVar3);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107d485fc; end: 107d4866b;  */

void FUN_107d485fc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfd410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didDismissActionMenu_11255cea0);
  return;
}



/* Entry: 107d4866c; end: 107d4869b; -[SCUnifiedActionMenuPresenter popActionSheetView] */

void FUN_107d4866c(undefined8 param_1)

{
  func_0x00010c10f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d4869c; end: 107d4873f; -[SCUnifiedActionMenuPresenter presentNestedMenuView:] */

void FUN_107d4869c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1208;
  _objc_opt_class(PTR_PTR_1126b1208);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_3);
    func_0x00010c10f840(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0ca8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d300(param_1);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d48740; end: 107d4878f; -[SCUnifiedActionMenuPresenter addActionSheetHeaderLabel:] */

void FUN_107d48740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010c1a76a0(*(long *)(param_1 + 0x88),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d48790; end: 107d487e3; -[SCUnifiedActionMenuPresenter setHeaderActionLabelTapHandler:] */

void FUN_107d48790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010c1d2600(*(long *)(param_1 + 0x88),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d487e4; end: 107d487e7; -[SCUnifiedActionMenuPresenter presentedViewController] */

void FUN_107d487e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentedActionSheet_112621830);
  return;
}



/* Entry: 107d487e8; end: 107d4880f; -[SCUnifiedActionMenuPresenter presentedUIContainer] */

void FUN_107d487e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d48810; end: 107d48827; -[SCUnifiedActionMenuPresenter presentingViewController] */

void FUN_107d48810(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d48828; end: 107d4884f; -[SCUnifiedActionMenuPresenter presentedActionSheet] */

void FUN_107d48828(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d48850; end: 107d4890b; -[SCUnifiedActionMenuPresenter dataProviderDidUpdate:] */

void FUN_107d48850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d4890c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107d4890c; end: 107d48937;  */

void FUN_107d4890c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdea4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d48938; end: 107d48a0b; -[SCUnifiedActionMenuPresenter _createActionSheetCells] */

void FUN_107d48938(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c28bf80(uVar1);
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010bdea4e0(param_1);
  }
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107d48a0c; end: 107d48ac7;  */

void FUN_107d48a0c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107d48ac8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107d48ac8; end: 107d48fe3;  */

void FUN_107d48ac8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_107d48fe4;
  uStack_118 = 0x107d48ff4;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_107d48fe4;
  uStack_148 = 0x107d48ff4;
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar4;
  func_0x00010be34d00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar3;
  _objc_release(lVar4);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);
        puStack_1e0 = puVar1;
        uStack_1d8 = 0xc2000000;
        pcStack_1d0 = FUN_107d48ffc;
        puStack_1c8 = &UNK_110a0a5e8;
        puStack_1c0 = &uStack_138;
        _objc_copyWeak(auStack_1b8,param_1 + 0x28);
        puStack_210 = puVar1;
        uStack_208 = 0xc2000000;
        uStack_200 = 0x107d4906c;
        puStack_1f8 = &UNK_110a0a618;
        puStack_1f0 = &uStack_138;
        _objc_copyWeak(auStack_1e8,param_1 + 0x28);
        puStack_240 = puVar1;
        uStack_238 = 0xc2000000;
        uStack_230 = 0x107d490dc;
        puStack_228 = &UNK_110a0a648;
        puStack_220 = &uStack_138;
        _objc_copyWeak(auStack_218,param_1 + 0x28);
        puStack_270 = puVar1;
        uStack_268 = 0xc2000000;
        uStack_260 = 0x107d4914c;
        puStack_258 = &UNK_110a0a678;
        puStack_250 = &uStack_168;
        _objc_copyWeak(auStack_248,param_1 + 0x28);
        puStack_2a0 = puVar1;
        uStack_298 = 0xc2000000;
        uStack_290 = 0x107d491bc;
        puStack_288 = &UNK_110a0a6a8;
        puStack_280 = &uStack_138;
        _objc_copyWeak(auStack_278,param_1 + 0x28);
        _objc_copyWeak(auStack_2a8,param_1 + 0x28);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar6);
        func_0x00010c0c0be0(uVar5);
        if (puStack_130[5] == 0) {
          uVar5 = 0;
        }
        else {
          func_0x00010befa120(puVar2);
          uVar5 = puStack_130[5];
        }
        puStack_130[5] = 0;
        _objc_release(uVar5);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_2a8);
        _objc_destroyWeak(auStack_278);
        _objc_destroyWeak(auStack_248);
        _objc_destroyWeak(auStack_218);
        _objc_destroyWeak(auStack_1e8);
        _objc_destroyWeak(auStack_1b8);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb4220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010be186a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdea4e0(lVar4);
  _objc_release(uVar5);
  _objc_release(lVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  _objc_release();
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(lStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 107d48fe4; end: 107d48ffb;  */

void FUN_107d48fe4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107d48ffc; end: 107d492db;  */

void FUN_107d48ffc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010becb3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d492dc; end: 107d495a7; -[SCUnifiedActionMenuPresenter _headerFromMenuViewModel:] */

void FUN_107d492dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107d48fe4;
  uStack_80 = 0x107d48ff4;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar2 = param_3;
  func_0x00010bfdef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107d495a8;
  puStack_c0 = &UNK_110a0a5e8;
  puStack_b8 = &uStack_a0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x107d49618;
  puStack_f0 = &UNK_110a0a618;
  puStack_e8 = &uStack_a0;
  _objc_copyWeak(auStack_e0,auStack_a8);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x107d49688;
  puStack_120 = &UNK_110a0a648;
  puStack_118 = &uStack_a0;
  _objc_copyWeak(auStack_110,auStack_a8);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x107d496f8;
  puStack_158 = &UNK_110a0a738;
  _objc_copyWeak(auStack_140,auStack_a8);
  _objc_retain(param_3);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x107d497a4;
  puStack_188 = &UNK_110a0a6a8;
  puStack_180 = &uStack_a0;
  uStack_150 = param_3;
  puStack_148 = &uStack_a0;
  _objc_copyWeak(auStack_178,auStack_a8);
  _objc_copyWeak(auStack_1a8,auStack_a8);
  func_0x00010c0c0be0(uVar2);
  _objc_release(uVar2);
  uVar2 = puStack_98[5];
  _objc_retain(uVar2);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_178);
  _objc_release(uStack_150);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d495a8; end: 107d49873;  */

void FUN_107d495a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010becb3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d49874; end: 107d49a87; -[SCUnifiedActionMenuPresenter _prominentActionsFromModel:] */

void FUN_107d49874(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_initWeak(auStack_108,param_1);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar4 = *plStack_140;
    do {
      lVar5 = 0;
      do {
        if (*plStack_140 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_148 + lVar5 * 8);
        _objc_copyWeak(auStack_158,auStack_108);
        _objc_retain(puVar1);
        func_0x00010c0c0be0(uVar6);
        _objc_release(puVar1);
        _objc_destroyWeak(auStack_158);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_108);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 107d49a88; end: 107d49a9b;  */

void FUN_107d49a88(void)

{
  return;
}



/* Entry: 107d49a9c; end: 107d49aff;  */

void FUN_107d49a9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be83000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d49b00; end: 107d49ccb; -[SCUnifiedActionMenuPresenter _prominentActionFromPluginPosition:] */

void FUN_107d49b00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [8];
  undefined1 auStack_478 [8];
  undefined1 auStack_470 [8];
  undefined *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined *puStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_238;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar3 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar6 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar6);
  puVar5 = &uStack_1a0;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_190;
    do {
      lVar10 = 0;
      do {
        if (*plStack_190 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        puVar7 = *(undefined8 **)(lStack_198 + lVar10 * 8);
        puVar2 = puVar7;
        func_0x00010c104260();
        if (puVar2 == param_3) goto LAB_107d49c74;
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar5 = &uStack_1a0;
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_1d0;
    do {
      lVar10 = 0;
      puVar5 = puVar3;
      do {
        if (*plStack_1d0 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        puVar7 = *(undefined8 **)(lStack_1d8 + lVar10 * 8);
        puVar3 = puVar7;
        func_0x00010c104260();
        if (puVar3 == param_3) goto LAB_107d49c74;
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar6;
      puVar3 = &uStack_1e0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar7 = (undefined8 *)0x0;
  puVar5 = puVar3;
LAB_107d49c88:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = &uStack_3c0;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lVar9 = *(long *)(lVar6 + 0x58);
    _objc_retain(lVar9);
    puVar3 = &uStack_380;
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_370;
      do {
        lVar11 = 0;
        do {
          if (*plStack_370 != lVar10) {
            _objc_enumerationMutation(lVar9);
          }
          puVar8 = *(undefined8 **)(lStack_378 + lVar11 * 8);
          puVar7 = puVar8;
          func_0x00010c104260();
          if (puVar7 == puVar5) goto LAB_107d49e40;
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        puVar3 = &uStack_380;
        lVar1 = lVar9;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    lVar9 = *(long *)(lVar6 + 0x60);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_3b0;
      do {
        lVar10 = 0;
        puVar3 = puVar2;
        do {
          if (*plStack_3b0 != lVar6) {
            _objc_enumerationMutation(lVar9);
          }
          puVar8 = *(undefined8 **)(lStack_3b8 + lVar10 * 8);
          puVar7 = puVar8;
          func_0x00010c104260();
          if (puVar7 == puVar5) goto LAB_107d49e40;
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = lVar9;
        puVar2 = &uStack_3c0;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    puVar7 = (undefined8 *)0x0;
    puVar3 = puVar2;
LAB_107d49e84:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      _objc_retain(puVar3);
      puStack_438 = &uStack_440;
      uStack_440 = 0;
      uStack_430 = 0x2020000000;
      uStack_428 = 0;
      puVar5 = puVar3;
      func_0x00010bf0e020(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf0e020(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      puStack_468 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_460 = 0xc2000000;
      pcStack_458 = FUN_107d4a248;
      puStack_450 = &UNK_110a0a8a8;
      puStack_448 = &uStack_440;
      func_0x00010bf97b00(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010bf6e620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar7 = (undefined8 *)PTR_PTR_1126b10a0;
      puVar2 = puVar3;
      if (puVar5 == (undefined8 *)0x0) {
        func_0x00010bf0e020(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ec2a0(puVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf0e020(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bf6e620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e3c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      _objc_release(puVar5);
      _objc_release(puVar2);
      func_0x00010c160fc0(puVar7);
      _objc_initWeak(auStack_470,lVar9);
      _objc_initWeak(auStack_478,puVar7);
      _objc_copyWeak(auStack_488,auStack_470);
      _objc_copyWeak(auStack_480,auStack_478);
      _objc_retain(puVar3);
      func_0x00010bf1d200(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf155c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010bf15120();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ed60(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar5);
      puVar5 = puVar3;
      func_0x00010c260dc0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220340(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar5);
      func_0x00010c18c540(puVar7);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_480);
      _objc_destroyWeak(auStack_488);
      _objc_destroyWeak(auStack_478);
      _objc_destroyWeak(auStack_470);
      __Block_object_dispose(&uStack_440,8);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
LAB_107d49c74:
  func_0x00010c117d00();
  _objc_retainAutoreleasedReturnValue();
  goto LAB_107d49c88;
LAB_107d49e40:
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  puVar5 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar4);
  puVar7 = puVar8;
  if (((ulong)puVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  goto LAB_107d49e84;
}



/* Entry: 107d49ccc; end: 107d49ec7; -[SCUnifiedActionMenuPresenter _cellFromPluginPosition:] */

void FUN_107d49ccc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar3 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar7 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar7);
  puVar6 = &uStack_1a0;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_190;
    do {
      lVar11 = 0;
      do {
        if (*plStack_190 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        puVar9 = *(undefined **)(lStack_198 + lVar11 * 8);
        puVar8 = puVar9;
        func_0x00010c104260();
        if (puVar8 == param_3) goto LAB_107d49e40;
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar6 = &uStack_1a0;
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_1d0;
    do {
      lVar11 = 0;
      puVar6 = puVar3;
      do {
        if (*plStack_1d0 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        puVar9 = *(undefined **)(lStack_1d8 + lVar11 * 8);
        puVar8 = puVar9;
        func_0x00010c104260();
        if (puVar8 == param_3) goto LAB_107d49e40;
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar3 = &uStack_1e0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar8 = (undefined *)0x0;
  puVar6 = puVar3;
LAB_107d49e84:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puStack_258 = &uStack_260;
    uStack_260 = 0;
    uStack_250 = 0x2020000000;
    uStack_248 = 0;
    puVar3 = puVar6;
    func_0x00010bf0e020(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf0e020(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_107d4a248;
    puStack_270 = &UNK_110a0a8a8;
    puStack_268 = &uStack_260;
    func_0x00010bf97b00(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = PTR_PTR_1126b10a0;
    puVar4 = puVar6;
    if (puVar3 == (undefined8 *)0x0) {
      func_0x00010bf0e020(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec2a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf0e020(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf6e620(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e3c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010c160fc0(puVar8);
    _objc_initWeak(auStack_290,lVar7);
    _objc_initWeak(auStack_298,puVar8);
    _objc_copyWeak(auStack_2a8,auStack_290);
    _objc_copyWeak(auStack_2a0,auStack_298);
    _objc_retain(puVar6);
    func_0x00010bf1d200(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf155c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf15120();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ed60(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c260dc0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220340(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c18c540(puVar8);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_2a0);
    _objc_destroyWeak(auStack_2a8);
    _objc_destroyWeak(auStack_298);
    _objc_destroyWeak(auStack_290);
    __Block_object_dispose(&uStack_260,8);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
LAB_107d49e40:
  func_0x00010beeeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b10a0;
  _objc_opt_class(PTR_PTR_1126b10a0);
  puVar2 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar8);
  puVar8 = puVar9;
  if (((ulong)puVar2 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar9);
  goto LAB_107d49e84;
}



/* Entry: 107d49ec8; end: 107d4a247; -[SCUnifiedActionMenuPresenter _textCellFromModel:] */

void FUN_107d49ec8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar1 = param_3;
  func_0x00010bf0e020(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf0e020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107d4a248;
  puStack_90 = &UNK_110a0a8a8;
  puStack_88 = &uStack_80;
  func_0x00010bf97b00(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf6e620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126b10a0;
  lVar2 = param_3;
  if (lVar1 == 0) {
    func_0x00010bf0e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec2a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf0e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf6e620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e3c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  func_0x00010c160fc0(puVar4);
  _objc_initWeak(auStack_b0,param_1);
  _objc_initWeak(auStack_b8,puVar4);
  _objc_copyWeak(auStack_c8,auStack_b0);
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_retain(param_3);
  func_0x00010bf1d200(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf155c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf15120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ed60(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220340(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c18c540(puVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d4a248; end: 107d4a2db;  */

void FUN_107d4a248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_2);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_5 = 1;
  }
  return;
}



/* Entry: 107d4a2dc; end: 107d4a35f;  */

void FUN_107d4a2dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeecc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar4,param_2,lVar2,uVar3,lVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d4a360; end: 107d4a75f; -[SCUnifiedActionMenuPresenter _buttonCellFromModel:] */

void FUN_107d4a360(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_3;
  func_0x00010bf25680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b10a0;
  if ((int)lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010bf0e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0f40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_50,puVar3);
    _objc_copyWeak(auStack_98,auStack_48);
    _objc_copyWeak(auStack_90,auStack_50);
    _objc_retain(param_3);
    func_0x00010bf1d200(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf25680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      lVar1 = param_3;
      func_0x00010bf25680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8220(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar4);
      func_0x00010c2194c0(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(lVar1);
    }
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    puVar6 = auStack_98;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf0e020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cfc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_50,puVar3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107d4a760;
    puStack_70 = &UNK_110a0a8d8;
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x00010bf1d200(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    puVar6 = auStack_60;
  }
  _objc_destroyWeak(puVar6);
  _objc_destroyWeak(auStack_50);
  lVar1 = param_3;
  func_0x00010bf6f6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf6f6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c5c0(puVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf155c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf155c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf15120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ed60(puVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c160fc0(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d4a760; end: 107d4a867;  */

void FUN_107d4a760(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeecc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar4,param_2,lVar2,uVar3,lVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d4a868; end: 107d4aa77; -[SCUnifiedActionMenuPresenter _switchCellFromModel:] */

void FUN_107d4a868(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b10a0;
  lVar1 = param_3;
  func_0x00010bf0e020(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272c40(param_3);
  func_0x00010c265600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,puVar3);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_copyWeak(auStack_58,auStack_50);
  _objc_retain(param_3);
  func_0x00010bf1d200(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c272c40();
  if (lVar1 < 2) {
    if ((lVar1 != 0) && (lVar1 != 1)) goto LAB_107d4a9ec;
    func_0x00010c1fade0(puVar3);
  }
  else {
    if ((lVar1 != 2) && (lVar1 != 3)) goto LAB_107d4a9ec;
    func_0x00010c1fade0(puVar3);
  }
  func_0x00010c195460(puVar3);
LAB_107d4a9ec:
  func_0x00010c160fc0(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d4aa78; end: 107d4aafb;  */

void FUN_107d4aa78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeecc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar4,param_2,lVar2,uVar3,lVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d4aafc; end: 107d4ac6f; -[SCUnifiedActionMenuPresenter _selectionCellFromModel:] */

void FUN_107d4aafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b10a0;
  uVar1 = param_3;
  func_0x00010c087500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d660(param_3);
  func_0x00010c158900(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c160fc0(puVar2);
  _objc_initWeak(auStack_38,param_1);
  _objc_initWeak(auStack_40,puVar2);
  _objc_copyWeak(auStack_50,auStack_38);
  _objc_copyWeak(auStack_48,auStack_40);
  _objc_retain(param_3);
  func_0x00010bf1d200(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d4ac70; end: 107d4acf3;  */

void FUN_107d4ac70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeecc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar4,param_2,lVar2,uVar3,lVar2);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d4acf4; end: 107d4ad9b; -[SCUnifiedActionMenuPresenter _headerFromModel:] */

void FUN_107d4acf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d79d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ec80();
  func_0x00010c160fc0();
  func_0x00010c219b60(puVar1,param_2,1);
  func_0x00010c1aa200(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1aa2c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c161980(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c2226c0(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d4ad9c; end: 107d4aeeb; -[SCUnifiedActionMenuPresenter _footerFromModel:] */

void FUN_107d4ad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107d48fe4;
  uStack_40 = 0x107d48ff4;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0c0be0(param_3);
  func_0x00010c160fc0(puStack_58[5]);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d4aeec; end: 107d4b067;  */

void FUN_107d4aeec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b10a0;
  uVar5 = param_2;
  func_0x00010bf0e020(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_2);
  func_0x00010bf1d200(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 107d4b068; end: 107d4b107;  */

void FUN_107d4b068(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeecc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d4b108; end: 107d4b10b; -[SCUnifiedActionMenuPresenter actionSheetDidDismiss:] */

void FUN_107d4b108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDismissActionMenu_11255cea0);
  return;
}



/* Entry: 107d4b10c; end: 107d4b1ef; -[SCUnifiedActionMenuPresenter _onPresentationFinishWithCompletion:] */

void FUN_107d4b10c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eba1f8;
  uVar2 = 0;
  puVar3 = puVar5;
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b10a8;
  lVar4 = *(long *)(param_3 + 0x88);
  if (lVar4 != 0) {
    _objc_retain(param_6);
    _objc_retain(puVar3);
    _objc_retain(uVar2);
    _objc_retain(ppuVar1);
    func_0x00010c1312e0(lVar4);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  _objc_retain(param_6);
  _objc_retain(puVar3);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  _objc_alloc();
  func_0x00010c019f40();
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x88);
  *(undefined **)(param_3 + 0x88) = puVar5;
  _objc_release(uVar2);
  func_0x00010bdf1d40(param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + 0x88));
  if (*(long *)(param_3 + 0x70) != 0) {
    func_0x00010c1a76a0(*(undefined8 *)(param_3 + 0x88));
  }
  if (*(long *)(param_3 + 0x78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x88),PTR_s_setOnHeaderActionLabelTapped__1126523a8);
    return;
  }
  return;
}



/* Entry: 107d4b1f0; end: 107d4b353; -[SCUnifiedActionMenuPresenter _createActionSheetWithHeader:title:cells:footer:] */

void FUN_107d4b1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b10a8;
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c1312e0(lVar3);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c019f40();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar2);
  func_0x00010bdf1d40(param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010c1a76a0(*(undefined8 *)(param_1 + 0x88));
  }
  if (*(long *)(param_1 + 0x78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x88),PTR_s_setOnHeaderActionLabelTapped__1126523a8);
    return;
  }
  return;
}


