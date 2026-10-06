/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10851e508; end: 10851e567;  */

void FUN_10851e508(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9ea0;
    _objc_alloc(PTR_PTR_1126d9ea0);
    func_0x00010c055fa0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10851e568; end: 10851e573; -[SCStoriesRankedStoryIdsChangeRequest .cxx_destruct] */

void FUN_10851e568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10851e574; end: 10851e57f; -[SCStoriesRankedStoryIdsChangeRequest table] */

undefined * FUN_10851e574(void)

{
  return &UNK_10f4a2363;
}



/* Entry: 10851e580; end: 10851e5c7; -[SCStoriesRankedStoryIdsChangeRequest createTableWithSQLite:] */

void FUN_10851e580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df33f26,0x84,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10851e5c8; end: 10851e95f; -[SCStoriesRankedStoryIdsChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851e5c8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_10851e508(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_10851e960(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a23f7);
    if (lVar5 == 0) goto LAB_10851e8fc;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,uVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_10851e8fc;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9ea0);
    func_0x00010c21c9a0(puVar8);
LAB_10851e8e4:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a23c2);
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
            _objc_opt_class(PTR_PTR_1126d9ea0);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10851e908;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_10851e908;
    }
    FUN_10851e508(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_10851e960(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a2437);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,uVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d9ea0);
        func_0x00010c21c9a0(puVar8);
        goto LAB_10851e8e4;
      }
    }
LAB_10851e8fc:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_10851e908:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10851e960; end: 10851ecb3;  */

undefined * FUN_10851e960(undefined *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  char *pcVar13;
  long lVar14;
  uint *puVar15;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  int aiStack_134 [3];
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010c11f8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  lStack_128 = 0;
  aiStack_134[1] = 0;
  aiStack_134[2] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (uint *)0x0) {
    lVar14 = *plStack_120;
    do {
      puVar15 = (uint *)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(puVar4);
        }
        pcVar13 = *(char **)(lStack_128 + (long)puVar15 * 8);
        _objc_retain(pcVar13);
        if (pcVar13 != (char *)0x0) {
          pcVar6 = pcVar13;
          _CFStringGetCStringPtr(pcVar13,0x8000100);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = pcVar13;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (char *)0x0) {
              pcVar6 = pcVar13;
              func_0x00010bf64940();
              _objc_retainAutoreleasedReturnValue();
              if (pcVar6 != (char *)0x0) goto LAB_10851eaa4;
              iVar3 = 0;
            }
            else {
LAB_10851eaa4:
              _objc_retainAutorelease(pcVar6);
              pcVar8 = pcVar6;
              func_0x00010bf25f00();
              pcVar9 = pcVar6;
              func_0x00010c08fa60(pcVar6);
              pcVar7 = "";
              if (pcVar8 != (char *)0x0) {
                pcVar7 = pcVar8;
              }
              puVar10 = param_1;
              func_0x000107c27df0(param_1,pcVar7,pcVar9);
              iVar3 = (int)puVar10;
            }
            _objc_release(pcVar6);
          }
          else {
            pcVar7 = pcVar6;
            _strlen(pcVar6);
            puVar10 = param_1;
            func_0x000107c27df0(param_1,pcVar6,pcVar7);
            iVar3 = (int)puVar10;
          }
          _objc_release(pcVar13);
          aiStack_134[0] = iVar3;
          if (iVar3 != 0) {
            func_0x000100c47d40(&lStack_150,aiStack_134);
          }
        }
        puVar15 = (uint *)((long)puVar15 + 1);
      } while (puVar5 != puVar15);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (uint *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010c27dd80(param_2);
  lVar14 = 0x1130c2400;
  if (lStack_148 - lStack_150 != 0) {
    lVar14 = lStack_150;
  }
  puVar10 = param_1;
  func_0x000100c47e34(param_1,lVar14,lStack_148 - lStack_150 >> 2);
  param_1[0x46] = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,4,(ulong)puVar4 & 0xffffffff,0);
  func_0x000100c47f00(param_1,6,(ulong)puVar10 & 0xffffffff);
  puVar11 = (undefined1 *)(ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x000107c27dc0();
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar12 = (ushort *)
            ((long)((long)puVar4 + (ulong)*puVar4) - (long)*(int *)((long)puVar4 + (ulong)*puVar4));
  if ((*puVar12 < 5) || (puVar12[2] == 0)) {
    puVar10 = (undefined *)0x0;
    *puVar11 = 1;
  }
  else {
    *puVar11 = 0;
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar10;
}



/* Entry: 10851ecb4; end: 10851ed3b;  */

void FUN_10851ecb4(uint *param_1,undefined1 *param_2)

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



/* Entry: 10851ed3c; end: 10851edc7;  */

void FUN_10851ed3c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10851edc8; end: 10851f067; +[SCStoriesSnapViewers immutableObjectParse:bufferSize:] */

void FUN_10851edc8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d6768;
  _objc_alloc(PTR_PTR_1126d6768);
  lVar9 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar6 < 5) {
    puVar14 = (undefined *)0x0;
LAB_10851ee88:
    lVar9 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar11 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar9);
    }
    if ((uVar6 < 7) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar9)), uVar11 == 0))
    goto LAB_10851ee88;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    lVar9 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_108520184(lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar6 = *puVar7;
  if (uVar6 < 9) {
    uVar16 = 0;
    uVar15 = 0;
LAB_10851ef14:
    lVar4 = 0;
  }
  else {
    if ((ulong)puVar7[4] == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[4]);
    }
    if (uVar6 < 0xb) {
      uVar16 = 0;
      goto LAB_10851ef14;
    }
    if ((ulong)puVar7[5] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[5]);
    }
    if ((uVar6 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_10851ef14;
    puVar2 = (uint *)((long)piVar1 + (ulong)puVar7[6]);
    lVar4 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_108520184(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar6 = *puVar7;
  if (uVar6 < 0xf) {
    uVar8 = 0;
    uVar5 = 0;
LAB_10851efc4:
    uVar13 = 0;
    uVar10 = 0;
  }
  else {
    if ((ulong)puVar7[7] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[7]);
    }
    if (uVar6 < 0x11) {
      uVar8 = 0;
      goto LAB_10851efc4;
    }
    uVar8 = 0;
    if ((ulong)puVar7[8] != 0) {
      uVar8 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[8]);
    }
    if (uVar6 < 0x13) goto LAB_10851efc4;
    uVar10 = 0;
    if ((ulong)puVar7[9] != 0) {
      uVar10 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[9]);
    }
    if (uVar6 < 0x15) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if ((ulong)puVar7[10] != 0) {
        uVar13 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[10]);
      }
      if (0x16 < uVar6) {
        uVar12 = 0;
        if ((ulong)puVar7[0xb] != 0) {
          uVar12 = *(undefined8 *)((long)piVar1 + (ulong)puVar7[0xb]);
        }
        goto LAB_10851efcc;
      }
    }
  }
  uVar12 = 0;
LAB_10851efcc:
  func_0x00010c047b40(puVar3,param_2,puVar14,lVar9,uVar15,uVar16,lVar4,uVar5,uVar8,uVar10,uVar13,
                      uVar12);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10851f068; end: 10851f08b; +[SCStoriesSnapViewers objectClassFunctionPointer] */

