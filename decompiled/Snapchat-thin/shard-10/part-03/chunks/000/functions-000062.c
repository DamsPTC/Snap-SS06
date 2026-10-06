/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dfec8c; end: 107dfecef;  */

void FUN_107dfec8c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d7ee8;
    _objc_alloc(PTR_PTR_1126d7ee8);
    func_0x00010c047d20();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dfecf0; end: 107dfecfb; -[SCMemoriesMashupUtilsSaveDataChangeRequest .cxx_destruct] */

void FUN_107dfecf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dfecfc; end: 107dfed07; -[SCMemoriesMashupUtilsSaveDataChangeRequest table] */

undefined * FUN_107dfecfc(void)

{
  return &UNK_10f45e05e;
}



/* Entry: 107dfed08; end: 107dfed4f; -[SCMemoriesMashupUtilsSaveDataChangeRequest createTableWithSQLite:] */

void FUN_107dfed08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dee7758,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107dfed50; end: 107dff0d7; -[SCMemoriesMashupUtilsSaveDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107dfed50(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_107dfec8c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107dff0d8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f45e100);
    if (lVar6 == 0) goto LAB_107dff074;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_107dff074;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d7ee8);
    func_0x00010c21c9a0(puVar7);
LAB_107dff05c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f45e0c7);
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
            _objc_opt_class(PTR_PTR_1126d7ee8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107dff080;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_107dff080;
    }
    FUN_107dfec8c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107dff0d8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f45e146);
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
        _objc_opt_class(PTR_PTR_1126d7ee8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_107dff05c;
      }
    }
LAB_107dff074:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_107dff080:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107dff0d8; end: 107dff2b7;  */

ulong FUN_107dff0d8(ulong param_1,char *param_2)

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
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_107dff1d8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_107dff1d8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_107dff198;
    uVar9 = 0;
  }
  else {
LAB_107dff198:
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
LAB_107dff1d8:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c14b140(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x000100ab13ac(param_1,6,pcVar5,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dff2b8; end: 107dff2c3; +[SCMemoriesMashupUtilsSnapLevelFailureData table] */

undefined * FUN_107dff2b8(void)

{
  return &UNK_10f45e196;
}



/* Entry: 107dff2c4; end: 107dff423; +[SCMemoriesMashupUtilsSnapLevelFailureData immutableObjectParse:bufferSize:] */

void FUN_107dff2c4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d7ef8;
  _objc_alloc(PTR_PTR_1126d7ef8);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar9 = (undefined *)0x0;
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
    if (uVar3 < 7) {
      uVar8 = 0;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5));
      if (uVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)((long)piVar1 + uVar6);
      }
      if ((8 < uVar3) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar5)), uVar6 != 0)) {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107dff3c4;
      }
    }
    puVar9 = (undefined *)0x0;
  }
LAB_107dff3c4:
  func_0x00010c047f60(puVar4,param_2,puVar7,uVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107dff424; end: 107dff447; +[SCMemoriesMashupUtilsSnapLevelFailureData objectClassFunctionPointer] */

undefined1  [16] FUN_107dff424(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107dff440;
  auVar1._0_8_ = 0x107dff438;
  return auVar1;
}



/* Entry: 107dff448; end: 107dff4ab;  */

void FUN_107dff448(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d7ef8;
    _objc_alloc(PTR_PTR_1126d7ef8);
    func_0x00010c047f60();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dff4ac; end: 107dff4db; -[SCMemoriesMashupUtilsSnapLevelFailureDataChangeRequest .cxx_destruct] */

void FUN_107dff4ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dff4dc; end: 107dff4e7; -[SCMemoriesMashupUtilsSnapLevelFailureDataChangeRequest table] */

undefined * FUN_107dff4dc(void)

{
  return &UNK_10f45e196;
}



/* Entry: 107dff4e8; end: 107dff52f; -[SCMemoriesMashupUtilsSnapLevelFailureDataChangeRequest createTableWithSQLite:] */

void FUN_107dff4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dee77e3,0xb1,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107dff530; end: 107dff8b7; -[SCMemoriesMashupUtilsSnapLevelFailureDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107dff530(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_107dff448(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107dff8b8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f45e205);
    if (lVar6 == 0) goto LAB_107dff854;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_107dff854;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d7ef8);
    func_0x00010c21c9a0(puVar7);
LAB_107dff83c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f45e1c0);
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
            _objc_opt_class(PTR_PTR_1126d7ef8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107dff860;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_107dff860;
    }
    FUN_107dff448(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107dff8b8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f45e264);
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
        _objc_opt_class(PTR_PTR_1126d7ef8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_107dff83c;
      }
    }
LAB_107dff854:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_107dff860:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107dff8b8; end: 107dff9fb;  */

ulong FUN_107dff8b8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2413e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_107dff9fc(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bfa0020(param_2);
  uVar7 = param_2;
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_107dff9fc(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,8,uVar8 & 0xffffffff);
  func_0x0001001ce354(param_1,6,uVar6,0);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dff9fc; end: 107dffb2b;  */

undefined8 FUN_107dff9fc(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_107dffadc;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_107dffadc;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_107dffa9c;
    param_1 = 0;
  }
  else {
LAB_107dffa9c:
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
LAB_107dffadc:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dffb2c; end: 107dffc37; -[SCMemoriesPreviewShareSheetExportScope initWithExternalShareSheetExportPolicy:presentingContainer:previewTranscoding:hasAnimatedOrExternalAudioContent:memoriesEntryType:scopeDelegate:] */

undefined1 *
FUN_107dffb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb470;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined4 *)((long)puVar1 + 0xc) = param_7;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dffc38; end: 107dffc3f; -[SCMemoriesPreviewShareSheetExportScope hasAnimatedOrExternalAudioContent] */

undefined1 FUN_107dffc38(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dffc40; end: 107dffc47; -[SCMemoriesPreviewShareSheetExportScope memoriesEntryType] */

undefined4 FUN_107dffc40(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107dffc48; end: 107dffc4f; -[SCMemoriesPreviewShareSheetExportScope exportPolicy] */

undefined8 FUN_107dffc48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dffc50; end: 107dffc57; -[SCMemoriesPreviewShareSheetExportScope presentingContainer] */

undefined8 FUN_107dffc50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dffc58; end: 107dffc5f; -[SCMemoriesPreviewShareSheetExportScope previewTranscoding] */

undefined8 FUN_107dffc58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dffc60; end: 107dffc77; -[SCMemoriesPreviewShareSheetExportScope scopeDelegate] */

void FUN_107dffc60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dffc78; end: 107dffd5f; -[SCMemoriesPreviewShareSheetExportScope .cxx_destruct] */

void FUN_107dffc78(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107dffd60; end: 107e001b7;  */

undefined * FUN_107dffd60(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010b88c2c4();
  puVar12 = PTR_PTR_1126aed78;
  if (lVar2 == 3) {
    puVar5 = PTR_PTR_1126aed78;
    _objc_alloc();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e84db8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e84db8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110daeb18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daeb18,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar12 = PTR_PTR_1126aed70;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
    ppuVar3 = ppuVar4;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    func_0x00010beff440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    _objc_release(0);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar8);
    _objc_release(puVar12);
    _objc_release(ppuVar9);
    _objc_release(ppuVar6);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x28));
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      return puVar5;
    }
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_alloc();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e222f8;
      puVar13 = (undefined *)0x0;
      func_0x00010bcbeaa8();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
      func_0x000108df727c();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0();
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(ppuVar6);
      func_0x00010c10eda0(puVar5);
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
        return puVar12;
      }
      ___stack_chk_fail();
      lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar13);
      puVar5 = PTR_PTR_1126aed70;
      _objc_retain(puVar12);
      ppuVar6 = &PTR____CFConstantStringClassReference_110ef8d98;
      ppuVar9 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8d98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8d98,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar13);
      func_0x00010beff440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar9);
      puVar8 = PTR_PTR_1126aed70;
      ppuVar6 = &PTR____CFConstantStringClassReference_110dcc5f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar13);
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar10 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      ppuVar6 = &PTR____CFConstantStringClassReference_110ef8db8;
      ppuVar9 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8db8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar10);
      _objc_release(puVar11);
      _objc_release(ppuVar9);
      func_0x00010c160fc0(puVar10);
      uVar7 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8db8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(puVar10);
      _objc_release(ppuVar6);
      func_0x00010c10eda0(puVar12);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar13);
      _objc_release(puVar5);
      _objc_release(puVar13);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
        ___stack_chk_fail();
        func_0x00010bf84b00(uVar7);
        puVar12 = *(undefined **)(puVar13 + 0x20);
        if (puVar12 == (undefined *)0x0) {
          return (undefined *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x000108df7828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(puVar12 + 0x10))(puVar12,1);
        return puVar12;
      }
      return puVar13;
    }
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar12 = PTR_PTR_1126aed70;
  _objc_retain(puVar5);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar8 = PTR_PTR_1126aed70;
  ppuVar6 = &PTR____CFConstantStringClassReference_110ebfbb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfbb8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar13 = PTR_PTR_1126aed78;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_110ebfbd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfbd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110ebfbf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfbf8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  func_0x00010bf0c980(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(puVar8);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed70;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar8 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar6 = &PTR____CFConstantStringClassReference_110ebfc18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfc18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110ebfc38;
  lVar2 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfc38);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar8);
  _objc_release(puVar13);
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  func_0x00010bf0c980(puVar12);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain();
    puVar12 = PTR_PTR_1126b24e8;
    func_0x00010bfb7440();
    bVar1 = puVar12 < (undefined *)(lVar2 << 0x14);
    if (bVar1) {
      func_0x000108df9a04(puVar5,0,0);
    }
    _objc_release(puVar5);
    return (undefined *)(ulong)bVar1;
  }
  return puVar5;
}



