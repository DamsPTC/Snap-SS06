/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085059f4; end: 108505a7f;  */

void FUN_1085059f4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c23f8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c23f8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108505a80; end: 108505ab3;  */

undefined8 FUN_108505a80(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 108505ab4; end: 108505b0f;  */

undefined8 FUN_108505ab4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010bf9c800(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108505b10; end: 108505e1f; +[SCStoriesAsyncPostingInfo immutableObjectParse:bufferSize:] */

void FUN_108505b10(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar4 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar4);
  puVar5 = PTR_PTR_1126d9e08;
  _objc_alloc();
  lVar8 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar7 < 5) {
    puVar12 = (undefined *)0x0;
    uVar17 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar8))[2];
    if (uVar11 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar8 = -lVar8;
    uVar17 = 0;
    if (6 < uVar7) {
      uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 6);
      if (uVar11 != 0) {
        uVar17 = *(undefined8 *)((long)piVar1 + uVar11);
      }
      if (8 < uVar7) {
        uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 8);
        if (uVar11 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          uVar15 = (ulong)*(uint *)((long)piVar1 + uVar11);
          puVar2 = (uint *)((long)((long)piVar1 + uVar11) + uVar15);
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
          _objc_retainAutoreleasedReturnValue();
          if (*puVar2 != 0) {
            lVar8 = (long)param_3 + uVar15 + uVar11 + (ulong)uVar4 + 10;
            do {
              uVar11 = (ulong)*(uint *)(lVar8 + -6);
              puVar13 = PTR_PTR_1126d9e18;
              _objc_alloc(PTR_PTR_1126d9e18);
              lVar9 = (long)*(int *)(lVar8 + uVar11 + -6);
              lVar3 = lVar8 + (uVar11 - lVar9);
              uVar7 = *(ushort *)(lVar3 + -6);
              if (uVar7 < 5) {
                puVar14 = (undefined *)0x0;
                uVar16 = 0;
              }
              else {
                uVar15 = (ulong)*(ushort *)(lVar3 + -2);
                if (uVar15 == 0) {
                  puVar14 = (undefined *)0x0;
                }
                else {
                  lVar3 = lVar8 + uVar11 + uVar15;
                  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                      lVar3 + (ulong)*(uint *)(lVar3 + -6) + -2);
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = (long)*(int *)(lVar8 + uVar11 + -6);
                  uVar7 = *(ushort *)(lVar8 + (uVar11 - lVar9) + -6);
                }
                uVar16 = 0;
                if ((6 < uVar7) &&
                   (uVar15 = (ulong)*(ushort *)(lVar8 + (uVar11 - lVar9)), uVar15 != 0)) {
                  uVar16 = *(undefined8 *)(lVar8 + uVar11 + uVar15 + -6);
                }
              }
              func_0x00010c04d9a0(uVar16,puVar13,param_2,puVar14);
              _objc_release(puVar14);
              func_0x00010befa120(puVar6,param_2,puVar13);
              _objc_release(puVar13);
              puVar10 = (uint *)(lVar8 + -2);
              lVar8 = lVar8 + 4;
            } while (puVar10 != puVar2 + (ulong)*puVar2 + 1);
          }
          puVar13 = puVar6;
          func_0x00010bf51e00(puVar6);
          _objc_release(puVar6);
          lVar8 = -(long)*piVar1;
          uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        uVar16 = 0;
        if ((10 < uVar7) &&
           (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 10), uVar16 = 0, uVar11 != 0)) {
          uVar16 = *(undefined8 *)((long)piVar1 + uVar11);
        }
        goto LAB_108505d5c;
      }
    }
  }
  puVar13 = (undefined *)0x0;
  uVar16 = 0;
LAB_108505d5c:
  func_0x00010c0472a0(uVar17,uVar16,puVar5,param_2,puVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108505e20; end: 108505e43; +[SCStoriesAsyncPostingInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108505e20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108505e3c;
  auVar1._0_8_ = 0x108505e34;
  return auVar1;
}



/* Entry: 108505e44; end: 108505f63;  */

void FUN_108505e44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar3 = PTR_PTR_1126d9e10;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c23f8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ff60(param_3);
    lVar2 = param_3;
    uVar4 = param_1;
    func_0x00010c25a960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c800(param_3);
    FUN_108505f64(param_1,uVar4,puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108505f64; end: 108506047;  */

undefined1 *
FUN_108505f64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_48 = PTR_PTR_1126fcb00;
    lStack_50 = param_3;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_2;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 108506048; end: 1085060bb;  */

void FUN_108506048(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1085060bc();
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



/* Entry: 1085060bc; end: 108506453;  */

void FUN_1085060bc(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c23f8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar5,&UNK_10f4a0d81);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c23f8e0(param_2);
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
            _objc_opt_class(PTR_PTR_1126d9e08);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_1085063a0;
            puVar5 = PTR_PTR_1126d9e10;
            _objc_alloc(PTR_PTR_1126d9e10);
            puVar2 = puVar3;
            func_0x00010c23f8e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c24ff60(puVar3);
            puVar4 = puVar3;
            uVar6 = param_1;
            func_0x00010c25a960(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9c800(puVar3);
            FUN_108505f64(param_1,uVar6,puVar5,puVar1,puVar2,puVar4);
            param_2 = puVar3;
            goto LAB_1085061c4;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d9e08);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d9e10;
        _objc_alloc(PTR_PTR_1126d9e10);
        puVar2 = puVar3;
        func_0x00010c23f8e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24ff60(puVar3);
        puVar4 = puVar3;
        uVar6 = param_1;
        func_0x00010c25a960(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9c800(puVar3);
        FUN_108505f64(param_1,uVar6,puVar5,puVar1,puVar2,puVar4);
        param_2 = puVar3;
LAB_1085061c4:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1085063a8;
      }
LAB_1085063a0:
      param_2 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1085063a8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108506454; end: 1085064c7;  */

void FUN_108506454(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1085060bc();
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



/* Entry: 1085064c8; end: 108506533;  */

void FUN_1085064c8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e08;
    _objc_alloc(PTR_PTR_1126d9e08);
    func_0x00010c0472a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108506534; end: 108506563; -[SCStoriesAsyncPostingInfoChangeRequest .cxx_destruct] */

void FUN_108506534(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108506564; end: 10850656f; -[SCStoriesAsyncPostingInfoChangeRequest table] */

undefined * FUN_108506564(void)

{
  return &UNK_10f4a0d67;
}



/* Entry: 108506570; end: 1085065b7; -[SCStoriesAsyncPostingInfoChangeRequest createTableWithSQLite:] */

void FUN_108506570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df32a24,0x99,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1085065b8; end: 10850693f; -[SCStoriesAsyncPostingInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1085065b8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1085064c8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108506940(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a0e06);
    if (lVar6 == 0) goto LAB_1085068dc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1085068dc;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e08);
    func_0x00010c21c9a0(puVar7);
LAB_1085068c4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a0dd1);
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
            _objc_opt_class(PTR_PTR_1126d9e08);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085068e8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1085068e8;
    }
    FUN_1085064c8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108506940(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a0e51);
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
        _objc_opt_class(PTR_PTR_1126d9e08);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1085068c4;
      }
    }
LAB_1085068dc:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1085068e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108506940; end: 108506e57;  */

ulong FUN_108506940(ulong param_1,ulong param_2)

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
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined ***pppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_120 = &PTR_FUN_110a50520;
  pcStack_118 = FUN_108506e58;
  pppuStack_108 = &ppuStack_120;
  uVar9 = param_2;
  func_0x00010c25a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar19 = 0;
  _objc_retain(uVar9);
  uVar5 = uVar9;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar16 = (undefined4 *)0x0;
  puVar18 = (undefined4 *)0x0;
  if (uVar5 != 0) {
    puVar13 = (undefined4 *)0x0;
    do {
      uVar12 = 0;
      puVar17 = puVar16;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(uVar9);
        }
        uVar14 = *(undefined8 *)(uVar12 * 8);
        _objc_retain(uVar14);
        _objc_retain(uVar14);
        uStack_128 = uVar14;
        if (pppuStack_108 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_108506d68;
        }
        pppuVar6 = pppuStack_108;
        (*(code *)(*pppuStack_108)[6])(pppuStack_108,param_1,&uStack_128);
        _objc_release(uStack_128);
        if (puVar18 < puVar13) {
          *puVar18 = (int)pppuVar6;
          puVar16 = puVar17;
        }
        else {
          lVar15 = (long)puVar18 - (long)puVar17;
          uVar8 = (lVar15 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_108507074();
LAB_108506d68:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x108506d6c);
            (*pcVar4)();
          }
          uVar11 = (long)puVar13 - (long)puVar17 >> 1;
          if (uVar11 <= uVar8) {
            uVar11 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar13 - (long)puVar17)) {
            uVar11 = 0x3fffffffffffffff;
          }
          if (uVar11 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_108506d68;
          }
          lVar7 = uVar11 << 2;
          __Znwm();
          puVar18 = (undefined4 *)(lVar7 + lVar15);
          puVar13 = (undefined4 *)(lVar7 + uVar11 * 4);
          puVar16 = puVar18 + -(lVar15 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar16,puVar17,lVar15);
          if (puVar17 != (undefined4 *)0x0) {
            __ZdlPv(puVar17);
          }
        }
        puVar18 = puVar18 + 1;
        _objc_release(uVar14);
        uVar12 = uVar12 + 1;
        puVar17 = puVar16;
      } while (uVar5 != uVar12);
      uVar5 = uVar9;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar9);
  _objc_release(uVar9);
  _objc_release(uVar9);
  if (pppuStack_108 == &ppuStack_120) {
    lVar10 = 0x20;
  }
  else {
    if (pppuStack_108 == (undefined ***)0x0) goto LAB_108506b84;
    lVar10 = 0x28;
  }
  (**(code **)((long)*pppuStack_108 + lVar10))();
LAB_108506b84:
  uVar5 = param_2;
  func_0x00010c23f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_108506f44(param_1,uVar5);
  func_0x00010c24ff60(param_2);
  uVar9 = (long)puVar18 - (long)puVar16;
  puVar13 = (undefined4 *)&UNK_10df32ca2;
  if (uVar9 != 0) {
    puVar13 = puVar16;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,uVar9,4);
  func_0x000107c27dc8(param_1,uVar9,4);
  if (puVar16 != puVar18) {
    lVar10 = (long)uVar9 >> 2;
    do {
      iVar3 = puVar13[lVar10 + -1];
      func_0x000107c27db4(param_1,4);
      func_0x000107c27dcc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar8 = param_1;
  func_0x000107c27dcc(param_1,uVar9 >> 2);
  func_0x00010bf9c800(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x000107c27db8(param_1,10);
  func_0x000107c27db8(uVar19,0,param_1,6);
  if ((int)uVar8 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,8,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar8) + 4,0);
  }
  func_0x000107c27ddc(param_1,4,uVar12 & 0xffffffff);
  uVar9 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x000107c27dc0(param_1,uVar9);
  _objc_release(uVar5);
  if (puVar16 != (undefined4 *)0x0) {
    __ZdlPv(puVar16);
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (puVar16 != (undefined4 *)0x0) {
      __ZdlPv(puVar16);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar9);
    uVar12 = uVar9;
    func_0x00010c259cc0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_108506f44(uVar5,uVar12);
    func_0x00010c105700(uVar9);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x000107c27db8(uVar5,6);
    func_0x000107c27ddc(uVar5,4,uVar8 & 0xffffffff);
    func_0x000107c27dc0(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar12);
    _objc_release(uVar9);
    return uVar5;
  }
  return param_1;
}



