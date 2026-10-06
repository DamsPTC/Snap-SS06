/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050db3ac; end: 1050db79b; -[SCCharmsHiddenCharmChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1050db3ac(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1050db2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1050db79c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO charms__hiddencharm_draft (p, ownerIdentifier, charmIdentifier) VALUES (?1, ?2, ?3)"
                       );
    if (lVar6 == 0) goto LAB_1050db738;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar8 == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = (long)*(int *)((long)piVar1 + uVar8);
    }
    _sqlite3_bind_int64(lVar6,3,lVar7);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1050db738;
    uVar10 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b4938);
    func_0x00010c21c9a0(puVar9);
LAB_1050db720:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM charms__hiddencharm_draft WHERE rowid=?1");
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
            _objc_opt_class(PTR_PTR_1126b4938);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1050db744;
          }
        }
      }
      puVar9 = (undefined *)0x0;
      goto LAB_1050db744;
    }
    FUN_1050db2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1050db79c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE charms__hiddencharm_draft SET p=?1, ownerIdentifier=?3, charmIdentifier=?4 WHERE rowid=?2 LIMIT 1"
                       );
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar8 == 0)) {
        lVar6 = 0;
      }
      else {
        lVar6 = (long)*(int *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_int64(param_3,4,lVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b4938);
        func_0x00010c21c9a0(puVar9);
        goto LAB_1050db720;
      }
    }
LAB_1050db738:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1050db744:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1050db79c; end: 1050db92b;  */

ulong FUN_1050db79c(ulong param_1,ulong param_2)

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
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0f0720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1050db92c(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf35b80(param_2);
  uVar7 = param_2;
  func_0x00010c0f0760(param_2);
  uVar8 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1050db92c(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010bfe1320(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xc,uVar10,0);
  func_0x0001001ce1c8(param_1,8,uVar7 & 0xffffffff,0);
  func_0x0001001ce2e4(param_1,10,uVar9 & 0xffffffff);
  func_0x000100c3b024(param_1,6,uVar6,0);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050db92c; end: 1050dba5b;  */

undefined8 FUN_1050db92c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1050dba0c;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1050dba0c;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1050db9cc;
    param_1 = 0;
  }
  else {
LAB_1050db9cc:
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
LAB_1050dba0c:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050dba5c; end: 1050dbabf;  */

undefined ** FUN_1050dba5c(void)

{
  int iVar1;
  
  if ((bRam0000000113818110 & 1) == 0) {
    iVar1 = 0x13818110;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c2d70,0x100000000);
      ___cxa_guard_release(0x113818110);
    }
  }
  return &PTR_PTR_1130c2d70;
}



/* Entry: 1050dbac0; end: 1050dbb47;  */

void FUN_1050dbac0(uint *param_1,undefined1 *param_2)

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



/* Entry: 1050dbb48; end: 1050dbbd3;  */

