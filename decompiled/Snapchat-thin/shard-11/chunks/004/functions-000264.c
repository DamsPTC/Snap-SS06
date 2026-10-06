/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10850191c; end: 10850193f; +[SCStoriesSnapReadReceiptViewState objectClassFunctionPointer] */

undefined1  [16] FUN_10850191c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108501938;
  auVar1._0_8_ = 0x108501930;
  return auVar1;
}



/* Entry: 108501940; end: 108501a8f;  */

void FUN_108501940(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar7 = PTR_PTR_1126d9ee0;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c243260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c880(param_3);
    lVar2 = param_3;
    uVar8 = param_1;
    func_0x00010c29ea60(param_3);
    lVar3 = param_3;
    func_0x00010c151b40(param_3);
    lVar4 = param_3;
    func_0x00010c14b7c0(param_3);
    lVar5 = param_3;
    func_0x00010c151460(param_3);
    lVar6 = param_3;
    func_0x00010c140640(param_3);
    func_0x00010c29ecc0(param_3);
    FUN_108501a90(param_1,uVar8,puVar7,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar7 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108501a90; end: 108501b77;  */

undefined1 *
FUN_108501a90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_68 = PTR_PTR_1126fcaf0;
    lStack_70 = param_3;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_6;
      *(undefined1 *)((long)plVar1 + 0x15) = param_7;
      *(undefined1 *)((long)plVar1 + 0x16) = param_8;
      *(undefined1 *)((long)plVar1 + 0x17) = param_9;
      *(undefined1 *)((long)plVar1 + 0x18) = param_10;
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined8 *)((long)plVar1 + 0x30) = param_2;
    }
  }
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 108501b78; end: 108501beb;  */

void FUN_108501b78(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108501bec();
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



/* Entry: 108501bec; end: 108501fe7;  */

void FUN_108501bec(undefined8 param_1,undefined *param_2)

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
  undefined8 uVar10;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c243260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar9,&UNK_10f4a011f);
        if (puVar9 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c243260(param_2);
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
            _objc_opt_class(PTR_PTR_1126d9eb8);
            _sqlite3_column_blob(puVar9,1);
            _sqlite3_column_bytes(puVar9,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar9);
            if (puVar3 == (undefined *)0x0) goto LAB_108501f40;
            puVar9 = PTR_PTR_1126d9ee0;
            _objc_alloc(PTR_PTR_1126d9ee0);
            puVar2 = puVar3;
            func_0x00010c243260(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9c880(puVar3);
            puVar4 = puVar3;
            uVar10 = param_1;
            func_0x00010c29ea60(puVar3);
            puVar5 = puVar3;
            func_0x00010c151b40(puVar3);
            puVar6 = puVar3;
            func_0x00010c14b7c0(puVar3);
            puVar7 = puVar3;
            func_0x00010c151460(puVar3);
            puVar8 = puVar3;
            func_0x00010c140640(puVar3);
            func_0x00010c29ecc0(puVar3);
            FUN_108501a90(param_1,uVar10,puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
            param_2 = puVar3;
            goto LAB_108501d34;
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
      _objc_opt_class(PTR_PTR_1126d9eb8);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126d9ee0;
        _objc_alloc(PTR_PTR_1126d9ee0);
        puVar2 = puVar3;
        func_0x00010c243260(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9c880(puVar3);
        puVar4 = puVar3;
        uVar10 = param_1;
        func_0x00010c29ea60(puVar3);
        puVar5 = puVar3;
        func_0x00010c151b40(puVar3);
        puVar6 = puVar3;
        func_0x00010c14b7c0(puVar3);
        puVar7 = puVar3;
        func_0x00010c151460(puVar3);
        puVar8 = puVar3;
        func_0x00010c140640(puVar3);
        func_0x00010c29ecc0(puVar3);
        FUN_108501a90(param_1,uVar10,puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
        param_2 = puVar3;
LAB_108501d34:
        _objc_release(puVar2);
        goto LAB_108501f48;
      }
LAB_108501f40:
      param_2 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_108501f48:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108501fe8; end: 10850205b;  */

void FUN_108501fe8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108501bec();
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



/* Entry: 10850205c; end: 1085020d3;  */

void FUN_10850205c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9eb8;
    _objc_alloc(PTR_PTR_1126d9eb8);
    func_0x00010c0486c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085020d4; end: 1085020df; -[SCStoriesSnapReadReceiptViewStateChangeRequest .cxx_destruct] */

void FUN_1085020d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1085020e0; end: 1085020eb; -[SCStoriesSnapReadReceiptViewStateChangeRequest table] */

undefined * FUN_1085020e0(void)

{
  return &UNK_10f4a00f7;
}



/* Entry: 1085020ec; end: 108502133; -[SCStoriesSnapReadReceiptViewStateChangeRequest createTableWithSQLite:] */

void FUN_1085020ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df32771,0xa1,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108502134; end: 1085024bb; -[SCStoriesSnapReadReceiptViewStateChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108502134(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10850205c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1085024bc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a01bd);
    if (lVar6 == 0) goto LAB_108502458;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108502458;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9eb8);
    func_0x00010c21c9a0(puVar7);
LAB_108502440:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a017a);
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
            _objc_opt_class(PTR_PTR_1126d9eb8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108502464;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108502464;
    }
    FUN_10850205c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1085024bc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a0213);
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
        _objc_opt_class(PTR_PTR_1126d9eb8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108502440;
      }
    }
LAB_108502458:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108502464:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1085024bc; end: 10850276b;  */

ulong FUN_1085024bc(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010c243260();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar10 = 0;
    goto LAB_1085025c8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar10 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_2,pcVar5,pcVar6);
    goto LAB_1085025c8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_108502588;
    uVar10 = 0;
  }
  else {
LAB_108502588:
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
LAB_1085025c8:
  _objc_release(pcVar4);
  func_0x00010bf9c880(param_3);
  pcVar5 = param_3;
  func_0x00010c29ea60();
  pcVar6 = param_3;
  func_0x00010c151b40();
  pcVar7 = param_3;
  func_0x00010c14b7c0(param_3);
  pcVar8 = param_3;
  func_0x00010c151460(param_3);
  pcVar9 = param_3;
  func_0x00010c140640(param_3);
  func_0x00010c29ecc0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,0x12);
  func_0x000107c27db8(param_1,0,param_2,6);
  func_0x000107c27ddc(param_2,4,uVar10 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x10,pcVar9,0);
  func_0x000100ab13ac(param_2,0xe,pcVar8,0);
  func_0x000100ab13ac(param_2,0xc,pcVar7,0);
  func_0x000100ab13ac(param_2,10,(ulong)pcVar6 & 0xffffffff,0);
  func_0x000100ab13ac(param_2,8,(ulong)pcVar5 & 0xffffffff,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10850276c; end: 1085027cf;  */

undefined ** FUN_10850276c(void)

{
  int iVar1;
  
  if ((bRam0000000113827928 & 1) == 0) {
    iVar1 = 0x13827928;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113262068,0x100000000);
      ___cxa_guard_release(0x113827928);
    }
  }
  return &PTR_PTR_113262068;
}



