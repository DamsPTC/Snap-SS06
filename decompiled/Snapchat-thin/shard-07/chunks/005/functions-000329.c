/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055f8f00; end: 1055f8f53;  */

undefined8 FUN_1055f8f00(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1055f8f54; end: 1055f8f5f; +[SCMapNetworkCacheItem table] */

undefined * FUN_1055f8f54(void)

{
  return &UNK_10f2dd6ae;
}



/* Entry: 1055f8f60; end: 1055f90cf; +[SCMapNetworkCacheItem immutableObjectParse:bufferSize:] */

void FUN_1055f8f60(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126bc2a8;
  _objc_alloc(PTR_PTR_1126bc2a8);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_1055f9048:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_1055f9048;
    if (*(short *)((long)piVar1 + lVar6 + 6) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((8 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8), uVar7 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar7);
      goto LAB_1055f9050;
    }
  }
  uVar4 = 0;
LAB_1055f9050:
  func_0x00010c020d00(puVar3,param_2,puVar8,puVar9,uVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055f90d0; end: 1055f90f3; +[SCMapNetworkCacheItem objectClassFunctionPointer] */

undefined1  [16] FUN_1055f90d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1055f90ec;
  auVar1._0_8_ = 0x1055f90e4;
  return auVar1;
}



/* Entry: 1055f90f4; end: 1055f91cf;  */

undefined1 *
FUN_1055f90f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126e9540;
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
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1055f91d0; end: 1055f953f;  */

void FUN_1055f91d0(undefined *param_1)

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
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f2dd6ca);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c086560(param_1);
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
            _objc_opt_class(PTR_PTR_1126bc2a8);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_1055f9490;
            puVar6 = PTR_PTR_1126bc2b0;
            _objc_alloc(PTR_PTR_1126bc2b0);
            puVar2 = puVar3;
            func_0x00010c086560(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c15eb00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf9c880(puVar3);
            FUN_1055f90f4(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_1055f92c4;
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
      _objc_opt_class(PTR_PTR_1126bc2a8);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126bc2b0;
        _objc_alloc(PTR_PTR_1126bc2b0);
        puVar2 = puVar3;
        func_0x00010c086560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c15eb00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf9c880(puVar3);
        FUN_1055f90f4(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_1055f92c4:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1055f9498;
      }
LAB_1055f9490:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1055f9498:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055f9540; end: 1055f95b3;  */

void FUN_1055f9540(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1055f91d0();
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



/* Entry: 1055f95b4; end: 1055f97df;  */

void FUN_1055f95b4(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bc2b0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1055f91d0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126bc2b0;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126bc2b0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c15eb00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf9c880(param_1);
      FUN_1055f90f4(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      _objc_release(puVar3);
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
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c15eb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf9c880();
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



/* Entry: 1055f97e0; end: 1055f9843;  */

void FUN_1055f97e0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bc2a8;
    _objc_alloc(PTR_PTR_1126bc2a8);
    func_0x00010c020d00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f9844; end: 1055f9873; -[SCMapNetworkCacheItemChangeRequest .cxx_destruct] */

void FUN_1055f9844(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1055f9874; end: 1055f987f; -[SCMapNetworkCacheItemChangeRequest table] */

undefined * FUN_1055f9874(void)

{
  return &UNK_10f2dd6ae;
}



/* Entry: 1055f9880; end: 1055f98c7; -[SCMapNetworkCacheItemChangeRequest createTableWithSQLite:] */

void FUN_1055f9880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb57df,0x83,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1055f98c8; end: 1055f9c4f; -[SCMapNetworkCacheItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1055f98c8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1055f97e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1055f9c50(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2dd747);
    if (lVar6 == 0) goto LAB_1055f9bec;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1055f9bec;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bc2a8);
    func_0x00010c21c9a0(puVar7);
LAB_1055f9bd4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2dd710);
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
            _objc_opt_class(PTR_PTR_1126bc2a8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1055f9bf8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1055f9bf8;
    }
    FUN_1055f97e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1055f9c50(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2dd788);
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
        _objc_opt_class(PTR_PTR_1126bc2a8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1055f9bd4;
      }
    }
LAB_1055f9bec:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1055f9bf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055f9c50; end: 1055f9ebf;  */

ulong FUN_1055f9c50(ulong param_1,char *param_2)

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
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1055f9d54;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_1055f9d54;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1055f9d14;
    uVar9 = 0;
  }
  else {
LAB_1055f9d14:
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
LAB_1055f9d54:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c15eb00();
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
    func_0x0001001d1030(param_1,pcVar6,pcVar7);
  }
  _objc_release(pcVar5);
  pcVar6 = param_2;
  func_0x00010bf9c880(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,8,pcVar6,0);
  func_0x0001001ce220(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1055f9ec0; end: 1055f9eff;  */

void FUN_1055f9ec0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055f9f00; end: 1055fa08f; -[SCMapUserNetworkServiceProvider _mapUserNetworking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f9f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2dd7f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0xf);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc2c8;
  _objc_alloc(PTR_PTR_1126bc2c8);
  lVar9 = (long)_DAT_1127269d0;
  lVar3 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127269d4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0d78c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127269d8;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f4c0(puVar2,param_2,lVar4,lVar5,lVar7,lVar8,puVar1);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055fa090; end: 1055fa0df; -[SCMapUserNetworkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055fa090(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127269d4);
  _objc_destroyWeak(param_1 + _DAT_1127269d0);
  _objc_destroyWeak(param_1 + _DAT_1127269d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127269dc);
  return;
}



/* Entry: 1055fa0e0; end: 1055fa203; -[SCMapUserNetworkingImpl initWithRequestModifier:metadataService:cacheManager:circumstanceEngine:performer:] */

undefined1 *
FUN_1055fa0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9548;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055fa204; end: 1055fa53f; -[SCMapUserNetworkingImpl executeRequest:completion:] */

void FUN_1055fa204(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf264a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf264a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13bd20(param_3);
    lVar5 = lVar3;
    func_0x00010bf27460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1055fa540;
      puStack_70 = &UNK_11084a9e8;
      _objc_retain(lVar1);
      lStack_68 = lVar1;
      _objc_retain(param_4);
      lStack_60 = lVar5;
      uStack_58 = param_4;
      _objc_retain(lVar5);
      func_0x000100162d98("APPSTORE",&puStack_88);
      _objc_release(lStack_60);
      _objc_release(uStack_58);
      lVar2 = lStack_68;
      goto LAB_1055fa4d8;
    }
  }
  lVar2 = param_3;
  func_0x00010bfe02c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be91d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c29fa60(param_3);
  lVar2 = param_1;
  func_0x00010bde8660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c25f600(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_90);
LAB_1055fa4d8:
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055fa540; end: 1055fa553;  */

void FUN_1055fa540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055fa550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1055fa554; end: 1055fa647;  */

void FUN_1055fa554(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_x4;
  long in_x5;
  
  _objc_retain(in_x4);
  if (in_x5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c13bd20(uVar1);
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1,0);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf264a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010bdd7ce0();
      _objc_release(param_1);
    }
    _objc_release(uVar1);
    _objc_release(0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,in_x5);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 1055fa648; end: 1055fa6f7; -[SCMapUserNetworkingImpl _requestWithURL:headers:body:] */

void FUN_1055fa648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055fa6f8; end: 1055fa733;  */

void FUN_1055fa6f8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055fa734; end: 1055fa7a7; -[SCMapUserNetworkingImpl _contextWithVisibility:] */

void FUN_1055fa734(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055fa7a8; end: 1055fa8b3; -[SCMapUserNetworkingImpl _cacheResponse:forRequest:withUrl:] */

void FUN_1055fa7a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf264a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf264a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bf264a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d1e0();
    func_0x00010bf26a60(uVar2,param_2,param_3,param_5,lVar3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055fa8b4; end: 1055fa907; -[SCMapUserNetworkingImpl .cxx_destruct] */

void FUN_1055fa8b4(long param_1)

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



/* Entry: 1055fa908; end: 1055fa9af; -[SCConditionAndForecastResponseCacheObject initWithDate:weatherInfo:] */

undefined1 *
FUN_1055fa908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 1055fa9b0; end: 1055fa9b7; -[SCConditionAndForecastResponseCacheObject date] */

undefined8 FUN_1055fa9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055fa9b8; end: 1055fa9e7; -[SCConditionAndForecastResponseCacheObject setDate:] */

void FUN_1055fa9b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1055fa9e8; end: 1055fa9ef; -[SCConditionAndForecastResponseCacheObject weatherInfo] */

undefined8 FUN_1055fa9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055fa9f0; end: 1055fa9f7; -[SCConditionAndForecastResponseCacheObject setWeatherInfo:] */

void FUN_1055fa9f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1055fa9f8; end: 1055faa27; -[SCConditionAndForecastResponseCacheObject .cxx_destruct] */

void FUN_1055fa9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055faa28; end: 1055fb153;  */

undefined * FUN_1055faa28(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar18 = param_2;
  func_0x00010bfd5fe0();
  if ((int)lVar18 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar18 = param_2;
    func_0x00010bf5e420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ae40();
    _objc_release(lVar18);
    lVar18 = param_2;
    func_0x00010bf5e420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294d80();
    _objc_release(lVar18);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    lVar18 = param_2;
    func_0x00010bf5e420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar18;
    func_0x00010bf98560();
    func_0x00010bf655e0((double)lVar14 / 1000.0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    lVar18 = param_2;
    func_0x00010bf5e420();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar18;
    func_0x00010bf45ce0();
    uVar1 = (int)lVar14 - 1;
    puVar19 = (undefined8 *)0x0;
    if (uVar1 < 0xb) {
      puVar19 = (undefined8 *)((ulong)uVar1 + 1);
    }
    _objc_release(lVar18);
    lVar18 = param_2;
    func_0x00010bfd3dc0();
    lVar14 = 0;
    if ((int)lVar18 != 0) {
      lVar18 = param_2;
      func_0x00010befd580();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar18;
      func_0x00010c09e300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
    }
    lVar18 = param_2;
    func_0x00010bf632a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar18;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(lVar3);
    param_4 = &uStack_160;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar17 = *plStack_150;
      do {
        lVar15 = 0;
        do {
          if (*plStack_150 != lVar17) {
            _objc_enumerationMutation(lVar3);
          }
          uVar20 = *(ulong *)(lStack_158 + lVar15 * 8);
          uVar5 = uVar20;
          func_0x00010bfd9780();
          if ((uVar5 & 1) == 0) {
            _objc_release(lVar3);
            puVar8 = PTR____NSArray0__struct_11034ab48;
            goto LAB_1055faf04;
          }
          uVar5 = uVar20;
          func_0x00010bfd6240();
          if ((int)uVar5 == 0) {
            uVar5 = uVar20;
            func_0x00010c0da3e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26ae40();
            uVar24 = uVar6;
            _objc_release(uVar5);
            uVar5 = uVar20;
            func_0x00010c0da3e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26ae40();
            _objc_release(uVar5);
          }
          else {
            uVar5 = uVar20;
            func_0x00010bf65700(uVar20);
            fVar21 = (float)uVar6;
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26ae40();
            fVar23 = fVar21;
            _objc_release(uVar5);
            uVar6 = uVar20;
            func_0x00010c0da3e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26ae40();
            fVar22 = fVar23;
            _objc_release(uVar6);
            if (fVar23 <= fVar21) {
              fVar23 = fVar21;
            }
            uVar6 = (ulong)(uint)fVar23;
            uVar5 = uVar20;
            func_0x00010bf65700(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26ae40();
            fVar23 = fVar22;
            _objc_release(uVar5);
            uVar5 = uVar20;
            func_0x00010c0da3e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26ae40();
            _objc_release(uVar5);
            if (fVar23 <= fVar22) {
              fVar22 = fVar23;
            }
            uVar24 = (ulong)(uint)fVar22;
          }
          uVar5 = uVar20;
          func_0x00010bfd6240();
          uVar7 = uVar20;
          if ((int)uVar5 == 0) {
            func_0x00010c0da3e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar7;
            func_0x00010bf45ce0();
            switch((int)uVar5) {
            case 2:
              goto code_r0x0001055fadb4;
            case 3:
              goto code_r0x0001055fadcc;
            case 4:
              goto code_r0x0001055fadd4;
            case 5:
              goto code_r0x0001055fadbc;
            case 6:
              goto code_r0x0001055fade4;
            case 7:
              goto code_r0x0001055fadec;
            case 8:
              goto code_r0x0001055faddc;
            case 9:
              goto code_r0x0001055fadfc;
            case 10:
              goto code_r0x0001055fadc4;
            case 0xb:
              goto code_r0x0001055fadf4;
            }
          }
          else {
            func_0x00010bf65700();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar7;
            func_0x00010bf45ce0();
            switch((int)uVar5) {
            case 2:
code_r0x0001055fadb4:
              break;
            case 3:
code_r0x0001055fadcc:
              break;
            case 4:
code_r0x0001055fadd4:
              break;
            case 5:
code_r0x0001055fadbc:
              break;
            case 6:
code_r0x0001055fade4:
              break;
            case 7:
code_r0x0001055fadec:
              break;
            case 8:
code_r0x0001055faddc:
              break;
            case 9:
code_r0x0001055fadfc:
              break;
            case 10:
code_r0x0001055fadc4:
              break;
            case 0xb:
code_r0x0001055fadf4:
            }
          }
          _objc_release(uVar7);
          puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
          uVar5 = uVar20;
          func_0x00010bfd6240();
          if ((int)uVar5 == 0) {
            func_0x00010c0da3e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010bf65700(uVar20);
            _objc_retainAutoreleasedReturnValue();
          }
          uVar5 = uVar20;
          func_0x00010bf98560();
          func_0x00010bf655e0((double)(long)uVar5 / 1000.0,puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar20);
          puVar9 = (undefined8 *)PTR_PTR_1126bc2d8;
          _objc_alloc();
          func_0x00010c050f60(uVar6,uVar24);
          param_4 = puVar9;
          func_0x00010befa120(puVar13);
          _objc_release(puVar9);
          _objc_release(puVar8);
          lVar15 = lVar15 + 1;
        } while (lVar4 != lVar15);
        param_4 = &uStack_160;
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    _objc_retain(puVar13);
    puVar8 = puVar13;
LAB_1055faf04:
    _objc_release(puVar13);
    _objc_release(lVar3);
    _objc_release(lVar18);
    puVar13 = puVar8;
    func_0x00010bf529e0();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR_PTR_1126bc2d0;
      _objc_alloc();
      lVar18 = param_2;
      func_0x00010bfe47e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar18;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar25 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      _objc_retain(lVar3);
      lVar4 = lVar3;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar17 = *plStack_150;
        do {
          lVar15 = 0;
          do {
            if (*plStack_150 != lVar17) {
              _objc_enumerationMutation(lVar3);
            }
            lVar16 = *(long *)(lStack_158 + lVar15 * 8);
            func_0x00010c26ae40(lVar16);
            puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf98560(lVar16);
            func_0x00010bf655e0((double)lVar16 / 1000.0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf45ce0();
            puVar12 = PTR_PTR_1126bc2d8;
            _objc_alloc(PTR_PTR_1126bc2d8);
            func_0x00010c050f60(uVar25,uVar25);
            func_0x00010befa120(puVar10);
            _objc_release(puVar12);
            _objc_release(puVar11);
            lVar15 = lVar15 + 1;
          } while (lVar4 != lVar15);
          lVar4 = lVar3;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar3);
      _objc_release(lVar3);
      func_0x00010c050f40(param_1);
      _objc_release(puVar10);
      _objc_release(lVar18);
      param_4 = puVar19;
    }
    _objc_release(puVar8);
    _objc_release(lVar14);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar18 = param_3;
  func_0x00010bfd6240();
  lVar14 = param_3;
  if ((int)lVar18 == 0) {
    lVar18 = param_3;
    func_0x00010bfd9780();
    if ((int)lVar18 != 0) {
      func_0x00010c0da3e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1055fb1bc;
    }
    lVar18 = 0;
  }
  else {
    func_0x00010bf65700();
    _objc_retainAutoreleasedReturnValue();
LAB_1055fb1bc:
    lVar18 = lVar14;
    func_0x00010bf98560();
    _objc_release(lVar14);
  }
  puVar19 = param_4;
  func_0x00010bfd6240();
  puVar9 = param_4;
  if ((int)puVar19 == 0) {
    puVar19 = param_4;
    func_0x00010bfd9780();
    if ((int)puVar19 == 0) {
      puVar19 = (undefined8 *)0x0;
      goto LAB_1055fb230;
    }
    func_0x00010c0da3e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf65700();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar19 = puVar9;
  func_0x00010bf98560();
  _objc_release(puVar9);
LAB_1055fb230:
  puVar13 = (undefined *)(ulong)((long)puVar19 < lVar18);
  if (lVar18 < (long)puVar19) {
    puVar13 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar13;
}



/* Entry: 1055fb154; end: 1055fb263;  */

ulong FUN_1055fb154(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = param_2;
  func_0x00010bfd6240();
  lVar4 = param_2;
  if ((int)lVar3 == 0) {
    lVar3 = param_2;
    func_0x00010bfd9780();
    if ((int)lVar3 != 0) {
      func_0x00010c0da3e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1055fb1bc;
    }
    lVar3 = 0;
  }
  else {
    func_0x00010bf65700();
    _objc_retainAutoreleasedReturnValue();
LAB_1055fb1bc:
    lVar3 = lVar4;
    func_0x00010bf98560();
    _objc_release(lVar4);
  }
  lVar4 = param_3;
  func_0x00010bfd6240();
  lVar1 = param_3;
  if ((int)lVar4 == 0) {
    lVar4 = param_3;
    func_0x00010bfd9780();
    if ((int)lVar4 == 0) {
      lVar4 = 0;
      goto LAB_1055fb230;
    }
    func_0x00010c0da3e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf65700();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar1;
  func_0x00010bf98560();
  _objc_release(lVar1);
LAB_1055fb230:
  uVar2 = (ulong)(lVar4 < lVar3);
  if (lVar3 < lVar4) {
    uVar2 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1055fb264; end: 1055fb2ef;  */

ulong FUN_1055fb264(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf98560();
  lVar2 = param_3;
  func_0x00010bf98560();
  if (lVar1 < lVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf98560(param_2);
    lVar2 = param_3;
    func_0x00010bf98560(param_3);
    uVar3 = (ulong)(lVar2 < lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1055fb2f0; end: 1055fb3a3; -[SCWeatherLocalizationProvider localizedWeatherCondition:] */

void FUN_1055fb2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (lRam00000001136bd370 != -1) {
    func_0x00010002a2fc(0x1136bd370,&PTR___NSConcreteGlobalBlock_11089ecd0);
  }
  lVar1 = lRam00000001136bd368;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = lRam00000001136bd368;
    func_0x00010c0e00e0(lRam00000001136bd368);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1055fb3a4; end: 1055fb653;  */

undefined ** FUN_1055fb3a4(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf6b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110df1538;
  ppuStack_d0 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1538,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110df1558;
  ppuStack_c8 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1558,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110df1578;
  ppuStack_c0 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1578,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110df1598;
  ppuStack_b8 = ppuVar5;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1598,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110df15b8;
  ppuStack_b0 = ppuVar6;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df15b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110df15d8;
  ppuStack_a8 = ppuVar7;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df15d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110df15f8;
  ppuStack_a0 = ppuVar8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df15f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR____CFConstantStringClassReference_110df1618;
  ppuStack_98 = ppuVar9;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1618,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110df1638;
  ppuStack_90 = ppuVar10;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1638,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR____CFConstantStringClassReference_110df1658;
  ppuStack_88 = ppuVar11;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1658,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &PTR____CFConstantStringClassReference_110df1678;
  ppuStack_80 = ppuVar12;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df1678,0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar15 = &ppuStack_d0;
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = ppuVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bd368;
  puRam00000001136bd368 = puVar14;
  _objc_release(uVar1);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  return (undefined **)(long)(((double)(long)pppuVar15 + -32.0) * 0.5555555555555556);
}



/* Entry: 1055fb654; end: 1055fb677; -[SCWeatherLocalizationProvider convertToCelciusFrom:] */

long FUN_1055fb654(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (long)(((double)param_3 + -32.0) * 0.5555555555555556);
}



/* Entry: 1055fb678; end: 1055fb69f; -[SCWeatherLocalizationProvider weatherConditionDescriptionFor:] */

undefined ** FUN_1055fb678(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_11089ecf0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 1055fb6a0; end: 1055fb79f; -[SCWeatherProvider initWithSessionRequestManager:snapTokenProvider:] */

undefined1 *
FUN_1055fb6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9558;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c184700(*(undefined8 *)((long)puVar1 + 0x20));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055fb7a0; end: 1055fba43; -[SCWeatherProvider fetchWeatherInfoForCoordinate:source:completionQueue:completion:] */

void FUN_1055fb7a0(double param_1,double param_2,long param_3,undefined8 param_4,undefined **param_5
                  ,long param_6,ulong param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  double dStack_c8;
  double dStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  uVar4 = param_7;
  _objc_retain();
  ppuVar7 = param_5;
  if ((param_6 != 0) && (param_7 != 0)) {
    dVar9 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar9)) {
        bVar1 = dVar9 < 1.1920928955078125e-07;
        bVar2 = dVar9 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((bVar2 || bVar1 != bVar3) ||
       (_CLLocationCoordinate2DIsValid(param_1,param_2), (uVar4 & 1) == 0)) {
      uStack_78 = *(undefined8 *)PTR__NSDebugDescriptionErrorKey_110345400;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110df16f8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1055fba44;
      puStack_90 = &UNK_11084aaa8;
      ppuVar7 = &puStack_a8;
      _objc_retain(param_7);
      puStack_88 = puVar6;
      uStack_80 = param_7;
      _objc_retain(puVar6);
      func_0x00010007380c(param_6,&puStack_a8);
      _objc_release(puStack_88);
      _objc_release(uStack_80);
    }
    else {
      puVar5 = *(undefined **)(param_3 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_3 + 0x18);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_b0,*(undefined8 *)(param_3 + 8));
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_1055fba58;
      puStack_100 = &UNK_11089eda8;
      lStack_f8 = param_3;
      dStack_c8 = param_1;
      dStack_c0 = param_2;
      _objc_retain(param_6);
      lStack_f0 = param_6;
      _objc_retain(param_7);
      ppuVar7 = &puStack_118;
      uStack_d8 = param_7;
      ppuStack_b8 = param_5;
      _objc_copyWeak(auStack_d0,auStack_b0);
      puStack_e8 = puVar6;
      puStack_e0 = puVar5;
      func_0x00010c0f7fc0(uVar8);
      _objc_destroyWeak(auStack_d0);
      _objc_release(uStack_d8);
      _objc_release(lStack_f0);
      _objc_destroyWeak(auStack_b0);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar7 + 9);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001055fba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_6 + 0x28) + 0x10))
            (*(long *)(param_6 + 0x28),*(undefined8 *)(param_6 + 0x20),0);
  return;
}



/* Entry: 1055fba44; end: 1055fba57;  */

void FUN_1055fba44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055fba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1055fba58; end: 1055fbd7f;  */

void FUN_1055fba58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  dVar10 = *(double *)(param_1 + 0x50);
  puVar1 = PTR_PTR_1126b6598;
  func_0x00010bf33f00(dVar10,*(undefined8 *)(param_1 + 0x58),PTR_PTR_1126b6598,param_2,0xc);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf64de0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3);
    _objc_release(lVar4);
    _objc_release(puVar3);
    if (dVar10 < 600.0) {
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1055fbd80;
      puStack_88 = &UNK_11084aaa8;
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar8);
      uStack_78 = uVar8;
      _objc_retain(lVar2);
      lStack_80 = lVar2;
      func_0x00010007380c(uVar9,&puStack_a0);
      _objc_release(lStack_80);
      _objc_release(uStack_78);
      goto LAB_1055fbd28;
    }
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  _objc_initWeak(auStack_a8,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1055fbdc4;
  puStack_d0 = &UNK_11089ed48;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(puVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puStack_c8 = puVar1;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = uVar8;
  _objc_retain(uVar9);
  ppuVar5 = &puStack_e8;
  uStack_b8 = uVar9;
  _objc_retainBlock();
  puStack_130 = puVar3;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1055fbf4c;
  puStack_118 = &UNK_11089ed78;
  _objc_retain(puVar1);
  uStack_f0 = *(undefined8 *)(param_1 + 0x60);
  puStack_110 = puVar1;
  _objc_copyWeak(auStack_f8,param_1 + 0x48);
  uStack_108 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(ppuVar5);
  ppuVar6 = &puStack_130;
  ppuStack_100 = ppuVar5;
  _objc_retainBlock(ppuVar6);
  puStack_158 = puVar3;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1055fc118;
  puStack_140 = &UNK_110859a38;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar8);
  ppuVar7 = &puStack_158;
  uStack_138 = uVar8;
  _objc_retainBlock(ppuVar7);
  func_0x00010bfa48e0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(ppuVar7);
  _objc_release(uStack_138);
  _objc_release(ppuVar6);
  _objc_release(ppuStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puStack_110);
  _objc_release(ppuVar5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
LAB_1055fbd28:
  _objc_release(lVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055fbd80; end: 1055fbdc3;  */

void FUN_1055fbd80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2a2d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055fbdc4; end: 1055fbf37;  */

void FUN_1055fbdc4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar3 == 0) goto LAB_1055fbf0c;
    lVar6 = param_3;
    FUN_1055faa28();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bc2e0;
    _objc_alloc(PTR_PTR_1126bc2e0);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009580(puVar4);
    _objc_release(puVar5);
    func_0x00010c1d0560(*(undefined8 *)(lVar3 + 0x20));
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055fbf38;
  puStack_70 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_2);
  uStack_68 = param_2;
  lStack_60 = lVar6;
  _objc_retain(lVar6);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(lVar6);
LAB_1055fbf0c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1055fbf38; end: 1055fbf4b;  */

void FUN_1055fbf38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055fbf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055fbf4c; end: 1055fc117;  */

void FUN_1055fbf4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1d0560();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126bc2e8;
  _objc_alloc_init(PTR_PTR_1126bc2e8);
  func_0x00010c08b3e0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c1b9120(puVar2);
  func_0x00010c08b3e0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c1be5e0(param_2,puVar2);
  func_0x00010c1e9420(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c272ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b4960;
  func_0x00010bf58160(PTR_PTR_1126b4960);
  _objc_retainAutoreleasedReturnValue();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  _objc_opt_class(PTR_PTR_1126bc2f0);
  func_0x00010c25f4c0(param_3);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055fc118; end: 1055fc127;  */

void FUN_1055fc118(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001055fc124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 1055fc128; end: 1055fc1ef; -[SCWeatherProvider .cxx_destruct] */

void FUN_1055fc128(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055fc1f0; end: 1055fc2c3; -[SCWeatherServicesEntryPoint _weatherProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055fc1f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bc300;
  _objc_alloc(PTR_PTR_1126bc300);
  lVar2 = param_1 + _DAT_112726a10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726a14;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0455c0(puVar1,param_2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055fc2c4; end: 1055fc2df; -[SCWeatherServicesEntryPoint _weatherLocalizationProvider] */

void FUN_1055fc2c4(void)

{
  _objc_alloc_init(PTR_PTR_1126bc308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055fc2e0; end: 1055fc333; -[SCWeatherServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055fc2e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726a0c,0);
  _objc_destroyWeak(param_1 + _DAT_112726a10);
  _objc_destroyWeak(param_1 + _DAT_112726a14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726a18);
  return;
}



/* Entry: 1055fc334; end: 1055fc3a7; -[SCGrapheneNextGenLocationServicesMetric2 init] */

undefined1 * FUN_1055fc334(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9560;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1055fc3a8; end: 1055fc53b;  */

char * FUN_1055fc3a8(double param_1,long param_2,char *param_3,undefined1 *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  char *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain();
  puStack_a8 = unaff_x21;
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x22 = auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    param_5 = (long)(param_1 * 1000.0);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11089ee38);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = (undefined1 *)puVar6;
    }
    pcVar1 = param_3;
    _objc_release();
    puStack_a8 = (undefined1 *)&uStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_c0;
  pcStack_88 = FUN_1055fc53c;
  puStack_b0 = unaff_x22;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = PTR_PTR_1126e9568;
  pcStack_c0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_c0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = param_4;
    _objc_release(uVar4);
    lVar5 = param_5;
    func_0x00010bf52240();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(long *)((long)ppcVar3 + 0x10) = lVar5;
    _objc_release(uVar4);
    *(char *)((long)ppcVar3 + 0x18) = '\x01';
    func_0x00010befa200(*(undefined8 *)((long)ppcVar3 + 8));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (char *)ppcVar3;
}



/* Entry: 1055fc53c; end: 1055fc5fb; -[SCLocationManagerProviderObserver initWithLocationManager:locationRequest:] */

undefined1 *
FUN_1055fc53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9568;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf52240();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    func_0x00010befa200(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055fc5fc; end: 1055fc63f; -[SCLocationManagerProviderObserver dealloc] */

void FUN_1055fc5fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_1126e9568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1055fc640; end: 1055fc647; -[SCLocationManagerProviderObserver locationObserverWantsActiveLocationMonitoring] */

void FUN_1055fc640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_wantsActiveLocationMonitoring_112686088);
  return;
}



/* Entry: 1055fc648; end: 1055fc653; -[SCLocationManagerProviderObserver locationObserverDispatchQueue] */

/* WARNING: Removing unreachable block (ram,0x000100081a10) */
/* WARNING: Removing unreachable block (ram,0x000100081a18) */
/* WARNING: Removing unreachable block (ram,0x000100081a1c) */
/* WARNING: Removing unreachable block (ram,0x000100081a44) */
/* WARNING: Removing unreachable block (ram,0x000100081a74) */
/* WARNING: Removing unreachable block (ram,0x000100081a34) */
/* WARNING: Removing unreachable block (ram,0x000100081a3c) */
/* WARNING: Removing unreachable block (ram,0x000100081a24) */
/* WARNING: Removing unreachable block (ram,0x000100081a54) */

void FUN_1055fc648(void)

{
  ulong uVar1;
  
  uVar1 = 0x15;
  func_0x000100081968();
  if ((uVar1 & 0xfffffffffffffffd) == 1) {
    func_0x000107c312a8();
    func_0x000107c61180();
  }
  else {
    func_0x000107c60f2c(0x15,0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055fc654; end: 1055fc65b; -[SCLocationManagerProviderObserver locationObserverAttributedFeature] */

void FUN_1055fc654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_attributedFeature_1125a1198);
  return;
}



/* Entry: 1055fc65c; end: 1055fc663; -[SCLocationManagerProviderObserver locationObserverDesiredAccuracy] */

void FUN_1055fc65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_desiredLocationAccuracy_1125b9440);
  return;
}



/* Entry: 1055fc664; end: 1055fc66b; -[SCLocationManagerProviderObserver locationObserverDesiredDistanceFilter] */

void FUN_1055fc664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_desiredDistanceFilter_1125b9428);
  return;
}



/* Entry: 1055fc66c; end: 1055fc673; -[SCLocationManagerProviderObserver locationObserverWantsActiveHeadingMonitoring] */

void FUN_1055fc66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_wantsActiveHeadingMonitoring_112686080);
  return;
}



/* Entry: 1055fc674; end: 1055fc67b; -[SCLocationManagerProviderObserver locationObserverWantsBackgroundLocationUpdates] */

void FUN_1055fc674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_wantsBackgroundLocationMonitorin_112686098);
  return;
}



/* Entry: 1055fc67c; end: 1055fc69b; -[SCLocationManagerProviderObserver unobserve] */

void FUN_1055fc67c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_removeObserver__112628f78,param_1);
    return;
  }
  return;
}



/* Entry: 1055fc69c; end: 1055fc6cb; -[SCLocationManagerProviderObserver .cxx_destruct] */

void FUN_1055fc69c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055fc6cc; end: 1055fc6e3; -[SCLocationObserverWeakHook observer] */

void FUN_1055fc6cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055fc6e4; end: 1055fc6eb; -[SCLocationObserverWeakHook .cxx_destruct] */

void FUN_1055fc6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1055fc6ec; end: 1055fc76f;  */

void FUN_1055fc6ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055fc770; end: 1055fc7cb; -[SCLocationManager setVisitMonitoringEnabled:] */

void FUN_1055fc770(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1055fc7cc;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 1055fc7cc; end: 1055fc7e7;  */

void FUN_1055fc7cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c24f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_startMonitoringVisits_112671788);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c256350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_stopMonitoringVisits_1126732f8);
  return;
}



/* Entry: 1055fc7e8; end: 1055fc843; -[SCLocationManager setSignificantLocationChangeMonitoringEnabled:] */

void FUN_1055fc7e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1055fc844;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 1055fc844; end: 1055fc85f;  */

void FUN_1055fc844(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c24f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_startMonitoringSignificantLocati_112671760);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c256310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_stopMonitoringSignificantLocatio_1126732e8);
  return;
}



/* Entry: 1055fc860; end: 1055fca43; -[SCLocationManager removeObserver:] */

void FUN_1055fc860(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = param_3;
  func_0x00010c09f020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfa28e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126bc330;
  func_0x00010c277860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    _objc_getAssociatedObject(param_3,0x1136bd378);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c09f0c0();
  lVar1 = param_3;
  func_0x00010c09f020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(puVar3);
  _objc_retain(lVar1);
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1055fca44; end: 1055fcb1f;  */

void FUN_1055fca44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e1300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  if (lVar2 != 0 && lVar1 != 0) {
    func_0x00010c12d360(lVar2,param_2,lVar1);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0883a0(uVar3);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
    puVar4 = PTR_PTR_1126bc340;
    func_0x00010c0e13c0(PTR_PTR_1126bc340,param_2,*(undefined8 *)(param_1 + 0x38),uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_2,puVar4);
    _objc_release(puVar4);
  }
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x40));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa28e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be86bc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110df1838,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1055fcb20; end: 1055fcc87; -[SCLocationManager setObserverStateDidChangeForObserver:] */

void FUN_1055fcb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1055fcbb0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1055fcc88; end: 1055fcc93; -[SCLocationManager requestLocationPermissionWithCompletionHandler:] */

void FUN_1055fcc88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestLocationPermissionWithReq_11262b128,2,param_3);
  return;
}