void FUN_1050dbb48(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050dbbd4; end: 1050dbbdf; +[SCCharmsSyncMetadata table] */

char * FUN_1050dbbd4(void)

{
  return "charms__syncmetadata_draft";
}



/* Entry: 1050dbbe0; end: 1050dbd13; +[SCCharmsSyncMetadata immutableObjectParse:bufferSize:] */

void FUN_1050dbbe0(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar4 = PTR_PTR_1126b49d8;
  _objc_alloc(PTR_PTR_1126b49d8);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
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
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    if ((6 < uVar3) && (*(short *)((long)piVar1 + (6 - lVar5)) != 0)) {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      goto LAB_1050dbcb8;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1050dbcb8:
  func_0x00010c032b40(puVar4,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050dbd14; end: 1050dbd37; +[SCCharmsSyncMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_1050dbd14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1050dbd30;
  auVar1._0_8_ = 0x1050dbd28;
  return auVar1;
}



/* Entry: 1050dbd38; end: 1050dbe03;  */

undefined1 * FUN_1050dbd38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126e6128;
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



/* Entry: 1050dbe04; end: 1050dc15b;  */

void FUN_1050dbe04(undefined *param_1)

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
      func_0x00010c0f0720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar5,
                            "SELECT rowid, p FROM charms__syncmetadata_draft WHERE ownerIdentifier=?1 LIMIT 1"
                           );
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0f0720(param_1);
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
            _objc_opt_class(PTR_PTR_1126b49d8);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_1050dc0ac;
            puVar5 = PTR_PTR_1126b49f0;
            _objc_alloc(PTR_PTR_1126b49f0);
            puVar2 = puVar3;
            func_0x00010c0f0720(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c2667e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_1050dbd38(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_1050dbeec;
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
      _objc_opt_class(PTR_PTR_1126b49d8);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b49f0;
        _objc_alloc(PTR_PTR_1126b49f0);
        puVar2 = puVar3;
        func_0x00010c0f0720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2667e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_1050dbd38(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_1050dbeec:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1050dc0b4;
      }
LAB_1050dc0ac:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1050dc0b4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050dc15c; end: 1050dc1cf;  */

void FUN_1050dc15c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1050dbe04();
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



/* Entry: 1050dc1d0; end: 1050dc3e3;  */

void FUN_1050dc1d0(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b49f0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1050dbe04();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126b49f0;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126b49f0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c0f0720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c2667e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_1050dbd38(puVar4,0xffffffffffffffff,puVar2,puVar3);
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
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c2667e0(param_1);
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



/* Entry: 1050dc3e4; end: 1050dc443;  */

void FUN_1050dc3e4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b49d8;
    _objc_alloc(PTR_PTR_1126b49d8);
    func_0x00010c032b40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050dc444; end: 1050dc473; -[SCCharmsSyncMetadataChangeRequest .cxx_destruct] */

void FUN_1050dc444(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1050dc474; end: 1050dc47f; -[SCCharmsSyncMetadataChangeRequest table] */

char * FUN_1050dc474(void)

{
  return "charms__syncmetadata_draft";
}



/* Entry: 1050dc480; end: 1050dc4c7; -[SCCharmsSyncMetadataChangeRequest createTableWithSQLite:] */

void FUN_1050dc480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd8fe59,0x9a,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1050dc4c8; end: 1050dc84f; -[SCCharmsSyncMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1050dc4c8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1050dc3e4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1050dc850(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO charms__syncmetadata_draft (p, ownerIdentifier) VALUES (?1, ?2)"
                       );
    if (lVar6 == 0) goto LAB_1050dc7ec;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1050dc7ec;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b49d8);
    func_0x00010c21c9a0(puVar7);
LAB_1050dc7d4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM charms__syncmetadata_draft WHERE rowid=?1");
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
            _objc_opt_class(PTR_PTR_1126b49d8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1050dc7f8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1050dc7f8;
    }
    FUN_1050dc3e4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1050dc850(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE charms__syncmetadata_draft SET p=?1, ownerIdentifier=?3 WHERE rowid=?2 LIMIT 1"
                       );
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
        _objc_opt_class(PTR_PTR_1126b49d8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1050dc7d4;
      }
    }
LAB_1050dc7ec:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1050dc7f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1050dc850; end: 1050dca9b;  */

ulong FUN_1050dc850(ulong param_1,char *param_2)

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
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1050dc950;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_1050dc950;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1050dc910;
    uVar9 = 0;
  }
  else {
LAB_1050dc910:
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
LAB_1050dc950:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c2667e0();
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
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce220(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050dca9c; end: 1050dcb03; +[SCCPCharmsSyncRequest descriptor] */

void FUN_1050dca9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16890,
                        &PTR____CFConstantStringClassReference_110dc58b8,
                        &PTR_s_snapchat_charms_api_1130c2de0,&PTR_s_owner_1130c2df8,6,0x30,0x1c);
    puRam00000001136b9328 = puVar1;
  }
  return;
}



/* Entry: 1050dcb04; end: 1050dcbe7; +[SCCPCharmsSyncResponse descriptor] */

void FUN_1050dcb04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a168e0,
                        &PTR____CFConstantStringClassReference_110dc58d8,
                        &PTR_s_snapchat_charms_api_1130c2de0,&PTR_s_charms_1130c2eb8,7,0x38,0x1c);
    puRam00000001136b9330 = puVar1;
  }
  return;
}



/* Entry: 1050dcbe8; end: 1050dcbf3;  */

bool FUN_1050dcbe8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1050dcbf4; end: 1050dccd7; +[SCCPCharmsRequestOrigin descriptor] */

void FUN_1050dcbf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16980,
                        &PTR____CFConstantStringClassReference_110dc5918,
                        &PTR_s_snapchat_charms_api_1130c2f98,0,0,4,0x1c);
    puRam00000001136b9340 = puVar1;
  }
  return;
}



/* Entry: 1050dccd8; end: 1050dcce3;  */

bool FUN_1050dccd8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1050dcce4; end: 1050dcd5f; +[SCCPCharms descriptor] */