/* Entry: 108506e58; end: 108506f43;  */

ulong FUN_108506e58(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108506f44(param_2,uVar4);
  func_0x00010c105700(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,6);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108506f44; end: 108507073;  */

undefined8 FUN_108506f44(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108507024;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108507024;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108506fe4;
    param_1 = 0;
  }
  else {
LAB_108506fe4:
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
LAB_108507024:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108507074; end: 108507087;  */

void FUN_108507074(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 108507088; end: 10850708f;  */

void FUN_108507088(void)

{
  return;
}



/* Entry: 108507090; end: 1085070c3;  */

void FUN_108507090(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a50520;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1085070c4; end: 108507103;  */

void FUN_1085070c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a50520;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108507104; end: 10850713f;  */

long FUN_108507104(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a50590);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108507140; end: 10850714b;  */

undefined ** FUN_108507140(void)

{
  return &PTR_DAT_110a50590;
}



/* Entry: 10850714c; end: 1085071d7;  */

void FUN_10850714c(long param_1,undefined1 *param_2)

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



/* Entry: 1085071d8; end: 1085071fb; +[SCStoriesCustomStoriesSyncToken objectClassFunctionPointer] */

undefined1  [16] FUN_1085071d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1085071f4;
  auVar1._0_8_ = 0x1085071ec;
  return auVar1;
}



/* Entry: 1085071fc; end: 1085072f7;  */

void FUN_1085071fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126d9000;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c2667e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1085072f8(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085072f8; end: 1085073c3;  */

undefined1 * FUN_1085072f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fcb08;
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



/* Entry: 1085073c4; end: 108507437;  */

void FUN_1085073c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108507438();
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



/* Entry: 108507438; end: 10850778f;  */

void FUN_108507438(undefined *param_1)

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
        func_0x000107c310d8(puVar5,&UNK_10f4a0ec8);
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
            _objc_opt_class(PTR_PTR_1126d8ff8);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_1085076e0;
            puVar5 = PTR_PTR_1126d9000;
            _objc_alloc(PTR_PTR_1126d9000);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c2667e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_1085072f8(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_108507520;
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
      _objc_opt_class(PTR_PTR_1126d8ff8);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d9000;
        _objc_alloc(PTR_PTR_1126d9000);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2667e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_1085072f8(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_108507520:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1085076e8;
      }
LAB_1085076e0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1085076e8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108507790; end: 1085077ef;  */

void FUN_108507790(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8ff8;
    _objc_alloc(PTR_PTR_1126d8ff8);
    func_0x00010c05bca0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085077f0; end: 10850781f; -[SCStoriesCustomStoriesSyncTokenChangeRequest .cxx_destruct] */

void FUN_1085077f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108507820; end: 10850782b; -[SCStoriesCustomStoriesSyncTokenChangeRequest table] */

undefined * FUN_108507820(void)

{
  return &UNK_10f4a0ea6;
}



/* Entry: 10850782c; end: 108507873; -[SCStoriesCustomStoriesSyncTokenChangeRequest createTableWithSQLite:] */

void FUN_10850782c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df32ca3,0x8f,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108507874; end: 108507bfb; -[SCStoriesCustomStoriesSyncTokenChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108507874(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108507790(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108507bfc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a0f54);
    if (lVar6 == 0) goto LAB_108507b98;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108507b98;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8ff8);
    func_0x00010c21c9a0(puVar7);
LAB_108507b80:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a0f17);
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
            _objc_opt_class(PTR_PTR_1126d8ff8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108507ba4;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108507ba4;
    }
    FUN_108507790(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108507bfc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a0f9e);
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
        _objc_opt_class(PTR_PTR_1126d8ff8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108507b80;
      }
    }
LAB_108507b98:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108507ba4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108507bfc; end: 108507e47;  */

ulong FUN_108507bfc(ulong param_1,char *param_2)

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
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_108507cfc;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_1,pcVar5,pcVar6);
    goto LAB_108507cfc;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_108507cbc;
    uVar9 = 0;
  }
  else {
LAB_108507cbc:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x000107c27df0(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_108507cfc:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c2667e0();
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
    func_0x000107c27df8(param_1,pcVar6,pcVar7);
  }
  _objc_release(pcVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,6,uVar10 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar9 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108507e48; end: 108507eab;  */

undefined ** FUN_108507e48(void)

{
  int iVar1;
  
  if ((bRam0000000113827aa8 & 1) == 0) {
    iVar1 = 0x13827aa8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263768,0x100000000);
      ___cxa_guard_release(0x113827aa8);
    }
  }
  return &PTR_PTR_113263768;
}



/* Entry: 108507eac; end: 108507f33;  */

void FUN_108507eac(uint *param_1,undefined1 *param_2)

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



/* Entry: 108507f34; end: 108507fbf;  */

void FUN_108507f34(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c11ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108507fc0; end: 108508077;  */

undefined8 FUN_108507fc0(void)

{
  int iVar1;
  
  if ((bRam0000000113827b20 & 1) == 0) {
    iVar1 = 0x13827b20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827ab8 = 0xe;
      puRam0000000113827ac0 = &UNK_10f4a1000;
      uRam0000000113827ac8 = 0x100;
      pcRam0000000113827ad0 = FUN_108508078;
      pcRam0000000113827ad8 = FUN_1085080b0;
      ppuRam0000000113827ab0 = &PTR_DAT_110a4fdb0;
      uRam0000000113827af0 = 0;
      uRam0000000113827ae8 = 0;
      uRam0000000113827b00 = 0;
      uRam0000000113827af8 = 0;
      uRam0000000113827b10 = 0;
      uRam0000000113827b08 = 0;
      uRam0000000113827b18 = 0;
      ___cxa_atexit(0x1084dc618,0x113827ab0,0x100000000);
      ___cxa_guard_release(0x113827b20);
    }
  }
  return 0x113827ab0;
}



/* Entry: 108508078; end: 1085080af;  */

undefined4 FUN_108508078(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1085080b0; end: 108508103;  */

undefined8 FUN_1085080b0(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108508104; end: 108508143;  */

bool FUN_108508104(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 108508144; end: 108508197;  */

undefined8 FUN_108508144(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf60900(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108508198; end: 1085081fb;  */

undefined ** FUN_108508198(void)

{
  int iVar1;
  
  if ((bRam0000000113827ba0 & 1) == 0) {
    iVar1 = 0x13827ba0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1132637d8,0x100000000);
      ___cxa_guard_release(0x113827ba0);
    }
  }
  return &PTR_PTR_1132637d8;
}



/* Entry: 1085081fc; end: 1085082c3;  */

void FUN_1085081fc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  ushort *puVar4;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar3 == 0)) ||
      (puVar2 = (uint *)((long)piVar1 + uVar3), piVar1 = (int *)((long)puVar2 + (ulong)*puVar2),
      puVar4 = (ushort *)((long)piVar1 - (long)*piVar1), *puVar4 < 5)) || (puVar4[2] == 0)) {
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



/* Entry: 1085082c4; end: 108508383;  */

void FUN_1085082c4(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf5a820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108508384; end: 1085083e7;  */

undefined ** FUN_108508384(void)

{
  int iVar1;
  
  if ((bRam0000000113827ba8 & 1) == 0) {
    iVar1 = 0x13827ba8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263848,0x100000000);
      ___cxa_guard_release(0x113827ba8);
    }
  }
  return &PTR_PTR_113263848;
}



/* Entry: 1085083e8; end: 1085084d7;  */

void FUN_1085083e8(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  lVar2 = (long)param_1 + (ulong)uVar1;
  func_0x000108508868();
  if (lVar2 != 0) {
    piVar3 = (int *)((long)param_1 + (ulong)uVar1);
    func_0x000108508868();
    if ((0xc < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (((ushort *)((long)piVar3 - (long)*piVar3))[6] != 0)) {
      *param_2 = 0;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000108508868();
      func_0x000108508868();
      func_0x00010bffa1c0(puVar4);
      goto LAB_108508488;
    }
  }
  *param_2 = 1;
LAB_108508488:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085084d8; end: 1085085cf;  */

void FUN_1085084d8(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bfa2680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0a5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ecf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfa2680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0a5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ecf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1085085d0; end: 108508633;  */

undefined ** FUN_1085085d0(void)

{
  int iVar1;
  
  if ((bRam0000000113827bb0 & 1) == 0) {
    iVar1 = 0x13827bb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1132638b8,0x100000000);
      ___cxa_guard_release(0x113827bb0);
    }
  }
  return &PTR_PTR_1132638b8;
}



/* Entry: 108508634; end: 108508723;  */

void FUN_108508634(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  lVar2 = (long)param_1 + (ulong)uVar1;
  func_0x0001085088b4();
  if (lVar2 != 0) {
    piVar3 = (int *)((long)param_1 + (ulong)uVar1);
    func_0x0001085088b4();
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (((ushort *)((long)piVar3 - (long)*piVar3))[2] != 0)) {
      *param_2 = 0;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x0001085088b4();
      func_0x0001085088b4();
      func_0x00010bffa1c0(puVar4);
      goto LAB_1085086d4;
    }
  }
  *param_2 = 1;
LAB_1085086d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108508724; end: 10850881b;  */

void FUN_108508724(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bfa2680();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0a9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22d640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfa2680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0a9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10850881c; end: 10850894b;  */

long FUN_10850881c(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((0x30 < *puVar2) && ((ulong)puVar2[0x18] != 0)) &&
      (0x32 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[0x18]) == '\x01')) &&
     ((ulong)puVar2[0x19] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[0x19]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 10850894c; end: 1085093fb; +[SCStoriesCustomStoryMetadata immutableObjectParse:bufferSize:] */

void FUN_10850894c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_90;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b47a0;
  _objc_alloc();
  lVar14 = (long)*piVar1;
  uVar12 = *(ushort *)((long)piVar1 - lVar14);
  if (uVar12 < 5) {
    puVar25 = (undefined *)0x0;
LAB_108508a14:
    iVar13 = (int)lVar14;
    puStack_a8 = (undefined *)0x0;
LAB_108508a18:
    puStack_90 = (undefined *)0x0;
  }
  else {
    if (((ushort *)((long)piVar1 - lVar14))[2] == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)*piVar1;
      uVar12 = *(ushort *)((long)piVar1 - lVar14);
    }
    lVar18 = -lVar14;
    if ((uVar12 < 7) || (uVar12 < 0xb)) goto LAB_108508a14;
    if (*(short *)((long)piVar1 + lVar18 + 10) == 0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puStack_a8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)*piVar1;
      lVar18 = -lVar14;
      uVar12 = *(ushort *)((long)piVar1 - lVar14);
    }
    iVar13 = (int)lVar14;
    if ((uVar12 < 0x11) || (uVar17 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x10), uVar17 == 0))
    goto LAB_108508a18;
    puVar24 = (uint *)((long)piVar1 + uVar17);
    uVar2 = *puVar24;
    puStack_90 = PTR_PTR_1126d8f98;
    _objc_alloc();
    piVar7 = (int *)((long)puVar24 + (ulong)uVar2);
    lVar14 = (long)*piVar7;
    uVar12 = *(ushort *)((long)piVar7 - lVar14);
    if (uVar12 < 5) {
      puVar19 = (undefined *)0x0;
      uVar26 = 0;
    }
    else {
      if (((ushort *)((long)piVar7 - lVar14))[2] == 0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = (long)*piVar7;
        uVar12 = *(ushort *)((long)piVar7 - lVar14);
      }
      uVar26 = 0;
      if ((10 < uVar12) && (uVar17 = (ulong)*(ushort *)((long)piVar7 + (10 - lVar14)), uVar17 != 0))
      {
        uVar26 = *(undefined8 *)((long)piVar7 + uVar17);
      }
    }
    func_0x00010c006aa0(uVar26);
    _objc_release(puVar19);
    iVar13 = *piVar1;
  }
  uVar12 = *(ushort *)((long)piVar1 - (long)iVar13);
  if ((uVar12 < 0x15) || (uVar12 < 0x17)) {
    puStack_b0 = (undefined *)0x0;
LAB_108508b80:
    lVar14 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar1 - (long)iVar13))[0xb];
    if (uVar17 == 0) {
      puStack_b0 = (undefined *)0x0;
      lVar14 = (long)iVar13;
    }
    else {
      puVar22 = (uint *)((long)piVar1 + uVar17);
      puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
      puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar22 + 1;
      if (*puVar22 != 0) {
        do {
          uVar2 = *puVar24;
          puVar20 = PTR_PTR_1126d8fc8;
          _objc_alloc(PTR_PTR_1126d8fc8);
          lVar14 = (ulong)uVar2 - (long)*(int *)((long)puVar24 + (ulong)uVar2);
          if ((*(ushort *)((long)puVar24 + lVar14) < 5) ||
             (*(short *)((long)puVar24 + lVar14 + 4) == 0)) {
            puVar21 = (undefined *)0x0;
          }
          else {
            puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c05ac00(puVar20);
          _objc_release(puVar21);
          func_0x00010befa120(puVar19);
          _objc_release(puVar20);
          puVar24 = puVar24 + 1;
        } while (puVar24 != puVar22 + 1 + *puVar22);
      }
      puStack_b0 = puVar19;
      func_0x00010bf51e00();
      _objc_release(puVar19);
      lVar14 = (long)*piVar1;
      uVar12 = *(ushort *)((long)piVar1 - lVar14);
    }
    if ((uVar12 < 0x19) ||
       (uVar17 = (ulong)*(ushort *)((long)piVar1 + (0x18 - lVar14)), uVar17 == 0))
    goto LAB_108508b80;
    puVar24 = (uint *)((long)piVar1 + uVar17);
    lVar14 = (long)puVar24 + (ulong)*puVar24;
  }
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar17 == 0)) {
    lVar18 = 0;
  }
  else {
    puVar24 = (uint *)((long)piVar1 + uVar17);
    lVar18 = (long)puVar24 + (ulong)*puVar24;
  }
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)*piVar1;
  uVar12 = *(ushort *)((long)piVar1 - lVar15);
  if ((uVar12 < 0x1d) || (uVar12 < 0x1f)) {
    puVar19 = (undefined *)0x0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar1 - lVar15))[0xf];
    if (uVar17 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + uVar17);
      uVar2 = *puVar24;
      puVar19 = PTR_PTR_1126d9e30;
      _objc_alloc();
      piVar7 = (int *)((long)puVar24 + (ulong)uVar2);
      puVar16 = (ushort *)((long)piVar7 - (long)*piVar7);
      uVar12 = *puVar16;
      if (uVar12 < 7) {
        puVar20 = (undefined *)0x0;
        uVar27 = 0;
        uVar26 = 0;
        uVar28 = 0;
      }
      else {
        uVar27 = 0;
        uVar26 = 0;
        if ((ulong)puVar16[3] != 0) {
          uVar26 = *(undefined8 *)((long)piVar7 + (ulong)puVar16[3]);
        }
        if (uVar12 < 9) {
          puVar20 = (undefined *)0x0;
          uVar28 = 0;
        }
        else {
          uVar28 = 0;
          if ((ulong)puVar16[4] != 0) {
            uVar27 = *(undefined8 *)((long)piVar7 + (ulong)puVar16[4]);
          }
          if (10 < uVar12) {
            if ((ulong)puVar16[5] != 0) {
              uVar28 = *(undefined8 *)((long)piVar7 + (ulong)puVar16[5]);
            }
            if ((0xc < uVar12) && ((ulong)puVar16[6] != 0)) {
              puVar24 = (uint *)((long)piVar7 + (ulong)puVar16[6]);
              puVar24 = (uint *)((long)puVar24 + (ulong)*puVar24);
              puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar24 + 1;
              if (*puVar24 != 0) {
                do {
                  puVar23 = puVar22 + 2;
                  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df720(*(undefined8 *)puVar22,PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar21);
                  _objc_release(puVar20);
                  puVar22 = puVar23;
                } while (puVar23 != puVar24 + 1 + (ulong)*puVar24 * 2);
              }
              puVar20 = puVar21;
              func_0x00010bf51e00(puVar21);
              _objc_release(puVar21);
              goto LAB_108509194;
            }
          }
          puVar20 = (undefined *)0x0;
        }
      }