/* Entry: 1055fcc94; end: 1055fcf1f; -[SCLocationManager requestLocationPermissionWithRequestType:completionHandler:] */

void FUN_1055fcc94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (lRam00000001136bd380 != -1) {
    func_0x00010002a2fc(0x1136bd380,&PTR___NSConcreteGlobalBlock_11089eef8);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 1055fcf20; end: 1055fcf33;  */

void FUN_1055fcf20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055fcf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055fcf34; end: 1055fcfbb;  */

void FUN_1055fcf34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x28) == 3) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172fe0();
    _objc_release(uVar1);
    func_0x00010c134900(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    ppuVar6 = &PTR____CFConstantStringClassReference_110df1878;
  }
  else {
    func_0x00010c136fc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    ppuVar6 = &PTR____CFConstantStringClassReference_110df1898;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  _objc_retain(ppuVar6);
  if (lVar2 != 0) {
    plVar7 = *(long **)(lVar2 + 8);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f2de043;
    }
    else {
      ppuVar3 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar3 = (undefined **)&UNK_11089f760;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11089f760,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  ppuVar4 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105604f24;
  if (ppuVar5 != (undefined **)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_a0 = ppuVar4;
    ppuStack_98 = ppuVar6;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar5[1] + 0x18))(ppuVar5[1],&UNK_11089f800,&uStack_c0,ppuVar3);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1055fcfbc; end: 1055fcfc7; -[SCLocationManager fetchLocationAuthorized:] */

void FUN_1055fcfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchLocationAuthorized_onQueue__1125c7a08,param_3,
             PTR___dispatch_main_q_11034be20);
  return;
}



