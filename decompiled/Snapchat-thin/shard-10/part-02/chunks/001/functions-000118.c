/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c06af0; end: 107c06c03; -[SCDiscoverFeedStoryIHChangeRequest createTableWithSQLite:] */

void FUN_107c06af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee21c0,0x8b,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee224b,0x77,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dee22c2,0x8d,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee234f,0x77,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dee23c6,0x8d,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 107c06c04; end: 107c072c7; -[SCDiscoverFeedStoryIHChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107c06c04(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_107c06a30(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_107c072c8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    func_0x0001050da3a4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f44db59);
    if (lVar7 == 0) goto LAB_107c07220;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_107c07220;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      lVar7 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f44d9a1);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(lVar7,2,uVar9);
      _sqlite3_step();
      if ((int)lVar7 != 0x65) goto LAB_107c07220;
    }
    if (((uint)puVar8 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f44d9fd);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_107c07220;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d71f0);
    func_0x00010c21c9a0(puVar11);
LAB_107c071f8:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f44daa0);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            lVar7 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f44dad1);
            if (lVar7 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar7 != 0x65) goto LAB_107c06d64;
            }
            func_0x0001001b9e08(param_3,&UNK_10f44db15);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_107c06d64;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d71f0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107c0722c;
          }
        }
      }
LAB_107c06d64:
      puVar11 = (undefined *)0x0;
      goto LAB_107c0722c;
    }
    FUN_107c06a30();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_107c072c8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f44db9b);
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
        _objc_opt_class(PTR_PTR_1126d71f0);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010c259740();
        puVar5 = puVar6;
        func_0x00010c259740();
        if (puVar11 == puVar5) {
LAB_107c070cc:
          puVar11 = puVar8;
          func_0x00010bf01720();
          puVar5 = puVar6;
          func_0x00010bf01720();
          if (puVar11 != puVar5) {
            func_0x0001001b9e08(param_3,&UNK_10f44dc43);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
            }
            _sqlite3_bind_int64(param_3,1,uVar9);
            _sqlite3_bind_int64(param_3,2,uVar12);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_107c07210;
          }
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar11 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d71f0);
          func_0x00010c21c9a0(puVar11);
          goto LAB_107c071f8;
        }
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f44dbe7);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
        }
        _sqlite3_bind_int64(lVar7,1,uVar9);
        _sqlite3_bind_int64(lVar7,2,uVar12);
        _sqlite3_step();
        if ((int)lVar7 == 0x65) goto LAB_107c070cc;
LAB_107c07210:
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
LAB_107c07220:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_107c0722c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107c072c8; end: 107c08dff;  */

ulong FUN_107c072c8(undefined8 param_1,ulong param_2,ulong param_3)

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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  uVar21 = param_3;
  func_0x00010c259da0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar21 == 0) {
    uStack_88 = 0;
  }
  else {
    uVar21 = param_3;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar6 = uVar21;
    func_0x00010c080120();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_98 = 0;
    }
    else {
      uVar20 = uVar21;
      func_0x00010c080120(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar20;
      func_0x00010c296d80(uVar20);
      func_0x00010c2709c0(uVar20);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar22,0);
      uStack_98 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar20);
      _objc_release(uVar20);
      uStack_98 = uStack_98 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c074c20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_a0 = 0;
    }
    else {
      uVar20 = uVar21;
      func_0x00010c074c20(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar20;
      func_0x00010c296d80(uVar20);
      func_0x00010c2709c0(uVar20);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar22,0);
      uStack_a0 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar20);
      _objc_release(uVar20);
      uStack_a0 = uStack_a0 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c07dc00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_a8 = 0;
    }
    else {
      uVar20 = uVar21;
      func_0x00010c07dc00(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar20;
      func_0x00010c296d80(uVar20);
      func_0x00010c2709c0(uVar20);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar22,0);
      uStack_a8 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar20);
      _objc_release(uVar20);
      uStack_a8 = uStack_a8 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c0e9da0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_b0 = 0;
    }
    else {
      uVar20 = uVar21;
      func_0x00010c0e9da0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar20;
      func_0x00010c296d80(uVar20);
      func_0x00010c2709c0(uVar20);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar22,0);
      uStack_b0 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar20);
      _objc_release(uVar20);
      uStack_b0 = uStack_b0 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_88 = 0;
    }
    else {
      uVar20 = uVar21;
      func_0x00010bf454e0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar20;
      func_0x00010bf52680(uVar20);
      uVar18 = uVar20;
      func_0x00010bfe5ec0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = param_2;
      FUN_107c08e00(param_2,uVar18);
      uVar7 = uVar20;
      func_0x00010c298be0(uVar20);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce170(param_2,8,uVar7,0);
      func_0x0001001ce170(param_2,4,uVar22,0);
      func_0x0001001ce2e4(param_2,6,uVar19 & 0xffffffff);
      uStack_88 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar20);
      _objc_release(uVar20);
      uStack_88 = uStack_88 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c132440();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_b8 = 0;
    }
    else {
      uVar20 = uVar21;
      func_0x00010c132440(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar20;
      func_0x00010c296d80(uVar20);
      func_0x00010c2709c0(uVar20);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce1c8(param_2,4,uVar22,0);
      uStack_b8 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar20);
      _objc_release(uVar20);
      uStack_b8 = uStack_b8 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c06d760();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar20 = 0;
    }
    else {
      uVar22 = uVar21;
      func_0x00010c06d760(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar20 = uVar22;
      func_0x00010c296d80(uVar22);
      func_0x00010c2709c0(uVar22);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar20,0);
      uVar20 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar22);
      _objc_release(uVar22);
      uVar20 = uVar20 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c07d7a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar22 = 0;
    }
    else {
      uVar18 = uVar21;
      func_0x00010c07d7a0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar22 = uVar18;
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar22,0);
      uVar22 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uVar22 = uVar22 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c07bea0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_c0 = 0;
    }
    else {
      uVar18 = uVar21;
      func_0x00010c07bea0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar19 = uVar18;
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar19,0);
      uStack_c0 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uStack_c0 = uStack_c0 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c075440();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_c8 = 0;
    }
    else {
      uVar18 = uVar21;
      func_0x00010c075440(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar19 = uVar18;
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar19,0);
      uStack_c8 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uStack_c8 = uStack_c8 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c075420();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar18 = 0;
    }
    else {
      uVar19 = uVar21;
      func_0x00010c075420(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar18 = uVar19;
      func_0x00010c296d80(uVar19);
      func_0x00010c2709c0(uVar19);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x000100ab13ac(param_2,4,uVar18,0);
      uVar18 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar19);
      _objc_release(uVar19);
      uVar18 = uVar18 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c2598c0();
    uVar19 = uVar21;
    func_0x00010c0de6a0();
    uVar7 = uVar21;
    func_0x00010c08b320(uVar21);
    uVar8 = uVar21;
    func_0x00010c2693c0(uVar21);
    uVar9 = uVar21;
    func_0x00010c25b720(uVar21);
    uVar10 = uVar21;
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    FUN_107c08e00(param_2,uVar10);
    uVar12 = uVar21;
    func_0x00010c0ddcc0();
    uVar13 = uVar21;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    FUN_107c08e00(param_2,uVar13);
    uVar15 = uVar21;
    func_0x00010bfa4340(uVar21);
    uVar16 = uVar21;
    func_0x00010bf421e0(uVar21);
    *(undefined1 *)(param_2 + 0x46) = 1;
    uVar17 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x0001001ce1c8(param_2,0x10,uVar9,0);
    func_0x0001001ce170(param_2,0xe,uVar8,0);
    func_0x0001001ce170(param_2,0xc,uVar7,0);
    FUN_107c08f30(param_2,0x2c,uVar18);
    FUN_107c08f30(param_2,0x2a,uStack_c8);
    FUN_107c08f30(param_2,0x28,uStack_c0);
    func_0x0001001ce354(param_2,0x26,uVar16,0);
    FUN_107c08f30(param_2,0x24,uVar22);
    FUN_107c08f30(param_2,0x22,uVar20);
    func_0x000100c3b024(param_2,0x20,uVar15,0);
    func_0x0001001ce2e4(param_2,0x1e,uVar14 & 0xffffffff);
    func_0x000107c08f94(param_2,0x1c,uStack_b8);
    if (uStack_88 != 0) {
      func_0x0001001ce088(param_2,4);
      func_0x0001001ce354(param_2,0x1a,
                          (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                           *(int *)(param_2 + 0x28)) - (int)uStack_88) + 4,0);
    }
    func_0x0001001ce354(param_2,0x18,uVar12 & 0xffffffff,0);
    func_0x0001001ce2e4(param_2,0x16,uVar11 & 0xffffffff);
    FUN_107c08f30(param_2,0x14,uStack_b0);
    FUN_107c08f30(param_2,0x12,uStack_a8);
    func_0x0001001ce354(param_2,10,uVar19 & 0xffffffff,0);
    FUN_107c08f30(param_2,8,uStack_a0);
    FUN_107c08f30(param_2,6,uStack_98);
    func_0x0001001ce354(param_2,4,uVar6 & 0xffffffff,0);
    uStack_88 = param_2;
    func_0x0001001ce548(param_2,((int)uVar1 - (int)uVar17) + (int)uVar2);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar21);
    _objc_release(uVar21);
    uStack_88 = uStack_88 & 0xffffffff;
  }
  _objc_release();
  uVar21 = param_3;
  func_0x00010bfea940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar21 == 0) {
    uStack_90 = 0;
  }
  else {
    uVar21 = param_3;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar6 = uVar21;
    func_0x00010c22d2a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar20 = 0;
    }
    else {
      uVar22 = uVar21;
      func_0x00010c22d2a0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar22);
      func_0x00010c2709c0(uVar22);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uVar20 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar22);
      _objc_release(uVar22);
      uVar20 = uVar20 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c0b4c40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar22 = 0;
    }
    else {
      uVar18 = uVar21;
      func_0x00010c0b4c40(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uVar22 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uVar22 = uVar22 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c11ce60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar18 = 0;
    }
    else {
      uVar19 = uVar21;
      func_0x00010c11ce60(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar19);
      func_0x00010c2709c0(uVar19);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uVar18 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar19);
      _objc_release(uVar19);
      uVar18 = uVar18 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010bf66680();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_90 = 0;
    }
    else {
      uVar19 = uVar21;
      func_0x00010bf66680(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar19);
      func_0x00010c2709c0(uVar19);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uStack_90 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar19);
      _objc_release(uVar19);
      uStack_90 = uStack_90 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010bf666a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar19 = 0;
    }
    else {
      uVar7 = uVar21;
      func_0x00010bf666a0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar7);
      func_0x00010c2709c0(uVar7);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uVar19 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar7);
      _objc_release(uVar7);
      uVar19 = uVar19 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c0b4ba0();
    uVar7 = uVar21;
    func_0x00010c11ce40();
    uVar8 = uVar21;
    func_0x00010c276740(uVar21);
    uVar9 = uVar21;
    func_0x00010c2769a0(uVar21);
    uVar10 = uVar21;
    func_0x00010c0b4c60(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    FUN_107c08e00(param_2,uVar10);
    uVar12 = uVar21;
    func_0x00010c08b100(uVar21);
    uVar13 = uVar21;
    func_0x00010c276720(uVar21);
    *(undefined1 *)(param_2 + 0x46) = 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x30);
    iVar5 = *(int *)(param_2 + 0x28);
    func_0x0001001ce170(param_2,0x18,uVar12,0);
    func_0x0001001ce354(param_2,0x1a,uVar13,0);
    func_0x000107c08ff8(param_2,0x16,uVar19);
    func_0x000107c08ff8(param_2,0x14,uStack_90);
    func_0x0001001ce2e4(param_2,0x12,uVar11 & 0xffffffff);
    func_0x0001001ce354(param_2,0x10,uVar9,0);
    func_0x0001001ce354(param_2,0xe,uVar8,0);
    func_0x0001001ce354(param_2,0xc,uVar7 & 0xffffffff,0);
    func_0x0001001ce354(param_2,10,uVar6 & 0xffffffff,0);
    func_0x000107c08ff8(param_2,8,uVar18);
    func_0x000107c08ff8(param_2,6,uVar22);
    func_0x000107c08ff8(param_2,4,uVar20);
    uStack_90 = param_2;
    func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar10);
    _objc_release(uVar21);
    _objc_release(uVar21);
    uStack_90 = uStack_90 & 0xffffffff;
  }
  _objc_release();
  uVar21 = param_3;
  func_0x00010c29d120();
  _objc_retainAutoreleasedReturnValue();
  if (uVar21 == 0) {
    uVar21 = 0;
  }
  else {
    uVar6 = param_3;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar21 = uVar6;
    func_0x00010c22d520();
    _objc_retainAutoreleasedReturnValue();
    if (uVar21 == 0) {
      uVar20 = 0;
    }
    else {
      uVar22 = uVar6;
      func_0x00010c22d520(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar22);
      func_0x00010c2709c0(uVar22);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uVar20 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar22);
      _objc_release(uVar22);
      uVar20 = uVar20 & 0xffffffff;
    }
    _objc_release(uVar21);
    uVar21 = uVar6;
    func_0x00010c0b5100();
    _objc_retainAutoreleasedReturnValue();
    if (uVar21 == 0) {
      uVar22 = 0;
    }
    else {
      uVar18 = uVar6;
      func_0x00010c0b5100(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uVar22 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uVar22 = uVar22 & 0xffffffff;
    }
    _objc_release(uVar21);
    uVar21 = uVar6;
    func_0x00010c0df660();
    _objc_retainAutoreleasedReturnValue();
    if (uVar21 == 0) {
      uStack_a8 = 0;
    }
    else {
      uVar18 = uVar6;
      func_0x00010c0df660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar19 = uVar18;
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce1c8(param_2,4,uVar19,0);
      uStack_a8 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uStack_a8 = uStack_a8 & 0xffffffff;
    }
    _objc_release(uVar21);
    uVar21 = uVar6;
    func_0x00010c23f8c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar21 == 0) {
      uStack_b0 = 0;
    }
    else {
      uVar18 = uVar6;
      func_0x00010c23f8c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar19 = uVar18;
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce1c8(param_2,4,uVar19,0);
      uStack_b0 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uStack_b0 = uStack_b0 & 0xffffffff;
    }
    _objc_release(uVar21);
    uVar21 = uVar6;
    func_0x00010bf66660();
    _objc_retainAutoreleasedReturnValue();
    if (uVar21 == 0) {
      uStack_b8 = 0;
    }
    else {
      uVar18 = uVar6;
      func_0x00010bf66660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uStack_b8 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uStack_b8 = uStack_b8 & 0xffffffff;
    }
    _objc_release(uVar21);
    uVar21 = uVar6;
    func_0x00010bf666c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar21 == 0) {
      uStack_c0 = 0;
    }
    else {
      uVar18 = uVar6;
      func_0x00010bf666c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010c296d80(uVar18);
      func_0x00010c2709c0(uVar18);
      *(undefined1 *)(param_2 + 0x46) = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      iVar4 = *(int *)(param_2 + 0x30);
      iVar5 = *(int *)(param_2 + 0x28);
      func_0x0001001ce11c(param_2,6);
      func_0x0001001ce290(param_1,0,param_2,4);
      uStack_c0 = param_2;
      func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
      _objc_release(uVar18);
      _objc_release(uVar18);
      uStack_c0 = uStack_c0 & 0xffffffff;
    }
    _objc_release(uVar21);
    uVar18 = uVar6;
    func_0x00010c0b5120();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_2;
    FUN_107c08e00(param_2,uVar18);
    uVar19 = uVar6;
    func_0x00010c2770c0();
    uVar7 = uVar6;
    func_0x00010c0de740();
    uVar8 = uVar6;
    func_0x00010bf96f80(uVar6);
    uVar9 = uVar6;
    func_0x00010bf9b860(uVar6);
    uVar10 = uVar6;
    func_0x00010c08b3a0(uVar6);
    uVar11 = uVar6;
    func_0x00010c23e820(uVar6);
    uVar12 = uVar6;
    func_0x00010c23e840(uVar6);
    uVar13 = uVar6;
    func_0x00010c2770a0(uVar6);
    uVar14 = uVar6;
    func_0x00010c277080(uVar6);
    *(undefined1 *)(param_2 + 0x46) = 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x30);
    iVar5 = *(int *)(param_2 + 0x28);
    func_0x0001001ce170(param_2,0x1a,uVar10,0);
    func_0x0001001ce354(param_2,0x22,uVar14,0);
    func_0x0001001ce354(param_2,0x20,uVar13,0);
    func_0x0001001ce354(param_2,0x1e,uVar12,0);
    func_0x0001001ce354(param_2,0x1c,uVar11,0);
    func_0x0001001ce354(param_2,0x18,uVar9,0);
    func_0x0001001ce354(param_2,0x16,uVar8,0);
    func_0x000107c08ff8(param_2,0x14,uStack_c0);
    func_0x000107c08ff8(param_2,0x12,uStack_b8);
    func_0x000107c08f94(param_2,0x10,uStack_b0);
    func_0x000107c08f94(param_2,0xe,uStack_a8);
    func_0x0001001ce354(param_2,0xc,uVar7 & 0xffffffff,0);
    func_0x0001001ce354(param_2,10,uVar19 & 0xffffffff,0);
    func_0x0001001ce2e4(param_2,8,uVar21 & 0xffffffff);
    func_0x000107c08ff8(param_2,6,uVar22);
    func_0x000107c08ff8(param_2,4,uVar20);
    uVar21 = param_2;
    func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar18);
    _objc_release(uVar6);
    _objc_release(uVar6);
    uVar21 = uVar21 & 0xffffffff;
  }
  _objc_release();
  uVar6 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_2;
  FUN_107c08e00(param_2,uVar6);
  uVar22 = param_3;
  func_0x00010c259740(param_3);
  uVar18 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c28b0e0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_2,0x10);
  func_0x0001001ce1c8(param_2,8,uVar18,0);
  func_0x0001001ce170(param_2,6,uVar22,0);
  if (uVar21 != 0) {
    func_0x0001001ce088(param_2,4);
    func_0x0001001ce354(param_2,0xe,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uVar21) + 4,0);
  }
  if (uStack_90 != 0) {
    func_0x0001001ce088(param_2,4);
    func_0x0001001ce354(param_2,0xc,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uStack_90) + 4,0);
  }
  if (uStack_88 != 0) {
    func_0x0001001ce088(param_2,4);
    func_0x0001001ce354(param_2,10,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uStack_88) + 4,0);
  }
  func_0x0001001ce2e4(param_2,4,uVar20 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar6);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 107c08e00; end: 107c08f2f;  */

