/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085250c4; end: 108525127;  */

undefined ** FUN_1085250c4(void)

{
  int iVar1;
  
  if ((bRam0000000113827e70 & 1) == 0) {
    iVar1 = 0x13827e70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263e70,0x100000000);
      ___cxa_guard_release(0x113827e70);
    }
  }
  return &PTR_PTR_113263e70;
}



/* Entry: 108525128; end: 1085251af;  */

void FUN_108525128(uint *param_1,undefined1 *param_2)

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



/* Entry: 1085251b0; end: 10852523b;  */

void FUN_1085251b0(long param_1,undefined1 *param_2)

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



/* Entry: 10852523c; end: 108525247; +[SCStoriesFriendOfGroupFeedDisplayInfo table] */

undefined * FUN_10852523c(void)

{
  return &UNK_10f4a307e;
}



/* Entry: 108525248; end: 108525377; +[SCStoriesFriendOfGroupFeedDisplayInfo immutableObjectParse:bufferSize:] */

void FUN_108525248(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d9e58;
  _objc_alloc(PTR_PTR_1126d9e58);
  puVar8 = (undefined *)0x0;
  puVar7 = (undefined *)0x0;
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (4 < uVar3) {
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
    if ((uVar3 < 7) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5)), uVar6 == 0)) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c03be40(puVar4,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108525378; end: 10852539b; +[SCStoriesFriendOfGroupFeedDisplayInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108525378(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108525394;
  auVar1._0_8_ = 0x10852538c;
  return auVar1;
}



/* Entry: 10852539c; end: 108525497;  */

void FUN_10852539c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126d9e60;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108525498(puVar3,0xffffffffffffffff,lVar1,lVar2);
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



/* Entry: 108525498; end: 108525563;  */

undefined1 * FUN_108525498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fcb88;
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



/* Entry: 108525564; end: 1085255d7;  */

void FUN_108525564(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1085255d8();
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



/* Entry: 1085255d8; end: 10852592f;  */

void FUN_1085255d8(undefined *param_1)

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
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar5,&UNK_10f4a30aa);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c11ac00(param_1);
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
            _objc_opt_class(PTR_PTR_1126d9e58);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_108525880;
            puVar5 = PTR_PTR_1126d9e60;
            _objc_alloc(PTR_PTR_1126d9e60);
            puVar2 = puVar3;
            func_0x00010c11ac00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108525498(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_1085256c0;
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
      _objc_opt_class(PTR_PTR_1126d9e58);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d9e60;
        _objc_alloc(PTR_PTR_1126d9e60);
        puVar2 = puVar3;
        func_0x00010c11ac00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108525498(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_1085256c0:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108525888;
      }
LAB_108525880:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108525888:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108525930; end: 1085259a3;  */

void FUN_108525930(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1085255d8();
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



/* Entry: 1085259a4; end: 108525a03;  */

void FUN_1085259a4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e58;
    _objc_alloc(PTR_PTR_1126d9e58);
    func_0x00010c03be40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108525a04; end: 108525a33; -[SCStoriesFriendOfGroupFeedDisplayInfoChangeRequest .cxx_destruct] */

void FUN_108525a04(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108525a34; end: 108525a3f; -[SCStoriesFriendOfGroupFeedDisplayInfoChangeRequest table] */

undefined * FUN_108525a34(void)

{
  return &UNK_10f4a307e;
}



/* Entry: 108525a40; end: 108525a87; -[SCStoriesFriendOfGroupFeedDisplayInfoChangeRequest createTableWithSQLite:] */

void FUN_108525a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df348a1,0xa7,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108525a88; end: 108525e0f; -[SCStoriesFriendOfGroupFeedDisplayInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108525a88(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1085259a4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108525e10(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a3151);
    if (lVar6 == 0) goto LAB_108525dac;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108525dac;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e58);
    func_0x00010c21c9a0(puVar7);
LAB_108525d94:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a310a);
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
            _objc_opt_class(PTR_PTR_1126d9e58);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108525db8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108525db8;
    }
    FUN_1085259a4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108525e10(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a31ac);
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
        _objc_opt_class(PTR_PTR_1126d9e58);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108525d94;
      }
    }
LAB_108525dac:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108525db8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108525e10; end: 108525f2b;  */

ulong FUN_108525e10(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_108525f2c(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108525f2c(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108525f2c; end: 10852605b;  */

undefined8 FUN_108525f2c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10852600c;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10852600c;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108525fcc;
    param_1 = 0;
  }
  else {
LAB_108525fcc:
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
LAB_10852600c:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10852605c; end: 1085260bf;  */

undefined ** FUN_10852605c(void)

{
  int iVar1;
  
  if ((bRam0000000113827e78 & 1) == 0) {
    iVar1 = 0x13827e78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263ee0,0x100000000);
      ___cxa_guard_release(0x113827e78);
    }
  }
  return &PTR_PTR_113263ee0;
}



/* Entry: 1085260c0; end: 108526147;  */

void FUN_1085260c0(uint *param_1,undefined1 *param_2)

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



/* Entry: 108526148; end: 1085261d3;  */

void FUN_108526148(long param_1,undefined1 *param_2)

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



/* Entry: 1085261d4; end: 10852628f;  */

undefined8 FUN_1085261d4(void)

{
  int iVar1;
  
  if ((bRam0000000113827ef0 & 1) == 0) {
    iVar1 = 0x13827ef0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827e88 = 0xe;
      puRam0000000113827e90 = &UNK_10f4a3211;
      uRam0000000113827e98 = 0x1010000;
      pcRam0000000113827ea0 = FUN_108526290;
      pcRam0000000113827ea8 = FUN_1085262c4;
      ppuRam0000000113827e80 = &PTR_DAT_11086d7d0;
      uRam0000000113827ec0 = 0;
      uRam0000000113827eb8 = 0;
      uRam0000000113827ed0 = 0;
      uRam0000000113827ec8 = 0;
      uRam0000000113827ee0 = 0;
      uRam0000000113827ed8 = 0;
      uRam0000000113827ee8 = 0;
      ___cxa_atexit(&DAT_105187b98,0x113827e80,0x100000000);
      ___cxa_guard_release(0x113827ef0);
    }
  }
  return 0x113827e80;
}



/* Entry: 108526290; end: 1085262c3;  */

undefined8 FUN_108526290(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 1085262c4; end: 10852631f;  */

undefined8 FUN_1085262c4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c105700(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108526320; end: 10852632b; +[SCStoriesOurStoryMapSnapPostedTimstampInfo table] */

undefined * FUN_108526320(void)

{
  return &UNK_10f4a321c;
}



/* Entry: 10852632c; end: 10852641b; +[SCStoriesOurStoryMapSnapPostedTimstampInfo immutableObjectParse:bufferSize:] */

void FUN_10852632c(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar4 = PTR_PTR_1126d9e88;
  _objc_alloc(PTR_PTR_1126d9e88);
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
  func_0x00010c047cc0(uVar8,puVar4,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10852641c; end: 10852643f; +[SCStoriesOurStoryMapSnapPostedTimstampInfo objectClassFunctionPointer] */

undefined1  [16] FUN_10852641c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108526438;
  auVar1._0_8_ = 0x108526430;
  return auVar1;
}



/* Entry: 108526440; end: 10852657b;  */

void FUN_108526440(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  if (param_3 == 0) {
    puVar5 = PTR_PTR_1126d9e90;
    _objc_opt_new();
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  }
  else {
    puVar1 = PTR_PTR_1126d9e90;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105700(param_3);
    _objc_retain(lVar2);
    puVar5 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      puStack_48 = PTR_PTR_1126fcb90;
      puStack_50 = puVar1;
      _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
      puVar5 = (undefined *)ppuVar3;
      if (ppuVar3 != (undefined **)0x0) {
        *(undefined8 *)((long)ppuVar3 + 8) = 0xffffffffffffffff;
        _objc_retain(lVar2);
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
        *(long *)((long)ppuVar3 + 0x18) = lVar2;
        _objc_release(uVar4);
        *(undefined8 *)((long)ppuVar3 + 0x20) = param_1;
      }
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar5 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10852657c; end: 1085265df;  */

void FUN_10852657c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e88;
    _objc_alloc(PTR_PTR_1126d9e88);
    func_0x00010c047cc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085265e0; end: 1085265eb; -[SCStoriesOurStoryMapSnapPostedTimstampInfoChangeRequest .cxx_destruct] */

void FUN_1085265e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1085265ec; end: 1085265f7; -[SCStoriesOurStoryMapSnapPostedTimstampInfoChangeRequest table] */

undefined * FUN_1085265ec(void)

{
  return &UNK_10f4a321c;
}



/* Entry: 1085265f8; end: 10852663f; -[SCStoriesOurStoryMapSnapPostedTimstampInfoChangeRequest createTableWithSQLite:] */

void FUN_1085265f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df34948,0x98,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108526640; end: 1085269c7; -[SCStoriesOurStoryMapSnapPostedTimstampInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108526640(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10852657c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1085269c8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a328d);
    if (lVar6 == 0) goto LAB_108526964;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108526964;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e88);
    func_0x00010c21c9a0(puVar7);
LAB_10852694c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a3247);
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
            _objc_opt_class(PTR_PTR_1126d9e88);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108526970;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108526970;
    }
    FUN_10852657c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1085269c8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a32e0);
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
        _objc_opt_class(PTR_PTR_1126d9e88);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10852694c;
      }
    }
LAB_108526964:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108526970:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1085269c8; end: 108526b9f;  */

ulong FUN_1085269c8(undefined8 param_1,ulong param_2,char *param_3)

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
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_108526ac8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_2,pcVar5,pcVar6);
    goto LAB_108526ac8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_108526a88;
    uVar9 = 0;
  }
  else {
LAB_108526a88:
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
LAB_108526ac8:
  _objc_release(pcVar4);
  func_0x00010c105700(param_3);
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



/* Entry: 108526ba0; end: 108526bab; +[SCStoriesMyStoryPrivacy table] */

undefined * FUN_108526ba0(void)

{
  return &UNK_10f4a333d;
}



/* Entry: 108526bac; end: 108526c03; +[SCStoriesMyStoryPrivacy immutableObjectParse:bufferSize:] */

void FUN_108526bac(void)

{
  _objc_alloc(PTR_PTR_1126c13f0);
  func_0x00010c055880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108526c04; end: 108526c27; +[SCStoriesMyStoryPrivacy objectClassFunctionPointer] */

undefined1  [16] FUN_108526c04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108526c20;
  auVar1._0_8_ = 0x108526c18;
  return auVar1;
}



/* Entry: 108526c28; end: 108526cfb;  */

void FUN_108526c28(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  if (param_2 == 0) {
    puVar4 = PTR_PTR_1126d9e70;
    _objc_opt_new();
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  }
  else {
    puVar1 = PTR_PTR_1126d9e70;
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010c27dd80();
    puVar4 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      puStack_38 = PTR_PTR_1126fcb98;
      puStack_40 = puVar1;
      _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
      puVar4 = (undefined *)ppuVar3;
      if (ppuVar3 != (undefined **)0x0) {
        *(undefined8 *)((long)ppuVar3 + 8) = 0xffffffffffffffff;
        *(long *)((long)ppuVar3 + 0x18) = lVar2;
      }
    }
  }
  *(undefined4 *)(puVar4 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108526cfc; end: 108526d6f;  */

void FUN_108526cfc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108526d70();
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



/* Entry: 108526d70; end: 10852702f;  */

void FUN_108526d70(undefined *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  ppuVar5 = &puStack_50;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar6 < 0) {
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bf636c0();
      _objc_release(puVar6);
      func_0x000107c310d8(puVar2,&UNK_10f4a3355);
      if (puVar2 != (undefined *)0x0) {
        puVar6 = param_1;
        func_0x00010c27dd80(param_1);
        _sqlite3_bind_int64(puVar2,1,puVar6);
        puVar6 = puVar2;
        _sqlite3_step();
        if ((int)puVar6 == 100) {
          puVar3 = puVar2;
          _sqlite3_column_int64(puVar2,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126c13f0);
          _sqlite3_column_blob(puVar2,1);
          _sqlite3_column_bytes(puVar2,1);
          puVar6 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar2);
          if (puVar6 != (undefined *)0x0) {
            puVar2 = PTR_PTR_1126d9e70;
            _objc_alloc();
            puVar4 = puVar6;
            func_0x00010c27dd80();
            puVar7 = (undefined1 *)0x0;
            param_1 = puVar6;
            if (puVar2 == (undefined *)0x0) goto LAB_108526fc0;
            puStack_48 = PTR_PTR_1126fcb98;
            puStack_50 = puVar2;
            _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
            goto LAB_108526e50;
          }
          goto LAB_108526e68;
        }
      }
      puVar7 = (undefined1 *)0x0;
      goto LAB_108526fc0;
    }
    puVar3 = param_1;
    func_0x00010c1422e0();
    puVar2 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c13f0);
    puVar6 = puVar2;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar2);
    if (puVar6 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126d9e70;
      _objc_alloc();
      puVar4 = puVar6;
      func_0x00010c27dd80();
      param_1 = puVar6;
      puVar7 = (undefined1 *)0x0;
      if (puVar2 == (undefined *)0x0) goto LAB_108526fc0;
      puStack_48 = PTR_PTR_1126fcb98;
      puStack_50 = puVar2;
      _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
      ppuVar5 = ppuVar1;
LAB_108526e50:
      param_1 = puVar6;
      puVar7 = (undefined1 *)ppuVar5;
      if (ppuVar5 != (undefined **)0x0) {
        *(undefined **)((long)ppuVar5 + 8) = puVar3;
        *(undefined **)((long)ppuVar5 + 0x18) = puVar4;
      }
      goto LAB_108526fc0;
    }
  }