/* Entry: 1055fcfc8; end: 1055fcfd3; -[SCLocationManager fetchLocationAuthorizationStatus:] */

void FUN_1055fcfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchLocationAuthorizationStatus_1125c79f8,param_3,
             PTR___dispatch_main_q_11034be20);
  return;
}



/* Entry: 1055fcfd4; end: 1055fd237;  */

void FUN_1055fcfd4(double param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x00010bf940a0(*(undefined8 *)(param_2 + 0x20));
  if ((*(byte *)(*(long *)(param_2 + 0x28) + 0xb0) & 1) != 0) {
    return;
  }
  func_0x00010c09eaa0(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c18c1c0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30));
  func_0x00010bf86ee0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30));
  if ((0.0 < param_1) || (func_0x00010bf86ee0(*(undefined8 *)(param_2 + 0x30)), 0.0 < param_1)) {
    func_0x00010bf86ee0(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c190a20(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30));
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010c28d840();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x00010bf01a00();
  }
  iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
  func_0x00010bf01a20();
  if (iVar1 != iVar2) {
    func_0x00010c1674a0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30));
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010c28d840();
  if (iVar1 == 0) {
    func_0x00010bf940a0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0xa8));
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0xa8);
    *(undefined8 *)(*(long *)(param_2 + 0x28) + 0xa8) = 0;
    _objc_release(uVar3);
    func_0x00010be59200(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c256dc0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30));
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x70);
    puVar6 = PTR_PTR_1126bc340;
    func_0x00010c256fc0(PTR_PTR_1126bc340);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  else {
    if (*(char *)(param_2 + 0x48) == '\x01') {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x28);
      func_0x00010c06cf60();
      if (iVar1 != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x68);
        uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
        func_0x00010bf01a20(uVar3);
        FUN_105604188(uVar5,uVar3,1);
      }
    }
    puVar6 = PTR_PTR_1126bc330;
    func_0x00010c277860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0xa8);
    *(undefined **)(*(long *)(param_2 + 0x28) + 0xa8) = puVar6;
    _objc_release(uVar3);
    func_0x00010bf17a60(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0xa8));
    func_0x00010be58f40(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c2515c0(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30));
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x70);
    puVar6 = PTR_PTR_1126bc340;
    func_0x00010c251dc0(PTR_PTR_1126bc340);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar6);
    if (*(long *)(*(long *)(param_2 + 0x28) + 0x98) != 0) goto LAB_1055fd200;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(*(long *)(param_2 + 0x28) + 0x98);
    *(undefined **)(*(long *)(param_2 + 0x28) + 0x98) = puVar4;
  }
  _objc_release(puVar6);