undefined8 FUN_107c08e00(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_107c08ee0;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_107c08ee0;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_107c08ea0;
    param_1 = 0;
  }
  else {
LAB_107c08ea0:
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
LAB_107c08ee0:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107c08f30; end: 107c0905b;  */

void FUN_107c08f30(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_3) + 4;
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



/* Entry: 107c0905c; end: 107c09067; +[SCDiscoverFeedRecentEventsSession table] */

undefined * FUN_107c0905c(void)

{
  return &UNK_10f44dc9f;
}



/* Entry: 107c09068; end: 107c09a47; +[SCDiscoverFeedRecentEventsSession immutableObjectParse:bufferSize:] */

void FUN_107c09068(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ushort uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  uint *puVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined4 uVar23;
  long lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined4 uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puStack_a0;
  undefined *puStack_80;
  
  uVar5 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar5);
  puVar6 = PTR_PTR_1126d7220;
  _objc_alloc();
  lVar11 = (long)*piVar1;
  uVar9 = *(ushort *)((long)piVar1 - lVar11);
  if (uVar9 < 5) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar1 - lVar11))[2];
    if (uVar15 == 0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar15);
      puStack_80 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar11);
    }
    lVar11 = -lVar11;
    if (6 < uVar9) {
      uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 6);
      if (uVar15 == 0) {
        puStack_a0 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar15);
        puStack_a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = -(long)*piVar1;
        uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      uVar35 = 0;
      if (uVar9 < 9) {
        uVar8 = 0;
      }
      else {
        uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 8);
        if (uVar15 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)((long)piVar1 + uVar15);
        }
        if (10 < uVar9) {
          uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 10);
          if (uVar15 != 0) {
            uVar35 = *(undefined8 *)((long)piVar1 + uVar15);
          }
          if ((0xc < uVar9) &&
             (uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar11 + 0xc), uVar15 != 0)) {
            uVar20 = (ulong)*(uint *)((long)piVar1 + uVar15);
            puVar2 = (uint *)((long)((long)piVar1 + uVar15) + uVar20);
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
            _objc_retainAutoreleasedReturnValue();
            if (*puVar2 != 0) {
              lVar24 = uVar20 + uVar15 + (ulong)uVar5;
              lVar11 = (long)param_3 + lVar24 + 8;
              lVar24 = (long)param_3 + lVar24 + 0xc;
              puVar19 = puVar2 + 1;
              do {
                uVar5 = *puVar19;
                puVar21 = PTR_PTR_1126d7228;
                _objc_alloc();
                uVar18 = 0;
                piVar1 = (int *)((long)puVar19 + (ulong)uVar5);
                lVar12 = (long)*piVar1;
                puVar16 = (ushort *)((long)piVar1 - lVar12);
                uVar9 = *puVar16;
                if (uVar9 < 5) {
LAB_107c092ec:
                  puVar28 = (undefined *)0x0;
LAB_107c092f4:
                  puVar32 = (undefined *)0x0;
LAB_107c092f8:
                  uVar25 = 0;
                  uVar33 = 0;
                  uVar23 = 0;
                  uVar26 = 0;
                  lVar12 = 0;
                  uVar30 = 0;
                }
                else {
                  uVar18 = 0;
                  if ((ulong)puVar16[2] != 0) {
                    uVar18 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[2]);
                  }
                  if (uVar9 < 7) goto LAB_107c092ec;
                  uVar15 = (ulong)puVar16[3];
                  if (uVar15 == 0) {
                    puVar28 = (undefined *)0x0;
                  }
                  else {
                    uVar20 = (ulong)*(uint *)((long)piVar1 + uVar15);
                    puVar28 = PTR_PTR_1126d7230;
                    _objc_alloc();
                    piVar3 = (int *)((long)((long)piVar1 + uVar15) + uVar20);
                    lVar12 = (long)*piVar3;
                    uVar9 = *(ushort *)((long)piVar3 - lVar12);
                    if (uVar9 < 5) {
                      puVar32 = (undefined *)0x0;
LAB_107c09464:
                      uVar30 = 0;
LAB_107c09468:
                      puVar34 = (undefined *)0x0;
LAB_107c0946c:
                      lVar12 = 0;
                    }
                    else {
                      uVar17 = (ulong)((ushort *)((long)piVar3 - lVar12))[2];
                      if (uVar17 == 0) {
                        puVar32 = (undefined *)0x0;
                      }
                      else {
                        puVar4 = (uint *)((long)piVar3 + uVar17);
                        puVar32 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                            (long)puVar4 + (ulong)*puVar4 + 4);
                        _objc_retainAutoreleasedReturnValue();
                        lVar12 = (long)*piVar3;
                        uVar9 = *(ushort *)((long)piVar3 - lVar12);
                      }
                      lVar12 = -lVar12;
                      if (uVar9 < 7) goto LAB_107c09464;
                      uVar17 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 6);
                      if (uVar17 == 0) {
                        uVar30 = 0;
                      }
                      else {
                        uVar30 = *(undefined8 *)((long)piVar3 + uVar17);
                      }
                      if (uVar9 < 9) goto LAB_107c09468;
                      uVar17 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 8);
                      if (uVar17 == 0) {
                        puVar34 = (undefined *)0x0;
                      }
                      else {
                        puVar4 = (uint *)((long)piVar3 + uVar17);
                        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                            (long)puVar4 + (ulong)*puVar4 + 4);
                        _objc_retainAutoreleasedReturnValue();
                        lVar12 = -(long)*piVar3;
                        uVar9 = *(ushort *)((long)piVar3 - (long)*piVar3);
                      }
                      if ((uVar9 < 0xb) ||
                         (uVar17 = (ulong)*(ushort *)((long)piVar3 + lVar12 + 10), uVar17 == 0))
                      goto LAB_107c0946c;
                      puVar4 = (uint *)((long)piVar3 + uVar17);
                      lVar12 = (long)puVar4 + (ulong)*puVar4;
                    }
                    FUN_107c0acb8();
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = (long)*piVar3;
                    uVar9 = *(ushort *)((long)piVar3 - lVar13);
                    if (uVar9 < 0xd) {
                      puVar27 = (undefined *)0x0;
LAB_107c095f4:
                      puVar22 = (undefined *)0x0;
LAB_107c095f8:
                      uVar14 = 0;
LAB_107c095fc:
                      uVar10 = 0;
                    }
                    else {
                      uVar17 = (ulong)((ushort *)((long)piVar3 - lVar13))[6];
                      if (uVar17 == 0) {
                        puVar27 = (undefined *)0x0;
                      }
                      else {
                        uVar29 = (ulong)*(uint *)((long)piVar3 + uVar17);
                        puVar4 = (uint *)((long)((long)piVar3 + uVar17) + uVar29);
                        puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                                            *puVar4);
                        _objc_retainAutoreleasedReturnValue();
                        if (*puVar4 != 0) {
                          lVar31 = uVar17 + uVar20 + uVar15 + uVar5;
                          lVar13 = lVar11 + lVar31;
                          lVar31 = lVar24 + lVar31;
                          do {
                            puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                                lVar31 + uVar29 + (ulong)*(uint *)(lVar13 + uVar29))
                            ;
                            _objc_retainAutoreleasedReturnValue();
                            if (puVar27 != (undefined *)0x0) {
                              func_0x00010befa120(puVar22,param_2,puVar27);
                            }
                            _objc_release(puVar27);
                            lVar13 = lVar13 + 4;
                            lVar31 = lVar31 + 4;
                          } while ((uint *)(lVar13 + uVar29) != puVar4 + (ulong)*puVar4 + 1);
                        }
                        puVar27 = puVar22;
                        func_0x00010bf51e00(puVar22);
                        _objc_release(puVar22);
                        lVar13 = (long)*piVar3;
                        uVar9 = *(ushort *)((long)piVar3 - lVar13);
                      }
                      lVar13 = -lVar13;
                      if (uVar9 < 0xf) goto LAB_107c095f4;
                      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0xe);
                      if (uVar15 == 0) {
                        puVar22 = (undefined *)0x0;
                      }
                      else {
                        puVar4 = (uint *)((long)piVar3 + uVar15);
                        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                            (long)puVar4 + (ulong)*puVar4 + 4);
                        _objc_retainAutoreleasedReturnValue();
                        lVar13 = -(long)*piVar3;
                        uVar9 = *(ushort *)((long)piVar3 - (long)*piVar3);
                      }
                      if (uVar9 < 0x15) goto LAB_107c095f8;
                      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x14);
                      uVar14 = 0;
                      if (uVar15 != 0) {
                        uVar14 = *(undefined8 *)((long)piVar3 + uVar15);
                      }
                      if (uVar9 < 0x17) goto LAB_107c095fc;
                      uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar13 + 0x16);
                      uVar10 = 0;
                      if (uVar15 != 0) {
                        uVar10 = *(undefined8 *)((long)piVar3 + uVar15);
                      }
                    }
                    func_0x00010c04dc40(puVar28,param_2,puVar32,uVar30,puVar34,lVar12,puVar27,
                                        puVar22,uVar14,uVar10);
                    _objc_release(puVar22);
                    _objc_release(puVar27);
                    _objc_release(lVar12);
                    _objc_release(puVar34);
                    _objc_release(puVar32);
                    lVar12 = (long)*piVar1;
                    uVar9 = *(ushort *)((long)piVar1 - lVar12);
                  }
                  lVar12 = -lVar12;
                  if (uVar9 < 9) goto LAB_107c092f4;
                  if (*(short *)((long)piVar1 + lVar12 + 8) == 0) {
                    puVar32 = (undefined *)0x0;
                  }
                  else {
                    puVar32 = PTR_PTR_1126d7238;
                    _objc_alloc(PTR_PTR_1126d7238);
                    func_0x00010c04dec0();
                    lVar12 = -(long)*piVar1;
                    uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
                  }
                  if (uVar9 < 0xb) goto LAB_107c092f8;
                  uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 10);
                  if (uVar15 == 0) {
                    uVar30 = 0;
                  }
                  else {
                    uVar30 = *(undefined8 *)((long)piVar1 + uVar15);
                  }
                  if (uVar9 < 0xd) {
                    uVar33 = 0;
                    uVar23 = 0;
LAB_107c09860:
                    uVar25 = 0;
                    uVar26 = 0;
LAB_107c09864:
                    lVar12 = 0;
                  }
                  else {
                    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0xc);
                    if (uVar15 == 0) {
                      uVar23 = 0;
                    }
                    else {
                      uVar23 = *(undefined4 *)((long)piVar1 + uVar15);
                    }
                    if (uVar9 < 0xf) {
                      uVar33 = 0;
                      goto LAB_107c09860;
                    }
                    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0xe);
                    if (uVar15 == 0) {
                      uVar33 = 0;
                    }
                    else {
                      uVar33 = *(undefined4 *)((long)piVar1 + uVar15);
                    }
                    if (uVar9 < 0x11) goto LAB_107c09860;
                    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0x10);
                    if (uVar15 == 0) {
                      uVar26 = 0;
                    }
                    else {
                      uVar26 = *(undefined4 *)((long)piVar1 + uVar15);
                    }
                    if (uVar9 < 0x13) {
                      uVar25 = 0;
                      goto LAB_107c09864;
                    }
                    uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0x12);
                    if (uVar15 == 0) {
                      uVar25 = 0;
                    }
                    else {
                      uVar25 = *(undefined4 *)((long)piVar1 + uVar15);
                    }
                    if ((uVar9 < 0x15) ||
                       (uVar15 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 0x14), uVar15 == 0))
                    goto LAB_107c09864;
                    puVar4 = (uint *)((long)piVar1 + uVar15);
                    lVar12 = (long)puVar4 + (ulong)*puVar4;
                  }
                }
                FUN_107c0acb8();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c010f20(uVar30,puVar21,param_2,uVar18,puVar28,puVar32,uVar23,uVar33,
                                    uVar26,uVar25);
                _objc_release(lVar12);
                _objc_release(puVar32);
                _objc_release(puVar28);
                func_0x00010befa120(puVar7,param_2,puVar21);
                _objc_release(puVar21);
                puVar19 = puVar19 + 1;
                lVar11 = lVar11 + 4;
                lVar24 = lVar24 + 4;
              } while (puVar19 != puVar2 + 1 + *puVar2);
            }
            puVar21 = puVar7;
            func_0x00010bf51e00(puVar7);
            _objc_release(puVar7);
            goto LAB_107c098c0;
          }
        }
      }
      puVar21 = (undefined *)0x0;
      goto LAB_107c098c0;
    }
  }
  puStack_a0 = (undefined *)0x0;
  uVar8 = 0;
  puVar21 = (undefined *)0x0;
  uVar35 = 0;
