/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c15910; end: 106c15933; +[SCLensFriendsFeedContextDocConversation objectClassFunctionPointer] */

undefined1  [16] FUN_106c15910(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106c1592c;
  auVar1._0_8_ = 0x106c15924;
  return auVar1;
}



/* Entry: 106c15934; end: 106c159ff;  */

undefined1 * FUN_106c15934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126f5c48;
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



/* Entry: 106c15a00; end: 106c15d57;  */

void FUN_106c15a00(undefined *param_1)

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
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar5,&UNK_10f3c0725);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bf50280(param_1);
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
            _objc_opt_class(PTR_PTR_1126d15d0);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_106c15ca8;
            puVar5 = PTR_PTR_1126d1638;
            _objc_alloc(PTR_PTR_1126d1638);
            puVar2 = puVar3;
            func_0x00010bf50280(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf9a520(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_106c15934(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_106c15ae8;
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
      _objc_opt_class(PTR_PTR_1126d15d0);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d1638;
        _objc_alloc(PTR_PTR_1126d1638);
        puVar2 = puVar3;
        func_0x00010bf50280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf9a520(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_106c15934(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_106c15ae8:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106c15cb0;
      }
LAB_106c15ca8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106c15cb0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c15d58; end: 106c15dcb;  */

void FUN_106c15d58(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106c15a00();
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



/* Entry: 106c15dcc; end: 106c15fdf;  */

void FUN_106c15dcc(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1638;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106c15a00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126d1638;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126d1638;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bf50280(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf9a520(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_106c15934(puVar4,0xffffffffffffffff,puVar2,puVar3);
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
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bf9a520(param_1);
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



/* Entry: 106c15fe0; end: 106c1603f;  */

void FUN_106c15fe0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d15d0;
    _objc_alloc(PTR_PTR_1126d15d0);
    func_0x00010c004ee0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c16040; end: 106c1606f; -[SCLensFriendsFeedContextDocConversationChangeRequest .cxx_destruct] */

void FUN_106c16040(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106c16070; end: 106c1607b; -[SCLensFriendsFeedContextDocConversationChangeRequest table] */

undefined * FUN_106c16070(void)

{
  return &UNK_10f3c06fa;
}



/* Entry: 106c1607c; end: 106c160c3; -[SCLensFriendsFeedContextDocConversationChangeRequest createTableWithSQLite:] */

void FUN_106c1607c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde7d6b,0xa8,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106c160c4; end: 106c1644b; -[SCLensFriendsFeedContextDocConversationChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106c160c4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_106c15fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106c1644c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c07cb);
    if (lVar6 == 0) goto LAB_106c163e8;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106c163e8;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d15d0);
    func_0x00010c21c9a0(puVar7);
LAB_106c163d0:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3c0785);
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
            _objc_opt_class(PTR_PTR_1126d15d0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106c163f4;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106c163f4;
    }
    FUN_106c15fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106c1644c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3c0826);
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
        _objc_opt_class(PTR_PTR_1126d15d0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106c163d0;
      }
    }
LAB_106c163e8:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106c163f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c1644c; end: 106c1691f;  */

ulong FUN_106c1644c(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110968e70;
  pcStack_108 = FUN_106c15174;
  pppuStack_f8 = &ppuStack_110;
  uVar17 = param_2;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar17);
  uVar5 = uVar17;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  puVar21 = (undefined4 *)0x0;
  puVar23 = (undefined4 *)0x0;
  if (uVar5 != 0) {
    puVar16 = (undefined4 *)0x0;
    do {
      uVar18 = 0;
      puVar22 = puVar21;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(uVar17);
        }
        uVar19 = *(undefined8 *)(uVar18 * 8);
        _objc_retain(uVar19);
        _objc_retain(uVar19);
        uStack_118 = uVar19;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_106c16834;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar23 < puVar16) {
          *puVar23 = (int)pppuVar6;
          puVar21 = puVar22;
        }
        else {
          lVar20 = (long)puVar23 - (long)puVar22;
          uVar8 = (lVar20 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_106c16a50();
LAB_106c16834:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x106c16838);
            (*pcVar4)();
          }
          uVar15 = (long)puVar16 - (long)puVar22 >> 1;
          if (uVar15 <= uVar8) {
            uVar15 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar16 - (long)puVar22)) {
            uVar15 = 0x3fffffffffffffff;
          }
          if (uVar15 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_106c16834;
          }
          lVar7 = uVar15 << 2;
          __Znwm();
          puVar23 = (undefined4 *)(lVar7 + lVar20);
          puVar16 = (undefined4 *)(lVar7 + uVar15 * 4);
          puVar21 = puVar23 + -(lVar20 >> 2);
          *puVar23 = (int)pppuVar6;
          _memcpy(puVar21,puVar22,lVar20);
          if (puVar22 != (undefined4 *)0x0) {
            __ZdlPv(puVar22);
          }
        }
        puVar23 = puVar23 + 1;
        _objc_release(uVar19);
        uVar18 = uVar18 + 1;
        puVar22 = puVar21;
      } while (uVar5 != uVar18);
      uVar5 = uVar17;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar17);
  _objc_release(uVar17);
  _objc_release(uVar17);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar14 = 0x20;
LAB_106c16680:
    (**(code **)((long)*pppuStack_f8 + lVar14))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_106c16680;
  }
  uVar5 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  FUN_106c16920(param_1,uVar5);
  uVar17 = (long)puVar23 - (long)puVar21;
  puVar16 = (undefined4 *)&UNK_10dde8038;
  if (uVar17 != 0) {
    puVar16 = puVar21;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar17,4);
  func_0x0001001cddd0(param_1,uVar17,4);
  if (puVar21 != puVar23) {
    lVar14 = (long)uVar17 >> 2;
    do {
      iVar3 = puVar16[lVar14 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar8 = param_1;
  func_0x0001001ce0bc(param_1,uVar17 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  if ((int)uVar8 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,6,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar8) + 4,0);
  }
  func_0x0001001ce2e4(param_1,4,uVar18 & 0xffffffff);
  pcVar13 = (char *)(ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1);
  _objc_release(uVar5);
  if (puVar21 != (undefined4 *)0x0) {
    __ZdlPv(puVar21);
  }
  uVar17 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puVar21 != (undefined4 *)0x0) {
    __ZdlPv(puVar21);
  }
  _objc_release(param_2);
  __Unwind_Resume(uVar17);
  _objc_retain(pcVar13);
  if (pcVar13 == (char *)0x0) {
    uVar17 = 0;
    goto LAB_106c16a00;
  }
  pcVar9 = pcVar13;
  _CFStringGetCStringPtr(pcVar13,0x8000100);
  if (pcVar9 != (char *)0x0) {
    pcVar10 = pcVar9;
    _strlen(pcVar9);
    func_0x0001001cde08(uVar17,pcVar9,pcVar10);
    goto LAB_106c16a00;
  }
  pcVar9 = pcVar13;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar9 == (char *)0x0) {
    pcVar9 = pcVar13;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar9 != (char *)0x0) goto LAB_106c169c0;
    uVar17 = 0;
  }
  else {
LAB_106c169c0:
    pcVar11 = pcVar9;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar12 = pcVar9;
    func_0x00010c08fa60(pcVar9);
    pcVar10 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar10 = pcVar11;
    }
    func_0x0001001cde08(uVar17,pcVar10,pcVar12);
  }
  _objc_release(pcVar9);