LAB_1055fd200:
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010c28d820();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c251590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_startUpdatingHeading_112671f88);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c256d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_stopUpdatingHeading_112673588);
  return;
}



/* Entry: 1055fd238; end: 1055fd4fb; -[SCLocationManager _locationManagerStateFromObservers] */

void FUN_1055fd238(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uStack_164;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = *(double *)PTR__kCLLocationAccuracyThreeKilometers_110349b90;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar15 = 0.0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  lVar6 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar6 == 0) {
    _objc_release(lVar10);
    uStack_164 = 0;
    dVar18 = *(double *)PTR__kCLDistanceFilterNone_110349b68;
    dVar19 = 1.79769313486232e+308;
  }
  else {
    uVar13 = 0;
    uStack_164 = 0;
    dVar19 = 1.79769313486232e+308;
    dVar18 = *(double *)PTR__kCLDistanceFilterNone_110349b68;
    do {
      puVar4 = PTR_s_locationObserverWantsBackgroundL_112605648;
      puVar3 = PTR_s_locationObserverWantsActiveHeadi_112605638;
      puVar2 = PTR_s_locationObserverDesiredDistanceF_112605628;
      puVar8 = PTR_s_locationObserverDesiredAccuracy_112605620;
      lVar11 = 0;
      dVar17 = dVar16;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        uVar14 = *(ulong *)(lVar11 * 8);
        uVar7 = uVar14;
        func_0x00010c09f0c0();
        if ((int)uVar7 != 0) {
          func_0x00010befa120(puVar5);
          uStack_164 = 1;
        }
        if ((uVar13 & 1) == 0) {
          uVar13 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar3);
          if ((uVar13 & 1) == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar14;
            func_0x00010c09f0a0();
          }
        }
        else {
          uVar13 = 1;
        }
        dVar16 = dVar17;
        if ((int)uVar7 != 0) {
          uVar7 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar8);
          if (((uVar7 & 1) != 0) && (func_0x00010c09f040(uVar14), dVar16 = dVar15, dVar17 <= dVar15)
             ) {
            dVar16 = dVar17;
          }
          uVar7 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar2);
          dVar17 = dVar18;
          if (((uVar7 & 1) != 0) && (func_0x00010c09f060(uVar14), dVar17 = dVar15, dVar19 <= dVar15)
             ) {
            dVar17 = dVar19;
          }
          dVar19 = dVar17;
          _objc_opt_respondsToSelector(uVar14,puVar4);
          if ((uVar14 & 1) != 0) {
            func_0x00010c09f0e0();
          }
        }
        lVar11 = lVar11 + 1;
        dVar17 = dVar16;
      } while (lVar6 != lVar11);
      lVar6 = lVar10;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    _objc_release(lVar10);
    if ((int)uVar13 != 0) {
      func_0x00010bfe0360();
    }
  }
  if (1.79769313486232e+308 <= dVar19) {
    dVar19 = dVar18;
  }
  puVar8 = PTR_PTR_1126bc318;
  _objc_alloc();
  uVar13 = (ulong)uStack_164;
  func_0x00010c059aa0(dVar16,dVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  puVar8 = PTR_PTR_1126bc330;
  func_0x00010c277860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  uVar12 = *(undefined8 *)(puVar5 + 0x20);
  _objc_retain(puVar8);
  _objc_retain(uVar13);
  func_0x00010c0f7fc0(uVar12);
  _objc_release(puVar8);
  _objc_release(uVar13);
  _objc_release(puVar8);
  _objc_release(uVar13);
  return;
}