/* Entry: 107e001b8; end: 107e0032b;  */

undefined * FUN_107e001b8(undefined8 param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ebfc18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfc18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ebfc38;
  lVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfc38);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
  func_0x00010bf0c980(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    puVar4 = PTR_PTR_1126b24e8;
    func_0x00010bfb7440();
    bVar1 = puVar4 < (undefined *)(lVar7 << 0x14);
    if (bVar1) {
      func_0x000108df9a04(puVar3,0,0);
    }
    _objc_release(puVar3);
    return (undefined *)(ulong)bVar1;
  }
  return puVar3;
}



/* Entry: 107e0032c; end: 107e003a3;  */

bool FUN_107e0032c(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440();
  bVar1 = puVar2 < (undefined *)(param_2 << 0x14);
  if (bVar1) {
    func_0x000108df9a04(param_1,0,0);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107e003a4; end: 107e00467;  */

void FUN_107e003a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440();
  bVar1 = 0x18 < (ulong)puVar2 >> 0x15;
  if (!bVar1) {
    func_0x00010bfb03a0(PTR_PTR_1126b24e0);
    func_0x000108df9a04(param_1,param_3,1);
  }
  (**(code **)(param_3 + 0x10))(param_3,bVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107e00468; end: 107e0066f;  */

void FUN_107e00468(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db32d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db32d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ebfb78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfb78,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ebfb98;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfb98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar6);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e00670; end: 107e006b7;  */

void FUN_107e00670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e006b8; end: 107e006c7;  */

void FUN_107e006b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e006c8; end: 107e0079b;  */

void FUN_107e006c8(undefined8 param_1,ulong param_2)

{
  _objc_retain();
  func_0x00010b5fc390();
  if ((param_2 & 1) == 0) {
    func_0x000108df9cec(param_1);
  }
  else {
    FUN_107e00468(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e0079c; end: 107e007ab;  */

void FUN_107e0079c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e007ac; end: 107e007f7;  */

void FUN_107e007ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e007f8; end: 107e00807;  */

void FUN_107e007f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e00808; end: 107e00aab;  */

void FUN_107e00808(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
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
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_1);
  puVar6 = auStack_c8;
  lVar7 = 0x10;
  lVar1 = param_1;
  func_0x00010bf52a60();
  uVar4 = (undefined1)param_2;
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lStack_108 + lVar10 * 8);
        lVar2 = lVar8;
        func_0x00010c27dd80();
        uVar4 = (undefined1)param_2;
        if (lVar2 == 10) {
          _objc_retain(lVar8);
          goto LAB_107e008dc;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar6 = auStack_c8;
      lVar7 = 0x10;
      lVar1 = param_1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
      uVar4 = (undefined1)param_2;
    } while (lVar1 != 0);
  }
  lVar8 = 0;
LAB_107e008dc:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(lVar7);
  if (lVar7 != 0) {
    if ((param_1 == 0) || (puVar5 == (undefined8 *)0x0)) {
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_107e00aac;
      puStack_160 = &UNK_110849530;
      _objc_retain(lVar7);
      lStack_158 = lVar7;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_178);
      lVar1 = lStack_158;
    }
    else {
      uVar3 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_107e00abc;
      puStack_1a8 = &UNK_110855c70;
      _objc_retain(param_1);
      lStack_1a0 = param_1;
      uStack_180 = uVar4;
      _objc_retain(puVar5);
      puStack_198 = (undefined1 *)puVar5;
      _objc_retain(puVar6);
      puStack_190 = puVar6;
      _objc_retain(lVar7);
      lStack_188 = lVar7;
      func_0x00010007380c(uVar3,&puStack_1c0);
      _objc_release(uVar3);
      _objc_release(lStack_188);
      _objc_release(puStack_190);
      _objc_release(puStack_198);
      lVar1 = lStack_1a0;
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_1);
  return;
}



/* Entry: 107e00aac; end: 107e00abb;  */

void FUN_107e00aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e00ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107e00abc; end: 107e00caf;  */

void FUN_107e00abc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126d7f00;
  _objc_opt_new();
  func_0x00010c1aa1c0();
  func_0x00010c1af280(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3f880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e120(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3f8a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e140(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3f8c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e160(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf3f8e0();
  if (uVar3 < 4) {
    func_0x00010c17e180(puVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf64920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e1e0(puVar1);
  _objc_release(uVar4);
  puVar5 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107e00cb0;
  puStack_48 = &UNK_11084aaa8;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  puStack_40 = puVar5;
  uStack_38 = uVar4;
  _objc_retain(puVar5);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(puStack_40);
  _objc_release(uStack_38);
  _objc_release(puVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 107e00cb0; end: 107e00cbf;  */

void FUN_107e00cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e00cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e00cc0; end: 107e00d9f;  */

void FUN_107e00cc0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ae6b8;
  if ((param_1 == 0) || (param_2 == (undefined *)0x0)) {
    param_2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c13ebc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e00da0; end: 107e00e9b;  */

void FUN_107e00da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107e00e9c;
  uStack_30 = 0x107e00eac;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e00e9c; end: 107e00eb3;  */

void FUN_107e00e9c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e00eb4; end: 107e00fa7;  */

void FUN_107e00eb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126d7f00;
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    puVar4 = *(undefined **)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
  }
  else {
    lVar3 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e00fa8; end: 107e0103b;  */

void FUN_107e00fa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e0103c; end: 107e01137;  */

void FUN_107e0103c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107e00e9c;
  uStack_30 = 0x107e00eac;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e01138; end: 107e012eb;  */

void FUN_107e01138(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    puVar7 = *(undefined **)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar6 = param_2;
    func_0x00010bf3f880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar7);
    _objc_release(lVar6);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar6 = param_2;
    func_0x00010bf3f8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar4);
    _objc_release(lVar6);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar6 = param_2;
    func_0x00010bf3f8a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar1);
    _objc_release(lVar6);
    func_0x00010bf3f8e0();
    puVar2 = PTR_PTR_1126d7f08;
    _objc_alloc(PTR_PTR_1126d7f08);
    func_0x00010bfff680();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e012ec; end: 107e01333;  */

void FUN_107e012ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e01334; end: 107e013d7; -[SCGalleryDataMutator addVideoProvider:metadataItems:sojuMediaType:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:externalMetadata:deviceFirmwareInfo:deviceId:userContext:completionHandler:] */

void FUN_107e01334(void)

{
  func_0x00010befc960();
  return;
}



/* Entry: 107e013d8; end: 107e01a0f; -[SCGalleryDataMutator addVideoProvider:videoTimeRanges:shouldForceReencode:metadataItems:sojuMediaType:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:encryptedMediaFile:externalMetadata:deviceFirmwareInfo:deviceId:userContext:mediaOrigin:entrySource:completionHandler:] */

void FUN_107e013d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined4 param_28,
                  undefined4 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 uVar1;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_31);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x107e017fc;
  puStack_130 = &UNK_110a0d718;
  uStack_108 = param_9;
  uStack_100 = param_10;
  uStack_90 = param_30;
  uStack_f8 = param_11;
  uStack_f0 = param_12;
  uStack_e8 = param_14;
  uStack_e0 = param_15;
  uStack_d8 = param_16;
  uStack_d0 = param_17;
  uStack_6f = param_18;
  uStack_88 = param_13;
  uStack_80 = param_20;
  uStack_6e = param_21;
  uStack_c8 = param_23;
  uStack_c0 = param_24;
  uStack_b8 = param_25;
  uStack_b0 = param_26;
  uStack_74 = param_28;
  uStack_a8 = param_27;
  uStack_a0 = param_31;
  uStack_128 = param_3;
  uStack_120 = param_4;
  lStack_118 = param_1;
  uStack_110 = param_6;
  uStack_98 = param_8;
  uStack_78 = param_7;
  uStack_70 = param_5;
  _objc_retain();
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_148);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(param_31);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e01a10; end: 107e01eb3; -[SCGalleryDataMutator addVideoData:metadataItems:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:userContext:completionHandler:] */

void FUN_107e01a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined1 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 uVar1;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_22);
  _objc_retain(param_23);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x107e01d48;
  puStack_100 = &UNK_110a0d748;
  uStack_d0 = param_9;
  uStack_c8 = param_10;
  uStack_c0 = param_11;
  uStack_80 = param_12;
  uStack_b8 = param_13;
  uStack_b0 = param_14;
  uStack_a8 = param_15;
  uStack_a0 = param_16;
  uStack_6c = param_17;
  uStack_78 = param_19;
  uStack_6b = param_20;
  uStack_98 = param_22;
  uStack_90 = param_23;
  lStack_f8 = param_1;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  uStack_e0 = param_6;
  uStack_d8 = param_8;
  uStack_88 = param_7;
  uStack_70 = param_5;
  _objc_retain();
  _objc_retain(param_22);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_118);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e01eb4; end: 107e02383; -[SCGalleryDataMutator addPhoto:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:externalMetadata:userContext:mediaOrigin:entrySource:completionHandler:] */

void FUN_107e01eb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined1 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24,
                  undefined4 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 uVar1;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_27);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x107e0221c;
  puStack_128 = &UNK_110a0d778;
  uStack_a8 = param_26;
  uStack_f8 = param_10;
  uStack_a0 = param_12;
  uStack_80 = param_20;
  uStack_f0 = param_11;
  uStack_e8 = param_13;
  uStack_e0 = param_14;
  uStack_d8 = param_15;
  uStack_7f = param_17;
  uStack_90 = param_19;
  uStack_d0 = param_16;
  uStack_c8 = param_22;
  uStack_84 = param_24;
  uStack_c0 = param_23;
  uStack_b8 = param_27;
  lStack_120 = param_2;
  uStack_118 = param_4;
  uStack_110 = param_6;
  uStack_108 = param_8;
  uStack_100 = param_9;
  uStack_b0 = param_7;
  uStack_98 = param_1;
  uStack_88 = param_5;
  _objc_retain();
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_140);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(param_27);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107e02384; end: 107e024c3; -[SCGalleryDataMutator addPhoto:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:externalMetadata:userContext:mediaOrigin:entrySource:successCompletionHandler:] */

void FUN_107e02384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17)

{
  undefined8 in_stack_00000070;
  
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000070);
  func_0x00010befa840(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000070);
  return;
}



/* Entry: 107e024c4; end: 107e024d7;  */

void FUN_107e024c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000107e024d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4,param_5);
  return;
}