LAB_108526e68:
  puVar7 = (undefined1 *)0x0;
  param_1 = puVar6;
LAB_108526fc0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108527030; end: 10852708f;  */

void FUN_108527030(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c13f0;
    _objc_alloc(PTR_PTR_1126c13f0);
    func_0x00010c055880();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108527090; end: 10852709b; -[SCStoriesMyStoryPrivacyChangeRequest table] */

undefined * FUN_108527090(void)

{
  return &UNK_10f4a333d;
}



/* Entry: 10852709c; end: 1085270e3; -[SCStoriesMyStoryPrivacyChangeRequest createTableWithSQLite:] */

void FUN_10852709c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df349e0,0x82,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1085270e4; end: 10852750b; -[SCStoriesMyStoryPrivacyChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1085270e4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_108527030(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar9 = puVar5;
    func_0x00010c27dd80(puVar5);
    *(undefined1 *)(param_4 + 0x46) = 1;
    uVar10 = *(undefined8 *)(param_4 + 0x28);
    uVar2 = *(undefined8 *)(param_4 + 0x30);
    uVar12 = *(undefined8 *)(param_4 + 0x20);
    func_0x000107c27db0(param_4,4,(ulong)puVar9 & 0xffffffff,0);
    lVar6 = param_4;
    func_0x000107c27dc0(param_4,((int)uVar12 - (int)uVar2) + (int)uVar10);
    _objc_release(puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a33cb);
    if (lVar6 == 0) goto LAB_108527498;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + uVar8);
    }
    _sqlite3_bind_int64(lVar6,2,uVar7);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108527498;
    uVar10 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c13f0);
    func_0x00010c21c9a0(puVar9);