/* Entry: 1055fd4fc; end: 1055fd5cb; -[SCLocationManager _didReceiveLocations:] */

void FUN_1055fd4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110df1918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055fd5cc;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  _objc_release(puStack_38);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1055fd5cc; end: 1055fd82b;  */

void FUN_1055fd5cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  long lStack_150;
  byte bStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_release(lVar4);
  func_0x00010c1bf6c0(*(undefined8 *)(param_1 + 0x28));
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  _objc_retain(lVar11);
  lVar5 = lVar11;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar5 != 0) {
    lVar12 = *plStack_130;
    do {
      puVar2 = PTR_s_onLocationUpdate__112616e18;
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        uVar10 = *(ulong *)(lStack_138 + lVar9 * 8);
        uVar6 = uVar10;
        _objc_opt_respondsToSelector(uVar10,puVar2);
        iVar3 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010c06cf60();
        if ((iVar3 != 0) && (uVar7 = uVar10, func_0x00010c09f0c0(), (int)uVar7 != 0)) {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
          uVar7 = uVar10;
          _objc_opt_class(uVar10);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          FUN_105603ea0(uVar8,uVar7,1);
          _objc_release(uVar7);
        }
        if ((uVar6 & 1) != 0) {
          uVar7 = uVar10;
          func_0x00010c09f080(uVar10);
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = puVar1;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_1055fd82c;
          puStack_160 = &UNK_11084d5f8;
          uStack_158 = uVar10;
          bStack_148 = (byte)uVar6 & 1;
          _objc_retain(lVar4);
          lStack_150 = lVar4;
          func_0x00010007380c(uVar7,&puStack_178);
          _objc_release(uVar7);
          _objc_release(lStack_150);
        }
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar11;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar11);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x30));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar4 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0e5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar4 + 0x20),PTR_s_onLocationUpdate__112616e18,
               *(undefined8 *)(lVar4 + 0x28));
    return;
  }
  return;
}