LAB_107c098c0:
  func_0x00010c045160(uVar35,puVar6,param_2,puStack_80,puStack_a0,uVar8,puVar21);
  _objc_release(puVar21);
  _objc_release(puStack_a0);
  _objc_release(puStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c09a48; end: 107c09a5b; +[SCDiscoverFeedRecentEventsSession objectClassFunctionPointer] */

undefined1  [16] FUN_107c09a48(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_107c09ac4;
  auVar1._0_8_ = FUN_107c09a5c;
  return auVar1;
}



/* Entry: 107c09a5c; end: 107c09ac3;  */

void FUN_107c09a5c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf3abd4f;
  _strcmp(&DAT_10f3abd4f,param_1);
  if (iVar1 != 0) {
    iVar1 = 0xf44dcc7;
    _strcmp(&DAT_10f44dcc7,param_1);
    if (iVar1 != 0) {
      _strcmp(&DAT_10f44dcd3,param_1);
    }
  }
  return;
}



/* Entry: 107c09ac4; end: 107c09c3f;  */

bool FUN_107c09ac4(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 2) {
    func_0x0001001b9e08(param_2,&UNK_10f44ddba);
    _sqlite3_bind_int64();
    uVar6 = 0;
    if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar5 != 0)) {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar5);
    }
    _sqlite3_bind_double(uVar6,param_2,2);
  }
  else if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f44dd50);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar5);
    }
    _sqlite3_bind_int64(param_2,2,uVar4);
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f44dce2);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
      _sqlite3_bind_null(param_2,2);
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
    }
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 107c09c40; end: 107c09cab;  */

void FUN_107c09c40(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d7220;
    _objc_alloc(PTR_PTR_1126d7220);
    func_0x00010c045160(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c09cac; end: 107c09ce7; -[SCDiscoverFeedRecentEventsSessionChangeRequest .cxx_destruct] */

void FUN_107c09cac(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107c09ce8; end: 107c09cf3; -[SCDiscoverFeedRecentEventsSessionChangeRequest table] */

undefined * FUN_107c09ce8(void)

{
  return &UNK_10f44dc9f;
}



/* Entry: 107c09cf4; end: 107c09e67; -[SCDiscoverFeedRecentEventsSessionChangeRequest createTableWithSQLite:] */

void FUN_107c09cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee2453,0x9b,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee24ee,0x88,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dee2576,0xb1,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee2627,0x85,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dee26ac,0xab,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dee2757,0x88,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dee27df,0xb4,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 107c09e68; end: 107c0a75f; -[SCDiscoverFeedRecentEventsSessionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107c09e68(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

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
  double dVar15;
  undefined8 uVar16;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar7 = param_2;
  if (iVar3 == 1) {
    FUN_107c09c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    FUN_107c0a760(param_5,puVar7);
    func_0x0001001ce6fc(param_5,lVar8,0,0);
    puVar14 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar14;
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf636c0();
    func_0x000105660a60();
    _objc_release(puVar9);
    lVar8 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f44df6e);
    if (lVar8 == 0) goto LAB_107c0a668;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_107c0a668;
    uVar13 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar12 & 1) != 0) {
      lVar8 = param_4;
      func_0x0001001b9e08(param_4,&UNK_10f44dce2);
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
      if ((int)lVar8 != 0x65) goto LAB_107c0a668;
    }
    if (((uint)puVar12 >> 8 & 1) != 0) {
      lVar8 = param_4;
      func_0x0001001b9e08(param_4,&UNK_10f44dd50);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(lVar8,2,uVar10);
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_107c0a668;
    }
    if (((uint)puVar12 >> 0x10 & 1) != 0) {
      func_0x0001001b9e08(param_4,&UNK_10f44ddba);
      _sqlite3_bind_int64();
      uVar16 = 0;
      if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar11 != 0)) {
        uVar16 = *(undefined8 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_double(uVar16,param_4,2);
      _sqlite3_step();
      if ((int)param_4 != 0x65) goto LAB_107c0a668;
    }
    *(undefined8 *)(param_2 + 8) = uVar13;
    func_0x00010c1eeb60(puVar7);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d7220);
    func_0x00010c21c9a0(puVar9);
    puVar12 = puVar7;
LAB_107c0a640:
    _objc_release(puVar9);
    _objc_retain(puVar12);
    puVar7 = puVar12;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar8 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f44de2a);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f44de6d);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_107c0a004;
            }
            lVar8 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f44dec3);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_107c0a004;
            }
            func_0x0001001b9e08(param_4,&UNK_10f44df17);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_107c0a004;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d7220);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar9);
            _objc_release(puVar7);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107c0a674;
          }
        }
      }