LAB_106c16a00:
  _objc_release(pcVar13);
  return uVar17;
}



/* Entry: 106c16920; end: 106c16a4f;  */

undefined8 FUN_106c16920(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106c16a00;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106c16a00;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106c169c0;
    param_1 = 0;
  }
  else {
LAB_106c169c0:
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
LAB_106c16a00:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106c16a50; end: 106c16a63;  */

void FUN_106c16a50(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 106c16a64; end: 106c16a6b;  */

void FUN_106c16a64(void)

{
  return;
}



/* Entry: 106c16a6c; end: 106c16a9f;  */

void FUN_106c16a6c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110968e70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 106c16aa0; end: 106c16adf;  */

void FUN_106c16aa0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110968e70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 106c16ae0; end: 106c16b1b;  */

long FUN_106c16ae0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110968ee0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106c16b1c; end: 106c16b27;  */

undefined ** FUN_106c16b1c(void)

{
  return &PTR_DAT_110968ee0;
}



/* Entry: 106c16b28; end: 106c16b8b;  */

undefined ** FUN_106c16b28(void)

{
  int iVar1;
  
  if ((bRam000000011381e620 & 1) == 0) {
    iVar1 = 0x1381e620;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1131786b0,0x100000000);
      ___cxa_guard_release(0x11381e620);
    }
  }
  return &PTR_PTR_1131786b0;
}