/* Entry: 1085027d0; end: 108502857;  */

void FUN_1085027d0(uint *param_1,undefined1 *param_2)

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



/* Entry: 108502858; end: 1085028e3;  */

void FUN_108502858(long param_1,undefined1 *param_2)

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



/* Entry: 1085028e4; end: 10850299f;  */

undefined8 FUN_1085028e4(void)

{
  int iVar1;
  
  if ((bRam00000001138279a0 & 1) == 0) {
    iVar1 = 0x138279a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827938 = 0xe;
      puRam0000000113827940 = &UNK_10f4a0273;
      uRam0000000113827948 = 0x1010000;
      pcRam0000000113827950 = FUN_1085029a0;
      pcRam0000000113827958 = FUN_1085029d8;
      ppuRam0000000113827930 = &PTR_DAT_110a50440;
      uRam0000000113827970 = 0;
      uRam0000000113827968 = 0;
      uRam0000000113827980 = 0;
      uRam0000000113827978 = 0;
      uRam0000000113827990 = 0;
      uRam0000000113827988 = 0;
      uRam0000000113827998 = 0;
      ___cxa_atexit(0x1084f6da8,0x113827930,0x100000000);
      ___cxa_guard_release(0x1138279a0);
    }
  }
  return 0x113827930;
}



/* Entry: 1085029a0; end: 1085029d7;  */

undefined4 FUN_1085029a0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1085029d8; end: 108502a2b;  */

undefined8 FUN_1085029d8(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf4dac0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108502a2c; end: 108502ae7;  */

undefined8 FUN_108502a2c(void)

{
  int iVar1;
  
  if ((bRam0000000113827a18 & 1) == 0) {
    iVar1 = 0x13827a18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138279b0 = 0xe;
      puRam00000001138279b8 = &UNK_10f4a027f;
      uRam00000001138279c0 = 0x1010000;
      pcRam00000001138279c8 = FUN_108502ae8;
      pcRam00000001138279d0 = FUN_108502b1c;
      ppuRam00000001138279a8 = &PTR_DAT_11086d7d0;
      uRam00000001138279e8 = 0;
      uRam00000001138279e0 = 0;
      uRam00000001138279f8 = 0;
      uRam00000001138279f0 = 0;
      uRam0000000113827a08 = 0;
      uRam0000000113827a00 = 0;
      uRam0000000113827a10 = 0;
      ___cxa_atexit(&DAT_105187b98,0x1138279a8,0x100000000);
      ___cxa_guard_release(0x113827a18);
    }
  }
  return 0x1138279a8;
}



/* Entry: 108502ae8; end: 108502b1b;  */