LAB_107c0a004:
      puVar12 = (undefined *)0x0;
      goto LAB_107c0a674;
    }
    FUN_107c09c40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    FUN_107c0a760(param_5,puVar7);
    func_0x0001001ce6fc(param_5,lVar8,0,0);
    puVar14 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar7);
    lVar8 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f44dfc1);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d7220);
        puVar12 = puVar9;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar12;
        func_0x00010c0f1c40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c0f1c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar9);
        _objc_retain(puVar5);
        if (puVar9 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_107c0a4f8:
          puVar9 = puVar12;
          func_0x00010c160660();
          puVar5 = puVar7;
          func_0x00010c160660();
          if (puVar9 != puVar5) {
            lVar8 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f44e08c);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
            }
            _sqlite3_bind_int64(lVar8,1,uVar10);
            _sqlite3_bind_int64(lVar8,2,uVar13);
            _sqlite3_step();
            if ((int)lVar8 != 0x65) goto LAB_107c0a658;
          }
          func_0x00010c160400(puVar12);
          dVar15 = param_1;
          func_0x00010c160400(puVar7);
          if (param_1 != dVar15) {
            func_0x0001001b9e08(param_4,&UNK_10f44e0f6);
            uVar16 = 0;
            if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar11 != 0)) {
              uVar16 = *(undefined8 *)((long)piVar1 + uVar11);
            }
            _sqlite3_bind_double(uVar16,param_4,1);
            _sqlite3_bind_int64(param_4,2,uVar13);
            _sqlite3_step();
            if ((int)param_4 != 0x65) goto LAB_107c0a658;
          }
          _objc_release(puVar12);
          _objc_release(puVar7);
          puVar9 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d7220);
          func_0x00010c21c9a0(puVar9);
          puVar12 = puVar7;
          goto LAB_107c0a640;
        }
        if ((puVar9 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar9);
        }
        else {
          puVar6 = puVar9;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar5);
          _objc_release(puVar9);
          if (((ulong)puVar6 & 1) != 0) goto LAB_107c0a4f8;
        }
        lVar8 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f44e01e);
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
        if ((int)lVar8 == 0x65) goto LAB_107c0a4f8;
LAB_107c0a658:
        _objc_release(puVar12);
      }
    }
    _objc_release(puVar7);
LAB_107c0a668:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_107c0a674:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107c0a760; end: 107c0acb7;  */

undefined * FUN_107c0a760(undefined *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined4 *puStack_178;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined ***pppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_120 = &PTR_FUN_110a00a78;
  pcStack_118 = FUN_107c0ae14;
  pppuStack_108 = &ppuStack_120;
  uVar5 = param_2;
  func_0x00010c122440();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar21 = 0;
  _objc_retain(uVar5);
  uVar6 = uVar5;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (uVar6 == 0) {
    puStack_178 = (undefined4 *)0x0;
    puVar20 = (undefined4 *)0x0;
  }
  else {
    puStack_178 = (undefined4 *)0x0;
    puVar20 = (undefined4 *)0x0;
    puVar16 = (undefined4 *)0x0;
    do {
      uVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(uVar5);
        }
        uVar17 = *(undefined8 *)(uVar15 * 8);
        _objc_retain(uVar17);
        _objc_retain(uVar17);
        uStack_128 = uVar17;
        if (pppuStack_108 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_107c0abc4;
        }
        pppuVar7 = pppuStack_108;
        (*(code *)(*pppuStack_108)[6])(pppuStack_108,param_1,&uStack_128);
        _objc_release(uStack_128);
        if (puVar20 < puVar16) {
          *puVar20 = (int)pppuVar7;
          puVar19 = puStack_178;
        }
        else {
          lVar18 = (long)puVar20 - (long)puStack_178;
          uVar11 = (lVar18 >> 2) + 1;
          if (uVar11 >> 0x3e != 0) {
            FUN_107c0b770();
LAB_107c0abc4:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x107c0abc8);
            (*pcVar4)();
          }
          uVar14 = (long)puVar16 - (long)puStack_178 >> 1;
          if (uVar14 <= uVar11) {
            uVar14 = uVar11;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar16 - (long)puStack_178)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_107c0abc4;
          }
          lVar8 = uVar14 << 2;
          __Znwm();
          puVar20 = (undefined4 *)(lVar8 + lVar18);
          puVar16 = (undefined4 *)(lVar8 + uVar14 * 4);
          puVar19 = puVar20 + -(lVar18 >> 2);
          *puVar20 = (int)pppuVar7;
          _memcpy(puVar19,puStack_178,lVar18);
          if (puStack_178 != (undefined4 *)0x0) {
            __ZdlPv(puStack_178);
          }
        }
        puStack_178 = puVar19;
        puVar20 = puVar20 + 1;
        _objc_release(uVar17);
        uVar15 = uVar15 + 1;
      } while (uVar6 != uVar15);
      uVar6 = uVar5;
      func_0x00010bf52a60();
    } while (uVar6 != 0);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar5);
  if (pppuStack_108 == &ppuStack_120) {
    lVar13 = 0x20;
  }
  else {
    if (pppuStack_108 == (undefined ***)0x0) goto LAB_107c0a994;
    lVar13 = 0x28;
  }
  (**(code **)((long)*pppuStack_108 + lVar13))();
LAB_107c0a994:
  uVar6 = param_2;
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  FUN_107c0b640(param_1,uVar6);
  uVar15 = param_2;
  func_0x00010c0f1c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  FUN_107c0b640(param_1,uVar15);
  uVar11 = param_2;
  func_0x00010c160660(param_2);
  func_0x00010c160400(param_2);
  uVar5 = (long)puVar20 - (long)puStack_178;
  puVar16 = (undefined4 *)&UNK_10dee2a84;
  if (uVar5 != 0) {
    puVar16 = puStack_178;
  }
  param_1[0x46] = 1;
  func_0x0001001cddd0(param_1,uVar5,4);
  func_0x0001001cddd0(param_1,uVar5,4);
  if (puStack_178 != puVar20) {
    lVar13 = (long)uVar5 >> 2;
    do {
      iVar3 = puVar16[lVar13 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  param_1[0x46] = 0;
  puVar12 = param_1;
  func_0x0001001ce0bc(param_1,uVar5 >> 2);
  param_1[0x46] = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce11c(uVar21,0,param_1,10);
  func_0x0001001ce1c8(param_1,8,uVar11 & 0xffffffff,0);
  if ((int)puVar12 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar12) + 4,0);
  }
  func_0x0001001ce2e4(param_1,6,(ulong)puVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,(ulong)puVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar3 - iVar1) + iVar2);
  _objc_release(uVar15);
  _objc_release(uVar6);
  if (puStack_178 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_178 != (undefined4 *)0x0) {
    __ZdlPv(puStack_178);
  }
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = (undefined *)0x0;
  if (uVar5 != 0) {
    puVar9 = PTR_PTR_1126d7240;
    _objc_alloc(PTR_PTR_1126d7240);
    func_0x00010c0548e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar9;
}



/* Entry: 107c0acb8; end: 107c0ae13;  */

void FUN_107c0acb8(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126d7240);
    func_0x00010c0548e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c0ae14; end: 107c0b63f;  */