/* Entry: 106c16b8c; end: 106c16c13;  */

void FUN_106c16b8c(uint *param_1,undefined1 *param_2)

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



/* Entry: 106c16c14; end: 106c16c9f;  */

void FUN_106c16c14(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c1236c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c1236c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c16ca0; end: 106c16d57;  */

undefined8 FUN_106c16ca0(void)

{
  int iVar1;
  
  if ((bRam000000011381e698 & 1) == 0) {
    iVar1 = 0x1381e698;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e630 = 0xe;
      puRam000000011381e638 = &UNK_10f3c0894;
      uRam000000011381e640 = 0x100;
      pcRam000000011381e648 = FUN_106c16d58;
      pcRam000000011381e650 = FUN_106c16d90;
      ppuRam000000011381e628 = &PTR_DAT_110862958;
      uRam000000011381e668 = 0;
      uRam000000011381e660 = 0;
      uRam000000011381e678 = 0;
      uRam000000011381e670 = 0;
      uRam000000011381e688 = 0;
      uRam000000011381e680 = 0;
      uRam000000011381e690 = 0;
      ___cxa_atexit(&DAT_1050077c0,0x11381e628,0x100000000);
      ___cxa_guard_release(0x11381e698);
    }
  }
  return 0x11381e628;
}



/* Entry: 106c16d58; end: 106c16d8f;  */

undefined8 FUN_106c16d58(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 106c16d90; end: 106c16de3;  */

undefined8 FUN_106c16d90(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9a440(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106c16de4; end: 106c16def; +[SCLensFriendsFeedContextDocDeltaSyncEvent table] */

undefined * FUN_106c16de4(void)

{
  return &UNK_10f3c089e;
}



/* Entry: 106c16df0; end: 106c16eff; +[SCLensFriendsFeedContextDocDeltaSyncEvent immutableObjectParse:bufferSize:] */

void FUN_106c16df0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d15a8;
  _objc_alloc(PTR_PTR_1126d15a8);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar9 = (undefined *)0x0;
LAB_106c16e9c:
    uVar4 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    if (uVar6 < 7) goto LAB_106c16e9c;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar7));
    if (uVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar8);
    }
    if ((8 < uVar6) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar7)), uVar8 != 0)) {
      uVar5 = *(undefined8 *)((long)piVar1 + uVar8);
      goto LAB_106c16ea4;
    }
  }
  uVar5 = 0;
LAB_106c16ea4:
  func_0x00010c03d700(puVar3,param_2,puVar9,uVar4,uVar5);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c16f00; end: 106c16f13; +[SCLensFriendsFeedContextDocDeltaSyncEvent objectClassFunctionPointer] */

undefined1  [16] FUN_106c16f00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_106c16f3c;
  auVar1._0_8_ = FUN_106c16f14;
  return auVar1;
}