undefined8 FUN_108502ae8(uint *param_1,undefined1 *param_2)

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



/* Entry: 108502b1c; end: 108502b77;  */

undefined8 FUN_108502b1c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c270aa0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108502b78; end: 108502b83; +[SCStoriesSnapReadReceiptWatchState table] */

undefined * FUN_108502b78(void)

{
  return &UNK_10f4a028b;
}



/* Entry: 108502b84; end: 108502e3b; +[SCStoriesSnapReadReceiptWatchState immutableObjectParse:bufferSize:] */

void FUN_108502b84(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126cc378;
  _objc_alloc(PTR_PTR_1126cc378);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar13 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    uVar8 = 0;
    uVar9 = 0;
    puVar7 = (undefined *)0x0;
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = 0;
    goto LAB_108502ca0;
  }
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
  lVar5 = -lVar5;
  uVar14 = 0;
  if (uVar3 < 7) {
    uVar8 = 0;
LAB_108502c94:
    uVar9 = 0;
  }
  else {
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
    if (uVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    if (uVar3 < 9) goto LAB_108502c94;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar6);
    }
    if (10 < uVar3) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
      if (uVar6 != 0) {
        uVar14 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      if (0xc < uVar3) {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc);
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
          uVar3 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        if (uVar3 < 0xf) {
          uVar11 = 0;
LAB_108502dbc:
          uVar12 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xe);
          if (uVar6 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined4 *)((long)piVar1 + uVar6);
          }
          if (uVar3 < 0x11) goto LAB_108502dbc;
          uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x10);
          if (uVar6 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined4 *)((long)piVar1 + uVar6);
          }
          if ((0x12 < uVar3) &&
             (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x12), uVar6 != 0)) {
            puVar2 = (uint *)((long)piVar1 + uVar6);
            puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar2 + (ulong)*puVar2 + 4);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108502ca0;
          }
        }
        puVar13 = (undefined *)0x0;
        goto LAB_108502ca0;
      }
    }
  }
  puVar13 = (undefined *)0x0;
  puVar10 = (undefined *)0x0;
  uVar11 = 0;
  uVar12 = 0;
LAB_108502ca0:
  func_0x00010c04dd20(uVar14,puVar4,param_2,puVar7,uVar8,uVar9,puVar10,uVar11,uVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108502e3c; end: 108502e5f; +[SCStoriesSnapReadReceiptWatchState objectClassFunctionPointer] */

undefined1  [16] FUN_108502e3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108502e58;
  auVar1._0_8_ = 0x108502e50;
  return auVar1;
}



/* Entry: 108502e60; end: 108503003;  */

void FUN_108502e60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar8 = PTR_PTR_1126d9ef8;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c298be0(param_3);
    lVar3 = param_3;
    func_0x00010bf4dac0(param_3);
    func_0x00010c270aa0(param_3);
    lVar4 = param_3;
    func_0x00010c25e5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c25e5e0(param_3);
    lVar6 = param_3;
    func_0x00010bf08ca0(param_3);
    lVar7 = param_3;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_108503004(param_1,puVar8,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar8 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108503004; end: 10850313f;  */

undefined1 *
FUN_108503004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_1126fcaf8;
    lStack_80 = param_2;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_7;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_8;
      *(undefined4 *)((long)plVar1 + 0x18) = param_9;
      _objc_retain(param_10);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_10;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108503140; end: 1085031b3;  */

void FUN_108503140(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1085031b4();
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



/* Entry: 1085031b4; end: 108503617;  */

void FUN_1085031b4(undefined8 param_1,undefined *param_2)

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
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar10,&UNK_10f4a02b4);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c259cc0(param_2);
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
            _objc_opt_class(PTR_PTR_1126cc378);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_108503544;
            puVar10 = PTR_PTR_1126d9ef8;
            _objc_alloc(PTR_PTR_1126d9ef8);
            puVar2 = puVar3;
            func_0x00010c259cc0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c298be0(puVar3);
            puVar5 = puVar3;
            func_0x00010bf4dac0(puVar3);
            func_0x00010c270aa0(puVar3);
            puVar6 = puVar3;
            func_0x00010c25e5c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c25e5e0(puVar3);
            puVar8 = puVar3;
            func_0x00010bf08ca0(puVar3);
            puVar9 = puVar3;
            func_0x00010c11b1e0();
            _objc_retainAutoreleasedReturnValue();
            FUN_108503004(param_1,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9);
            param_2 = puVar3;
            goto LAB_108503314;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cc378);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126d9ef8;
        _objc_alloc(PTR_PTR_1126d9ef8);
        puVar2 = puVar3;
        func_0x00010c259cc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c298be0(puVar3);
        puVar5 = puVar3;
        func_0x00010bf4dac0(puVar3);
        func_0x00010c270aa0(puVar3);
        puVar6 = puVar3;
        func_0x00010c25e5c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c25e5e0(puVar3);
        puVar8 = puVar3;
        func_0x00010bf08ca0(puVar3);
        puVar9 = puVar3;
        func_0x00010c11b1e0();
        _objc_retainAutoreleasedReturnValue();
        FUN_108503004(param_1,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9);
        param_2 = puVar3;
