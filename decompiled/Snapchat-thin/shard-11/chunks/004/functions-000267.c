/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108517a74; end: 108517ba3;  */

undefined8 FUN_108517a74(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108517b54;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108517b54;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108517b14;
    param_1 = 0;
  }
  else {
LAB_108517b14:
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
LAB_108517b54:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108517ba4; end: 108517c07;  */

undefined ** FUN_108517ba4(void)

{
  int iVar1;
  
  if ((bRam0000000113827bc8 & 1) == 0) {
    iVar1 = 0x13827bc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263a10,0x100000000);
      ___cxa_guard_release(0x113827bc8);
    }
  }
  return &PTR_PTR_113263a10;
}



/* Entry: 108517c08; end: 108517c8f;  */

void FUN_108517c08(uint *param_1,undefined1 *param_2)

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



/* Entry: 108517c90; end: 108517d1b;  */

void FUN_108517c90(long param_1,undefined1 *param_2)

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



/* Entry: 108517d1c; end: 108517d27; +[SCStoriesFriendStoryPlaybackSequence table] */

undefined * FUN_108517d1c(void)

{
  return &UNK_10f4a19c1;
}



/* Entry: 108517d28; end: 108517f7f; +[SCStoriesFriendStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_108517d28(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar3 = PTR_PTR_1126d6788;
  _objc_alloc(PTR_PTR_1126d6788);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_108517e74:
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
    if (uVar4 < 9) goto LAB_108517e74;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
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
    if ((10 < uVar4) && (*(short *)((long)piVar1 + lVar5 + 10) != 0)) {
      puVar9 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      goto LAB_108517e7c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_108517e7c:
  func_0x00010c05bc60(puVar3,param_2,puVar7,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108517f80; end: 108517fa3; +[SCStoriesFriendStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_108517f80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108517f9c;
  auVar1._0_8_ = 0x108517f94;
  return auVar1;
}



/* Entry: 108517fa4; end: 1085180d7;  */

void FUN_108517fa4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar4 = PTR_PTR_1126d6780;
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
    FUN_1085180d8(puVar4,0xffffffffffffffff,lVar1,lVar2,lVar3);
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



/* Entry: 1085180d8; end: 1085181db;  */

undefined1 *
FUN_1085180d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    puStack_48 = PTR_PTR_1126fcb28;
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



/* Entry: 1085181dc; end: 10851824f;  */

void FUN_1085181dc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108518250();
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



/* Entry: 108518250; end: 1085185f3;  */