undefined1  [16] FUN_10851f068(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10851f084;
  auVar1._0_8_ = 0x10851f07c;
  return auVar1;
}



/* Entry: 10851f08c; end: 10851f23b;  */

void FUN_10851f08c(undefined8 param_1,long param_2)

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
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar11 = PTR_PTR_1126d6778;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bfb9200(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bfb91e0(param_2);
    lVar4 = param_2;
    func_0x00010bfb8ac0(param_2);
    lVar5 = param_2;
    func_0x00010c0edf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c0edf40(param_2);
    lVar7 = param_2;
    func_0x00010c0edf20();
    lVar8 = param_2;
    func_0x00010bf1f680();
    lVar9 = param_2;
    func_0x00010c22a980();
    lVar10 = param_2;
    func_0x00010c140600();
    FUN_10851f23c(puVar11,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,
                  lVar10);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar11 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10851f23c; end: 10851f383;  */

long * FUN_10851f23c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    )

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126fcb58;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[3];
      plVar1[3] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[4];
      plVar1[4] = param_4;
      _objc_release(lVar2);
      plVar1[5] = param_5;
      plVar1[6] = param_6;
      _objc_retain(param_7);
      lVar2 = plVar1[7];
      plVar1[7] = param_7;
      _objc_release(lVar2);
      plVar1[8] = param_8;
      plVar1[9] = param_9;
      plVar1[10] = param_10;
      plVar1[0xb] = param_11;
      plVar1[0xc] = param_12;
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 10851f384; end: 10851f3f7;  */

void FUN_10851f384(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851f3f8();
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



/* Entry: 10851f3f8; end: 10851f873;  */

void FUN_10851f3f8(undefined *param_1)

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
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar11,&UNK_10f4a249c);
        if (puVar11 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c241220(param_1);
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
            _objc_opt_class(PTR_PTR_1126d6768);
            _sqlite3_column_blob(puVar11,1);
            _sqlite3_column_bytes(puVar11,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar11);
            if (puVar3 == (undefined *)0x0) goto LAB_10851f7a4;
            puVar11 = PTR_PTR_1126d6778;
            _objc_alloc(PTR_PTR_1126d6778);
            puStack_68 = puVar3;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puStack_70 = puVar3;
            func_0x00010bfb9200();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010bfb91e0(puVar3);
            puVar4 = puVar3;
            func_0x00010bfb8ac0(puVar3);
            puVar5 = puVar3;
            func_0x00010c0edf60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c0edf40(puVar3);
            puVar7 = puVar3;
            func_0x00010c0edf20();
            puVar8 = puVar3;
            func_0x00010bf1f680();
            puVar9 = puVar3;
            func_0x00010c22a980();
            puVar10 = puVar3;
            func_0x00010c140600();
            FUN_10851f23c(puVar11,puVar1,puStack_68,puStack_70,puVar2,puVar4,puVar5,puVar6,puVar7,
                          puVar8,puVar9,puVar10);
            param_1 = puVar3;
            goto LAB_10851f564;
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
      _objc_opt_class(PTR_PTR_1126d6768);
      puVar2 = puVar11;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar11);
      if (puVar2 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126d6778;
        _objc_alloc(PTR_PTR_1126d6778);
        puStack_68 = puVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puStack_70 = puVar2;
        func_0x00010bfb9200();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfb91e0(puVar2);
        puVar4 = puVar2;
        func_0x00010bfb8ac0(puVar2);
        puVar5 = puVar2;
        func_0x00010c0edf60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c0edf40(puVar2);
        puVar7 = puVar2;
        func_0x00010c0edf20();
        puVar8 = puVar2;
        func_0x00010bf1f680();
        puVar9 = puVar2;
        func_0x00010c22a980();
        puVar10 = puVar2;
        func_0x00010c140600();
        FUN_10851f23c(puVar11,puVar1,puStack_68,puStack_70,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8
                      ,puVar9,puVar10);
        param_1 = puVar2;
LAB_10851f564:
        _objc_release(puVar5);
        _objc_release(puStack_70);
        _objc_release(puStack_68);
        goto LAB_10851f7ac;
      }
LAB_10851f7a4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_10851f7ac:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10851f874; end: 10851f8e7;  */

void FUN_10851f874(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851f3f8();
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



/* Entry: 10851f8e8; end: 10851f967;  */

void FUN_10851f8e8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d6768;
    _objc_alloc(PTR_PTR_1126d6768);
    func_0x00010c047b40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10851f968; end: 10851f9a3; -[SCStoriesSnapViewersChangeRequest .cxx_destruct] */

void FUN_10851f968(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10851f9a4; end: 10851f9af; -[SCStoriesSnapViewersChangeRequest table] */

undefined * FUN_10851f9a4(void)

{
  return &UNK_10f4a2481;
}



/* Entry: 10851f9b0; end: 10851f9f7; -[SCStoriesSnapViewersChangeRequest createTableWithSQLite:] */

void FUN_10851f9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df33faa,0x88,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10851f9f8; end: 10851fd7f; -[SCStoriesSnapViewersChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851f9f8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10851f8e8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10851fd80(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a251a);
    if (lVar6 == 0) goto LAB_10851fd1c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10851fd1c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d6768);
    func_0x00010c21c9a0(puVar7);
LAB_10851fd04:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a24e4);
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
            _objc_opt_class(PTR_PTR_1126d6768);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10851fd28;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10851fd28;
    }
    FUN_10851f8e8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10851fd80(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a255d);
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
        _objc_opt_class(PTR_PTR_1126d6768);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10851fd04;
      }
    }
LAB_10851fd1c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10851fd28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10851fd80; end: 108520183;  */