/* Entry: 106c16f14; end: 106c16f3b;  */

int FUN_106c16f14(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2b91d6;
  _strcmp("eventType",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 106c16f3c; end: 106c16fdb;  */

bool FUN_106c16f3c(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f3c08cb);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 106c16fdc; end: 106c1708b;  */

undefined1 *
FUN_106c16fdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f5c50;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106c1708c; end: 106c173cf;  */

void FUN_106c1708c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar6 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar6 < 0) {
      puVar6 = param_1;
      func_0x00010c1236c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010bf636c0();
        _objc_release(puVar6);
        func_0x0001001b9e08(puVar1,&UNK_10f3c0936);
        puVar6 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_106c1733c;
        puVar6 = param_1;
        func_0x00010c1236c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar6);
        _objc_release(puVar6);
        puVar6 = puVar1;
        _sqlite3_step();
        if ((int)puVar6 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar6 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d15a8);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar6;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar6);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_106c17334;
          puVar6 = PTR_PTR_1126d15c8;
          _objc_alloc(PTR_PTR_1126d15c8);
          puVar1 = puVar3;
          func_0x00010c1236c0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf9a440(puVar3);
          puVar5 = puVar3;
          func_0x00010c113c80(puVar3);
          FUN_106c16fdc(puVar6,puVar2,puVar1,puVar4,puVar5);
          param_1 = puVar3;
          goto LAB_106c17178;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d15a8);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d15c8;
        _objc_alloc(PTR_PTR_1126d15c8);
        puVar1 = puVar3;
        func_0x00010c1236c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf9a440(puVar3);
        puVar5 = puVar3;
        func_0x00010c113c80(puVar3);
        FUN_106c16fdc(puVar6,puVar2,puVar1,puVar4,puVar5);
        param_1 = puVar3;
LAB_106c17178:
        _objc_release(puVar1);
        goto LAB_106c1733c;
      }
LAB_106c17334:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_106c1733c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c173d0; end: 106c17443;  */

void FUN_106c173d0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106c1708c();
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



/* Entry: 106c17444; end: 106c1762f;  */

void FUN_106c17444(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d15c8;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106c1708c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126d15c8;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126d15c8;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c1236c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf9a440(param_1);
      puVar4 = param_1;
      func_0x00010c113c80(param_1);
      FUN_106c16fdc(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar5 = param_1;
    func_0x00010c1236c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf9a440();
    *(undefined **)(puVar1 + 0x20) = puVar5;
    puVar5 = param_1;
    func_0x00010c113c80();
    *(undefined **)(puVar1 + 0x28) = puVar5;
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c17630; end: 106c17693;  */

void FUN_106c17630(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d15a8;
    _objc_alloc(PTR_PTR_1126d15a8);
    func_0x00010c03d700();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c17694; end: 106c1769f; -[SCLensFriendsFeedContextDocDeltaSyncEventChangeRequest .cxx_destruct] */

void FUN_106c17694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106c176a0; end: 106c176ab; -[SCLensFriendsFeedContextDocDeltaSyncEventChangeRequest table] */

undefined * FUN_106c176a0(void)

{
  return &UNK_10f3c089e;
}



/* Entry: 106c176ac; end: 106c1775f; -[SCLensFriendsFeedContextDocDeltaSyncEventChangeRequest createTableWithSQLite:] */

void FUN_106c176ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dde8039,0x9e,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dde80d7,0x86,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dde815d,0xaf,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106c17760; end: 106c17cf7; -[SCLensFriendsFeedContextDocDeltaSyncEventChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106c17760(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_106c17630(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_106c17cf8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c0a31);
    if (lVar7 == 0) goto LAB_106c17c54;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_106c17c54;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f3c08cb);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_106c17c54;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d15a8);
    func_0x00010c21c9a0(puVar11);
LAB_106c17c2c:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f3c0992);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,&UNK_10f3c09da);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_106c1788c;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d15a8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106c17c60;
          }
        }
      }
