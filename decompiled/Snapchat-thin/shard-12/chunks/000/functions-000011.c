/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c29a98; end: 108c29c1b; +[SCPhoneContactsContact immutableObjectParse:bufferSize:] */

void FUN_108c29a98(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  undefined8 uVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126db2f0;
  _objc_alloc(PTR_PTR_1126db2f0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_108c29b78:
    puVar8 = (undefined *)0x0;
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
    if (uVar4 < 7) goto LAB_108c29b78;
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
    uVar9 = 0;
    if (8 < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
      if (uVar6 != 0) {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      uVar10 = 0;
      if ((10 < uVar4) &&
         (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10), uVar10 = 0, uVar6 != 0)) {
        uVar10 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      goto LAB_108c29b84;
    }
  }
  uVar9 = 0;
  uVar10 = 0;
LAB_108c29b84:
  func_0x00010c035b20(uVar9,uVar10,puVar3,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c29c1c; end: 108c29c3f; +[SCPhoneContactsContact objectClassFunctionPointer] */

undefined1  [16] FUN_108c29c1c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c29c38;
  auVar1._0_8_ = 0x108c29c30;
  return auVar1;
}



/* Entry: 108c29c40; end: 108c29d5f;  */

void FUN_108c29c40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar3 = PTR_PTR_1126db2f8;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c0fafe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0340(param_3);
    uVar4 = param_1;
    func_0x00010befd5e0(param_3);
    FUN_108c29d60(param_1,uVar4,puVar3,0xffffffffffffffff,lVar1,lVar2);
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



/* Entry: 108c29d60; end: 108c29e3f;  */

undefined1 *
FUN_108c29d60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
    puStack_48 = PTR_PTR_1126fddc8;
    lStack_50 = param_3;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined8 *)((long)plVar1 + 0x30) = param_2;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 108c29e40; end: 108c29eb3;  */

void FUN_108c29e40(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c29eb4();
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



/* Entry: 108c29eb4; end: 108c2a24b;  */

void FUN_108c29eb4(undefined8 param_1,undefined *param_2)

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
      func_0x00010c0fafe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar5,&UNK_10f50aeeb);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c0fafe0(param_2);
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
            _objc_opt_class(PTR_PTR_1126db2f0);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_108c2a198;
            puVar5 = PTR_PTR_1126db2f8;
            _objc_alloc(PTR_PTR_1126db2f8);
            puVar2 = puVar3;
            func_0x00010c0fafe0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d0340(puVar3);
            uVar6 = param_1;
            func_0x00010befd5e0(puVar3);
            FUN_108c29d60(param_1,uVar6,puVar5,puVar1,puVar2,puVar4);
            param_2 = puVar3;
            goto LAB_108c29fbc;
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
      _objc_opt_class(PTR_PTR_1126db2f0);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126db2f8;
        _objc_alloc(PTR_PTR_1126db2f8);
        puVar2 = puVar3;
        func_0x00010c0fafe0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d0340(puVar3);
        uVar6 = param_1;
        func_0x00010befd5e0(puVar3);
        FUN_108c29d60(param_1,uVar6,puVar5,puVar1,puVar2,puVar4);
        param_2 = puVar3;
LAB_108c29fbc:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108c2a1a0;
      }
LAB_108c2a198:
      param_2 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c2a1a0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c2a24c; end: 108c2a2bf;  */

void FUN_108c2a24c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c29eb4();
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



/* Entry: 108c2a2c0; end: 108c2a323;  */