/* Entry: 107e024d8; end: 107e02b1b; -[SCGalleryDataMutator addAutosavedMobPhoto:captureTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:userContext:externalId:displayName:entrySource:cameraFrontFacing:completionHandler:] */

void FUN_107e024d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7e;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_19);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x107e02754;
  puStack_f8 = &UNK_110a0d808;
  uStack_80 = param_11;
  uStack_88 = param_16;
  uStack_c0 = param_10;
  uStack_b8 = param_14;
  uStack_7e = param_17;
  uStack_b0 = param_15;
  uStack_a8 = param_13;
  uStack_a0 = param_19;
  lStack_f0 = param_2;
  uStack_e8 = param_4;
  uStack_e0 = param_5;
  uStack_d8 = param_7;
  uStack_d0 = param_8;
  uStack_c8 = param_9;
  uStack_98 = param_6;
  uStack_90 = param_1;
  _objc_retain(param_19);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_110);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(param_19);
  _objc_release(param_13);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107e02b1c; end: 107e02c43;  */

void FUN_107e02b1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be1d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5f40(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e02c44; end: 107e02e43; -[SCGalleryDataMutator addAutosavedMyStoryPhoto:captureTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:cameraFrontFacing:entrySource:userContext:completionHandler:] */

void FUN_107e02c44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107e02e44;
  puStack_e8 = &UNK_110a0d838;
  uStack_80 = param_11;
  uStack_88 = param_13;
  uStack_b0 = param_10;
  uStack_a8 = param_14;
  uStack_a0 = param_15;
  lStack_e0 = param_2;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  uStack_c8 = param_7;
  uStack_c0 = param_8;
  uStack_b8 = param_9;
  uStack_98 = param_6;
  uStack_90 = param_1;
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_100);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107e02e44; end: 107e02eab;  */

void FUN_107e02e44(long param_1,undefined8 param_2)

{
  func_0x00010bdc5f40(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0x80));
  return;
}



/* Entry: 107e02eac; end: 107e03ad3; -[SCGalleryDataMutator _addAutosavedPhoto:captureTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:autosavedEntry:entryType:entrySource:externalId:title:attribution:cameraFrontFacing:userContext:completionHandler:] */

void FUN_107e02eac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x107e03194;
  puStack_110 = &UNK_110a0d898;
  uStack_100 = param_13;
  uStack_d8 = param_18;
  uStack_a8 = param_22;
  uStack_7f = param_19;
  uStack_c8 = param_10;
  uStack_c0 = param_21;
  uStack_7e = param_11;
  uStack_b8 = param_16;
  uStack_b0 = param_17;
  uStack_90 = param_14;
  uStack_88 = param_15;
  lStack_108 = param_2;
  uStack_f8 = param_4;
  uStack_f0 = param_7;
  uStack_e8 = param_8;
  uStack_e0 = param_9;
  uStack_d0 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_1;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_21);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_18);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_13);
  _objc_retain(param_22);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_128);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_a8);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_21);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_18);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_13);
  _objc_release(param_22);
  return;
}



/* Entry: 107e03ad4; end: 107e03aeb;  */

void FUN_107e03ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e03ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e03aec; end: 107e03c8b;  */

void FUN_107e03aec(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar3 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar3 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecbe0();
        _objc_release(uVar1);
      }
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c241220(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80(uVar1);
      _objc_release(puVar2);
      _objc_release(uVar1);
    }
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107e03c8c;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(lVar4);
    lStack_48 = lVar4;
    _objc_retain(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = puVar3;
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = uVar5;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(puStack_60);
    _objc_release(lStack_48);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e03c8c; end: 107e03c9f;  */

void FUN_107e03c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e03c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e03ca0; end: 107e03f17; -[SCGalleryDataMutator addAutosavedMobVideoProvider:sojuMediaType:captureTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:isFromCameraRoll:userContext:externalId:displayName:entrySource:cameraFrontFacing:completionHandler:] */

void FUN_107e03ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_69;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_19);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_107e03f18;
  puStack_e0 = &UNK_110a0d8f8;
  uStack_b0 = param_9;
  uStack_6c = param_11;
  uStack_a8 = param_10;
  uStack_a0 = param_14;
  uStack_69 = param_17;
  uStack_98 = param_15;
  uStack_90 = param_13;
  uStack_78 = param_16;
  uStack_88 = param_19;
  lStack_d8 = param_1;
  uStack_d0 = param_3;
  uStack_c8 = param_5;
  uStack_c0 = param_7;
  uStack_b8 = param_8;
  uStack_80 = param_6;
  uStack_70 = param_4;
  _objc_retain(param_19);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_f8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(param_19);
  _objc_release(param_13);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e03f18; end: 107e042e7;  */