LAB_108503314:
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_10850354c;
      }
LAB_108503544:
      param_2 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_10850354c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108503618; end: 10850368b;  */

void FUN_108503618(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1085031b4();
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



/* Entry: 10850368c; end: 108503827;  */

void FUN_10850368c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9ef8;
  FUN_108503140(PTR_PTR_1126d9ef8,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar3 = PTR_PTR_1126d9ef8;
    FUN_108502e60(PTR_PTR_1126d9ef8,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c298be0();
    *(undefined8 *)(puVar1 + 0x28) = uVar2;
    uVar2 = param_2;
    func_0x00010bf4dac0();
    *(undefined8 *)(puVar1 + 0x30) = uVar2;
    func_0x00010c270aa0(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    uVar2 = param_2;
    func_0x00010c25e5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c25e5e0();
    *(int *)(puVar1 + 0x14) = (int)uVar2;
    uVar2 = param_2;
    func_0x00010bf08ca0();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_2;
    func_0x00010c11b1e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
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



/* Entry: 108503828; end: 1085038a3;  */

void FUN_108503828(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cc378;
    _objc_alloc(PTR_PTR_1126cc378);
    func_0x00010c04dd20(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085038a4; end: 1085038df; -[SCStoriesSnapReadReceiptWatchStateChangeRequest .cxx_destruct] */

void FUN_1085038a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1085038e0; end: 1085038eb; -[SCStoriesSnapReadReceiptWatchStateChangeRequest table] */

undefined * FUN_1085038e0(void)

{
  return &UNK_10f4a028b;
}



/* Entry: 1085038ec; end: 108503933; -[SCStoriesSnapReadReceiptWatchStateChangeRequest createTableWithSQLite:] */

void FUN_1085038ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df32812,0x98,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108503934; end: 108503cbb; -[SCStoriesSnapReadReceiptWatchStateChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108503934(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108503828(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108503cbc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a034f);
    if (lVar6 == 0) goto LAB_108503c58;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108503c58;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cc378);
    func_0x00010c21c9a0(puVar7);
LAB_108503c40:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a030b);
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
            _objc_opt_class(PTR_PTR_1126cc378);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108503c64;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108503c64;
    }
    FUN_108503828(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108503cbc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a03a1);
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
        _objc_opt_class(PTR_PTR_1126cc378);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108503c40;
      }
    }
LAB_108503c58:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108503c64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108503cbc; end: 108503ef3;  */

ulong FUN_108503cbc(undefined8 param_1,ulong param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108503ef4(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c298be0(param_3);
  uVar7 = param_3;
  func_0x00010bf4dac0(param_3);
  func_0x00010c270aa0(param_3);
  uVar8 = param_3;
  func_0x00010c25e5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_108503ef4(param_2,uVar8);
  uVar10 = param_3;
  func_0x00010c25e5e0();
  uVar11 = param_3;
  func_0x00010bf08ca0(param_3);
  uVar12 = param_3;
  func_0x00010c11b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  FUN_108503ef4(param_2,uVar12);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,10);
  func_0x000107c27db0(param_2,8,uVar7 & 0xffffffff,0);
  func_0x000107c27db0(param_2,6,uVar6,0);
  func_0x000107c27ddc(param_2,0x12,uVar13 & 0xffffffff);
  func_0x000100c3b024(param_2,0x10,uVar11,0);
  func_0x000100c3b024(param_2,0xe,uVar10 & 0xffffffff,0);
  func_0x000107c27ddc(param_2,0xc,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108503ef4; end: 108504023;  */

undefined8 FUN_108503ef4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108503fd4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108503fd4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108503f94;
    param_1 = 0;
  }
  else {
LAB_108503f94:
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
LAB_108503fd4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108504024; end: 10850409f;  */

undefined * FUN_108504024(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372c068 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ee0478,
                        &UNK_10df328ac,&UNK_10df32904,7,FUN_1085040a0,0);
    do {
      if (puRam000000011372c068 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372c068;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372c068,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372c068 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372c068;
}



/* Entry: 1085040a0; end: 1085040ab;  */

bool FUN_1085040a0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 1085040ac; end: 108504113; +[SnapReport descriptor] */

void FUN_1085040ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3cd0,
                        &PTR____CFConstantStringClassReference_110ee0498,&PTR_DAT_1132620d8,
                        &PTR_DAT_113262550,3,0x20,0x1c);
    puRam000000011372c070 = puVar1;
  }
  return;
}



/* Entry: 108504114; end: 10850417b; +[ViewReport descriptor] */

void FUN_108504114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3d20,
                        &PTR____CFConstantStringClassReference_110ee04b8,&PTR_DAT_1132620d8,
                        &PTR_s_snapId_113262910,6,0x30,0x1c);
    puRam000000011372c078 = puVar1;
  }
  return;
}



