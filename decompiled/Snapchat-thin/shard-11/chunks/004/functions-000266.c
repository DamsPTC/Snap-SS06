/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10850ea44; end: 10850eb47;  */

undefined1 *
FUN_10850ea44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126fcb18;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
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
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10850eb48; end: 10850ebbb;  */

void FUN_10850eb48(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10850ebbc();
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



/* Entry: 10850ebbc; end: 10850ef5f;  */

void FUN_10850ebbc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar6,&UNK_10f4a16eb);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c11ac00(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar6;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar6;
            _sqlite3_column_int64(puVar6,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d67a0);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_10850ee9c;
            puVar6 = PTR_PTR_1126d6798;
            _objc_alloc(PTR_PTR_1126d6798);
            puVar2 = puVar3;
            func_0x00010c11ac00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c15e620(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10850ea44(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_10850ecbc;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d67a0);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d6798;
        _objc_alloc(PTR_PTR_1126d6798);
        puVar2 = puVar3;
        func_0x00010c11ac00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10850ea44(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_10850ecbc:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10850eea4;
      }
LAB_10850ee9c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10850eea4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10850ef60; end: 10850efd3;  */

void FUN_10850ef60(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10850ebbc();
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



/* Entry: 10850efd4; end: 10850f037;  */

void FUN_10850efd4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d67a0;
    _objc_alloc(PTR_PTR_1126d67a0);
    func_0x00010c03bf00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10850f038; end: 10850f073; -[SCStoriesCustomStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_10850f038(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10850f074; end: 10850f07f; -[SCStoriesCustomStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_10850f074(void)

{
  return &UNK_10f4a16c4;
}



/* Entry: 10850f080; end: 10850f0c7; -[SCStoriesCustomStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_10850f080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df334b5,0xa2,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10850f0c8; end: 10850f44f; -[SCStoriesCustomStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10850f0c8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10850efd4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10850f450(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a1788);
    if (lVar6 == 0) goto LAB_10850f3ec;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10850f3ec;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d67a0);
    func_0x00010c21c9a0(puVar7);
LAB_10850f3d4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a1746);
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
            _objc_opt_class(PTR_PTR_1126d67a0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10850f3f8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10850f3f8;
    }
    FUN_10850efd4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10850f450(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a17de);
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
        _objc_opt_class(PTR_PTR_1126d67a0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10850f3d4;
      }
    }
LAB_10850f3ec:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10850f3f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10850f450; end: 10850f83f;  */

undefined * FUN_10850f450(undefined *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_108;
  code *pcStack_100;
  undefined ***pppuStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_108 = &PTR_FUN_110a50930;
  pcStack_100 = FUN_108510754;
  pppuStack_f0 = &ppuStack_108;
  piVar5 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_170 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(piVar5);
  piVar6 = piVar5;
  func_0x00010bf52a60();
  if (piVar6 != (int *)0x0) {
    lVar12 = *plStack_140;
    do {
      piVar13 = (int *)0x0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(piVar5);
        }
        uVar11 = *(undefined8 *)(lStack_148 + (long)piVar13 * 8);
        _objc_retain(uVar11);
        pppuVar7 = &ppuStack_108;
        FUN_108511784(pppuVar7,param_1,uVar11);
        uStack_154 = SUB84(pppuVar7,0);
        FUN_1085116c4(&lStack_170,&uStack_154);
        _objc_release(uVar11);
        piVar13 = (int *)((long)piVar13 + 1);
      } while (piVar6 != piVar13);
      piVar6 = piVar5;
      func_0x00010bf52a60();
    } while (piVar6 != (int *)0x0);
  }
  _objc_release(piVar5);
  _objc_release(piVar5);
  _objc_release(piVar5);
  if (pppuStack_f0 == &ppuStack_108) {
    lVar12 = 0x20;
  }
  else {
    if (pppuStack_f0 == (undefined ***)0x0) goto LAB_10850f5c8;
    lVar12 = 0x28;
  }
  (**(code **)((long)*pppuStack_f0 + lVar12))();
LAB_10850f5c8:
  piVar5 = param_2;
  func_0x00010c15e620();
  _objc_retainAutoreleasedReturnValue();
  if (piVar5 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    piVar6 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    piVar13 = piVar6;
    func_0x00010c08b1c0(piVar6);
    param_1[0x46] = 1;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c27db0(param_1,4,piVar13,0);
    puVar8 = param_1;
    func_0x000107c27dc0(param_1,((int)uVar14 - (int)uVar1) + (int)uVar11);
    _objc_release(piVar6);
    _objc_release(piVar6);
    uVar10 = (ulong)puVar8 & 0xffffffff;
  }
  _objc_release(piVar5);
  piVar5 = param_2;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x000100ab0480(param_1,piVar5);
  lVar12 = 0x11326399a;
  if (lStack_168 - lStack_170 != 0) {
    lVar12 = lStack_170;
  }
  puVar9 = param_1;
  func_0x000108516b70(param_1,lVar12,lStack_168 - lStack_170 >> 2);
  param_1[0x46] = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28);
  func_0x000108516a90(param_1,8,uVar10);
  func_0x000108516b00(param_1,6,(ulong)puVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,(ulong)puVar8 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar2 - iVar3) + iVar4);
  _objc_release(piVar5);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  piVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(piVar5);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume();
  if (piVar6 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126c3328;
    _objc_alloc(PTR_PTR_1126c3328);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
      puVar9 = (undefined *)0x0;
    }
    else if (((ushort *)((long)piVar6 - (long)*piVar6))[2] == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04dca0(puVar8);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 10850f840; end: 10850f97b;  */

void FUN_10850f840(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (param_1 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10850f91c;
  }
  puVar8 = PTR_PTR_1126c3328;
  _objc_alloc(PTR_PTR_1126c3328);
  lVar6 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar6);
  if (uVar4 < 5) {
    puVar9 = (undefined *)0x0;
LAB_10850f8f4:
    uVar5 = 0;
    uVar2 = 0;
LAB_10850f8fc:
    uVar3 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar6);
    }
    if (uVar4 < 7) goto LAB_10850f8f4;
    uVar7 = (ulong)*(ushort *)((long)param_1 + (6 - lVar6));
    if (uVar7 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((long)param_1 + uVar7);
    }
    if (uVar4 < 9) {
      uVar5 = 0;
      goto LAB_10850f8fc;
    }
    uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - lVar6));
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = *(undefined4 *)((long)param_1 + uVar7);
    }
    if ((uVar4 < 0xb) || (uVar7 = (ulong)*(ushort *)((long)param_1 + (10 - lVar6)), uVar7 == 0))
    goto LAB_10850f8fc;
    uVar3 = *(undefined4 *)((long)param_1 + uVar7);
  }
  func_0x00010c04dca0(puVar8,param_2,puVar9,uVar2,uVar5,uVar3);
  _objc_release(puVar9);
LAB_10850f91c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10850f97c; end: 10850fba3;  */

void FUN_10850f97c(int *param_1,undefined8 param_2)

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
    goto LAB_10850fab0;
  }
  puVar6 = PTR_PTR_1126d9f10;
  _objc_alloc(PTR_PTR_1126d9f10);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_10850fa68:
    puVar7 = (undefined *)0x0;
LAB_10850fa6c:
    puVar9 = (undefined *)0x0;