void FUN_108c2a2c0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db2f0;
    _objc_alloc(PTR_PTR_1126db2f0);
    func_0x00010c035b20(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c2a324; end: 108c2a353; -[SCPhoneContactsContactChangeRequest .cxx_destruct] */

void FUN_108c2a324(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c2a354; end: 108c2a35f; -[SCPhoneContactsContactChangeRequest table] */

undefined * FUN_108c2a354(void)

{
  return &UNK_10f50aed4;
}



/* Entry: 108c2a360; end: 108c2a3a7; -[SCPhoneContactsContactChangeRequest createTableWithSQLite:] */

void FUN_108c2a360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df963b3,0x96,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c2a3a8; end: 108c2a72f; -[SCPhoneContactsContactChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c2a3a8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108c2a2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c2a730(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50af6a);
    if (lVar6 == 0) goto LAB_108c2a6cc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108c2a6cc;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db2f0);
    func_0x00010c21c9a0(puVar7);
LAB_108c2a6b4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50af38);
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
            _objc_opt_class(PTR_PTR_1126db2f0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c2a6d8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108c2a6d8;
    }
    FUN_108c2a2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c2a730(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50afb2);
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
        _objc_opt_class(PTR_PTR_1126db2f0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108c2a6b4;
      }
    }
LAB_108c2a6cc:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108c2a6d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c2a730; end: 108c2a897;  */