/* Entry: 10850417c; end: 1085041e3; +[TeamSnapchatReport descriptor] */

void FUN_10850417c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3d70,
                        &PTR____CFConstantStringClassReference_110ee04d8,&PTR_DAT_1132620d8,
                        &PTR_s_snapId_1132625b0,3,0x20,0x1c);
    puRam000000011372c080 = puVar1;
  }
  return;
}



/* Entry: 1085041e4; end: 10850424b; +[SnapStatsSectionType descriptor] */

void FUN_1085041e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3dc0,
                        &PTR____CFConstantStringClassReference_110ee04f8,&PTR_DAT_1132620d8,0,0,4,
                        0x1c);
    puRam000000011372c088 = puVar1;
  }
  return;
}



/* Entry: 10850424c; end: 1085042b3; +[SectionStats descriptor] */

void FUN_10850424c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3e10,
                        &PTR____CFConstantStringClassReference_110ee0518,&PTR_DAT_1132620d8,
                        &PTR_DAT_113262610,3,0x18,0x1c);
    puRam000000011372c090 = puVar1;
  }
  return;
}



/* Entry: 1085042b4; end: 10850431b; +[BatchSnapStatsByStoryType descriptor] */

void FUN_1085042b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3e60,
                        &PTR____CFConstantStringClassReference_110ee0538,&PTR_DAT_1132620d8,
                        &PTR_s_storyType_113262670,3,0x18,0x1c);
    puRam000000011372c098 = puVar1;
  }
  return;
}



/* Entry: 10850431c; end: 108504383; +[BatchSnapStatsRequest descriptor] */

void FUN_10850431c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3eb0,
                        &PTR____CFConstantStringClassReference_110ee0558,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_1132629d0,7,0x38,0x1c);
    puRam000000011372c0a0 = puVar1;
  }
  return;
}



/* Entry: 108504384; end: 1085043eb; +[GetSpotlightStatsRequest descriptor] */

void FUN_108504384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3f00,
                        &PTR____CFConstantStringClassReference_110ee0578,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_113262110,2,0x18,0x1c);
    puRam000000011372c0a8 = puVar1;
  }
  return;
}



/* Entry: 1085043ec; end: 108504453; +[GetSpotlightStatsResponse descriptor] */

void FUN_1085043ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3f50,
                        &PTR____CFConstantStringClassReference_110ee0598,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262150,2,0x18,0x1c);
    puRam000000011372c0b0 = puVar1;
  }
  return;
}



/* Entry: 108504454; end: 1085044bb; +[GetSpotlightBloomFilterViewsRequest descriptor] */

void FUN_108504454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3fa0,
                        &PTR____CFConstantStringClassReference_110ee05b8,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_113262190,2,0x18,0x1c);
    puRam000000011372c0b8 = puVar1;
  }
  return;
}



/* Entry: 1085044bc; end: 108504523; +[GetSpotlightBloomFilterViewsResponse descriptor] */

void FUN_1085044bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba3ff0,
                        &PTR____CFConstantStringClassReference_110ee05d8,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_1132621d0,2,0x18,0x1c);
    puRam000000011372c0c0 = puVar1;
  }
  return;
}



/* Entry: 108504524; end: 10850458b; +[GetBloomFilterViewsForUserRequest descriptor] */

void FUN_108504524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4040,
                        &PTR____CFConstantStringClassReference_110ee05f8,&PTR_DAT_1132620d8,
                        &PTR_DAT_113262210,2,0x18,0x1c);
    puRam000000011372c0c8 = puVar1;
  }
  return;
}



/* Entry: 10850458c; end: 1085045f3; +[BloomFilterStoryTypeRequest descriptor] */

void FUN_10850458c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4090,
                        &PTR____CFConstantStringClassReference_110ee0618,&PTR_DAT_1132620d8,
                        &PTR_s_storyType_113262250,2,0x10,0x1c);
    puRam000000011372c0d0 = puVar1;
  }
  return;
}



/* Entry: 1085045f4; end: 10850465b; +[GetBloomFilterViewsForUserResponse descriptor] */

void FUN_1085045f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba40e0,
                        &PTR____CFConstantStringClassReference_110ee0638,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262290,2,0x18,0x1c);
    puRam000000011372c0d8 = puVar1;
  }
  return;
}



/* Entry: 10850465c; end: 1085046c3; +[BloomFilterStoryTypeResponse descriptor] */

void FUN_10850465c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4130,
                        &PTR____CFConstantStringClassReference_110ee0658,&PTR_DAT_1132620d8,
                        &PTR_s_storyType_1132622d0,2,0x10,0x1c);
    puRam000000011372c0e0 = puVar1;
  }
  return;
}