LAB_108509194:
      func_0x00010c02c900(uVar26,uVar27,uVar28);
      _objc_release(puVar20);
      lVar15 = (long)*piVar1;
      uVar12 = *(ushort *)((long)piVar1 - lVar15);
    }
    if ((((0x20 < uVar12) && (0x22 < uVar12)) && (0x26 < uVar12)) &&
       ((0x28 < uVar12 && (uVar17 = (ulong)*(ushort *)((long)piVar1 + (0x28 - lVar15)), uVar17 != 0)
        ))) {
      puVar24 = (uint *)((long)piVar1 + uVar17);
      lVar15 = (long)puVar24 + (ulong)*puVar24;
      goto LAB_108508d54;
    }
  }
  lVar15 = 0;
LAB_108508d54:
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2b) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x15], uVar17 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar24 = (uint *)((long)piVar1 + uVar17);
    lVar4 = (long)puVar24 + (ulong)*puVar24;
  }
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2d) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x16], uVar17 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar24 = (uint *)((long)piVar1 + uVar17);
    lVar5 = (long)puVar24 + (ulong)*puVar24;
  }
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2f) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar17 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar24 = (uint *)((long)piVar1 + uVar17);
    lVar6 = (long)puVar24 + (ulong)*puVar24;
  }
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  piVar7 = piVar1;
  FUN_10850881c();
  piVar8 = piVar1;
  func_0x000108508868(piVar1);
  piVar9 = piVar1;
  func_0x0001085088b4(piVar1);
  piVar10 = piVar1;
  func_0x000108508900(piVar1);
  FUN_10850cc44(piVar7,piVar8,piVar9,piVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar16 < 0x35) {
    lVar11 = 0;
    uVar26 = 0;
  }
  else {
    if ((ulong)puVar16[0x1a] == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = *(undefined8 *)((long)piVar1 + (ulong)puVar16[0x1a]);
    }
    if ((*puVar16 < 0x37) || ((ulong)puVar16[0x1b] == 0)) {
      lVar11 = 0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + (ulong)puVar16[0x1b]);
      lVar11 = (long)puVar24 + (ulong)*puVar24;
    }
  }
  FUN_10850cb58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bf60(uVar26);
  _objc_release(lVar11);
  _objc_release(piVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(lVar14);
  _objc_release(puStack_b0);
  _objc_release(puStack_90);
  _objc_release(puStack_a8);
  _objc_release(puVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085093fc; end: 10850940f; +[SCStoriesCustomStoryMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_1085093fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108509494;
  auVar1._0_8_ = FUN_108509410;
  return auVar1;
}



/* Entry: 108509410; end: 108509493;  */

void FUN_108509410(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf6389e8;
  _strcmp(&DAT_10f6389e8,param_1);
  if (iVar1 != 0) {
    iVar1 = 0xf4a1018;
    _strcmp(&DAT_10f4a1018,param_1);
    if (iVar1 != 0) {
      iVar1 = 0xf4a10be;
      _strcmp(&DAT_10f4a10be,param_1);
      if (iVar1 != 0) {
        _strcmp(&DAT_10f4a10d1,param_1);
      }
    }
  }
  return;
}



/* Entry: 108509494; end: 108509683;  */

bool FUN_108509494(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 < 2) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        return false;
      }
      func_0x000107c310d8(param_2,&UNK_10f4a1138);
      _sqlite3_bind_int64();
      if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar5 != 0)) {
        puVar2 = (uint *)((long)piVar1 + uVar5);
        piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
        if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 != 0)) {
          puVar2 = (uint *)((long)piVar1 + uVar5);
          puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
          _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
          goto LAB_108509664;
        }
      }
      _sqlite3_bind_null(param_2,2);
      goto LAB_108509664;
    }
    func_0x000107c310d8(param_2,&UNK_10f4a10e5);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0))
    goto LAB_108509644;
LAB_1085095ec:
    uVar4 = *(uint *)((long)piVar1 + uVar5);
  }
  else if (param_1 == 2) {
    func_0x000107c310d8(param_2,&UNK_10f4a11b9);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar5 == 0))
    goto LAB_108509644;
    uVar4 = (uint)(*(char *)((long)piVar1 + uVar5) != '\0');
  }
  else {
    if (param_1 != 3) {
      return false;
    }
    func_0x000107c310d8(param_2,&UNK_10f4a1228);
    _sqlite3_bind_int64();
    if ((0x3a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x1d], uVar5 != 0))
    goto LAB_1085095ec;