ulong FUN_108c2a730(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0fafe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108c2a898(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108c2a898(param_2,uVar6);
  func_0x00010c0d0340(param_3);
  func_0x00010befd5e0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,10);
  func_0x000107c27db8(param_1,0,param_2,8);
  func_0x000107c27ddc(param_2,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108c2a898; end: 108c2a9c7;  */

undefined8 FUN_108c2a898(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108c2a978;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108c2a978;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108c2a938;
    param_1 = 0;
  }
  else {
LAB_108c2a938:
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
LAB_108c2a978:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c2a9c8; end: 108c2aa7f;  */

undefined8 FUN_108c2a9c8(void)

{
  int iVar1;
  
  if ((bRam0000000113828c58 & 1) == 0) {
    iVar1 = 0x13828c58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113828bf0 = 0xe;
      puRam0000000113828bf8 = &UNK_10f50b004;
      uRam0000000113828c00 = 0x10001;
      pcRam0000000113828c08 = FUN_108c2aa80;
      pcRam0000000113828c10 = FUN_108c2aab8;
      ppuRam0000000113828be8 = &PTR_DAT_110ab8b50;
      uRam0000000113828c28 = 0;
      uRam0000000113828c20 = 0;
      uRam0000000113828c38 = 0;
      uRam0000000113828c30 = 0;
      uRam0000000113828c48 = 0;
      uRam0000000113828c40 = 0;
      uRam0000000113828c50 = 0;
      ___cxa_atexit(0x108c27274,0x113828be8,0x100000000);
      ___cxa_guard_release(0x113828c58);
    }
  }
  return 0x113828be8;
}



/* Entry: 108c2aa80; end: 108c2aab7;  */

undefined4 FUN_108c2aa80(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c2aab8; end: 108c2ab0b;  */

undefined8 FUN_108c2aab8(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108c2ab0c; end: 108c2ab17; +[SCPhoneContactsTimer table] */

undefined * FUN_108c2ab0c(void)

{
  return &UNK_10f50b009;
}



/* Entry: 108c2ab18; end: 108c2ac83; +[SCPhoneContactsTimer immutableObjectParse:bufferSize:] */

void FUN_108c2ab18(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126db300;
  _objc_alloc(PTR_PTR_1126db300);
  puVar5 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar5 < 5) {
    uVar7 = 0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar5[2]);
    }
    if ((6 < *puVar5) && ((ulong)puVar5[3] != 0)) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar5[3]);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          puVar9 = puVar8 + 2;
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(*(undefined8 *)puVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar6);
          _objc_release(puVar6);
          puVar8 = puVar9;
        } while (puVar9 != puVar2 + 1 + (ulong)*puVar2 * 2);
      }
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      goto LAB_108c2ac20;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108c2ac20:
  func_0x00010c056240(puVar3,param_2,uVar7,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c2ac84; end: 108c2aca7; +[SCPhoneContactsTimer objectClassFunctionPointer] */

undefined1  [16] FUN_108c2ac84(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c2aca0;
  auVar1._0_8_ = 0x108c2ac98;
  return auVar1;
}



/* Entry: 108c2aca8; end: 108c2ad83;  */

void FUN_108c2aca8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126db308;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c27dd80(param_2);
    lVar2 = param_2;
    func_0x00010c270ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c2ad84(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c2ad84; end: 108c2ae27;  */

undefined1 * FUN_108c2ad84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fddd0;
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



/* Entry: 108c2ae28; end: 108c2ae9b;  */

void FUN_108c2ae28(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c2ae9c();
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



/* Entry: 108c2ae9c; end: 108c2b16f;  */

void FUN_108c2ae9c(undefined *param_1)

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
      puVar1 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf636c0();
      _objc_release(puVar1);
      func_0x000107c310d8(puVar5,&UNK_10f50b01e);
      if (puVar5 != (undefined *)0x0) {
        puVar1 = param_1;
        func_0x00010c27dd80(param_1);
        _sqlite3_bind_int64(puVar5,1,puVar1);
        puVar1 = puVar5;
        _sqlite3_step();
        if ((int)puVar1 == 100) {
          puVar1 = puVar5;
          _sqlite3_column_int64(puVar5,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126db300);
          _sqlite3_column_blob(puVar5,1);
          _sqlite3_column_bytes(puVar5,1);
          puVar3 = puVar2;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar2);
          _sqlite3_reset(puVar5);
          if (puVar3 == (undefined *)0x0) goto LAB_108c2b0e4;
          puVar5 = PTR_PTR_1126db308;
          _objc_alloc(PTR_PTR_1126db308);
          puVar2 = puVar3;
          func_0x00010c27dd80(puVar3);
          puVar4 = puVar3;
          func_0x00010c270ce0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_108c2ad84(puVar5,puVar1,puVar2,puVar4);
          param_1 = puVar3;
          goto LAB_108c2af80;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126db300);
      puVar2 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar2 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126db308;
        _objc_alloc(PTR_PTR_1126db308);
        puVar3 = puVar2;
        func_0x00010c27dd80(puVar2);
        puVar4 = puVar2;
        func_0x00010c270ce0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c2ad84(puVar5,puVar1,puVar3,puVar4);
        param_1 = puVar2;
LAB_108c2af80:
        _objc_release(puVar4);
        goto LAB_108c2b0ec;
      }
LAB_108c2b0e4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c2b0ec:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c2b170; end: 108c2b1cf;  */

void FUN_108c2b170(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db300;
    _objc_alloc(PTR_PTR_1126db300);
    func_0x00010c056240();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c2b1d0; end: 108c2b1db; -[SCPhoneContactsTimerChangeRequest .cxx_destruct] */

void FUN_108c2b1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108c2b1dc; end: 108c2b1e7; -[SCPhoneContactsTimerChangeRequest table] */

undefined * FUN_108c2b1dc(void)

{
  return &UNK_10f50b009;
}



/* Entry: 108c2b1e8; end: 108c2b22f; -[SCPhoneContactsTimerChangeRequest createTableWithSQLite:] */

void FUN_108c2b1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df96449,0x7f,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c2b230; end: 108c2b5c7; -[SCPhoneContactsTimerChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c2b230(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108c2b170(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c2b5c8(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50b08e);
    if (lVar5 == 0) goto LAB_108c2b564;
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
    if ((int)lVar5 != 0x65) goto LAB_108c2b564;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db300);
    func_0x00010c21c9a0(puVar8);
LAB_108c2b54c:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50b05e);
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
            _objc_opt_class(PTR_PTR_1126db300);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c2b570;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_108c2b570;
    }
    FUN_108c2b170(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c2b5c8(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50b0c9);
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
        _objc_opt_class(PTR_PTR_1126db300);
        func_0x00010c21c9a0(puVar8);
        goto LAB_108c2b54c;
      }
    }
LAB_108c2b564:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_108c2b570:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c2b5c8; end: 108c2b813;  */

undefined1 * FUN_108c2b5c8(undefined1 *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 in_x5;
  undefined1 uVar11;
  undefined8 in_x6;
  undefined1 uVar12;
  undefined8 in_x7;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  ulong uStack_1a0;
  undefined *puStack_198;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c270ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_138 = 0;
  uStack_130 = 0;
  lStack_140 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(uVar4);
  uVar9 = 0x10;
  uVar7 = uVar4;
  func_0x00010bf52a60();
  uVar12 = (undefined1)in_x7;
  uVar11 = (undefined1)in_x6;
  uVar10 = (undefined1)in_x5;
  if (uVar7 != 0) {
    lVar15 = *plStack_110;
    do {
      uVar16 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(uVar4);
        }
        func_0x00010bf885a0(*(undefined8 *)(lStack_118 + uVar16 * 8));
        uStack_128 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20
                                                  ,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
        func_0x00010547a4c0(&lStack_140,&uStack_128);
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
      uVar9 = 0x10;
      uVar7 = uVar4;
      func_0x00010bf52a60();
      uVar12 = (undefined1)in_x7;
      uVar11 = (undefined1)in_x6;
      uVar10 = (undefined1)in_x5;
    } while (uVar7 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c27dd80();
  lVar15 = 0x1130da4e8;
  if (lStack_138 - lStack_140 != 0) {
    lVar15 = lStack_140;
  }
  puVar5 = param_1;
  func_0x00010547a5f0(param_1,lVar15,lStack_138 - lStack_140 >> 3);
  param_1[0x46] = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  uVar8 = 0;
  func_0x000107c27db0(param_1,4,uVar4 & 0xffffffff);
  uVar7 = (ulong)puVar5 & 0xffffffff;
  func_0x00010547a580(param_1,6);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  uVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar4);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_1a0;
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  puStack_198 = PTR_PTR_1126fddd8;
  uStack_1a0 = uVar16;
  _objc_msgSendSuper2(&uStack_1a0,PTR_s_init_1125d9248);
  if (puVar6 != (ulong *)0x0) {
    uVar4 = uVar7;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)puVar6 + 0x10);
    *(ulong *)((long)puVar6 + 0x10) = uVar4;
    _objc_release(uVar13);
    uVar13 = uVar8;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)puVar6 + 0x18);
    *(undefined8 *)((long)puVar6 + 0x18) = uVar13;
    _objc_release(uVar14);
    uVar13 = uVar9;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)puVar6 + 0x20);
    *(undefined8 *)((long)puVar6 + 0x20) = uVar13;
    _objc_release(uVar14);
    *(undefined1 *)((long)puVar6 + 8) = uVar10;
    *(undefined1 *)((long)puVar6 + 9) = uVar11;
    *(undefined1 *)((long)puVar6 + 10) = uVar12;
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  return (undefined1 *)puVar6;
}