ulong FUN_107c0ae14(undefined8 param_1,ulong param_2,ulong param_3)

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
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
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
  _objc_retain(param_3);
  uVar21 = param_3;
  func_0x00010c259a80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar21 == 0) {
    uStack_168 = 0;
  }
  else {
    uVar21 = param_3;
    func_0x00010c259a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar6 = uVar21;
    func_0x00010c25ab80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar24 = 0;
    }
    else {
      uVar7 = uVar21;
      func_0x00010c25ab80(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = param_2;
      FUN_107c0b784(param_2,uVar7);
      _objc_release(uVar7);
      uVar24 = uVar24 & 0xffffffff;
    }
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lStack_158 = 0;
    uStack_150 = 0;
    lStack_160 = 0;
    param_1 = 0;
    lStack_138 = 0;
    aiStack_144[1] = 0;
    aiStack_144[2] = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(uVar6);
    uVar7 = uVar6;
    func_0x00010bf52a60();
    if (uVar7 != 0) {
      lVar22 = *plStack_130;
      do {
        uVar23 = 0;
        do {
          if (*plStack_130 != lVar22) {
            _objc_enumerationMutation(uVar6);
          }
          uVar8 = param_2;
          FUN_107c0b640(param_2,*(undefined8 *)(lStack_138 + uVar23 * 8));
          aiStack_144[0] = (int)uVar8;
          if (aiStack_144[0] != 0) {
            func_0x000100c47d40(&lStack_160,aiStack_144);
          }
          uVar23 = uVar23 + 1;
        } while (uVar7 != uVar23);
        uVar7 = uVar6;
        func_0x00010bf52a60();
      } while (uVar7 != 0);
    }
    _objc_release(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar6);
    uVar6 = uVar21;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    FUN_107c0b640();
    uVar23 = uVar21;
    func_0x00010c25b8c0();
    uVar8 = uVar21;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    FUN_107c0b640();
    lVar22 = 0x1130c2400;
    if (lStack_158 - lStack_160 != 0) {
      lVar22 = lStack_160;
    }
    uVar10 = param_2;
    func_0x000100c47e34(param_2,lVar22,lStack_158 - lStack_160 >> 2);
    uVar11 = uVar21;
    func_0x00010bf5b440(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    FUN_107c0b640(param_2,uVar11);
    uVar13 = uVar21;
    func_0x00010c25b460(uVar21);
    uVar14 = uVar21;
    func_0x00010c2595e0(uVar21);
    *(undefined1 *)(param_2 + 0x46) = 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x30);
    iVar5 = *(int *)(param_2 + 0x28);
    func_0x0001001ce1c8(param_2,0x16,uVar14,0);
    func_0x0001001ce1c8(param_2,0x14,uVar13,0);
    func_0x0001001ce170(param_2,6,uVar23,0);
    func_0x0001001ce2e4(param_2,0xe,uVar12 & 0xffffffff);
    func_0x000100c47f00(param_2,0xc,uVar10 & 0xffffffff);
    FUN_107c0b8f8(param_2,10,uVar24);
    func_0x0001001ce2e4(param_2,8,uVar9 & 0xffffffff);
    func_0x0001001ce2e4(param_2,4,uVar7 & 0xffffffff);
    uStack_168 = param_2;
    func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar6);
    if (lStack_160 != 0) {
      lStack_158 = lStack_160;
      __ZdlPv();
    }
    _objc_release(uVar21);
    _objc_release(uVar21);
    uStack_168 = uStack_168 & 0xffffffff;
  }
  _objc_release();
  uVar21 = param_3;
  func_0x00010bf4e740();
  _objc_retainAutoreleasedReturnValue();
  if (uVar21 == 0) {
    uStack_170 = 0;
  }
  else {
    uVar6 = param_3;
    func_0x00010bf4e740(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar24 = uVar6;
    func_0x00010c25a8a0(uVar6);
    uVar7 = uVar6;
    func_0x00010bfa4340(uVar6);
    uVar23 = uVar6;
    func_0x00010c156400(uVar6);
    *(undefined1 *)(param_2 + 0x46) = 1;
    iVar3 = *(int *)(param_2 + 0x20);
    iVar4 = *(int *)(param_2 + 0x30);
    iVar5 = *(int *)(param_2 + 0x28);
    func_0x000100c3b024(param_2,8,uVar23,0);
    func_0x0001001ce354(param_2,6,uVar7,0);
    func_0x000100c3b024(param_2,4,uVar24,0);
    uStack_170 = param_2;
    func_0x0001001ce548(param_2,(iVar3 - iVar4) + iVar5);
    _objc_release(uVar6);
    _objc_release(uVar6);
    uStack_170 = uStack_170 & 0xffffffff;
  }
  _objc_release(uVar21);
  uVar21 = param_3;
  func_0x00010c2a2940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar21 == 0) {
    uStack_178 = 0;
  }
  else {
    uVar6 = param_3;
    func_0x00010c2a2940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = param_2;
    FUN_107c0b784(param_2,uVar6);
    _objc_release(uVar6);
    uStack_178 = uStack_178 & 0xffffffff;
  }
  _objc_release(uVar21);
  uVar21 = param_3;
  func_0x00010bf9a440(param_3);
  func_0x00010c2709c0(param_3);
  uVar6 = param_3;
  func_0x00010c068440(param_3);
  uVar24 = param_3;
  func_0x00010c2a2860();
  uVar7 = param_3;
  func_0x00010c0de8a0(param_3);
  uVar23 = param_3;
  func_0x00010c0c31a0(param_3);
  uVar8 = param_3;
  func_0x00010bf972a0(param_3);
  uVar9 = param_3;
  func_0x00010bf9b860();
  uVar10 = param_3;
  func_0x00010bfeab20(param_3);
  uVar11 = param_3;
  func_0x00010bfe2ca0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x0001001ce1c8(param_2,0x1c,uVar11 & 0xffffffff,0);
  func_0x0001001ce1c8(param_2,0x18,uVar9,0);
  func_0x0001001ce1c8(param_2,0x16,uVar8,0);
  func_0x0001001ce1c8(param_2,0xc,uVar6 & 0xffffffff,0);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x0001001ce1c8(param_2,4,uVar21 & 0xffffffff,0);
  func_0x0001001ce354(param_2,0x1a,uVar10,0);
  FUN_107c0b8f8(param_2,0x14,uStack_178);
  func_0x0001001ce354(param_2,0x12,uVar23,0);
  func_0x0001001ce354(param_2,0x10,uVar7,0);
  func_0x0001001ce354(param_2,0xe,uVar24,0);
  if (uStack_170 != 0) {
    func_0x0001001ce088(param_2,4);
    func_0x0001001ce354(param_2,8,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uStack_170) + 4,0);
  }
  if (uStack_168 != 0) {
    func_0x0001001ce088(param_2,4);
    func_0x0001001ce354(param_2,6,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uStack_168) + 4,0);
  }
  pcVar19 = (char *)(ulong)(uint)(((int)uVar1 - (int)uVar20) + (int)uVar2);
  func_0x0001001ce548(param_2);
  uVar21 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar24);
  _objc_release(uVar24);
  _objc_release(uStack_170);
  _objc_release(param_3);
  __Unwind_Resume(uVar21);
  _objc_retain(pcVar19);
  if (pcVar19 == (char *)0x0) {
    uVar21 = 0;
    goto LAB_107c0b720;
  }
  pcVar15 = pcVar19;
  _CFStringGetCStringPtr(pcVar19,0x8000100);
  if (pcVar15 != (char *)0x0) {
    pcVar16 = pcVar15;
    _strlen(pcVar15);
    func_0x0001001cde08(uVar21,pcVar15,pcVar16);
    goto LAB_107c0b720;
  }
  pcVar15 = pcVar19;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar15 == (char *)0x0) {
    pcVar15 = pcVar19;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar15 != (char *)0x0) goto LAB_107c0b6e0;
    uVar21 = 0;
  }
  else {
LAB_107c0b6e0:
    pcVar17 = pcVar15;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar18 = pcVar15;
    func_0x00010c08fa60(pcVar15);
    pcVar16 = "";
    if (pcVar17 != (char *)0x0) {
      pcVar16 = pcVar17;
    }
    func_0x0001001cde08(uVar21,pcVar16,pcVar18);
  }
  _objc_release(pcVar15);
LAB_107c0b720:
  _objc_release(pcVar19);
  return uVar21;
}



/* Entry: 107c0b640; end: 107c0b76f;  */