undefined * FUN_1050dcce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16a20,
                        &PTR____CFConstantStringClassReference_110dc4cd8,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_owner_1130c30c8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136b9350 = puVar1;
  }
  return puRam00000001136b9350;
}



/* Entry: 1050dcd60; end: 1050dcdeb; +[SCCPCharmsOwner descriptor] */

undefined * FUN_1050dcd60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16a70,
                        &PTR____CFConstantStringClassReference_110dc5958,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_friendUserId_1130c3008,2,0x18,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136b9358 = puVar1;
  }
  return puRam00000001136b9358;
}



/* Entry: 1050dcdec; end: 1050dce53; +[SCCPCharm descriptor] */

void FUN_1050dcdec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16ac0,
                        &PTR____CFConstantStringClassReference_110dc5978,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_identifier_1130c32c8,7,0x30,
                        0x1c);
    puRam00000001136b9360 = puVar1;
  }
  return;
}



/* Entry: 1050dce54; end: 1050dcebb; +[SCCPCharmDescription descriptor] */

void FUN_1050dce54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16b10,
                        &PTR____CFConstantStringClassReference_110dc5998,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_template_p_1130c3048,2,0x18,
                        0x1c);
    puRam00000001136b9368 = puVar1;
  }
  return;
}



/* Entry: 1050dcebc; end: 1050dcf47; +[SCCPCharmDescriptionVariable descriptor] */

undefined * FUN_1050dcebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16b60,
                        &PTR____CFConstantStringClassReference_110dc59b8,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_value_1130c3128,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136b9370 = puVar1;
  }
  return puRam00000001136b9370;
}



/* Entry: 1050dcf48; end: 1050dcfd3; +[SCCPCharmGraphic descriptor] */

undefined * FUN_1050dcf48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16c78,
                        &PTR____CFConstantStringClassReference_110dc59d8,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_previewStickerImageId_1130c3248
                        ,4,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136b9378 = puVar1;
  }
  return puRam00000001136b9378;
}



/* Entry: 1050dcfd4; end: 1050dd057; +[SCCPCharmGraphic_Solomoji descriptor] */

undefined * FUN_1050dcfd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16ca0,
                        &PTR____CFConstantStringClassReference_110dc59f8,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_templateId_1130c3088,2,0x18,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136b9380 = puVar1;
  }
  return puRam00000001136b9380;
}



/* Entry: 1050dd058; end: 1050dd0eb; +[SCCPCharmGraphic_Friendmoji descriptor] */

undefined * FUN_1050dd058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16cc8,
                        &PTR____CFConstantStringClassReference_110dc5a18,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_templateId_1130c3188,3,0x20,
                        0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a16c78);
    puRam00000001136b9388 = puVar1;
  }
  return puRam00000001136b9388;
}



/* Entry: 1050dd0ec; end: 1050dd16f; +[SCCPCharmGraphic_BitmojiSelfie descriptor] */

undefined * FUN_1050dd0ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16cf0,
                        &PTR____CFConstantStringClassReference_110dc5a38,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_userId_1130c2fe8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136b9390 = puVar1;
  }
  return puRam00000001136b9390;
}



/* Entry: 1050dd170; end: 1050dd1d7; +[SCCPHiddenCharm descriptor] */

void FUN_1050dd170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16c50,
                        &PTR____CFConstantStringClassReference_110dc5a58,
                        &PTR_s_snapchat_charms_core_1130c2fd0,&PTR_s_identifier_1130c31e8,3,0x18,
                        0x1c);
    puRam00000001136b9398 = puVar1;
  }
  return;
}



/* Entry: 1050dd1d8; end: 1050dd23f; +[SCCPCharmIdentifier descriptor] */

void FUN_1050dd1d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b93a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16d90,
                        &PTR____CFConstantStringClassReference_110dc5a78,
                        &PTR_s_snapchat_charms_core_1130c33a8,0,0,4,0x1c);
    puRam00000001136b93a0 = puVar1;
  }
  return;
}



/* Entry: 1050dd240; end: 1050dd24b; -[SCFeatureSettingsService hasGroupInviteLinkShareInSnapEducationSeenCount] */

void FUN_1050dd240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc5a98);
  return;
}



/* Entry: 1050dd24c; end: 1050dd257; -[SCFeatureSettingsService groupInviteLinkShareInSnapEducationSeenCountServerParam] */

undefined ** FUN_1050dd24c(void)

{
  return &PTR____CFConstantStringClassReference_110dc5a98;
}