LAB_106c1788c:
      puVar11 = (undefined *)0x0;
      goto LAB_106c17c60;
    }
    FUN_106c17630();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_106c17cf8(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c0a88);
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
        _objc_opt_class(PTR_PTR_1126d15a8);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9a440();
        puVar5 = puVar6;
        func_0x00010bf9a440();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,&UNK_10f3c0ae9);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_106c17c4c;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d15a8);
        func_0x00010c21c9a0(puVar11);
        goto LAB_106c17c2c;
      }
    }
LAB_106c17c4c:
    _objc_release(puVar6);
LAB_106c17c54:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_106c17c60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106c17cf8; end: 106c17ef3;  */

ulong FUN_106c17cf8(ulong param_1,char *param_2)

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
  func_0x00010c1236c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_106c17df8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_106c17df8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_106c17db8;
    uVar9 = 0;
  }
  else {
LAB_106c17db8:
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
LAB_106c17df8:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010bf9a440(param_2);
  pcVar6 = param_2;
  func_0x00010c113c80(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,8,pcVar6,0);
  func_0x0001001ce1c8(param_1,6,pcVar5,0);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106c17ef4; end: 106c17f57;  */

undefined ** FUN_106c17ef4(void)

{
  int iVar1;
  
  if ((bRam000000011381e6a0 & 1) == 0) {
    iVar1 = 0x1381e6a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113178720,0x100000000);
      ___cxa_guard_release(0x11381e6a0);
    }
  }
  return &PTR_PTR_113178720;
}



/* Entry: 106c17f58; end: 106c17fdf;  */

void FUN_106c17f58(uint *param_1,undefined1 *param_2)

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



/* Entry: 106c17fe0; end: 106c1806b;  */

void FUN_106c17fe0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c1236c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c1236c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c1806c; end: 106c18123;  */

undefined8 FUN_106c1806c(void)

{
  int iVar1;
  
  if ((bRam000000011381e718 & 1) == 0) {
    iVar1 = 0x1381e718;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e6b0 = 0xe;
      puRam000000011381e6b8 = &UNK_10f3c0b54;
      uRam000000011381e6c0 = 0x100;
      pcRam000000011381e6c8 = FUN_106c18124;
      pcRam000000011381e6d0 = FUN_106c1815c;
      ppuRam000000011381e6a8 = &PTR_DAT_110862958;
      uRam000000011381e6e8 = 0;
      uRam000000011381e6e0 = 0;
      uRam000000011381e6f8 = 0;
      uRam000000011381e6f0 = 0;
      uRam000000011381e708 = 0;
      uRam000000011381e700 = 0;
      uRam000000011381e710 = 0;
      ___cxa_atexit(&DAT_1050077c0,0x11381e6a8,0x100000000);
      ___cxa_guard_release(0x11381e718);
    }
  }
  return 0x11381e6a8;
}



/* Entry: 106c18124; end: 106c1815b;  */