LAB_108527480:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a3398);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c13f0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085274a4;
          }
        }
      }
      puVar9 = (undefined *)0x0;
      goto LAB_1085274a4;
    }
    FUN_108527030(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar9 = puVar5;
    func_0x00010c27dd80(puVar5);
    *(undefined1 *)(param_4 + 0x46) = 1;
    uVar10 = *(undefined8 *)(param_4 + 0x28);
    uVar2 = *(undefined8 *)(param_4 + 0x30);
    uVar12 = *(undefined8 *)(param_4 + 0x20);
    func_0x000107c27db0(param_4,4,(ulong)puVar9 & 0xffffffff,0);
    lVar6 = param_4;
    func_0x000107c27dc0(param_4,((int)uVar12 - (int)uVar2) + (int)uVar10);
    _objc_release(puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a3409);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_int64(param_3,3,uVar7);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c13f0);
        func_0x00010c21c9a0(puVar9);
        goto LAB_108527480;
      }
    }
LAB_108527498:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1085274a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10852750c; end: 10852756f;  */

undefined ** FUN_10852750c(void)

{
  int iVar1;
  
  if ((bRam0000000113827ef8 & 1) == 0) {
    iVar1 = 0x13827ef8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263f50,0x100000000);
      ___cxa_guard_release(0x113827ef8);
    }
  }
  return &PTR_PTR_113263f50;
}