void FUN_107e03f18(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_107e042e8;
  puStack_100 = &UNK_110a0d8c8;
  lVar11 = *(long *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_90 = *(undefined4 *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uStack_f8 = uVar9;
  lStack_f0 = lVar11;
  _objc_retain(uVar8);
  uStack_a0 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uStack_e0 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uStack_d0 = uVar9;
  _objc_retain(uVar8);
  uStack_8c = *(undefined1 *)(param_1 + 0x8c);
  uStack_8b = *(undefined2 *)(param_1 + 0x8d);
  uStack_98 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uStack_c8 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uStack_c0 = uVar9;
  _objc_retain(uVar8);
  uStack_89 = *(undefined1 *)(param_1 + 0x8f);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  uStack_b8 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uStack_b0 = uVar9;
  _objc_retain(uVar8);
  ppuVar3 = &puStack_118;
  uStack_a8 = uVar8;
  _objc_retainBlock();
  uVar10 = *(ulong *)(param_1 + 0x58);
  uVar1 = *(undefined1 *)(param_1 + 0x8c);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(uVar10,uVar1,uVar8,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (uVar10 == 0) {
    lVar11 = *(long *)(param_1 + 0x58);
    bVar2 = *(byte *)(param_1 + 0x8c);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = (ulong)((bVar2 ^ 0xffffffff) & 1);
    FUN_107e2cdfc(lVar11,uVar7,uVar8,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (lVar11 == 0) {
      uVar7 = 0;
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = lVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2220;
      _objc_alloc(PTR_PTR_1126b2220);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar5);
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar9);
      _objc_retain(ppuVar3);
      func_0x00010c288c60(uVar8);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      _objc_release(uVar9);
    }
    _objc_release(lVar11);
  }
  else {
    uVar7 = uVar10;
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  _objc_release(uVar10);
  _objc_release(ppuVar3);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  lVar11 = lStack_f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar11 + 0x20);
  _objc_retain(uVar7);
  func_0x00010be1d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5f60(*(undefined8 *)(lVar11 + 0x20));
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107e042e8; end: 107e04417;  */

void FUN_107e042e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be1d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5f60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e04418; end: 107e0460f; -[SCGalleryDataMutator addAutosavedMyStoryVideoProvider:sojuMediaType:captureTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:isFromCameraRoll:cameraFrontFacing:userContext:completionHandler:] */

void FUN_107e04418(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107e04610;
  puStack_c8 = &UNK_110a0d928;
  uStack_98 = param_9;
  uStack_6c = param_11;
  uStack_90 = param_10;
  uStack_88 = param_13;
  uStack_80 = param_14;
  lStack_c0 = param_1;
  uStack_b8 = param_3;
  uStack_b0 = param_5;
  uStack_a8 = param_7;
  uStack_a0 = param_8;
  uStack_78 = param_6;
  uStack_70 = param_4;
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_e0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e04610; end: 107e04673;  */

void FUN_107e04610(long param_1,undefined8 param_2)

{
  func_0x00010bdc5f60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined4 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0x74));
  return;
}



/* Entry: 107e04674; end: 107e0496b; -[SCGalleryDataMutator _addAutosavedVideoProvider:sojuMediaType:captureTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:isFromCameraRoll:autosavedEntry:entryType:entrySource:externalId:title:attribution:cameraFrontFacing:userContext:completionHandler:] */

void FUN_107e04674(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_107e0496c;
  puStack_f8 = &UNK_110a0d958;
  uStack_e8 = param_13;
  uStack_c8 = param_9;
  uStack_c0 = param_18;
  uStack_90 = param_22;
  uStack_6a = param_19;
  uStack_b0 = param_10;
  uStack_a8 = param_21;
  uStack_69 = param_11;
  uStack_a0 = param_16;
  uStack_98 = param_17;
  uStack_80 = param_14;
  uStack_78 = param_15;
  lStack_f0 = param_1;
  uStack_e0 = param_3;
  uStack_d8 = param_7;
  uStack_d0 = param_8;
  uStack_b8 = param_5;
  uStack_88 = param_6;
  uStack_70 = param_4;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_21);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_18);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_13);
  _objc_retain(param_22);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_110);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_90);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_21);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_18);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_13);
  _objc_release(param_22);
  return;
}



/* Entry: 107e0496c; end: 107e052eb;  */

void FUN_107e0496c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uStack_178;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = *(undefined **)(param_2 + 0x80);
  lVar20 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar20 + 0x38);
  uVar4 = *(undefined8 *)(lVar20 + 0x40);
  uVar1 = *(undefined8 *)(lVar20 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e29a58(puVar21,uVar4,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0x28) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    puVar14 = *(undefined **)(param_2 + 0x30);
    func_0x00010bf9d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = *(undefined **)(param_2 + 0x30);
    func_0x00010bf3f040(puVar15);
    func_0x00010b5fbca8();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e2e850();
    func_0x00010bdc8f40(uVar3);
  }
  else {
    puVar14 = PTR_PTR_1126d7f10;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x000107e2c03c(puVar14,uVar3,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38),
                        PTR___dispatch_main_q_11034be20,puVar21);
    _objc_release(uVar3);
    if ((int)puVar15 == 0) goto LAB_107e05294;
    func_0x00010c16d4e0(puVar14);
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bf9d2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = *(long *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bf3f040(uVar1);
    func_0x00010b5fbca8();
    _objc_retainAutoreleasedReturnValue();
    FUN_107e2c3e0(*(undefined8 *)(param_2 + 0x40));
    func_0x00010c07b240();
    func_0x00010be1b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar20 == 0) {
      if (puVar21 != (undefined *)0x0) {
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_107e052ec;
        puStack_a8 = &UNK_11084aaa8;
        _objc_retain(puVar21);
        puStack_98 = puVar21;
        _objc_retain(puVar14);
        puStack_a0 = puVar14;
        func_0x000100162d98("APPSTORE",&puStack_c0);
        _objc_release(puStack_a0);
        puVar9 = puStack_98;
        goto LAB_107e0526c;
      }
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c14bf80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(uVar4);
      func_0x00010c0aeb80(uVar1);
      _objc_release(uVar5);
      _objc_release(uVar1);
      lVar6 = lVar20;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bf8f8;
      func_0x00010c2aebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c1d7460();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 200);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c0ef4a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010bfbfb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar5);
      lVar10 = lVar20;
      func_0x00010c241220(lVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar8 = puVar7;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar7;
      func_0x00010bdc1800();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar8;
      func_0x00010c08fa60();
      uVar5 = uVar1;
      if ((puVar12 != (undefined *)0x0) &&
         (puVar12 = puVar11, func_0x00010c08fa60(), puVar12 != (undefined *)0x0)) {
        uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x78);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar7;
        func_0x00010c0719c0();
        if ((int)puVar12 == 0) {
          uVar22 = 0;
        }
        else {
          uStack_178 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x68);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uStack_178;
          func_0x00010c0bc420();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar5 = uVar13;
        func_0x00010c156cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        if ((int)puVar12 != 0) {
          _objc_release(uVar22);
          _objc_release(uStack_178);
        }
        _objc_release(uVar13);
      }
      puVar12 = PTR_PTR_1126bf900;
      func_0x00010c2aec40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar12;
      func_0x00010c213f60();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar16;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126d7f18;
      _objc_alloc();
      func_0x00010c00e960();
      puVar16 = PTR_PTR_1126d7f20;
      _objc_alloc();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c010440();
      _objc_release(uVar1);
      _objc_release(puVar18);
      lVar10 = lVar20;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_90 = lVar10;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar19 = PTR_PTR_1126d7f28;
      func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(param_2 + 0x60);
      _objc_retain(uVar22);
      _objc_retain(puVar21);
      _objc_retain(uVar3);
      _objc_retain(puVar14);
      _objc_retain(lVar6);
      func_0x00010bf06e40(uVar1);
      _objc_release(uVar13);
      _objc_release(uVar1);
      _objc_release(puVar14);
      _objc_release(uVar3);
      _objc_release(puVar21);
      _objc_release(uVar22);
      _objc_release(lVar6);
      _objc_release(lVar6);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar12);
      _objc_release(puVar17);
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar5);
LAB_107e0526c:
      _objc_release(puVar9);
    }
    _objc_release(lVar20);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar15);