undefined8 FUN_107c0b640(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_107c0b720;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_107c0b720;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_107c0b6e0;
    param_1 = 0;
  }
  else {
LAB_107c0b6e0:
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
LAB_107c0b720:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107c0b770; end: 107c0b783;  */

undefined * FUN_107c0b770(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c2768e0();
  uVar6 = param_2;
  func_0x00010c0ddf00(param_2);
  uVar7 = param_2;
  func_0x00010c0de900(param_2);
  uVar8 = param_2;
  func_0x00010c0ddf60(param_2);
  uVar9 = param_2;
  func_0x00010c0de000(param_2);
  uVar10 = param_2;
  func_0x00010c0ddc80(param_2);
  uVar11 = param_2;
  func_0x00010bf8b340(param_2);
  puVar4[0x46] = 1;
  iVar1 = *(int *)(puVar4 + 0x20);
  iVar2 = *(int *)(puVar4 + 0x30);
  iVar3 = *(int *)(puVar4 + 0x28);
  func_0x0001001ce354(puVar4,0x10,uVar11,0);
  func_0x0001001ce354(puVar4,0xe,uVar10,0);
  func_0x0001001ce354(puVar4,0xc,uVar9,0);
  func_0x0001001ce354(puVar4,10,uVar8,0);
  func_0x0001001ce354(puVar4,8,uVar7,0);
  func_0x0001001ce354(puVar4,6,uVar6,0);
  func_0x0001001ce354(puVar4,4,uVar5 & 0xffffffff,0);
  func_0x0001001ce548(puVar4,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 107c0b784; end: 107c0b8f7;  */

long FUN_107c0b784(long param_1,ulong param_2)

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
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2768e0();
  uVar5 = param_2;
  func_0x00010c0ddf00(param_2);
  uVar6 = param_2;
  func_0x00010c0de900(param_2);
  uVar7 = param_2;
  func_0x00010c0ddf60(param_2);
  uVar8 = param_2;
  func_0x00010c0de000(param_2);
  uVar9 = param_2;
  func_0x00010c0ddc80(param_2);
  uVar10 = param_2;
  func_0x00010bf8b340(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce354(param_1,0x10,uVar10,0);
  func_0x0001001ce354(param_1,0xe,uVar9,0);
  func_0x0001001ce354(param_1,0xc,uVar8,0);
  func_0x0001001ce354(param_1,10,uVar7,0);
  func_0x0001001ce354(param_1,8,uVar6,0);
  func_0x0001001ce354(param_1,6,uVar5,0);
  func_0x0001001ce354(param_1,4,uVar4 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107c0b8f8; end: 107c0b95b;  */

void FUN_107c0b8f8(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_3) + 4;
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



/* Entry: 107c0b95c; end: 107c0b963;  */

void FUN_107c0b95c(void)

{
  return;
}



/* Entry: 107c0b964; end: 107c0b997;  */

void FUN_107c0b964(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a00a78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107c0b998; end: 107c0b9d7;  */

void FUN_107c0b998(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a00a78;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107c0b9d8; end: 107c0ba13;  */

long FUN_107c0b9d8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a00ae8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107c0ba14; end: 107c0ba1f;  */

undefined ** FUN_107c0ba14(void)

{
  return &PTR_DAT_110a00ae8;
}



/* Entry: 107c0ba20; end: 107c0ba6b;  */

void FUN_107c0ba20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dacf38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c0ba6c; end: 107c0c21b;  */

undefined *
FUN_107c0ba6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR_PTR_1126c0f90;
  _objc_opt_new(PTR_PTR_1126c0f90);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar3);
  func_0x00010c1d64a0(puVar2);
  _objc_retain(param_1);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = PTR_PTR_1126c0e20;
  _objc_opt_new();
  func_0x000108f1337c();
  uVar18 = param_8;
  func_0x000108f136bc(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180e80(puVar3);
  _objc_release(uVar18);
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar3);
  _objc_release(uVar18);
  func_0x00010c21e620(puVar3);
  func_0x00010c1b2d80(puVar3);
  func_0x00010c175f00(puVar3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126d7180;
  _objc_alloc();
  func_0x00010c068640(param_7);
  func_0x00010c068660(param_7);
  func_0x00010c027be0();
  dVar22 = 0.0;
  _objc_retain(param_6);
  lVar6 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      _objc_release(param_6);
      func_0x00010c246ba0(puVar4);
      func_0x00010bf529e0();
      func_0x00010c0686a0();
      puVar11 = puVar4;
      func_0x00010c25e980(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126d7170;
      _objc_alloc_init(PTR_PTR_1126d7170);
      ppuVar16 = &PTR___NSConcreteGlobalBlock_110a00b70;
      puVar13 = puVar11;
      func_0x000100504554(puVar11,&PTR___NSConcreteGlobalBlock_110a00b70);
      puVar14 = puVar13;
      func_0x00010c0d3c80();
      func_0x00010c21f500(puVar12);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(param_7);
      _objc_release(param_6);
      func_0x00010c1ae2e0(puVar3);
      _objc_release(puVar12);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_1);
      func_0x00010c17cd40(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010bf3d0c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175f00();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b7828;
      _objc_opt_new(PTR_PTR_1126b7828);
      func_0x00010c19b220(puVar2);
      _objc_release(puVar3);
      _objc_retain(param_2);
      lVar6 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar18 = *(undefined8 *)(lVar19 * 8);
          puVar3 = puVar2;
          func_0x00010bfa43c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0(uVar18);
          func_0x00010befc800(puVar3);
          _objc_release(puVar3);
          lVar19 = lVar19 + 1;
        } while (lVar6 != lVar19);
        lVar6 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
      func_0x00010c1ec040(puVar2);
      func_0x00010c21a2a0(puVar2);
      lVar6 = param_5;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        puVar3 = PTR_PTR_1126d7250;
        _objc_opt_new(PTR_PTR_1126d7250);
        lVar6 = param_5;
        func_0x00010c0d3c80(param_5);
        func_0x00010c18bbe0(puVar3);
        _objc_release(lVar6);
        puVar4 = PTR_PTR_1126d7248;
        _objc_alloc_init(PTR_PTR_1126d7248);
        func_0x00010c172fe0();
        func_0x00010c172fe0(puVar4);
        func_0x00010c172fe0(puVar4);
        func_0x00010c1954a0(puVar3);
        _objc_release(puVar4);
        func_0x00010c18bae0(puVar2);
        _objc_release(puVar3);
      }
      lVar6 = param_2;
      func_0x00010bf4b900();
      if ((int)lVar6 != 0) {
        uVar18 = param_10;
        func_0x00010c0e00e0(param_10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8a60(puVar2);
        _objc_release(uVar18);
      }
      puVar3 = PTR_PTR_1126d7258;
      _objc_opt_new();
      func_0x00010c18e800();
      puVar4 = puVar3;
      func_0x00010c19e360(puVar2);
      _objc_release(puVar3);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_retain(ppuVar16);
      func_0x00010c0b4c40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar16;
      func_0x00010c0b4c40(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar16);
      ppuVar16 = ppuVar15;
      func_0x00010c2709c0(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf433a0(puVar2);
      _objc_release(ppuVar16);
      _objc_release(ppuVar15);
      _objc_release(puVar2);
      _objc_release(puVar4);
      return puVar3;
    }
    lVar19 = 0;
    do {
      dVar21 = dVar22;
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
        dVar21 = dVar22;
      }
      uVar20 = *(ulong *)(lVar19 * 8);
      uVar7 = uVar20;
      func_0x00010c0b4c40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      lVar9 = param_7;
      func_0x00010c0686c0();
      dVar22 = (double)-lVar9;
      if (dVar21 <= dVar22) {
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      else {
        _objc_retain(uVar20);
        _objc_retain(puVar5);
        uVar10 = uVar20;
        func_0x00010c0b4bc0();
        puVar11 = puVar5;
        func_0x00010c0b4be0();
        if (puVar11 < (undefined *)(uVar10 & 0xffffffff)) {
          _objc_release(puVar5);
          _objc_release(uVar20);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        else {
          uVar10 = uVar20;
          func_0x00010c276740();
          puVar11 = puVar5;
          func_0x00010c276760();
          _objc_release(puVar5);
          _objc_release(uVar20);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((undefined *)(uVar10 & 0xffffffff) <= puVar11) goto LAB_107c0be00;
        }
        func_0x00010befa120(puVar4);
      }
LAB_107c0be00:
      lVar19 = lVar19 + 1;
    } while (lVar6 != lVar19);
    lVar6 = param_6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107c0c21c; end: 107c0c2db;  */

undefined8 FUN_107c0c21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010c0b4c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0b4c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c2709c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107c0c2dc; end: 107c0c3e3;  */

void FUN_107c0c2dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7158;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c276740(param_2);
  func_0x00010c218460(puVar1);
  func_0x00010c08b100(param_2);
  func_0x00010c1b9440(puVar1);
  func_0x00010c0b4bc0(param_2);
  func_0x00010c2185a0(puVar1);
  uVar2 = param_2;
  func_0x00010c0f1c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f52050();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0de6a0(param_2);
  _objc_release(param_2);
  func_0x00010c1cf3e0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c0c3e4; end: 107c0c81b; -[SCBatchStoriesMixerRequester initWithProtobufRequestManager:endpointManager:userSegmentsObservable:ghostToFriendStoriesMetricsEmitter:ghostToMyStoriesMetricsEmitter:grapheneMetricsEmitter:currentUserId:interactionHistoryManager:circumstanceEngine:networkConnectivityMonitor:featureSettingsService:storiesConfigProvider:rtusClientCacheManager:locationProvider:] */

undefined8 *
FUN_107c0c3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126fa328;
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
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7210;
    _objc_alloc();
    func_0x000108f54410(param_11);
    func_0x000108f54424(param_11);
    func_0x000108f54438(param_11);
    func_0x000108f5444c(param_11);
    func_0x00010c01e6c0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar2 = param_14;
    func_0x00010c269d40(param_14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    uVar2 = param_5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 107c0c81c; end: 107c0c863;  */

void FUN_107c0c81c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32c20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c0c864; end: 107c0c89f; -[SCBatchStoriesMixerRequester fetchStoriesWithFeedTypes:deltaTokens:lastStreamTokens:bloopsInStoryEnabled:completionQueue:completion:] */

void FUN_107c0c864(void)

{
  func_0x00010be14880();
  return;
}



/* Entry: 107c0c8a0; end: 107c0cc37; -[SCBatchStoriesMixerRequester _fetchStoriesWithFeedTypes:interactionHistoryArray:deltaTokens:lastStreamTokens:bloopsInStoryEnabled:completionQueue:completion:] */

void FUN_107c0c8a0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_80,param_1);
  func_0x00010be53d00(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e80();
  _objc_release(uVar3);
  _objc_retain(param_3);
  ppuVar4 = param_3;
  func_0x00010bf529e0();
  ppuVar5 = param_3;
  if (ppuVar4 == (undefined **)0x1) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar4 = ppuVar5;
    func_0x00010c067ec0();
    iVar2 = (int)ppuVar4;
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
    if (iVar2 == 5) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110ea1a58;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e66018;
    if (iVar2 != 6) {
      ppuVar1 = ppuVar4;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb3b58;
    if (iVar2 != 7) {
      ppuVar4 = ppuVar1;
    }
  }
  else {
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a00c20);
    _objc_release(param_3);
    ppuVar4 = ppuVar5;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf17280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107c0cc38;
  puStack_b8 = &UNK_110a00bc0;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_3);
  ppuStack_b0 = param_3;
  uStack_88 = param_7;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_opt_class(PTR_PTR_1126b7608);
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_retain(uVar3);
  _objc_retain(ppuVar4);
  _objc_retain(param_9);
  func_0x00010c0b77a0(uVar6);
  _objc_release(param_9);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(ppuStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar3);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c0cc38; end: 107c0cca7;  */

void FUN_107c0cc38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf28a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0cca8; end: 107c0cd8b;  */

void FUN_107c0cca8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be84a40();
  _objc_release(lVar2);
  uVar1 = param_5;
  if (param_4 != 0) {
    uVar1 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c0cd8c; end: 107c0d067; -[SCBatchStoriesMixerRequester _createRequestWithSnapAccessToken:feedTypes:bloopsInStoryEnabled:deltaTokens:interactionHistoryArray:lastStreamTokens:] */

void FUN_107c0cd8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf17280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08a1a0();
  _objc_release(lVar3);
  dVar8 = (double)(lVar4 / 1000);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = param_1;
  func_0x00010c078a60(param_1);
  FUN_107c0ba6c(uVar2,param_4,lVar4,param_5,param_6,param_7,*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70),param_8,
                0.0 < dVar8 + 604800.0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  lVar4 = param_4;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    lVar4 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c067fc0();
    _objc_release(lVar4);
    if (lVar3 == 7) {
      puVar5 = PTR_PTR_1126d7248;
      _objc_alloc_init(PTR_PTR_1126d7248);
      func_0x00010c172fe0();
      uVar6 = uVar2;
      func_0x00010bf6d2c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1954a0();
      _objc_release(uVar6);
      func_0x00010c1ec040(uVar2);
      _objc_release(puVar5);
    }
  }
  func_0x00010bdcd3e0(param_1);
  lVar4 = param_1;
  func_0x00010be19400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010059c104(uVar2,param_3,uVar1,uVar7,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar4);
  func_0x00010be53ce0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 107c0d068; end: 107c0d103; -[SCBatchStoriesMixerRequester _appendRealTimeSignalToRequest:mixerEndpointSource:] */

void FUN_107c0d068(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf3d0c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c0e20;
    _objc_opt_new(PTR_PTR_1126c0e20);
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfc9520(uVar2,param_2,7,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8040(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c0d104; end: 107c0d147; -[SCBatchStoriesMixerRequester _purgeRTUSEvents:] */

void FUN_107c0d104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c142580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bea0(uVar1,param_2,7,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0d148; end: 107c0d173; -[SCBatchStoriesMixerRequester _handleUpdatedUserSegments:] */

void FUN_107c0d148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c078a60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsNewUser__11264a588,param_3);
  return;
}



/* Entry: 107c0d174; end: 107c0d1bb; -[SCBatchStoriesMixerRequester _logG2FSFetchDeltaInfoWithFeedTypes:] */

void FUN_107c0d174(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4b900(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbce0);
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b0970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_logStep__112609c68,0);
    return;
  }
  return;
}



/* Entry: 107c0d1bc; end: 107c0d227; -[SCBatchStoriesMixerRequester _logG2FSCreateRequestWithFeedTypes:] */

void FUN_107c0d1bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbce0);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf4b900(param_3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbcf8);
    if ((int)uVar1 == 0) goto LAB_107c0d218;
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x18;
  }
  func_0x00010c0b0960(*(undefined8 *)(param_1 + lVar2),param_2,1);
LAB_107c0d218:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0d228; end: 107c0d22f; -[SCBatchStoriesMixerRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:] */

void FUN_107c0d228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_logStoriesNetworkRequestWithEndp_112609d78);
  return;
}



/* Entry: 107c0d230; end: 107c0d237; -[SCBatchStoriesMixerRequester _friendStoriesAdditionalHeaders] */

undefined8 FUN_107c0d230(void)

{
  return 0;
}



/* Entry: 107c0d238; end: 107c0d243; -[SCBatchStoriesMixerRequester isNewUser] */

byte FUN_107c0d238(long param_1)

{
  return *(byte *)(param_1 + 0x78) & 1;
}



/* Entry: 107c0d244; end: 107c0d24b; -[SCBatchStoriesMixerRequester setIsNewUser:] */

void FUN_107c0d244(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107c0d24c; end: 107c0d30b; -[SCBatchStoriesMixerRequester .cxx_destruct] */

void FUN_107c0d24c(long param_1)

{
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



/* Entry: 107c0d30c; end: 107c0d347;  */

undefined ** FUN_107c0d30c(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  func_0x00010c067ec0();
  if (param_2 - 5U < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a00c40)[param_2 - 5U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  return ppuVar1;
}



/* Entry: 107c0d348; end: 107c0d413; -[SCBatchStoryLookupMixerNetworkRequester initWithProtobufRequestManager:endpointManager:grapheneMetricsEmitter:] */

undefined1 *
FUN_107c0d348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa330;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c0d414; end: 107c0d673; -[SCBatchStoryLookupMixerNetworkRequester fetchBatchStoryLookupWithSource:requestSource:requestConstructionBlock:completionQueue:completion:] */

void FUN_107c0d414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf172a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107c0d674;
  puStack_a8 = &UNK_110a00c58;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(uVar1);
  uStack_a0 = uVar1;
  uStack_88 = param_3;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_opt_class(PTR_PTR_1126b7618);
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0b77a0(uVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107c0d674; end: 107c0d6df;  */

void FUN_107c0d674(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf28c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0d6e0; end: 107c0d7eb;  */

void FUN_107c0d6e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f66a0(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar4);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = param_2;
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (param_4 == 0) {
    lVar3 = 0;
    uVar2 = param_5;
  }
  else {
    uVar2 = 0;
    lVar3 = param_4;
  }
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,lVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c0d7ec; end: 107c0d973; -[SCBatchStoryLookupMixerNetworkRequester _createRequestWithSnapAccessToken:path:source:requestConstructionBlock:] */

void FUN_107c0d7ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar7 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000108f599ec();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_6;
  (**(code **)(param_6 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  lVar4 = lVar1;
  uVar5 = param_4;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  _objc_retain(uVar5);
  FUN_107c0ba20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0da0(uVar8);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107c0d974; end: 107c0d9f7; -[SCBatchStoryLookupMixerNetworkRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:] */

void FUN_107c0d974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  FUN_107c0ba20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0da0(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0d9f8; end: 107c0da33; -[SCBatchStoryLookupMixerNetworkRequester .cxx_destruct] */

void FUN_107c0d9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c0da34; end: 107c0daff; -[SCIndividualStoriesMixerRequester initWithProtobufRequestManager:endpointManager:grapheneMetricsEmitter:] */

undefined1 *
FUN_107c0da34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa338;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c0db00; end: 107c0dd7b; -[SCIndividualStoriesMixerRequester fetchIndividualStoriesWithSource:requestSource:requestConstructionBlock:completionQueue:completion:] */

void FUN_107c0db00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2588e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107c0dd7c;
  puStack_98 = &UNK_110a00cb8;
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_retain(uVar2);
  uStack_90 = uVar2;
  _objc_retain(uVar1);
  uStack_88 = uVar1;
  _objc_opt_class(PTR_PTR_1126b7600);
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0b77a0(uVar3);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107c0dd7c; end: 107c0ddf7;  */

void FUN_107c0dd7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(param_1 + 0x30);
  pcVar3 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_2);
  (*pcVar3)(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0ddf8; end: 107c0debf;  */

void FUN_107c0ddf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(lVar2);
  uVar1 = param_5;
  if (param_4 != 0) {
    uVar1 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c0dec0; end: 107c0dec7; -[SCIndividualStoriesMixerRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:] */

void FUN_107c0dec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logStoriesNetworkRequestWithEndp_112609d78);
  return;
}



/* Entry: 107c0dec8; end: 107c0df03; -[SCIndividualStoriesMixerRequester .cxx_destruct] */

void FUN_107c0dec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c0df04; end: 107c0e35b; -[SCStoriesMixerNetworkRequester initWithSessionRequestManager:snapTokenProvider:attestationProvider:endpointManager:grapheneMetricsEmitter:ghostToFriendStoriesMetricsEmitter:ghostToMyStoriesMetricsEmitter:circumstanceEngine:userSegmentsObservable:currentUserId:networkConnectivityMonitor:interactionHistoryManager:featureSettingsService:storiesConfigProvider:rtusClientCacheManager:feedCardRequestSender:notificationPool:preferences:locationProvider:] */

undefined8 *
FUN_107c0df04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126fa340;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cf0a0;
    _objc_alloc(PTR_PTR_1126cf0a0);
    func_0x00010c03f3c0();
    puVar3 = PTR_PTR_1126d7260;
    _objc_alloc();
    func_0x00010c03b940();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d7268;
    _objc_alloc();
    func_0x00010c03b940();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d7270;
    _objc_alloc();
    func_0x00010c03b980();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d7278;
    _objc_alloc();
    func_0x00010c03b960();
    uVar5 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d7280;
    _objc_alloc();
    func_0x00010c03b940();
    uVar5 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d7288;
    _objc_alloc();
    func_0x00010c03b9a0();
    uVar5 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar5);
    _objc_retain(param_18);
    uVar5 = puVar1[7];
    puVar1[7] = param_18;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar1[8];
    puVar1[8] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_19);
    uVar5 = puVar1[9];
    puVar1[9] = param_19;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
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



/* Entry: 107c0e35c; end: 107c0e79f; -[SCStoriesMixerNetworkRequester fetchBatchStoryLookupWithSource:requestSource:requestConstructionBlock:completion:] */

void FUN_107c0e35c(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  int iStack_1ec;
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
  undefined8 uVar8;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d7290;
  func_0x00010c24b360(PTR_PTR_1126d7290);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c25d300(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
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
  lVar6 = param_5;
  (**(code **)(param_5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1359c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar6 == 0) {
    bVar1 = false;
  }
  else {
    lVar19 = *plStack_120;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(lVar7);
        }
        uVar20 = *(undefined8 *)(lStack_128 + lVar21 * 8);
        uVar5 = uVar20;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bf52680();
        if ((int)uVar3 == 0x23) {
          uVar3 = uVar20;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar3;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar17;
          func_0x00010bfda7c0();
          iVar2 = (int)uVar8;
          _objc_release(uVar17);
          _objc_release(uVar3);
        }
        else {
          iVar2 = 1;
        }
        _objc_release(uVar5);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar5 = uVar20;
        func_0x00010bf454e0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bf52680();
        func_0x00010c0df760(puVar9,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar18;
        func_0x00010bf4b900(uVar18,param_2,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(uVar5);
        if ((int)uVar3 == 0 || iVar2 == 0) {
          bVar1 = false;
          goto LAB_107c0e628;
        }
        func_0x00010bf454e0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,uVar20);
        _objc_release(uVar20);
        lVar21 = lVar21 + 1;
      } while (lVar6 != lVar21);
      lVar6 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar6 != 0);
    bVar1 = true;
  }
LAB_107c0e628:
  _objc_release(lVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126d7290;
  func_0x00010c24b320();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf1f320(uVar3,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar3);
  lVar6 = param_4;
  if ((bVar1) && ((int)uVar5 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf51e00();
    lVar19 = *(long *)(param_1 + 0x50);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar9;
    lVar7 = lVar19;
    uVar5 = param_6;
    func_0x00010c15b6a0(uVar3);
    _objc_release(lVar19);
    _objc_release(puVar9);
  }
  else {
    func_0x00010bec60e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb3b78);
    uVar20 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    uVar5 = uVar3;
    param_7 = param_6;
    func_0x00010bfa5360(uVar20);
  }
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar18);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  _objc_retain(lVar7);
  _objc_retain(uVar5);
  _objc_retain(param_7);
  lVar19 = lVar7;
  (**(code **)(lVar7 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar19;
  func_0x00010c1359a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar21;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf52680();
  if ((int)lVar12 == 0x23) {
    lVar12 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c1359a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bfda7c0();
    iStack_1ec = (int)lVar16;
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
  }
  else {
    iStack_1ec = 1;
  }
  _objc_release(lVar11);
  _objc_release(lVar21);
  _objc_release(lVar19);
  uVar20 = *(undefined8 *)(param_4 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d7290;
  func_0x00010c24b360(PTR_PTR_1126d7290);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar20;
  func_0x00010c25d300(uVar20,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(puVar4);
  _objc_release(uVar20);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar19 = lVar7;
  (**(code **)(lVar7 + 0x10))(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar19;
  func_0x00010c1359a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar21;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf52680();
  func_0x00010c0df760(puVar4,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010bf4b900(uVar3,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(lVar11);
  _objc_release(lVar21);
  _objc_release(lVar19);
  uVar17 = *(undefined8 *)(param_4 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d7290;
  func_0x00010c24b340(PTR_PTR_1126d7290);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar17;
  func_0x00010bf1f320(uVar17,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar17);
  if ((((int)uVar20 == 0) || ((int)uVar18 == 0)) || (iStack_1ec == 0)) {
    func_0x00010bec60e0(param_4,param_2,&PTR____CFConstantStringClassReference_110eb3b98);
    func_0x00010bfaa9e0(*(undefined8 *)(param_4 + 0x18),param_2,param_3,lVar6,lVar7,uVar5,param_7);
  }
  else {
    uVar18 = *(undefined8 *)(param_4 + 0x38);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar7;
    (**(code **)(lVar7 + 0x10))(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar19;
    func_0x00010c1359a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar21;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c940(uVar18,param_2,lVar11,lVar6,uVar5,param_7);
    _objc_release(lVar11);
    _objc_release(lVar21);
    _objc_release(lVar19);
    _objc_release(uVar18);
  }
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(uVar5);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107c0e7a0; end: 107c0eb5b; -[SCStoriesMixerNetworkRequester fetchStoryWithSource:requestSource:requestConstructionBlock:completionQueue:completion:] */

void FUN_107c0e7a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack_7c;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_5;
  (**(code **)(param_5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1359a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52680();
  if ((int)lVar4 == 0x23) {
    lVar4 = param_5;
    (**(code **)(param_5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1359a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfda7c0();
    iStack_7c = (int)lVar8;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    iStack_7c = 1;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d7290;
  func_0x00010c24b360(PTR_PTR_1126d7290);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010c25d300(uVar9,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(puVar10);
  _objc_release(uVar9);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_5;
  (**(code **)(param_5 + 0x10))(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1359a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52680();
  func_0x00010c0df760(puVar10,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf4b900(uVar11,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d7290;
  func_0x00010c24b340(PTR_PTR_1126d7290);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x00010bf1f320(uVar13,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar13);
  if ((((int)uVar9 == 0) || ((int)uVar14 == 0)) || (iStack_7c == 0)) {
    func_0x00010bec60e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb3b98);
    func_0x00010bfaa9e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6,
                        param_7);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    (**(code **)(param_5 + 0x10))(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1359a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c940(uVar14,param_2,lVar3,param_4,param_6,param_7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar14);
  }
  _objc_release(uVar11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c0eb5c; end: 107c0eb63; -[SCStoriesMixerNetworkRequester fetchViewerInfoWithBatchSnapsByType:requestSource:completion:] */

void FUN_107c0eb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchViewerInfoWithBatchSnapsByT_1125c8718);
  return;
}



/* Entry: 107c0eb64; end: 107c0eb6b; -[SCStoriesMixerNetworkRequester fetchStoriesWithFeedTypes:deltaTokens:lastStreamTokens:bloopsInStoryEnabled:completionQueue:completion:] */

void FUN_107c0eb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchStoriesWithFeedTypes_deltaT_1125c83b8);
  return;
}



/* Entry: 107c0eb6c; end: 107c0eb73; -[SCStoriesMixerNetworkRequester fetchIndividualStoriesWithSource:requestSource:requestConstructionBlock:completionQueue:completion:] */

void FUN_107c0eb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_fetchIndividualStoriesWithSource_1125c7830);
  return;
}



/* Entry: 107c0eb74; end: 107c0eb7b; -[SCStoriesMixerNetworkRequester fetchViewHistoryWithRequestSource:completionQueue:completion:] */

void FUN_107c0eb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_fetchViewHistoryWithRequestSourc_1125c86f8);
  return;
}



/* Entry: 107c0eb7c; end: 107c0eb83; -[SCStoriesMixerNetworkRequester uploadPremiumReadReceipts:requestSource:completionQueue:completion:] */

void FUN_107c0eb7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_uploadPremiumReadReceipts_reques_112681348);
  return;
}



/* Entry: 107c0eb84; end: 107c0eb8b; -[SCStoriesMixerNetworkRequester batchUploadPremiumReadReceipts:snapReadReceipts:requestSource:completionQueue:completion:] */

void FUN_107c0eb84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf173d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_batchUploadPremiumReadReceipts_s_1125a3698);
  return;
}



/* Entry: 107c0eb8c; end: 107c0eb93; -[SCStoriesMixerNetworkRequester fetchSpotlightStatsForSnapIds:requestSource:completionQueue:completion:] */

void FUN_107c0eb8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_fetchSpotlightStatsForSnapIds_re_1125c8348);
  return;
}



/* Entry: 107c0eb94; end: 107c0eb97; -[SCStoriesMixerNetworkRequester _submitInternalRequestNotificationWithText:] */

void FUN_107c0eb94(void)

{
  return;
}



/* Entry: 107c0eb98; end: 107c0ebf7; -[SCStoriesMixerNetworkRequester _presentStoriesRequestNotificationWithText:] */

void FUN_107c0eb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107c0ebf8; end: 107c0ec87; -[SCStoriesMixerNetworkRequester .cxx_destruct] */

void FUN_107c0ebf8(long param_1)

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



/* Entry: 107c0ec88; end: 107c0ee77; -[SCStoriesReadReceiptMixerRequester initWithProtobufRequestManager:grapheneMetricsEmitter:circumstanceEngine:currentUserId:networkConnectivityMonitor:preferences:locationProvider:] */

undefined8 *
FUN_107c0ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fa348;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
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
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
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



/* Entry: 107c0ee78; end: 107c0eeb7;  */

void FUN_107c0ee78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb3c98,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 107c0eeb8; end: 107c0f063; -[SCStoriesReadReceiptMixerRequester fetchViewHistoryWithRequestSource:completionQueue:completion:] */

void FUN_107c0eeb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb29c0();
  if ((int)lVar1 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107c0f064;
    puStack_78 = &UNK_110a00d18;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_opt_class(PTR_PTR_1126d7298);
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_retain(param_5);
    func_0x00010c0b77a0(uVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c0f064; end: 107c0f0c7;  */

void FUN_107c0f064(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0f0c8; end: 107c0f22f;  */

void FUN_107c0f0c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb3bd8;
  FUN_107c0ba20(&PTR____CFConstantStringClassReference_110eb3bd8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be564a0(lVar4);
  _objc_release(lVar4);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be92bc0();
    lVar4 = param_5;
  }
  else {
    if (param_3 == 0) {
      lVar4 = 0;
      goto LAB_107c0f1d8;
    }
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c252ee0(param_3);
    func_0x00010be87840(lVar2);
    lVar4 = 0;
  }
  _objc_release(lVar2);
LAB_107c0f1d8:
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = param_3;
  func_0x00010c252ee0(param_3);
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4,lVar2);
  _objc_release(ppuVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0f230; end: 107c0f473; -[SCStoriesReadReceiptMixerRequester uploadPremiumReadReceipts:requestSource:completionQueue:completion:] */

void FUN_107c0f230(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    pcVar4 = *(code **)(param_6 + 0x10);
    uVar3 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb29c0();
    if ((int)lVar1 == 0) {
      _objc_retain(&PTR____CFConstantStringClassReference_110eb3bf8);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_78,param_1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107c0f474;
      puStack_90 = &UNK_110a00d78;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_3);
      lStack_88 = param_3;
      _objc_opt_class(PTR_PTR_1126d72a0);
      _objc_copyWeak(auStack_b0,auStack_78);
      _objc_retain(param_6);
      func_0x00010c0b7780(uVar3);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_b0);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar2);
      _objc_release(&PTR____CFConstantStringClassReference_110eb3bf8);
      goto LAB_107c0f404;
    }
    pcVar4 = *(code **)(param_6 + 0x10);
    uVar3 = 0;
  }
  (*pcVar4)(param_6,uVar3);
LAB_107c0f404:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c0f474; end: 107c0f4f3;  */

void FUN_107c0f474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0f4f4; end: 107c0f623;  */

void FUN_107c0f4f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  _objc_release(param_5);
  func_0x00010be564a0(lVar1);
  _objc_release(lVar1);
  if (param_5 != 0 && param_4 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be92bc0();
  }
  else {
    if (param_3 == 0) goto LAB_107c0f5f8;
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c252ee0(param_3);
    func_0x00010be87840(lVar1);
  }
  _objc_release(lVar1);
LAB_107c0f5f8:
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_5 != 0 && param_4 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0f624; end: 107c0f89f; -[SCStoriesReadReceiptMixerRequester batchUploadPremiumReadReceipts:snapReadReceipts:requestSource:completionQueue:completion:] */

void FUN_107c0f624(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 + lVar2 == 0) {
    pcVar5 = *(code **)(param_7 + 0x10);
    uVar4 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb29c0();
    if ((int)lVar1 == 0) {
      _objc_retain(&PTR____CFConstantStringClassReference_110eb3bf8);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_78,param_1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107c0f8a0;
      puStack_98 = &UNK_110a00dd8;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_3);
      lStack_90 = param_3;
      _objc_retain(param_4);
      lStack_88 = param_4;
      _objc_opt_class(PTR_PTR_1126d72a8);
      _objc_copyWeak(auStack_b8,auStack_78);
      _objc_retain(param_7);
      func_0x00010c0b7780(uVar4);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_b8);
      _objc_release(lStack_88);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar3);
      _objc_release(&PTR____CFConstantStringClassReference_110eb3bf8);
      goto LAB_107c0f828;
    }
    pcVar5 = *(code **)(param_7 + 0x10);
    uVar4 = 0;
  }
  (*pcVar5)(param_7,uVar4);
LAB_107c0f828:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c0f8a0; end: 107c0f91f;  */

void FUN_107c0f8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0f920; end: 107c0fa4f;  */

void FUN_107c0f920(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  _objc_release(param_5);
  func_0x00010be564a0(lVar1);
  _objc_release(lVar1);
  if (param_5 != 0 && param_4 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be92bc0();
  }
  else {
    if (param_3 == 0) goto LAB_107c0fa24;
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c252ee0(param_3);
    func_0x00010be87840(lVar1);
  }
  _objc_release(lVar1);
LAB_107c0fa24:
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_5 != 0 && param_4 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0fa50; end: 107c0fcbb; -[SCStoriesReadReceiptMixerRequester fetchSpotlightStatsForSnapIds:requestSource:completionQueue:completion:] */

void FUN_107c0fa50(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107c0fcbc;
    puStack_80 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_78 = param_6;
    func_0x00010007380c(param_5,&puStack_98);
    uVar2 = uStack_78;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb29c0();
    if ((int)lVar1 == 0) {
      _objc_initWeak(auStack_c8,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_107c0fce4;
      puStack_e0 = &UNK_11094a660;
      _objc_copyWeak(auStack_d0,auStack_c8);
      _objc_retain(param_3);
      lStack_d8 = param_3;
      _objc_opt_class(PTR_PTR_1126d72b0);
      _objc_copyWeak(auStack_100,auStack_c8);
      _objc_retain(param_6);
      func_0x00010c0b77a0(uVar2);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_100);
      _objc_release(lStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_c8);
      goto LAB_107c0fc4c;
    }
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x107c0fcd0;
    puStack_a8 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_a0 = param_6;
    func_0x00010007380c(param_5,&puStack_c0);
    uVar2 = uStack_a0;
  }
  _objc_release(uVar2);
LAB_107c0fc4c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c0fcbc; end: 107c0fce3;  */

void FUN_107c0fcbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107c0fccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107c0fce4; end: 107c0fd4b;  */

void FUN_107c0fce4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c0fd4c; end: 107c0feb3;  */

void FUN_107c0fd4c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb3c58;
  FUN_107c0ba20(&PTR____CFConstantStringClassReference_110eb3c58);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be564a0(lVar4);
  _objc_release(lVar4);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be92bc0();
    lVar4 = param_5;
  }
  else {
    if (param_3 == 0) {
      lVar4 = 0;
      goto LAB_107c0fe5c;
    }
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c252ee0(param_3);
    func_0x00010be87840(lVar2);
    lVar4 = 0;
  }
  _objc_release(lVar2);
LAB_107c0fe5c:
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = param_3;
  func_0x00010c252ee0(param_3);
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4,lVar2);
  _objc_release(ppuVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c0feb4; end: 107c10067; -[SCStoriesReadReceiptMixerRequester _constructFetchRequestWithAccessToken:] */

void FUN_107c0feb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108f41eb8(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR____CFConstantStringClassReference_110eb3bd8);
  puVar4 = PTR_PTR_1126d72b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  _objc_opt_new(puVar4);
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar4);
  _objc_release(puVar5);
  func_0x00010c1d64a0(puVar4);
  uVar6 = uVar1;
  func_0x00010057694c(uVar1,uVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c17cd40(puVar4);
  _objc_release(uVar6);
  puVar5 = puVar4;
  func_0x00010059c104(puVar4,param_3,uVar3,&PTR____CFConstantStringClassReference_110eb3bd8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(&PTR____CFConstantStringClassReference_110eb3bd8);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107c10068; end: 107c1023f; -[SCStoriesReadReceiptMixerRequester _constructRequestWithPremiumReadReceipts:accessToken:attestationHeaders:] */

void FUN_107c10068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb3bf8;
  _objc_retain(&PTR____CFConstantStringClassReference_110eb3bf8);
  lVar1 = param_1;
  func_0x00010bde6860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_107c10240(&PTR____CFConstantStringClassReference_110eb3bf8,
                &PTR____CFConstantStringClassReference_110eb3c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110eb3bf8);
  puVar3 = PTR_PTR_1126d72c0;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  _objc_opt_new(puVar3);
  uVar4 = uVar6;
  func_0x000100564a1c(uVar6,uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c1c73c0(puVar3);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c1e7ee0(puVar3);
  _objc_release(uVar4);
  puVar5 = puVar3;
  func_0x00010059c104(puVar3,param_4,&PTR____CFConstantStringClassReference_110eb3bb8,ppuVar2,lVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107c10240; end: 107c102d3;  */

void FUN_107c10240(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c102d4; end: 107c10507; -[SCStoriesReadReceiptMixerRequester _constructRequestWithPremiumReadReceipts:snapReadReceipts:accessToken:attestationHeaders:] */

void FUN_107c102d4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb3bf8;
  _objc_retain(&PTR____CFConstantStringClassReference_110eb3bf8);
  lVar1 = param_1;
  func_0x00010bde6860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_107c10240(&PTR____CFConstantStringClassReference_110eb3bf8,
                &PTR____CFConstantStringClassReference_110eb3c38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110eb3bf8);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(lVar1);
  puVar3 = PTR_PTR_1126d72c8;
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  _objc_opt_new(puVar3);
  uVar4 = uVar7;
  func_0x000100564a1c(uVar7,uVar8,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010c1c73c0(puVar3);
  _objc_release(uVar4);
  lVar5 = param_4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010c0d3c80(param_4);
    func_0x00010c205200(puVar3);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c0d3c80(param_3);
    func_0x00010c1e0940(puVar3);
    _objc_release(lVar5);
  }
  puVar6 = puVar3;
  func_0x00010059c104(puVar3,param_5,&PTR____CFConstantStringClassReference_110eb3bb8,ppuVar2,lVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(ppuVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c10508; end: 107c1069b; -[SCStoriesReadReceiptMixerRequester _constructSpotlightStatsRequestWithSnapIds:accessToken:] */

void FUN_107c10508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108f41eb8(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR____CFConstantStringClassReference_110eb3c58);
  puVar3 = PTR_PTR_1126d72d0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(uVar5);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar7);
  _objc_opt_new(puVar3);
  uVar4 = uVar5;
  func_0x000100564a1c(uVar5,uVar1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar5);
  func_0x00010c1c73c0(puVar3);
  _objc_release(uVar4);
  uVar5 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c204700(puVar3);
  _objc_release(uVar5);
  puVar6 = puVar3;
  func_0x00010059c104(puVar3,param_4,uVar2,&PTR____CFConstantStringClassReference_110eb3c58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(&PTR____CFConstantStringClassReference_110eb3c58);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107c1069c; end: 107c10733; -[SCStoriesReadReceiptMixerRequester _constructAdditionalHeaders:] */

void FUN_107c1069c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_3;
  _objc_retain();
  func_0x000108f599d4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = param_3;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c00c560();
    func_0x00010c1d0640();
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c10734; end: 107c1074f; -[SCStoriesReadReceiptMixerRequester _logNetworkMetricsWithPath:success:requestSize:responseSize:] */

void FUN_107c10734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logStoriesNetworkRequestWithEndp_112609d78,
             param_3,&PTR____CFConstantStringClassReference_110eb3c78,param_4,param_5,param_6);
  return;
}



/* Entry: 107c10750; end: 107c10777; -[SCStoriesReadReceiptMixerRequester _isStatusCodeNonRetryable:] */

bool FUN_107c10750(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = 499 < param_3;
  if (param_3 - 400U < 100) {
    bVar1 = param_3 != 0x1ad && param_3 != 0x198;
  }
  return bVar1;
}



/* Entry: 107c10778; end: 107c1091b; -[SCStoriesReadReceiptMixerRequester _shouldBackoffFromRequestForEndpoint:] */

undefined8 FUN_107c10778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar7 == 0) {
    uVar7 = 0;
    goto LAB_107c108f4;
  }
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3cd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if ((lVar4 == 0) || (lVar5 = lVar4, func_0x00010c067ec0(), (int)lVar5 == 0)) {
LAB_107c108d0:
    uVar7 = 0;
  }
  else {
    lVar5 = lVar3;
    func_0x00010c067fc0();
    dVar8 = (double)lVar5;
    _exp2();
    dVar10 = (double)NEON_fminnm(dVar8,0x4050000000000000);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar9 = dVar8;
    func_0x00010bf885a0(lVar4);
    _objc_release(puVar6);
    if (dVar10 <= dVar8 - dVar9) goto LAB_107c108d0;
    uVar7 = 1;
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_107c108f4:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107c1091c; end: 107c10aff; -[SCStoriesReadReceiptMixerRequester _recordNonRetryableErrorTimestampForEndpoint:statusCode:] */

void FUN_107c1091c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if (((int)uVar6 != 0) &&
     (lVar2 = param_2, func_0x00010be44260(param_2,param_3,param_5),
     puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0, (int)lVar2 != 0)) {
    _objc_retain(param_4);
    func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110eb3cd8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = lVar2;
      func_0x00010c067fc0(lVar2);
      lVar4 = lVar4 + 1;
    }
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6,param_3,puVar5,param_4);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6,param_3,puVar5,puVar3);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