/* Entry: 1055fd82c; end: 1055fd847;  */

void FUN_1055fd82c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0e5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_onLocationUpdate__112616e18,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1055fd848; end: 1055fd903; -[SCLocationManager locationManager:didUpdateLocations:] */

void FUN_1055fd848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_4);
  func_0x00010c277640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c06cf60();
  if ((int)lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf01a20(uVar3);
    FUN_105603d88(uVar4,uVar3,1);
  }
  uVar3 = param_4;
  func_0x00010c089820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55780(param_1);
  _objc_release(uVar3);
  func_0x00010bdff4c0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055fd904; end: 1055fda77; -[SCLocationManager _logLocationReceivedPerBucketIfNecessary:] */

void FUN_1055fd904(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
      *(undefined1 *)(param_2 + 0xa0) = 1;
      uVar2 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010bfe4080(param_4);
      FUN_105604414(uVar2,(long)param_1);
      puVar1 = PTR_PTR_1126ae4e0;
      func_0x00010bfc50a0(PTR_PTR_1126ae4e0);
      FUN_105604f24(*(undefined8 *)(param_2 + 0x68),puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar3 = param_1;
    func_0x00010c26f320(*(undefined8 *)(param_2 + 0x98));
    param_1 = param_1 - dVar3;
    _objc_release(puVar1);
    func_0x00010bfe4080(param_4);
    if (dVar3 < 10.0) {
      dVar3 = param_1;
      func_0x00010be55760(param_2);
    }
    func_0x00010bfe4080(param_4);
    if (dVar3 < 35.0) {
      dVar3 = param_1;
      func_0x00010be55760(param_2);
    }
    func_0x00010bfe4080(param_4);
    if (dVar3 < 70.0) {
      dVar3 = param_1;
      func_0x00010be55760(param_2);
    }
    func_0x00010bfe4080(param_4);
    if (dVar3 < 100.0) {
      func_0x00010be55760(param_1,param_2);
    }
    func_0x00010be55760(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055fda78; end: 1055fdb07; -[SCLocationManager _logLocationReceivedForBucketIfNecessary:duration:] */

void FUN_1055fda78(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x90);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d0560(*(undefined8 *)(param_2 + 0x90));
    FUN_1056042a0(*(undefined8 *)(param_2 + 0x68),param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055fdb08; end: 1055fdbd7; -[SCLocationManager locationManager:didUpdateHeading:] */

void FUN_1055fdb08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110df19d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055fdbd8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  _objc_release(puStack_38);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1055fdbd8; end: 1055fdd7b;  */

void FUN_1055fdbd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1a7b60(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_130;
    do {
      puVar1 = PTR_s_onLocationHeadingChange__112616df8;
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(ulong *)(lStack_138 + lVar8 * 8);
        uVar2 = uVar5;
        _objc_opt_respondsToSelector(uVar5,puVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = uVar5;
          func_0x00010c09f080(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_168 = 0xc2000000;
          pcStack_160 = FUN_1055fdd7c;
          puStack_158 = &UNK_110841f80;
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          uStack_150 = uVar5;
          _objc_retain(uVar6);
          uStack_148 = uVar6;
          func_0x00010007380c(uVar2,&puStack_170);
          _objc_release(uVar2);
          _objc_release(uStack_148);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bf940a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e4f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + 0x20),PTR_s_onLocationHeadingChange__112616df8,
             *(undefined8 *)(lVar3 + 0x28));
  return;
}



/* Entry: 1055fdd7c; end: 1055fdd87;  */

void FUN_1055fdd7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onLocationHeadingChange__112616df8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055fdd88; end: 1055fdeab; -[SCLocationManager locationManager:didFailWithError:] */

void FUN_1055fdd88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf3ec40();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105604a0c(uVar3,puVar2,1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1055fdeac; end: 1055fe097;  */

void FUN_1055fdeac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110daeeb8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_140;
    do {
      puVar1 = PTR_s_onLocationError__112616df0;
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lStack_148 + lVar8 * 8);
        uVar3 = uVar6;
        _objc_opt_respondsToSelector(uVar6,puVar1);
        if ((uVar3 & 1) != 0) {
          uVar3 = uVar6;
          func_0x00010c09f080(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_1055fe098;
          puStack_168 = &UNK_110841f80;
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          uStack_160 = uVar6;
          _objc_retain(uVar2);
          uStack_158 = uVar2;
          func_0x00010007380c(uVar3,&puStack_180);
          _objc_release(uVar3);
          _objc_release(uStack_158);
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar5;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bf940a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 0x20),PTR_s_onLocationError__112616df0,
             *(undefined8 *)(lVar4 + 0x28));
  return;
}



/* Entry: 1055fe098; end: 1055fe0a3;  */

void FUN_1055fe098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onLocationError__112616df0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055fe0a4; end: 1055fe13b; -[SCLocationManager locationManager:didVisit:] */

void FUN_1055fe0a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1055fe13c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1055fe13c; end: 1055fe2e3;  */

void FUN_1055fe13c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x00010c23c3e0();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_130;
    do {
      puVar1 = PTR_s_onLocationVisit_significantChang_112616e20;
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(lStack_138 + lVar9 * 8);
        uVar4 = uVar6;
        _objc_opt_respondsToSelector(uVar6,puVar1);
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar6;
          func_0x00010c09f080(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_1055fe2e4;
          puStack_160 = &UNK_11084d5f8;
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          uStack_158 = uVar6;
          _objc_retain(uVar7);
          uStack_148 = SUB81(puVar2,0);
          uStack_150 = uVar7;
          func_0x00010007380c(uVar4,&puStack_178);
          _objc_release(uVar4);
          _objc_release(uStack_150);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar5;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar5 + 0x20),PTR_s_onLocationVisit_significantChang_112616e20,
             *(undefined8 *)(lVar5 + 0x28),*(undefined1 *)(lVar5 + 0x30));
  return;
}



/* Entry: 1055fe2e4; end: 1055fe2f3;  */

void FUN_1055fe2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onLocationVisit_significantChang_112616e20,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 1055fe2f4; end: 1055fe3ef;  */

void FUN_1055fe2f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar7);
  puVar5 = auStack_c8;
  lVar6 = 0x10;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar2 = *(long *)(lStack_108 + lVar6 * 8);
        (**(code **)(lVar2 + 0x10))(lVar2,*(undefined1 *)(param_3 + 0x28));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar5 = auStack_c8;
      lVar6 = 0x10;
      lVar1 = lVar7;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126bc350;
  if (((puVar4 != (undefined8 *)0x0) && (puVar5 != (undefined1 *)0x0)) && (lVar6 != 0)) {
    _objc_retain(lVar6);
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    _objc_alloc(puVar3);
    func_0x00010c026d80(param_2);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c251c60(uVar9,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1055fe3f0; end: 1055fe4c7; -[SCLocationManager requestLocationWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:] */

void FUN_1055fe3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc350;
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_alloc(puVar1);
    func_0x00010c026d80(param_2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    func_0x00010c251c60(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}