/* Entry: 1050dd258; end: 1050dd267; -[SCFeatureSettingsService setGroupInviteLinkShareInSnapEducationSeenCount:] */

void FUN_1050dd258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc5a98,param_3);
  return;
}



/* Entry: 1050dd268; end: 1050dd26f; -[SCFeatureSettingsService group_invite_link_share_in_snap_education_seen_count_client_value:] */

void FUN_1050dd268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1050dd270; end: 1050dd277; -[SCFeatureSettingsService group_invite_link_share_in_snap_education_seen_count_server_value:] */

void FUN_1050dd270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1050dd278; end: 1050dd29b; -[SCFeatureSettingsService groupInviteLinkShareInSnapEducationSeenCount] */

void FUN_1050dd278(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc5a98,0);
  return;
}



/* Entry: 1050dd29c; end: 1050dd35f; -[SCReportBitmojiOutfitActionHandler initWithPresentingController:snapchatter:safetyReportScopeExposer:] */

undefined1 *
FUN_1050dd29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6130;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050dd360; end: 1050dd55b; -[SCReportBitmojiOutfitActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050dd360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 8) != 0) {
    iVar7 = 0x10eb9c18;
    uVar8 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eb9c18,param_2,uVar8);
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126b2e98;
    if (iVar7 != 0) {
      puVar1 = PTR_PTR_1126b49f8;
      _objc_alloc(PTR_PTR_1126b49f8);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf1bae0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf1ad40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e8c0(puVar1,param_2,uVar2,uVar8);
      func_0x00010bf1be40(puVar4,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar1 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar5 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar5);
      uVar8 = 1;
      func_0x00010c038f40(puVar1,param_2,lVar5,1);
      _objc_release(lVar5);
      puVar6 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      func_0x00010c0587e0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar4);
      goto LAB_1050dd524;
    }
  }
  uVar8 = 0;
LAB_1050dd524:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1050dd55c; end: 1050dd5a3; -[SCReportBitmojiOutfitActionHandler reportDidCompleteWithCancelled:] */

void FUN_1050dd55c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050dd5a4; end: 1050dd5bb; -[SCReportBitmojiOutfitActionHandler presentingController] */

void FUN_1050dd5a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050dd5bc; end: 1050dd5c7; -[SCReportBitmojiOutfitActionHandler setPresentingController:] */

void FUN_1050dd5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1050dd5c8; end: 1050dd5ff; -[SCReportBitmojiOutfitActionHandler .cxx_destruct] */

void FUN_1050dd5c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050dd600; end: 1050dd6eb; -[SCReportProfileBackgroundActionHandler initWithPresentingController:snapchatter:safetyReportScopeExposer:] */

undefined1 *
FUN_1050dd600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e6138;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050dd6ec; end: 1050dd8f3; -[SCReportProfileBackgroundActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050dd6ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 8) != 0) {
    iVar7 = 0x10eb9bf8;
    uVar8 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eb9bf8,param_2,uVar8);
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126b2e98;
    if (iVar7 != 0) {
      puVar1 = PTR_PTR_1126b4a00;
      _objc_alloc(PTR_PTR_1126b4a00);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf1bae0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf1af20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e8e0(puVar1,param_2,uVar2,uVar8,PTR_PTR_1133bb150);
      func_0x00010c1165e0(puVar4,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar1 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar5 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar5);
      uVar8 = 1;
      func_0x00010c038f40(puVar1,param_2,lVar5,1);
      _objc_release(lVar5);
      puVar6 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      func_0x00010c0587e0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar4);
      goto LAB_1050dd8bc;
    }
  }
  uVar8 = 0;
LAB_1050dd8bc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1050dd8f4; end: 1050dd93b; -[SCReportProfileBackgroundActionHandler reportDidCompleteWithCancelled:] */

void FUN_1050dd8f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050dd93c; end: 1050dd953; -[SCReportProfileBackgroundActionHandler presentingController] */

void FUN_1050dd93c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050dd954; end: 1050dd95f; -[SCReportProfileBackgroundActionHandler setPresentingController:] */