undefined8 FUN_106c18124(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 106c1815c; end: 106c181af;  */

undefined8 FUN_106c1815c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9a440(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106c181b0; end: 106c181bb; +[SCLensFriendsFeedContextDocEventLens table] */

undefined * FUN_106c181b0(void)

{
  return &UNK_10f3c0b5e;
}



/* Entry: 106c181bc; end: 106c183ab; +[SCLensFriendsFeedContextDocEventLens immutableObjectParse:bufferSize:] */

void FUN_106c181bc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d15b0;
  _objc_alloc(PTR_PTR_1126d15b0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar10 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
    uVar9 = 0;
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
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) {
      puVar10 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
      uVar9 = 0;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
      if (uVar6 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      if (uVar4 < 9) {
        puVar10 = (undefined *)0x0;
        puVar8 = (undefined *)0x0;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
        if (uVar6 == 0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = -(long)*piVar1;
          uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        if ((uVar4 < 0xb) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10), uVar6 == 0)) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
  }
  func_0x00010c03d6e0(puVar3,param_2,puVar7,uVar9,puVar8,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c183ac; end: 106c183bf; +[SCLensFriendsFeedContextDocEventLens objectClassFunctionPointer] */

undefined1  [16] FUN_106c183ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_106c183e8;
  auVar1._0_8_ = FUN_106c183c0;
  return auVar1;
}



/* Entry: 106c183c0; end: 106c183e7;  */

int FUN_106c183c0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2b91d6;
  _strcmp("eventType",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 106c183e8; end: 106c18487;  */

bool FUN_106c183e8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f3c0b86);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 106c18488; end: 106c18593;  */

undefined1 *
FUN_106c18488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f5c58;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106c18594; end: 106c1895f;  */

void FUN_106c18594(undefined *param_1)

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
      func_0x00010c1236c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,&UNK_10f3c0bec);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c1236c0(param_1);
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
            _objc_opt_class(PTR_PTR_1126d15b0);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_106c18898;
            puVar7 = PTR_PTR_1126d15a0;
            _objc_alloc(PTR_PTR_1126d15a0);
            puVar2 = puVar3;
            func_0x00010c1236c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf9a440(puVar3);
            puVar5 = puVar3;
            func_0x00010c094540(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bfe5be0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_106c18488(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_106c186a8;
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
      _objc_opt_class(PTR_PTR_1126d15b0);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d15a0;
        _objc_alloc(PTR_PTR_1126d15a0);
        puVar2 = puVar3;
        func_0x00010c1236c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf9a440(puVar3);
        puVar5 = puVar3;
        func_0x00010c094540(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfe5be0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_106c18488(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_106c186a8:
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        goto LAB_106c188a0;
      }
LAB_106c18898:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106c188a0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c18960; end: 106c189d3;  */

void FUN_106c18960(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106c18594();
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



/* Entry: 106c189d4; end: 106c18c6b;  */

void FUN_106c189d4(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d15a0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106c18594();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126d15a0;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126d15a0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c1236c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf9a440(param_1);
      puVar4 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bfe5be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_106c18488(puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x00010c1236c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010bf9a440();
    *(undefined **)(puVar1 + 0x20) = puVar6;
    puVar6 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010bfe5be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c18c6c; end: 106c18ccf;  */

void FUN_106c18c6c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d15b0;
    _objc_alloc(PTR_PTR_1126d15b0);
    func_0x00010c03d6e0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c18cd0; end: 106c18d0b; -[SCLensFriendsFeedContextDocEventLensChangeRequest .cxx_destruct] */

void FUN_106c18cd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106c18d0c; end: 106c18d17; -[SCLensFriendsFeedContextDocEventLensChangeRequest table] */

undefined * FUN_106c18d0c(void)

{
  return &UNK_10f3c0b5e;
}



/* Entry: 106c18d18; end: 106c18dcb; -[SCLensFriendsFeedContextDocEventLensChangeRequest createTableWithSQLite:] */

void FUN_106c18d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dde820c,0x99,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dde82a5,0x81,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dde8326,0xa5,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106c18dcc; end: 106c19363; -[SCLensFriendsFeedContextDocEventLensChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106c18dcc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_106c18c6c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_106c19364(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c0cd8);
    if (lVar7 == 0) goto LAB_106c192c0;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_106c192c0;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f3c0b86);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_106c192c0;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d15b0);
    func_0x00010c21c9a0(puVar11);
LAB_106c19298:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f3c0c43);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,&UNK_10f3c0c86);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_106c18ef8;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d15b0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106c192cc;
          }
        }
      }
LAB_106c18ef8:
      puVar11 = (undefined *)0x0;
      goto LAB_106c192cc;
    }
    FUN_106c18c6c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_106c19364(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c0d2a);
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
        _objc_opt_class(PTR_PTR_1126d15b0);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9a440();
        puVar5 = puVar6;
        func_0x00010bf9a440();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,&UNK_10f3c0d86);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_106c192b8;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d15b0);
        func_0x00010c21c9a0(puVar11);
        goto LAB_106c19298;
      }
    }