undefined * FUN_10851fd80(undefined *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  long lStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined ***pppuStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_90 = &PTR_FUN_110a509e0;
  pcStack_88 = FUN_1085206a8;
  pppuStack_78 = &ppuStack_90;
  puVar5 = param_2;
  func_0x00010bfb9200(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1085203dc(&lStack_c8,param_1,&ppuStack_90,puVar5);
  _objc_release(puVar5);
  if (pppuStack_78 == &ppuStack_90) {
    lVar15 = 0x20;
LAB_10851fe2c:
    (**(code **)((long)*pppuStack_78 + lVar15))();
  }
  else if (pppuStack_78 != (undefined ***)0x0) {
    lVar15 = 0x28;
    goto LAB_10851fe2c;
  }
  ppuStack_b0 = &PTR_FUN_110a509e0;
  pcStack_a8 = FUN_1085206a8;
  pppuStack_98 = &ppuStack_b0;
  puVar5 = param_2;
  func_0x00010c0edf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1085203dc(&lStack_e0,param_1,&ppuStack_b0,puVar5);
  _objc_release(puVar5);
  if (pppuStack_98 == &ppuStack_b0) {
    lVar15 = 0x20;
  }
  else {
    if (pppuStack_98 == (undefined ***)0x0) goto LAB_10851fea0;
    lVar15 = 0x28;
  }
  (**(code **)((long)*pppuStack_98 + lVar15))();
LAB_10851fea0:
  puVar5 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  FUN_1085207e4(param_1,puVar5);
  lVar16 = lStack_c8;
  lVar15 = 0x11372c238;
  if (lStack_c0 - lStack_c8 != 0) {
    lVar15 = lStack_c8;
  }
  puVar7 = param_1;
  FUN_108520a50(param_1,lVar15,lStack_c0 - lStack_c8 >> 2);
  puVar8 = param_2;
  func_0x00010bfb91e0();
  puVar9 = param_2;
  func_0x00010bfb8ac0();
  lVar4 = lStack_e0;
  lVar15 = 0x11372c238;
  if (lStack_d8 - lStack_e0 != 0) {
    lVar15 = lStack_e0;
  }
  puVar17 = param_1;
  FUN_108520a50(param_1,lVar15,lStack_d8 - lStack_e0 >> 2);
  puVar10 = param_2;
  func_0x00010c0edf40();
  puVar11 = param_2;
  func_0x00010c0edf20();
  puVar12 = param_2;
  func_0x00010bf1f680();
  puVar13 = param_2;
  func_0x00010c22a980();
  puVar14 = param_2;
  func_0x00010c140600(param_2);
  param_1[0x46] = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x16,puVar14,0);
  func_0x000107c27db0(param_1,0x14,puVar13,0);
  func_0x000107c27db0(param_1,0x12,puVar12,0);
  func_0x000107c27db0(param_1,0x10,puVar11,0);
  func_0x000107c27db0(param_1,0xe,puVar10,0);
  func_0x000107c27db0(param_1,10,puVar9,0);
  func_0x000107c27db0(param_1,8,puVar8,0);
  FUN_1085209ec(param_1,0xc,(ulong)puVar17 & 0xffffffff);
  FUN_1085209ec(param_1,6,(ulong)puVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,(ulong)puVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(puVar5);
  if (lVar4 != 0) {
    __ZdlPv(lVar4);
  }
  if (lVar16 != 0) {
    __ZdlPv(lVar16);
  }
  puVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_e0 != 0) {
    __ZdlPv();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = (undefined *)0x0;
  if (puVar5 != (uint *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (*puVar5 != 0) {
      lVar15 = 0;
      do {
        uVar18 = (ulong)*(uint *)((long)puVar5 + lVar15 + 4);
        puVar6 = PTR_PTR_1126d6770;
        _objc_alloc(PTR_PTR_1126d6770);
        lVar16 = uVar18 - (long)*(int *)((long)puVar5 + uVar18 + lVar15 + 4);
        if (*(ushort *)((long)puVar5 + lVar16 + lVar15 + 4) < 5) {
          puVar17 = (undefined *)0x0;
        }
        else if (*(short *)((long)puVar5 + lVar16 + lVar15 + 8) == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c05c2e0(puVar6);
        _objc_release(puVar17);
        func_0x00010befa120(puVar7);
        _objc_release(puVar6);
        lVar16 = lVar15 + 8;
        lVar15 = lVar15 + 4;
      } while ((uint *)((long)puVar5 + lVar16) != puVar5 + (ulong)*puVar5 + 1);
    }
    puVar6 = puVar7;
    func_0x00010bf51e00(puVar7);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 108520184; end: 1085203db;  */

void FUN_108520184(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    _objc_retainAutoreleasedReturnValue();
    if (*param_1 != 0) {
      lVar10 = 0;
      do {
        uVar11 = (ulong)*(uint *)((long)param_1 + lVar10 + 4);
        puVar4 = PTR_PTR_1126d6770;
        _objc_alloc(PTR_PTR_1126d6770);
        lVar7 = (long)*(int *)((long)param_1 + uVar11 + lVar10 + 4);
        uVar6 = *(ushort *)((long)param_1 + (uVar11 - lVar7) + lVar10 + 4);
        if (uVar6 < 5) {
          puVar9 = (undefined *)0x0;
LAB_1085202a4:
          bVar1 = false;
          uVar5 = 0;
LAB_1085202ac:
          bVar2 = false;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)param_1 + (uVar11 - lVar7) + lVar10 + 8);
          if (uVar8 == 0) {
            puVar9 = (undefined *)0x0;
          }
          else {
            lVar7 = uVar11 + uVar8;
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)param_1 +
                                (ulong)*(uint *)((long)param_1 + lVar7 + lVar10 + 4) +
                                lVar10 + lVar7 + 8);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = (long)*(int *)((long)param_1 + uVar11 + lVar10 + 4);
            uVar6 = *(ushort *)((long)param_1 + (uVar11 - lVar7) + lVar10 + 4);
          }
          lVar7 = -lVar7;
          if (uVar6 < 7) goto LAB_1085202a4;
          uVar8 = (ulong)*(ushort *)((long)param_1 + lVar7 + uVar11 + lVar10 + 10);
          if (uVar8 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)((long)param_1 + uVar11 + uVar8 + lVar10 + 4);
          }
          if (uVar6 < 9) {
            bVar1 = false;
            goto LAB_1085202ac;
          }
          uVar8 = (ulong)*(ushort *)((long)param_1 + lVar7 + uVar11 + lVar10 + 0xc);
          if (uVar8 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = *(char *)((long)param_1 + uVar11 + uVar8 + lVar10 + 4) != '\0';
          }
          if (uVar6 < 0xb) goto LAB_1085202ac;
          uVar8 = (ulong)*(ushort *)((long)param_1 + lVar7 + uVar11 + lVar10 + 0xe);
          if (uVar8 == 0) goto LAB_1085202ac;
          bVar2 = *(char *)((long)param_1 + uVar11 + uVar8 + lVar10 + 4) != '\0';
        }
        func_0x00010c05c2e0(puVar4,param_2,puVar9,uVar5,bVar1,bVar2);
        _objc_release(puVar9);
        func_0x00010befa120(puVar3,param_2,puVar4);
        _objc_release(puVar4);
        lVar7 = lVar10 + 8;
        lVar10 = lVar10 + 4;
      } while ((uint *)((long)param_1 + lVar7) != param_1 + (ulong)*param_1 + 1);
    }
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085203dc; end: 1085206a7;  */

ulong FUN_1085203dc(undefined8 *param_1,undefined4 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 auStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_2;
  _objc_retain(param_4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  _objc_retain(param_4);
  uVar7 = param_4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (uVar7 != 0) {
    puVar14 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
    puVar16 = (undefined4 *)0x0;
    do {
      uVar13 = 0;
      puVar10 = puVar14;
      puVar17 = puVar16;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        uVar18 = *(undefined8 *)(uVar13 * 8);
        _objc_retain(uVar18);
        _objc_retain(uVar18);
        plVar8 = *(long **)(param_3 + 0x18);
        auStack_f8[0] = uVar18;
        if (plVar8 == (long *)0x0) {
          func_0x000104bfeb48();
          goto LAB_108520628;
        }
        puVar11 = param_2;
        (**(code **)(*plVar8 + 0x30))(plVar8,param_2,auStack_f8);
        _objc_release(auStack_f8[0]);
        if (puVar17 < puVar15) {
          puVar16 = puVar17 + 1;
          *puVar17 = (int)plVar8;
          puVar14 = puVar10;
        }
        else {
          lVar19 = (long)puVar17 - (long)puVar10;
          uVar1 = (lVar19 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
            FUN_108520914();
LAB_108520628:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10852062c);
            (*pcVar6)();
          }
          uVar12 = (long)puVar15 - (long)puVar10 >> 1;
          if (uVar12 <= uVar1) {
            uVar12 = uVar1;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar15 - (long)puVar10)) {
            uVar12 = 0x3fffffffffffffff;
          }
          if (uVar12 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_108520628;
          }
          lVar9 = uVar12 << 2;
          __Znwm();
          puVar11 = (undefined4 *)(lVar9 + lVar19);
          puVar15 = (undefined4 *)(lVar9 + uVar12 * 4);
          puVar14 = puVar11 + -(lVar19 >> 2);
          puVar16 = puVar11 + 1;
          *puVar11 = (int)plVar8;
          puVar11 = puVar10;
          _memcpy(puVar14,puVar10,lVar19);
          *param_1 = puVar14;
          param_1[1] = puVar16;
          param_1[2] = puVar15;
          if (puVar10 != (undefined4 *)0x0) {
            __ZdlPv(puVar10);
          }
        }
        param_1[1] = puVar16;
        _objc_release(uVar18);
        uVar13 = uVar13 + 1;
        puVar10 = puVar14;
        puVar17 = puVar16;
      } while (uVar7 != uVar13);
      uVar7 = param_4;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(param_4);
  uVar7 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_4);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar11);
    puVar15 = puVar11;
    func_0x00010c2923e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    FUN_1085207e4(uVar7,puVar15);
    puVar14 = puVar11;
    func_0x00010c29e5a0(puVar11);
    puVar16 = puVar11;
    func_0x00010c151b40(puVar11);
    puVar10 = puVar11;
    func_0x00010c14b7c0(puVar11);
    *(undefined1 *)(uVar7 + 0x46) = 1;
    iVar2 = *(int *)(uVar7 + 0x20);
    iVar3 = *(int *)(uVar7 + 0x30);
    iVar4 = *(int *)(uVar7 + 0x28);
    func_0x000107c27db0(uVar7,6,puVar14,0);
    func_0x000107c27ddc(uVar7,4,uVar13 & 0xffffffff);
    func_0x000100ab13ac(uVar7,10,puVar10,0);
    func_0x000100ab13ac(uVar7,8,puVar16,0);
    func_0x000107c27dc0(uVar7,(iVar2 - iVar3) + iVar4);
    _objc_release(puVar15);
    _objc_release(puVar11);
    return uVar7;
  }
  return uVar7;
}