LAB_108509644:
    uVar4 = 0;
  }
  _sqlite3_bind_int64(param_2,2,uVar4);
LAB_108509664:
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 108509684; end: 108509a37;  */

void FUN_108509684(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar17 = PTR_PTR_1126d8f60;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c27dd80();
    uVar3 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf5a820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf60900();
    uVar6 = param_3;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c1057e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c29ef80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c075620();
    uVar10 = param_3;
    func_0x00010c246f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf608e0();
    func_0x00010bf608c0();
    func_0x00010c298be0();
    uVar11 = param_3;
    func_0x00010c0d02e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010bf1d8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_3;
    func_0x00010bf1d820();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    func_0x00010bf1d840();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    func_0x00010bfa2680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c085be0(param_3);
    uVar16 = param_3;
    func_0x00010bf15880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078420();
    func_0x00010c1143e0();
    FUN_108509a38(param_1,puVar17,0xffffffffffffffff,uVar1,uVar2,uVar3,uVar4,uVar5 & 0xffffffff,
                  uVar6,uVar7,uVar8,(char)uVar9);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  *(undefined4 *)(puVar17 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 108509a38; end: 108509e23;  */

long * FUN_108509a38(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,undefined1 param_8,long param_9,long param_10,long param_11,
                    undefined1 param_12,undefined4 param_13,long param_14,undefined4 param_15,
                    undefined4 param_16,long param_17,long param_18,long param_19,long param_20,
                    long param_21,long param_22,long param_23,undefined1 param_24,
                    undefined4 param_25,long param_26)

{
  long lVar1;
  long *plVar2;
  long lStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  if (param_2 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    puStack_80 = PTR_PTR_1126fcb10;
    plVar2 = &lStack_88;
    lStack_88 = param_2;
    _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = param_3;
      _objc_retain(param_4);
      lVar1 = plVar2[4];
      plVar2[4] = param_4;
      _objc_release(lVar1);
      plVar2[5] = param_5;
      _objc_retain(param_6);
      lVar1 = plVar2[6];
      plVar2[6] = param_6;
      _objc_release(lVar1);
      _objc_retain(param_7);
      lVar1 = plVar2[7];
      plVar2[7] = param_7;
      _objc_release(lVar1);
      *(undefined1 *)((long)plVar2 + 0x14) = param_8;
      _objc_retain(param_9);
      lVar1 = plVar2[8];
      plVar2[8] = param_9;
      _objc_release(lVar1);
      _objc_retain(param_10);
      lVar1 = plVar2[9];
      plVar2[9] = param_10;
      _objc_release(lVar1);
      _objc_retain(param_11);
      lVar1 = plVar2[10];
      plVar2[10] = param_11;
      _objc_release(lVar1);
      *(undefined1 *)((long)plVar2 + 0x15) = param_12;
      _objc_retain(param_14);
      lVar1 = plVar2[0xb];
      plVar2[0xb] = param_14;
      _objc_release(lVar1);
      *(undefined1 *)((long)plVar2 + 0x16) = (undefined1)param_15;
      *(undefined1 *)((long)plVar2 + 0x17) = param_15._1_1_;
      plVar2[0xc] = param_17;
      _objc_retain(param_18);
      lVar1 = plVar2[0xd];
      plVar2[0xd] = param_18;
      _objc_release(lVar1);
      _objc_retain(param_19);
      lVar1 = plVar2[0xe];
      plVar2[0xe] = param_19;
      _objc_release(lVar1);
      _objc_retain(param_20);
      lVar1 = plVar2[0xf];
      plVar2[0xf] = param_20;
      _objc_release(lVar1);
      _objc_retain(param_21);
      lVar1 = plVar2[0x10];
      plVar2[0x10] = param_21;
      _objc_release(lVar1);
      _objc_retain(param_22);
      lVar1 = plVar2[0x11];
      plVar2[0x11] = param_22;
      _objc_release(lVar1);
      plVar2[0x12] = param_1;
      _objc_retain(param_23);
      lVar1 = plVar2[0x13];
      plVar2[0x13] = param_23;
      _objc_release(lVar1);
      *(undefined1 *)(plVar2 + 3) = param_24;
      plVar2[0x14] = param_26;
    }
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return plVar2;
}



/* Entry: 108509e24; end: 108509e97;  */

void FUN_108509e24(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108509e98();
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



/* Entry: 108509e98; end: 10850a65b;  */

void FUN_108509e98(undefined8 param_1,undefined *param_2)

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
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar9,&UNK_10f4a1299);
        if (puVar9 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c11ac00(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar9,1,puVar2,0xffffffff,0xffffffffffffffff);
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
            _objc_opt_class(PTR_PTR_1126b47a0);
            _sqlite3_column_blob(puVar9,1);
            _sqlite3_column_bytes(puVar9,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar9);
            if (puVar3 == (undefined *)0x0) goto LAB_10850a4c0;
            puVar9 = PTR_PTR_1126d8f60;
            _objc_alloc();
            puStack_80 = puVar3;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010c27dd80();
            puStack_88 = puVar3;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            puStack_90 = puVar3;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf60900(puVar3);
            puStack_98 = puVar3;
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            puStack_a0 = puVar3;
            func_0x00010c1057e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_a8 = puVar3;
            func_0x00010c29ef80();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c075620();
            puStack_b0 = puVar3;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf608e0();
            func_0x00010bf608c0();
            func_0x00010c298be0();
            puStack_b8 = puVar3;
            func_0x00010c0d02e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_c0 = puVar3;
            func_0x00010bf1d8c0();
            _objc_retainAutoreleasedReturnValue();
            puStack_c8 = puVar3;
            func_0x00010bf1d820();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf1d840();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bfa2680();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c085be0(puVar3);
            puVar8 = puVar3;
            func_0x00010bf15880();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c078420();
            func_0x00010c1143e0();
            FUN_108509a38(param_1,puVar9,puVar1,puStack_80,puVar2,puStack_88,puStack_90,puVar4,
                          puStack_98,puStack_a0,puStack_a8,(char)puVar5);
            goto LAB_10850a11c;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b47a0);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126d8f60;
        _objc_alloc();
        puStack_80 = puVar3;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c27dd80();
        puStack_88 = puVar3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar3;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf60900();
        puStack_98 = puVar3;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar3;
        func_0x00010c1057e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = puVar3;
        func_0x00010c29ef80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c075620();
        puStack_b0 = puVar3;
        func_0x00010c246f40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf608e0();
        func_0x00010bf608c0();
        func_0x00010c298be0();
        puStack_b8 = puVar3;
        func_0x00010c0d02e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = puVar3;
        func_0x00010bf1d8c0();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puVar3;
        func_0x00010bf1d820();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf1d840();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c085be0(puVar3);
        puVar8 = puVar3;
        func_0x00010bf15880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078420();
        func_0x00010c1143e0();
        FUN_108509a38(param_1,puVar9,puVar1,puStack_80,puVar2,puStack_88,puStack_90,
                      (ulong)puVar4 & 0xffffffff,puStack_98,puStack_a0,puStack_a8,(char)puVar5);
LAB_10850a11c:
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puStack_c8);
        _objc_release(puStack_c0);
        _objc_release(puStack_b8);
        _objc_release(puStack_b0);
        _objc_release(puStack_a8);
        _objc_release(puStack_a0);
        _objc_release(puStack_98);
        _objc_release(puStack_90);
        _objc_release(puStack_88);
        _objc_release(puStack_80);
        param_2 = puVar3;
        goto LAB_10850a4c8;
      }
LAB_10850a4c0:
      param_2 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10850a4c8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10850a65c; end: 10850a6cf;  */

void FUN_10850a65c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108509e98();
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



/* Entry: 10850a6d0; end: 10850aa7b;  */