/* Entry: 108c2b814; end: 108c2b913; -[SCPhoneContactsMetaData initWithPhoneNumbers:emails:displayName:hasPhoto:hasSavedDate:hasSocialLink:] */

undefined1 *
FUN_108c2b814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126fddd8;
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
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c2b914; end: 108c2b937; -[SCPhoneContactsMetaData copyWithZone:] */

undefined8 FUN_108c2b914(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c2b938; end: 108c2b9c7; -[SCPhoneContactsMetaData hash] */

undefined8 * FUN_108c2b938(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_40;
  ulong uStack_38;
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
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_58;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108c2ba90:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108c2ba9c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_108c2ba9c;
          }
          goto LAB_108c2ba90;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108c2ba9c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108c2b9c8; end: 108c2bab7; -[SCPhoneContactsMetaData isEqual:] */

long FUN_108c2b9c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108c2ba90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c2ba9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108c2ba9c;
          }
          goto LAB_108c2ba90;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108c2ba9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108c2bab8; end: 108c2babf; -[SCPhoneContactsMetaData phoneNumbers] */

undefined8 FUN_108c2bab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c2bac0; end: 108c2bac7; -[SCPhoneContactsMetaData emails] */

undefined8 FUN_108c2bac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108c2bac8; end: 108c2bacf; -[SCPhoneContactsMetaData displayName] */