/* Entry: 108527570; end: 1085275f7;  */

void FUN_108527570(uint *param_1,undefined1 *param_2)

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



/* Entry: 1085275f8; end: 108527683;  */

void FUN_1085275f8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c116a20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108527684; end: 10852773f;  */

undefined8 FUN_108527684(void)

{
  int iVar1;
  
  if ((bRam0000000113827f70 & 1) == 0) {
    iVar1 = 0x13827f70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827f08 = 0xe;
      puRam0000000113827f10 = &UNK_10f4a3451;
      uRam0000000113827f18 = 0x1010000;
      pcRam0000000113827f20 = FUN_108527740;
      pcRam0000000113827f28 = FUN_108527774;
      ppuRam0000000113827f00 = &PTR_DAT_11086d7d0;
      uRam0000000113827f40 = 0;
      uRam0000000113827f38 = 0;
      uRam0000000113827f50 = 0;
      uRam0000000113827f48 = 0;
      uRam0000000113827f60 = 0;
      uRam0000000113827f58 = 0;
      uRam0000000113827f68 = 0;
      ___cxa_atexit(&DAT_105187b98,0x113827f00,0x100000000);
      ___cxa_guard_release(0x113827f70);
    }
  }
  return 0x113827f00;
}



/* Entry: 108527740; end: 108527773;  */

undefined8 FUN_108527740(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 108527774; end: 1085277cf;  */

undefined8 FUN_108527774(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c122520(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085277d0; end: 1085277db; +[SCStoriesPublicStoryLatestPostTimestamp table] */

undefined * FUN_1085277d0(void)

{
  return &UNK_10f4a3465;
}



/* Entry: 1085277dc; end: 108527933; +[SCStoriesPublicStoryLatestPostTimestamp immutableObjectParse:bufferSize:] */

void FUN_1085277dc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d9e98;
  _objc_alloc(PTR_PTR_1126d9e98);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
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
    if (6 < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5));
      if (uVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      if ((uVar4 < 9) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar5)), uVar6 == 0)) {
        lVar5 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        lVar5 = (long)puVar2 + (ulong)*puVar2;
      }
      goto LAB_108527894;
    }
  }
  lVar5 = 0;
  uVar8 = 0;