void FUN_10850a6d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8f60;
  FUN_108509e24(PTR_PTR_1126d8f60,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar3 = PTR_PTR_1126d8f60;
    FUN_108509684(PTR_PTR_1126d8f60,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c27dd80();
    *(undefined8 *)(puVar1 + 0x28) = uVar2;
    uVar2 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf5a820(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf60900();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010c0f4aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c1057e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c29ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c075620();
    puVar1[0x15] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010c246f40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf608e0();
    puVar1[0x16] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010bf608c0();
    puVar1[0x17] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010c298be0();
    *(undefined8 *)(puVar1 + 0x60) = uVar2;
    uVar2 = param_2;
    func_0x00010c0d02e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf1d8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf1d820(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf1d840(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bfa2680(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    func_0x00010c085be0(param_2);
    *(undefined8 *)(puVar1 + 0x90) = param_1;
    uVar2 = param_2;
    func_0x00010bf15880(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c078420();
    puVar1[0x18] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010c1143e0();
    *(undefined8 *)(puVar1 + 0xa0) = uVar2;
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10850aa7c; end: 10850ab37;  */

void FUN_10850aa7c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b47a0;
    _objc_alloc(PTR_PTR_1126b47a0);
    func_0x00010c03bf60(*(undefined8 *)(param_1 + 0x90));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10850ab38; end: 10850abeb; -[SCStoriesCustomStoryMetadataChangeRequest .cxx_destruct] */

void FUN_10850ab38(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10850abec; end: 10850abf7; -[SCStoriesCustomStoryMetadataChangeRequest table] */

undefined * FUN_10850abec(void)

{
  return &UNK_10f4a109f;
}



/* Entry: 10850abf8; end: 10850adcb; -[SCStoriesCustomStoryMetadataChangeRequest createTableWithSQLite:] */

void FUN_10850abf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df32d32,0x9a,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df32dcc,0x6e,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10df32e3a,0x84,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df32ebe,0x9b,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10df32f59,0xc9,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df33022,0x8a,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10df330ac,0xae,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df3315a,0x8c,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10df331e6,0xb1,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10850adcc; end: 10850bc0f; -[SCStoriesCustomStoryMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10850adcc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined *puVar20;
  uint *puVar21;
  long lVar22;
  undefined8 ****ppppuVar23;
  undefined8 uVar24;
  undefined8 ***pppuVar25;
  undefined8 ****ppppuVar26;
  undefined8 **appuStack_b0 [4];
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined1 uStack_69;
  undefined8 ***pppuStack_68;
  
  iVar4 = *(int *)(param_1 + 0x10);
  puVar8 = param_1;
  if (iVar4 == 1) {
    FUN_10850aa7c();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_4;
    FUN_10850bc10(param_4,puVar8);
    func_0x000107c27dc4(param_4,lVar22,0,0);
    puVar21 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar21;
    puVar20 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar20;
    func_0x00010bf636c0();
    appuStack_b0[1] = (undefined8 **)&DAT_10f4a1018;
    appuStack_b0[0] = (undefined8 **)&DAT_10f6389e8;
    appuStack_b0[3] = (undefined8 **)&DAT_10f4a10d1;
    appuStack_b0[2] = (undefined8 **)&DAT_10f4a10be;
    uStack_70 = 0;
    if (puVar9 != (undefined *)0x0) {
      pppuStack_88 = (undefined8 ****)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      pppuStack_90 = (undefined8 ***)&UNK_10f4a109f;
      pppuStack_68 = &pppuStack_90;
      puVar10 = puVar9 + 0x60;
      func_0x000107c27e0c(puVar10,&pppuStack_90,&UNK_10dd5b8f9,&pppuStack_68,&uStack_69);
      lVar22 = 0;
      ppppuVar23 = (undefined8 ****)0xffffffffffffffff;
      ppppuVar26 = (undefined8 ****)appuStack_b0;
      do {
        puVar11 = puVar10 + 0x18;
        func_0x00010055a52c(puVar11,ppppuVar26);
        if (puVar11 == (undefined *)0x0) {
          if ((long)ppppuVar23 < 0) {
            func_0x000107c2c4dc(&pppuStack_88,"SELECT MAX(rowid) FROM ");
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppuStack_88,&UNK_10f4a109f,0x1e);
            iVar4 = (int)uStack_80;
            ppppuVar23 = (undefined8 ****)pppuStack_88;
            if (-1 < uStack_78._7_1_) {
              iVar4 = (int)uStack_78._7_1_;
              ppppuVar23 = &pppuStack_88;
            }
            _sqlite3_prepare_v2(*(undefined8 *)(puVar9 + 0x58),ppppuVar23,iVar4,&pppuStack_68,0);
            ppppuVar23 = (undefined8 ****)pppuStack_68;
            _sqlite3_step();
            if ((int)ppppuVar23 == 100) {
              ppppuVar23 = (undefined8 ****)pppuStack_68;
              _sqlite3_column_int64(pppuStack_68,0);
            }
            else {
              ppppuVar23 = (undefined8 ****)0x0;
            }
            _sqlite3_finalize(pppuStack_68);
          }
          if ((long)uStack_78 < 0) {
            *(undefined1 *)pppuStack_88 = 0;
            uStack_80 = 0;
          }
          else {
            pppuStack_88 = (undefined8 ***)((ulong)pppuStack_88 & 0xffffffffffffff00);
            uStack_78 = uStack_78 & 0xffffffffffffff;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_88,"SELECT MAX(rowid) FROM index_",0x1d);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_88,&UNK_10f4a109f,0x1e);
          pppuVar25 = *ppppuVar26;
          pppuVar12 = pppuVar25;
          _strlen(pppuVar25);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_88,pppuVar25,pppuVar12);
          uVar24 = *(undefined8 *)(puVar9 + 0x58);
          iVar4 = (int)uStack_80;
          ppppuVar13 = (undefined8 ****)pppuStack_88;
          if (-1 < uStack_78._7_1_) {
            iVar4 = (int)uStack_78._7_1_;
            ppppuVar13 = &pppuStack_88;
          }
          _sqlite3_prepare_v2(uVar24,ppppuVar13,iVar4,&pppuStack_90,0);
          if ((int)uVar24 == 0) {
            if ((undefined8 ****)pppuStack_90 != (undefined8 ****)0x0) {
              ppppuVar13 = (undefined8 ****)pppuStack_90;
              _sqlite3_step();
              if ((int)ppppuVar13 == 100) {
                ppppuVar13 = (undefined8 ****)pppuStack_90;
                _sqlite3_column_int64(pppuStack_90,0);
                bVar7 = ppppuVar13 == ppppuVar23;
              }
              else {
                bVar7 = ppppuVar23 == (undefined8 ****)0x0;
              }
              *(bool *)((long)&uStack_70 + lVar22) = bVar7;
              _sqlite3_finalize(pppuStack_90);
              puVar11 = puVar10 + 0x18;
              pppuStack_68 = ppppuVar26;
              func_0x00010507ce00(puVar11,ppppuVar26,&UNK_10dd5b8f9,&pppuStack_68,&uStack_69);
              uVar18 = 1;
              if (bVar7) {
                uVar18 = 2;
              }
              *(undefined4 *)(puVar11 + 0x18) = uVar18;
              goto LAB_10850b3c8;
            }
          }
          else {
            pppuStack_90 = (undefined8 ****)0x0;
          }
          *(undefined1 *)((long)&uStack_70 + lVar22) = 0;
          puVar11 = puVar10 + 0x18;
          pppuStack_68 = ppppuVar26;
          func_0x00010507ce00(puVar11,ppppuVar26,&UNK_10dd5b8f9,&pppuStack_68,&uStack_69);
          *(undefined4 *)(puVar11 + 0x18) = 0;
        }
        else {
          *(bool *)((long)&uStack_70 + lVar22) = *(int *)(puVar11 + 0x18) == 2;
        }
LAB_10850b3c8:
        lVar22 = lVar22 + 1;
        ppppuVar26 = ppppuVar26 + 1;
      } while (lVar22 != 4);
      if ((long)uStack_78 < 0) {
        __ZdlPv(pppuStack_88);
      }
    }
    uVar6 = uStack_70;
    _objc_release(puVar20);
    lVar22 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a146a);
    if (lVar22 != 0) {
      _sqlite3_bind_blob(lVar22,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      piVar1 = (int *)((long)puVar21 + (ulong)uVar5);
      puVar21 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar21 + (ulong)*puVar21);
      _sqlite3_bind_text(lVar22,2,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar22 == 0x65) {
        uVar24 = *(undefined8 *)(param_3 + 0x58);
        _sqlite3_last_insert_rowid();
        if ((uVar6 & 1) != 0) {
          lVar22 = param_3;
          func_0x000107c310d8(param_3,&UNK_10f4a10e5);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar19 == 0)) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined4 *)((long)piVar1 + uVar19);
          }
          _sqlite3_bind_int64(lVar22,2,uVar18);
          _sqlite3_step();
          if ((int)lVar22 != 0x65) goto LAB_10850b958;
        }
        if ((uVar6 >> 8 & 1) != 0) {
          lVar22 = param_3;
          func_0x000107c310d8(param_3,&UNK_10f4a1138);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
             (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar19 == 0)) {
LAB_10850b69c:
            _sqlite3_bind_null(lVar22,2);
          }
          else {
            puVar21 = (uint *)((long)piVar1 + uVar19);
            piVar3 = (int *)((long)puVar21 + (ulong)*puVar21);
            if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
               (uVar19 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar19 == 0))
            goto LAB_10850b69c;
            puVar21 = (uint *)((long)piVar3 + uVar19);
            puVar2 = (undefined4 *)((long)puVar21 + (ulong)*puVar21);
            _sqlite3_bind_text(lVar22,2,puVar2 + 1,*puVar2,0);
          }
          _sqlite3_step();
          if ((int)lVar22 != 0x65) goto LAB_10850b958;
        }
        if ((uVar6 >> 0x10 & 1) != 0) {
          lVar22 = param_3;
          func_0x000107c310d8(param_3,&UNK_10f4a11b9);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) ||
             (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar19 == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = *(char *)((long)piVar1 + uVar19) != '\0';
          }
          _sqlite3_bind_int64(lVar22,2,bVar7);
          _sqlite3_step();
          if ((int)lVar22 != 0x65) goto LAB_10850b958;
        }
        if ((uVar6 >> 0x18 & 1) != 0) {
          func_0x000107c310d8(param_3,&UNK_10f4a1228);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x3b) ||
             (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x1d], uVar19 == 0)) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined4 *)((long)piVar1 + uVar19);
          }
          _sqlite3_bind_int64(param_3,2,uVar18);
          _sqlite3_step();
          if ((int)param_3 != 0x65) goto LAB_10850b958;
        }
        *(undefined8 *)(param_1 + 8) = uVar24;
        func_0x00010c1eeb60(puVar8);
        puVar20 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b47a0);
        func_0x00010c21c9a0(puVar20);
        _objc_release(puVar20);
        _objc_retain(puVar8);
        puVar20 = puVar8;
        goto LAB_10850ba74;
      }
    }
LAB_10850b958:
    puVar20 = (undefined *)0x0;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar22 = param_3;
        func_0x000107c310d8(param_3,&UNK_10f4a12ec);
        if (lVar22 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar22 == 0x65) {
            lVar22 = param_3;
            func_0x000107c310d8(param_3,&UNK_10f4a1326);
            if (lVar22 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar22 != 0x65) goto LAB_10850afa0;
            }
            lVar22 = param_3;
            func_0x000107c310d8(param_3,&UNK_10f4a136a);
            if (lVar22 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar22 != 0x65) goto LAB_10850afa0;
            }
            lVar22 = param_3;
            func_0x000107c310d8(param_3,&UNK_10f4a13c5);
            if (lVar22 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar22 != 0x65) goto LAB_10850afa0;
            }
            func_0x000107c310d8(param_3,&UNK_10f4a1417);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_10850afa0;
            }
            puVar8 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b47a0);
            func_0x00010c21c9a0(puVar8);
            _objc_release(puVar20);
            _objc_release(puVar8);
            puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10850ba78;
          }
        }
      }
LAB_10850afa0:
      puVar20 = (undefined *)0x0;
      goto LAB_10850ba78;
    }
    FUN_10850aa7c();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_4;
    FUN_10850bc10(param_4,puVar8);
    func_0x000107c27dc4(param_4,lVar22,0,0);
    puVar21 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar21;
    uVar24 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar8);
    lVar22 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a14b8);
    if (lVar22 != 0) {
      _sqlite3_bind_blob(lVar22,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar22,2,uVar24);
      piVar1 = (int *)((long)puVar21 + (ulong)uVar5);
      puVar21 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar21 + (ulong)*puVar21);
      _sqlite3_bind_text(lVar22,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar22 == 0x65) {
        puVar20 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b47a0);
        puVar9 = puVar20;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar20 = puVar9;
        func_0x00010c27dd80();
        puVar10 = puVar8;
        func_0x00010c27dd80();
        if (puVar20 == puVar10) {
LAB_10850b504:
          puVar20 = puVar9;
          func_0x00010bf5a820();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010bf5a820();
          _objc_retainAutoreleasedReturnValue();
          if (puVar20 == puVar10) {
            puVar11 = puVar9;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar11;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar8;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar14);
            _objc_retain(puVar16);
            if (puVar14 != (undefined *)0x0 || puVar16 != (undefined *)0x0) {
              if ((puVar14 == (undefined *)0x0) || (puVar16 == (undefined *)0x0)) {
                _objc_release(puVar16);
                _objc_release(puVar14);
                _objc_release(puVar16);
                _objc_release(puVar15);
                _objc_release(puVar14);
                _objc_release(puVar11);
                goto LAB_10850b534;
              }
              puVar17 = puVar14;
              func_0x00010c0720c0();
              _objc_release(puVar16);
              _objc_release(puVar14);
              _objc_release(puVar16);
              _objc_release(puVar15);
              _objc_release(puVar14);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(puVar20);
              if (((ulong)puVar17 & 1) != 0) goto LAB_10850b788;
              goto LAB_10850b544;
            }
            _objc_release(puVar15);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar20);
          }
          else {
LAB_10850b534:
            _objc_release(puVar10);
            _objc_release(puVar20);
LAB_10850b544:
            lVar22 = param_3;
            func_0x000107c310d8(param_3,&UNK_10f4a1563);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
               (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar19 == 0)) {
LAB_10850b5c0:
              _sqlite3_bind_null(lVar22,1);
            }
            else {
              puVar21 = (uint *)((long)piVar1 + uVar19);
              piVar3 = (int *)((long)puVar21 + (ulong)*puVar21);
              if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
                 (uVar19 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar19 == 0))
              goto LAB_10850b5c0;
              puVar21 = (uint *)((long)piVar3 + uVar19);
              puVar2 = (undefined4 *)((long)puVar21 + (ulong)*puVar21);
              _sqlite3_bind_text(lVar22,1,puVar2 + 1,*puVar2,0);
            }
            _sqlite3_bind_int64(lVar22,2,uVar24);
            _sqlite3_step();
            if ((int)lVar22 != 0x65) goto LAB_10850ba5c;
          }