/* Entry: 1085046c4; end: 10850472b; +[SingleSnapStatsResponse descriptor] */

void FUN_1085046c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4180,
                        &PTR____CFConstantStringClassReference_110ee0678,&PTR_DAT_1132620d8,
                        &PTR_s_snapId_1132626d0,3,0x20,0x1c);
    puRam000000011372c0e8 = puVar1;
  }
  return;
}



/* Entry: 10850472c; end: 108504793; +[BatchSnapStatsResponseByType descriptor] */

void FUN_10850472c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba41d0,
                        &PTR____CFConstantStringClassReference_110ee0698,&PTR_DAT_1132620d8,
                        &PTR_s_storyType_113262310,2,0x10,0x1c);
    puRam000000011372c0f0 = puVar1;
  }
  return;
}



/* Entry: 108504794; end: 1085047fb; +[BatchSnapStatsResponse descriptor] */

void FUN_108504794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c0f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4220,
                        &PTR____CFConstantStringClassReference_110ee06b8,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262730,3,0x20,0x1c);
    puRam000000011372c0f8 = puVar1;
  }
  return;
}



/* Entry: 1085047fc; end: 108504863; +[UserViewHistoryRequest descriptor] */

void FUN_1085047fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4270,
                        &PTR____CFConstantStringClassReference_110ee06d8,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262870,5,0x28,0x1c);
    puRam000000011372c100 = puVar1;
  }
  return;
}



/* Entry: 108504864; end: 1085048cb; +[UserViewHistoryResponse descriptor] */

void FUN_108504864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba42c0,
                        &PTR____CFConstantStringClassReference_110ee06f8,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262350,2,0x18,0x1c);
    puRam000000011372c108 = puVar1;
  }
  return;
}



/* Entry: 1085048cc; end: 108504933; +[UserTeamSnapchatHistoryRequest descriptor] */

void FUN_1085048cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4310,
                        &PTR____CFConstantStringClassReference_110ee0718,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_1132620f0,1,0x10,0x1c);
    puRam000000011372c110 = puVar1;
  }
  return;
}



/* Entry: 108504934; end: 10850499b; +[UserTeamSnapchatHistoryResponse descriptor] */

void FUN_108504934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4360,
                        &PTR____CFConstantStringClassReference_110ee0738,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262390,2,0x18,0x1c);
    puRam000000011372c118 = puVar1;
  }
  return;
}



/* Entry: 10850499c; end: 108504a03; +[GetPremiumUserViewHistoryRequest descriptor] */

void FUN_10850499c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba43b0,
                        &PTR____CFConstantStringClassReference_110ee0758,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_113262790,3,0x20,0x1c);
    puRam000000011372c120 = puVar1;
  }
  return;
}



/* Entry: 108504a04; end: 108504a6b; +[GetPremiumUserViewHistoryResponse descriptor] */

void FUN_108504a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4400,
                        &PTR____CFConstantStringClassReference_110ee0778,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_1132623d0,2,0x18,0x1c);
    puRam000000011372c128 = puVar1;
  }
  return;
}



/* Entry: 108504a6c; end: 108504ad3; +[GetPremiumUserRecentViewHistoryRequest descriptor] */

void FUN_108504a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4450,
                        &PTR____CFConstantStringClassReference_110ee0798,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_1132627f0,4,0x28,0x1c);
    puRam000000011372c130 = puVar1;
  }
  return;
}



/* Entry: 108504ad4; end: 108504b3b; +[GetPremiumUserRecentViewHistoryResponse descriptor] */

void FUN_108504ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba44a0,
                        &PTR____CFConstantStringClassReference_110ee07b8,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262410,2,0x18,0x1c);
    puRam000000011372c138 = puVar1;
  }
  return;
}



/* Entry: 108504b3c; end: 108504ba3; +[GetPremiumContentStatsRequest descriptor] */

void FUN_108504b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba44f0,
                        &PTR____CFConstantStringClassReference_110ee07d8,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_113262450,2,0x18,0x1c);
    puRam000000011372c140 = puVar1;
  }
  return;
}



/* Entry: 108504ba4; end: 108504c0b; +[GetPremiumContentStatsResponse descriptor] */

void FUN_108504ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4540,
                        &PTR____CFConstantStringClassReference_110ee07f8,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262490,2,0x18,0x1c);
    puRam000000011372c148 = puVar1;
  }
  return;
}



/* Entry: 108504c0c; end: 108504c73; +[GetBadgesRequest descriptor] */

void FUN_108504c0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4590,
                        &PTR____CFConstantStringClassReference_110ee0818,&PTR_DAT_1132620d8,
                        &PTR_s_metadata_1132624d0,2,0x18,0x1c);
    puRam000000011372c150 = puVar1;
  }
  return;
}



/* Entry: 108504c74; end: 108504d57; +[GetBadgesResponse descriptor] */