/* Entry: 1085206a8; end: 1085207e3;  */

ulong FUN_1085206a8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1085207e4(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c29e5a0(param_2);
  uVar7 = param_2;
  func_0x00010c151b40(param_2);
  uVar8 = param_2;
  func_0x00010c14b7c0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,10,uVar8,0);
  func_0x000100ab13ac(param_1,8,uVar7,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085207e4; end: 108520913;  */

undefined8 FUN_1085207e4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1085208c4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_1085208c4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108520884;
    param_1 = 0;
  }
  else {
LAB_108520884:
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
LAB_1085208c4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108520914; end: 108520927;  */

void FUN_108520914(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 108520928; end: 10852092f;  */

void FUN_108520928(void)

{
  return;
}



/* Entry: 108520930; end: 108520963;  */

void FUN_108520930(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a509e0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108520964; end: 1085209a3;  */

void FUN_108520964(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a509e0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1085209a4; end: 1085209df;  */

long FUN_1085209a4(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a50a50);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1085209e0; end: 1085209eb;  */

undefined ** FUN_1085209e0(void)

{
  return &PTR_DAT_110a50a50;
}



/* Entry: 1085209ec; end: 108520a4f;  */

void FUN_1085209ec(ulong param_1,uint param_2,long param_3)

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



/* Entry: 108520a50; end: 108520b03;  */

/* WARNING: Possible PIC construction at 0x000108520ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108520adc) */

int FUN_108520a50(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + -4 + param_3 * 4);
    func_0x000107c27db4(param_1,4);
    iVar2 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
            iVar2) + 4;
    unaff_x30 = 0x108520adc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001001ce088(param_1,4);
  lVar3 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar3 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  piVar4 = (int *)(lVar3 + -4);
  *piVar4 = iVar2;
  *(int **)(param_1 + 0x30) = piVar4;
  return (*(int *)(param_1 + 0x20) - (int)piVar4) + *(int *)(param_1 + 0x28);
}



/* Entry: 108520b04; end: 108520b8f;  */

void FUN_108520b04(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108520b90; end: 108520c4b;  */

undefined8 FUN_108520b90(void)

{
  int iVar1;
  
  if ((bRam0000000113827dd8 & 1) == 0) {
    iVar1 = 0x13827dd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827d70 = 0xe;
      puRam0000000113827d78 = &UNK_10f4a25aa;
      uRam0000000113827d80 = 0x1010000;
      pcRam0000000113827d88 = FUN_108520c4c;
      pcRam0000000113827d90 = FUN_108520c84;
      ppuRam0000000113827d68 = &PTR_DAT_110a50120;
      uRam0000000113827da8 = 0;
      uRam0000000113827da0 = 0;
      uRam0000000113827db8 = 0;
      uRam0000000113827db0 = 0;
      uRam0000000113827dc8 = 0;
      uRam0000000113827dc0 = 0;
      uRam0000000113827dd0 = 0;
      ___cxa_atexit(0x1084f0ed0,0x113827d68,0x100000000);
      ___cxa_guard_release(0x113827dd8);
    }
  }
  return 0x113827d68;
}



/* Entry: 108520c4c; end: 108520c83;  */

undefined4 FUN_108520c4c(uint *param_1,undefined1 *param_2)

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



/* Entry: 108520c84; end: 108520cd7;  */

undefined8 FUN_108520c84(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108520cd8; end: 108520ceb; +[SCStoriesSummaryInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108520cd8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108520d38;
  auVar1._0_8_ = FUN_108520cec;
  return auVar1;
}



/* Entry: 108520cec; end: 108520d37;  */

void FUN_108520cec(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf437416;
  _strcmp(&DAT_10f437416,param_1);
  if (iVar1 != 0) {
    _strcmp(&DAT_10f437429,param_1);
  }
  return;
}



/* Entry: 108520d38; end: 108520e3f;  */

bool FUN_108520d38(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x000107c310d8(param_2,&UNK_10f4a262d);
    _sqlite3_bind_int64();
    uVar4 = 0;
    if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar3 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar3);
    }
    _sqlite3_bind_double(uVar4,param_2,2);
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x000107c310d8(param_2,&UNK_10f4a25c6);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)piVar1 + uVar3) != '\0';
    }
    _sqlite3_bind_int64(param_2,2,bVar2);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 108520e40; end: 1085210af;  */