LAB_106c192b8:
    _objc_release(puVar6);
LAB_106c192c0:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_106c192cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106c19364; end: 106c19507;  */

ulong FUN_106c19364(ulong param_1,undefined8 param_2)

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
  ulong uVar10;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c1236c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_106c19508(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf9a440(param_2);
  uVar7 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_106c19508(param_1,uVar7);
  uVar9 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_106c19508(param_1,uVar9);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,6,uVar6,0);
  func_0x0001001ce2e4(param_1,10,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106c19508; end: 106c19637;  */

undefined8 FUN_106c19508(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106c195e8;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106c195e8;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106c195a8;
    param_1 = 0;
  }
  else {
LAB_106c195a8:
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
LAB_106c195e8:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106c19638; end: 106c196ab; -[SCLensFriendsFeedContextConfigServices initWithLensFriendsFeedContextConfigFetcher:] */

undefined1 * FUN_106c19638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5c60;
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



/* Entry: 106c196ac; end: 106c196b3; -[SCLensFriendsFeedContextConfigServices lensFriendsFeedContextConfigFetcher] */

undefined8 FUN_106c196ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c196b4; end: 106c196e3; -[SCLensFriendsFeedContextConfigServices setLensFriendsFeedContextConfigFetcher:] */

void FUN_106c196b4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c196e4; end: 106c196ef; -[SCLensFriendsFeedContextConfigServices .cxx_destruct] */

void FUN_106c196e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c196f0; end: 106c1975b; -[SCLensFriendsFeedContextDeltaSyncConfigServices initWithDeltaSyncConfigFetcher:] */

undefined1 * FUN_106c196f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18bb60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c1975c; end: 106c19763; -[SCLensFriendsFeedContextDeltaSyncConfigServices deltaSyncConfigFetcher] */

undefined8 FUN_106c1975c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c19764; end: 106c19793; -[SCLensFriendsFeedContextDeltaSyncConfigServices setDeltaSyncConfigFetcher:] */

void FUN_106c19764(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c19794; end: 106c197bf; -[SCLensFriendsFeedContextDeltaSyncConfigServices .cxx_destruct] */

void FUN_106c19794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c197c0; end: 106c197c7; -[SCStreakServices streakProvider] */

undefined8 FUN_106c197c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c197c8; end: 106c197cf; -[SCStreakServices streakMilestoneProvider] */

undefined8 FUN_106c197c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c197d0; end: 106c197d7; -[SCStreakServices valdiStreakProvider] */

undefined8 FUN_106c197d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c197d8; end: 106c197df; -[SCStreakServices streakMetadataProvider] */

undefined8 FUN_106c197d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c197e0; end: 106c19827; -[SCStreakServices .cxx_destruct] */

void FUN_106c197e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c19828; end: 106c198a7; -[SCExpiredStreak initWithStreakCount:restorableStreakCount:extendedRestorableStreakCount:timestampMs:isRestorable:isRestorableExtended:restoreExpirationTimestampMs:] */

void FUN_106c19828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f5c78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
  }
  return;
}



/* Entry: 106c198a8; end: 106c198cb; -[SCExpiredStreak copyWithZone:] */

undefined8 FUN_106c198a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c198cc; end: 106c1994f; -[SCExpiredStreak hash] */

undefined8 * FUN_106c198cc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  lStack_38 = -lVar3;
  if (-1 < lVar3) {
    lStack_38 = lVar3;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  lVar3 = *(long *)(param_1 + 0x30);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000100505190(&uStack_50,7);
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
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         (((*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28) ||
           (*(char *)((long)puVar1 + 8) != param_3[8])) ||
          (*(char *)((long)puVar1 + 9) != param_3[9])))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x30) == *(long *)(param_3 + 0x30));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106c19950; end: 106c19a37; -[SCExpiredStreak isEqual:] */