void FUN_108504c74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba45e0,
                        &PTR____CFConstantStringClassReference_110ee0838,&PTR_DAT_1132620d8,
                        &PTR_s_requestId_113262510,2,0x18,0x1c);
    puRam000000011372c158 = puVar1;
  }
  return;
}



/* Entry: 108504d58; end: 108504d63;  */

bool FUN_108504d58(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108504d64; end: 108504dcb; +[Badge descriptor] */

void FUN_108504d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4680,
                        &PTR____CFConstantStringClassReference_110ea7ed8,&PTR_DAT_113262ab0,
                        &PTR_DAT_113262ac8,7,0x38,0x1c);
    puRam000000011372c168 = puVar1;
  }
  return;
}



/* Entry: 108504dcc; end: 108504eaf; +[BadgePlacement descriptor] */

void FUN_108504dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba46d0,
                        &PTR____CFConstantStringClassReference_110ee0878,&PTR_DAT_113262ab0,0,0,4,
                        0x1c);
    puRam000000011372c170 = puVar1;
  }
  return;
}



/* Entry: 108504eb0; end: 108504ebb;  */

bool FUN_108504eb0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108504ebc; end: 108504f37;  */

undefined * FUN_108504ebc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372c180 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ee08b8,
                        &UNK_10df32980,&UNK_10df329cc,9,FUN_108504f38,0);
    do {
      if (puRam000000011372c180 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372c180;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372c180,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372c180 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372c180;
}



/* Entry: 108504f38; end: 108504f4f;  */

uint FUN_108504f38(uint param_1)

{
  return (uint)(param_1 < 10) & 0x3efU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 108504f50; end: 108504fb7; +[FriendLinkState descriptor] */

void FUN_108504f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4770,
                        &PTR____CFConstantStringClassReference_110ee08d8,&PTR_DAT_113262ba8,0,0,4,
                        0x1c);
    puRam000000011372c188 = puVar1;
  }
  return;
}



/* Entry: 108504fb8; end: 10850501f; +[StoryType descriptor] */

void FUN_108504fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba47c0,
                        &PTR____CFConstantStringClassReference_110e251b8,&PTR_DAT_113262ba8,0,0,4,
                        0x1c);
    puRam000000011372c190 = puVar1;
  }
  return;
}



/* Entry: 108505020; end: 108505087; +[ReadReceiptState descriptor] */

void FUN_108505020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4810,
                        &PTR____CFConstantStringClassReference_110ee08f8,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262ca0,4,4,0x1c);
    puRam000000011372c198 = puVar1;
  }
  return;
}



/* Entry: 108505088; end: 1085050ef; +[SnapReadReceipt descriptor] */

void FUN_108505088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4860,
                        &PTR____CFConstantStringClassReference_110ee0918,&PTR_DAT_113262ba8,
                        &PTR_s_snapId_113262e60,10,0x50,0x1c);
    puRam000000011372c1a0 = puVar1;
  }
  return;
}



/* Entry: 1085050f0; end: 108505157; +[SnapReadReceiptBatch descriptor] */

void FUN_1085050f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba48b0,
                        &PTR____CFConstantStringClassReference_110ee0938,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262bc0,1,0x10,0x1c);
    puRam000000011372c1a8 = puVar1;
  }
  return;
}



/* Entry: 108505158; end: 1085051bf; +[ViewState descriptor] */

void FUN_108505158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4900,
                        &PTR____CFConstantStringClassReference_110ee0958,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262d20,5,0x28,0x1c);
    puRam000000011372c1b0 = puVar1;
  }
  return;
}



/* Entry: 1085051c0; end: 108505227; +[ViewStats descriptor] */

void FUN_1085051c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4950,
                        &PTR____CFConstantStringClassReference_110ee0978,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262fa0,10,0x58,0x1c);
    puRam000000011372c1b8 = puVar1;
  }
  return;
}



/* Entry: 108505228; end: 10850528f; +[SpotlightStats descriptor] */

void FUN_108505228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba49a0,
                        &PTR____CFConstantStringClassReference_110ee0998,&PTR_DAT_113262ba8,
                        &PTR_s_snapId_1132630e0,10,0x58,0x1c);
    puRam000000011372c1c0 = puVar1;
  }
  return;
}



/* Entry: 108505290; end: 1085052f7; +[BloomFilter descriptor] */

void FUN_108505290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba49f0,
                        &PTR____CFConstantStringClassReference_110ee09b8,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262dc0,5,0x30,0x1c);
    puRam000000011372c1c8 = puVar1;
  }
  return;
}



/* Entry: 1085052f8; end: 10850535f; +[TeamSnapchatServeReceipt descriptor] */

void FUN_1085052f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4a40,
                        &PTR____CFConstantStringClassReference_110ee09d8,&PTR_DAT_113262ba8,
                        &PTR_s_snapId_113262c40,3,0x20,0x1c);
    puRam000000011372c1d0 = puVar1;
  }
  return;
}