void FUN_108520e40(undefined8 param_1,undefined8 param_2,ulong param_3)

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
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar14 = PTR_PTR_1126d9eb0;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c27dd80();
    uVar3 = param_3;
    func_0x00010c26d760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c720(param_3);
    uVar4 = param_3;
    uVar15 = param_1;
    func_0x00010c0ddc60();
    uVar5 = param_3;
    func_0x00010bfddf20();
    func_0x00010c0d1120(param_3);
    uVar16 = uVar15;
    func_0x00010c0d1140(param_3);
    uVar17 = uVar16;
    func_0x00010c0d1180(param_3);
    uVar6 = param_3;
    uVar18 = uVar17;
    func_0x00010c259580(param_3);
    uVar7 = param_3;
    func_0x00010c0de440();
    uVar8 = param_3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010bf4e300();
    uVar10 = param_3;
    func_0x00010bf4e320();
    uVar11 = param_3;
    func_0x00010c259d00();
    func_0x00010c150c20(param_3);
    uVar12 = param_3;
    func_0x00010bfd3da0();
    uVar13 = param_3;
    func_0x00010c0fd5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100aadc9c(param_1,uVar15,uVar16,uVar17,uVar18,puVar14,0xffffffffffffffff,uVar1,uVar2,
                        uVar3,uVar4,uVar5 & 0xffffffff,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                        (char)uVar12);
    _objc_release(uVar13);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  *(undefined4 *)(puVar14 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1085210b0; end: 108521123;  */

void FUN_1085210b0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  func_0x000100aad578();
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



/* Entry: 108521124; end: 1085211db;  */

undefined8 FUN_108521124(void)

{
  int iVar1;
  
  if ((bRam0000000113827e50 & 1) == 0) {
    iVar1 = 0x13827e50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827de8 = 0xe;
      puRam0000000113827df0 = &UNK_10f4a2915;
      uRam0000000113827df8 = 0x10001;
      pcRam0000000113827e00 = FUN_1085211dc;
      pcRam0000000113827e08 = FUN_108521214;
      ppuRam0000000113827de0 = &PTR_DAT_110a4fcc0;
      uRam0000000113827e20 = 0;
      uRam0000000113827e18 = 0;
      uRam0000000113827e30 = 0;
      uRam0000000113827e28 = 0;
      uRam0000000113827e40 = 0;
      uRam0000000113827e38 = 0;
      uRam0000000113827e48 = 0;
      ___cxa_atexit(0x1084d37f4,0x113827de0,0x100000000);
      ___cxa_guard_release(0x113827e50);
    }
  }
  return 0x113827de0;
}



/* Entry: 1085211dc; end: 108521213;  */

undefined4 FUN_1085211dc(uint *param_1,undefined1 *param_2)

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



/* Entry: 108521214; end: 108521267;  */

undefined8 FUN_108521214(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c25b720(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108521268; end: 108521273; +[SCStoriesLatestPostTimestamp table] */

undefined * FUN_108521268(void)

{
  return &UNK_10f4a291f;
}



/* Entry: 108521274; end: 1085212ef; +[SCStoriesLatestPostTimestamp immutableObjectParse:bufferSize:] */

void FUN_108521274(void)

{
  _objc_alloc(PTR_PTR_1126d9e68);
  func_0x00010c04e380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085212f0; end: 108521313; +[SCStoriesLatestPostTimestamp objectClassFunctionPointer] */

undefined1  [16] FUN_1085212f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10852130c;
  auVar1._0_8_ = 0x108521304;
  return auVar1;
}



/* Entry: 108521314; end: 108521743;  */

void FUN_108521314(undefined *param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar1 = &puStack_60;
  ppuVar7 = &puStack_60;
  ppuVar8 = &puStack_60;
  _objc_retain();
  puVar9 = PTR_PTR_1126d9f80;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  _objc_retain(param_1);
  if (param_1 == (undefined *)0x0) {
LAB_1085215d0:
    puVar9 = (undefined *)0x0;
LAB_1085215d4:
    _objc_release(puVar9);
  }
  else {
    puVar9 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar9 < 0) {
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf636c0();
      _objc_release(puVar9);
      func_0x000107c310d8(puVar2,&UNK_10f4a2942);
      puVar9 = param_1;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010c25b720(param_1);
        _sqlite3_bind_int64(puVar2,1,puVar3);
        puVar3 = puVar2;
        _sqlite3_step();
        if ((int)puVar3 == 100) {
          puVar9 = puVar2;
          _sqlite3_column_int64(puVar2,0);
          puVar3 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d9e68);
          _sqlite3_column_blob(puVar2,1);
          _sqlite3_column_bytes(puVar2,1);
          puVar4 = puVar3;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar3);
          _sqlite3_reset(puVar2);
          if (puVar4 == (undefined *)0x0) goto LAB_1085215d0;
          puVar3 = PTR_PTR_1126d9f80;
          _objc_alloc();
          puVar5 = puVar4;
          func_0x00010c25b720();
          puVar6 = puVar4;
          func_0x00010c2709c0();
          puVar2 = (undefined *)0x0;
          if (puVar3 != (undefined *)0x0) {
            puStack_58 = PTR_PTR_1126fcb68;
            puStack_60 = puVar3;
            _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
            goto LAB_108521420;
          }
          goto LAB_108521430;
        }
      }
      goto LAB_1085215d4;
    }
    puVar9 = param_1;
    func_0x00010c1422e0();
    puVar2 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e68);
    puVar4 = puVar2;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) goto LAB_1085215d0;
    puVar3 = PTR_PTR_1126d9f80;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010c25b720();
    puVar6 = puVar4;
    func_0x00010c2709c0();
    puVar2 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puStack_58 = PTR_PTR_1126fcb68;
      puStack_60 = puVar3;
      _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
      ppuVar7 = ppuVar1;
LAB_108521420:
      puVar2 = (undefined *)ppuVar7;
      if (ppuVar7 != (undefined **)0x0) {
        *(undefined **)((long)ppuVar7 + 8) = puVar9;
        *(undefined **)((long)ppuVar7 + 0x18) = puVar5;
        *(undefined **)((long)ppuVar7 + 0x20) = puVar6;
      }
    }