LAB_107e05294:
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e05300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar21 + 0x28) + 0x10))
            (*(long *)(puVar21 + 0x28),0,0,*(undefined8 *)(puVar21 + 0x20));
  return;
}



/* Entry: 107e052ec; end: 107e05303;  */

void FUN_107e052ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e05300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e05304; end: 107e05477;  */

void FUN_107e05304(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecbe0();
        _objc_release(uVar1);
      }
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80();
      _objc_release(uVar1);
    }
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107e05478;
    puStack_58 = &UNK_1108465d0;
    _objc_retain(lVar3);
    lStack_38 = lVar3;
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puStack_50 = puVar2;
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = uVar4;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_release(lStack_38);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107e05478; end: 107e0548b;  */

void FUN_107e05478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e05488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e0548c; end: 107e055e3; -[SCGalleryDataMutator _getAttribution] */

void FUN_107e0548c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 in_x4;
  undefined8 uVar11;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar9 = &uStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  if (lVar7 != 0) {
    lVar1 = lVar7;
  }
  func_0x00010b5f6f04(uVar11,lVar4,lVar1,0x6d);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 1;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  _objc_retain(in_x4);
  uVar11 = *(undefined8 *)(lVar2 + 8);
  _objc_retain(uVar10);
  _objc_retain(in_x4);
  _objc_retain(puVar9);
  func_0x00010c0f7fc0(uVar11);
  _objc_release(uVar10);
  _objc_release(in_x4);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(in_x4);
  _objc_release(puVar9);
  return;
}



/* Entry: 107e055e4; end: 107e056c7; -[SCGalleryDataMutator retryFailedSnap:userContext:completionHandler:] */

void FUN_107e055e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107e056c8;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e056c8; end: 107e057c3;  */