LAB_10850b788:
          puVar20 = puVar9;
          func_0x00010bf60900();
          puVar10 = puVar8;
          func_0x00010bf60900();
          if ((int)puVar20 != (int)puVar10) {
            lVar22 = param_3;
            func_0x000107c310d8(param_3,&UNK_10f4a15e4);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) ||
               (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar19 == 0)) {
              bVar7 = false;
            }
            else {
              bVar7 = *(char *)((long)piVar1 + uVar19) != '\0';
            }
            _sqlite3_bind_int64(lVar22,1,bVar7);
            _sqlite3_bind_int64(lVar22,2,uVar24);
            _sqlite3_step();
            if ((int)lVar22 != 0x65) goto LAB_10850ba5c;
          }
          puVar20 = puVar9;
          func_0x00010c1143e0();
          puVar10 = puVar8;
          func_0x00010c1143e0();
          if (puVar20 != puVar10) {
            func_0x000107c310d8(param_3,&UNK_10f4a1653);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x3b) ||
               (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x1d], uVar19 == 0)) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined4 *)((long)piVar1 + uVar19);
            }
            _sqlite3_bind_int64(param_3,1,uVar18);
            _sqlite3_bind_int64(param_3,2,uVar24);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_10850ba5c;
          }
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar20 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126b47a0);
          func_0x00010c21c9a0(puVar20);
          _objc_release(puVar20);
          _objc_retain(puVar8);
          puVar20 = puVar8;
          goto LAB_10850ba74;
        }
        lVar22 = param_3;
        func_0x000107c310d8(param_3,&UNK_10f4a1510);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar19 == 0)) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined4 *)((long)piVar1 + uVar19);
        }
        _sqlite3_bind_int64(lVar22,1,uVar18);
        _sqlite3_bind_int64(lVar22,2,uVar24);
        _sqlite3_step();
        if ((int)lVar22 == 0x65) goto LAB_10850b504;
LAB_10850ba5c:
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar8);
    puVar20 = (undefined *)0x0;
  }
LAB_10850ba74:
  _objc_release(puVar8);
LAB_10850ba78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 10850bc10; end: 10850cb57;  */