LAB_108527894:
  func_0x000100952a54(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b000(uVar8,puVar3,param_2,puVar7,lVar5);
  _objc_release(lVar5);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108527934; end: 108527957; +[SCStoriesPublicStoryLatestPostTimestamp objectClassFunctionPointer] */

undefined1  [16] FUN_108527934(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108527950;
  auVar1._0_8_ = 0x108527948;
  return auVar1;
}



/* Entry: 108527958; end: 108527a33;  */

undefined1 *
FUN_108527958(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126fcba0;
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
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108527a34; end: 108527fa7;  */

void FUN_108527a34(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar8 = PTR_PTR_1126d9f90;
  _objc_retain(param_2);
  _objc_opt_self(puVar8);
  _objc_retain(param_2);
  if (param_2 == 0) {
LAB_108527dbc:
    lVar7 = 0;
LAB_108527dc0:
    _objc_release(lVar7);
  }
  else {
    lVar1 = param_2;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_2;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar7 = param_2;
      if (lVar1 != 0) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar8;
        func_0x00010bf636c0();
        _objc_release(puVar8);
        func_0x000107c310d8(puVar2,&UNK_10f4a3493);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_2;
          func_0x00010c116a20(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar8 = puVar2;
          _sqlite3_step();
          if ((int)puVar8 == 100) {
            puVar8 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d9e98);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_108527dbc;
            puVar2 = PTR_PTR_1126d9f90;
            _objc_alloc();
            puVar4 = puVar5;
            func_0x00010c116a20(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c122520(puVar5);
            puVar6 = puVar5;
            func_0x00010c25b160(puVar5);
            _objc_retainAutoreleasedReturnValue();
            FUN_108527958(puVar2,puVar8,puVar4,puVar6);
            goto LAB_108527b54;
          }
        }
      }
      goto LAB_108527dc0;
    }
    lVar1 = param_2;
    func_0x00010c1422e0(param_2);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e98);
    puVar5 = puVar8;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar8);
    if (puVar5 == (undefined *)0x0) goto LAB_108527dbc;
    puVar2 = PTR_PTR_1126d9f90;
    _objc_alloc();
    puVar4 = puVar5;
    func_0x00010c116a20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c122520(puVar5);
    puVar6 = puVar5;
    func_0x00010c25b160(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_108527958(puVar2,lVar1,puVar4,puVar6);
LAB_108527b54:
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0;
      }
      lVar1 = param_2;
      func_0x00010c116a20(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      func_0x00010c122520(param_2);
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      lVar1 = param_2;
      func_0x00010c25b160(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      _objc_retain(puVar2);
      puVar8 = puVar2;
      goto LAB_108527e84;
    }
  }
  _objc_release(param_2);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  puVar8 = PTR_PTR_1126d9f90;
  _objc_retain(param_2);
  _objc_opt_self(puVar8);
  puVar2 = PTR_PTR_1126d9f90;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c116a20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c122520(param_2);
    lVar7 = param_2;
    func_0x00010c25b160(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108527958(param_1,puVar2,0xffffffffffffffff,lVar1,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_2);
  puVar8 = (undefined *)0x0;
LAB_108527e84:
  _objc_release(puVar8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108527fa8; end: 10852800f;  */

void FUN_108527fa8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e98;
    _objc_alloc(PTR_PTR_1126d9e98);
    func_0x00010c03b000(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108528010; end: 10852803f; -[SCStoriesPublicStoryLatestPostTimestampChangeRequest .cxx_destruct] */

void FUN_108528010(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108528040; end: 10852804b; -[SCStoriesPublicStoryLatestPostTimestampChangeRequest table] */

undefined * FUN_108528040(void)

{
  return &UNK_10f4a3465;
}



/* Entry: 10852804c; end: 108528093; -[SCStoriesPublicStoryLatestPostTimestampChangeRequest createTableWithSQLite:] */

void FUN_10852804c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df34a62,0xa1,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108528094; end: 10852841b; -[SCStoriesPublicStoryLatestPostTimestampChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108528094(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108527fa8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10852841c(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a353a);
    if (lVar6 == 0) goto LAB_1085283b8;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1085283b8;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e98);
    func_0x00010c21c9a0(puVar7);
LAB_1085283a0:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a34f1);
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
            _objc_opt_class(PTR_PTR_1126d9e98);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085283c4;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1085283c4;
    }
    FUN_108527fa8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10852841c(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a3593);
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
        _objc_opt_class(PTR_PTR_1126d9e98);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1085283a0;
      }
    }
LAB_1085283b8:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1085283c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10852841c; end: 1085285b3;  */

ulong FUN_10852841c(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c25b160(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    FUN_108510754(param_2,lVar5);
    _objc_release(lVar5);
    uVar7 = uVar7 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c116a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_1085285b4(param_2,lVar4);
  func_0x00010c122520(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,6);
  if (uVar7 != 0) {
    func_0x000107c27db4(param_2,4);
    func_0x000107c27de0(param_2,8,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uVar7) + 4,0);
  }
  func_0x000107c27ddc(param_2,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1085285b4; end: 1085286e3;  */

undefined8 FUN_1085285b4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108528694;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108528694;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108528654;
    param_1 = 0;
  }
  else {
LAB_108528654:
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
LAB_108528694:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1085286e4; end: 108528747;  */

undefined ** FUN_1085286e4(void)

{
  int iVar1;
  
  if ((bRam0000000113827f78 & 1) == 0) {
    iVar1 = 0x13827f78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263fc0,0x100000000);
      ___cxa_guard_release(0x113827f78);
    }
  }
  return &PTR_PTR_113263fc0;
}



/* Entry: 108528748; end: 1085287cf;  */

void FUN_108528748(uint *param_1,undefined1 *param_2)

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



/* Entry: 1085287d0; end: 10852885b;  */

void FUN_1085287d0(long param_1,undefined1 *param_2)

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



/* Entry: 10852885c; end: 108528867; +[SCStoriesPublicUserStoryPlaybackSequence table] */

undefined * FUN_10852885c(void)

{
  return &UNK_10f4a35f6;
}



/* Entry: 108528868; end: 108528abf; +[SCStoriesPublicUserStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_108528868(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar3 = PTR_PTR_1126d67b0;
  _objc_alloc(PTR_PTR_1126d67b0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_1085289b4:
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
    if (uVar4 < 7) goto LAB_1085289b4;
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
      goto LAB_1085289bc;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_1085289bc:
  func_0x00010c05bc60(puVar3,param_2,puVar7,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108528ac0; end: 108528ae3; +[SCStoriesPublicUserStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_108528ac0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108528adc;
  auVar1._0_8_ = 0x108528ad4;
  return auVar1;
}



/* Entry: 108528ae4; end: 108528c17;  */

void FUN_108528ae4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar4 = PTR_PTR_1126d67a8;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108528c18(puVar4,0xffffffffffffffff,lVar1,lVar2,lVar3);
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



/* Entry: 108528c18; end: 108528d1b;  */

undefined1 *
FUN_108528c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    puStack_48 = PTR_PTR_1126fcba8;
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



/* Entry: 108528d1c; end: 108528d8f;  */

void FUN_108528d1c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108528d90();
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



/* Entry: 108528d90; end: 108529133;  */

void FUN_108528d90(undefined *param_1)

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
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar6,&UNK_10f4a3621);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2923e0(param_1);
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
            _objc_opt_class(PTR_PTR_1126d67b0);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_108529070;
            puVar6 = PTR_PTR_1126d67a8;
            _objc_alloc(PTR_PTR_1126d67a8);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c15e620(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108528c18(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_108528e90;
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
      _objc_opt_class(PTR_PTR_1126d67b0);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d67a8;
        _objc_alloc(PTR_PTR_1126d67a8);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108528c18(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_108528e90:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108529078;
      }
LAB_108529070:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108529078:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108529134; end: 1085291a7;  */

void FUN_108529134(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108528d90();
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



/* Entry: 1085291a8; end: 10852920b;  */

void FUN_1085291a8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d67b0;
    _objc_alloc(PTR_PTR_1126d67b0);
    func_0x00010c05bc60();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10852920c; end: 108529247; -[SCStoriesPublicUserStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_10852920c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108529248; end: 108529253; -[SCStoriesPublicUserStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_108529248(void)

{
  return &UNK_10f4a35f6;
}



/* Entry: 108529254; end: 10852929b; -[SCStoriesPublicUserStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_108529254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df34b03,0x98,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10852929c; end: 108529623; -[SCStoriesPublicUserStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10852929c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1085291a8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108529624(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a36bf);
    if (lVar6 == 0) goto LAB_1085295c0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1085295c0;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d67b0);
    func_0x00010c21c9a0(puVar7);
LAB_1085295a8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a3679);
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
            _objc_opt_class(PTR_PTR_1126d67b0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085295cc;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1085295cc;
    }
    FUN_1085291a8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108529624(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a3712);
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
        _objc_opt_class(PTR_PTR_1126d67b0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1085295a8;
      }
    }
LAB_1085295c0:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1085295cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108529624; end: 108529a13;  */

ulong FUN_108529624(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
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
  uVar5 = param_2;
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
  _objc_retain(uVar5);
  uVar13 = uVar5;
  func_0x00010bf52a60();
  if (uVar13 != 0) {
    lVar15 = *plStack_140;
    do {
      uVar16 = 0;
      do {
        if (*plStack_140 != lVar15) {
          _objc_enumerationMutation(uVar5);
        }
        uVar14 = *(undefined8 *)(lStack_148 + uVar16 * 8);
        _objc_retain(uVar14);
        pppuVar6 = &ppuStack_108;
        FUN_108511784(pppuVar6,param_1,uVar14);
        uStack_154 = SUB84(pppuVar6,0);
        FUN_1085116c4(&lStack_170,&uStack_154);
        _objc_release(uVar14);
        uVar16 = uVar16 + 1;
      } while (uVar13 != uVar16);
      uVar13 = uVar5;
      func_0x00010bf52a60();
    } while (uVar13 != 0);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar5);
  if (pppuStack_f0 == &ppuStack_108) {
    lVar15 = 0x20;
LAB_108529790:
    (**(code **)((long)*pppuStack_f0 + lVar15))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar15 = 0x28;
    goto LAB_108529790;
  }
  uVar5 = param_2;
  func_0x00010c15e620();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uVar13 = 0;
  }
  else {
    uVar16 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar13 = uVar16;
    func_0x00010c08b1c0(uVar16);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c27db0(param_1,4,uVar13,0);
    uVar13 = param_1;
    func_0x000107c27dc0(param_1,((int)uVar17 - (int)uVar1) + (int)uVar14);
    _objc_release(uVar16);
    _objc_release(uVar16);
    uVar13 = uVar13 & 0xffffffff;
  }
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_108529a14(param_1,uVar5);
  lVar15 = 0x11326399a;
  if (lStack_168 - lStack_170 != 0) {
    lVar15 = lStack_170;
  }
  uVar7 = param_1;
  func_0x000108516b70(param_1,lVar15,lStack_168 - lStack_170 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28);
  func_0x000108516a90(param_1,8,uVar13);
  func_0x000108516b00(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar16 & 0xffffffff);
  pcVar12 = (char *)(ulong)(uint)((iVar2 - iVar3) + iVar4);
  func_0x000107c27dc0(param_1);
  _objc_release(uVar5);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  uVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar5);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume(uVar13);
  _objc_retain(pcVar12);
  if (pcVar12 == (char *)0x0) {
    uVar13 = 0;
    goto LAB_108529af4;
  }
  pcVar8 = pcVar12;
  _CFStringGetCStringPtr(pcVar12,0x8000100);
  if (pcVar8 != (char *)0x0) {
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    func_0x000107c27df0(uVar13,pcVar8,pcVar9);
    goto LAB_108529af4;
  }
  pcVar8 = pcVar12;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar8 == (char *)0x0) {
    pcVar8 = pcVar12;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar8 != (char *)0x0) goto LAB_108529ab4;
    uVar13 = 0;
  }
  else {
LAB_108529ab4:
    pcVar10 = pcVar8;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar11 = pcVar8;
    func_0x00010c08fa60(pcVar8);
    pcVar9 = "";
    if (pcVar10 != (char *)0x0) {
      pcVar9 = pcVar10;
    }
    func_0x000107c27df0(uVar13,pcVar9,pcVar11);
  }
  _objc_release(pcVar8);
LAB_108529af4:
  _objc_release(pcVar12);
  return uVar13;
}



/* Entry: 108529a14; end: 108529b43;  */

undefined8 FUN_108529a14(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108529af4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108529af4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108529ab4;
    param_1 = 0;
  }
  else {
LAB_108529ab4:
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
LAB_108529af4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108529b44; end: 108529ba7;  */

undefined ** FUN_108529b44(void)

{
  int iVar1;
  
  if ((bRam0000000113827f80 & 1) == 0) {
    iVar1 = 0x13827f80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113264030,0x100000000);
      ___cxa_guard_release(0x113827f80);
    }
  }
  return &PTR_PTR_113264030;
}