void FUN_1050dd954(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1050dd960; end: 1050dd997; -[SCReportProfileBackgroundActionHandler .cxx_destruct] */

void FUN_1050dd960(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050dd998; end: 1050dda8b; -[SCReportSnapchatterActionHandler initWithPresentingController:snapchatter:safetyReportScopeExposer:sourcePageType:] */

undefined1 *
FUN_1050dd998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e6140;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050dda8c; end: 1050ddcab; -[SCReportSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050dda8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 8) != 0) {
    iVar8 = 0x10eb9b78;
    uVar2 = param_4;
    func_0x00010bfe5ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eb9b78,param_2,uVar2);
    _objc_release(uVar2);
    if (iVar8 != 0) {
      puVar1 = PTR_PTR_1126b4a08;
      _objc_alloc(PTR_PTR_1126b4a08);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c294420(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05bf60(puVar1,param_2,uVar2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf85d80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar1,param_2,uVar2);
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar5 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar5);
      uVar2 = 1;
      func_0x00010c038f40(puVar4,param_2,lVar5,1);
      _objc_release(lVar5);
      puVar6 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      puVar7 = PTR_PTR_1126b2e98;
      func_0x00010c294280(PTR_PTR_1126b2e98,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0587c0(puVar6,param_2,puVar4,puVar7,param_1,PTR_PTR_1133bb288,
                          *(undefined8 *)(param_1 + 0x18));
      _objc_release(puVar7);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010c133c00();
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar1);
      goto LAB_1050ddc74;
    }
  }
  uVar2 = 0;
LAB_1050ddc74:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1050ddcac; end: 1050ddd07; -[SCReportSnapchatterActionHandler reportDidCompleteWithCancelled:] */

void FUN_1050ddcac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c133be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ddd08; end: 1050ddd1f; -[SCReportSnapchatterActionHandler presentingController] */

void FUN_1050ddd08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ddd20; end: 1050ddd2b; -[SCReportSnapchatterActionHandler setPresentingController:] */

void FUN_1050ddd20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050ddd2c; end: 1050ddd43; -[SCReportSnapchatterActionHandler delegate] */

void FUN_1050ddd2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ddd44; end: 1050ddd4f; -[SCReportSnapchatterActionHandler setDelegate:] */

void FUN_1050ddd44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050ddd50; end: 1050dde0b; -[SCReportSnapchatterActionHandler .cxx_destruct] */

void FUN_1050ddd50(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050dde0c; end: 1050dde17;  */

bool FUN_1050dde0c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1050dde18; end: 1050dde7f; +[SCPrivateProfilePbFriendProfileProminentFriendActionsConfig descriptor] */

void FUN_1050dde18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b93b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a16f20,
                        &PTR____CFConstantStringClassReference_110dc5af8,
                        &PTR_s_snapchat_private_profile_cof_1130c33c0,&PTR_s_enabled_1130c33d8,3,
                        0x10,0x1c);
    puRam00000001136b93b0 = puVar1;
  }
  return;
}



/* Entry: 1050dde80; end: 1050dde93;  */

void FUN_1050dde80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dc5b18,0,0);
  return;
}



/* Entry: 1050dde94; end: 1050de00f; -[SCFriendProfileCondensedIdentitySectionActionHandler initWithSnapchatter:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusServices:saturnUpsellTrayScopeExposer:saturnExperimentProvider:saturnSocialContextProvider:] */