LAB_10850fa70:
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
    if (uVar2 < 7) goto LAB_10850fa68;
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
    if (uVar2 < 9) goto LAB_10850fa6c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8);
    if (uVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 0xb) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 10), uVar4 == 0))
    goto LAB_10850fa70;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c054380(puVar6,param_2,puVar5,puVar7,puVar9,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_10850fab0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10850fba4; end: 10850fedb;  */

void FUN_10850fba4(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  
  if (param_1 == (int *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_10850fd08;
  }
  puVar9 = PTR_PTR_1126c3330;
  _objc_alloc(PTR_PTR_1126c3330);
  lVar4 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar4);
  if (uVar5 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10850fc9c:
    puVar8 = (undefined *)0x0;
LAB_10850fca0:
    puVar10 = (undefined *)0x0;
LAB_10850fca4:
    bVar3 = false;
    bVar2 = false;
LAB_10850fcac:
    uVar12 = 0;
LAB_10850fcb0:
    puVar13 = (undefined *)0x0;
LAB_10850fcb4:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_10850fc9c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 9) goto LAB_10850fca0;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0xb) goto LAB_10850fca4;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar6 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar6) != '\0';
    }
    if (uVar5 < 0xd) {
      bVar3 = false;
      goto LAB_10850fcac;
    }
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar6 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_1 + uVar6) != '\0';
    }
    if (uVar5 < 0xf) goto LAB_10850fcac;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe);
    if (uVar6 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if (uVar5 < 0x11) goto LAB_10850fcb0;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x10);
    if (uVar6 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar5 < 0x13) || (*(short *)((long)param_1 + lVar4 + 0x12) == 0)) goto LAB_10850fcb4;
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bffa160();
  }
  func_0x00010c04d900(puVar9,param_2,puVar7,puVar8,puVar10,bVar2,bVar3,uVar12,puVar13,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_10850fd08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10850fedc; end: 10850ffd3;  */

void FUN_10850fedc(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10850ffac;
  }
  puVar6 = PTR_PTR_1126d9f18;
  _objc_alloc(PTR_PTR_1126d9f18);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10850ff90:
    uVar2 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    if ((uVar3 < 7) || (uVar5 = (ulong)*(ushort *)((long)param_1 + (6 - lVar4)), uVar5 == 0))
    goto LAB_10850ff90;
    uVar2 = *(undefined4 *)((long)param_1 + uVar5);
  }
  func_0x00010c04db80(puVar6,param_2,puVar7,uVar2);
  _objc_release(puVar7);
LAB_10850ffac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10850ffd4; end: 1085101e3;  */

void FUN_10850ffd4(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_1085100e0;
  }
  puVar7 = PTR_PTR_1126d9f20;
  _objc_alloc(PTR_PTR_1126d9f20);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar6 = (undefined *)0x0;
LAB_108510098:
    bVar2 = false;
LAB_10851009c:
    uVar9 = 0;
LAB_1085100a0:
    puVar10 = (undefined *)0x0;
LAB_1085100a4:
    puVar8 = (undefined *)0x0;
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
    if (uVar3 < 7) goto LAB_108510098;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar5 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar5) != '\0';
    }
    if (uVar3 < 9) goto LAB_10851009c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)param_1 + uVar5);
    }
    if (uVar3 < 0xb) goto LAB_1085100a0;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar5 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 0xd) || (*(short *)((long)param_1 + lVar4 + 0xc) == 0)) goto LAB_1085100a4;
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bffa160();
  }
  func_0x00010c04d940(puVar7,param_2,puVar6,bVar2,uVar9,puVar10,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar6);
LAB_1085100e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1085101e4; end: 10851031b;  */

void FUN_1085101e4(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_1085102f4;
  }
  puVar6 = PTR_PTR_1126d9f48;
  _objc_alloc(PTR_PTR_1126d9f48);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
LAB_1085102c8:
    uVar2 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    if (uVar3 < 7) goto LAB_1085102c8;
    uVar5 = (ulong)*(ushort *)((long)param_1 + (6 - lVar4));
    uVar9 = 0;
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if (uVar3 < 9) {
LAB_1085102d8:
      uVar2 = 0;
    }
    else {
      uVar5 = (ulong)*(ushort *)((long)param_1 + (8 - lVar4));
      if (uVar5 != 0) {
        uVar9 = *(undefined8 *)((long)param_1 + uVar5);
      }
      if ((uVar3 < 0xb) || (uVar5 = (ulong)*(ushort *)((long)param_1 + (10 - lVar4)), uVar5 == 0))
      goto LAB_1085102d8;
      uVar2 = *(undefined8 *)((long)param_1 + uVar5);
    }
  }
  func_0x00010c04eec0(uVar8,uVar9,puVar6,param_2,puVar7,uVar2);
  _objc_release(puVar7);
LAB_1085102f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10851031c; end: 108510753;  */

void FUN_10851031c(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126d9f68);
    func_0x00010c01e400();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108510754; end: 1085116c3;  */