void FUN_107e056c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4c0;
  puVar2 = puVar1;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7b20();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_107e057c4;
      puStack_40 = &UNK_110849530;
      _objc_retain(lVar4);
      lStack_38 = lVar4;
      func_0x000100162d98("APPSTORE",&puStack_58);
      _objc_release(lStack_38);
    }
  }
  else {
    func_0x00010be96e80(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 107e057c4; end: 107e057d7;  */

void FUN_107e057c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e057d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 107e057d8; end: 107e058bb; -[SCGalleryDataMutator retryFailedEntry:userContext:completionHandler:] */

void FUN_107e057d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107e058bc;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e058bc; end: 107e058cb;  */

void FUN_107e058bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__retryFailedEntry_userContext_co_112583540,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107e058cc; end: 107e0645b; -[SCGalleryDataMutator _retryFailedEntry:userContext:completionHandler:] */

void FUN_107e058cc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfa73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    if (param_5 == (undefined *)0x0) goto LAB_107e06400;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_107e0645c;
    puStack_108 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_100 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_120);
    puVar3 = puStack_100;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar20;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c1968c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c189960();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar3;
    func_0x00010bf59960(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c185360();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar22);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar20);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_107e06470;
    puStack_150 = &UNK_110858238;
    _objc_retain(puVar4);
    puStack_148 = puVar4;
    lStack_140 = param_1;
    _objc_retain(param_3);
    puStack_138 = param_3;
    _objc_retain(puVar2);
    puStack_130 = puVar2;
    _objc_retain(param_5);
    ppuVar10 = &puStack_168;
    puStack_128 = param_5;
    _objc_retainBlock();
    _objc_retain(puVar2);
    puVar20 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar20 != (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        uVar21 = *(undefined8 *)((long)puVar22 * 8);
        puVar8 = PTR_PTR_1126bc7b8;
        func_0x00010bfa7160(PTR_PTR_1126bc7b8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126bf8f8;
        func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c1d0720();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126bc7c8;
        func_0x00010bfa7220(PTR_PTR_1126bc7c8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126bf900;
        func_0x00010c2aec40(PTR_PTR_1126bf900);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010c1d0720();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar12);
        uVar16 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar21;
        FUN_107e2cec0(uVar21,0,1,0,0,0,0,uVar16,uVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        _objc_release(uVar16);
        puVar12 = PTR_PTR_1126d7f18;
        _objc_alloc(PTR_PTR_1126d7f18);
        func_0x00010c00e960();
        func_0x00010befa120(puVar4);
        uVar16 = uVar21;
        func_0x00010c241220(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar16);
        uVar16 = uVar19;
        func_0x00010c241220(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(uVar16);
        puVar14 = param_3;
        func_0x00010bf64980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220(uVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar21);
        _objc_release(puVar14);
        if (puVar18 != (undefined *)0x0) {
          uVar16 = uVar19;
          func_0x00010c241220(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar7);
          _objc_release(uVar16);
        }
        _objc_release(puVar18);
        _objc_release(puVar12);
        _objc_release(uVar19);
        _objc_release(puVar15);
        _objc_release(puVar11);
        _objc_release(puVar13);
        _objc_release(puVar8);
        puVar22 = puVar22 + 1;
      } while (puVar20 != puVar22);
      puVar20 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    uVar19 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar5;
    func_0x00010bf51e00(puVar5);
    puVar22 = puVar6;
    func_0x00010bf51e00(puVar6);
    puVar8 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    func_0x00010bf8b080(uVar19);
    _objc_release(puVar8);
    _objc_release(puVar22);
    _objc_release(puVar20);
    _objc_release(uVar19);
    puVar20 = puVar9;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (puVar20 < (undefined *)0x8) {
      if ((1L << ((ulong)puVar20 & 0x3f) & 0x7aU) == 0) {
        puVar22 = puVar4;
        if ((1L << ((ulong)puVar20 & 0x3f) & 0x81U) == 0) {
          puVar11 = PTR_PTR_1126d7f20;
          _objc_alloc(PTR_PTR_1126d7f20);
          uVar19 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c269d40(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c010440(puVar11);
          _objc_release(uVar19);
          func_0x00010c0b8600(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = *(undefined **)(param_1 + 0xf8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar20;
          func_0x00010bfc4ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          puVar13 = puVar22;
          func_0x00010c0b8600(puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126d7f28;
          puVar14 = puVar9;
          func_0x00010c2711a0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c07b240(puVar9);
          func_0x00010c0df6e0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5a1e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          _objc_release(puVar14);
          uVar19 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = *(undefined8 *)(param_1 + 8);
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06e40(uVar19);
          _objc_release(uVar16);
          _objc_release(uVar19);
          _objc_release(puVar8);
          _objc_release(puVar13);
        }
        else {
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126d7f30;
          _objc_alloc(PTR_PTR_1126d7f30);
          puVar20 = puVar22;
          func_0x00010c23f220(puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar20;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar7;
          func_0x00010c0e00e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar19 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c269d40(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c010480(puVar11);
          _objc_release(uVar19);
          _objc_release(puVar12);
          _objc_release(puVar8);
          _objc_release(puVar20);
          puVar20 = puVar22;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar20;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f8 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar20);
          puVar8 = PTR_PTR_1126d7f28;
          puVar13 = puVar9;
          func_0x00010c2711a0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c07b240(puVar9);
          func_0x00010c0df6e0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5a1e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          _objc_release(puVar13);
          uVar19 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = *(undefined8 *)(param_1 + 8);
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06e40(uVar19);
          _objc_release(uVar16);
          _objc_release(uVar19);
          _objc_release(puVar8);
        }
        _objc_release(puVar12);
      }
      else {
        puVar11 = puVar4;
        func_0x00010bf51e00(puVar4);
        puVar22 = param_3;
        func_0x00010c245800(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdccfa0(param_1);
      }
      _objc_release(puVar22);
      _objc_release(puVar11);
    }
    _objc_release(ppuVar10);
    _objc_release(puStack_128);
    _objc_release(puStack_130);
    _objc_release(puStack_138);
    _objc_release(puStack_148);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar9);
  }
  _objc_release(puVar3);
LAB_107e06400:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e0646c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),1,0);
  return;
}



/* Entry: 107e0645c; end: 107e0646f;  */

void FUN_107e0645c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e0646c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 107e06470; end: 107e06763;  */

void FUN_107e06470(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  long lStack_218;
  long lStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    lVar7 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar7);
    lVar6 = lVar7;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar8 = *plStack_1b0;
      do {
        lVar5 = 0;
        do {
          if (*plStack_1b0 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          puVar2 = PTR_PTR_1126af4d0;
          uVar1 = *(undefined8 *)(lStack_1b8 + lVar5 * 8);
          func_0x00010c23f220(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa72e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar1);
          if (puVar2 != (undefined *)0x0) {
            uVar3 = *(ulong *)(param_1 + 0x30);
            func_0x00010c07b240();
            if ((uVar3 & 1) == 0) {
              uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
              func_0x00010c269d40(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfecbe0();
              _objc_release(uVar4);
            }
          }
          _objc_release(puVar2);
          lVar5 = lVar5 + 1;
        } while (lVar6 != lVar5);
        lVar6 = lVar7;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar7);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar7);
    lVar6 = lVar7;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar8 = *plStack_1f0;
      do {
        lVar5 = 0;
        do {
          if (*plStack_1f0 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          uVar1 = *(undefined8 *)(lStack_1f8 + lVar5 * 8);
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080194b4(uVar1,uVar4);
          _objc_release(uVar4);
          lVar5 = lVar5 + 1;
        } while (lVar6 != lVar5);
        lVar6 = lVar7;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar7);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_107e06764;
    puStack_220 = &UNK_1108523f8;
    _objc_retain(lVar6);
    uStack_208 = (undefined1)param_2;
    lStack_210 = lVar6;
    _objc_retain(param_3);
    lStack_218 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_238);
    _objc_release(lStack_218);
    _objc_release(lStack_210);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e06774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined1 *)(param_3 + 0x30),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 107e06764; end: 107e06787;  */

void FUN_107e06764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e06774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e06788; end: 107e0686b; -[SCGalleryDataMutator deleteFailedEntries:completionQueue:completionHandler:] */

void FUN_107e06788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107e0686c;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e0686c; end: 107e06a43;  */

void FUN_107e0686c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar15 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar15);
  lVar3 = lVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar15);
      }
      puVar4 = PTR_PTR_1126af4d0;
      func_0x00010bfa73a0(PTR_PTR_1126af4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(puVar4);
      lVar18 = lVar18 + 1;
    } while (lVar3 != lVar18);
    lVar3 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = uVar5;
  uVar10 = uVar6;
  uVar11 = uVar7;
  FUN_107e2d22c(uVar17,puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_retain(uVar16);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(uStack_f0);
  _objc_retain(uStack_e8);
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_107e06ddc;
  puStack_238 = &UNK_110a0d9e8;
  uStack_1f8 = 0;
  uStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1f0 = 0;
  uStack_1b8 = 0;
  puStack_230 = puVar2;
  uStack_228 = uVar9;
  uStack_220 = uVar10;
  uStack_218 = uVar16;
  uStack_210 = uVar11;
  uStack_208 = uVar12;
  uStack_200 = uVar13;
  _objc_retain(0);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = uStack_f0;
  uStack_1c0 = uStack_e8;
  _objc_retain(uStack_e8);
  _objc_retain(uStack_f0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(0);
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  _objc_retain(uVar11);
  _objc_retain(uVar16);
  _objc_retain(uVar10);
  _objc_retain(uVar9);
  ppuVar8 = &puStack_250;
  _objc_retainBlock();
  uVar17 = *(undefined8 *)(puVar2 + 8);
  _objc_retain();
  _objc_retain(0);
  func_0x00010c0f7fc0(uVar17);
  _objc_release(ppuVar8);
  _objc_release(0);
  _objc_release(ppuVar8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(uStack_218);
  _objc_release(uStack_220);
  _objc_release(uStack_228);
  _objc_release(0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(0);
  _objc_release(0);
  _objc_release(0);
  _objc_release(0);
  _objc_release(0);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(uVar9);
  return;
}



/* Entry: 107e06a44; end: 107e06ddb; -[SCGalleryDataMutator addMobBatchCaptureStoryWithVideoUrlsOrImages:servletMediaFormats:orientations:overlayFormats:overlays:assetMedias:locations:isPrivate:isInfiniteDuration:userContext:externalId:displayName:entrySource:cameraFrontFacings:createTimes:timeRanges:completionHandler:] */

void FUN_107e06a44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107e06ddc;
  puStack_108 = &UNK_110a0d9e8;
  uStack_c8 = param_9;
  uStack_80 = param_10;
  uStack_c0 = param_12;
  uStack_88 = param_15;
  lStack_100 = param_1;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  uStack_e8 = param_5;
  uStack_e0 = param_6;
  uStack_d8 = param_7;
  uStack_d0 = param_8;
  _objc_retain(param_13);
  uStack_b8 = param_13;
  uStack_b0 = param_14;
  uStack_a8 = param_16;
  uStack_a0 = param_17;
  uStack_98 = param_18;
  uStack_90 = param_19;
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_14);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_120;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x107e06fc0;
  puStack_148 = &UNK_110864938;
  uStack_128 = param_10;
  uStack_140 = param_13;
  lStack_138 = param_1;
  ppuStack_130 = ppuVar1;
  _objc_retain();
  _objc_retain(param_13);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_160);
  _objc_release(ppuStack_130);
  _objc_release(uStack_140);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(param_13);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e06ddc; end: 107e0722b;  */

void FUN_107e06ddc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  if (lVar6 != 0) {
    lVar8 = lVar6;
  }
  func_0x00010b5f6f04(uVar15,lVar3,lVar8,0x6d);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar14);
  _objc_release(lVar16);
  func_0x00010bdc6080(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = puVar7[0x38];
  lVar8 = *(long *)(puVar7 + 0x20);
  uVar15 = *(undefined8 *)(*(long *)(puVar7 + 0x28) + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(lVar8,uVar1,uVar15,*(undefined8 *)(*(long *)(puVar7 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  if (lVar8 == 0) {
    bVar2 = puVar7[0x38];
    lVar3 = *(long *)(puVar7 + 0x20);
    uVar15 = *(undefined8 *)(*(long *)(puVar7 + 0x28) + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    FUN_107e2cdfc(lVar3,(bVar2 ^ 0xff) & 1,uVar15,*(undefined8 *)(*(long *)(puVar7 + 0x28) + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    if (lVar3 == 0) {
      (**(code **)(*(long *)(puVar7 + 0x30) + 0x10))(*(long *)(puVar7 + 0x30),0);
    }
    else {
      uVar15 = *(undefined8 *)(puVar7 + 0x28);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b2220;
      _objc_alloc(PTR_PTR_1126b2220);
      puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar10);
      uVar12 = *(undefined8 *)(puVar7 + 0x20);
      _objc_retain(uVar12);
      uVar17 = *(undefined8 *)(puVar7 + 0x30);
      _objc_retain(*(undefined8 *)(puVar7 + 0x30));
      func_0x00010c288c60(uVar15);
      _objc_release(puVar10);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(uVar17);
      _objc_release(uVar12);
    }
    _objc_release(lVar3);
  }
  else {
    (**(code **)(*(long *)(puVar7 + 0x30) + 0x10))(*(long *)(puVar7 + 0x30),lVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined1 *)(lVar8 + 0x38);
  uVar15 = *(undefined8 *)(lVar8 + 0x20);
  uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(uVar15,uVar1,uVar12,*(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  (**(code **)(*(long *)(lVar8 + 0x30) + 0x10))(*(long *)(lVar8 + 0x30),uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 107e0722c; end: 107e072ab;  */

void FUN_107e0722c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(uVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107e072ac; end: 107e07317; -[SCGalleryDataMutator addBatchCaptureStoryWithVideoUrlsOrImages:servletMediaFormats:orientations:overlayFormats:overlays:assetMedias:locations:isPrivate:isAutosave:isInfiniteDuration:cameraFrontFacings:createTimes:timeRanges:userContext:currentEntry:saveAsStory:completionHandler:] */

void FUN_107e072ac(void)

{
  func_0x00010bdc6080();
  return;
}



/* Entry: 107e07318; end: 107e076cb; -[SCGalleryDataMutator _addBatchCaptureStoryWithVideoUrlsOrImages:servletMediaFormats:orientations:overlayFormats:overlays:assetMedias:locations:isPrivate:isAutosave:isInfiniteDuration:userContext:entrySource:currentEntry:saveAsStory:externalId:title:attribution:cameraFrontFacings:createTimes:timeRanges:completionHandler:] */

void FUN_107e07318(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_23);
  func_0x00010bf529e0(param_8);
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = param_3;
    func_0x00010bf529e0();
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107e076cc;
  puStack_108 = &UNK_110a0da88;
  uStack_100 = param_21;
  uStack_70 = param_15;
  uStack_e0 = param_20;
  uStack_d8 = param_9;
  uStack_b8 = param_22;
  uStack_a8 = param_19;
  uStack_6f = param_10;
  uStack_a0 = param_12;
  uStack_98 = param_14;
  uStack_90 = param_17;
  uStack_88 = param_18;
  uStack_80 = param_23;
  uStack_78 = param_13;
  uStack_f8 = param_5;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  uStack_d0 = param_6;
  uStack_c8 = param_8;
  uStack_c0 = param_7;
  lStack_b0 = param_1;
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_23);
  _objc_retain(param_12);
  _objc_retain(param_19);
  _objc_retain(param_22);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_21);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_120);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_80);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_23);
  _objc_release(param_12);
  _objc_release(param_19);
  _objc_release(param_22);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_9);
  _objc_release(param_20);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_21);
  return;
}



/* Entry: 107e076cc; end: 107e08587;  */

void FUN_107e076cc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  bool bVar29;
  ulong uVar30;
  long lVar31;
  double dVar32;
  double dVar33;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    uVar30 = 0;
    do {
      puVar6 = *(undefined **)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar8 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar7);
      puVar7 = puVar6;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(puVar6);
      uVar9 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar10 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar8);
      uVar9 = uVar13;
      if ((uVar10 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain();
      _objc_release(uVar13);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar11);
      puVar6 = *(undefined **)(param_1 + 0x48);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 == puVar8) {
        _objc_release(puVar6);
        puVar6 = (undefined *)0x0;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(uVar11);
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      uVar12 = uVar11;
      func_0x00010010fab4(uVar11,PTR_DAT_1126a5938);
      uStack_1d0 = uVar11;
      if ((int)uVar12 == 0) {
        uStack_1d0 = 0;
      }
      _objc_retain();
      _objc_release(uVar11);
      uVar13 = *(ulong *)(param_1 + 0x58);
      func_0x00010bf529e0();
      uStack_1d8 = 0;
      if (uVar30 < uVar13) {
        uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0dfd40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      puVar8 = PTR_PTR_1126d7f10;
      _objc_alloc_init();
      puVar14 = *(undefined **)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar14);
      puStack_1e8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if (puVar14 == puVar15) {
        puVar15 = puVar3;
        _objc_retain();
        puStack_1e8 = puVar3;
      }
      else {
        puVar15 = *(undefined **)(param_1 + 0x68);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar15;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (puVar14 == (undefined *)0x0) {
          dStack_98 = 0.0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          dStack_b0 = 0.0;
        }
        else {
          func_0x00010bdc1120(&dStack_b0,puVar14);
        }
        uStack_c8 = uStack_a8;
        dStack_d0 = dStack_b0;
        uStack_c0 = uStack_a0;
        dVar33 = dStack_b0;
        _CMTimeGetSeconds(&dStack_d0);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0dfd40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf655c0(dVar33);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(puVar14);
        _objc_release();
      }
      if (uVar9 == 0) {
        if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
          puVar15 = puVar7;
          func_0x00010bf529e0();
        }
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = *(undefined **)(param_1 + 0x68);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar7;
        func_0x00010bf529e0();
        if (puVar14 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          dVar33 = 0.0;
          uVar12 = uVar11;
          lVar5 = 0;
          do {
            puVar18 = puVar7;
            func_0x00010c0dfd40(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf655c0(dVar33);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar17;
            func_0x00010bf529e0();
            if (puVar14 < puVar20) {
              puVar20 = puVar17;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              if (puVar20 == (undefined *)0x0) {
                dStack_98 = 0.0;
                uStack_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                dStack_b0 = 0.0;
              }
              else {
                func_0x00010bdc1120(&dStack_b0,puVar20);
              }
              uStack_c8 = uStack_90;
              dStack_d0 = dStack_98;
              uStack_c0 = uStack_88;
              dVar32 = dStack_98;
              _CMTimeGetSeconds(&dStack_d0);
              dVar33 = dVar33 + dVar32;
              _objc_release(puVar20);
            }
            puVar21 = *(undefined **)(param_1 + 0x60);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar21;
            func_0x00010bf529e0();
            _objc_release(puVar21);
            uVar11 = uVar12;
            if (puVar14 < puVar20) {
              uVar22 = *(undefined8 *)(param_1 + 0x60);
              func_0x00010c0dfd40(uVar22);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar22;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar12);
              _objc_release(uVar22);
            }
            puVar21 = *(undefined **)(param_1 + 0x50);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar21;
            func_0x00010bf529e0();
            _objc_release(puVar21);
            uVar12 = uStack_1d0;
            if (puVar14 < puVar20) {
              uVar12 = *(undefined8 *)(param_1 + 0x50);
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar22 = uVar12;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar12);
              uVar23 = uVar22;
              func_0x00010010fab4(uVar22,PTR_DAT_1126a5938);
              uVar12 = uVar22;
              if ((int)uVar23 == 0) {
                uVar12 = 0;
              }
              _objc_retain(uVar12);
              _objc_release(uVar22);
              _objc_release(uStack_1d0);
            }
            lVar31 = *(long *)(param_1 + 0x70);
            puVar20 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            FUN_107e2c3e0(uVar11);
            func_0x00010be1b0a0();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar31;
            func_0x00010bfbd760();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar31);
            _objc_release(puVar20);
            uStack_1d0 = uVar12;
            if (lVar16 == 0) {
              puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_f8 = 0xc2000000;
              pcStack_f0 = FUN_107e08588;
              puStack_e8 = &UNK_11084aaa8;
              uVar12 = *(undefined8 *)(param_1 + 0xa0);
              _objc_retain(uVar12);
              uStack_d8 = uVar12;
              _objc_retain(puVar8);
              puStack_e0 = puVar8;
              func_0x000100162d98("APPSTORE",&puStack_100);
              _objc_release(puStack_e0);
              _objc_release(uStack_d8);
              _objc_release(puVar19);
              _objc_release(puVar18);
              _objc_release(puVar17);
              bVar29 = false;
              goto LAB_107e080c4;
            }
            puVar20 = PTR_PTR_1126bf8f8;
            func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar20;
            func_0x00010c1d7460();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = puVar21;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar21);
            _objc_release(puVar20);
            puVar20 = PTR_PTR_1126d7f18;
            _objc_alloc(PTR_PTR_1126d7f18);
            func_0x00010c00e960();
            func_0x00010befa120(ppuVar2);
            _objc_release(puVar20);
            _objc_release(puVar24);
            _objc_release(puVar19);
            _objc_release(puVar18);
            puVar14 = puVar14 + 1;
            puVar18 = puVar7;
            func_0x00010bf529e0();
            uVar12 = uVar11;
            lVar5 = lVar16;
          } while (puVar14 < puVar18);
          _objc_release(lVar16);
        }
        _objc_release(puVar17);
        bVar29 = true;
      }
      else {
        lVar16 = *(long *)(param_1 + 0x68);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar16;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          dStack_98 = 0.0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_a8 = 0;
          dStack_b0 = 0.0;
        }
        else {
          func_0x00010bdc1120(&dStack_b0,lVar5);
        }
        uStack_c8 = uStack_90;
        dStack_d0 = dStack_98;
        uStack_c0 = uStack_88;
        dVar33 = dStack_98;
        _CMTimeGetSeconds(&dStack_d0);
        _objc_release(lVar5);
        _objc_release(lVar16);
        puVar15 = *(undefined **)(param_1 + 0x70);
        func_0x00010be1b060(dVar33);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar15;
        func_0x00010bfbd760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        if (puVar14 == (undefined *)0x0) {
          puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_128 = 0xc2000000;
          uStack_120 = 0x107e085d4;
          puStack_118 = &UNK_11084aaa8;
          puVar15 = *(undefined **)(param_1 + 0xa0);
          _objc_retain(puVar15);
          puStack_108 = puVar15;
          _objc_retain(puVar8);
          puStack_110 = puVar8;
          func_0x000100162d98("APPSTORE",&puStack_130);
          _objc_release(puStack_110);
          puVar15 = puStack_108;
        }
        else {
          puVar15 = PTR_PTR_1126bf8f8;
          func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar15;
          func_0x00010c1d7460();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          _objc_release(puVar15);
          puVar15 = PTR_PTR_1126d7f18;
          _objc_alloc(PTR_PTR_1126d7f18);
          func_0x00010c00e960();
          func_0x00010befa120(ppuVar2);
          _objc_release(puVar15);
          _objc_release(puVar18);
          puVar15 = puVar14;
        }
        bVar29 = puVar14 != (undefined *)0x0;
      }