undefined1 *
FUN_1050dde94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6148;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050de010; end: 1050de17f; -[SCFriendProfileCondensedIdentitySectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1050de010(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be821a0(param_1);
      _objc_release(uVar1);
      param_1 = 1;
    }
  }
  else {
    func_0x00010be7d660(param_1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1050de180; end: 1050de2c7; -[SCFriendProfileCondensedIdentitySectionActionHandler _presentPlusUpsell:sourcePageType:sourceFeatureType:] */

undefined8 FUN_1050de180(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c038f40(puVar5,param_2,lVar6,1);
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf23e60(uVar8,param_2,puVar5,puVar7,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  return 1;
}



/* Entry: 1050de2c8; end: 1050de443; -[SCFriendProfileCondensedIdentitySectionActionHandler _processSaturnDeeplinkWithUrl:] */

void FUN_1050de2c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071600();
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    puVar4 = PTR_PTR_1126b3d48;
    _objc_alloc_init(PTR_PTR_1126b3d48);
    if ((int)uVar3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c114880(puVar4);
      _objc_release(puVar5);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010c1148a0(puVar4);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
    }
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050de444; end: 1050de4eb;  */

void FUN_1050de444(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1050de4ec;
    puStack_38 = &UNK_110841fb0;
    _objc_copyWeak(auStack_28,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1050de4ec; end: 1050de57b;  */

void FUN_1050de4ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bde9be0();
  _objc_release(lVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be482e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050de57c; end: 1050de61f; -[SCFriendProfileCondensedIdentitySectionActionHandler _copySaturnLinkForDeferredOpen:] */

void FUN_1050de57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07cf20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b3d48;
      _objc_alloc_init(PTR_PTR_1126b3d48);
      func_0x00010bf52080();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050de620; end: 1050de743; -[SCFriendProfileCondensedIdentitySectionActionHandler _launchSaturnUpsellTray] */

undefined8 FUN_1050de620(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010be7e360(param_1);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bfaa5a0(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar1);
  }
  return 1;
}



/* Entry: 1050de744; end: 1050de78b;  */

void FUN_1050de744(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050de78c; end: 1050de9cb; -[SCFriendProfileCondensedIdentitySectionActionHandler _presentSaturnUpsellTrayWithSocialContext:] */

void FUN_1050de78c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010901d7c4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b3d50;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237a40(puVar7,param_2,uVar6);
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126b3d58;
  _objc_alloc(PTR_PTR_1126b3d58);
  lVar3 = param_3;
  func_0x00010bfb8520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bfb7d00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c154bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_3;
    func_0x00010c276640();
  }
  func_0x00010c056c20(puVar7,param_2,puVar2,uVar5,1,1,0,lVar3,lVar8,lVar9,lVar10,0,0,0);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 == 0) {
    func_0x00010c2066c0(puVar7,param_2,PTR____NSArray0__struct_11034ab48);
    func_0x00010c2066e0(puVar7,param_2,puVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c2743e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2066c0(puVar7,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c274400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2066e0(puVar7,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050de9cc; end: 1050dea13; -[SCFriendProfileCondensedIdentitySectionActionHandler plusSubscribeDidDismiss] */

void FUN_1050de9cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050dea14; end: 1050dea5b; -[SCFriendProfileCondensedIdentitySectionActionHandler saturnUpsellTrayDidDismiss] */

void FUN_1050dea14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050dea5c; end: 1050dea73; -[SCFriendProfileCondensedIdentitySectionActionHandler presentingViewController] */

void FUN_1050dea5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050dea74; end: 1050dea7f; -[SCFriendProfileCondensedIdentitySectionActionHandler setPresentingViewController:] */

void FUN_1050dea74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1050dea80; end: 1050deaf3; -[SCFriendProfileCondensedIdentitySectionActionHandler .cxx_destruct] */

void FUN_1050dea80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050deaf4; end: 1050df03f; -[SCFriendProfileCondensedIdentitySectionDataProvider initWithSnapchatter:valdiRuntimeProvider:snapchattersObservableRepository:snapchattersDataTracker:storiesDataCoordinator:remoteStoriesDataProvider:circumstanceEngine:cofStore:friendmojiRegistry:plusFeatureGating:grapheneRegistry:storiesActiveStoryStatusFetcher:runtime:conversationUpdatesPublisher:grpcServiceFactory:composerFriendStore:atlasFriendDataProvider:saturnExperimentProvider:friendSurfaceImpressionLogger:profileSessionId:] */

undefined8 *
FUN_1050deaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e6150;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    uVar5 = puVar1[0x10];
    _objc_retain(uVar5);
    puVar3 = PTR_PTR_1126b3938;
    _objc_alloc();
    _objc_retain(uVar5);
    func_0x00010c0213e0(0x4008000000000000);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_3;
    _objc_release(uVar2);
    puVar1[0x16] = 0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x19) = 0;
    puVar3 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_21;
    _objc_release(uVar2);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    _objc_release(uVar5);
    _objc_release(uVar5);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1050df040; end: 1050df1ff;  */

void FUN_1050df040(long param_1,ulong param_2,undefined *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    if (param_3 == (undefined *)0x0) goto LAB_1050df1cc;
    puVar4 = PTR_PTR_1126b3938;
    func_0x00010c275da0(PTR_PTR_1126b3938);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,puVar4);
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar4);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar4);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    _objc_retain(param_3);
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010bfc5e80(lVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(param_3);
    puVar4 = param_3;
  }
  _objc_release(puVar4);
LAB_1050df1cc:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1050df200; end: 1050df233;  */

void FUN_1050df200(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001050df210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 1050df234; end: 1050df2cb;  */

void FUN_1050df234(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3938;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275da0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1050df2cc; end: 1050df35f; -[SCFriendProfileCondensedIdentitySectionDataProvider setUp] */

void FUN_1050df2cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be50060();
  func_0x00010be66de0(param_1,param_2,*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  func_0x00010be0f5a0(param_1);
  param_1 = param_1 + 0xf0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c295320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050df360; end: 1050df4bb; -[SCFriendProfileCondensedIdentitySectionDataProvider _logAddFriendSurfaceImpressionIfNeeded] */

void FUN_1050df360(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  if (((*(byte *)(param_1 + 0xe8) & 1) == 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
    func_0x000100bf119c();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0xa0);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c08fa60();
      if (uVar2 != 0) {
        lVar3 = *(long *)(param_1 + 0xe0);
        func_0x00010c08fa60();
        if (lVar3 != 0) {
          *(undefined1 *)(param_1 + 0xe8) = 1;
          puVar4 = PTR_PTR_1126b4a10;
          _objc_alloc();
          func_0x00010c050cc0();
          puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          _objc_release(puVar5);
          uVar7 = *(undefined8 *)(param_1 + 0xd8);
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          param_3 = 7;
          func_0x00010c0aeee0(uVar7);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
      }
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(uVar1 + 0x98));
  _objc_initWeak(auStack_c8,uVar1);
  uVar6 = *(undefined8 *)(uVar1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(uVar1 + 0xf8);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c2445c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1050df750;
  puStack_d8 = &UNK_1108553a0;
  _objc_copyWeak(auStack_d0,auStack_c8);
  uVar10 = uVar9;
  func_0x00010c25ff60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar7 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be14ac0(uVar1);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(uVar1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf150c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_c8);
  uVar6 = uVar10;
  func_0x00010c25ff60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar8);
  func_0x00010bea7960(uVar1);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(param_3);
  return;
}



/* Entry: 1050df4bc; end: 1050df74f; -[SCFriendProfileCondensedIdentitySectionDataProvider _observeSnapchatter:] */

void FUN_1050df4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x98));
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2445c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1050df750;
  puStack_88 = &UNK_1108553a0;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be14ac0(param_1);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf150c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar1 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010bea7960(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 1050df750; end: 1050df797;  */

void FUN_1050df750(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050df798; end: 1050df7f7;  */

void FUN_1050df798(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c252440(param_2);
  _objc_release(param_2);
  func_0x00010bea66a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050df7f8; end: 1050df8ef; -[SCFriendProfileCondensedIdentitySectionDataProvider _setSnapchatter:] */

void FUN_1050df7f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0xa0);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_1050df8dc;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(ulong *)(param_1 + 0xa0) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1 + 0xf0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c295320();
    _objc_release(lVar3);
    if (*(char *)(param_1 + 0xc9) != '\x01') goto LAB_1050df8dc;
    *(undefined1 *)(param_1 + 0xc9) = 0;
    uVar4 = *(ulong *)(param_1 + 0xa0);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14ac0(param_1,param_2,uVar4);
  }
  _objc_release(uVar4);
LAB_1050df8dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050df8f0; end: 1050df9af; -[SCFriendProfileCondensedIdentitySectionDataProvider _setStorySummaryInfo:] */

void FUN_1050df8f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0xb8);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_1050df99c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(ulong *)(param_1 + 0xb8) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0xf0;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c295320();
  }
  _objc_release(uVar3);
LAB_1050df99c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050df9b0; end: 1050df9f7; -[SCFriendProfileCondensedIdentitySectionDataProvider _setPlusBadgeFeatureGatingState:] */

void FUN_1050df9b0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0xb0) == param_3) {
    return;
  }
  *(long *)(param_1 + 0xb0) = param_3;
  param_1 = param_1 + 0xf0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c295320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050df9f8; end: 1050dfbe7; -[SCFriendProfileCondensedIdentitySectionDataProvider _setShowNonFriendStoryRingIfNecessary] */

void FUN_1050df9f8(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x30);
  FUN_1050dde80();
  if ((int)uVar1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0xa0);
    func_0x000100bf119c();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0xa0);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(ulong *)(param_1 + 0xa0);
      func_0x00010901c6c4();
      if ((uVar2 & 1) == 0) {
        func_0x00010901c974();
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined **)(param_1 + 0xa8) = puVar3;
      _objc_release(uVar7);
      _objc_initWeak(auStack_58,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_50 = uVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1050dfbe8;
      puStack_70 = &UNK_110866e80;
      unaff_x24 = &puStack_88;
      param_2 = auStack_58;
      _objc_copyWeak(auStack_60,param_2);
      uStack_68 = uVar1;
      func_0x00010c129ba0(uVar7);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x24 + 5);
    _objc_destroyWeak(auStack_58);
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar5 = uVar1 + 0x28;
    _objc_loadWeakRetained(lVar5);
    puVar6 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bea7980(lVar5);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 1050dfbe8; end: 1050dfc5b;  */

void FUN_1050dfbe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea7980(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050dfc5c; end: 1050dfccf; -[SCFriendProfileCondensedIdentitySectionDataProvider _setShowNonFriendStoryRingWithShow:] */

void FUN_1050dfc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xa8);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = param_3;
    _objc_release(uVar2);
    param_1 = param_1 + 0xf0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c295320();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050dfcd0; end: 1050dfe23; -[SCFriendProfileCondensedIdentitySectionDataProvider _fetchAndObserveConvo] */

void FUN_1050dfcd0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126b01c0;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfa4ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1050dfe24; end: 1050dfeaf;  */

void FUN_1050dfe24(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bf500c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedbe60(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050dfeb0; end: 1050dff07; -[SCFriendProfileCondensedIdentitySectionDataProvider _updateMuteStatusWithConvo:] */

void FUN_1050dfeb0(long param_1,undefined8 param_2,uint param_3)

{
  func_0x000107d06230();
  if (*(byte *)(param_1 + 200) == param_3) {
    return;
  }
  *(char *)(param_1 + 200) = (char)param_3;
  param_1 = param_1 + 0xf0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c295320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050dff08; end: 1050dff6f; -[SCFriendProfileCondensedIdentitySectionDataProvider tearDown] */

void FUN_1050dff08(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050dff70; end: 1050e006f; -[SCFriendProfileCondensedIdentitySectionDataProvider valdiContext] */

void FUN_1050dff70(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010bdf5680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0xc0);
  if ((uVar2 == 0) || (func_0x00010bf6f140(), (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b4a18;
    _objc_opt_class(PTR_PTR_1126b4a18);
    lVar5 = param_1;
    func_0x00010bdec340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010bf55740(uVar8,param_2,puVar4,lVar1,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = uVar6;
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0xc0),param_2,lVar1);
  }
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1050e0070; end: 1050e04f7; -[SCFriendProfileCondensedIdentitySectionDataProvider _createValdiViewModel] */

void FUN_1050e0070(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  puVar2 = PTR_PTR_1126b4a20;
  _objc_alloc(PTR_PTR_1126b4a20);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010901d7c4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c294420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b180(puVar2,param_2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(ulong *)(param_1 + 0xa0);
  func_0x000100bf119c();
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0xa0);
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar8 = *(long *)(param_1 + 0xa0);
    if (lVar9 == 0) {
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c261d20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00010c08fa60();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar7 == 0) goto LAB_1050e01f4;
      lVar8 = *(long *)(param_1 + 0xa0);
      func_0x00010c262240(lVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c261d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010befb8c0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c20f640(puVar2,param_2,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
LAB_1050e01f4:
  lVar9 = *(long *)(param_1 + 0xa0);
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar8;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    func_0x00010c1e4320(puVar2,param_2,lVar8);
  }
  puVar10 = PTR_PTR_1126b28e0;
  _objc_opt_new(PTR_PTR_1126b28e0);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf1bae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar10,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf1bae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar10,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010c171180(puVar2,param_2,puVar10);
  func_0x00010c20dc60(puVar2,param_2,*(undefined8 *)(param_1 + 0xb8));
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000100bf119c();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((iVar1 != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c102000(uVar3);
    func_0x00010c0df820(puVar11,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fda0(puVar2,param_2,puVar11);
    _objc_release(puVar11);
  }
  func_0x00010c201de0(puVar2,param_2,*(undefined8 *)(param_1 + 0xa8));
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201dc0(puVar2,param_2,puVar11);
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2b40(puVar2,param_2,puVar11);
  _objc_release(puVar11);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000100bf119c();
  if (iVar1 == 0) {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194b80(puVar2,param_2,puVar11);
    _objc_release(puVar11);
  }
  else {
    func_0x00010c194b80(puVar2,param_2,0);
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar13 = lVar7;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar13;
    func_0x00010bf529e0();
    _objc_release(lVar13);
    _objc_release(lVar9);
    if (lVar12 != 0) {
      lVar9 = lVar7;
      func_0x00010c0fb120(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1db5a0(puVar2,param_2,lVar13);
      _objc_release(lVar13);
      _objc_release(lVar9);
    }
  }
  lVar13 = *(long *)(param_1 + 0xa0);
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar13;
  func_0x00010c149b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar9;
  func_0x00010c08fa60();
  if (lVar13 != 0) {
    func_0x00010c1f5660(puVar2,param_2,lVar9);
  }
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