undefined8 FUN_108c2bac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c2bad0; end: 108c2bad7; -[SCPhoneContactsMetaData hasPhoto] */

undefined1 FUN_108c2bad0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108c2bad8; end: 108c2badf; -[SCPhoneContactsMetaData hasSavedDate] */

undefined1 FUN_108c2bad8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108c2bae0; end: 108c2bae7; -[SCPhoneContactsMetaData hasSocialLink] */

undefined1 FUN_108c2bae0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108c2bae8; end: 108c2bb23; -[SCPhoneContactsMetaData .cxx_destruct] */

void FUN_108c2bae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108c2bb24; end: 108c2bb2b; -[SCContactPermissionInfoServices contactPermissionManager] */

undefined8 FUN_108c2bb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c2bb2c; end: 108c2bb5b; -[SCContactPermissionInfoServices .cxx_destruct] */

void FUN_108c2bb2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c2bb5c; end: 108c2bc23;  */

void FUN_108c2bb5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eef7f8,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126db310;
    _objc_alloc(PTR_PTR_1126db310);
    lVar3 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_38);
    lVar1 = lStack_38;
    _objc_release(lVar3);
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c2bc24; end: 108c2bc53;  */

void FUN_108c2bc24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef818,0,0);
  return;
}



/* Entry: 108c2bc54; end: 108c2bd6f;  */

void FUN_108c2bc54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eef858,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf44700(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar2 == 0) {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar3;
    func_0x00010bf44740(lVar3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c2bd70; end: 108c2bd8b;  */

void FUN_108c2bd70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110eef2d8,
             &PTR____CFConstantStringClassReference_110eef878,0);
  return;
}



/* Entry: 108c2bd8c; end: 108c2bddb;  */

undefined8 FUN_108c2bd8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f440();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108c2bddc; end: 108c2bedb;  */

void FUN_108c2bddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110eef398,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 108c2bedc; end: 108c2bf1b;  */

void FUN_108c2bedc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0b5020(param_1,param_2,&PTR____CFConstantStringClassReference_110eef5f8,6,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithLong__112615800,param_1);
  return;
}



/* Entry: 108c2bf1c; end: 108c2bfdb;  */

void FUN_108c2bf1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef618,1,0);
  return;
}



/* Entry: 108c2bfdc; end: 108c2c16b;  */

void FUN_108c2bfdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eef778,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126db318;
    _objc_alloc(PTR_PTR_1126db318);
    lVar3 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_38);
    lVar1 = lStack_38;
    _objc_release(lVar3);
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c2c16c; end: 108c2c1db;  */

long FUN_108c2c16c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eef798,0,0);
  uVar2 = (int)param_1 - 1;
  lVar1 = 0;
  if (uVar2 < 3) {
    lVar1 = (ulong)uVar2 + 1;
  }
  return lVar1;
}



/* Entry: 108c2c1dc; end: 108c2c1f3;  */

void FUN_108c2c1dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef7d8,0,0);
  return;
}



/* Entry: 108c2c1f4; end: 108c2c26b;  */

void FUN_108c2c1f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010c04e820();
    puVar3 = puVar2;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c2c26c; end: 108c2c287;  */

void FUN_108c2c26c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110eef2b8,
             &PTR____CFConstantStringClassReference_110eef8d8,0);
  return;
}



/* Entry: 108c2c288; end: 108c2c397;  */

void FUN_108c2c288(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eef158,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126db328;
    _objc_alloc(PTR_PTR_1126db328);
    lVar4 = lVar2;
    func_0x00010c296d80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar3,param_2,lVar4,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(lVar4);
    puVar6 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar3);
      puVar6 = puVar3;
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  puVar3 = puVar6;
  func_0x00010c116aa0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c2c398; end: 108c2c3ab;  */

void FUN_108c2c398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eef8f8,1,0);
  return;
}