/* Entry: 108529ba8; end: 108529c2f;  */

void FUN_108529ba8(uint *param_1,undefined1 *param_2)

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



/* Entry: 108529c30; end: 108529cbb;  */

void FUN_108529c30(long param_1,undefined1 *param_2)

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



/* Entry: 108529cbc; end: 108529cc7; +[SCStoriesBundleStoryPlaybackSequence table] */

undefined * FUN_108529cbc(void)

{
  return &UNK_10f4a376f;
}



/* Entry: 108529cc8; end: 108529f4b; +[SCStoriesBundleStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_108529cc8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d9e20;
  _objc_alloc(PTR_PTR_1126d9e20);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_108529d80:
    uVar8 = 0;
LAB_108529d84:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar11 + (ulong)*puVar11 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_108529d80;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
    if (uVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((long)piVar1 + uVar6);
    }
    if (uVar4 < 9) goto LAB_108529d84;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          lVar5 = (long)puVar11 + (ulong)*puVar11;
          func_0x000100952a54(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar10,param_2,lVar5);
          _objc_release(lVar5);
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar2 + 1 + *puVar2);
      }
      puVar9 = puVar10;
      func_0x00010bf51e00(puVar10);
      _objc_release(puVar10);
      lVar5 = -(long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((10 < uVar4) && (*(short *)((long)piVar1 + lVar5 + 10) != 0)) {
      puVar10 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      goto LAB_108529d8c;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_108529d8c:
  func_0x00010c04d7a0(puVar3,param_2,puVar7,uVar8,puVar9,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108529f4c; end: 108529f6f; +[SCStoriesBundleStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_108529f4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108529f68;
  auVar1._0_8_ = 0x108529f60;
  return auVar1;
}



/* Entry: 108529f70; end: 10852a0b3;  */