LAB_108521430:
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      puVar9 = param_1;
      func_0x00010c25b720();
      *(undefined **)(puVar2 + 0x18) = puVar9;
      puVar9 = param_1;
      func_0x00010c2709c0();
      *(undefined **)(puVar2 + 0x20) = puVar9;
      _objc_retain(puVar2);
      puVar9 = puVar2;
      goto LAB_108521684;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar9 = PTR_PTR_1126d9f80;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d9f80;
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    puVar9 = PTR_PTR_1126d9f80;
    _objc_alloc();
    puVar3 = param_1;
    func_0x00010c25b720();
    puVar4 = param_1;
    func_0x00010c2709c0();
    puVar2 = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      puStack_58 = PTR_PTR_1126fcb68;
      puStack_60 = puVar9;
      _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
      puVar2 = (undefined *)ppuVar8;
      if (ppuVar8 != (undefined **)0x0) {
        *(undefined8 *)((long)ppuVar8 + 8) = 0xffffffffffffffff;
        *(undefined **)((long)ppuVar8 + 0x18) = puVar3;
        *(undefined **)((long)ppuVar8 + 0x20) = puVar4;
      }
    }
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar9 = (undefined *)0x0;
LAB_108521684:
  _objc_release(puVar9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108521744; end: 1085217a3;  */

void FUN_108521744(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e68;
    _objc_alloc(PTR_PTR_1126d9e68);
    func_0x00010c04e380();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085217a4; end: 1085217af; -[SCStoriesLatestPostTimestampChangeRequest table] */

undefined * FUN_1085217a4(void)

{
  return &UNK_10f4a291f;
}



/* Entry: 1085217b0; end: 1085217f7; -[SCStoriesLatestPostTimestampChangeRequest createTableWithSQLite:] */

void FUN_1085217b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df344d0,0x97,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1085217f8; end: 108521c67; -[SCStoriesLatestPostTimestampChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1085217f8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar2 == 1) {
    FUN_108521744(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar11 = puVar6;
    func_0x00010c25b720(puVar6);
    puVar7 = puVar6;
    func_0x00010c2709c0(puVar6);
    *(undefined1 *)(param_4 + 0x46) = 1;
    iVar2 = *(int *)(param_4 + 0x20);
    iVar3 = *(int *)(param_4 + 0x30);
    iVar4 = *(int *)(param_4 + 0x28);
    func_0x000107c27dbc(param_4,6,puVar7,0);
    func_0x000107c27db0(param_4,4,(ulong)puVar11 & 0xffffffff,0);
    lVar8 = param_4;
    func_0x000107c27dc0(param_4,(iVar2 - iVar3) + iVar4);
    _objc_release(puVar6);
    func_0x000107c27dc4(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar13;
    lVar8 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a29d3);
    if (lVar8 == 0) goto LAB_108521bf4;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar5);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
    }
    _sqlite3_bind_int64(lVar8,2,uVar9);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_108521bf4;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e68);
    func_0x00010c21c9a0(puVar11);
LAB_108521bdc:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a2995);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d9e68);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108521c00;
          }
        }
      }
      puVar11 = (undefined *)0x0;
      goto LAB_108521c00;
    }
    FUN_108521744(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar11 = puVar6;
    func_0x00010c25b720(puVar6);
    puVar7 = puVar6;
    func_0x00010c2709c0(puVar6);
    *(undefined1 *)(param_4 + 0x46) = 1;
    iVar2 = *(int *)(param_4 + 0x20);
    iVar3 = *(int *)(param_4 + 0x30);
    iVar4 = *(int *)(param_4 + 0x28);
    func_0x000107c27dbc(param_4,6,puVar7,0);
    func_0x000107c27db0(param_4,4,(ulong)puVar11 & 0xffffffff,0);
    lVar8 = param_4;
    func_0x000107c27dc0(param_4,(iVar2 - iVar3) + iVar4);
    _objc_release(puVar6);
    func_0x000107c27dc4(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a2a21);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar5);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,3,uVar9);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d9e68);
        func_0x00010c21c9a0(puVar11);
        goto LAB_108521bdc;
      }
    }
LAB_108521bf4:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_108521c00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108521c68; end: 108521c8b; +[SCStoriesLastResponseMetaInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108521c68(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108521c84;
  auVar1._0_8_ = 0x108521c7c;
  return auVar1;
}



/* Entry: 108521c8c; end: 108521d2f;  */

undefined1 * FUN_108521c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fcb70;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108521d30; end: 108522193;  */

void FUN_108521d30(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar7 = PTR_PTR_1126d9f88;
  _objc_retain(param_1);
  _objc_opt_self(puVar7);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_108521ffc:
    lVar1 = 0;
LAB_108522000:
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010bf636c0();
      _objc_release(puVar7);
      func_0x000107c310d8(puVar2,&UNK_10f4a2a97);
      lVar1 = param_1;
      if (puVar2 != (undefined *)0x0) {
        lVar3 = param_1;
        func_0x00010bfa4340(param_1);
        _sqlite3_bind_int64(puVar2,1,lVar3);
        puVar7 = puVar2;
        _sqlite3_step();
        if ((int)puVar7 == 100) {
          puVar7 = puVar2;
          _sqlite3_column_int64(puVar2,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d67e0);
          _sqlite3_column_blob(puVar2,1);
          _sqlite3_column_bytes(puVar2,1);
          puVar5 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar2);
          if (puVar5 == (undefined *)0x0) goto LAB_108521ffc;
          puVar2 = PTR_PTR_1126d9f88;
          _objc_alloc();
          puVar4 = puVar5;
          func_0x00010bfa4340(puVar5);
          puVar6 = puVar5;
          func_0x00010c25c6c0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          FUN_108521c8c(puVar2,puVar7,puVar4,puVar6);
          goto LAB_108521e34;
        }
      }
      goto LAB_108522000;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d67e0);
    puVar5 = puVar7;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) goto LAB_108521ffc;
    puVar2 = PTR_PTR_1126d9f88;
    _objc_alloc();
    puVar7 = puVar5;
    func_0x00010bfa4340(puVar5);
    puVar6 = puVar5;
    func_0x00010c25c6c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_108521c8c(puVar2,lVar1,puVar7,puVar6);
LAB_108521e34:
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010bfa4340();
      *(long *)(puVar2 + 0x18) = lVar1;
      lVar1 = param_1;
      func_0x00010c25c6c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      _objc_retain(puVar2);
      puVar7 = puVar2;
      goto LAB_1085220a4;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar7 = PTR_PTR_1126d9f88;
  _objc_retain(param_1);
  _objc_opt_self(puVar7);
  puVar2 = PTR_PTR_1126d9f88;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bfa4340(param_1);
    lVar3 = param_1;
    func_0x00010c25c6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_108521c8c(puVar2,0xffffffffffffffff,lVar1,lVar3);
    _objc_release(lVar3);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar7 = (undefined *)0x0;
LAB_1085220a4:
  _objc_release(puVar7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108522194; end: 1085221f3;  */

void FUN_108522194(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d67e0;
    _objc_alloc(PTR_PTR_1126d67e0);
    func_0x00010c0127a0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085221f4; end: 1085221ff; -[SCStoriesLastResponseMetaInfoChangeRequest .cxx_destruct] */

void FUN_1085221f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108522200; end: 10852220b; -[SCStoriesLastResponseMetaInfoChangeRequest table] */

undefined * FUN_108522200(void)

{
  return &UNK_10f4a2a79;
}



/* Entry: 10852220c; end: 108522253; -[SCStoriesLastResponseMetaInfoChangeRequest createTableWithSQLite:] */

void FUN_10852220c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df34567,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108522254; end: 1085225eb; -[SCStoriesLastResponseMetaInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108522254(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_108522194(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1085225ec(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a2b1d);
    if (lVar5 == 0) goto LAB_108522588;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    _sqlite3_bind_int64(lVar5,2,uVar8);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_108522588;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar4);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d67e0);
    func_0x00010c21c9a0(puVar7);
LAB_108522570:
    _objc_release(puVar7);
    _objc_retain(puVar4);
    puVar7 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a2ae4);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d67e0);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar4);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108522594;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108522594;
    }
    FUN_108522194(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1085225ec(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a2b65);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      _sqlite3_bind_int64(param_3,3,uVar8);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d67e0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108522570;
      }
    }
LAB_108522588:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_108522594:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1085225ec; end: 108522723;  */

ulong FUN_1085225ec(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bfa4340(param_2);
  lVar5 = param_2;
  func_0x00010c25c6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = lVar5;
    _objc_retainAutorelease(lVar5);
    func_0x00010bf25f00();
    lVar7 = lVar5;
    func_0x00010c08fa60(lVar5);
    uVar8 = param_1;
    func_0x000107c27df8(param_1,lVar6,lVar7);
  }
  _objc_release(lVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,4,lVar4,0);
  func_0x000107c27de4(param_1,6,uVar8 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108522724; end: 108522787;  */

undefined ** FUN_108522724(void)

{
  int iVar1;
  
  if ((bRam0000000113827e58 & 1) == 0) {
    iVar1 = 0x13827e58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263d20,0x100000000);
      ___cxa_guard_release(0x113827e58);
    }
  }
  return &PTR_PTR_113263d20;
}



/* Entry: 108522788; end: 10852280f;  */