/* Entry: 108c2c3ac; end: 108c2c413; +[SCPbGenAILensGroupLenses descriptor] */

void FUN_108c2c3ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8720,
                        &PTR____CFConstantStringClassReference_110eef918,&PTR_DAT_113291318,
                        &PTR_DAT_113291350,3,0x20,0x1c);
    puRam000000011372e0d0 = puVar1;
  }
  return;
}



/* Entry: 108c2c414; end: 108c2c47b; +[SCPbGenAILensGroupLensesList descriptor] */

void FUN_108c2c414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8770,
                        &PTR____CFConstantStringClassReference_110eef938,&PTR_DAT_113291318,
                        &PTR_DAT_113291330,1,0x10,0x1c);
    puRam000000011372e0d8 = puVar1;
  }
  return;
}



/* Entry: 108c2c47c; end: 108c2c4e3; +[SCPbGenAILensGroupUsageLimit descriptor] */

void FUN_108c2c47c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8810,
                        &PTR____CFConstantStringClassReference_110eef958,&PTR_DAT_1132913b0,
                        &PTR_DAT_1132913e8,4,0x20,0x1c);
    puRam000000011372e0e0 = puVar1;
  }
  return;
}



/* Entry: 108c2c4e4; end: 108c2c54b; +[SCPbGenAIEngagementBasedLensGroupUsageLimit descriptor] */

void FUN_108c2c4e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8860,
                        &PTR____CFConstantStringClassReference_110eef978,&PTR_DAT_1132913b0,
                        &PTR_s_limit_113291468,4,0x14,0x1c);
    puRam000000011372e0e8 = puVar1;
  }
  return;
}



/* Entry: 108c2c54c; end: 108c2c62f; +[SCPbGenAILensGroupUsageLimitsList descriptor] */

void FUN_108c2c54c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb88b0,
                        &PTR____CFConstantStringClassReference_110eef998,&PTR_DAT_1132913b0,
                        &PTR_DAT_1132913c8,1,0x10,0x1c);
    puRam000000011372e0f0 = puVar1;
  }
  return;
}



/* Entry: 108c2c630; end: 108c2c63b;  */

bool FUN_108c2c630(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 108c2c63c; end: 108c2c6a3; +[SCSubscriptionShopPbGetCreditBalanceRequest descriptor] */

void FUN_108c2c63c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8950,
                        &PTR____CFConstantStringClassReference_110eef9d8,&PTR_DAT_1132914e8,0,0,4,
                        0x1c);
    puRam000000011372e100 = puVar1;
  }
  return;
}



/* Entry: 108c2c6a4; end: 108c2c70b; +[SCSubscriptionShopPbGetCreditBalanceResponse descriptor] */

void FUN_108c2c6a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb89a0,
                        &PTR____CFConstantStringClassReference_110eef9f8,&PTR_DAT_1132914e8,
                        &PTR_DAT_1132916e0,4,0x28,0x1c);
    puRam000000011372e108 = puVar1;
  }
  return;
}



/* Entry: 108c2c70c; end: 108c2c773; +[SCSubscriptionShopPbGetCreditStateRequest descriptor] */

void FUN_108c2c70c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb89f0,
                        &PTR____CFConstantStringClassReference_110eefa18,&PTR_DAT_1132914e8,
                        &PTR_s_userId_113291500,1,0x10,0x1c);
    puRam000000011372e110 = puVar1;
  }
  return;
}



/* Entry: 108c2c774; end: 108c2c7db; +[SCSubscriptionShopPbGetCreditStateResponse descriptor] */

void FUN_108c2c774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8a40,
                        &PTR____CFConstantStringClassReference_110eefa38,&PTR_DAT_1132914e8,
                        &PTR_DAT_113291560,2,0x18,0x1c);
    puRam000000011372e118 = puVar1;
  }
  return;
}



/* Entry: 108c2c7dc; end: 108c2c843; +[SCSubscriptionShopPbReserveCreditsRequest descriptor] */