LAB_107e080c4:
      _objc_release(puVar15);
      _objc_release(puStack_1e8);
      _objc_release(puVar8);
      _objc_release(uVar11);
      _objc_release(uStack_1d8);
      _objc_release(uStack_1d0);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(puVar7);
      if (!bVar29) goto LAB_107e08504;
      uVar30 = uVar30 + 1;
      uVar9 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (uVar30 < uVar9);
  }
  ppuVar25 = *(undefined ***)(param_1 + 0x80);
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_107e08620;
  puStack_150 = &UNK_110a0da18;
  uStack_148 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  ppuStack_140 = ppuVar25;
  _objc_retain(uVar4);
  ppuVar26 = &puStack_168;
  uStack_138 = uVar4;
  _objc_retainBlock();
  ppuVar27 = ppuVar26;
  if (ppuVar25 != (undefined **)0x0) {
    ppuVar27 = ppuVar25;
    func_0x00010c08fa60();
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    if ((*(char *)(param_1 + 0xb3) == '\x01') && (*(long *)(param_1 + 0x90) == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      ppuVar27 = ppuVar2;
      func_0x00010bf51e00(ppuVar2);
      ppuVar28 = ppuVar1;
      func_0x00010bf51e00(ppuVar1);
      func_0x00010bdccf80(uVar4);
    }
    else {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5fa33c();
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      _objc_retain(ppuVar26);
      _objc_retain(ppuVar27);
      func_0x00010bdc6a40(uVar4);
      _objc_release(ppuVar27);
      ppuVar28 = ppuVar26;
    }
  }
  else {
    ppuVar27 = (undefined **)PTR_PTR_1126d7f20;
    _objc_alloc(PTR_PTR_1126d7f20);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010440(ppuVar27);
    _objc_release(uVar4);
    ppuVar28 = ppuVar2;
    func_0x00010c0b8600(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d7f28;
    func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar26);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar12);
    func_0x00010bf06e40(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(ppuVar26);
    _objc_release(puVar7);
  }
  _objc_release(ppuVar28);
  _objc_release(ppuVar27);
  _objc_release(ppuVar26);
  _objc_release(uStack_138);
  _objc_release(ppuStack_140);
  _objc_release(ppuVar25);
LAB_107e08504:
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107e08588; end: 107e0861f;  */

void FUN_107e08588(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e08620; end: 107e0877b;  */

void FUN_107e08620(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar2 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126af4c0;
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e0877c;
  puStack_78 = &UNK_11097c050;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar4;
  _objc_retain(uVar3);
  uStack_48 = (undefined1)param_2;
  puStack_68 = puVar1;
  puStack_60 = puVar2;
  uStack_58 = param_3;
  uStack_50 = uVar3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(puStack_68);
  _objc_release(uStack_50);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107e0877c; end: 107e087fb;  */

void FUN_107e0877c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c08fa60();
  }
                    /* WARNING: Could not recover jumptable at 0x000107e087b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107e087fc; end: 107e08867;  */

void FUN_107e087fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e08868; end: 107e08877;  */

void FUN_107e08868(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107e08874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e08878; end: 107e08923;  */

void FUN_107e08878(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),7);
  return;
}



/* Entry: 107e08924; end: 107e08a9f; -[SCGalleryDataMutator _prepareAutoSavePlaceHolderEntryWithAddSnapEntity:entryType:entrySource:isPrivate:] */

void FUN_107e08924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0(PTR_PTR_1126bf8c8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c16d500(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c185360(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0ed100(param_3);
  func_0x00010c222da0(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  FUN_107ee8bec(param_4);
  func_0x00010c1a1e00(puVar1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196b00(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3960(puVar1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e08aa0; end: 107e090f7; -[SCGalleryDataMutator _appendAutoSaveWithAddSnapEntities:dataVaultEncryption:entryType:entrySource:isPrivate:savingEventUuid:userContext:completionHandler:] */

void FUN_107e08aa0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 in_x7;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 1;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_107e090f8;
  uStack_138 = 0x107e09108;
  uStack_130 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_107e090f8;
  uStack_168 = 0x107e09108;
  uStack_160 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _dispatch_group_create();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(param_3);
  lVar13 = param_3;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar14 = *plStack_1c0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_1c0 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_1c8 + lVar16 * 8);
        _dispatch_group_enter(uVar3);
        lVar4 = param_1;
        func_0x00010be77fa0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar12;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        lVar6 = lVar4;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d7f30;
        _objc_alloc();
        uVar12 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c010480();
        _objc_release(uVar12);
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_108 = uVar12;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(uVar15);
        puVar11 = PTR_PTR_1126d7f28;
        lVar9 = lVar4;
        func_0x00010c2711a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c07b240(lVar4);
        func_0x00010c0df6e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5a1e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(lVar9);
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + 8);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_228 = 0xc2000000;
        pcStack_220 = FUN_107e09110;
        puStack_218 = &UNK_110a0dab8;
        puStack_1e8 = &uStack_128;
        puStack_1e0 = &uStack_158;
        puStack_1d8 = &uStack_188;
        _objc_retain(lVar6);
        lStack_210 = lVar6;
        lStack_208 = param_1;
        _objc_retain(uVar5);
        uStack_200 = uVar5;
        _objc_retain(puVar1);
        puStack_1f8 = puVar1;
        _objc_retain(uVar3);
        uStack_1f0 = uVar3;
        func_0x00010bf06e40(uVar12);
        _objc_release(uVar15);
        _objc_release(uVar12);
        _objc_release(uStack_1f0);
        _objc_release(puStack_1f8);
        _objc_release(uStack_200);
        _objc_release(lStack_210);
        _objc_release(puVar11);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(lVar6);
        _objc_release(uVar5);
        _objc_release(lVar4);
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = param_3;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(param_3);
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_107e09214;
  puStack_268 = &UNK_1108af6c0;
  puStack_248 = &uStack_188;
  uStack_250 = in_stack_00000008;
  puStack_240 = &uStack_128;
  puStack_238 = &uStack_158;
  uStack_260 = in_x7;
  puStack_258 = puVar1;
  _objc_retain();
  _objc_retain(in_stack_00000008);
  _objc_retain(in_x7);
  func_0x000100bc0718(uVar3,PTR___dispatch_main_q_11034be20,&puStack_280);
  _objc_release(puStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_260);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  _objc_release(in_stack_00000008);
  _objc_release(in_x7);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(in_stack_00000000);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_188,8);
  __Block_object_dispose(&uStack_158,8);
  lVar13 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = 0;
  return;
}



/* Entry: 107e090f8; end: 107e0910f;  */

void FUN_107e090f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e09110; end: 107e09213;  */

void FUN_107e09110(long param_1,int param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  iVar2 = 0;
  if (param_3 == 0) {
    iVar2 = param_2;
  }
  uVar1 = 0;
  if (*(char *)(lVar5 + 0x18) == '\x01') {
    uVar1 = (char)iVar2;
  }
  *(undefined1 *)(lVar5 + 0x18) = uVar1;
  lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  lVar5 = param_3;
  if (*(long *)(lVar6 + 0x28) != 0) {
    lVar5 = *(long *)(lVar6 + 0x28);
  }
  _objc_retain(lVar5);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar5;
  _objc_release(uVar3);
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar4 = PTR_PTR_1126af4c0;
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar4);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e09214; end: 107e0929f;  */

void FUN_107e09214(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c08fa60();
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar2 + 0x10))
              (lVar2,uVar3,uVar1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}