ulong FUN_108510754(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108511854(param_1,lVar6);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf12320();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_98 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010bf12320(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = param_1;
    FUN_108511a14(param_1,lVar8);
    _objc_release(lVar8);
    uStack_98 = uStack_98 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_a0 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c26f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = param_1;
    FUN_108511c38(param_1,lVar8);
    _objc_release(lVar8);
    uStack_a0 = uStack_a0 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_a8 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = param_1;
    FUN_108511d38(param_1,lVar8);
    _objc_release(lVar8);
    uStack_a8 = uStack_a8 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_b0 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c26d760(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = param_1;
    func_0x000100aaf8f0(param_1,lVar8);
    _objc_release(lVar8);
    uStack_b0 = uStack_b0 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_b8 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010bf30da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = param_1;
    FUN_108512054(param_1,lVar8);
    _objc_release(lVar8);
    uStack_b8 = uStack_b8 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_c0 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c12fc80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = param_1;
    FUN_1085121f0(param_1,lVar8);
    _objc_release(lVar8);
    uStack_c0 = uStack_c0 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_c8 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010bef2d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = param_1;
    FUN_1085123f4(param_1,lVar8);
    _objc_release(lVar8);
    uStack_c8 = uStack_c8 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_d0 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c24a0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = param_1;
    FUN_108512658(param_1,lVar8);
    _objc_release(lVar8);
    uStack_d0 = uStack_d0 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_d8 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010bf4e880(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = param_1;
    FUN_10851279c(param_1,lVar8);
    _objc_release(lVar8);
    uStack_d8 = uStack_d8 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c094820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_e0 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c094820(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = param_1;
    FUN_108512884(param_1,lVar8);
    _objc_release(lVar8);
    uStack_e0 = uStack_e0 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_e8 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c281620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = param_1;
    FUN_10851296c(param_1,lVar8);
    _objc_release(lVar8);
    uStack_e8 = uStack_e8 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf10040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_f0 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010bf10040(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = param_1;
    FUN_108512a54(param_1,lVar8);
    _objc_release(lVar8);
    uStack_f0 = uStack_f0 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_100 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x000100ab0480(param_1,lVar9);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c27ddc(param_1,4,uVar10 & 0xffffffff);
    uStack_100 = param_1;
    func_0x000107c27dc0(param_1,((int)uVar25 - (int)uVar2) + (int)uVar1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    uStack_100 = uStack_100 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_110 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c247520(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = param_1;
    FUN_108512db4(param_1,lVar8);
    _objc_release(lVar8);
    uStack_110 = uStack_110 & 0xffffffff;
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010c0d2260(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108512ea8(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf1f6c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010bf1f6c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108512fb8(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c24b240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010c24b240(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1085130ec(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf28d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010bf28d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1085132c8(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010c0b8240(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10851347c(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c0c5b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1085136e0(&lStack_80,lVar6);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010bf5b3e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar9 = lVar8;
    func_0x00010c071360(lVar8);
    lVar11 = lVar8;
    func_0x00010bf4de40(lVar8);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28);
    func_0x000100c3b024(param_1,6,lVar11,0);
    func_0x000100ab13ac(param_1,4,lVar9,0);
    func_0x000107c27dc0(param_1,(iVar3 - iVar4) + iVar5);
    _objc_release(lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010bf42120(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10851383c(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar8 = param_2;
    func_0x00010c262140(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1085139ac(param_1,lVar8);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x000100ab0480(param_1,lVar6);
  lVar8 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x000100ab0480(param_1,lVar8);
  lVar9 = param_2;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x000100ab0480(param_1,lVar9);
  lVar11 = param_2;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x000100ab0480(param_1,lVar11);
  lVar15 = param_2;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x000100ab0480(param_1,lVar15);
  lVar17 = param_2;
  func_0x00010c15e560();
  lVar18 = param_2;
  func_0x00010c141c40();
  lVar19 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar19 != 0) {
    lVar20 = lVar19;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    lVar21 = lVar19;
    func_0x00010c08fa60(lVar19);
    func_0x000107c27df8(param_1,lVar20,lVar21);
  }
  _objc_release(lVar19);
  lVar20 = param_2;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ab0480(param_1,lVar20);
  func_0x00010c24be20();
  lVar21 = param_2;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar21 != 0) {
    lVar22 = lVar21;
    _objc_retainAutorelease(lVar21);
    func_0x00010bf25f00();
    lVar23 = lVar21;
    func_0x00010c08fa60(lVar21);
    func_0x000107c27df8(param_1,lVar22,lVar23);
  }
  _objc_release(lVar21);
  func_0x00010c14ede0();
  lVar23 = param_2;
  func_0x00010bf5b120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ab0480(param_1,lVar23);
  lVar24 = param_2;
  func_0x00010bf5b140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ab0480(param_1,lVar24);
  lVar22 = 0x113263999;
  if (lStack_78 - lStack_80 != 0) {
    lVar22 = lStack_80;
  }
  func_0x000108516954(param_1,lVar22,lStack_78 - lStack_80 >> 3);
  func_0x00010c25b820();
  func_0x00010bfa0a00();
  func_0x00010bfbaac0();
  FUN_108513abc(param_1,uVar10 & 0xffffffff,uVar12 & 0xffffffff,uVar7,uVar7 >> 0x20,uStack_98,
                uVar13 & 0xffffffff,uVar14 & 0xffffffff,uStack_a0,uStack_a8,uStack_b0,uStack_b8,
                uStack_c0,uStack_c8,uStack_d0,uStack_d8,uStack_e0,uStack_e8,uStack_f0,
                uVar16 & 0xffffffff,uStack_100,uStack_110,lVar17,(char)lVar18);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085116c4; end: 108511783;  */

long * FUN_1085116c4(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_68;
  
  plVar3 = param_1 + 2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)*plVar3) {
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_10851180c();
      _objc_retain(param_3);
      plVar3 = (long *)plVar3[3];
      uStack_68 = param_3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&uStack_68);
        _objc_release(uStack_68);
        return plVar3;
      }
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1085117f8);
      (*pcVar2)();
    }
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_108511820();
    puVar7 = (undefined4 *)((long)plVar3 + lVar8);
    lVar8 = (long)plVar3 + uVar5 * 4;
    lVar6 = (long)puVar7 - (param_1[1] - *param_1);
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 108511784; end: 10851180b;  */

long * FUN_108511784(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1085117f8);
  (*pcVar1)();
}



/* Entry: 10851180c; end: 10851181f;  */

undefined1  [16] FUN_10851180c(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    lVar3 = param_2 << 2;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000104bd35f4();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3812000000;
  pcStack_a0 = FUN_108513f04;
  uStack_98 = 0x108513f10;
  pcStack_90 = "";
  uStack_88 = 0;
  func_0x00010c0c1340(param_2);
  uVar1 = *(undefined4 *)(puStack_78 + 3);
  uVar2 = *(undefined4 *)(puStack_b0 + 6);
  __Block_object_dispose(&uStack_b8,8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_80,8);
  auVar6._4_4_ = uVar2;
  auVar6._0_4_ = uVar1;
  auVar6._8_8_ = uVar4;
  return auVar6;
}



/* Entry: 108511820; end: 108511853;  */

undefined1  [16] FUN_108511820(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if (param_2 >> 0x3e == 0) {
    lVar3 = param_2 << 2;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000104bd35f4();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3812000000;
  pcStack_90 = FUN_108513f04;
  uStack_88 = 0x108513f10;
  pcStack_80 = "";
  uStack_78 = 0;
  func_0x00010c0c1340(param_2);
  uVar1 = *(undefined4 *)(puStack_68 + 3);
  uVar2 = *(undefined4 *)(puStack_a0 + 6);
  __Block_object_dispose(&uStack_a8,8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_70,8);
  auVar6._4_4_ = uVar2;
  auVar6._0_4_ = uVar1;
  auVar6._8_8_ = uVar4;
  return auVar6;
}



/* Entry: 108511854; end: 108511a13;  */

undefined8 FUN_108511854(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
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
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_1b8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_1b0 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3812000000;
  pcStack_70 = FUN_108513f04;
  uStack_68 = 0x108513f10;
  pcStack_60 = "";
  uStack_58 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108513f14;
  puStack_a8 = &UNK_110a50750;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_108514008;
  puStack_e0 = &UNK_110a50780;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1085141a8;
  puStack_118 = &UNK_110a507b0;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1085143dc;
  puStack_150 = &UNK_110a507e0;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_10851471c;
  puStack_188 = &UNK_110a50810;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_108514874;
  puStack_1c0 = &UNK_110a50840;
  uStack_1a8 = param_1;
  puStack_180 = puStack_1b8;
  puStack_178 = puStack_1b0;
  uStack_170 = param_1;
  puStack_148 = puStack_1b8;
  puStack_140 = puStack_1b0;
  uStack_138 = param_1;
  puStack_110 = puStack_1b8;
  puStack_108 = puStack_1b0;
  uStack_100 = param_1;
  puStack_d8 = puStack_1b8;
  puStack_d0 = puStack_1b0;
  uStack_c8 = param_1;
  puStack_a0 = puStack_1b8;
  puStack_98 = puStack_1b0;
  uStack_90 = param_1;
  puStack_80 = puStack_1b0;
  puStack_48 = puStack_1b8;
  func_0x00010c0c1340(param_2,param_2,&puStack_c0,&puStack_f8,&puStack_130,&puStack_168,&puStack_1a0
                      ,&puStack_1d8);
  uVar1 = *(undefined4 *)(puStack_48 + 3);
  uVar2 = *(undefined4 *)(puStack_80 + 6);
  __Block_object_dispose(&uStack_88,8);
  __Block_object_dispose(&uStack_50,8);
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 108511a14; end: 108511c37;  */

ulong FUN_108511a14(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bfc11c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x000100ab0480(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c096600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x000100ab0480(param_1,uVar12);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,0xc,uVar13 & 0xffffffff);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108511c38; end: 108511d37;  */

long FUN_108511c38(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010bf8b160(param_3);
  uVar4 = param_3;
  uVar5 = param_1;
  func_0x00010c071060(param_3);
  func_0x00010bf9c720(param_3);
  func_0x00010c2709c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,10);
  func_0x000107c27db8(uVar5,0,param_2,8);
  func_0x000107c27db8(param_1,0,param_2,4);
  func_0x000100ab13ac(param_2,6,uVar4,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108511d38; end: 108512053;  */

ulong FUN_108511d38(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_88;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_88 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf1eee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = param_1;
    FUN_108514ae4(param_1,lVar2);
    _objc_release(lVar2);
    uStack_88 = uStack_88 & 0xffffffff;
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000100ab0480(param_1,lVar1);
  lVar2 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x000100ab0480(param_1,lVar2);
  lVar5 = param_2;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000100ab0480(param_1,lVar5);
  lVar7 = param_2;
  func_0x00010c27dd80();
  lVar8 = param_2;
  func_0x00010bf06600();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010bf7f0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x000100ab0480(param_1,lVar10);
  lVar12 = param_2;
  func_0x00010c083e00(param_2);
  lVar13 = param_2;
  func_0x00010bf03740();
  lVar14 = param_2;
  func_0x00010bf1f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ab0480(param_1,lVar14);
  lVar15 = param_2;
  func_0x00010bfb26c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ab0480(param_1,lVar15);
  func_0x00010c0802a0();
  FUN_108514d98(param_1,uVar3 & 0xffffffff,uVar4 & 0xffffffff,uVar6 & 0xffffffff,lVar7,
                uVar9 & 0xffffffff,uVar11 & 0xffffffff,lVar12,uStack_88,(int)lVar13);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108512054; end: 1085121ef;  */

ulong FUN_108512054(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010c1048c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_108514f70(param_1,uVar5);
    _objc_release(uVar5);
    uVar8 = uVar8 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010bf28e60(param_2);
  uVar5 = param_2;
  func_0x00010c0ed100(param_2);
  uVar6 = param_2;
  func_0x00010bf93b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,6,uVar5 & 0xffffffff,0);
  func_0x000107c27db0(param_1,4,uVar4 & 0xffffffff,0);
  FUN_108515108(param_1,10,uVar8);
  func_0x000107c27ddc(param_1,8,uVar7 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085121f0; end: 1085123f3;  */

ulong FUN_1085121f0(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010bfb73c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar8 = uVar5;
    func_0x00010bf59940(uVar5);
    uVar6 = uVar5;
    func_0x00010c247520(uVar5);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    func_0x000107c27db0(param_1,6,uVar6 & 0xffffffff,0);
    func_0x000107c27db0(param_1,4,uVar8,0);
    uVar8 = param_1;
    func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
    _objc_release(uVar5);
    _objc_release(uVar5);
    uVar8 = uVar8 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010bf0d6a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf30620(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar7 & 0xffffffff);
  func_0x000108515178(param_1,6,uVar8);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085123f4; end: 108512657;  */

ulong FUN_1085123f4(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar9;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c23d7e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    lVar6 = param_2;
    func_0x00010c23d7e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    FUN_1085151e8(param_1,lVar6);
    _objc_release(lVar6);
    uVar11 = uVar11 & 0xffffffff;
  }
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bf20ec0(param_2);
  lVar6 = param_2;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = lVar6;
    _objc_retainAutorelease(lVar6);
    func_0x00010bf25f00();
    lVar8 = lVar6;
    func_0x00010c08fa60(lVar6);
    uVar9 = param_1;
    func_0x000107c27df8(param_1,lVar7,lVar8);
    uVar4 = (undefined4)uVar9;
  }
  _objc_release(lVar6);
  lVar7 = param_2;
  func_0x00010c06aee0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,lVar7);
  lVar8 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x000100ab0480(param_1,lVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,4,lVar5,0);
  func_0x000107c27ddc(param_1,0xe,uVar10 & 0xffffffff);
  func_0x000107c27ddc(param_1,0xc,uVar9 & 0xffffffff);
  FUN_108515660(param_1,10,uVar11);
  func_0x000107c27de4(param_1,8,uVar4);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108512658; end: 10851279b;  */

ulong FUN_108512658(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c116a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c24a0e0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000100c3b024(param_1,8,uVar8,0);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851279c; end: 108512883;  */

ulong FUN_10851279c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bf25f00();
    lVar4 = param_2;
    func_0x00010c08fa60(param_2);
    uVar5 = param_1;
    func_0x000107c27df8(param_1,lVar3,lVar4);
  }
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27de4(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,((int)uVar6 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108512884; end: 10851296b;  */

ulong FUN_108512884(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bf25f00();
    lVar4 = param_2;
    func_0x00010c08fa60(param_2);
    uVar5 = param_1;
    func_0x000107c27df8(param_1,lVar3,lVar4);
  }
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27de4(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,((int)uVar6 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851296c; end: 108512a53;  */

ulong FUN_10851296c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bf25f00();
    lVar4 = param_2;
    func_0x00010c08fa60(param_2);
    uVar5 = param_1;
    func_0x000107c27df8(param_1,lVar3,lVar4);
  }
  _objc_release(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c27de4(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,((int)uVar6 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108512a54; end: 108512db3;  */

ulong FUN_108512a54(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110a50880;
  pcStack_108 = FUN_1085156d0;
  pppuStack_f8 = &ppuStack_110;
  uVar4 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_170 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(uVar4);
  uVar8 = uVar4;
  func_0x00010bf52a60();
  if (uVar8 != 0) {
    lVar10 = *plStack_140;
    do {
      uVar11 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(uVar4);
        }
        uVar9 = *(undefined8 *)(lStack_148 + uVar11 * 8);
        _objc_retain(uVar9);
        pppuVar5 = &ppuStack_110;
        FUN_1085158c8(pppuVar5,param_1,uVar9);
        uStack_154 = SUB84(pppuVar5,0);
        FUN_108515808(&lStack_170,&uStack_154);
        _objc_release(uVar9);
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
      uVar8 = uVar4;
      func_0x00010bf52a60();
    } while (uVar8 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar4);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar10 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_108512bcc;
    lVar10 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar10))();
LAB_108512bcc:
  uVar4 = param_2;
  func_0x00010bf10020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar11 = param_2;
  func_0x00010c245860();
  uVar6 = param_2;
  func_0x00010c245820();
  lVar10 = 0x113263998;
  if (lStack_168 - lStack_170 != 0) {
    lVar10 = lStack_170;
  }
  uVar7 = param_1;
  func_0x000108515ad4(param_1,lVar10,lStack_168 - lStack_170 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,8,uVar6,0);
  func_0x000107c27db0(param_1,6,uVar11,0);
  func_0x000108515a64(param_1,10,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar8 & 0xffffffff);
  uVar8 = (ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x000107c27dc0(param_1,uVar8);
  _objc_release(uVar4);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  uVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(uVar8);
  uVar11 = uVar8;
  func_0x00010bf85d80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000100ab0480(uVar4,uVar11);
  uVar7 = uVar8;
  func_0x00010c247520(uVar8);
  *(undefined1 *)(uVar4 + 0x46) = 1;
  iVar1 = *(int *)(uVar4 + 0x20);
  iVar2 = *(int *)(uVar4 + 0x30);
  iVar3 = *(int *)(uVar4 + 0x28);
  func_0x000107c27ddc(uVar4,4,uVar6 & 0xffffffff);
  func_0x000107c27e1c(uVar4,6,uVar7,0);
  func_0x000107c27dc0(uVar4,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar11);
  _objc_release(uVar8);
  return uVar4;
}



/* Entry: 108512db4; end: 108512ea7;  */

ulong FUN_108512db4(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c247520(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27e1c(param_1,6,uVar6,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108512ea8; end: 108512fb7;  */

ulong FUN_108512ea8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf24a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c158380(param_2);
  uVar7 = param_2;
  func_0x00010c1581e0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,8,uVar7,0);
  func_0x000107c27db0(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108512fb8; end: 1085130eb;  */

ulong FUN_108512fb8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000100ab0480(param_2,uVar4);
  func_0x00010bf1f9a0(param_3);
  uVar6 = param_1;
  func_0x00010bf1f740(param_3);
  func_0x00010c123160(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,0xe);
  func_0x000107c27db8(uVar6,0,param_2,0xc);
  func_0x000107c27db8(param_1,0,param_2,10);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1085130ec; end: 1085132c7;  */

long FUN_1085130ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  func_0x00010c270aa0(param_3);
  uVar4 = param_3;
  func_0x00010bf1f680();
  uVar5 = param_3;
  func_0x00010c22a980();
  uVar6 = param_3;
  func_0x00010c29c5c0();
  uVar7 = param_3;
  func_0x00010c25fae0(param_3);
  uVar8 = param_3;
  func_0x00010c24b7a0(param_3);
  uVar9 = param_3;
  func_0x00010c24b580(param_3);
  uVar10 = param_3;
  func_0x00010c24ba40(param_3);
  uVar11 = param_3;
  func_0x00010c129760(param_3);
  uVar12 = param_3;
  func_0x00010c123100(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db0(param_2,0x16,uVar12,0);
  func_0x000107c27db0(param_2,0x14,uVar11,0);
  func_0x000107c27db0(param_2,0x12,uVar10,0);
  func_0x000107c27db0(param_2,0x10,uVar9,0);
  func_0x000107c27db0(param_2,0xe,uVar8,0);
  func_0x000107c27db0(param_2,0xc,uVar7,0);
  func_0x000107c27db0(param_2,10,uVar6,0);
  func_0x000107c27db0(param_2,8,uVar5,0);
  func_0x000107c27db0(param_2,6,uVar4,0);
  func_0x000107c27db8(param_1,0,param_2,4);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1085132c8; end: 10851347b;  */

ulong FUN_1085132c8(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lStack_68;
  long lStack_60;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bfbec20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1085136e0(&lStack_68,lVar4);
  _objc_release(lVar4);
  lVar4 = 0x113263999;
  if (lStack_60 - lStack_68 != 0) {
    lVar4 = lStack_68;
  }
  uVar5 = param_1;
  func_0x000108516954(param_1,lVar4,lStack_60 - lStack_68 >> 3);
  lVar4 = param_2;
  func_0x00010bfa0480();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = lVar4;
    _objc_retainAutorelease(lVar4);
    func_0x00010bf25f00();
    lVar7 = lVar4;
    func_0x00010c08fa60(lVar4);
    uVar8 = param_1;
    func_0x000107c27df8(param_1,lVar6,lVar7);
  }
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,6,uVar8 & 0xffffffff);
  FUN_108515ba0(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar4);
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851347c; end: 1085136df;  */

ulong FUN_10851347c(ulong param_1,ulong param_2)

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
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0676a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar12 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010c0676a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_108515c10(param_1,uVar5);
    _objc_release(uVar5);
    uVar12 = uVar12 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c08b940();
  uVar7 = param_2;
  func_0x00010c07d060(param_2);
  uVar8 = param_2;
  func_0x00010c070680(param_2);
  uVar9 = param_2;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar9 == 0) {
    uVar13 = 0;
  }
  else {
    uVar10 = uVar9;
    _objc_retainAutorelease(uVar9);
    func_0x00010bf25f00();
    uVar11 = uVar9;
    func_0x00010c08fa60(uVar9);
    uVar13 = param_1;
    func_0x000107c27df8(param_1,uVar10,uVar11);
  }
  _objc_release(uVar9);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,0xe,uVar13 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar5 & 0xffffffff);
  FUN_108515fb4(param_1,4,uVar12);
  func_0x000100ab13ac(param_1,0xc,uVar8,0);
  func_0x000100ab13ac(param_1,10,uVar7,0);
  func_0x000100ab13ac(param_1,8,uVar6 & 0xffffffff,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085136e0; end: 10851383b;  */

undefined8 * FUN_1085136e0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_2;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar12 = *plStack_100;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_100 != lVar12) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lStack_108 + (long)puVar13 * 8);
        func_0x00010c0b4ca0();
        puVar11 = &uStack_118;
        uStack_118 = uVar5;
        func_0x000107c03624(param_1,puVar11);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar4 != puVar13);
      puVar4 = param_2;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(param_2);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar11);
  puVar13 = puVar11;
  func_0x00010c0ed760(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x000100ab0480(puVar4,puVar13);
  puVar7 = puVar11;
  func_0x00010c0ed780(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x000100ab0480(puVar4,puVar7);
  puVar9 = puVar11;
  func_0x00010c0ed7c0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x000100ab0480(puVar4,puVar9);
  *(undefined1 *)((long)puVar4 + 0x46) = 1;
  iVar1 = *(int *)(puVar4 + 4);
  iVar2 = *(int *)(puVar4 + 6);
  iVar3 = *(int *)(puVar4 + 5);
  func_0x000107c27ddc(puVar4,8,(ulong)puVar10 & 0xffffffff);
  func_0x000107c27ddc(puVar4,6,(ulong)puVar8 & 0xffffffff);
  func_0x000107c27ddc(puVar4,4,(ulong)puVar6 & 0xffffffff);
  func_0x000107c27dc0(puVar4,(iVar1 - iVar2) + iVar3);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar11);
  return puVar4;
}



/* Entry: 10851383c; end: 1085139ab;  */

ulong FUN_10851383c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0ed760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c0ed780(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c0ed7c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085139ac; end: 108513abb;  */

ulong FUN_1085139ac(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c11d080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c27dd80(param_2);
  uVar7 = param_2;
  func_0x00010c1029e0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,8,uVar7,0);
  func_0x000100c3b024(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108513abc; end: 108513f03;  */

ulong FUN_108513abc(ulong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                   undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                   undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                   undefined4 param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,
                   undefined4 param_33,undefined4 param_34,undefined4 param_35,undefined4 param_36,
                   undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined4 param_40,
                   undefined4 param_41,undefined4 param_42,undefined4 param_43,undefined4 param_44,
                   undefined4 param_45,undefined4 param_46,undefined4 param_47,undefined4 param_48,
                   undefined4 param_49,undefined4 param_50,undefined4 param_51,undefined1 param_52,
                   undefined4 param_53,undefined4 param_54,undefined4 param_55,undefined1 param_56,
                   undefined4 param_57,undefined4 param_58,undefined4 param_59,undefined4 param_60,
                   undefined4 param_61,undefined4 param_62,undefined4 param_63,undefined4 param_64,
                   undefined4 param_65,undefined8 param_66,undefined4 param_67,undefined4 param_68,
                   undefined4 param_69,undefined4 param_70,undefined8 param_71,undefined1 param_72,
                   undefined4 param_73,undefined4 param_74)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x54,param_71,0);
  func_0x000107c27db0(param_1,0x4e,param_66,0);
  func_0x000107c27db0(param_1,0x2e,param_37,0);
  func_0x000108516024(param_1,0x58,param_74);
  func_0x000108516094(param_1,0x52,param_69);
  func_0x000108516104(param_1,0x50,param_67);
  FUN_108515ba0(param_1,0x4c,param_64);
  func_0x000108516174(param_1,0x4a,param_62);
  func_0x000107c27ddc(param_1,0x46,param_60);
  func_0x000107c27ddc(param_1,0x44,param_58);
  func_0x000107c27de4(param_1,0x40,param_54);
  func_0x0001085161e4(param_1,0x3c,param_50);
  func_0x000107c27ddc(param_1,0x3a,param_48);
  func_0x000108516254(param_1,0x38,param_46);
  func_0x0001085162c4(param_1,0x36,param_44);
  func_0x000107c27de4(param_1,0x34,param_42);
  func_0x000108516334(param_1,0x32,param_40);
  func_0x0001085163a4(param_1,0x2c,param_35);
  func_0x000108516414(param_1,0x2a,param_33);
  func_0x000107c27ddc(param_1,0x28,param_31);
  func_0x000108516484(param_1,0x26,param_29);
  func_0x0001085164f4(param_1,0x24,param_27);
  func_0x000108516564(param_1,0x22,param_25);
  func_0x0001085165d4(param_1,0x20,param_23);
  func_0x000108516644(param_1,0x1e,param_21);
  func_0x0001085166b4(param_1,0x1c,param_19);
  func_0x000108516724(param_1,0x1a,param_17);
  func_0x000108516794(param_1,0x18,param_15);
  func_0x000100ab133c(param_1,0x16,param_13);
  func_0x000108516804(param_1,0x14,param_11);
  func_0x000108516874(param_1,0x12,param_9);
  func_0x000107c27ddc(param_1,0x10,param_8);
  func_0x000107c27ddc(param_1,0xe,param_7);
  func_0x0001085168e4(param_1,0xc,param_6);
  func_0x000100c3b11c(param_1,10,param_5);
  func_0x000107c27ddc(param_1,6,param_3);
  func_0x000107c27ddc(param_1,4,param_2);
  func_0x000100ab13ac(param_1,0x56,param_72,0);
  func_0x000100ab13ac(param_1,0x42,param_56,0);
  func_0x000100ab13ac(param_1,0x3e,param_52,0);
  func_0x000100ab13ac(param_1,0x30,param_38,0);
  func_0x000100ab13ac(param_1,8,param_4,0);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 108513f04; end: 108513f13;  */

void FUN_108513f04(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 108513f14; end: 108514007;  */

void FUN_108513f14(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c27dd80(param_2);
  uVar5 = param_2;
  func_0x00010bf62820(param_2);
  *(undefined1 *)(lVar6 + 0x46) = 1;
  iVar1 = *(int *)(lVar6 + 0x20);
  iVar2 = *(int *)(lVar6 + 0x30);
  iVar3 = *(int *)(lVar6 + 0x28);
  func_0x000107c27db0(lVar6,6,uVar5 & 0xffffffff,0);
  func_0x000107c27db0(lVar6,4,uVar4 & 0xffffffff,0);
  func_0x000107c27dc0(lVar6,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108514008; end: 10851406f;  */

void FUN_108514008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_108514070(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108514070; end: 1085141a7;  */

ulong FUN_108514070(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c27dd80(param_2);
  uVar7 = param_2;
  func_0x00010bf62820(param_2);
  uVar8 = param_2;
  func_0x00010c1143e0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,10,uVar8 & 0xffffffff,0);
  func_0x000107c27db0(param_1,8,uVar7 & 0xffffffff,0);
  func_0x000107c27db0(param_1,6,uVar6 & 0xffffffff,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085141a8; end: 10851420f;  */

void FUN_1085141a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_108514210(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108514210; end: 1085143db;  */

ulong FUN_108514210(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2751c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c0ed9e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c22c3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x000100ab0480(param_1,uVar10);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085143dc; end: 108514443;  */

void FUN_1085143dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_108514444(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108514444; end: 10851471b;  */

ulong FUN_108514444(ulong param_1,ulong param_2)

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
  ulong uVar18;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c07f5e0();
  uVar11 = param_2;
  func_0x00010c077620();
  uVar12 = param_2;
  func_0x00010c24c380(param_2);
  uVar13 = param_2;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x000100ab0480(param_1,uVar13);
  uVar15 = param_2;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar15 == 0) {
    uVar18 = 0;
  }
  else {
    uVar16 = uVar15;
    _objc_retainAutorelease(uVar15);
    func_0x00010bf25f00();
    uVar17 = uVar15;
    func_0x00010c08fa60(uVar15);
    uVar18 = param_1;
    func_0x000107c27df8(param_1,uVar16,uVar17);
  }
  _objc_release(uVar15);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0xe,uVar12 & 0xffffffff,0);
  func_0x000107c27de4(param_1,0x12,uVar18 & 0xffffffff);
  func_0x000107c27ddc(param_1,0x10,uVar14 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,0xc,uVar11 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,10,uVar10 & 0xffffffff,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851471c; end: 108514783;  */

void FUN_10851471c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_108514784(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108514784; end: 108514873;  */

ulong FUN_108514784(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c25b720(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,6,uVar6 & 0xffffffff,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108514874; end: 1085148db;  */

void FUN_108514874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 6;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1085148dc(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085148dc; end: 108514ae3;  */

ulong FUN_1085148dc(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010c078f60(param_2);
  lVar7 = param_2;
  func_0x00010bf15520(param_2);
  lVar8 = param_2;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar10 == 0) {
    uVar13 = 0;
  }
  else {
    lVar11 = lVar10;
    _objc_retainAutorelease(lVar10);
    func_0x00010bf25f00();
    lVar12 = lVar10;
    func_0x00010c08fa60(lVar10);
    uVar13 = param_1;
    func_0x000107c27df8(param_1,lVar11,lVar12);
  }
  _objc_release(lVar10);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,0xc,uVar13 & 0xffffffff);
  func_0x000107c27ddc(param_1,10,uVar9 & 0xffffffff);
  func_0x000100c3b024(param_1,8,lVar7,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,6,lVar6,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108514ae4; end: 108514d97;  */

ulong FUN_108514ae4(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c08f8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100ab0480(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010c0c4440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100ab0480(param_1,lVar6);
  lVar8 = param_2;
  func_0x00010c0ef640();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100ab0480(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010c26d900();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x000100ab0480(param_1,lVar10);
  lVar12 = param_2;
  func_0x00010bfb11c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar12 == 0) {
    uVar16 = 0;
  }
  else {
    lVar13 = lVar12;
    _objc_retainAutorelease(lVar12);
    func_0x00010bf25f00();
    lVar14 = lVar12;
    func_0x00010c08fa60(lVar12);
    uVar16 = param_1;
    func_0x000107c27df8(param_1,lVar13,lVar14);
  }
  _objc_release(lVar12);
  lVar13 = param_2;
  func_0x00010c260e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x000100ab0480(param_1,lVar13);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,0xe,uVar15 & 0xffffffff);
  func_0x000107c27de4(param_1,0xc,uVar16 & 0xffffffff);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108514d98; end: 108514eff;  */

ulong FUN_108514d98(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined1 param_17)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x14,param_11,0);
  func_0x000107c27db0(param_1,10,(long)param_5,0);
  func_0x000107c27ddc(param_1,0x18,param_15);
  func_0x000107c27ddc(param_1,0x16,param_13);
  FUN_108514f00(param_1,0x12,param_9);
  func_0x000107c27ddc(param_1,0xe,param_7);
  func_0x000107c27ddc(param_1,0xc,param_6);
  func_0x000107c27ddc(param_1,8,param_4);
  func_0x000107c27ddc(param_1,6,param_3);
  func_0x000107c27ddc(param_1,4,param_2);
  func_0x000100ab13ac(param_1,0x1a,param_17,0);
  func_0x000100ab13ac(param_1,0x10,param_8,0);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 108514f00; end: 108514f6f;  */

void FUN_108514f00(ulong param_1,uint param_2,int param_3)

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



/* Entry: 108514f70; end: 108515107;  */

long FUN_108514f70(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  func_0x00010c0b55a0(param_3);
  uVar4 = param_1;
  func_0x00010c08b3c0(param_3);
  uVar5 = uVar4;
  func_0x00010bf01f00(param_3);
  uVar6 = uVar5;
  func_0x00010bfe4080(param_3);
  uVar7 = uVar6;
  func_0x00010c298e00(param_3);
  uVar8 = uVar7;
  func_0x00010bf537c0(param_3);
  uVar9 = uVar8;
  func_0x00010c249ca0(param_3);
  func_0x00010c2709c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,0x12);
  func_0x000107c27db8(uVar9,0,param_2,0x10);
  func_0x000107c27db8(uVar8,0,param_2,0xe);
  func_0x000107c27db8(uVar7,0,param_2,0xc);
  func_0x000107c27db8(uVar6,0,param_2,10);
  func_0x000107c27db8(uVar5,0,param_2,8);
  func_0x000107c27db8(uVar4,0,param_2,6);
  func_0x000107c27db8(param_1,0,param_2,4);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108515108; end: 1085151e7;  */

void FUN_108515108(ulong param_1,uint param_2,int param_3)

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



/* Entry: 1085151e8; end: 1085154fb;  */

ulong FUN_1085151e8(ulong param_1,ulong param_2)

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
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef38a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000100ab0480(param_1,uVar1);
  uVar3 = param_2;
  func_0x00010bf2bfa0();
  uVar4 = param_2;
  func_0x00010c270a60();
  uVar5 = param_2;
  func_0x00010c2475c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000100ab0480(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x000100ab0480(param_1,uVar7);
  uVar9 = param_2;
  func_0x00010bf3c980();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x000100ab0480(param_1,uVar9);
  uVar11 = param_2;
  func_0x00010bf3c9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x000100ab0480(param_1,uVar11);
  uVar13 = param_2;
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x000100ab0480(param_1,uVar13);
  uVar15 = param_2;
  func_0x00010c29e3e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x000100ab0480(param_1,uVar15);
  uVar17 = param_2;
  func_0x00010c29e400(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x000100ab0480(param_1,uVar17);
  uVar19 = param_2;
  func_0x00010c247820();
  uVar20 = param_2;
  func_0x00010beec120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100ab0480(param_1,uVar20);
  FUN_1085154fc(param_1,uVar2 & 0xffffffff,uVar3 & 0xffffffff,uVar4,uVar6 & 0xffffffff,
                uVar8 & 0xffffffff,uVar10 & 0xffffffff,uVar12 & 0xffffffff,uVar14 & 0xffffffff,
                uVar16 & 0xffffffff,uVar18 & 0xffffffff,(int)uVar19);
  _objc_release(uVar20);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085154fc; end: 10851565f;  */

ulong FUN_1085154fc(ulong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,8,param_4,0);
  func_0x000107c27ddc(param_1,0x1a,param_17);
  func_0x000100c3b024(param_1,0x18,param_15,0);
  func_0x000107c27ddc(param_1,0x16,param_13);
  func_0x000107c27ddc(param_1,0x14,param_11);
  func_0x000107c27ddc(param_1,0x12,param_9);
  func_0x000107c27ddc(param_1,0x10,param_8);
  func_0x000107c27ddc(param_1,0xe,param_7);
  func_0x000107c27ddc(param_1,0xc,param_6);
  func_0x000107c27ddc(param_1,10,param_5);
  func_0x000100c3b024(param_1,6,param_3,0);
  func_0x000107c27ddc(param_1,4,param_2);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 108515660; end: 1085156cf;  */

void FUN_108515660(ulong param_1,uint param_2,int param_3)

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



/* Entry: 1085156d0; end: 108515807;  */

ulong FUN_1085156d0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c25ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000100ab0480(param_2,uVar4);
  func_0x00010c250f20(param_3);
  uVar7 = param_1;
  func_0x00010bf95780(param_3);
  uVar6 = param_3;
  func_0x00010c104340(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db0(param_2,10,uVar6,0);
  func_0x000107c27db8(uVar7,0,param_2,8);
  func_0x000107c27db8(param_1,0,param_2,6);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108515808; end: 1085158c7;  */

long * FUN_108515808(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_68;
  
  plVar3 = param_1 + 2;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)*plVar3) {
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
  }
  else {
    lVar8 = (long)puVar7 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_108515950();
      _objc_retain(param_3);
      plVar3 = (long *)plVar3[3];
      uStack_68 = param_3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&uStack_68);
        _objc_release(uStack_68);
        return plVar3;
      }
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10851593c);
      (*pcVar2)();
    }
    uVar4 = *plVar3 - *param_1;
    uVar5 = (long)uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_108515964();
    puVar7 = (undefined4 *)((long)plVar3 + lVar8);
    lVar8 = (long)plVar3 + uVar5 * 4;
    lVar6 = (long)puVar7 - (param_1[1] - *param_1);
    puVar9 = puVar7 + 1;
    *puVar7 = *param_2;
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 1085158c8; end: 10851594f;  */

long * FUN_1085158c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10851593c);
  (*pcVar1)();
}



/* Entry: 108515950; end: 108515963;  */

void FUN_108515950(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 108515964; end: 108515997;  */

void FUN_108515964(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 108515998; end: 10851599f;  */

void FUN_108515998(void)

{
  return;
}



/* Entry: 1085159a0; end: 1085159d7;  */

void FUN_1085159a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a50880;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1085159d8; end: 108515a1b;  */

void FUN_1085159d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a50880;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108515a1c; end: 108515a57;  */

long FUN_108515a1c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a508f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108515a58; end: 108515a63;  */

undefined ** FUN_108515a58(void)

{
  return &PTR_DAT_110a508f0;
}



/* Entry: 108515a64; end: 108515b57;  */

void FUN_108515a64(ulong param_1,uint param_2,int param_3)

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



/* Entry: 108515b58; end: 108515b9f;  */

int FUN_108515b58(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 108515ba0; end: 108515c0f;  */

void FUN_108515ba0(ulong param_1,uint param_2,int param_3)

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



/* Entry: 108515c10; end: 108515d9b;  */

undefined8 FUN_108515c10(undefined8 param_1,ulong param_2)

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
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0676c0();
  uVar2 = param_2;
  func_0x00010c29f0c0();
  uVar3 = param_2;
  func_0x00010c280740();
  uVar4 = param_2;
  func_0x00010c151b20();
  uVar5 = param_2;
  func_0x00010c25aca0();
  uVar6 = param_2;
  func_0x00010c280780();
  uVar7 = param_2;
  func_0x00010c280760();
  uVar8 = param_2;
  func_0x00010c243e80();
  uVar9 = param_2;
  func_0x00010c2652a0();
  uVar10 = param_2;
  func_0x00010c264600();
  uVar11 = param_2;
  func_0x00010c269000();
  uVar12 = param_2;
  func_0x00010c268e00();
  uVar13 = param_2;
  func_0x00010bf1f680();
  uVar14 = param_2;
  func_0x00010c22a980();
  uVar15 = param_2;
  func_0x00010c25fe00();
  uVar16 = param_2;
  func_0x00010c0f2a80();
  uVar17 = param_2;
  func_0x00010c0f2a20();
  uVar18 = param_2;
  func_0x00010bf41980();
  uVar19 = param_2;
  func_0x00010bf41920();
  FUN_108515d9c(param_1,uVar1 & 0xffffffff,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108515d9c; end: 108515fb3;  */

ulong FUN_108515d9c(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,0x28,param_20,0);
  func_0x000107c27db0(param_1,0x26,param_19,0);
  func_0x000107c27db0(param_1,0x24,param_18,0);
  func_0x000107c27db0(param_1,0x22,param_17,0);
  func_0x000107c27db0(param_1,0x20,param_16,0);
  func_0x000107c27db0(param_1,0x1e,param_15,0);
  func_0x000107c27db0(param_1,0x1c,param_14,0);
  func_0x000107c27db0(param_1,0x1a,param_13,0);
  func_0x000107c27db0(param_1,0x18,param_12,0);
  func_0x000107c27db0(param_1,0x16,param_11,0);
  func_0x000107c27db0(param_1,0x14,param_10,0);
  func_0x000107c27db0(param_1,0x12,param_9,0);
  func_0x000107c27db0(param_1,0x10,param_8,0);
  func_0x000107c27db0(param_1,0xe,param_7,0);
  func_0x000107c27db0(param_1,0xc,param_6,0);
  func_0x000107c27db0(param_1,10,param_5,0);
  func_0x000107c27db0(param_1,8,param_4,0);
  func_0x000107c27db0(param_1,6,param_3,0);
  func_0x000100ab13ac(param_1,4,param_2,0);
  uVar6 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar11 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar11 < 5) {
    uVar11 = 4;
  }
  uVar12 = (ulong)uVar11;
  *(short *)(param_1 + 0x44) = (short)uVar11;
  lVar8 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x38)) < uVar12) {
    func_0x0001001cde7c(param_1,uVar12);
    lVar8 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar8 - uVar12;
  func_0x000107c60ee4(lVar8 - uVar12,uVar12);
  psVar10 = *(short **)(param_1 + 0x30);
  puVar14 = *(uint **)(param_1 + 0x38);
  psVar10[1] = (short)uVar6 - (((short)uVar2 - (short)uVar3) + (short)uVar4);
  *psVar10 = *(short *)(param_1 + 0x44);
  puVar13 = puVar14 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar9 = puVar13;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar10 + (ulong)(ushort)puVar9[1]) = (short)uVar6 - (short)*puVar9;
      puVar9 = puVar9 + 2;
    } while (puVar9 < puVar14);
  }
  *(uint **)(param_1 + 0x38) = puVar13;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x28);
  uVar11 = ((int)lVar8 - (int)psVar10) + (int)puVar9;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar9 < puVar13) {
    sVar5 = *psVar10;
    puVar14 = puVar9;
    do {
      uVar1 = *puVar14;
      psVar7 = (short *)((long)puVar9 + (lVar8 - (ulong)uVar1));
      if ((sVar5 == *psVar7) && (func_0x000107c610b0(psVar7,psVar10,sVar5), (int)psVar7 == 0)) {
        psVar10 = (short *)((long)psVar10 + (ulong)(uVar11 - (int)uVar6));
        *(short **)(param_1 + 0x30) = psVar10;
        uVar11 = uVar1;
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar13);
  }
  if (uVar11 == ((int)lVar8 + (int)puVar9) - (int)psVar10) {
    if ((ulong)((long)psVar10 - (long)puVar13) < 4) {
      func_0x0001001cde7c(param_1,4);
      puVar13 = *(uint **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x20);
      puVar9 = *(uint **)(param_1 + 0x28);
    }
    *puVar13 = uVar11;
    *(uint **)(param_1 + 0x38) = puVar13 + 1;
  }
  *(uint *)((long)puVar9 + (lVar8 - (uVar6 & 0xffffffff))) = uVar11 - (int)uVar6;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar6;
}



/* Entry: 108515fb4; end: 1085169c3;  */

void FUN_108515fb4(ulong param_1,uint param_2,int param_3)

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



/* Entry: 1085169c4; end: 1085169cb;  */

void FUN_1085169c4(void)

{
  return;
}



/* Entry: 1085169cc; end: 108516a03;  */

void FUN_1085169cc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a50930;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108516a04; end: 108516a47;  */

void FUN_108516a04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a50930;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108516a48; end: 108516a83;  */

long FUN_108516a48(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a509a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108516a84; end: 108516a8f;  */

undefined ** FUN_108516a84(void)

{
  return &PTR_DAT_110a509a0;
}



/* Entry: 108516a90; end: 108516bf3;  */

void FUN_108516a90(ulong param_1,uint param_2,int param_3)

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



/* Entry: 108516bf4; end: 108516c3b;  */

int FUN_108516bf4(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 108516c3c; end: 108516cc7;  */

void FUN_108516c3c(long param_1,undefined1 *param_2)

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



/* Entry: 108516cc8; end: 108516ceb; +[SCStoriesFriendMergedStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_108516cc8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108516ce4;
  auVar1._0_8_ = 0x108516cdc;
  return auVar1;
}



/* Entry: 108516cec; end: 108516de7;  */

void FUN_108516cec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126d9e50;
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
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108516de8(puVar3,0xffffffffffffffff,lVar1,lVar2);
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



/* Entry: 108516de8; end: 108516eb3;  */

undefined1 * FUN_108516de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fcb20;
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



/* Entry: 108516eb4; end: 108516f27;  */

void FUN_108516eb4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108516f28();
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



/* Entry: 108516f28; end: 10851727f;  */

void FUN_108516f28(undefined *param_1)

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
        func_0x000107c310d8(puVar5,&UNK_10f4a186b);
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
            _objc_opt_class(PTR_PTR_1126d9e48);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_1085171d0;
            puVar5 = PTR_PTR_1126d9e50;
            _objc_alloc(PTR_PTR_1126d9e50);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108516de8(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_108517010;
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
      _objc_opt_class(PTR_PTR_1126d9e48);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d9e50;
        _objc_alloc(PTR_PTR_1126d9e50);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108516de8(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_108517010:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1085171d8;
      }
LAB_1085171d0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1085171d8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108517280; end: 1085172f3;  */

void FUN_108517280(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108516f28();
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



/* Entry: 1085172f4; end: 108517353;  */

void FUN_1085172f4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e48;
    _objc_alloc(PTR_PTR_1126d9e48);
    func_0x00010c05bc40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108517354; end: 108517383; -[SCStoriesFriendMergedStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_108517354(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108517384; end: 10851738f; -[SCStoriesFriendMergedStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_108517384(void)

{
  return &UNK_10f4a183e;
}



/* Entry: 108517390; end: 1085173d7; -[SCStoriesFriendMergedStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_108517390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df33929,0x9a,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1085173d8; end: 10851775f; -[SCStoriesFriendMergedStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1085173d8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1085172f4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108517760(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a190d);
    if (lVar6 == 0) goto LAB_1085176fc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1085176fc;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e48);
    func_0x00010c21c9a0(puVar7);
LAB_1085176e4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a18c5);
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
            _objc_opt_class(PTR_PTR_1126d9e48);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108517708;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108517708;
    }
    FUN_1085172f4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108517760(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a1962);
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
        _objc_opt_class(PTR_PTR_1126d9e48);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1085176e4;
      }
    }
LAB_1085176fc:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108517708:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108517760; end: 108517a73;  */

ulong FUN_108517760(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_144;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  code *pcStack_f0;
  undefined ***pppuStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_f8 = &PTR_FUN_110a50930;
  pcStack_f0 = FUN_108510754;
  pppuStack_e0 = &ppuStack_f8;
  uVar11 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_160 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(uVar11);
  uVar4 = uVar11;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar13 = *plStack_130;
    do {
      uVar14 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(uVar11);
        }
        uVar12 = *(undefined8 *)(lStack_138 + uVar14 * 8);
        _objc_retain(uVar12);
        pppuVar5 = &ppuStack_f8;
        FUN_108511784(pppuVar5,param_1,uVar12);
        uStack_144 = SUB84(pppuVar5,0);
        FUN_1085116c4(&lStack_160,&uStack_144);
        _objc_release(uVar12);
        uVar14 = uVar14 + 1;
      } while (uVar4 != uVar14);
      uVar4 = uVar11;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar11);
  _objc_release(uVar11);
  _objc_release(uVar11);
  if (pppuStack_e0 == &ppuStack_f8) {
    lVar13 = 0x20;
LAB_1085178c8:
    (**(code **)((long)*pppuStack_e0 + lVar13))();
  }
  else if (pppuStack_e0 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_1085178c8;
  }
  uVar11 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_108517a74(param_1,uVar11);
  lVar13 = 0x11326399a;
  if (lStack_158 - lStack_160 != 0) {
    lVar13 = lStack_160;
  }
  uVar14 = param_1;
  func_0x000108516b70(param_1,lVar13,lStack_158 - lStack_160 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000108516b00(param_1,8,uVar14 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar4 & 0xffffffff);
  pcVar10 = (char *)(ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x000107c27dc0(param_1);
  _objc_release(uVar11);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  uVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume(uVar11);
  _objc_retain(pcVar10);
  if (pcVar10 == (char *)0x0) {
    uVar11 = 0;
    goto LAB_108517b54;
  }
  pcVar6 = pcVar10;
  _CFStringGetCStringPtr(pcVar10,0x8000100);
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    _strlen(pcVar6);
    func_0x000107c27df0(uVar11,pcVar6,pcVar7);
    goto LAB_108517b54;
  }
  pcVar6 = pcVar10;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar10;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar6 != (char *)0x0) goto LAB_108517b14;
    uVar11 = 0;
  }
  else {
LAB_108517b14:
    pcVar8 = pcVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar9 = pcVar6;
    func_0x00010c08fa60(pcVar6);
    pcVar7 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
    }
    func_0x000107c27df0(uVar11,pcVar7,pcVar9);
  }
  _objc_release(pcVar6);
LAB_108517b54:
  _objc_release(pcVar10);
  return uVar11;
}