void FUN_108522788(uint *param_1,undefined1 *param_2)

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



/* Entry: 108522810; end: 10852289b;  */

void FUN_108522810(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfb9120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfb9120(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10852289c; end: 1085228ff;  */

undefined ** FUN_10852289c(void)

{
  int iVar1;
  
  if ((bRam0000000113827e60 & 1) == 0) {
    iVar1 = 0x13827e60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263d90,0x100000000);
      ___cxa_guard_release(0x113827e60);
    }
  }
  return &PTR_PTR_113263d90;
}



/* Entry: 108522900; end: 108522987;  */

void FUN_108522900(uint *param_1,undefined1 *param_2)

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



/* Entry: 108522988; end: 108522a13;  */

void FUN_108522988(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfceb20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108522a14; end: 108522a1f; +[SCStoriesFriendCustomStoryPublicGroupMetadata table] */

undefined * FUN_108522a14(void)

{
  return &UNK_10f4a2bb7;
}



/* Entry: 108522a20; end: 108522c8b; +[SCStoriesFriendCustomStoryPublicGroupMetadata immutableObjectParse:bufferSize:] */

void FUN_108522a20(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d8fc0;
  _objc_alloc(PTR_PTR_1126d8fc0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_108522b08:
    puVar8 = (undefined *)0x0;
LAB_108522b0c:
    uVar9 = 0;
LAB_108522b10:
    puVar10 = (undefined *)0x0;
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
    if (uVar4 < 7) goto LAB_108522b08;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
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
    if (uVar4 < 9) goto LAB_108522b0c;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar6);
    }
    if (uVar4 < 0xb) goto LAB_108522b10;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
    if (uVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0xc < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc);
      if (uVar6 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      if ((uVar4 < 0xf) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xe), uVar6 == 0)) {
        lVar5 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        lVar5 = (long)puVar2 + (ulong)*puVar2;
      }
      goto LAB_108522b1c;
    }
  }
  lVar5 = 0;
  uVar11 = 0;
LAB_108522b1c:
  FUN_10850cf40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015e60(uVar11,puVar3,param_2,puVar7,puVar8,uVar9,puVar10,lVar5);
  _objc_release(lVar5);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108522c8c; end: 108522c9f; +[SCStoriesFriendCustomStoryPublicGroupMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_108522c8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108522cc8;
  auVar1._0_8_ = FUN_108522ca0;
  return auVar1;
}



/* Entry: 108522ca0; end: 108522cc7;  */