undefined * FUN_10850bc10(undefined *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  uint *puVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  long lVar12;
  uint *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  uint *puVar33;
  uint *puVar34;
  long lVar35;
  long lVar36;
  undefined4 *puVar37;
  long lVar38;
  long lVar39;
  ulong uStack_220;
  ulong uStack_210;
  undefined4 *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_138;
  code *pcStack_130;
  undefined ***pppuStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar8 = param_2;
  func_0x00010bf5a820();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (uint *)0x0) {
    uStack_220 = 0;
  }
  else {
    puVar9 = param_2;
    func_0x00010bf5a820(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar34 = puVar9;
    func_0x00010bf5bbc0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    FUN_10850d890(param_1,puVar34);
    func_0x00010bf5ab40(puVar9);
    param_1[0x46] = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x000107c27db8(param_1,10);
    func_0x000107c27ddc(param_1,4,(ulong)puVar10 & 0xffffffff);
    puVar10 = param_1;
    func_0x000107c27dc0(param_1,(iVar3 - iVar4) + iVar5);
    _objc_release(puVar34);
    _objc_release(puVar9);
    _objc_release(puVar9);
    uStack_220 = (ulong)puVar10 & 0xffffffff;
  }
  _objc_release(puVar8);
  ppuStack_138 = &PTR_FUN_110a505d0;
  pcStack_130 = FUN_10850d50c;
  pppuStack_120 = &ppuStack_138;
  puVar8 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar39 = 0;
  lStack_178 = 0;
  lStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(puVar8);
  puVar9 = puVar8;
  func_0x00010bf52a60();
  if (puVar9 == (uint *)0x0) {
    puStack_200 = (undefined4 *)0x0;
    puVar31 = (undefined4 *)0x0;
  }
  else {
    puStack_200 = (undefined4 *)0x0;
    puVar31 = (undefined4 *)0x0;
    puVar32 = (undefined4 *)0x0;
    lVar38 = *plStack_170;
    do {
      puVar34 = (uint *)0x0;
      do {
        if (*plStack_170 != lVar38) {
          _objc_enumerationMutation(puVar8);
        }
        lVar35 = *(long *)(lStack_178 + (long)puVar34 * 8);
        _objc_retain(lVar35);
        _objc_retain(lVar35);
        lStack_198 = lVar35;
        if (pppuStack_120 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10850c824;
        }
        pppuVar11 = pppuStack_120;
        (*(code *)(*pppuStack_120)[6])(pppuStack_120,param_1,&lStack_198);
        _objc_release(lStack_198);
        if (puVar31 < puVar32) {
          *puVar31 = (int)pppuVar11;
          puVar37 = puStack_200;
        }
        else {
          lVar36 = (long)puVar31 - (long)puStack_200;
          uVar6 = (lVar36 >> 2) + 1;
          if (uVar6 >> 0x3e != 0) {
            FUN_10850d9c0();
LAB_10850c824:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10850c828);
            (*pcVar7)();
          }
          uVar30 = (long)puVar32 - (long)puStack_200 >> 1;
          if (uVar30 <= uVar6) {
            uVar30 = uVar6;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar32 - (long)puStack_200)) {
            uVar30 = 0x3fffffffffffffff;
          }
          if (uVar30 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10850c824;
          }
          lVar12 = uVar30 << 2;
          __Znwm();
          puVar31 = (undefined4 *)(lVar12 + lVar36);
          puVar32 = (undefined4 *)(lVar12 + uVar30 * 4);
          puVar37 = puVar31 + -(lVar36 >> 2);
          *puVar31 = (int)pppuVar11;
          _memcpy(puVar37,puStack_200,lVar36);
          if (puStack_200 != (undefined4 *)0x0) {
            __ZdlPv(puStack_200);
          }
        }
        puStack_200 = puVar37;
        puVar31 = puVar31 + 1;
        _objc_release(lVar35);
        puVar34 = (uint *)((long)puVar34 + 1);
      } while (puVar9 != puVar34);
      puVar9 = puVar8;
      func_0x00010bf52a60();
    } while (puVar9 != (uint *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar8);
  if (pppuStack_120 == &ppuStack_138) {
    lVar38 = 0x20;
  }
  else {
    if (pppuStack_120 == (undefined ***)0x0) goto LAB_10850bf34;
    lVar38 = 0x28;
  }
  (**(code **)((long)*pppuStack_120 + lVar38))();
LAB_10850bf34:
  puVar8 = param_2;
  func_0x00010c1057e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_1b0,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010c29ef80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_1c8,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010c246f40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (uint *)0x0) {
    uStack_210 = 0;
  }
  else {
    puVar9 = param_2;
    func_0x00010c246f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar34 = puVar9;
    func_0x00010c29ee80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lStack_190 = 0;
    uStack_188 = 0;
    lStack_198 = 0;
    lVar39 = 0;
    lStack_178 = 0;
    lStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    _objc_retain(puVar34);
    puVar13 = puVar34;
    func_0x00010bf52a60();
    if (puVar13 != (uint *)0x0) {
      lVar38 = *plStack_170;
      do {
        puVar33 = (uint *)0x0;
        do {
          if (*plStack_170 != lVar38) {
            _objc_enumerationMutation(puVar34);
          }
          func_0x00010bf885a0(*(undefined8 *)(lStack_178 + (long)puVar33 * 8));
          lStack_1e0 = lVar39;
          func_0x00010547a4c0(&lStack_198,&lStack_1e0);
          puVar33 = (uint *)((long)puVar33 + 1);
        } while (puVar13 != puVar33);
        puVar13 = puVar34;
        func_0x00010bf52a60();
      } while (puVar13 != (uint *)0x0);
    }
    _objc_release(puVar34);
    _objc_release(puVar34);
    _objc_release(puVar34);
    func_0x00010c0d10a0(puVar9);
    lVar35 = lVar39;
    func_0x00010c0d4780(puVar9);
    lVar36 = lVar35;
    func_0x00010c08b360(puVar9);
    lVar38 = 0x1130da4e8;
    if (lStack_190 - lStack_198 != 0) {
      lVar38 = lStack_198;
    }
    puVar10 = param_1;
    func_0x00010547a5f0(param_1,lVar38,lStack_190 - lStack_198 >> 3);
    param_1[0x46] = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x000107c27db8(lVar36,0,param_1,10);
    func_0x000107c27db8(lVar35,0,param_1,8);
    func_0x000107c27db8(lVar39,0,param_1,6);
    func_0x00010547a580(param_1,0xc,(ulong)puVar10 & 0xffffffff);
    puVar10 = param_1;
    func_0x000107c27dc0(param_1,(iVar3 - iVar4) + iVar5);
    if (lStack_198 != 0) {
      lStack_190 = lStack_198;
      __ZdlPv();
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
    uStack_210 = (ulong)puVar10 & 0xffffffff;
  }
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010c0d02e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_118,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010bf1d8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_180,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010bf1d820(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_198,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010bf1d840(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_1e0,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010bfa2680(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  FUN_10850d71c(param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010bf15880(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10850d5ac(&lStack_1f8,param_1,puVar8);
  _objc_release(puVar8);
  puVar8 = param_2;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  FUN_10850d890();
  puVar9 = param_2;
  func_0x00010c27dd80();
  puVar34 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1;
  FUN_10850d890(param_1,puVar34);
  puVar13 = param_2;
  func_0x00010bf60900();
  uVar6 = (long)puVar31 - (long)puStack_200;
  puVar32 = (undefined4 *)&UNK_10df334b4;
  if (uVar6 != 0) {
    puVar32 = puStack_200;
  }
  param_1[0x46] = 1;
  func_0x000107c27dc8(param_1,uVar6,4);
  func_0x000107c27dc8(param_1,uVar6,4);
  if (puStack_200 != puVar31) {
    lVar38 = (long)uVar6 >> 2;
    do {
      iVar3 = puVar32[lVar38 + -1];
      func_0x000107c27db4(param_1,4);
      func_0x000107c27dcc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
  }
  param_1[0x46] = 0;
  puVar16 = param_1;
  func_0x000107c27dcc(param_1,uVar6 >> 2);
  lVar38 = 0x1130c2400;
  lVar35 = lVar38;
  if (lStack_1a8 - lStack_1b0 != 0) {
    lVar35 = lStack_1b0;
  }
  puVar17 = param_1;
  func_0x000100c47e34(param_1,lVar35,lStack_1a8 - lStack_1b0 >> 2);
  lVar35 = lVar38;
  if (lStack_1c0 - lStack_1c8 != 0) {
    lVar35 = lStack_1c8;
  }
  puVar18 = param_1;
  func_0x000100c47e34(param_1,lVar35,lStack_1c0 - lStack_1c8 >> 2);
  puVar33 = param_2;
  func_0x00010c075620();
  puVar19 = param_2;
  func_0x00010bf608e0();
  puVar20 = param_2;
  func_0x00010bf608c0();
  puVar21 = param_2;
  func_0x00010c298be0(param_2);
  lVar35 = lVar38;
  if (lStack_110 - lStack_118 != 0) {
    lVar35 = lStack_118;
  }
  puVar22 = param_1;
  func_0x000100c47e34(param_1,lVar35,lStack_110 - lStack_118 >> 2);
  lVar35 = lVar38;
  if (lStack_178 - lStack_180 != 0) {
    lVar35 = lStack_180;
  }
  puVar23 = param_1;
  func_0x000100c47e34(param_1,lVar35,lStack_178 - lStack_180 >> 2);
  lVar35 = lVar38;
  if (lStack_190 - lStack_198 != 0) {
    lVar35 = lStack_198;
  }
  puVar24 = param_1;
  func_0x000100c47e34(param_1,lVar35,lStack_190 - lStack_198 >> 2);
  lVar35 = lVar38;
  if (lStack_1d8 - lStack_1e0 != 0) {
    lVar35 = lStack_1e0;
  }
  puVar25 = param_1;
  func_0x000100c47e34(param_1,lVar35,lStack_1d8 - lStack_1e0 >> 2);
  func_0x00010c085be0(param_2);
  if (lStack_1f0 - lStack_1f8 != 0) {
    lVar38 = lStack_1f8;
  }
  puVar26 = param_1;
  func_0x000100c47e34(param_1,lVar38,lStack_1f0 - lStack_1f8 >> 2);
  puVar27 = param_2;
  func_0x00010c078420();
  puVar28 = param_2;
  func_0x00010c1143e0(param_2);
  param_1[0x46] = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar29 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27db0(param_1,0x3a,(ulong)puVar28 & 0xffffffff,0);
  func_0x000107c27db8(lVar39,0,param_1,0x34);
  func_0x000107c27dbc(param_1,0x26,puVar21,0);
  func_0x000107c27db0(param_1,6,(ulong)puVar9 & 0xffffffff,0);
  func_0x000100c47f00(param_1,0x36,(ulong)puVar26 & 0xffffffff);
  func_0x000100c3b11c(param_1,0x32,(ulong)puVar10 >> 0x20);
  func_0x000100c47f00(param_1,0x2e,(ulong)puVar25 & 0xffffffff);
  func_0x000100c47f00(param_1,0x2c,(ulong)puVar24 & 0xffffffff);
  func_0x000100c47f00(param_1,0x2a,(ulong)puVar23 & 0xffffffff);
  func_0x000100c47f00(param_1,0x28,(ulong)puVar22 & 0xffffffff);
  if (uStack_210 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0x1e,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_210) + 4,0);
  }
  func_0x000100c47f00(param_1,0x1a,(int)puVar18);
  func_0x000100c47f00(param_1,0x18,(ulong)puVar17 & 0xffffffff);
  if ((int)puVar16 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0x16,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar16) + 4,0);
  }
  if (uStack_220 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0x10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_220) + 4,0);
  }
  func_0x000107c27ddc(param_1,10,(int)puVar15);
  func_0x000107c27ddc(param_1,4,(int)puVar14);
  func_0x000100ab13ac(param_1,0x38,(ulong)puVar27 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x30,(uint)puVar10 & 0xff,0);
  func_0x000100ab13ac(param_1,0x22,(ulong)puVar20 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x20,(ulong)puVar19 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x1c,(ulong)puVar33 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,0x14,(int)puVar13,0);
  func_0x000107c27dc0(param_1,((int)uVar29 - (int)uVar2) + (int)uVar1);
  _objc_release(puVar34);
  _objc_release(puVar8);
  if (lStack_1f8 != 0) {
    lStack_1f0 = lStack_1f8;
    __ZdlPv();
  }
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  if (lStack_198 != 0) {
    lStack_190 = lStack_198;
    __ZdlPv();
  }
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  if (lStack_1c8 != 0) {
    lStack_1c0 = lStack_1c8;
    __ZdlPv();
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  if (puStack_200 != (undefined4 *)0x0) {
    __ZdlPv(puStack_200);
  }
  puVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    _objc_release(puVar23);
    if (lStack_198 != 0) {
      lStack_190 = lStack_198;
      __ZdlPv();
    }
    _objc_release(puVar23);
    _objc_release(puVar23);
    _objc_release(puVar26);
    _objc_release(puVar26);
    _objc_release(puVar24);
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      __ZdlPv();
    }
    if (lStack_1b0 != 0) {
      lStack_1a8 = lStack_1b0;
      __ZdlPv();
    }
    if (puStack_200 != (undefined4 *)0x0) {
      __ZdlPv(puStack_200);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    puVar10 = (undefined *)0x0;
    if (puVar8 != (uint *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8 + 1;
      if (*puVar8 != 0) {
        do {
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 != (undefined *)0x0) {
            func_0x00010befa120(puVar14);
          }
          _objc_release(puVar10);
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar8 + 1 + *puVar8);
      }
      puVar10 = puVar14;
      func_0x00010bf51e00(puVar14);
      _objc_release(puVar14);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  return param_1;
}



/* Entry: 10850cb58; end: 10850cc43;  */

void FUN_10850cb58(uint *param_1,undefined8 param_2)

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



/* Entry: 10850cc44; end: 10850ce13;  */

void FUN_10850cc44(undefined *param_1,undefined *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126d8fd0;
  if (param_1 == (undefined *)0x0) {
    if (param_2 == (undefined *)0x0) {
      if (param_3 == (int *)0x0) {
        if (param_4 == (int *)0x0) {
          puVar3 = (undefined *)0x0;
          goto LAB_10850ccc8;
        }
        param_2 = PTR_PTR_1126d9f08;
        _objc_alloc(PTR_PTR_1126d9f08);
        uVar4 = 0;
        if ((4 < *(ushort *)((long)param_4 - (long)*param_4)) &&
           (uVar1 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar1 != 0)) {
          uVar4 = *(undefined8 *)((long)param_4 + uVar1);
        }
        func_0x00010c021920(uVar4);
        func_0x00010bf195e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_2 = PTR_PTR_1126d8fe0;
        _objc_alloc(PTR_PTR_1126d8fe0);
        if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
           (((ushort *)((long)param_3 - (long)*param_3))[2] == 0)) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c045ea0(param_2);
        _objc_release(puVar2);
        func_0x00010c22d700(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      FUN_10850cf40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    FUN_10850ce14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22c160(puVar3);
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
  _objc_release(param_2);
LAB_10850ccc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10850ce14; end: 10850cf3f;  */

void FUN_10850ce14(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10850cf08;
  }
  puVar6 = PTR_PTR_1126d8fd8;
  _objc_alloc(PTR_PTR_1126d8fd8);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10850ced0:
    lVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    if ((uVar2 < 7) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3)), uVar4 == 0))
    goto LAB_10850ced0;
    puVar1 = (uint *)((long)param_1 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10850d2dc(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d640(puVar6,param_2,puVar5,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar5);
LAB_10850cf08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10850cf40; end: 10850d2db;  */

void FUN_10850cf40(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  if (param_1 == (int *)0x0) {
    puVar12 = (undefined *)0x0;
    goto LAB_10850d1d0;
  }
  puVar12 = PTR_PTR_1126d8fb8;
  _objc_alloc(PTR_PTR_1126d8fb8);
  lVar7 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar7);
  if (uVar5 < 5) {
    puVar10 = (undefined *)0x0;
LAB_10850d038:
    puVar11 = (undefined *)0x0;
LAB_10850d03c:
    lVar7 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_1 - lVar7))[2];
    if (uVar9 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar9);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar5 < 7) goto LAB_10850d038;
    uVar9 = (ulong)*(ushort *)((long)param_1 + lVar7 + 6);
    if (uVar9 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar9);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar5 < 9) || (uVar9 = (ulong)*(ushort *)((long)param_1 + lVar7 + 8), uVar9 == 0))
    goto LAB_10850d03c;
    puVar1 = (uint *)((long)param_1 + uVar9);
    lVar7 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10850d2dc(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar9 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar9 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar9);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10850d2dc(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar8);
  if (uVar5 < 0xd) {
    puVar13 = (undefined *)0x0;
LAB_10850d170:
    puVar14 = (undefined *)0x0;
LAB_10850d174:
    uVar6 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_1 - lVar8))[6];
    if (uVar9 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar9);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar8);
    }
    lVar8 = -lVar8;
    if (uVar5 < 0xf) goto LAB_10850d170;
    uVar9 = (ulong)*(ushort *)((long)param_1 + lVar8 + 0xe);
    if (uVar9 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar9);
      uVar3 = *puVar1;
      puVar14 = PTR_PTR_1126d8fb0;
      _objc_alloc(PTR_PTR_1126d8fb0);
      piVar2 = (int *)((long)puVar1 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 == 0)) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar2 + uVar9);
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c00e720(puVar14,param_2,puVar15);
      _objc_release(puVar15);
      lVar8 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0x11) goto LAB_10850d174;
    uVar9 = (ulong)*(ushort *)((long)param_1 + lVar8 + 0x10);
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = *(undefined4 *)((long)param_1 + uVar9);
    }
  }
  func_0x00010c04d660(puVar12,param_2,puVar10,puVar11,lVar7,lVar4,puVar13,puVar14,uVar6);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(puVar11);
  _objc_release(puVar10);