/* Entry: 108505360; end: 1085053c7; +[TeamSnapchatHistory descriptor] */

void FUN_108505360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4a90,
                        &PTR____CFConstantStringClassReference_110ee09f8,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262be0,1,0x10,0x1c);
    puRam000000011372c1d8 = puVar1;
  }
  return;
}



/* Entry: 1085053c8; end: 1085054ab; +[SnapCreationPeriod descriptor] */

void FUN_1085053c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4ae0,
                        &PTR____CFConstantStringClassReference_110ee0a18,&PTR_DAT_113262ba8,
                        &PTR_DAT_113262c00,2,0x18,0x1c);
    puRam000000011372c1e0 = puVar1;
  }
  return;
}



/* Entry: 1085054ac; end: 1085054b7;  */

bool FUN_1085054ac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1085054b8; end: 10850551f; +[PremiumContentType descriptor] */

void FUN_1085054b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4b80,
                        &PTR____CFConstantStringClassReference_110ee0a58,&PTR_DAT_113263230,0,0,4,
                        0x1c);
    puRam000000011372c1f0 = puVar1;
  }
  return;
}



/* Entry: 108505520; end: 1085055ab; +[PremiumContentId descriptor] */

undefined * FUN_108505520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c1f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4bd0,
                        &PTR____CFConstantStringClassReference_110ee0a78,&PTR_DAT_113263230,
                        &PTR_s_contentType_113263388,5,0x30,0x1c);
    func_0x00010c229040();
    puRam000000011372c1f8 = puVar1;
  }
  return puRam000000011372c1f8;
}



/* Entry: 1085055ac; end: 108505613; +[PremiumReadReceipt descriptor] */

void FUN_1085055ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4c20,
                        &PTR____CFConstantStringClassReference_110ee0a98,&PTR_DAT_113263230,
                        &PTR_s_publisherId_113263528,0xb,0x50,0x1c);
    puRam000000011372c200 = puVar1;
  }
  return;
}



/* Entry: 108505614; end: 10850567b; +[PremiumContentStats descriptor] */

void FUN_108505614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4c70,
                        &PTR____CFConstantStringClassReference_110ee0ab8,&PTR_DAT_113263230,
                        &PTR_s_contentId_113263428,8,0x48,0x1c);
    puRam000000011372c208 = puVar1;
  }
  return;
}



/* Entry: 10850567c; end: 1085056e3; +[PremiumContentWatchHistory descriptor] */

void FUN_10850567c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4cc0,
                        &PTR____CFConstantStringClassReference_110ee0ad8,&PTR_DAT_113263230,
                        &PTR_s_contentId_113263288,2,0x18,0x1c);
    puRam000000011372c210 = puVar1;
  }
  return;
}



/* Entry: 1085056e4; end: 10850574b; +[PublisherRecentWatchHistory descriptor] */

void FUN_1085056e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4d10,
                        &PTR____CFConstantStringClassReference_110ee0af8,&PTR_DAT_113263230,
                        &PTR_s_publisherId_1132632c8,3,0x20,0x1c);
    puRam000000011372c218 = puVar1;
  }
  return;
}



/* Entry: 10850574c; end: 1085057b3; +[PublisherRecentWatchHistoryList descriptor] */

void FUN_10850574c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4d60,
                        &PTR____CFConstantStringClassReference_110ee0b18,&PTR_DAT_113263230,
                        &PTR_DAT_113263248,1,0x10,0x1c);
    puRam000000011372c220 = puVar1;
  }
  return;
}



/* Entry: 1085057b4; end: 10850581b; +[StoryRecentWatchHistoryList descriptor] */

void FUN_1085057b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4db0,
                        &PTR____CFConstantStringClassReference_110ee0b38,&PTR_DAT_113263230,
                        &PTR_DAT_113263268,1,0x10,0x1c);
    puRam000000011372c228 = puVar1;
  }
  return;
}



/* Entry: 10850581c; end: 1085058a7; +[RecentWatchHistoryList descriptor] */

undefined * FUN_10850581c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372c230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba4e00,
                        &PTR____CFConstantStringClassReference_110ee0b58,&PTR_DAT_113263230,
                        &PTR_s_contentType_113263328,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372c230 = puVar1;
  }
  return puRam000000011372c230;
}



/* Entry: 1085058a8; end: 108505907; -[SCStoriesSnapPlaybackInfo xLogObjectInfo] */

void FUN_1085058a8(undefined *param_1)

{
  undefined *puVar1;
  
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108505908; end: 10850596b;  */

undefined ** FUN_108505908(void)

{
  int iVar1;
  
  if ((bRam0000000113827a20 & 1) == 0) {
    iVar1 = 0x13827a20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263688,0x100000000);
      ___cxa_guard_release(0x113827a20);
    }
  }
  return &PTR_PTR_113263688;
}



/* Entry: 10850596c; end: 1085059f3;  */

void FUN_10850596c(uint *param_1,undefined1 *param_2)

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