void FUN_108518250(undefined *param_1)

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
        func_0x000107c310d8(puVar6,&UNK_10f4a19e8);
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
            _objc_opt_class(PTR_PTR_1126d6788);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_108518530;
            puVar6 = PTR_PTR_1126d6780;
            _objc_alloc(PTR_PTR_1126d6780);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c15e620(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_1085180d8(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_108518350;
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
      _objc_opt_class(PTR_PTR_1126d6788);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d6780;
        _objc_alloc(PTR_PTR_1126d6780);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_1085180d8(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_108518350:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108518538;
      }
LAB_108518530:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108518538:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1085185f4; end: 108518667;  */

void FUN_1085185f4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108518250();
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



/* Entry: 108518668; end: 1085186cb;  */

void FUN_108518668(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d6788;
    _objc_alloc(PTR_PTR_1126d6788);
    func_0x00010c05bc60();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085186cc; end: 108518707; -[SCStoriesFriendStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_1085186cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108518708; end: 108518713; -[SCStoriesFriendStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_108518708(void)

{
  return &UNK_10f4a19c1;
}



/* Entry: 108518714; end: 10851875b; -[SCStoriesFriendStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_108518714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df339c3,0x94,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10851875c; end: 108518ae3; -[SCStoriesFriendStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851875c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108518668(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108518ae4(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a1a7e);
    if (lVar6 == 0) goto LAB_108518a80;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108518a80;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d6788);
    func_0x00010c21c9a0(puVar7);
LAB_108518a68:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a1a3c);
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
            _objc_opt_class(PTR_PTR_1126d6788);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108518a8c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108518a8c;
    }
    FUN_108518668(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108518ae4(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a1acd);
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
        _objc_opt_class(PTR_PTR_1126d6788);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108518a68;
      }
    }
LAB_108518a80:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108518a8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108518ae4; end: 108518ed3;  */

ulong FUN_108518ae4(ulong param_1,ulong param_2)

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
LAB_108518c50:
    (**(code **)((long)*pppuStack_f0 + lVar15))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar15 = 0x28;
    goto LAB_108518c50;
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
  FUN_108518ed4(param_1,uVar5);
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
  func_0x000108516a90(param_1,10,uVar13);
  func_0x000108516b00(param_1,8,uVar7 & 0xffffffff);
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
    goto LAB_108518fb4;
  }
  pcVar8 = pcVar12;
  _CFStringGetCStringPtr(pcVar12,0x8000100);
  if (pcVar8 != (char *)0x0) {
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    func_0x000107c27df0(uVar13,pcVar8,pcVar9);
    goto LAB_108518fb4;
  }
  pcVar8 = pcVar12;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar8 == (char *)0x0) {
    pcVar8 = pcVar12;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar8 != (char *)0x0) goto LAB_108518f74;
    uVar13 = 0;
  }
  else {
LAB_108518f74:
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
LAB_108518fb4:
  _objc_release(pcVar12);
  return uVar13;
}



/* Entry: 108518ed4; end: 108519003;  */

undefined8 FUN_108518ed4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108518fb4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108518fb4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108518f74;
    param_1 = 0;
  }
  else {
LAB_108518f74:
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
LAB_108518fb4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108519004; end: 10851908f;  */

void FUN_108519004(long param_1,undefined1 *param_2)

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



/* Entry: 108519090; end: 1085190e3;  */

undefined8 FUN_108519090(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 1085190e4; end: 108519107; +[SCStoriesMyStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_1085190e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108519100;
  auVar1._0_8_ = 0x1085190f8;
  return auVar1;
}



/* Entry: 108519108; end: 108519227;  */

void FUN_108519108(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar5 = PTR_PTR_1126cf440;
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
    func_0x00010c25b720(param_2);
    lVar3 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c297440(param_2);
    FUN_108519228(puVar5,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4);
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



/* Entry: 108519228; end: 10851930b;  */

undefined1 *
FUN_108519228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126fcb30;
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
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10851930c; end: 10851937f;  */

void FUN_10851930c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108519380();
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



/* Entry: 108519380; end: 10851970f;  */

void FUN_108519380(undefined *param_1)

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
        func_0x000107c310d8(puVar7,&UNK_10f4a1b53);
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
            _objc_opt_class(PTR_PTR_1126b1338);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_108519660;
            puVar7 = PTR_PTR_1126cf440;
            _objc_alloc(PTR_PTR_1126cf440);
            puVar2 = puVar3;
            func_0x00010c259cc0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c25b720(puVar3);
            puVar5 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c297440(puVar3);
            FUN_108519228(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_108519484;
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
      _objc_opt_class(PTR_PTR_1126b1338);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126cf440;
        _objc_alloc(PTR_PTR_1126cf440);
        puVar2 = puVar3;
        func_0x00010c259cc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25b720(puVar3);
        puVar5 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c297440(puVar3);
        FUN_108519228(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_108519484:
        _objc_release(puVar5);
        _objc_release(puVar2);
        goto LAB_108519668;
      }
LAB_108519660:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_108519668:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108519710; end: 108519783;  */

void FUN_108519710(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108519380();
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



/* Entry: 108519784; end: 1085197e7;  */

void FUN_108519784(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b1338;
    _objc_alloc(PTR_PTR_1126b1338);
    func_0x00010c04dbe0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085197e8; end: 108519817; -[SCStoriesMyStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_1085197e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108519818; end: 108519823; -[SCStoriesMyStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_108519818(void)

{
  return &UNK_10f4a1b30;
}



/* Entry: 108519824; end: 10851986b; -[SCStoriesMyStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_108519824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df33a57,0x92,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10851986c; end: 108519bf3; -[SCStoriesMyStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851986c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108519784(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108519bf4(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a1be2);
    if (lVar6 == 0) goto LAB_108519b90;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108519b90;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b1338);
    func_0x00010c21c9a0(puVar7);
LAB_108519b78:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a1ba4);
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
            _objc_opt_class(PTR_PTR_1126b1338);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108519b9c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108519b9c;
    }
    FUN_108519784(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108519bf4(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a1c2e);
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
        _objc_opt_class(PTR_PTR_1126b1338);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108519b78;
      }
    }
LAB_108519b90:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108519b9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108519bf4; end: 108519f4f;  */

ulong FUN_108519bf4(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  ulong uVar6;
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
  uVar13 = param_2;
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
  _objc_retain(uVar13);
  uVar4 = uVar13;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar15 = *plStack_140;
    do {
      uVar16 = 0;
      do {
        if (*plStack_140 != lVar15) {
          _objc_enumerationMutation(uVar13);
        }
        uVar14 = *(undefined8 *)(lStack_148 + uVar16 * 8);
        _objc_retain(uVar14);
        pppuVar5 = &ppuStack_108;
        FUN_108511784(pppuVar5,param_1,uVar14);
        uStack_154 = SUB84(pppuVar5,0);
        FUN_1085116c4(&lStack_170,&uStack_154);
        _objc_release(uVar14);
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
      uVar4 = uVar13;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar13);
  _objc_release(uVar13);
  _objc_release(uVar13);
  if (pppuStack_f0 == &ppuStack_108) {
    lVar15 = 0x20;
LAB_108519d60:
    (**(code **)((long)*pppuStack_f0 + lVar15))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar15 = 0x28;
    goto LAB_108519d60;
  }
  uVar13 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_108519f50(param_1,uVar13);
  uVar16 = param_2;
  func_0x00010c25b720(param_2);
  lVar15 = 0x11326399a;
  if (lStack_168 - lStack_170 != 0) {
    lVar15 = lStack_170;
  }
  uVar6 = param_1;
  func_0x000108516b70(param_1,lVar15,lStack_168 - lStack_170 >> 2);
  uVar7 = param_2;
  func_0x00010c297440(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,10,uVar7 & 0xffffffff,0);
  func_0x000107c27db0(param_1,6,uVar16 & 0xffffffff,0);
  func_0x000108516b00(param_1,8,uVar6 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar4 & 0xffffffff);
  pcVar12 = (char *)(ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x000107c27dc0(param_1);
  _objc_release(uVar13);
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
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume(uVar13);
  _objc_retain(pcVar12);
  if (pcVar12 == (char *)0x0) {
    uVar13 = 0;
    goto LAB_10851a030;
  }
  pcVar8 = pcVar12;
  _CFStringGetCStringPtr(pcVar12,0x8000100);
  if (pcVar8 != (char *)0x0) {
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    func_0x000107c27df0(uVar13,pcVar8,pcVar9);
    goto LAB_10851a030;
  }
  pcVar8 = pcVar12;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar8 == (char *)0x0) {
    pcVar8 = pcVar12;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar8 != (char *)0x0) goto LAB_108519ff0;
    uVar13 = 0;
  }
  else {
LAB_108519ff0:
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
LAB_10851a030:
  _objc_release(pcVar12);
  return uVar13;
}



/* Entry: 108519f50; end: 10851a07f;  */

undefined8 FUN_108519f50(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10851a030;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10851a030;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108519ff0;
    param_1 = 0;
  }
  else {
LAB_108519ff0:
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
LAB_10851a030:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851a080; end: 10851a0e3;  */

undefined ** FUN_10851a080(void)

{
  int iVar1;
  
  if ((bRam0000000113827c50 & 1) == 0) {
    iVar1 = 0x13827c50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263af0,0x100000000);
      ___cxa_guard_release(0x113827c50);
    }
  }
  return &PTR_PTR_113263af0;
}



/* Entry: 10851a0e4; end: 10851a16b;  */

void FUN_10851a0e4(uint *param_1,undefined1 *param_2)

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



/* Entry: 10851a16c; end: 10851a1f7;  */

void FUN_10851a16c(long param_1,undefined1 *param_2)

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



/* Entry: 10851a1f8; end: 10851a203; +[SCStoriesNonExistingUser table] */

undefined * FUN_10851a1f8(void)

{
  return &UNK_10f4a1c84;
}



/* Entry: 10851a204; end: 10851a2f3; +[SCStoriesNonExistingUser immutableObjectParse:bufferSize:] */

void FUN_10851a204(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar4 = PTR_PTR_1126d9e78;
  _objc_alloc(PTR_PTR_1126d9e78);
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
  func_0x00010c05af80(uVar8,puVar4,param_2,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10851a2f4; end: 10851a317; +[SCStoriesNonExistingUser objectClassFunctionPointer] */

undefined1  [16] FUN_10851a2f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10851a310;
  auVar1._0_8_ = 0x10851a308;
  return auVar1;
}



/* Entry: 10851a318; end: 10851a3eb;  */

void FUN_10851a318(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar2 = PTR_PTR_1126d9e80;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5aac0(param_2);
    FUN_10851a3ec(puVar2,0xffffffffffffffff,lVar1);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10851a3ec; end: 10851a497;  */

undefined1 * FUN_10851a3ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_48 = PTR_PTR_1126fcb38;
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



/* Entry: 10851a498; end: 10851a50b;  */

void FUN_10851a498(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851a50c();
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



/* Entry: 10851a50c; end: 10851a827;  */

void FUN_10851a50c(undefined *param_1)

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
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010bf636c0();
        _objc_release(puVar4);
        func_0x000107c310d8(puVar1,&UNK_10f4a1ca3);
        puVar4 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_10851a794;
        puVar4 = param_1;
        func_0x00010c2923e0(param_1);
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
          _objc_opt_class(PTR_PTR_1126d9e78);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_10851a78c;
          puVar4 = PTR_PTR_1126d9e80;
          _objc_alloc(PTR_PTR_1126d9e80);
          puVar1 = puVar3;
          func_0x00010c2923e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5aac0(puVar3);
          FUN_10851a3ec(puVar4,puVar2,puVar1);
          param_1 = puVar3;
          goto LAB_10851a5e4;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar4 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d9e78);
      puVar3 = puVar4;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar4);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126d9e80;
        _objc_alloc(PTR_PTR_1126d9e80);
        puVar1 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5aac0(puVar3);
        FUN_10851a3ec(puVar4,puVar2,puVar1);
        param_1 = puVar3;
LAB_10851a5e4:
        _objc_release(puVar1);
        goto LAB_10851a794;
      }
LAB_10851a78c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_10851a794:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10851a828; end: 10851a89b;  */

void FUN_10851a828(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851a50c();
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



/* Entry: 10851a89c; end: 10851a8ff;  */

void FUN_10851a89c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d9e78;
    _objc_alloc(PTR_PTR_1126d9e78);
    func_0x00010c05af80(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10851a900; end: 10851a90b; -[SCStoriesNonExistingUserChangeRequest .cxx_destruct] */

void FUN_10851a900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10851a90c; end: 10851a917; -[SCStoriesNonExistingUserChangeRequest table] */

undefined * FUN_10851a90c(void)

{
  return &UNK_10f4a1c84;
}



/* Entry: 10851a918; end: 10851a95f; -[SCStoriesNonExistingUserChangeRequest createTableWithSQLite:] */

void FUN_10851a918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df33ae9,0x8c,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10851a960; end: 10851ace7; -[SCStoriesNonExistingUserChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851a960(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10851a89c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10851ace8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a1d29);
    if (lVar6 == 0) goto LAB_10851ac84;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10851ac84;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e78);
    func_0x00010c21c9a0(puVar7);
LAB_10851ac6c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a1cef);
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
            _objc_opt_class(PTR_PTR_1126d9e78);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10851ac90;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10851ac90;
    }
    FUN_10851a89c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10851ace8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a1d70);
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
        _objc_opt_class(PTR_PTR_1126d9e78);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10851ac6c;
      }
    }
LAB_10851ac84:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10851ac90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10851ace8; end: 10851aebf;  */

ulong FUN_10851ace8(undefined8 param_1,ulong param_2,char *param_3)

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
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_10851ade8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_2,pcVar5,pcVar6);
    goto LAB_10851ade8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_10851ada8;
    uVar9 = 0;
  }
  else {
LAB_10851ada8:
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
LAB_10851ade8:
  _objc_release(pcVar4);
  func_0x00010bf5aac0(param_3);
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



/* Entry: 10851aec0; end: 10851af23;  */

undefined ** FUN_10851aec0(void)

{
  int iVar1;
  
  if ((bRam0000000113827c58 & 1) == 0) {
    iVar1 = 0x13827c58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263b60,0x100000000);
      ___cxa_guard_release(0x113827c58);
    }
  }
  return &PTR_PTR_113263b60;
}



/* Entry: 10851af24; end: 10851afab;  */

void FUN_10851af24(uint *param_1,undefined1 *param_2)

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



/* Entry: 10851afac; end: 10851b037;  */

void FUN_10851afac(long param_1,undefined1 *param_2)

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



/* Entry: 10851b038; end: 10851b043; +[SCStoriesOutgoingFriendStoryPlaybackSequence table] */

undefined * FUN_10851b038(void)

{
  return &UNK_10f4a1dc1;
}



/* Entry: 10851b044; end: 10851b29b; +[SCStoriesOutgoingFriendStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_10851b044(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar3 = PTR_PTR_1126d5c20;
  _objc_alloc(PTR_PTR_1126d5c20);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10851b190:
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
    if (uVar4 < 9) goto LAB_10851b190;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
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
    if ((10 < uVar4) && (*(short *)((long)piVar1 + lVar5 + 10) != 0)) {
      puVar9 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      goto LAB_10851b198;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10851b198:
  func_0x00010c05bc60(puVar3,param_2,puVar7,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10851b29c; end: 10851b2bf; +[SCStoriesOutgoingFriendStoryPlaybackSequence objectClassFunctionPointer] */

undefined1  [16] FUN_10851b29c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10851b2b8;
  auVar1._0_8_ = 0x10851b2b0;
  return auVar1;
}



/* Entry: 10851b2c0; end: 10851b3f3;  */

void FUN_10851b2c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar4 = PTR_PTR_1126d67d0;
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
    FUN_10851b3f4(puVar4,0xffffffffffffffff,lVar1,lVar2,lVar3);
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



/* Entry: 10851b3f4; end: 10851b4f7;  */

undefined1 *
FUN_10851b3f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    puStack_48 = PTR_PTR_1126fcb40;
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



/* Entry: 10851b4f8; end: 10851b56b;  */

void FUN_10851b4f8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851b56c();
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



/* Entry: 10851b56c; end: 10851b90f;  */

void FUN_10851b56c(undefined *param_1)

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
        func_0x000107c310d8(puVar6,&UNK_10f4a1df0);
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
            _objc_opt_class(PTR_PTR_1126d5c20);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_10851b84c;
            puVar6 = PTR_PTR_1126d67d0;
            _objc_alloc(PTR_PTR_1126d67d0);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c25b340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c15e620(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10851b3f4(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_10851b66c;
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
      _objc_opt_class(PTR_PTR_1126d5c20);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d67d0;
        _objc_alloc(PTR_PTR_1126d67d0);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25b340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e620(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10851b3f4(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_10851b66c:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10851b854;
      }
LAB_10851b84c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10851b854:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10851b910; end: 10851b983;  */

void FUN_10851b910(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851b56c();
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



/* Entry: 10851b984; end: 10851b9e7;  */

void FUN_10851b984(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d5c20;
    _objc_alloc(PTR_PTR_1126d5c20);
    func_0x00010c05bc60();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10851b9e8; end: 10851ba23; -[SCStoriesOutgoingFriendStoryPlaybackSequenceChangeRequest .cxx_destruct] */

void FUN_10851b9e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10851ba24; end: 10851ba2f; -[SCStoriesOutgoingFriendStoryPlaybackSequenceChangeRequest table] */

undefined * FUN_10851ba24(void)

{
  return &UNK_10f4a1dc1;
}



/* Entry: 10851ba30; end: 10851ba77; -[SCStoriesOutgoingFriendStoryPlaybackSequenceChangeRequest createTableWithSQLite:] */

void FUN_10851ba30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df33b75,0x9c,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10851ba78; end: 10851bdff; -[SCStoriesOutgoingFriendStoryPlaybackSequenceChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851ba78(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_10851b984(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10851be00(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f4a1e96);
    if (lVar6 == 0) goto LAB_10851bd9c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10851bd9c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d5c20);
    func_0x00010c21c9a0(puVar7);
LAB_10851bd84:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f4a1e4c);
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
            _objc_opt_class(PTR_PTR_1126d5c20);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10851bda8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10851bda8;
    }
    FUN_10851b984(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10851be00(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f4a1eed);
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
        _objc_opt_class(PTR_PTR_1126d5c20);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10851bd84;
      }
    }
LAB_10851bd9c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10851bda8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10851be00; end: 10851c1ef;  */

ulong FUN_10851be00(ulong param_1,ulong param_2)

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
LAB_10851bf6c:
    (**(code **)((long)*pppuStack_f0 + lVar15))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar15 = 0x28;
    goto LAB_10851bf6c;
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
  FUN_10851c1f0(param_1,uVar5);
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
  func_0x000108516a90(param_1,10,uVar13);
  func_0x000108516b00(param_1,8,uVar7 & 0xffffffff);
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
    goto LAB_10851c2d0;
  }
  pcVar8 = pcVar12;
  _CFStringGetCStringPtr(pcVar12,0x8000100);
  if (pcVar8 != (char *)0x0) {
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    func_0x000107c27df0(uVar13,pcVar8,pcVar9);
    goto LAB_10851c2d0;
  }
  pcVar8 = pcVar12;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar8 == (char *)0x0) {
    pcVar8 = pcVar12;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar8 != (char *)0x0) goto LAB_10851c290;
    uVar13 = 0;
  }
  else {
LAB_10851c290:
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
LAB_10851c2d0:
  _objc_release(pcVar12);
  return uVar13;
}



/* Entry: 10851c1f0; end: 10851c31f;  */

undefined8 FUN_10851c1f0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10851c2d0;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10851c2d0;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10851c290;
    param_1 = 0;
  }
  else {
LAB_10851c290:
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
LAB_10851c2d0:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851c320; end: 10851c383;  */

undefined ** FUN_10851c320(void)

{
  int iVar1;
  
  if ((bRam0000000113827c60 & 1) == 0) {
    iVar1 = 0x13827c60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113263bd0,0x100000000);
      ___cxa_guard_release(0x113827c60);
    }
  }
  return &PTR_PTR_113263bd0;
}



/* Entry: 10851c384; end: 10851c40b;  */

void FUN_10851c384(uint *param_1,undefined1 *param_2)

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



/* Entry: 10851c40c; end: 10851c497;  */

void FUN_10851c40c(long param_1,undefined1 *param_2)

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



/* Entry: 10851c498; end: 10851c4cb;  */

undefined8 FUN_10851c498(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 10851c4cc; end: 10851c527;  */

undefined8 FUN_10851c4cc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c0f77c0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851c528; end: 10851c657;  */

long FUN_10851c528(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((10 < *puVar2) && ((ulong)puVar2[5] != 0)) &&
      (0xc < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[5]) == '\x01')) &&
     ((ulong)puVar2[6] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[6]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 10851c658; end: 10851c853; +[SCStoriesPendingCustomStoryMetadata immutableObjectParse:bufferSize:] */

void FUN_10851c658(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d8ff0;
  _objc_alloc(PTR_PTR_1126d8ff0);
  lVar9 = (long)*piVar1;
  uVar2 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar2 < 5) {
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    if (((ushort *)((long)piVar1 - lVar9))[2] == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar2 = *(ushort *)((long)piVar1 - lVar9);
    }
    if (((uVar2 < 7) || (uVar2 < 9)) || (*(short *)((long)piVar1 + (8 - lVar9)) == 0)) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  piVar4 = piVar1;
  FUN_10851c528(piVar1);
  piVar5 = piVar1;
  func_0x00010851c574(piVar1);
  piVar6 = piVar1;
  func_0x00010851c5c0(piVar1);
  piVar7 = piVar1;
  func_0x00010851c60c(piVar1);
  FUN_10850cc44(piVar4,piVar5,piVar6,piVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar8 != 0)) {
    uVar12 = *(undefined8 *)((long)piVar1 + uVar8);
  }
  func_0x00010c03bf80(uVar12,puVar3);
  _objc_release(piVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10851c854; end: 10851c867; +[SCStoriesPendingCustomStoryMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_10851c854(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10851c8b4;
  auVar1._0_8_ = FUN_10851c868;
  return auVar1;
}



/* Entry: 10851c868; end: 10851c8b3;  */

void FUN_10851c868(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf6389e8;
  _strcmp(&DAT_10f6389e8,param_1);
  if (iVar1 != 0) {
    _strcmp(&UNK_10f4a1f8e,param_1);
  }
  return;
}



/* Entry: 10851c8b4; end: 10851c9b3;  */

bool FUN_10851c8b4(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x000107c310d8(param_2,&UNK_10f4a2002);
    _sqlite3_bind_int64();
    uVar4 = 0;
    if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar3);
    }
    _sqlite3_bind_double(uVar4,param_2,2);
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x000107c310d8(param_2,&UNK_10f4a1fa8);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((long)piVar1 + uVar3);
    }
    _sqlite3_bind_int64(param_2,2,uVar2);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10851c9b4; end: 10851cacf;  */

undefined1 *
FUN_10851c9b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_1126fcb48;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10851cad0; end: 10851ceab;  */

void FUN_10851cad0(undefined *param_1)

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
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar7,&UNK_10f4a2086);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c11ac00(param_1);
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
            _objc_opt_class(PTR_PTR_1126d8ff0);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_10851cde4;
            puVar7 = PTR_PTR_1126d8fe8;
            _objc_alloc(PTR_PTR_1126d8fe8);
            puVar2 = puVar3;
            func_0x00010c11ac00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c27dd80(puVar3);
            puVar5 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bfa2680(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f77c0(puVar3);
            FUN_10851c9b4(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_10851cbec;
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
      _objc_opt_class(PTR_PTR_1126d8ff0);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d8fe8;
        _objc_alloc(PTR_PTR_1126d8fe8);
        puVar2 = puVar3;
        func_0x00010c11ac00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c27dd80(puVar3);
        puVar5 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bfa2680(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f77c0(puVar3);
        FUN_10851c9b4(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_10851cbec:
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        goto LAB_10851cdec;
      }
LAB_10851cde4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10851cdec:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10851ceac; end: 10851cf1f;  */

void FUN_10851ceac(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851cad0();
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



/* Entry: 10851cf20; end: 10851d1cb;  */

void FUN_10851cf20(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8fe8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_10851cad0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar6 = PTR_PTR_1126d8fe8;
    _objc_retain(param_2);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126d8fe8;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c11ac00(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c27dd80(param_2);
      puVar4 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010bfa2680(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f77c0(param_2);
      FUN_10851c9b4(puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar6 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010c27dd80();
    *(undefined **)(puVar1 + 0x20) = puVar6;
    puVar6 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010bfa2680(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    func_0x00010c0f77c0(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10851d1cc; end: 10851d233;  */

void FUN_10851d1cc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8ff0;
    _objc_alloc(PTR_PTR_1126d8ff0);
    func_0x00010c03bf80(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10851d234; end: 10851d26f; -[SCStoriesPendingCustomStoryMetadataChangeRequest .cxx_destruct] */

void FUN_10851d234(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10851d270; end: 10851d27b; -[SCStoriesPendingCustomStoryMetadataChangeRequest table] */

undefined * FUN_10851d270(void)

{
  return &UNK_10f4a1f68;
}



/* Entry: 10851d27c; end: 10851d38f; -[SCStoriesPendingCustomStoryMetadataChangeRequest createTableWithSQLite:] */

void FUN_10851d27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df33c11,0xa1,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df33cb2,0x75,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10df33d27,0x92,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df33db9,0x9c,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10df33e55,0xd1,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 10851d390; end: 10851da53; -[SCStoriesPendingCustomStoryMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10851d390(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

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
  double dVar14;
  undefined8 uVar15;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar6 = param_2;
  if (iVar3 == 1) {
    FUN_10851d1cc(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    FUN_10851da54(param_5,puVar6);
    func_0x000107c27dc4(param_5,lVar7,0,0);
    puVar13 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    func_0x0001050da3a4();
    _objc_release(puVar11);
    lVar7 = param_4;
    func_0x000107c310d8(param_4,&UNK_10f4a21cc);
    if (lVar7 == 0) goto LAB_10851d9a8;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_10851d9a8;
    uVar12 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      lVar7 = param_4;
      func_0x000107c310d8(param_4,&UNK_10f4a1fa8);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(lVar7,2,uVar9);
      _sqlite3_step();
      if ((int)lVar7 != 0x65) goto LAB_10851d9a8;
    }
    if (((uint)puVar8 >> 8 & 1) != 0) {
      func_0x000107c310d8(param_4,&UNK_10f4a2002);
      _sqlite3_bind_int64();
      uVar15 = 0;
      if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar10 != 0)) {
        uVar15 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_double(uVar15,param_4,2);
      _sqlite3_step();
      if ((int)param_4 != 0x65) goto LAB_10851d9a8;
    }
    *(undefined8 *)(param_2 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8ff0);
    func_0x00010c21c9a0(puVar11);
LAB_10851d980:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar7 = param_4;
        func_0x000107c310d8(param_4,&UNK_10f4a20e0);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            lVar7 = param_4;
            func_0x000107c310d8(param_4,&UNK_10f4a2121);
            if (lVar7 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar7 != 0x65) goto LAB_10851d4f4;
            }
            func_0x000107c310d8(param_4,&UNK_10f4a216c);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_10851d4f4;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d8ff0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10851d9b4;
          }
        }
      }
LAB_10851d4f4:
      puVar11 = (undefined *)0x0;
      goto LAB_10851d9b4;
    }
    FUN_10851d1cc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    FUN_10851da54(param_5,puVar6);
    func_0x000107c27dc4(param_5,lVar7,0,0);
    puVar13 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar6);
    lVar7 = param_4;
    func_0x000107c310d8(param_4,&UNK_10f4a2221);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
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
        _objc_opt_class(PTR_PTR_1126d8ff0);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010c27dd80();
        puVar5 = puVar6;
        func_0x00010c27dd80();
        if (puVar11 == puVar5) {
LAB_10851d8c0:
          func_0x00010c0f77c0(puVar8);
          dVar14 = param_1;
          func_0x00010c0f77c0(puVar6);
          if (param_1 != dVar14) {
            func_0x000107c310d8(param_4,&UNK_10f4a22da);
            uVar15 = 0;
            if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar10 != 0)) {
              uVar15 = *(undefined8 *)((long)piVar1 + uVar10);
            }
            _sqlite3_bind_double(uVar15,param_4,1);
            _sqlite3_bind_int64(param_4,2,uVar12);
            _sqlite3_step();
            if ((int)param_4 != 0x65) goto LAB_10851d998;
          }
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar11 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d8ff0);
          func_0x00010c21c9a0(puVar11);
          goto LAB_10851d980;
        }
        lVar7 = param_4;
        func_0x000107c310d8(param_4,&UNK_10f4a2280);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
        }
        _sqlite3_bind_int64(lVar7,1,uVar9);
        _sqlite3_bind_int64(lVar7,2,uVar12);
        _sqlite3_step();
        if ((int)lVar7 == 0x65) goto LAB_10851d8c0;
LAB_10851d998:
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
LAB_10851d9a8:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_10851d9b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10851da54; end: 10851dc1f;  */

ulong FUN_10851da54(undefined8 param_1,ulong param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bfa2680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_10850d71c(param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_10851dc20(param_2,uVar4);
  uVar7 = param_3;
  func_0x00010c27dd80(param_3);
  uVar8 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_10851dc20(param_2,uVar8);
  func_0x00010c0f77c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,0xe);
  func_0x000107c27db0(param_2,6,uVar7 & 0xffffffff,0);
  func_0x000100c3b11c(param_2,0xc,uVar5 >> 0x20);
  func_0x000107c27ddc(param_2,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar6 & 0xffffffff);
  func_0x000100ab13ac(param_2,10,(uint)uVar5 & 0xff,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10851dc20; end: 10851dd4f;  */

undefined8 FUN_10851dc20(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10851dd00;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10851dd00;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10851dcc0;
    param_1 = 0;
  }
  else {
LAB_10851dcc0:
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
LAB_10851dd00:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10851dd50; end: 10851de07;  */

undefined8 FUN_10851dd50(void)

{
  int iVar1;
  
  if ((bRam0000000113827d50 & 1) == 0) {
    iVar1 = 0x13827d50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113827ce8 = 0xe;
      puRam0000000113827cf0 = &UNK_10f4a235e;
      uRam0000000113827cf8 = 0x10001;
      pcRam0000000113827d00 = FUN_10851de08;
      pcRam0000000113827d08 = FUN_10851de40;
      ppuRam0000000113827ce0 = &PTR_DAT_110a4ff40;
      uRam0000000113827d20 = 0;
      uRam0000000113827d18 = 0;
      uRam0000000113827d30 = 0;
      uRam0000000113827d28 = 0;
      uRam0000000113827d40 = 0;
      uRam0000000113827d38 = 0;
      uRam0000000113827d48 = 0;
      ___cxa_atexit(0x1084ebf6c,0x113827ce0,0x100000000);
      ___cxa_guard_release(0x113827d50);
    }
  }
  return 0x113827ce0;
}



/* Entry: 10851de08; end: 10851de3f;  */

undefined4 FUN_10851de08(uint *param_1,undefined1 *param_2)

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



/* Entry: 10851de40; end: 10851de93;  */

undefined8 FUN_10851de40(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 10851de94; end: 10851de9f; +[SCStoriesRankedStoryIds table] */

undefined * FUN_10851de94(void)

{
  return &UNK_10f4a2363;
}



/* Entry: 10851dea0; end: 10851e01b; +[SCStoriesRankedStoryIds immutableObjectParse:bufferSize:] */

void FUN_10851dea0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d9ea0;
  _objc_alloc(PTR_PTR_1126d9ea0);
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
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar8 + (ulong)*puVar8 + 4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            func_0x00010befa120(puVar4,param_2,puVar6);
          }
          _objc_release(puVar6);
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar2 + 1 + *puVar2);
      }
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      goto LAB_10851dfb8;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10851dfb8:
  func_0x00010c055fa0(puVar3,param_2,uVar7,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10851e01c; end: 10851e03f; +[SCStoriesRankedStoryIds objectClassFunctionPointer] */

undefined1  [16] FUN_10851e01c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10851e038;
  auVar1._0_8_ = 0x10851e030;
  return auVar1;
}



/* Entry: 10851e040; end: 10851e11b;  */

void FUN_10851e040(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126d9ea8;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c27dd80(param_2);
    lVar2 = param_2;
    func_0x00010c11f8a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10851e11c(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10851e11c; end: 10851e1bf;  */

undefined1 * FUN_10851e11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fcb50;
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



/* Entry: 10851e1c0; end: 10851e233;  */

void FUN_10851e1c0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10851e234();
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



/* Entry: 10851e234; end: 10851e507;  */

void FUN_10851e234(undefined *param_1)

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
      func_0x000107c310d8(puVar5,&UNK_10f4a237d);
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
          _objc_opt_class(PTR_PTR_1126d9ea0);
          _sqlite3_column_blob(puVar5,1);
          _sqlite3_column_bytes(puVar5,1);
          puVar3 = puVar2;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar2);
          _sqlite3_reset(puVar5);
          if (puVar3 == (undefined *)0x0) goto LAB_10851e47c;
          puVar5 = PTR_PTR_1126d9ea8;
          _objc_alloc(PTR_PTR_1126d9ea8);
          puVar2 = puVar3;
          func_0x00010c27dd80(puVar3);
          puVar4 = puVar3;
          func_0x00010c11f8a0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_10851e11c(puVar5,puVar1,puVar2,puVar4);
          param_1 = puVar3;
          goto LAB_10851e318;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d9ea0);
      puVar2 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar2 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d9ea8;
        _objc_alloc(PTR_PTR_1126d9ea8);
        puVar3 = puVar2;
        func_0x00010c27dd80(puVar2);
        puVar4 = puVar2;
        func_0x00010c11f8a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10851e11c(puVar5,puVar1,puVar3,puVar4);
        param_1 = puVar2;
LAB_10851e318:
        _objc_release(puVar4);
        goto LAB_10851e484;
      }
LAB_10851e47c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10851e484:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


