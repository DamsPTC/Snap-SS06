/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ff3bb4; end: 107ff3c8f;  */

undefined1 *
FUN_107ff3bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

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
    puStack_48 = PTR_PTR_1126fc080;
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
      *(undefined4 *)((long)plVar1 + 0x14) = param_5;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107ff3c90; end: 107ff3fff;  */

void FUN_107ff3c90(undefined *param_1)

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
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f46ff75);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c241220(param_1);
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
            _objc_opt_class(PTR_PTR_1126d8d00);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_107ff3f50;
            puVar6 = PTR_PTR_1126d8d08;
            _objc_alloc(PTR_PTR_1126d8d08);
            puVar2 = puVar3;
            func_0x00010c241220(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf30680(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf5f4e0(puVar3);
            FUN_107ff3bb4(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_107ff3d84;
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
      _objc_opt_class(PTR_PTR_1126d8d00);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d8d08;
        _objc_alloc(PTR_PTR_1126d8d08);
        puVar2 = puVar3;
        func_0x00010c241220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf30680(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf5f4e0(puVar3);
        FUN_107ff3bb4(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_107ff3d84:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_107ff3f58;
      }
LAB_107ff3f50:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_107ff3f58:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ff4000; end: 107ff4073;  */

void FUN_107ff4000(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_107ff3c90();
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



/* Entry: 107ff4074; end: 107ff429f;  */

void FUN_107ff4074(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d8d08;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_107ff3c90();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126d8d08;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126d8d08;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf30680(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf5f4e0(param_1);
      FUN_107ff3bb4(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
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
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf30680(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf5f4e0();
    *(int *)(puVar1 + 0x14) = (int)puVar5;
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



/* Entry: 107ff42a0; end: 107ff4303;  */

void FUN_107ff42a0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d8d00;
    _objc_alloc(PTR_PTR_1126d8d00);
    func_0x00010c047a80();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ff4304; end: 107ff4333; -[SCMemoriesTinyClipCaptionResultChangeRequest .cxx_destruct] */

void FUN_107ff4304(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107ff4334; end: 107ff433f; -[SCMemoriesTinyClipCaptionResultChangeRequest table] */

undefined * FUN_107ff4334(void)

{
  return &UNK_10f46ff55;
}



/* Entry: 107ff4340; end: 107ff4387; -[SCMemoriesTinyClipCaptionResultChangeRequest createTableWithSQLite:] */

void FUN_107ff4340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10deec7e4,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107ff4388; end: 107ff470f; -[SCMemoriesTinyClipCaptionResultChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107ff4388(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_107ff42a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107ff4710(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f46fffd);
    if (lVar6 == 0) goto LAB_107ff46ac;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_107ff46ac;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8d00);
    func_0x00010c21c9a0(puVar7);
LAB_107ff4694:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f46ffc2);
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
            _objc_opt_class(PTR_PTR_1126d8d00);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107ff46b8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_107ff46b8;
    }
    FUN_107ff42a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_107ff4710(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f470045);
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
        _objc_opt_class(PTR_PTR_1126d8d00);
        func_0x00010c21c9a0(puVar7);
        goto LAB_107ff4694;
      }
    }
LAB_107ff46ac:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_107ff46b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ff4710; end: 107ff497f;  */

ulong FUN_107ff4710(ulong param_1,char *param_2)

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
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_107ff4814;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_107ff4814;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_107ff47d4;
    uVar9 = 0;
  }
  else {
LAB_107ff47d4:
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
LAB_107ff4814:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010bf30680();
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
  func_0x00010bf5f4e0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000100c3b024(param_1,0x10,pcVar6,0);
  func_0x0001001ce220(param_1,0xe,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107ff4980; end: 107ff4a3f;  */

void FUN_107ff4980(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    puVar3 = PTR_PTR_1126d8d18;
    func_0x00010c0f40e0(PTR_PTR_1126d8d18,param_2,puVar2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0 && lStack_38 == 0) {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ff4a40; end: 107ff4a93;  */

void FUN_107ff4a40(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ff4a94; end: 107ff4b1b;  */

void FUN_107ff4a94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d8d18;
    _objc_opt_new(PTR_PTR_1126d8d18);
    lVar1 = param_1;
    func_0x00010c0d3c80(param_1);
    func_0x00010c216200(puVar2);
    func_0x00010c220e20(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ff4b1c; end: 107ff4f8f;  */

undefined1 * FUN_107ff4b1c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  long lStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_1a0;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        puVar3 = PTR_PTR_1126d8d20;
        _objc_opt_new();
        func_0x00010c178ac0();
        lVar4 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        func_0x00010c1807e0(puVar3);
        _objc_release(lVar4);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  puVar3 = PTR_PTR_1126d16e8;
  _objc_opt_new();
  puVar9 = puVar1;
  func_0x00010c0d3c80();
  puVar7 = puVar9;
  func_0x00010c178ca0(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uStack_138 = 0x107ff4cd8;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    lVar8 = param_1;
    func_0x00010c271100();
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (lVar8 != 0) {
      func_0x00010c271100(param_1);
      puVar3 = (undefined *)puVar9;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      lStack_340 = param_1;
      puStack_328 = puVar3;
      func_0x00010c2710e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = &uStack_2e0;
      lStack_338 = param_1;
      func_0x00010bf52a60();
      if (param_1 != 0) {
        lStack_330 = *plStack_2d0;
        do {
          lVar8 = 0;
          do {
            if (*plStack_2d0 != lStack_330) {
              _objc_enumerationMutation(lStack_338);
            }
            puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            lVar10 = *(long *)(lStack_2d8 + lVar8 * 8);
            func_0x00010bf30900(lVar10);
            func_0x00010bf71fe0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            lStack_318 = 0;
            uStack_320 = 0;
            uStack_308 = 0;
            puStack_310 = (undefined8 *)0x0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_2e8 = 0;
            uStack_2f0 = 0;
            func_0x00010bf308e0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar10;
            func_0x00010bf52a60();
            if (lVar2 != 0) {
              puVar9 = (undefined8 *)*puStack_310;
              do {
                lVar12 = 0;
                do {
                  if ((undefined8 *)*puStack_310 != puVar9) {
                    _objc_enumerationMutation(lVar10);
                  }
                  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  uVar11 = *(undefined8 *)(lStack_318 + lVar12 * 8);
                  func_0x00010bf45de0(uVar11);
                  func_0x00010c0df740(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf30620(uVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar3);
                  _objc_release(uVar11);
                  _objc_release(puVar5);
                  lVar12 = lVar12 + 1;
                } while (lVar2 != lVar12);
                lVar2 = lVar10;
                func_0x00010bf52a60();
              } while (lVar2 != 0);
            }
            _objc_release(lVar10);
            puVar5 = puVar3;
            func_0x00010bf51e00(puVar3);
            func_0x00010befa120(puStack_328);
            _objc_release(puVar5);
            _objc_release(puVar3);
            lVar8 = lVar8 + 1;
          } while (lVar8 != param_1);
          puVar7 = &uStack_2e0;
          param_1 = lStack_338;
          func_0x00010bf52a60();
        } while (param_1 != 0);
      }
      _objc_release(lStack_338);
      puVar5 = puStack_328;
      puVar3 = puStack_328;
      func_0x00010bf51e00(puStack_328);
      _objc_release(puVar5);
      param_1 = lStack_340;
      puVar1 = puVar9;
    }
    lVar8 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      plVar6 = &lStack_370;
      pcStack_348 = FUN_107ff4f90;
      puStack_360 = puVar1;
      lStack_358 = param_1;
      ppuStack_350 = &puStack_140;
      _objc_retain(puVar7);
      puStack_368 = PTR_PTR_1126fc088;
      lStack_370 = lVar8;
      _objc_msgSendSuper2(&lStack_370,PTR_s_init_1125d9248);
      if (plVar6 != (long *)0x0) {
        puVar1 = puVar7;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)((long)plVar6 + 8);
        *(undefined8 **)((long)plVar6 + 8) = puVar1;
        _objc_release(uVar11);
        puVar1 = puVar7;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)((long)plVar6 + 0x10);
        *(undefined8 **)((long)plVar6 + 0x10) = puVar1;
        _objc_release(uVar11);
      }
      _objc_release(puVar7);
      return (undefined1 *)plVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 107ff4f90; end: 107ff503f; -[SCGalleryTinyClipResult initWithCoder:] */

undefined1 * FUN_107ff4f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff5040; end: 107ff50eb; -[SCGalleryTinyClipResult initWithKeyFrameOutput:modelKey:] */

undefined1 *
FUN_107ff5040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc088;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 107ff50ec; end: 107ff510f; -[SCGalleryTinyClipResult copyWithZone:] */

undefined8 FUN_107ff50ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ff5110; end: 107ff516f; -[SCGalleryTinyClipResult encodeWithCoder:] */

void FUN_107ff5110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ecedd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ecedf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ff5170; end: 107ff51e3; -[SCGalleryTinyClipResult hash] */

undefined8 * FUN_107ff5170(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107ff5264:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107ff5270;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107ff5270;
        }
        goto LAB_107ff5264;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107ff5270:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107ff51e4; end: 107ff528b; -[SCGalleryTinyClipResult isEqual:] */

long FUN_107ff51e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ff5264:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ff5270;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107ff5270;
        }
        goto LAB_107ff5264;
      }
    }
    lVar3 = 0;
  }
LAB_107ff5270:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ff528c; end: 107ff5293; -[SCGalleryTinyClipResult keyFrameOutput] */

undefined8 FUN_107ff528c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff5294; end: 107ff529b; -[SCGalleryTinyClipResult modelKey] */

undefined8 FUN_107ff5294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff529c; end: 107ff52cb; -[SCGalleryTinyClipResult .cxx_destruct] */

void FUN_107ff529c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff52cc; end: 107ff537f; -[SCGalleryVisualContentUnderstandingModel initWithConcept:totalCount:maxConfSnapId:] */

undefined1 *
FUN_107ff52cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff5380; end: 107ff5387; -[SCGalleryVisualContentUnderstandingModel concept] */

undefined8 FUN_107ff5380(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff5388; end: 107ff538f; -[SCGalleryVisualContentUnderstandingModel totalCount] */

undefined8 FUN_107ff5388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff5390; end: 107ff5397; -[SCGalleryVisualContentUnderstandingModel maxConfSnapId] */

undefined8 FUN_107ff5390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ff5398; end: 107ff53c7; -[SCGalleryVisualContentUnderstandingModel .cxx_destruct] */

void FUN_107ff5398(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff53c8; end: 107ff5473; -[SCGalleryVisualndexingResults initWithVisualContentResults:tinyClipResult:] */

undefined1 *
FUN_107ff53c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 107ff5474; end: 107ff5497; -[SCGalleryVisualndexingResults copyWithZone:] */

undefined8 FUN_107ff5474(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ff5498; end: 107ff549f; -[SCGalleryVisualndexingResults visualContentResults] */

undefined8 FUN_107ff5498(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff54a0; end: 107ff54a7; -[SCGalleryVisualndexingResults tinyClipResult] */

undefined8 FUN_107ff54a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff54a8; end: 107ff54d7; -[SCGalleryVisualndexingResults .cxx_destruct] */

void FUN_107ff54a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff54d8; end: 107ff5583; -[SCGalleryTinyClipSingleFrameResult initWithCaptionToConfidenceScoreMap:embedding:] */

undefined1 *
FUN_107ff54d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc0a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 107ff5584; end: 107ff5633; -[SCGalleryTinyClipSingleFrameResult initWithCoder:] */

undefined1 * FUN_107ff5584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc0a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff5634; end: 107ff5657; -[SCGalleryTinyClipSingleFrameResult copyWithZone:] */

undefined8 FUN_107ff5634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ff5658; end: 107ff56b7; -[SCGalleryTinyClipSingleFrameResult encodeWithCoder:] */

void FUN_107ff5658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ecee18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ecee38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ff56b8; end: 107ff56bf; -[SCGalleryTinyClipSingleFrameResult captionToConfidenceScoreMap] */

undefined8 FUN_107ff56b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff56c0; end: 107ff56c7; -[SCGalleryTinyClipSingleFrameResult embedding] */

undefined8 FUN_107ff56c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff56c8; end: 107ff56f7; -[SCGalleryTinyClipSingleFrameResult .cxx_destruct] */

void FUN_107ff56c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff56f8; end: 107ff56ff; -[SCMemoriesVisualTagAnalyzerServices memoriesVisualTagAnalyzer] */

undefined8 FUN_107ff56f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff5700; end: 107ff570b; -[SCMemoriesVisualTagAnalyzerServices .cxx_destruct] */

void FUN_107ff5700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff570c; end: 107ff5793; -[SCMemoriesVisualContentResults initWithResults:modelVersion:] */

undefined1 *
FUN_107ff570c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc0b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff5794; end: 107ff57b7; -[SCMemoriesVisualContentResults copyWithZone:] */

undefined8 FUN_107ff5794(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ff57b8; end: 107ff57bf; -[SCMemoriesVisualContentResults results] */

undefined8 FUN_107ff57b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff57c0; end: 107ff57c7; -[SCMemoriesVisualContentResults modelVersion] */

undefined4 FUN_107ff57c0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107ff57c8; end: 107ff57d3; -[SCMemoriesVisualContentResults .cxx_destruct] */

void FUN_107ff57c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ff57d4; end: 107ff585b; -[SCMemoriesVisualContentResult initWithConfidence:searchConcept:] */

undefined1 *
FUN_107ff57d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc0b8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff585c; end: 107ff5863; -[SCMemoriesVisualContentResult confidence] */

undefined8 FUN_107ff585c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff5864; end: 107ff586b; -[SCMemoriesVisualContentResult searchConcept] */

undefined8 FUN_107ff5864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff586c; end: 107ff5877; -[SCMemoriesVisualContentResult .cxx_destruct] */

void FUN_107ff586c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ff5878; end: 107ff5883; -[SCMemoriesMergedDataSourceServices .cxx_destruct] */

void FUN_107ff5878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff5884; end: 107ff58f7; -[SCMemoriesEntryThumbnailGeneratorServices initWithEntryThumbnailGeneratorBuilder:] */

undefined1 * FUN_107ff5884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc0c8;
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



/* Entry: 107ff58f8; end: 107ff58ff; -[SCMemoriesEntryThumbnailGeneratorServices entryThumbnailGeneratorBuilder] */

undefined8 FUN_107ff58f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff5900; end: 107ff590b; -[SCMemoriesEntryThumbnailGeneratorServices .cxx_destruct] */

void FUN_107ff5900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff590c; end: 107ff597f; -[SCMemoriesSnapThumbnailGeneratorServices initWithSnapThumbnailGeneratorBuilder:] */

undefined1 * FUN_107ff590c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc0d0;
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



/* Entry: 107ff5980; end: 107ff5987; -[SCMemoriesSnapThumbnailGeneratorServices snapThumbnailGeneratorBuilder] */

undefined8 FUN_107ff5980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ff5988; end: 107ff5993; -[SCMemoriesSnapThumbnailGeneratorServices .cxx_destruct] */

void FUN_107ff5988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff5994; end: 107ff599b; -[SCMultiSegmentEditingVideoImportStrategy initWithVideoFileOutputPath:] */

void FUN_107ff5994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithVideoFileOutputPath_forc_1125f5d70,param_3,0);
  return;
}



/* Entry: 107ff599c; end: 107ff5a1f; -[SCMultiSegmentEditingVideoImportStrategy initWithVideoFileOutputPath:forcePassthroughPreset:] */

undefined1 *
FUN_107ff599c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc0d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff5a20; end: 107ff5a27; -[SCMultiSegmentEditingVideoImportStrategy retryAVAssetImportMaxAttempts] */

undefined8 FUN_107ff5a20(void)

{
  return 5;
}



/* Entry: 107ff5a28; end: 107ff5a77; -[SCMultiSegmentEditingVideoImportStrategy initialExportSessionPreset] */

void FUN_107ff5a28(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    param_1 = *(long *)PTR__AVAssetExportPresetPassthrough_110347ec8;
    _objc_retain(param_1);
  }
  else {
    func_0x00010be36020();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ff5a78; end: 107ff5abb; -[SCMultiSegmentEditingVideoImportStrategy _highestAllowedExportSessionPreset] */

void FUN_107ff5a78(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)PTR__AVAssetExportPreset1920x1080_110347e98;
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar1 = (undefined8 *)PTR__AVAssetExportPreset1280x720_110347e90;
  }
  uVar2 = *puVar1;
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ff5abc; end: 107ff5b53; -[SCMultiSegmentEditingVideoImportStrategy exportSessionPresetForFailedExportWithPreset:failureCount:] */

void FUN_107ff5abc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1;
  func_0x00010c13f2c0();
  if (param_4 < lVar1) {
    lVar1 = param_1;
    func_0x00010c13f2c0();
    if ((long)param_4 < lVar1 / 2) {
      func_0x00010c063dc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c13f2c0();
      plVar2 = (long *)PTR__AVAssetExportPresetPassthrough_110347ec8;
      if ((long)param_4 < param_1 + -1) {
        plVar2 = (long *)PTR__AVAssetExportPreset1280x720_110347e90;
      }
      param_1 = *plVar2;
      _objc_retain(param_1);
    }
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ff5b54; end: 107ff5b7b; -[SCMultiSegmentEditingVideoImportStrategy outputFilePath] */

void FUN_107ff5b54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ff5b7c; end: 107ff5b83; -[SCMultiSegmentEditingVideoImportStrategy rotateLandscapeVideoToPortraitOrientationRight] */

undefined8 FUN_107ff5b7c(void)

{
  return 0;
}



/* Entry: 107ff5b84; end: 107ff5b8b; -[SCMultiSegmentEditingVideoImportStrategy allowDownloadFromiCloud] */

undefined8 FUN_107ff5b84(void)

{
  return 1;
}



/* Entry: 107ff5b8c; end: 107ff5b93; -[SCMultiSegmentEditingVideoImportStrategy requestUnmodifiedOriginal] */

undefined8 FUN_107ff5b8c(void)

{
  return 0;
}



/* Entry: 107ff5b94; end: 107ff5b9b; -[SCMultiSegmentEditingVideoImportStrategy importQualityOptimizationEnabled] */

undefined1 FUN_107ff5b94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107ff5b9c; end: 107ff5ba3; -[SCMultiSegmentEditingVideoImportStrategy setImportQualityOptimizationEnabled:] */

void FUN_107ff5b9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 107ff5ba4; end: 107ff5baf; -[SCMultiSegmentEditingVideoImportStrategy .cxx_destruct] */

void FUN_107ff5ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ff5bb0; end: 107ff697f;  */

void FUN_107ff5bb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,int *param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b25d8;
  _objc_retain(param_2);
  _objc_opt_new();
  lVar2 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(puVar1);
  _objc_release(lVar2);
  func_0x00010c1c4aa0(puVar1);
  func_0x00010c1c5440(puVar1);
  lVar2 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010801a050();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) goto LAB_107ff5e50;
    uVar4 = param_9;
    func_0x000108019e88(param_9,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf080(puVar1);
    _objc_release(uVar4);
    _objc_release(param_4);
  }
  uVar4 = param_1;
  func_0x00010c0c6280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b25c8;
  _objc_opt_new();
  func_0x00010c16a960();
  puVar6 = PTR_PTR_1126bcf20;
  _objc_opt_new();
  func_0x00010c1c4aa0();
  func_0x00010c1c4880(puVar5);
  puVar7 = PTR_PTR_1126d5750;
  _objc_opt_new(PTR_PTR_1126d5750);
  func_0x00010c1b6b40();
  func_0x00010c1b64a0(puVar7);
  func_0x00010c195ca0(puVar5);
  puVar8 = PTR_PTR_1126b25d0;
  _objc_opt_new(PTR_PTR_1126b25d0);
  func_0x00010c1c4020();
  func_0x00010c1dd680(puVar8);
  uVar4 = param_1;
  func_0x00010c0fee00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar9);
  _objc_release(uVar4);
  *param_7 = *param_7 + 1;
  *param_8 = *param_8 + 1;
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_107ff5e50:
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ff6980; end: 107ff6a07; -[SCMemoriesSnapdocConverterAsset initWithAssetType:assetDownloadURL:] */

undefined1 *
FUN_107ff6980(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc0e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ff6a08; end: 107ff6a0f; -[SCMemoriesSnapdocConverterAsset assetType] */

undefined4 FUN_107ff6a08(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107ff6a10; end: 107ff6a17; -[SCMemoriesSnapdocConverterAsset assetDownloadURL] */

undefined8 FUN_107ff6a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ff6a18; end: 107ff6a23; -[SCMemoriesSnapdocConverterAsset .cxx_destruct] */

void FUN_107ff6a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ff6a24; end: 107ff6a2f; +[SCGallerySnapOverlayParser isReversePlayback:] */

void FUN_107ff6a24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d0,PTR_s_isReversePlayback__1125fccc0);
  return;
}



/* Entry: 107ff6a30; end: 107ff6a67; +[SCGallerySnapOverlayParser isVideoBounce:] */

bool FUN_107ff6a30(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf20900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107ff6a68; end: 107ff6b8b; +[SCGallerySnapOverlayParser playbackTimeScale:] */

undefined8 FUN_107ff6a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c249de0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c249da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_3;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c249dc0();
      _objc_release(lVar1);
      if (lVar2 == -0x6e0993d9) {
        uVar5 = 0x3fe0000000000000;
      }
      else if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x4000000000000000;
        if (lVar2 == 0x7b2e3000) {
          uVar5 = 0x4010000000000000;
        }
      }
      goto LAB_107ff6b58;
    }
  }
  uVar5 = 0x3ff0000000000000;
LAB_107ff6b58:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107ff6b8c; end: 107ff6b93; +[SCGallerySnapOverlayParser audioDisabled:] */

void FUN_107ff6b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_audioDisabledValue_1125a15a0);
  return;
}



/* Entry: 107ff6b94; end: 107ff6c0f; +[SCGallerySnapOverlayParser viewportTransform:gallerySnap:mediaRenderSize:] */

void FUN_107ff6b94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  FUN_107ff9c80(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c130740();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    func_0x00010bf27a60(param_1,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ff6c10; end: 107ff6c6b; +[SCGallerySnapOverlayParser shouldGenerateReverseAudioData:] */

undefined * FUN_107ff6c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bfb98;
  func_0x00010bf0efc0(PTR_PTR_1126bfb98,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126bfb98;
    func_0x00010c07cac0(PTR_PTR_1126bfb98,param_2,param_3);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107ff6c6c; end: 107ff6cd3; +[SCGallerySnapOverlayParser shouldGenerateAudioFilterMix:] */

bool FUN_107ff6c6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bfb98;
  func_0x00010bf0efc0(PTR_PTR_1126bfb98,param_2,param_3);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010bf10220(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ff6cd4; end: 107ff6d83; +[SCGallerySnapOverlayParser _gallerySnapRequiresGLViewportTransform:overlay:] */

uint FUN_107ff6cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = (uint)&uStack_60;
  FUN_107ff9c0c(param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c27dd80();
  if (lVar1 - 1U < 2) {
    lVar1 = param_4;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bf27a60(&uStack_60,lVar1);
    }
    _CGAffineTransformIsIdentity(&uStack_60);
    uVar2 = uVar2 ^ 1;
    _objc_release(lVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107ff6d84; end: 107ff6eaf; +[SCGallerySnapOverlayParser requireGLVideoLayerToRenderWithSnap:overlay:] */

ulong FUN_107ff6d84(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  func_0x00010b6fb21c();
  if (lVar1 == 2) {
    uVar3 = param_4;
    func_0x000109023a28();
    if (((((((uVar3 & 1) == 0) &&
           (puVar2 = PTR_PTR_1126bfb98, func_0x00010c07cac0(), ((ulong)puVar2 & 1) == 0)) &&
          (puVar2 = PTR_PTR_1126bfb98, func_0x00010c083120(), ((ulong)puVar2 & 1) == 0)) &&
         ((puVar2 = PTR_PTR_1126bfb98, func_0x00010c230960(), ((ulong)puVar2 & 1) == 0 &&
          (puVar2 = PTR_PTR_1126bfb98, func_0x00010c2308c0(), ((ulong)puVar2 & 1) == 0)))) &&
        ((func_0x00010c100560(PTR_PTR_1126bfb98), param_1 == 1.0 &&
         ((puVar2 = PTR_PTR_1126bfb98, func_0x00010be1a400(), ((ulong)puVar2 & 1) == 0 &&
          (puVar2 = PTR_PTR_1126bfb98, func_0x00010bf4b6a0(), ((ulong)puVar2 & 1) == 0)))))) &&
       ((puVar2 = PTR_PTR_1126bfb98, func_0x00010bf4bba0(), ((ulong)puVar2 & 1) == 0 &&
        (puVar2 = PTR_PTR_1126bfb98, func_0x00010bf4b580(), ((ulong)puVar2 & 1) == 0)))) {
      uVar3 = param_4;
      func_0x00010b697ae8(param_4,2);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = (ulong)(lVar1 == 1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107ff6eb0; end: 107ff7237; +[SCGallerySnapOverlayParser containsAnimatedContent:] */

undefined8 * FUN_107ff6eb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x24;
  undefined8 *puVar9;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  puVar9 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar5 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &uStack_1b0;
  puVar1 = puVar5;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = *plStack_1a0;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(puVar5);
        }
        uVar2 = *(ulong *)(lStack_1a8 + (long)puVar8 * 8);
        func_0x00010c06c0a0();
        if ((uVar2 & 1) != 0) {
          puVar7 = (undefined8 *)0x1;
          goto LAB_107ff71e8;
        }
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar1 != puVar8);
      puVar3 = &uStack_1b0;
      puVar1 = puVar5;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
  }
  _objc_release(puVar5);
  puVar3 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010bf529e0();
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1 = param_3;
      func_0x00010bfaebe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bfc1320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a100(puVar3,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar1);
      puVar5 = puVar3;
    }
  }
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar8 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = puVar3;
  func_0x00010bf52a60();
  if (puVar7 != (undefined8 *)0x0) {
    lVar6 = *plStack_1e0;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_1e0 != lVar6) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x24 = *(undefined8 **)(lStack_1e8 + (long)puVar9 * 8);
        puVar8 = unaff_x24;
        func_0x00010bfe5e40(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar1,param_2,unaff_x24,puVar8);
        _objc_release(puVar8);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (puVar7 != puVar9);
      puVar7 = puVar3;
      puVar9 = &uStack_1f0;
      func_0x00010bf52a60();
      puVar8 = (undefined8 *)0x0;
    } while (puVar7 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010bf529e0();
  if (puVar3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    do {
      unaff_x24 = puVar5;
      func_0x00010c0dfd40(puVar5,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      puVar9 = unaff_x24;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c06c000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(unaff_x24);
      if ((int)puVar7 != 0) break;
      puVar8 = (undefined8 *)((long)puVar8 + 1);
      puVar3 = puVar5;
      func_0x00010bf529e0();
    } while (puVar8 < puVar3);
  }
  _objc_release(puVar1);
  puVar3 = puVar9;
LAB_107ff71e8:
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_3c0;
  pcStack_1f8 = FUN_107ff7238;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puStack_230 = unaff_x24;
  puStack_228 = puVar8;
  puStack_220 = puVar7;
  puStack_218 = puVar1;
  puStack_210 = puVar5;
  puStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c0816c0();
  _objc_release(puVar5);
  if (((ulong)puVar1 & 1) == 0) {
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    puVar5 = puVar3;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_380;
    puVar1 = puVar5;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      lVar6 = *plStack_370;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_370 != lVar6) {
            _objc_enumerationMutation(puVar5);
          }
          uVar2 = *(ulong *)(lStack_378 + (long)puVar8 * 8);
          func_0x00010c0816c0();
          if ((uVar2 & 1) != 0) goto LAB_107ff73f0;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar1 != puVar8);
        puVar9 = &uStack_380;
        puVar1 = puVar5;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(puVar5);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    puVar5 = puVar3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      lVar6 = *plStack_3b0;
      do {
        puVar8 = (undefined8 *)0x0;
        puVar9 = puVar4;
        do {
          if (*plStack_3b0 != lVar6) {
            _objc_enumerationMutation(puVar5);
          }
          uVar2 = *(ulong *)(lStack_3b8 + (long)puVar8 * 8);
          func_0x00010c0816c0();
          if ((uVar2 & 1) != 0) goto LAB_107ff73f0;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar1 != puVar8);
        puVar1 = puVar5;
        puVar4 = &uStack_3c0;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
    goto LAB_107ff73fc;
  }
LAB_107ff73f8:
  puVar4 = puVar9;
  puVar5 = (undefined8 *)0x1;
LAB_107ff73fc:
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = puVar4;
      func_0x00010bfaebe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c297ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010bf1f3c0();
      _objc_release(puVar9);
      _objc_release(puVar1);
    }
    else {
      puVar8 = (undefined8 *)0x1;
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    return puVar8;
  }
  return puVar5;
LAB_107ff73f0:
  _objc_release(puVar5);
  goto LAB_107ff73f8;
}



/* Entry: 107ff7238; end: 107ff743b; +[SCGallerySnapOverlayParser containsTrackingContent:] */

undefined8 * FUN_107ff7238(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_48;
  
  puVar4 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0816c0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = &uStack_190;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar6 = *plStack_180;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_180 != lVar6) {
            _objc_enumerationMutation(puVar1);
          }
          uVar3 = *(ulong *)(lStack_188 + (long)puVar8 * 8);
          func_0x00010c0816c0();
          if ((uVar3 & 1) != 0) goto LAB_107ff73f0;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar2 != puVar8);
        puVar5 = &uStack_190;
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar6 = *plStack_1c0;
      do {
        puVar8 = (undefined8 *)0x0;
        puVar5 = puVar4;
        do {
          if (*plStack_1c0 != lVar6) {
            _objc_enumerationMutation(puVar1);
          }
          uVar3 = *(ulong *)(lStack_1c8 + (long)puVar8 * 8);
          func_0x00010c0816c0();
          if ((uVar3 & 1) != 0) goto LAB_107ff73f0;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar2 != puVar8);
        puVar2 = puVar1;
        puVar4 = &uStack_1d0;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    puVar5 = param_3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined8 *)(ulong)(puVar5 != (undefined8 *)0x0);
    goto LAB_107ff73fc;
  }
  goto LAB_107ff73f8;
LAB_107ff73f0:
  _objc_release(puVar1);
LAB_107ff73f8:
  puVar4 = puVar5;
  puVar5 = (undefined8 *)0x1;
LAB_107ff73fc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = puVar4;
    func_0x00010bfaebe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c297ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf1f3c0();
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
  else {
    puVar7 = (undefined8 *)0x1;
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return puVar7;
}



/* Entry: 107ff743c; end: 107ff74f7; +[SCGallerySnapOverlayParser containsScreenOverlay:] */

long FUN_107ff743c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c297ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f3c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    lVar5 = 1;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107ff74f8; end: 107ff7503; +[SCGallerySnapOverlayParser containsColorFilter:] */

void FUN_107ff74f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d0,PTR_s_containsColorFilter__1125b0750);
  return;
}



/* Entry: 107ff7504; end: 107ff775f; +[SCGallerySnapOverlayParser containsFilter:] */

ulong FUN_107ff7504(undefined8 param_1,undefined8 param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar3 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4e780();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar5 = param_3;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2a0480();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        uVar7 = param_3;
        func_0x00010bfaebe0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfedca0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 == 0) {
          uVar9 = param_3;
          func_0x00010bfaebe0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c249da0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar10 == 0) {
            uVar10 = param_3;
            func_0x00010bfaebe0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c297ca0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010bf1f3c0();
            if ((uVar12 & 1) == 0) {
              uVar12 = param_3;
              func_0x00010bfaebe0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar12;
              func_0x00010c25bfa0();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar13;
              func_0x00010bf1f3c0();
              if ((uVar14 & 1) == 0) {
                uVar14 = param_3;
                func_0x00010bfaebe0();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar14;
                func_0x00010c140140();
                _objc_retainAutoreleasedReturnValue();
                uVar16 = uVar15;
                func_0x00010bf1f3c0();
                _objc_release(uVar15);
                _objc_release(uVar14);
              }
              else {
                uVar16 = 1;
              }
              _objc_release(uVar13);
              _objc_release(uVar12);
            }
            else {
              uVar16 = 1;
            }
            _objc_release(uVar11);
            _objc_release(uVar10);
          }
          else {
            uVar16 = 1;
          }
          _objc_release();
          _objc_release(uVar9);
        }
        else {
          uVar16 = 1;
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      else {
        uVar16 = 1;
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      uVar16 = 1;
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar16 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar16;
}



/* Entry: 107ff7760; end: 107ff7927; +[SCGallerySnapOverlayParser containsUncroppableGeofilter:] */

uint FUN_107ff7760(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c27e6a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_3;
        func_0x00010bfaebe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c27e6a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c246d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = param_3;
        func_0x00010bfaebe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfc1340();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c246d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = lVar3;
        func_0x00010c071ae0(lVar3,param_2,lVar4);
        uVar5 = (uint)lVar1 ^ 1;
        _objc_release(lVar4);
        _objc_release(lVar3);
        goto LAB_107ff7908;
      }
    }
    uVar5 = 1;
  }
LAB_107ff7908:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107ff7928; end: 107ff798f; +[SCGallerySnapOverlayParser shouldExportImageSnapAsVideo:overlay:] */

undefined8 FUN_107ff7928(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf4b580();
  if ((param_1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010b697ae8(param_3,2);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ff7990; end: 107ff7a8b;  */

undefined * FUN_107ff7990(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf8a220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = param_1;
      func_0x00010bf8a220();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR_PTR_1126bfb98;
        func_0x00010bf4b580(PTR_PTR_1126bfb98,param_2,param_1);
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = PTR_PTR_1126bfb98;
          func_0x00010bf4bba0(PTR_PTR_1126bfb98,param_2,param_1);
        }
        else {
          puVar6 = (undefined *)0x1;
        }
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return puVar6;
}



/* Entry: 107ff7a8c; end: 107ff7d2b;  */

void FUN_107ff7a8c(double param_1,double param_2,double param_3,double param_4,undefined **param_5,
                  long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar14 = param_5;
  func_0x00010bf529e0();
  if (ppuVar14 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain(param_5);
    ppuVar2 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar17 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        uVar16 = *(undefined8 *)((long)ppuVar17 * 8);
        puVar3 = PTR_PTR_1126d8d58;
        _objc_opt_new();
        uVar4 = uVar16;
        func_0x00010bf21920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar4);
        func_0x00010c191920(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar4 = uVar16;
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        param_6 = 0;
        _strtoull();
        func_0x00010c0df880(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17e800(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(uVar4);
        uVar4 = uVar16;
        func_0x00010c102f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1de980(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010c25dce0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20e960(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar16);
        puVar5 = puVar3;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar14);
        _objc_release(puVar5);
        _objc_release(puVar3);
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar2 != ppuVar17);
      ppuVar2 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar13 = param_6;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puStack_1c0 = (undefined *)0x1;
  ppuVar2 = &puStack_1c0;
  ppuVar15 = param_5;
  FUN_107ff8ca8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  ppuVar17 = (undefined **)PTR_PTR_1126bb2b8;
  if (param_3 == 0.0) {
LAB_107ff7dcc:
    dVar19 = 0.0;
  }
  else if (param_4 == 0.0) {
LAB_107ff7de0:
    param_2 = 0.0;
    dVar19 = param_1;
  }
  else {
    dVar18 = param_3 / param_4;
    if (dVar18 == 0.0) goto LAB_107ff7dcc;
    if (dVar18 == INFINITY) goto LAB_107ff7de0;
    dVar19 = dVar18 * param_2;
    if (param_1 <= dVar19) {
      param_2 = param_1 / dVar18;
      dVar19 = param_1;
    }
  }
  ppuVar14 = ppuVar15;
  func_0x00010bf8a020(ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ef60(ppuVar15);
  func_0x00010c151aa0(param_3,param_4,dVar19,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_6 == 0) {
    _objc_retain(ppuVar17);
    ppuVar14 = ppuVar17;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_1b8 = param_6;
    ppuStack_1b0 = ppuVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe6d00(param_3,param_4,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(ppuVar17);
  _objc_release(ppuVar15);
  _objc_autoreleasePoolPop(lVar13);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      _objc_retain(param_5);
      ppuVar14 = param_5;
    }
    else if (param_5 == (undefined **)0x0) {
      _objc_retain(ppuVar2);
      ppuVar14 = ppuVar2;
    }
    else {
      ppuVar17 = (undefined **)PTR_PTR_1126bcd60;
      func_0x00010c2b1de0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = param_5;
      func_0x00010bf308c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = param_5;
        func_0x00010bf308c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar5);
        _objc_release(ppuVar14);
      }
      ppuVar14 = ppuVar2;
      func_0x00010bf308c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = ppuVar2;
        func_0x00010bf308c0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar5);
        _objc_release(ppuVar14);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = param_5;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = param_5;
        func_0x00010c2553e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        _objc_release(ppuVar14);
      }
      ppuVar14 = ppuVar2;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = ppuVar2;
        func_0x00010c2553e0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        _objc_release(ppuVar14);
      }
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)0x0;
      func_0x00010b776358(0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar2;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar14;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar14);
      if (ppuVar15 == (undefined **)0x0) {
        ppuVar15 = (undefined **)0x0;
        ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf3d0;
      }
      else {
        ppuVar14 = ppuVar2;
        func_0x00010bf89ea0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar14;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(ppuVar14);
        ppuVar15 = ppuVar2;
        func_0x00010bf89ea0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar15;
        func_0x00010c23ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        ppuVar7 = ppuVar2;
        func_0x00010bf89ea0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar7;
        func_0x00010bfe7300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar2;
        func_0x00010bf89ea0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        func_0x00010c25dde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar6);
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar8;
      }
      ppuVar8 = param_5;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar8);
      ppuVar11 = ppuVar15;
      ppuVar10 = ppuVar14;
      ppuVar8 = ppuVar7;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar9 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar9;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(ppuVar9);
        ppuVar7 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar7;
        func_0x00010c23ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        _objc_release(ppuVar7);
        ppuVar14 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar14;
        func_0x00010bfe7300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
        ppuVar14 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c25dde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar6);
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
      }
      puVar12 = puVar5;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c178c80(ppuVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar12 = puVar3;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c20bc80(ppuVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar12 = puVar6;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = PTR_PTR_1126d8d60;
        _objc_alloc(PTR_PTR_1126d8d60);
        func_0x00010c056100();
        func_0x00010c191960(ppuVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
      }
      ppuVar14 = param_5;
      func_0x00010bf5c920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = param_5;
        func_0x00010bf5c920(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c186220(ppuVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar14);
      }
      ppuVar14 = param_5;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar14 = param_5;
        func_0x00010c094540(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60(ppuVar17);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar14);
      }
      ppuVar14 = ppuVar17;
      func_0x00010bf21f60(ppuVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(ppuVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(ppuVar17);
    }
    _objc_release(ppuVar2);
    _objc_release(param_5);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return;
}



/* Entry: 107ff7d2c; end: 107ff7f6f;  */

void FUN_107ff7d2c(double param_1,double param_2,double param_3,double param_4,undefined **param_5,
                  long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_6;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puStack_90 = (undefined *)0x1;
  ppuVar13 = &puStack_90;
  ppuVar2 = param_5;
  FUN_107ff8ca8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  ppuVar3 = (undefined **)PTR_PTR_1126bb2b8;
  if (param_3 == 0.0) {
LAB_107ff7dcc:
    dVar16 = 0.0;
  }
  else {
    if (param_4 != 0.0) {
      dVar15 = param_3 / param_4;
      if (dVar15 == 0.0) goto LAB_107ff7dcc;
      if (dVar15 != INFINITY) {
        dVar16 = dVar15 * param_2;
        if (param_1 <= dVar16) {
          param_2 = param_1 / dVar15;
          dVar16 = param_1;
        }
        goto LAB_107ff7de4;
      }
    }
    param_2 = 0.0;
    dVar16 = param_1;
  }
LAB_107ff7de4:
  ppuVar14 = ppuVar2;
  func_0x00010bf8a020(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ef60(ppuVar2);
  func_0x00010c151aa0(param_3,param_4,dVar16,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_6 == 0) {
    _objc_retain(ppuVar3);
    ppuVar14 = ppuVar3;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_6;
    ppuStack_80 = ppuVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe6d00(param_3,param_4,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar13);
    if (ppuVar13 == (undefined **)0x0) {
      _objc_retain(param_5);
      ppuVar14 = param_5;
    }
    else if (param_5 == (undefined **)0x0) {
      _objc_retain(ppuVar13);
      ppuVar14 = ppuVar13;
    }
    else {
      ppuVar3 = (undefined **)PTR_PTR_1126bcd60;
      func_0x00010c2b1de0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_5;
      func_0x00010bf308c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = param_5;
        func_0x00010bf308c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar4);
        _objc_release(ppuVar2);
      }
      ppuVar2 = ppuVar13;
      func_0x00010bf308c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = ppuVar13;
        func_0x00010bf308c0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar4);
        _objc_release(ppuVar2);
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_5;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = param_5;
        func_0x00010c2553e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar5);
        _objc_release(ppuVar2);
      }
      ppuVar2 = ppuVar13;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = ppuVar13;
        func_0x00010c2553e0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar5);
        _objc_release(ppuVar2);
      }
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)0x0;
      func_0x00010b776358(0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar13;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar2;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar2);
      if (ppuVar14 == (undefined **)0x0) {
        ppuVar14 = (undefined **)0x0;
        ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf3d0;
      }
      else {
        ppuVar2 = ppuVar13;
        func_0x00010bf89ea0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar2;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(ppuVar2);
        ppuVar14 = ppuVar13;
        func_0x00010bf89ea0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar14;
        func_0x00010c23ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        ppuVar7 = ppuVar13;
        func_0x00010bf89ea0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar7;
        func_0x00010bfe7300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar13;
        func_0x00010bf89ea0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        func_0x00010c25dde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar6);
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar8;
      }
      ppuVar8 = param_5;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar8);
      ppuVar11 = ppuVar14;
      ppuVar10 = ppuVar2;
      ppuVar8 = ppuVar7;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar9 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar9;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(ppuVar9);
        ppuVar7 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar7;
        func_0x00010c23ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(ppuVar7);
        ppuVar2 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar2;
        func_0x00010bfe7300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        _objc_release(ppuVar2);
        ppuVar2 = param_5;
        func_0x00010bf89ea0(param_5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar2;
        func_0x00010c25dde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar6);
        _objc_release(ppuVar14);
        _objc_release(ppuVar2);
      }
      puVar12 = puVar4;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c178c80(ppuVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar12 = puVar5;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c20bc80(ppuVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar12 = puVar6;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = PTR_PTR_1126d8d60;
        _objc_alloc(PTR_PTR_1126d8d60);
        func_0x00010c056100();
        func_0x00010c191960(ppuVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
      }
      ppuVar2 = param_5;
      func_0x00010bf5c920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = param_5;
        func_0x00010bf5c920(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c186220(ppuVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar2);
      }
      ppuVar2 = param_5;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = param_5;
        func_0x00010c094540(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60(ppuVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar2);
      }
      ppuVar14 = ppuVar3;
      func_0x00010bf21f60(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(ppuVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar13);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return;
}



/* Entry: 107ff7f70; end: 107ff852f;  */

void FUN_107ff7f70(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined **)0x0) {
    _objc_retain(param_1);
    ppuVar3 = param_1;
  }
  else if (param_1 == (undefined **)0x0) {
    _objc_retain(param_2);
    ppuVar3 = param_2;
  }
  else {
    ppuVar1 = (undefined **)PTR_PTR_1126bcd60;
    func_0x00010c2b1de0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_1;
      func_0x00010bf308c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(ppuVar3);
    }
    ppuVar3 = param_2;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_2;
      func_0x00010bf308c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(ppuVar3);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_1;
      func_0x00010c2553e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(ppuVar3);
    }
    ppuVar3 = param_2;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_2;
      func_0x00010c2553e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(ppuVar3);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)0x0;
    func_0x00010b776358(0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_2;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar3;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar3);
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar12 = (undefined **)0x0;
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf3d0;
    }
    else {
      ppuVar3 = param_2;
      func_0x00010bf89ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar3);
      ppuVar12 = param_2;
      func_0x00010bf89ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar12;
      func_0x00010c23ef60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      ppuVar6 = param_2;
      func_0x00010bf89ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar6;
      func_0x00010bfe7300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      ppuVar6 = param_2;
      func_0x00010bf89ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar6;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar5);
      _objc_release(ppuVar8);
      _objc_release(ppuVar6);
      ppuVar6 = ppuVar7;
    }
    ppuVar7 = param_1;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar7);
    ppuVar10 = ppuVar12;
    ppuVar9 = ppuVar3;
    ppuVar7 = ppuVar6;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar8 = param_1;
      func_0x00010bf89ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar8;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar8);
      ppuVar6 = param_1;
      func_0x00010bf89ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar6;
      func_0x00010c23ef60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(ppuVar6);
      ppuVar3 = param_1;
      func_0x00010bf89ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar3;
      func_0x00010bfe7300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar3);
      ppuVar3 = param_1;
      func_0x00010bf89ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar3;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar5);
      _objc_release(ppuVar12);
      _objc_release(ppuVar3);
    }
    puVar11 = puVar2;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c178c80(ppuVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar11 = puVar4;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c20bc80(ppuVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar11 = puVar5;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126d8d60;
      _objc_alloc(PTR_PTR_1126d8d60);
      func_0x00010c056100();
      func_0x00010c191960(ppuVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
    }
    ppuVar3 = param_1;
    func_0x00010bf5c920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_1;
      func_0x00010bf5c920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c186220(ppuVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
    ppuVar3 = param_1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(ppuVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar1;
    func_0x00010bf21f60(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107ff8530; end: 107ff86c3;  */

void FUN_107ff8530(undefined *param_1,undefined *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) {
    puVar5 = param_2;
    if (param_2 == (undefined *)0x0) {
      puVar5 = param_1;
    }
    _objc_retain(puVar5);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d8d68;
    _objc_alloc(PTR_PTR_1126d8d68);
    func_0x00010c008360();
    if (*param_3 == 0) {
      puVar3 = PTR_PTR_1126d8d68;
      _objc_alloc(PTR_PTR_1126d8d68);
      func_0x00010c008360();
      if (*param_3 == 0) {
        puVar5 = puVar2;
        func_0x00010c255400(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(puVar5);
        puVar5 = puVar3;
        func_0x00010c255400(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(puVar5);
        puVar4 = PTR_PTR_1126d8d68;
        _objc_alloc_init(PTR_PTR_1126d8d68);
        puVar5 = puVar1;
        func_0x00010c0d3c80(puVar1);
        func_0x00010c20bce0(puVar4);
        _objc_release(puVar5);
        puVar5 = puVar4;
        func_0x00010bf63640(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      else {
        puVar5 = (undefined *)0x0;
      }
      _objc_release(puVar3);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ff86c4; end: 107ff89cb;  */

void FUN_107ff86c4(undefined *param_1,long param_2,undefined8 param_3,long *param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = param_1;
    func_0x00010c2553e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar3 = param_1;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar10 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        lVar11 = *(long *)((long)puVar9 * 8);
        lVar7 = lVar11;
        func_0x00010bfee000();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        func_0x00010b777658();
        _objc_release(lVar7);
        if ((param_5 == 0) || (lVar4 != 0x464f605)) {
          lVar7 = param_2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          func_0x00010c06f740();
          _objc_release(lVar7);
          if ((int)lVar4 == 0) {
            lVar7 = *param_4;
            *param_4 = lVar7 + 1;
            func_0x00010914e1b4(lVar11,lVar7,param_3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            lVar7 = param_2;
            func_0x00010c269d40(param_2);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = param_1;
            func_0x00010bfaebe0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bfedce0();
            _objc_retainAutoreleasedReturnValue();
            *param_4 = *param_4 + 1;
            lVar11 = lVar7;
            func_0x00010c255020(lVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(lVar7);
          }
          func_0x00010c14c720(puVar2);
          _objc_release(lVar11);
        }
        puVar9 = puVar9 + 1;
      } while (puVar10 != puVar9);
      puVar10 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar10 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010808b910();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107ff89cc; end: 107ff8a0f;  */

void FUN_107ff89cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010808b910();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ff8a10; end: 107ff8a3f;  */

void FUN_107ff8a10(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_107ff8a40(param_1,0,&uStack_18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