void FUN_108529f70(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar5 = PTR_PTR_1126d9e28;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf24c40(param_2);
    lVar3 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10852a0b4(puVar5,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar5 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10852a0b4; end: 10852a1bf;  */

undefined1 *
FUN_10852a0b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    puStack_48 = PTR_PTR_1126fcbb0;
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



/* Entry: 10852a1c0; end: 10852a233;  */

void FUN_10852a1c0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10852a234();
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



/* Entry: 10852a234; end: 10852a5ff;  */

void FUN_10852a234(undefined *param_1)

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
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar7,&UNK_10f4a3796);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c259cc0(param_1);
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
            _objc_opt_class(PTR_PTR_1126d9e20);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_10852a538;
            puVar7 = PTR_PTR_1126d9e28;
            _objc_alloc(PTR_PTR_1126d9e28);
            puVar2 = puVar3;
            func_0x00010c259cc0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf24c40(puVar3);
            puVar5 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c15e620(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10852a0b4(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_10852a348;
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
      _objc_opt_class(PTR_PTR_1126d9e20);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d9e28;
        _objc_alloc(PTR_PTR_1126d9e28);
        puVar2 = puVar3;
        func_0x00010c259cc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf24c40(puVar3);
        puVar5 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c15e620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10852a0b4(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_10852a348:
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        goto LAB_10852a540;
      }
LAB_10852a538:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10852a540:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10852a600; end: 10852a673;  */

void FUN_10852a600(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10852a234();
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



/* Entry: 10852a674; end: 10852a6d7;  */

void FUN_10852a674(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e20;
    _objc_alloc(PTR_PTR_1126d9e20);
    func_0x00010c04d7a0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10852a6d8; end: 10852a713; -[SCStoriesBundleStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_10852a6d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10852a714; end: 10852a71f; -[SCStoriesBundleStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_10852a714(void)

{
  return &UNK_10f4a376f;
}



/* Entry: 10852a720; end: 10852a767; -[SCStoriesBundleStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_10852a720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df34b9b,0x96,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10852a768; end: 10852aaef; -[SCStoriesBundleStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10852a768(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10852a674(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10852aaf0(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a382d);
    if (lVar6 == 0) goto LAB_10852aa8c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10852aa8c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e20);
    func_0x00010c21c9a0(puVar7);
LAB_10852aa74:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a37eb);
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
            _objc_opt_class(PTR_PTR_1126d9e20);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10852aa98;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10852aa98;
    }
    FUN_10852a674(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10852aaf0(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a387d);
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
        _objc_opt_class(PTR_PTR_1126d9e20);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10852aa74;
      }
    }
LAB_10852aa8c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10852aa98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10852aaf0; end: 10852aeff;  */

ulong FUN_10852aaf0(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
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
  ppuStack_110 = &PTR_FUN_110a50930;
  pcStack_108 = FUN_108510754;
  pppuStack_f8 = &ppuStack_110;
  uVar5 = param_2;
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
  _objc_retain(uVar5);
  uVar14 = uVar5;
  func_0x00010bf52a60();
  if (uVar14 != 0) {
    lVar16 = *plStack_140;
    do {
      uVar17 = 0;
      do {
        if (*plStack_140 != lVar16) {
          _objc_enumerationMutation(uVar5);
        }
        uVar15 = *(undefined8 *)(lStack_148 + uVar17 * 8);
        _objc_retain(uVar15);
        pppuVar6 = &ppuStack_110;
        FUN_108511784(pppuVar6,param_1,uVar15);
        uStack_154 = SUB84(pppuVar6,0);
        FUN_1085116c4(&lStack_170,&uStack_154);
        _objc_release(uVar15);
        uVar17 = uVar17 + 1;
      } while (uVar14 != uVar17);
      uVar14 = uVar5;
      func_0x00010bf52a60();
    } while (uVar14 != 0);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar5);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar16 = 0x20;
LAB_10852ac5c:
    (**(code **)((long)*pppuStack_f8 + lVar16))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar16 = 0x28;
    goto LAB_10852ac5c;
  }
  uVar5 = param_2;
  func_0x00010c15e620();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uVar14 = 0;
  }
  else {
    uVar17 = param_2;
    func_0x00010c15e620(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar14 = uVar17;
    func_0x00010c08b1c0(uVar17);
    *(undefined1 *)(param_1 + 0x46) = 1;
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar18 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c27db0(param_1,4,uVar14,0);
    uVar14 = param_1;
    func_0x000107c27dc0(param_1,((int)uVar18 - (int)uVar1) + (int)uVar15);
    _objc_release(uVar17);
    _objc_release(uVar17);
    uVar14 = uVar14 & 0xffffffff;
  }
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  FUN_10852af00(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010bf24c40(param_2);
  lVar16 = 0x11326399a;
  if (lStack_168 - lStack_170 != 0) {
    lVar16 = lStack_170;
  }
  uVar8 = param_1;
  func_0x000108516b70(param_1,lVar16,lStack_168 - lStack_170 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,6,uVar7 & 0xffffffff,0);
  func_0x000108516a90(param_1,10,uVar14);
  func_0x000108516b00(param_1,8,uVar8 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar17 & 0xffffffff);
  pcVar13 = (char *)(ulong)(uint)((iVar2 - iVar3) + iVar4);
  func_0x000107c27dc0(param_1);
  _objc_release(uVar5);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  uVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar5);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume(uVar14);
  _objc_retain(pcVar13);
  if (pcVar13 == (char *)0x0) {
    uVar14 = 0;
    goto LAB_10852afe0;
  }
  pcVar9 = pcVar13;
  _CFStringGetCStringPtr(pcVar13,0x8000100);
  if (pcVar9 != (char *)0x0) {
    pcVar10 = pcVar9;
    _strlen(pcVar9);
    func_0x000107c27df0(uVar14,pcVar9,pcVar10);
    goto LAB_10852afe0;
  }
  pcVar9 = pcVar13;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar9 == (char *)0x0) {
    pcVar9 = pcVar13;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar9 != (char *)0x0) goto LAB_10852afa0;
    uVar14 = 0;
  }
  else {
LAB_10852afa0:
    pcVar11 = pcVar9;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar12 = pcVar9;
    func_0x00010c08fa60(pcVar9);
    pcVar10 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar10 = pcVar11;
    }
    func_0x000107c27df0(uVar14,pcVar10,pcVar12);
  }
  _objc_release(pcVar9);
LAB_10852afe0:
  _objc_release(pcVar13);
  return uVar14;
}



/* Entry: 10852af00; end: 10852b02f;  */

undefined8 FUN_10852af00(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10852afe0;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10852afe0;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10852afa0;
    param_1 = 0;
  }
  else {
LAB_10852afa0:
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
LAB_10852afe0:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10852b030; end: 10852b043; +[SCBitmojiAppInfoProvider bitmojiAppStorePageURL] */

void FUN_10852b030(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110de2c38);
  return;
}



/* Entry: 10852b044; end: 10852b0bf; +[SCBitmojiAppInfoProvider isBitmojiAppInstalled] */

undefined * FUN_10852b044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110de2c18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf2cf00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}