LAB_10850d1d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10850d2dc; end: 10850d50b;  */

void FUN_10850d2dc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10850d410;
  }
  puVar6 = PTR_PTR_1126d8fa8;
  _objc_alloc(PTR_PTR_1126d8fa8);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10850d3c8:
    puVar7 = (undefined *)0x0;
LAB_10850d3cc:
    puVar9 = (undefined *)0x0;
LAB_10850d3d0:
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar2 < 7) goto LAB_10850d3c8;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 6);
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar2 < 9) goto LAB_10850d3cc;
    if (*(short *)((long)param_1 + lVar3 + 8) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 0xb) || (*(short *)((long)param_1 + lVar3 + 10) == 0)) goto LAB_10850d3d0;
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bffa160();
  }
  func_0x00010c029860(puVar6,param_2,puVar5,puVar7,puVar9,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_10850d410:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10850d50c; end: 10850d5ab;  */

ulong FUN_10850d50c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_10850d890(param_1,param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27ddc(param_1,4,uVar3 & 0xffffffff);
  func_0x000107c27dc0(param_1,((int)uVar4 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10850d5ac; end: 10850d71b;  */

long FUN_10850d5ac(long *param_1,int *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char *pcStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
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
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        piVar5 = *(int **)(lStack_118 + lVar7 * 8);
        piVar4 = param_2;
        FUN_10850d890(param_2,piVar5);
        aiStack_124[0] = (int)piVar4;
        if (aiStack_124[0] != 0) {
          piVar5 = aiStack_124;
          func_0x000100c47d40(param_1,piVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3812000000;
  uStack_1a0 = 0x10850da98;
  uStack_198 = 0x10850daa4;
  pcStack_190 = "";
  uStack_188 = 0;
  func_0x00010c0bfcc0(piVar5);
  uVar1 = *(undefined4 *)(puStack_178 + 3);
  uVar2 = *(undefined4 *)(puStack_1b0 + 6);
  __Block_object_dispose(&uStack_1b8,8);
  __Block_object_dispose(&uStack_180,8);
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 10850d71c; end: 10850d88f;  */

undefined8 FUN_10850d71c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_148 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_140 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3812000000;
  uStack_70 = 0x10850da98;
  uStack_68 = 0x10850daa4;
  pcStack_60 = "";
  uStack_58 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10850daa8;
  puStack_a8 = &UNK_110a50670;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10850dc64;
  puStack_e0 = &UNK_110a506a0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10850e05c;
  puStack_118 = &UNK_110a506d0;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_10850e118;
  puStack_150 = &UNK_110a50700;
  uStack_138 = param_1;
  puStack_110 = puStack_148;
  puStack_108 = puStack_140;
  uStack_100 = param_1;
  puStack_d8 = puStack_148;
  puStack_d0 = puStack_140;
  uStack_c8 = param_1;
  puStack_a0 = puStack_148;
  puStack_98 = puStack_140;
  uStack_90 = param_1;
  puStack_80 = puStack_140;
  puStack_48 = puStack_148;
  func_0x00010c0bfcc0(param_2,param_2,&puStack_c0,&puStack_f8,&puStack_130,&puStack_168);
  uVar1 = *(undefined4 *)(puStack_48 + 3);
  uVar2 = *(undefined4 *)(puStack_80 + 6);
  __Block_object_dispose(&uStack_88,8);
  __Block_object_dispose(&uStack_50,8);
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 10850d890; end: 10850d9bf;  */

undefined8 FUN_10850d890(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10850d970;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10850d970;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10850d930;
    param_1 = 0;
  }
  else {
LAB_10850d930:
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
LAB_10850d970:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10850d9c0; end: 10850d9d3;  */

void FUN_10850d9c0(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10850d9d4; end: 10850d9db;  */

void FUN_10850d9d4(void)

{
  return;
}



/* Entry: 10850d9dc; end: 10850da0f;  */

void FUN_10850d9dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a505d0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10850da10; end: 10850da4f;  */

void FUN_10850da10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a505d0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10850da50; end: 10850da8b;  */

long FUN_10850da50(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a50640);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10850da8c; end: 10850daa7;  */

undefined ** FUN_10850da8c(void)

{
  return &PTR_DAT_110a50640;
}



/* Entry: 10850daa8; end: 10850db0f;  */

void FUN_10850daa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10850db10(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10850db10; end: 10850dc63;  */

ulong FUN_10850db10(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf1f020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf1f020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    FUN_10850e1dc(param_1,lVar5);
    _objc_release(lVar5);
    uVar7 = uVar7 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2597e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10850d890(param_1,lVar4);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_10850e430(param_1,6,uVar7);
  func_0x000107c27ddc(param_1,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10850dc64; end: 10850dccb;  */

void FUN_10850dc64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10850dccc(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10850dccc; end: 10850e05b;  */

ulong FUN_10850dccc(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf1f020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uStack_70 = 0;
  }
  else {
    uVar14 = param_2;
    func_0x00010bf1f020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = param_1;
    FUN_10850e1dc(param_1,uVar14);
    _objc_release(uVar14);
    uStack_70 = uStack_70 & 0xffffffff;
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf1f040();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uStack_78 = 0;
  }
  else {
    uVar14 = param_2;
    func_0x00010bf1f040(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = param_1;
    FUN_10850e1dc(param_1,uVar14);
    _objc_release(uVar14);
    uStack_78 = uStack_78 & 0xffffffff;
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf1b400();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar14 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010bf1b400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf8aa00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    FUN_10850d890(param_1,uVar8);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c27ddc(param_1,4,uVar14 & 0xffffffff);
    uVar14 = param_1;
    func_0x000107c27dc0(param_1,((int)uVar13 - (int)uVar2) + (int)uVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar14 = uVar14 & 0xffffffff;
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c2597e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10850d890(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c22d240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10850d890(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c0ecf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_10850d890(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c0ecf20(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x10,uVar12 & 0xffffffff,0);
  func_0x00010850e4a0(param_1,0xe,uVar14);
  func_0x000107c27ddc(param_1,0xc,uVar11 & 0xffffffff);
  func_0x00010850e430(param_1,10,uStack_78);
  func_0x00010850e430(param_1,8,uStack_70);
  func_0x000107c27ddc(param_1,6,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar7 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10850e05c; end: 10850e117;  */

void FUN_10850e05c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  uVar4 = *(ulong *)(param_1 + 0x30);
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_10850d890(uVar4,param_2);
  *(undefined1 *)(uVar4 + 0x46) = 1;
  uVar1 = *(undefined8 *)(uVar4 + 0x28);
  uVar2 = *(undefined8 *)(uVar4 + 0x30);
  uVar5 = *(undefined8 *)(uVar4 + 0x20);
  func_0x000107c27ddc(uVar4,4,uVar3 & 0xffffffff);
  func_0x000107c27dc0(uVar4,((int)uVar5 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar4;
  return;
}



/* Entry: 10850e118; end: 10850e1db;  */

void FUN_10850e118(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 4;
  lVar3 = *(long *)(param_2 + 0x30);
  _objc_retain(param_3);
  func_0x00010c08a800(param_3);
  *(undefined1 *)(lVar3 + 0x46) = 1;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  func_0x000107c27db8(param_1,0,lVar3,4);
  func_0x000107c27dc0(lVar3,((int)uVar4 - (int)uVar2) + (int)uVar1);
  _objc_release(param_3);
  *(int *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x30) = (int)lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10850e1dc; end: 10850e42f;  */

ulong FUN_10850e1dc(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10850d890(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10850d890(param_1,lVar6);
  lVar8 = param_2;
  func_0x00010c120160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar8 == 0) {
    uVar12 = 0;
  }
  else {
    lVar9 = lVar8;
    _objc_retainAutorelease(lVar8);
    func_0x00010bf25f00();
    lVar10 = lVar8;
    func_0x00010c08fa60(lVar8);
    uVar12 = param_1;
    func_0x000107c27df8(param_1,lVar9,lVar10);
  }
  _objc_release(lVar8);
  lVar9 = param_2;
  func_0x00010c279ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar9 == 0) {
    uVar13 = 0;
  }
  else {
    lVar10 = lVar9;
    _objc_retainAutorelease(lVar9);
    func_0x00010bf25f00();
    lVar11 = lVar9;
    func_0x00010c08fa60(lVar9);
    uVar13 = param_1;
    func_0x000107c27df8(param_1,lVar10,lVar11);
  }
  _objc_release(lVar9);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,10,uVar13 & 0xffffffff);
  func_0x000107c27de4(param_1,8,uVar12 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10850e430; end: 10850e50f;  */

void FUN_10850e430(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10850e510; end: 10850e573;  */

undefined ** FUN_10850e510(void)

{
  int iVar1;
  
  if ((bRam0000000113827bb8 & 1) == 0) {
    iVar1 = 0x13827bb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263928,0x100000000);
      ___cxa_guard_release(0x113827bb8);
    }
  }
  return &PTR_PTR_113263928;
}



/* Entry: 10850e574; end: 10850e5fb;  */

void FUN_10850e574(uint *param_1,undefined1 *param_2)

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



/* Entry: 10850e5fc; end: 10850e687;  */

void FUN_10850e5fc(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c11ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10850e688; end: 10850e693; +[SCStoriesCustomStoryPlaybackSequence table] */

undefined * FUN_10850e688(void)

{
  return &UNK_10f4a16c4;
}



/* Entry: 10850e694; end: 10850e8eb; +[SCStoriesCustomStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_10850e694(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d67a0;
  _objc_alloc(PTR_PTR_1126d67a0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10850e7e0:
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar10 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar10 + (ulong)*puVar10 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_10850e7e0;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          lVar5 = (long)puVar10 + (ulong)*puVar10;
          func_0x000100952a54(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9,param_2,lVar5);
          _objc_release(lVar5);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2 + 1 + *puVar2);
      }
      puVar8 = puVar9;
      func_0x00010bf51e00(puVar9);
      _objc_release(puVar9);
      lVar5 = -(long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((8 < uVar4) && (*(short *)((long)piVar1 + lVar5 + 8) != 0)) {
      puVar9 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      goto LAB_10850e7e8;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10850e7e8:
  func_0x00010c03bf00(puVar3,param_2,puVar7,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10850e8ec; end: 10850e90f; +[SCStoriesCustomStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_10850e8ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10850e908;
  auVar1._0_8_ = 0x10850e900;
  return auVar1;
}



/* Entry: 10850e910; end: 10850ea43;  */

void FUN_10850e910(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar4 = PTR_PTR_1126d6798;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10850ea44(puVar4,0xffffffffffffffff,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar4 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