bool FUN_106c19950(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
         (((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106c19a38; end: 106c19a3f; -[SCExpiredStreak streakCount] */

undefined8 FUN_106c19a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c19a40; end: 106c19a47; -[SCExpiredStreak restorableStreakCount] */

undefined8 FUN_106c19a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c19a48; end: 106c19a4f; -[SCExpiredStreak extendedRestorableStreakCount] */

undefined8 FUN_106c19a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c19a50; end: 106c19a57; -[SCExpiredStreak timestampMs] */

undefined8 FUN_106c19a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106c19a58; end: 106c19a5f; -[SCExpiredStreak isRestorable] */

undefined1 FUN_106c19a58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106c19a60; end: 106c19a67; -[SCExpiredStreak isRestorableExtended] */

undefined1 FUN_106c19a60(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106c19a68; end: 106c19a6f; -[SCExpiredStreak restoreExpirationTimestampMs] */

undefined8 FUN_106c19a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c19a70; end: 106c19b3b; -[SCStreak initWithStreakLength:expirationDate:isGroup:isFrozen:expiredStreak:] */

undefined1 *
FUN_106c19a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f5c80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106c19b3c; end: 106c19b5f; -[SCStreak copyWithZone:] */

undefined8 FUN_106c19b3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c19b60; end: 106c19be3; -[SCStreak hash] */

undefined8 * FUN_106c19b60(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c19c94:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c19ca0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) && (*(char *)((long)puVar3 + 9) == param_3[9])
        ))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_106c19ca0;
        }
        goto LAB_106c19c94;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c19ca0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c19be4; end: 106c19cbb; -[SCStreak isEqual:] */

long FUN_106c19be4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c19c94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c19ca0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_106c19ca0;
        }
        goto LAB_106c19c94;
      }
    }
    lVar3 = 0;
  }
LAB_106c19ca0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c19cbc; end: 106c19cc3; -[SCStreak streakLength] */

undefined8 FUN_106c19cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c19cc4; end: 106c19ccb; -[SCStreak expirationDate] */

undefined8 FUN_106c19cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c19ccc; end: 106c19cd3; -[SCStreak isGroup] */

undefined1 FUN_106c19ccc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106c19cd4; end: 106c19cdb; -[SCStreak isFrozen] */

undefined1 FUN_106c19cd4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106c19cdc; end: 106c19ce3; -[SCStreak expiredStreak] */

undefined8 FUN_106c19cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c19ce4; end: 106c19d13; -[SCStreak .cxx_destruct] */

void FUN_106c19ce4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106c19d14; end: 106c19d43; -[SCCExpiredStreakMetadata initWithStreakCount:timestampMs:isRestorable:isRestorableExtended:restoreExpirationTimestampMs:] */

void FUN_106c19d14(void)

{
  func_0x000106c19e34(PTR_PTR_1126f5c88);
  func_0x000106c19e44();
  return;
}



/* Entry: 106c19d44; end: 106c19d53; +[SCCExpiredStreakMetadata valdiMarshallableObjectDescriptor] */

void FUN_106c19d44(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110968f10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106c19d54; end: 106c19d8b; -[SCCStreak initWithIdentifier:streakLength:expirationTimestampMs:isGroup:] */

void FUN_106c19d54(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x000106c19e34(PTR_PTR_1126f5c90);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 106c19d8c; end: 106c19d9b; +[SCCStreak valdiMarshallableObjectDescriptor] */

void FUN_106c19d8c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_identifier_110968fa0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106c19d9c; end: 106c19dc3; -[SCCStreakMetadata initWithCount:expirationTimestampMs:isFrozen:] */

void FUN_106c19d9c(void)

{
  func_0x000106c19e34(PTR_PTR_1126f5c98);
  func_0x000106c19e44();
  return;
}