void FUN_108c2c7dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8a90,
                        &PTR____CFConstantStringClassReference_110eefa58,&PTR_DAT_1132914e8,
                        &PTR_s_userId_113291760,7,0x40,0x1c);
    puRam000000011372e120 = puVar1;
  }
  return;
}



/* Entry: 108c2c844; end: 108c2c8ab; +[SCSubscriptionShopPbReserveCreditsResponse descriptor] */

void FUN_108c2c844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8ae0,
                        &PTR____CFConstantStringClassReference_110eefa78,&PTR_DAT_1132914e8,
                        &PTR_DAT_1132915a0,2,0x18,0x1c);
    puRam000000011372e128 = puVar1;
  }
  return;
}



/* Entry: 108c2c8ac; end: 108c2c913; +[SCSubscriptionShopPbCommitCreditsRequest descriptor] */

void FUN_108c2c8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8b30,
                        &PTR____CFConstantStringClassReference_110eefa98,&PTR_DAT_1132914e8,
                        &PTR_s_userId_1132915e0,2,0x18,0x1c);
    puRam000000011372e130 = puVar1;
  }
  return;
}



/* Entry: 108c2c914; end: 108c2c97b; +[SCSubscriptionShopPbCommitCreditsResponse descriptor] */

void FUN_108c2c914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8b80,
                        &PTR____CFConstantStringClassReference_110eefab8,&PTR_DAT_1132914e8,
                        &PTR_DAT_113291520,1,0x10,0x1c);
    puRam000000011372e138 = puVar1;
  }
  return;
}



/* Entry: 108c2c97c; end: 108c2c9e3; +[SCSubscriptionShopPbReleaseCreditsRequest descriptor] */

void FUN_108c2c97c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8bd0,
                        &PTR____CFConstantStringClassReference_110eefad8,&PTR_DAT_1132914e8,
                        &PTR_s_userId_113291620,3,0x18,0x1c);
    puRam000000011372e140 = puVar1;
  }
  return;
}



/* Entry: 108c2c9e4; end: 108c2ca4b; +[SCSubscriptionShopPbReleaseCreditsResponse descriptor] */

void FUN_108c2c9e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8c20,
                        &PTR____CFConstantStringClassReference_110eefaf8,&PTR_DAT_1132914e8,
                        &PTR_DAT_113291540,1,0x10,0x1c);
    puRam000000011372e148 = puVar1;
  }
  return;
}



/* Entry: 108c2ca4c; end: 108c2cab3; +[SCSubscriptionShopPbFreemiumCreditPolicy descriptor] */

void FUN_108c2ca4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8c70,
                        &PTR____CFConstantStringClassReference_110eefb18,&PTR_DAT_1132914e8,
                        &PTR_DAT_113291680,3,0x20,0x1c);
    puRam000000011372e150 = puVar1;
  }
  return;
}



/* Entry: 108c2cab4; end: 108c2caff;  */

undefined ** FUN_108c2cab4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108c2cb00; end: 108c2cb07; -[SCFeatureSettingsService updateBloopsUserPolicy:] */

void FUN_108c2cb00(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1729f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBloopsUserPolicy__11263a498,(long)param_3)
  ;
  return;
}



/* Entry: 108c2cb08; end: 108c2cb13; -[SCFeatureSettingsService isBloopsFeatureRestrictedAvailable] */

void FUN_108c2cb08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefb38);
  return;
}



/* Entry: 108c2cb14; end: 108c2cb1f; -[SCFeatureSettingsService bloopsFeatureRestrictedServerParam] */

undefined ** FUN_108c2cb14(void)

{
  return &PTR____CFConstantStringClassReference_110eefb38;
}



/* Entry: 108c2cb20; end: 108c2cb2f; -[SCFeatureSettingsService setBloopsFeatureRestricted:] */

void FUN_108c2cb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110eefb38,param_3);
  return;
}



/* Entry: 108c2cb30; end: 108c2cb37; -[SCFeatureSettingsService cameos_feature_restricted_client_value:] */