int FUN_108522ca0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf6389e8;
  _strcmp(&DAT_10f6389e8,param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 108522cc8; end: 108522d67;  */

bool FUN_108522cc8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x000107c310d8(param_2,&UNK_10f4a2bed);
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



/* Entry: 108522d68; end: 108522ebb;  */

undefined1 *
FUN_108522d68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1126fcb78;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108522ebc; end: 10852336f;  */

void FUN_108522ebc(undefined8 param_1,undefined *param_2)

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
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010bfb9120();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar8 = param_2;
        func_0x00010bfceb20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar1;
          func_0x00010bf636c0();
          _objc_release(puVar1);
          func_0x000107c310d8(puVar8,&UNK_10f4a2c57);
          if (puVar8 != (undefined *)0x0) {
            puVar1 = param_2;
            func_0x00010bfb9120(param_2);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_2;
            func_0x00010bfceb20(param_2);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar8,2,puVar2,0xffffffff,0xffffffffffffffff);
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
              _objc_opt_class(PTR_PTR_1126d8fc0);
              _sqlite3_column_blob(puVar8,1);
              _sqlite3_column_bytes(puVar8,1);
              puVar3 = puVar2;
              func_0x00010c0dfea0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_2);
              _objc_release(puVar2);
              _sqlite3_reset(puVar8);
              if (puVar3 == (undefined *)0x0) goto LAB_108523288;
              puVar8 = PTR_PTR_1126d9e38;
              _objc_alloc(PTR_PTR_1126d9e38);
              puVar2 = puVar3;
              func_0x00010bfb9120(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010bfceb20(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010c27dd80(puVar3);
              puVar6 = puVar3;
              func_0x00010bf85d80(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf5ab40(puVar3);
              puVar7 = puVar3;
              func_0x00010bf43080(puVar3);
              _objc_retainAutoreleasedReturnValue();
              FUN_108522d68(param_1,puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
              param_2 = puVar3;
              goto LAB_108522ffc;
            }
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d8fc0);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126d9e38;
        _objc_alloc(PTR_PTR_1126d9e38);
        puVar2 = puVar3;
        func_0x00010bfb9120(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bfceb20(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c27dd80(puVar3);
        puVar6 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5ab40(puVar3);
        puVar7 = puVar3;
        func_0x00010bf43080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108522d68(param_1,puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_2 = puVar3;
LAB_108522ffc:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108523290;
      }
LAB_108523288:
      param_2 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_108523290:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108523370; end: 1085233e3;  */

void FUN_108523370(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108522ebc();
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



/* Entry: 1085233e4; end: 1085236ff;  */

void FUN_1085233e4(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9e38;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_108522ebc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar7 = PTR_PTR_1126d9e38;
    _objc_retain(param_2);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126d9e38;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bfb9120(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010bfceb20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c27dd80(param_2);
      puVar5 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40(param_2);
      puVar6 = param_2;
      func_0x00010bf43080(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_108522d68(param_1,puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar7 = param_2;
    func_0x00010bfb9120(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010c27dd80();
    *(undefined **)(puVar1 + 0x28) = puVar7;
    puVar7 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    func_0x00010bf5ab40(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    puVar7 = param_2;
    func_0x00010bf43080(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108523700; end: 10852376b;  */

void FUN_108523700(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8fc0;
    _objc_alloc(PTR_PTR_1126d8fc0);
    func_0x00010c015e60(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10852376c; end: 1085237b3; -[SCStoriesFriendCustomStoryPublicGroupMetadataChangeRequest .cxx_destruct] */

void FUN_10852376c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1085237b4; end: 1085237bf; -[SCStoriesFriendCustomStoryPublicGroupMetadataChangeRequest table] */

undefined * FUN_1085237b4(void)

{
  return &UNK_10f4a2bb7;
}



/* Entry: 1085237c0; end: 108523873; -[SCStoriesFriendCustomStoryPublicGroupMetadataChangeRequest createTableWithSQLite:] */

void FUN_1085237c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df345f7,200,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df346bf,0x85,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10df34744,0xb2,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 108523874; end: 108523e63; -[SCStoriesFriendCustomStoryPublicGroupMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108523874(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108523700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_108523e64(param_4,puVar6);
    func_0x000107c27dc4(param_4,lVar7,0,0);
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
    func_0x000107c310d8(param_3,&UNK_10f4a2d7b);
    if (lVar7 == 0) goto LAB_108523dc0;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_108523dc0;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x000107c310d8(param_3,&UNK_10f4a2bed);
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
      if ((int)param_3 != 0x65) goto LAB_108523dc0;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8fc0);
    func_0x00010c21c9a0(puVar11);
LAB_108523d98:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x000107c310d8(param_3,&UNK_10f4a2ccf);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x000107c310d8(param_3,&UNK_10f4a2d20);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_1085239a0;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d8fc0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108523dcc;
          }
        }
      }
LAB_1085239a0:
      puVar11 = (undefined *)0x0;
      goto LAB_108523dcc;
    }
    FUN_108523700();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_108523e64(param_4,puVar6);
    func_0x000107c27dc4(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a2dec);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar7,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d8fc0);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010c27dd80();
        puVar5 = puVar6;
        func_0x00010c27dd80();
        if (puVar11 != puVar5) {
          func_0x000107c310d8(param_3,&UNK_10f4a2e66);
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
            goto LAB_108523db8;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d8fc0);
        func_0x00010c21c9a0(puVar11);
        goto LAB_108523d98;
      }
    }
LAB_108523db8:
    _objc_release(puVar6);
LAB_108523dc0:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_108523dcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108523e64; end: 1085240db;  */

ulong FUN_108523e64(undefined8 param_1,ulong param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf43080();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf43080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    FUN_10850dccc(param_2,uVar5);
    _objc_release(uVar5);
    uVar11 = uVar11 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfb9120();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_1085240dc(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_1085240dc(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010c27dd80(param_3);
  uVar9 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  FUN_1085240dc(param_2,uVar9);
  func_0x00010bf5ab40(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,0xc);
  func_0x000107c27db0(param_2,8,uVar8 & 0xffffffff,0);
  if (uVar11 != 0) {
    func_0x000107c27db4(param_2,4);
    func_0x000107c27de0(param_2,0xe,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uVar11) + 4,0);
  }
  func_0x000107c27ddc(param_2,10,uVar10 & 0xffffffff);
  func_0x000107c27ddc(param_2,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1085240dc; end: 10852420b;  */

undefined8 FUN_1085240dc(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1085241bc;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_1085241bc;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10852417c;
    param_1 = 0;
  }
  else {
LAB_10852417c:
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
LAB_1085241bc:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10852420c; end: 10852426f;  */

undefined ** FUN_10852420c(void)

{
  int iVar1;
  
  if ((bRam0000000113827e68 & 1) == 0) {
    iVar1 = 0x13827e68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263e00,0x100000000);
      ___cxa_guard_release(0x113827e68);
    }
  }
  return &PTR_PTR_113263e00;
}



/* Entry: 108524270; end: 1085242f7;  */

void FUN_108524270(uint *param_1,undefined1 *param_2)

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



/* Entry: 1085242f8; end: 108524383;  */

void FUN_1085242f8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfb9120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfb9120(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108524384; end: 10852438f; +[SCStoriesFriendCustomStoryPublicGroupUser table] */

undefined * FUN_108524384(void)

{
  return &UNK_10f4a2ed0;
}



/* Entry: 108524390; end: 10852447f; +[SCStoriesFriendCustomStoryPublicGroupUser immutableObjectParse:bufferSize:] */

void FUN_108524390(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d8fa0;
  _objc_alloc(PTR_PTR_1126d8fa0);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
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
    uVar8 = 0;
    if ((6 < uVar3) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5)), uVar6 != 0)) {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
  }
  func_0x00010c015e40(uVar8,puVar4,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108524480; end: 1085244a3; +[SCStoriesFriendCustomStoryPublicGroupUser objectClassFunctionPointer] */

undefined1  [16] FUN_108524480(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10852449c;
  auVar1._0_8_ = 0x108524494;
  return auVar1;
}



/* Entry: 1085244a4; end: 10852454f;  */

undefined1 * FUN_1085244a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126fcb80;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108524550; end: 10852486b;  */

void FUN_108524550(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar4 < 0) {
      puVar4 = param_1;
      func_0x00010bfb9120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010bf636c0();
        _objc_release(puVar4);
        func_0x000107c310d8(puVar1,&UNK_10f4a2f02);
        puVar4 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_1085247d8;
        puVar4 = param_1;
        func_0x00010bfb9120(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar4);
        _objc_release(puVar4);
        puVar4 = puVar1;
        _sqlite3_step();
        if ((int)puVar4 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d8fa0);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_1085247d0;
          puVar4 = PTR_PTR_1126d9e40;
          _objc_alloc(PTR_PTR_1126d9e40);
          puVar1 = puVar3;
          func_0x00010bfb9120(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9c880(puVar3);
          FUN_1085244a4(puVar4,puVar2,puVar1);
          param_1 = puVar3;
          goto LAB_108524628;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d8fa0);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126d9e40;
        _objc_alloc(PTR_PTR_1126d9e40);
        puVar1 = puVar3;
        func_0x00010bfb9120(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9c880(puVar3);
        FUN_1085244a4(puVar4,puVar2,puVar1);
        param_1 = puVar3;
LAB_108524628:
        _objc_release(puVar1);
        goto LAB_1085247d8;
      }
LAB_1085247d0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_1085247d8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10852486c; end: 1085248df;  */

void FUN_10852486c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108524550();
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



/* Entry: 1085248e0; end: 108524a9f;  */

void FUN_1085248e0(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9e40;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_108524550();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar3 = PTR_PTR_1126d9e40;
    _objc_retain(param_2);
    _objc_opt_self(puVar3);
    puVar3 = PTR_PTR_1126d9e40;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bfb9120(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c880(param_2);
      FUN_1085244a4(puVar3,0xffffffffffffffff,puVar2);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar3 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar3 = param_2;
    func_0x00010bfb9120(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar3);
    func_0x00010bf9c880(param_2);
    *(undefined8 *)(puVar1 + 0x20) = param_1;
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



/* Entry: 108524aa0; end: 108524b03;  */

void FUN_108524aa0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8fa0;
    _objc_alloc(PTR_PTR_1126d8fa0);
    func_0x00010c015e40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108524b04; end: 108524b0f; -[SCStoriesFriendCustomStoryPublicGroupUserChangeRequest .cxx_destruct] */

void FUN_108524b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108524b10; end: 108524b1b; -[SCStoriesFriendCustomStoryPublicGroupUserChangeRequest table] */

undefined * FUN_108524b10(void)

{
  return &UNK_10f4a2ed0;
}



/* Entry: 108524b1c; end: 108524b63; -[SCStoriesFriendCustomStoryPublicGroupUserChangeRequest createTableWithSQLite:] */

void FUN_108524b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df347f6,0xab,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108524b64; end: 108524eeb; -[SCStoriesFriendCustomStoryPublicGroupUserChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108524b64(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108524aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108524eec(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a2fb4);
    if (lVar6 == 0) goto LAB_108524e88;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108524e88;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8fa0);
    func_0x00010c21c9a0(puVar7);
LAB_108524e70:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a2f67);
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
            _objc_opt_class(PTR_PTR_1126d8fa0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108524e94;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108524e94;
    }
    FUN_108524aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108524eec(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a3014);
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
        _objc_opt_class(PTR_PTR_1126d8fa0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108524e70;
      }
    }
LAB_108524e88:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108524e94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108524eec; end: 1085250c3;  */

ulong FUN_108524eec(undefined8 param_1,ulong param_2,char *param_3)

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
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010bfb9120();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_108524fec;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_2,pcVar5,pcVar6);
    goto LAB_108524fec;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_108524fac;
    uVar9 = 0;
  }
  else {
LAB_108524fac:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x000107c27df0(param_2,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_108524fec:
  _objc_release(pcVar4);
  func_0x00010bf9c880(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,6);
  func_0x000107c27ddc(param_2,4,uVar9 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}