undefined * FUN_108c2cb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108c2cb38; end: 108c2cb3f; -[SCFeatureSettingsService cameos_feature_restricted_server_value:] */

void FUN_108c2cb38(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108c2cb40; end: 108c2cb4f; -[SCFeatureSettingsService bloopsFeatureRestricted] */

void FUN_108c2cb40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110eefb38,0);
  return;
}



/* Entry: 108c2cb50; end: 108c2cb5b; -[SCFeatureSettingsService isBloopsFeatureOnboardedAvailable] */

void FUN_108c2cb50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefb58);
  return;
}



/* Entry: 108c2cb5c; end: 108c2cb67; -[SCFeatureSettingsService bloopsFeatureOnboardedServerParam] */

undefined ** FUN_108c2cb5c(void)

{
  return &PTR____CFConstantStringClassReference_110eefb58;
}



/* Entry: 108c2cb68; end: 108c2cb77; -[SCFeatureSettingsService setBloopsFeatureOnboarded:] */

void FUN_108c2cb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110eefb58,param_3);
  return;
}



/* Entry: 108c2cb78; end: 108c2cb7f; -[SCFeatureSettingsService cameos_feature_onboarded_client_value:] */

undefined * FUN_108c2cb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108c2cb80; end: 108c2cb87; -[SCFeatureSettingsService cameos_feature_onboarded_server_value:] */

void FUN_108c2cb80(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 108c2cb88; end: 108c2cb97; -[SCFeatureSettingsService bloopsFeatureOnboarded] */

void FUN_108c2cb88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110eefb58,0);
  return;
}



/* Entry: 108c2cb98; end: 108c2cba3; -[SCFeatureSettingsService isBloopsUserPolicyAvailable] */

void FUN_108c2cb98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefb78);
  return;
}



/* Entry: 108c2cba4; end: 108c2cbaf; -[SCFeatureSettingsService bloopsUserPolicyServerParam] */

undefined ** FUN_108c2cba4(void)

{
  return &PTR____CFConstantStringClassReference_110eefb78;
}



/* Entry: 108c2cbb0; end: 108c2cbbf; -[SCFeatureSettingsService setBloopsUserPolicy:] */

void FUN_108c2cbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eefb78,param_3);
  return;
}



/* Entry: 108c2cbc0; end: 108c2cbc7; -[SCFeatureSettingsService cameos_user_policy_client_value:] */

void FUN_108c2cbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c2cbc8; end: 108c2cbcf; -[SCFeatureSettingsService cameos_user_policy_server_value:] */

void FUN_108c2cbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c2cbd0; end: 108c2cbdf; -[SCFeatureSettingsService bloopsUserPolicy] */

void FUN_108c2cbd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eefb78,0);
  return;
}



/* Entry: 108c2cbe0; end: 108c2cbeb; -[SCFeatureSettingsService hasBloopsOnePersonFriendCameoNotificationDate] */

void FUN_108c2cbe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefb98);
  return;
}



/* Entry: 108c2cbec; end: 108c2cbf7; -[SCFeatureSettingsService bloopsOnePersonFriendCameoNotificationDateServerParam] */

undefined ** FUN_108c2cbec(void)

{
  return &PTR____CFConstantStringClassReference_110eefb98;
}



/* Entry: 108c2cbf8; end: 108c2cc03; -[SCFeatureSettingsService setBloopsOnePersonFriendCameoNotificationDate:] */

void FUN_108c2cbf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_doubleValue__112586908,
             &PTR____CFConstantStringClassReference_110eefb98);
  return;
}



/* Entry: 108c2cc04; end: 108c2cc0b; -[SCFeatureSettingsService bloops_one_person_friend_cameo_notification_date_client_value:] */

void FUN_108c2cc04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf885a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 108c2cc0c; end: 108c2cc13; -[SCFeatureSettingsService bloops_one_person_friend_cameo_notification_date_server_value:] */

void FUN_108c2cc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}


