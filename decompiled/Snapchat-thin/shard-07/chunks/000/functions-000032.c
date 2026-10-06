/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105090834; end: 105090857; -[SCProfileChatMediaSequenceNumberEntry copyWithZone:] */

undefined8 FUN_105090834(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105090858; end: 1050908cb; -[SCProfileChatMediaSequenceNumberEntry hash] */

undefined8 * FUN_105090858(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105090950;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_105090950;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_105090950;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_105090950:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1050908cc; end: 10509096b; -[SCProfileChatMediaSequenceNumberEntry isEqual:] */

long FUN_1050908cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105090950;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_105090950;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105090950;
    }
  }
  lVar3 = 1;
LAB_105090950:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10509096c; end: 105090973; -[SCProfileChatMediaSequenceNumberEntry participant] */

undefined8 FUN_10509096c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105090974; end: 10509097b; -[SCProfileChatMediaSequenceNumberEntry sequenceNumber] */

undefined8 FUN_105090974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10509097c; end: 105090987; -[SCProfileChatMediaSequenceNumberEntry .cxx_destruct] */

void FUN_10509097c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105090988; end: 1050909eb;  */

undefined ** FUN_105090988(void)

{
  int iVar1;
  
  if ((bRam0000000113817e98 & 1) == 0) {
    iVar1 = 0x13817e98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c2320,0x100000000);
      ___cxa_guard_release(0x113817e98);
    }
  }
  return &PTR_PTR_1130c2320;
}



/* Entry: 1050909ec; end: 105090a73;  */

void FUN_1050909ec(uint *param_1,undefined1 *param_2)

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



/* Entry: 105090a74; end: 105090aff;  */

void FUN_105090a74(long param_1,undefined1 *param_2)

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



/* Entry: 105090b00; end: 105090b0b; +[SCProfileChatMediaFetchMetadata table] */

char * FUN_105090b00(void)

{
  return "profilechatmedia__fetchmetadata_draft";
}



/* Entry: 105090b0c; end: 105090e6b; +[SCProfileChatMediaFetchMetadata immutableObjectParse:bufferSize:] */

void FUN_105090b0c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  uVar4 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar4);
  puVar5 = PTR_PTR_1126b46b8;
  _objc_alloc();
  lVar9 = (long)*piVar1;
  uVar8 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar8 < 5) {
    puVar15 = (undefined *)0x0;
LAB_105090c00:
    puVar14 = (undefined *)0x0;
LAB_105090c04:
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar12 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar8 < 7) goto LAB_105090c00;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 6);
    if (uVar12 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar8 < 9) goto LAB_105090c04;
    uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 8);
    if (uVar12 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      uVar13 = (ulong)*(uint *)((long)piVar1 + uVar12);
      puVar2 = (uint *)((long)((long)piVar1 + uVar12) + uVar13);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        lVar9 = (long)param_3 + uVar13 + uVar12 + (ulong)uVar4 + 10;
        do {
          uVar12 = (ulong)*(uint *)(lVar9 + -6);
          puVar16 = PTR_PTR_1126b46a0;
          _objc_alloc(PTR_PTR_1126b46a0);
          lVar10 = (long)*(int *)(lVar9 + uVar12 + -6);
          lVar3 = lVar9 + (uVar12 - lVar10);
          uVar8 = *(ushort *)(lVar3 + -6);
          if (uVar8 < 5) {
            puVar17 = (undefined *)0x0;
LAB_105090d70:
            uVar7 = 0;
          }
          else {
            uVar13 = (ulong)*(ushort *)(lVar3 + -2);
            if (uVar13 == 0) {
              puVar17 = (undefined *)0x0;
            }
            else {
              lVar3 = lVar9 + uVar12 + uVar13;
              puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar3 + (ulong)*(uint *)(lVar3 + -6) + -2);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = (long)*(int *)(lVar9 + uVar12 + -6);
              uVar8 = *(ushort *)(lVar9 + (uVar12 - lVar10) + -6);
            }
            if ((uVar8 < 7) || (uVar13 = (ulong)*(ushort *)(lVar9 + (uVar12 - lVar10)), uVar13 == 0)
               ) goto LAB_105090d70;
            uVar7 = *(undefined8 *)(lVar9 + uVar12 + uVar13 + -6);
          }
          func_0x00010c034240(puVar16,param_2,puVar17,uVar7);
          _objc_release(puVar17);
          func_0x00010befa120(puVar6,param_2,puVar16);
          _objc_release(puVar16);
          puVar11 = (uint *)(lVar9 + -2);
          lVar9 = lVar9 + 4;
        } while (puVar11 != puVar2 + (ulong)*puVar2 + 1);
      }
      puVar16 = puVar6;
      func_0x00010bf51e00(puVar6);
      _objc_release(puVar6);
      lVar9 = -(long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((10 < uVar8) && (uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 10), uVar12 != 0)) {
      uVar7 = *(undefined8 *)((long)piVar1 + uVar12);
      goto LAB_105090c0c;
    }
  }
  uVar7 = 0;
LAB_105090c0c:
  func_0x00010c032b20(puVar5,param_2,puVar15,puVar14,puVar16,uVar7);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105090e6c; end: 105090e7f; +[SCProfileChatMediaFetchMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_105090e6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_105090ea8;
  auVar1._0_8_ = FUN_105090e80;
  return auVar1;
}



/* Entry: 105090e80; end: 105090ea7;  */

int FUN_105090e80(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf289c08;
  _strcmp("expirationTimestamp",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 105090ea8; end: 105090f47;  */

bool FUN_105090ea8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,
                      "INSERT INTO index_profilechatmedia__fetchmetadata_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                     );
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 105090f48; end: 105091053;  */

undefined1 *
FUN_105090f48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
    puStack_48 = PTR_PTR_1126e5e88;
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
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105091054; end: 1050910c7;  */

void FUN_105091054(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1050910c8();
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



/* Entry: 1050910c8; end: 105091483;  */

void FUN_1050910c8(undefined *param_1)

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
      func_0x00010c0f0720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,
                            "SELECT rowid, p FROM profilechatmedia__fetchmetadata_draft WHERE ownerIdentifier=?1 LIMIT 1"
                           );
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0f0720(param_1);
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
            _objc_opt_class(PTR_PTR_1126b46b8);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_1050913c0;
            puVar7 = PTR_PTR_1126b46c0;
            _objc_alloc(PTR_PTR_1126b46c0);
            puVar2 = puVar3;
            func_0x00010c0f0720(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf38a80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0f2860(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf9c880(puVar3);
            FUN_105090f48(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_1050911d4;
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
      _objc_opt_class(PTR_PTR_1126b46b8);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b46c0;
        _objc_alloc(PTR_PTR_1126b46c0);
        puVar2 = puVar3;
        func_0x00010c0f0720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf38a80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0f2860(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf9c880(puVar3);
        FUN_105090f48(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_1050911d4:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1050913c8;
      }
LAB_1050913c0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1050913c8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105091484; end: 1050914f7;  */

void FUN_105091484(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1050910c8();
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



/* Entry: 1050914f8; end: 105091753;  */

void FUN_1050914f8(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b46c0;
  FUN_105091054(PTR_PTR_1126b46c0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126b46c0;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126b46c0;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010c0f0720(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf38a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c0f2860(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf9c880(param_1);
      FUN_105090f48(puVar6,0xffffffffffffffff,lVar2,lVar3,lVar4,lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    lVar2 = param_1;
    func_0x00010c0f0720(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf38a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0f2860(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf9c880();
    *(long *)(puVar1 + 0x30) = lVar2;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105091754; end: 1050917b7;  */

void FUN_105091754(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b46b8;
    _objc_alloc(PTR_PTR_1126b46b8);
    func_0x00010c032b20();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050917b8; end: 1050917f3; -[SCProfileChatMediaFetchMetadataChangeRequest .cxx_destruct] */

void FUN_1050917b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1050917f4; end: 1050917ff; -[SCProfileChatMediaFetchMetadataChangeRequest table] */

char * FUN_1050917f4(void)

{
  return "profilechatmedia__fetchmetadata_draft";
}



/* Entry: 105091800; end: 1050918b3; -[SCProfileChatMediaFetchMetadataChangeRequest createTableWithSQLite:] */

void FUN_105091800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8e7d0,0xa5,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8e875,0x93,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dd8e908,0xbf,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 1050918b4; end: 105091e4b; -[SCProfileChatMediaFetchMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1050918b4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_105091754(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105091e4c(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    FUN_10507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO profilechatmedia__fetchmetadata_draft (p, ownerIdentifier) VALUES (?1, ?2)"
                       );
    if (lVar7 == 0) goto LAB_105091da8;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_105091da8;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_profilechatmedia__fetchmetadata_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_105091da8;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b46b8);
    func_0x00010c21c9a0(puVar11);
LAB_105091d80:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,
                            "DELETE FROM profilechatmedia__fetchmetadata_draft WHERE rowid=?1");
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,
                                "DELETE FROM index_profilechatmedia__fetchmetadata_draftexpirationTimestamp WHERE rowid=?1"
                               );
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_1050919e0;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b46b8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105091db4;
          }
        }
      }
LAB_1050919e0:
      puVar11 = (undefined *)0x0;
      goto LAB_105091db4;
    }
    FUN_105091754();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105091e4c(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "UPDATE profilechatmedia__fetchmetadata_draft SET p=?1, ownerIdentifier=?3 WHERE rowid=?2 LIMIT 1"
                       );
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
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
        _objc_opt_class(PTR_PTR_1126b46b8);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9c880();
        puVar5 = puVar6;
        func_0x00010bf9c880();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,
                              "UPDATE index_profilechatmedia__fetchmetadata_draftexpirationTimestamp SET expirationTimestamp=?1 WHERE rowid=?2 LIMIT 1"
                             );
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_105091da0;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b46b8);
        func_0x00010c21c9a0(puVar11);
        goto LAB_105091d80;
      }
    }
LAB_105091da0:
    _objc_release(puVar6);
LAB_105091da8:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_105091db4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105091e4c; end: 105092377;  */

ulong FUN_105091e4c(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_1108652e8;
  pcStack_108 = FUN_105092378;
  pppuStack_f8 = &ppuStack_110;
  uVar10 = param_2;
  func_0x00010c0f2860();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar10);
  uVar5 = uVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (uVar5 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar18 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
    do {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(uVar10);
        }
        uVar15 = *(undefined8 *)(uVar13 * 8);
        _objc_retain(uVar15);
        _objc_retain(uVar15);
        uStack_118 = uVar15;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_105092284;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar18 < puVar14) {
          *puVar18 = (int)pppuVar6;
          puVar17 = puStack_168;
        }
        else {
          lVar16 = (long)puVar18 - (long)puStack_168;
          uVar8 = (lVar16 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_105092598();
LAB_105092284:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x105092288);
            (*pcVar4)();
          }
          uVar12 = (long)puVar14 - (long)puStack_168 >> 1;
          if (uVar12 <= uVar8) {
            uVar12 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar14 - (long)puStack_168)) {
            uVar12 = 0x3fffffffffffffff;
          }
          if (uVar12 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_105092284;
          }
          lVar7 = uVar12 << 2;
          __Znwm();
          puVar18 = (undefined4 *)(lVar7 + lVar16);
          puVar14 = (undefined4 *)(lVar7 + uVar12 * 4);
          puVar17 = puVar18 + -(lVar16 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar17,puStack_168,lVar16);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar17;
        puVar18 = puVar18 + 1;
        _objc_release(uVar15);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      uVar5 = uVar10;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar10);
  _objc_release(uVar10);
  _objc_release(uVar10);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10509207c;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar11))();
LAB_10509207c:
  uVar5 = param_2;
  func_0x00010c0f0720();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_105092468(param_1,uVar5);
  uVar8 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  FUN_105092468(param_1,uVar8);
  uVar10 = (long)puVar18 - (long)puStack_168;
  puVar14 = (undefined4 *)&UNK_10dd8ec18;
  if (uVar10 != 0) {
    puVar14 = puStack_168;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar10,4);
  func_0x0001001cddd0(param_1,uVar10,4);
  if (puStack_168 != puVar18) {
    lVar11 = (long)uVar10 >> 2;
    do {
      iVar3 = puVar14[lVar11 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar9 = param_1;
  func_0x0001001ce0bc(param_1,uVar10 >> 2);
  uVar10 = param_2;
  func_0x00010bf9c880(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,10,uVar10,0);
  if ((int)uVar9 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,8,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar9) + 4,0);
  }
  func_0x0001001ce2e4(param_1,6,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar13 & 0xffffffff);
  uVar10 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1,uVar10);
  _objc_release(uVar8);
  _objc_release(uVar5);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv(puStack_168);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar10);
    uVar13 = uVar10;
    func_0x00010c0f49c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_105092468(uVar5,uVar13);
    uVar12 = uVar10;
    func_0x00010c15e680(uVar10);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x0001001ce1c8(uVar5,6,uVar12,0);
    func_0x0001001ce2e4(uVar5,4,uVar8 & 0xffffffff);
    func_0x0001001ce548(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar13);
    _objc_release(uVar10);
    return uVar5;
  }
  return param_1;
}



/* Entry: 105092378; end: 105092467;  */

ulong FUN_105092378(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0f49c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105092468(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c15e680(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,6,uVar6,0);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105092468; end: 105092597;  */

undefined8 FUN_105092468(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105092548;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105092548;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105092508;
    param_1 = 0;
  }
  else {
LAB_105092508:
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
LAB_105092548:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105092598; end: 1050925ab;  */

void FUN_105092598(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 1050925ac; end: 1050925b3;  */

void FUN_1050925ac(void)

{
  return;
}



/* Entry: 1050925b4; end: 1050925e7;  */

void FUN_1050925b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108652e8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1050925e8; end: 105092627;  */

void FUN_1050925e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108652e8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105092628; end: 105092663;  */

long FUN_105092628(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110865358);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105092664; end: 10509266f;  */

undefined ** FUN_105092664(void)

{
  return &PTR_DAT_110865358;
}



/* Entry: 105092670; end: 1050926d3;  */

undefined ** FUN_105092670(void)

{
  int iVar1;
  
  if ((bRam0000000113817ea0 & 1) == 0) {
    iVar1 = 0x13817ea0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130c2390,0x100000000);
      ___cxa_guard_release(0x113817ea0);
    }
  }
  return &PTR_PTR_1130c2390;
}



/* Entry: 1050926d4; end: 10509275b;  */

void FUN_1050926d4(uint *param_1,undefined1 *param_2)

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



/* Entry: 10509275c; end: 1050927e7;  */

void FUN_10509275c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0f0700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050927e8; end: 10509289f;  */

undefined8 FUN_1050927e8(void)

{
  int iVar1;
  
  if ((bRam0000000113817f18 & 1) == 0) {
    iVar1 = 0x13817f18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113817eb0 = 0xe;
      pcRam0000000113817eb8 = "expirationTimestamp";
      uRam0000000113817ec0 = 0x100;
      pcRam0000000113817ec8 = FUN_1050928a0;
      pcRam0000000113817ed0 = FUN_1050928d8;
      ppuRam0000000113817ea8 = &PTR_DAT_110864b98;
      uRam0000000113817ee8 = 0;
      uRam0000000113817ee0 = 0;
      uRam0000000113817ef8 = 0;
      uRam0000000113817ef0 = 0;
      uRam0000000113817f08 = 0;
      uRam0000000113817f00 = 0;
      uRam0000000113817f10 = 0;
      ___cxa_atexit(0x105077cd4,0x113817ea8,0x100000000);
      ___cxa_guard_release(0x113817f18);
    }
  }
  return 0x113817ea8;
}



/* Entry: 1050928a0; end: 1050928d7;  */

undefined8 FUN_1050928a0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1050928d8; end: 10509292b;  */

undefined8 FUN_1050928d8(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 10509292c; end: 1050929a3;  */

void FUN_10509292c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1050929a4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1050929a4; end: 105092a13;  */

/* WARNING: Possible PIC construction at 0x0001050929c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001050929c4) */

undefined1  [16] FUN_1050929a4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3e != 0) {
    func_0x000104c443dc();
  }
  if (param_2 >> 0x3e != 0) {
    func_0x000104bd35f4();
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = "profilechatmedia__datamodel_draft";
    return auVar3;
  }
  lVar1 = param_2 << 2;
  __Znwm(lVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 105092a14; end: 105092a1f; +[SCProfileChatMediaDataModel table] */

char * FUN_105092a14(void)

{
  return "profilechatmedia__datamodel_draft";
}



/* Entry: 105092a20; end: 1050935bf; +[SCProfileChatMediaDataModel immutableObjectParse:bufferSize:] */

void FUN_105092a20(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  char cVar22;
  undefined *puVar23;
  uint *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  
  uVar8 = (ulong)*param_3;
  piVar1 = (int *)((long)param_3 + uVar8);
  puVar5 = PTR_PTR_1126b46a8;
  _objc_alloc();
  lVar9 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar7 < 5) {
    puStack_70 = (undefined *)0x0;
LAB_105092b1c:
    puVar29 = (undefined *)0x0;
LAB_105092b24:
    uStack_88 = 0;
LAB_105092b28:
    puVar19 = (undefined *)0x0;
LAB_105092b2c:
    uVar3 = 0;
LAB_105092b30:
    puStack_78 = (undefined *)0x0;
LAB_105092b34:
    puVar14 = (undefined *)0x0;
LAB_105092b38:
    uVar27 = 0;
    uVar21 = 0;
LAB_105092b40:
    lVar9 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar13 == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + uVar13);
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar24 + (ulong)*puVar24 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar7 < 7) goto LAB_105092b1c;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 6);
    if (uVar13 == 0) {
      puVar29 = (undefined *)0x0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + uVar13);
      puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar24 + (ulong)*puVar24 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 9) goto LAB_105092b24;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 8);
    if (uVar13 == 0) {
      uStack_88 = 0;
    }
    else {
      uStack_88 = *(undefined8 *)((long)piVar1 + uVar13);
    }
    if (uVar7 < 0xb) goto LAB_105092b28;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 10);
    if (uVar13 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + uVar13);
      puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar24 + (ulong)*puVar24 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0xd) goto LAB_105092b2c;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xc);
    if (uVar13 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((long)piVar1 + uVar13);
    }
    if (uVar7 < 0xf) goto LAB_105092b30;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0xe);
    if (uVar13 == 0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + uVar13);
      puStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar24 + (ulong)*puVar24 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0x11) goto LAB_105092b34;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x10);
    if (uVar13 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar24 = (uint *)((long)piVar1 + uVar13);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar24 + (ulong)*puVar24 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0x13) goto LAB_105092b38;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x12);
    if (uVar13 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined8 *)((long)piVar1 + uVar13);
    }
    if (uVar7 < 0x15) {
      uVar27 = 0;
      goto LAB_105092b40;
    }
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x14);
    if (uVar13 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined8 *)((long)piVar1 + uVar13);
    }
    if ((uVar7 < 0x19) || (uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 0x18), uVar13 == 0))
    goto LAB_105092b40;
    puVar24 = (uint *)((long)piVar1 + uVar13);
    lVar9 = (long)puVar24 + (ulong)*puVar24;
  }
  FUN_105095fa8();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar10);
  if (uVar7 < 0x1d) {
    puVar28 = (undefined *)0x0;
LAB_105092dd0:
    puVar25 = (undefined *)0x0;
LAB_105092dd8:
    uVar15 = 0;
LAB_105092ddc:
    puVar23 = (undefined *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar1 - lVar10))[0xe];
    if (uVar13 == 0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar12 = (uint *)((long)piVar1 + uVar13);
      puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
      puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar12 + 1;
      if (*puVar12 != 0) {
        do {
          lVar10 = (long)puVar24 + (ulong)*puVar24;
          FUN_105095fa8(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar25,param_2,lVar10);
          _objc_release(lVar10);
          puVar24 = puVar24 + 1;
        } while (puVar24 != puVar12 + 1 + *puVar12);
      }
      puVar28 = puVar25;
      func_0x00010bf51e00();
      _objc_release(puVar25);
      lVar10 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar10);
    }
    lVar10 = -lVar10;
    if (uVar7 < 0x1f) goto LAB_105092dd0;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x1e);
    if (uVar13 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      uVar18 = (ulong)*(uint *)((long)piVar1 + uVar13);
      puVar24 = (uint *)((long)((long)piVar1 + uVar13) + uVar18);
      puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar24);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar24 != 0) {
        lVar10 = (long)param_3 + uVar18 + uVar13 + uVar8 + 0xc;
        do {
          uVar13 = (ulong)*(uint *)(lVar10 + -8);
          puVar25 = PTR_PTR_1126b46d0;
          _objc_alloc(PTR_PTR_1126b46d0);
          lVar11 = (long)*(int *)(lVar10 + uVar13 + -8);
          lVar2 = lVar10 + (uVar13 - lVar11);
          uVar7 = *(ushort *)(lVar2 + -8);
          if (uVar7 < 5) {
            puVar26 = (undefined *)0x0;
LAB_105092d58:
            bVar4 = false;
LAB_105092d5c:
            uVar6 = 0;
          }
          else {
            uVar18 = (ulong)*(ushort *)(lVar2 + -4);
            if (uVar18 == 0) {
              puVar26 = (undefined *)0x0;
            }
            else {
              lVar2 = lVar10 + uVar13 + uVar18;
              puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar2 + (ulong)*(uint *)(lVar2 + -8) + -4);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = (long)*(int *)(lVar10 + uVar13 + -8);
              uVar7 = *(ushort *)(lVar10 + (uVar13 - lVar11) + -8);
            }
            if (uVar7 < 7) goto LAB_105092d58;
            uVar18 = (ulong)*(ushort *)(lVar10 + -lVar11 + uVar13 + -2);
            if (uVar18 == 0) {
              bVar4 = false;
            }
            else {
              bVar4 = *(char *)(lVar10 + uVar13 + uVar18 + -8) != '\0';
            }
            if ((uVar7 < 9) || (uVar18 = (ulong)*(ushort *)(lVar10 + -lVar11 + uVar13), uVar18 == 0)
               ) goto LAB_105092d5c;
            uVar6 = *(undefined8 *)(lVar10 + uVar13 + uVar18 + -8);
          }
          func_0x00010c034220(puVar25,param_2,puVar26,bVar4,uVar6);
          _objc_release(puVar26);
          func_0x00010befa120(puVar23,param_2,puVar25);
          _objc_release(puVar25);
          puVar12 = (uint *)(lVar10 + -4);
          lVar10 = lVar10 + 4;
        } while (puVar12 != puVar24 + (ulong)*puVar24 + 1);
      }
      puVar25 = puVar23;
      func_0x00010bf51e00();
      _objc_release(puVar23);
      lVar10 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0x21) goto LAB_105092dd8;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x20);
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined1 *)((long)piVar1 + uVar13);
    }
    if (uVar7 < 0x23) goto LAB_105092ddc;
    uVar13 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x22);
    if (uVar13 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      uVar18 = (ulong)*(uint *)((long)piVar1 + uVar13);
      puVar24 = (uint *)((long)((long)piVar1 + uVar13) + uVar18);
      puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar24);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar24 != 0) {
        param_3 = (uint *)((long)param_3 + uVar18 + uVar13 + uVar8 + 8);
        do {
          uVar8 = (ulong)param_3[-1];
          puVar23 = PTR_PTR_1126b46d8;
          _objc_alloc(PTR_PTR_1126b46d8);
          lVar10 = uVar8 - (long)*(int *)((long)param_3 + (uVar8 - 4));
          uVar7 = *(ushort *)((long)param_3 + lVar10 + -4);
          if (uVar7 < 5) {
            uVar17 = 0;
            uVar16 = 0;
LAB_1050930b8:
            cVar22 = '\0';
LAB_1050930bc:
            puVar20 = (undefined *)0x0;
          }
          else {
            if ((ulong)*(ushort *)((long)param_3 + lVar10) == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(undefined4 *)
                        ((long)param_3 + uVar8 + *(ushort *)((long)param_3 + lVar10) + -4);
            }
            if (uVar7 < 7) {
              uVar17 = 0;
              goto LAB_1050930b8;
            }
            uVar13 = (ulong)*(ushort *)((long)param_3 + lVar10 + 2);
            if (uVar13 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined4 *)((long)param_3 + uVar8 + uVar13 + -4);
            }
            if (uVar7 < 9) goto LAB_1050930b8;
            uVar13 = (ulong)*(ushort *)((long)param_3 + lVar10 + 4);
            if (uVar13 == 0) {
              cVar22 = '\0';
            }
            else {
              cVar22 = *(char *)((long)param_3 + uVar8 + uVar13 + -4);
            }
            if ((uVar7 < 0xb) ||
               (uVar13 = (ulong)*(ushort *)((long)param_3 + lVar10 + 6), uVar13 == 0))
            goto LAB_1050930bc;
            lVar10 = uVar8 + uVar13;
            puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)param_3 +
                                (ulong)*(uint *)((long)param_3 + lVar10 + -4) + lVar10);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c04b8a0(puVar23,param_2,uVar16,uVar17,(int)cVar22,puVar20);
          _objc_release(puVar20);
          func_0x00010befa120(puVar26,param_2,puVar23);
          _objc_release(puVar23);
          bVar4 = param_3 != puVar24 + (ulong)*puVar24 + 1;
          param_3 = param_3 + 1;
        } while (bVar4);
      }
      puVar23 = puVar26;
      func_0x00010bf51e00();
      _objc_release(puVar26);
      lVar10 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0x24 < uVar7) && (0x26 < uVar7)) {
      uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar10 + 0x26);
      if (uVar8 == 0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar12 = (uint *)((long)piVar1 + uVar8);
        puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
        puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar12 + 1;
        if (*puVar12 != 0) {
          do {
            puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar24 + (ulong)*puVar24 + 4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar26 != (undefined *)0x0) {
              func_0x00010befa120(puVar20,param_2,puVar26);
            }
            _objc_release(puVar26);
            puVar24 = puVar24 + 1;
          } while (puVar24 != puVar12 + 1 + *puVar12);
        }
        puVar26 = puVar20;
        func_0x00010bf51e00();
        _objc_release(puVar20);
      }
      goto LAB_105092df8;
    }
  }
  puVar26 = (undefined *)0x0;
LAB_105092df8:
  func_0x00010c032aa0(puVar5,param_2,puStack_70,puVar29,uStack_88,puVar19,uVar3,puStack_78,puVar14,
                      uVar21,uVar27,lVar9,puVar28,puVar25,uVar15);
  _objc_release(puVar26);
  _objc_release(puVar23);
  _objc_release(puVar25);
  _objc_release(puVar28);
  _objc_release(lVar9);
  _objc_release(puVar14);
  _objc_release(puStack_78);
  _objc_release(puVar19);
  _objc_release(puVar29);
  _objc_release(puStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050935c0; end: 1050935d3; +[SCProfileChatMediaDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_1050935c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_1050935fc;
  auVar1._0_8_ = FUN_1050935d4;
  return auVar1;
}



/* Entry: 1050935d4; end: 1050935fb;  */

int FUN_1050935d4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf289c08;
  _strcmp("expirationTimestamp",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 1050935fc; end: 10509369b;  */

bool FUN_1050935fc(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,
                      "INSERT INTO index_profilechatmedia__datamodel_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                     );
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10509369c; end: 10509398f;  */

long * FUN_10509369c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,undefined1 param_15,undefined4 param_16,
                    long param_17,undefined1 param_18,undefined4 param_19,long param_20,
                    long param_21,undefined4 param_22)

{
  long *plVar1;
  long lVar2;
  long lStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_20);
  if (param_1 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    puStack_70 = PTR_PTR_1126e5e90;
    plVar1 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_2;
      _objc_retain(param_3);
      lVar2 = plVar1[4];
      plVar1[4] = param_3;
      _objc_release(lVar2);
      _objc_retain(param_4);
      lVar2 = plVar1[5];
      plVar1[5] = param_4;
      _objc_release(lVar2);
      plVar1[6] = param_5;
      _objc_retain(param_6);
      lVar2 = plVar1[7];
      plVar1[7] = param_6;
      _objc_release(lVar2);
      plVar1[8] = param_7;
      _objc_retain(param_8);
      lVar2 = plVar1[9];
      plVar1[9] = param_8;
      _objc_release(lVar2);
      _objc_retain(param_9);
      lVar2 = plVar1[10];
      plVar1[10] = param_9;
      _objc_release(lVar2);
      plVar1[0xb] = param_10;
      plVar1[0xc] = param_11;
      _objc_retain(param_12);
      lVar2 = plVar1[0xd];
      plVar1[0xd] = param_12;
      _objc_release(lVar2);
      _objc_retain(param_13);
      lVar2 = plVar1[0xe];
      plVar1[0xe] = param_13;
      _objc_release(lVar2);
      _objc_retain(param_14);
      lVar2 = plVar1[0xf];
      plVar1[0xf] = param_14;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_15;
      _objc_retain(param_17);
      lVar2 = plVar1[0x10];
      plVar1[0x10] = param_17;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x15) = param_18;
      _objc_retain(param_20);
      lVar2 = plVar1[0x11];
      plVar1[0x11] = param_20;
      _objc_release(lVar2);
      plVar1[0x12] = param_21;
      *(undefined4 *)(plVar1 + 3) = param_22;
    }
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 105093990; end: 1050940b3;  */

void FUN_105093990(undefined *param_1)

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
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0f0700();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar10 = param_1;
        func_0x00010bf36ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar1;
          func_0x00010bf636c0();
          _objc_release(puVar1);
          func_0x0001001b9e08(puVar10,
                              "SELECT rowid, p FROM profilechatmedia__datamodel_draft WHERE ownerId=?1 AND chatMediaId=?2 LIMIT 1"
                             );
          if (puVar10 != (undefined *)0x0) {
            puVar1 = param_1;
            func_0x00010c0f0700(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_1;
            func_0x00010bf36ca0(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar10,2,puVar2,0xffffffff,0xffffffffffffffff);
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
              _objc_opt_class(PTR_PTR_1126b46a8);
              _sqlite3_column_blob(puVar10,1);
              _sqlite3_column_bytes(puVar10,1);
              puVar3 = puVar2;
              func_0x00010c0dfea0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_1);
              _objc_release(puVar2);
              _sqlite3_reset(puVar10);
              if (puVar3 == (undefined *)0x0) goto LAB_105093f50;
              puVar10 = PTR_PTR_1126b46b0;
              _objc_alloc();
              puStack_70 = puVar3;
              func_0x00010c0f0700();
              _objc_retainAutoreleasedReturnValue();
              puStack_78 = puVar3;
              func_0x00010bf36ca0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar3;
              func_0x00010bf9c880();
              puStack_80 = puVar3;
              func_0x00010c0cb5a0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c27dd80(puVar3);
              puStack_88 = puVar3;
              func_0x00010c15df60();
              _objc_retainAutoreleasedReturnValue();
              puStack_90 = puVar3;
              func_0x00010bf50280();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010c15e680();
              puVar6 = puVar3;
              func_0x00010c0cb980();
              puStack_98 = puVar3;
              func_0x00010bfbeda0();
              _objc_retainAutoreleasedReturnValue();
              puStack_a0 = puVar3;
              func_0x00010c0ca220();
              _objc_retainAutoreleasedReturnValue();
              puStack_a8 = puVar3;
              func_0x00010c14bb00();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              func_0x00010c0cba00();
              puVar8 = puVar3;
              func_0x00010c0c4380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c074940();
              puVar9 = puVar3;
              func_0x00010c0ca820();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13e020();
              func_0x00010c15db20();
              FUN_10509369c(puVar10,puVar1,puStack_70,puStack_78,puVar2,puStack_80,puVar4,puStack_88
                            ,puStack_90,puVar5,puVar6,puStack_98,puStack_a0,puStack_a8,(char)puVar7)
              ;
              goto LAB_105093bb4;
            }
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b46a8);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126b46b0;
        _objc_alloc();
        puStack_70 = puVar3;
        func_0x00010c0f0700();
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = puVar3;
        func_0x00010bf36ca0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf9c880();
        puStack_80 = puVar3;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c27dd80(puVar3);
        puStack_88 = puVar3;
        func_0x00010c15df60();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e680();
        puVar6 = puVar3;
        func_0x00010c0cb980();
        puStack_98 = puVar3;
        func_0x00010bfbeda0();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar3;
        func_0x00010c0ca220();
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = puVar3;
        func_0x00010c14bb00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0cba00();
        puVar8 = puVar3;
        func_0x00010c0c4380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c074940();
        puVar9 = puVar3;
        func_0x00010c0ca820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13e020();
        func_0x00010c15db20();
        FUN_10509369c(puVar10,puVar1,puStack_70,puStack_78,puVar2,puStack_80,puVar4,puStack_88,
                      puStack_90,puVar5,puVar6,puStack_98,puStack_a0,puStack_a8,(char)puVar7);
LAB_105093bb4:
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puStack_a8);
        _objc_release(puStack_a0);
        _objc_release(puStack_98);
        _objc_release(puStack_90);
        _objc_release(puStack_88);
        _objc_release(puStack_80);
        _objc_release(puStack_78);
        _objc_release(puStack_70);
        param_1 = puVar3;
        goto LAB_105093f58;
      }
LAB_105093f50:
      param_1 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_105093f58:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1050940b4; end: 105094127;  */

void FUN_1050940b4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105093990();
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



/* Entry: 105094128; end: 10509471f;  */

void FUN_105094128(undefined *param_1,undefined1 *param_2)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b46b0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_105093990();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar17 = PTR_PTR_1126b46b0;
    _objc_retain(param_1);
    _objc_opt_self(puVar17);
    puVar17 = PTR_PTR_1126b46b0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c0f0700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf36ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf9c880();
      puVar5 = param_1;
      func_0x00010c0cb5a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c27dd80();
      puVar7 = param_1;
      func_0x00010c15df60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010c15e680();
      puVar10 = param_1;
      func_0x00010c0cb980();
      puVar11 = param_1;
      func_0x00010bfbeda0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010c0ca220();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1;
      func_0x00010c14bb00();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_1;
      func_0x00010c0cba00();
      puVar15 = param_1;
      func_0x00010c0c4380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074940();
      puVar16 = param_1;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13e020();
      func_0x00010c15db20();
      FUN_10509369c(puVar17,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,
                    puVar9,puVar10,puVar11,puVar12,puVar13,(char)puVar14);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar17 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar17 = param_1;
    func_0x00010c0f0700(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010bf36ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010bf9c880();
    *(undefined **)(puVar1 + 0x30) = puVar17;
    puVar17 = param_1;
    func_0x00010c0cb5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c27dd80();
    *(undefined **)(puVar1 + 0x40) = puVar17;
    puVar17 = param_1;
    func_0x00010c15df60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c15e680();
    *(undefined **)(puVar1 + 0x58) = puVar17;
    puVar17 = param_1;
    func_0x00010c0cb980();
    *(undefined **)(puVar1 + 0x60) = puVar17;
    puVar17 = param_1;
    func_0x00010bfbeda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c0ca220(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c14bb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c0cba00();
    puVar1[0x14] = (char)puVar17;
    puVar17 = param_1;
    func_0x00010c0c4380(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c074940();
    puVar1[0x15] = (char)puVar17;
    puVar17 = param_1;
    func_0x00010c0ca820(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar17);
    puVar17 = param_1;
    func_0x00010c13e020();
    *(undefined **)(puVar1 + 0x90) = puVar17;
    puVar17 = param_1;
    func_0x00010c15db20();
    *(int *)(puVar1 + 0x18) = (int)puVar17;
    _objc_retain(puVar1);
    puVar17 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105094720; end: 1050947c7;  */

void FUN_105094720(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b46a8;
    _objc_alloc(PTR_PTR_1126b46a8);
    func_0x00010c032aa0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050947c8; end: 105094857; -[SCProfileChatMediaDataModelChangeRequest .cxx_destruct] */

void FUN_1050947c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105094858; end: 105094863; -[SCProfileChatMediaDataModelChangeRequest table] */

char * FUN_105094858(void)

{
  return "profilechatmedia__datamodel_draft";
}



/* Entry: 105094864; end: 105094917; -[SCProfileChatMediaDataModelChangeRequest createTableWithSQLite:] */

void FUN_105094864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8ec19,0xb2,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dd8eccb,0x8f,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dd8ed5a,0xb7,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 105094918; end: 105094f07; -[SCProfileChatMediaDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105094918(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_105094720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105094f08(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf636c0();
    FUN_10507cae4();
    _objc_release(puVar11);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO profilechatmedia__datamodel_draft (p, ownerId, chatMediaId) VALUES (?1, ?2, ?3)"
                       );
    if (lVar7 == 0) goto LAB_105094e64;
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
    if ((int)lVar7 != 0x65) goto LAB_105094e64;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      func_0x0001001b9e08(param_3,
                          "INSERT INTO index_profilechatmedia__datamodel_draftexpirationTimestamp (rowid, expirationTimestamp) VALUES (?1, ?2)"
                         );
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_105094e64;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b46a8);
    func_0x00010c21c9a0(puVar11);
LAB_105094e3c:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,"DELETE FROM profilechatmedia__datamodel_draft WHERE rowid=?1");
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            func_0x0001001b9e08(param_3,
                                "DELETE FROM index_profilechatmedia__datamodel_draftexpirationTimestamp WHERE rowid=?1"
                               );
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_105094a44;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b46a8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105094e70;
          }
        }
      }
LAB_105094a44:
      puVar11 = (undefined *)0x0;
      goto LAB_105094e70;
    }
    FUN_105094720();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105094f08(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,
                        "UPDATE profilechatmedia__datamodel_draft SET p=?1, ownerId=?3, chatMediaId=?4 WHERE rowid=?2 LIMIT 1"
                       );
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
        _objc_opt_class(PTR_PTR_1126b46a8);
        puVar8 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar8;
        func_0x00010bf9c880();
        puVar5 = puVar6;
        func_0x00010bf9c880();
        if (puVar11 != puVar5) {
          func_0x0001001b9e08(param_3,
                              "UPDATE index_profilechatmedia__datamodel_draftexpirationTimestamp SET expirationTimestamp=?1 WHERE rowid=?2 LIMIT 1"
                             );
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)((long)piVar1 + uVar10);
          }
          _sqlite3_bind_int64(param_3,1,uVar9);
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar8);
            goto LAB_105094e5c;
          }
        }
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b46a8);
        func_0x00010c21c9a0(puVar11);
        goto LAB_105094e3c;
      }
    }
LAB_105094e5c:
    _objc_release(puVar6);
LAB_105094e64:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_105094e70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105094f08; end: 105095fa7;  */

undefined * FUN_105094f08(undefined *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined ***pppuVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined *puVar17;
  int *piVar18;
  undefined *puVar19;
  int *piVar20;
  int *piVar21;
  ushort uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  int *piVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined4 *puVar38;
  long lVar39;
  ulong uStack_1f0;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  int aiStack_194 [3];
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  code *pcStack_148;
  undefined ***pppuStack_138;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  piVar6 = param_2;
  func_0x00010bfbeda0();
  _objc_retainAutoreleasedReturnValue();
  if (piVar6 == (int *)0x0) {
    uStack_1f0 = 0;
  }
  else {
    piVar7 = param_2;
    func_0x00010bfbeda0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = param_1;
    FUN_105096360(param_1,piVar7);
    _objc_release(piVar7);
    uStack_1f0 = (ulong)puVar28 & 0xffffffff;
  }
  _objc_release(piVar6);
  ppuStack_110 = &PTR_FUN_110865398;
  pcStack_108 = FUN_105096360;
  pppuStack_f8 = &ppuStack_110;
  piVar6 = param_2;
  func_0x00010c0ca220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_188 = 0;
  aiStack_194[1] = 0;
  aiStack_194[2] = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(piVar6);
  piVar7 = piVar6;
  func_0x00010bf52a60();
  if (piVar7 == (int *)0x0) {
    puStack_1c8 = (undefined4 *)0x0;
    puStack_1c0 = (undefined4 *)0x0;
  }
  else {
    puStack_1c8 = (undefined4 *)0x0;
    puStack_1c0 = (undefined4 *)0x0;
    puVar38 = (undefined4 *)0x0;
    lVar24 = *plStack_180;
    do {
      piVar29 = (int *)0x0;
      do {
        if (*plStack_180 != lVar24) {
          _objc_enumerationMutation(piVar6);
        }
        lVar34 = *(long *)(lStack_188 + (long)piVar29 * 8);
        _objc_retain(lVar34);
        _objc_retain(lVar34);
        lStack_1b0 = lVar34;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_105095ca8;
        }
        pppuVar8 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&lStack_1b0);
        _objc_release(lStack_1b0);
        if (puStack_1c0 < puVar38) {
          *puStack_1c0 = (int)pppuVar8;
          puVar31 = puStack_1c8;
        }
        else {
          lVar39 = (long)puStack_1c0 - (long)puStack_1c8;
          uVar4 = (lVar39 >> 2) + 1;
          if (uVar4 >> 0x3e != 0) {
            FUN_105096a48();
            goto LAB_105095ca8;
          }
          uVar23 = (long)puVar38 - (long)puStack_1c8 >> 1;
          if (uVar23 <= uVar4) {
            uVar23 = uVar4;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar38 - (long)puStack_1c8)) {
            uVar23 = 0x3fffffffffffffff;
          }
          if (uVar23 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_105095ca8;
          }
          lVar9 = uVar23 << 2;
          __Znwm();
          puStack_1c0 = (undefined4 *)(lVar9 + lVar39);
          puVar38 = (undefined4 *)(lVar9 + uVar23 * 4);
          puVar31 = puStack_1c0 + -(lVar39 >> 2);
          *puStack_1c0 = (int)pppuVar8;
          _memcpy(puVar31,puStack_1c8,lVar39);
          if (puStack_1c8 != (undefined4 *)0x0) {
            __ZdlPv(puStack_1c8);
          }
        }
        puStack_1c8 = puVar31;
        puStack_1c0 = puStack_1c0 + 1;
        _objc_release(lVar34);
        piVar29 = (int *)((long)piVar29 + 1);
      } while (piVar7 != piVar29);
      piVar7 = piVar6;
      func_0x00010bf52a60();
    } while (piVar7 != (int *)0x0);
  }
  _objc_release(piVar6);
  _objc_release(piVar6);
  _objc_release(piVar6);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar24 = 0x20;
LAB_105095188:
    (**(code **)((long)*pppuStack_f8 + lVar24))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar24 = 0x28;
    goto LAB_105095188;
  }
  ppuStack_130 = &PTR_FUN_110865448;
  pcStack_128 = FUN_1050966d0;
  pppuStack_118 = &ppuStack_130;
  piVar6 = param_2;
  func_0x00010c14bb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_188 = 0;
  aiStack_194[1] = 0;
  aiStack_194[2] = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(piVar6);
  piVar7 = piVar6;
  func_0x00010bf52a60();
  if (piVar7 == (int *)0x0) {
    puStack_1d0 = (undefined4 *)0x0;
    puVar38 = (undefined4 *)0x0;
  }
  else {
    puStack_1d0 = (undefined4 *)0x0;
    puVar38 = (undefined4 *)0x0;
    puVar31 = (undefined4 *)0x0;
    lVar24 = *plStack_180;
    do {
      piVar29 = (int *)0x0;
      do {
        if (*plStack_180 != lVar24) {
          _objc_enumerationMutation(piVar6);
        }
        lVar34 = *(long *)(lStack_188 + (long)piVar29 * 8);
        _objc_retain(lVar34);
        _objc_retain(lVar34);
        lStack_1b0 = lVar34;
        if (pppuStack_118 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_105095ca8;
        }
        pppuVar8 = pppuStack_118;
        (*(code *)(*pppuStack_118)[6])(pppuStack_118,param_1,&lStack_1b0);
        _objc_release(lStack_1b0);
        if (puVar38 < puVar31) {
          *puVar38 = (int)pppuVar8;
          puVar30 = puStack_1d0;
        }
        else {
          lVar39 = (long)puVar38 - (long)puStack_1d0;
          uVar4 = (lVar39 >> 2) + 1;
          if (uVar4 >> 0x3e != 0) {
            FUN_105096b20();
            goto LAB_105095ca8;
          }
          uVar23 = (long)puVar31 - (long)puStack_1d0 >> 1;
          if (uVar23 <= uVar4) {
            uVar23 = uVar4;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar31 - (long)puStack_1d0)) {
            uVar23 = 0x3fffffffffffffff;
          }
          if (uVar23 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_105095ca8;
          }
          lVar9 = uVar23 << 2;
          __Znwm();
          puVar38 = (undefined4 *)(lVar9 + lVar39);
          puVar31 = (undefined4 *)(lVar9 + uVar23 * 4);
          puVar30 = puVar38 + -(lVar39 >> 2);
          *puVar38 = (int)pppuVar8;
          _memcpy(puVar30,puStack_1d0,lVar39);
          if (puStack_1d0 != (undefined4 *)0x0) {
            __ZdlPv(puStack_1d0);
          }
        }
        puStack_1d0 = puVar30;
        puVar38 = puVar38 + 1;
        _objc_release(lVar34);
        piVar29 = (int *)((long)piVar29 + 1);
      } while (piVar7 != piVar29);
      piVar7 = piVar6;
      func_0x00010bf52a60();
    } while (piVar7 != (int *)0x0);
  }
  _objc_release(piVar6);
  _objc_release(piVar6);
  _objc_release(piVar6);
  if (pppuStack_118 == &ppuStack_130) {
    lVar24 = 0x20;
LAB_105095384:
    (**(code **)((long)*pppuStack_118 + lVar24))();
  }
  else if (pppuStack_118 != (undefined ***)0x0) {
    lVar24 = 0x28;
    goto LAB_105095384;
  }
  ppuStack_150 = &PTR_FUN_1108654f8;
  pcStack_148 = FUN_1050967e0;
  pppuStack_138 = &ppuStack_150;
  piVar6 = param_2;
  func_0x00010c0c4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_188 = 0;
  aiStack_194[1] = 0;
  aiStack_194[2] = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(piVar6);
  piVar7 = piVar6;
  func_0x00010bf52a60();
  if (piVar7 == (int *)0x0) {
    puStack_1d8 = (undefined4 *)0x0;
    puVar31 = (undefined4 *)0x0;
  }
  else {
    puStack_1d8 = (undefined4 *)0x0;
    puVar31 = (undefined4 *)0x0;
    puVar30 = (undefined4 *)0x0;
    lVar24 = *plStack_180;
    do {
      piVar29 = (int *)0x0;
      do {
        if (*plStack_180 != lVar24) {
          _objc_enumerationMutation(piVar6);
        }
        lVar34 = *(long *)(lStack_188 + (long)piVar29 * 8);
        _objc_retain(lVar34);
        _objc_retain(lVar34);
        lStack_1b0 = lVar34;
        if (pppuStack_138 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_105095ca8;
        }
        pppuVar8 = pppuStack_138;
        (*(code *)(*pppuStack_138)[6])(pppuStack_138,param_1,&lStack_1b0);
        _objc_release(lStack_1b0);
        if (puVar31 < puVar30) {
          *puVar31 = (int)pppuVar8;
          puVar32 = puStack_1d8;
        }
        else {
          lVar39 = (long)puVar31 - (long)puStack_1d8;
          uVar4 = (lVar39 >> 2) + 1;
          if (uVar4 >> 0x3e != 0) {
            FUN_105096bf8();
LAB_105095ca8:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x105095cac);
            (*pcVar5)();
          }
          uVar23 = (long)puVar30 - (long)puStack_1d8 >> 1;
          if (uVar23 <= uVar4) {
            uVar23 = uVar4;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar30 - (long)puStack_1d8)) {
            uVar23 = 0x3fffffffffffffff;
          }
          if (uVar23 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_105095ca8;
          }
          lVar9 = uVar23 << 2;
          __Znwm();
          puVar31 = (undefined4 *)(lVar9 + lVar39);
          puVar30 = (undefined4 *)(lVar9 + uVar23 * 4);
          puVar32 = puVar31 + -(lVar39 >> 2);
          *puVar31 = (int)pppuVar8;
          _memcpy(puVar32,puStack_1d8,lVar39);
          if (puStack_1d8 != (undefined4 *)0x0) {
            __ZdlPv(puStack_1d8);
          }
        }
        puStack_1d8 = puVar32;
        puVar31 = puVar31 + 1;
        _objc_release(lVar34);
        piVar29 = (int *)((long)piVar29 + 1);
      } while (piVar7 != piVar29);
      piVar7 = piVar6;
      func_0x00010bf52a60();
    } while (piVar7 != (int *)0x0);
  }
  _objc_release(piVar6);
  _objc_release(piVar6);
  _objc_release(piVar6);
  if (pppuStack_138 == &ppuStack_150) {
    lVar24 = 0x20;
LAB_105095578:
    (**(code **)((long)*pppuStack_138 + lVar24))();
  }
  else if (pppuStack_138 != (undefined ***)0x0) {
    lVar24 = 0x28;
    goto LAB_105095578;
  }
  piVar6 = param_2;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  lStack_1b0 = 0;
  lStack_188 = 0;
  aiStack_194[1] = 0;
  aiStack_194[2] = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(piVar6);
  piVar7 = piVar6;
  func_0x00010bf52a60();
  if (piVar7 != (int *)0x0) {
    lVar24 = *plStack_180;
    do {
      piVar29 = (int *)0x0;
      do {
        if (*plStack_180 != lVar24) {
          _objc_enumerationMutation(piVar6);
        }
        puVar28 = param_1;
        FUN_105096918(param_1,*(undefined8 *)(lStack_188 + (long)piVar29 * 8));
        aiStack_194[0] = (int)puVar28;
        if (aiStack_194[0] != 0) {
          func_0x000100c47d40(&lStack_1b0,aiStack_194);
        }
        piVar29 = (int *)((long)piVar29 + 1);
      } while (piVar7 != piVar29);
      piVar7 = piVar6;
      func_0x00010bf52a60();
    } while (piVar7 != (int *)0x0);
  }
  _objc_release(piVar6);
  _objc_release(piVar6);
  _objc_release(piVar6);
  piVar6 = param_2;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = param_1;
  FUN_105096918();
  piVar7 = param_2;
  func_0x00010bf36ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = param_1;
  FUN_105096918();
  piVar29 = param_2;
  func_0x00010bf9c880();
  piVar10 = param_2;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = param_1;
  FUN_105096918();
  piVar11 = param_2;
  func_0x00010c27dd80();
  piVar12 = param_2;
  func_0x00010c15df60();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = param_1;
  FUN_105096918();
  piVar13 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = param_1;
  FUN_105096918();
  piVar14 = param_2;
  func_0x00010c15e680();
  piVar15 = param_2;
  func_0x00010c0cb980();
  uVar4 = (long)puStack_1c0 - (long)puStack_1c8;
  puVar30 = (undefined4 *)&UNK_10dd8f51c;
  if (uVar4 != 0) {
    puVar30 = puStack_1c8;
  }
  param_1[0x46] = 1;
  func_0x0001001cddd0(param_1,uVar4,4);
  func_0x0001001cddd0(param_1,uVar4,4);
  if (puStack_1c8 != puStack_1c0) {
    lVar24 = (long)uVar4 >> 2;
    do {
      iVar3 = puVar30[lVar24 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  param_1[0x46] = 0;
  puVar36 = param_1;
  func_0x0001001ce0bc(param_1,uVar4 >> 2);
  uVar4 = (long)puVar38 - (long)puStack_1d0;
  puVar30 = (undefined4 *)&UNK_10dd8f51c;
  if (uVar4 != 0) {
    puVar30 = puStack_1d0;
  }
  param_1[0x46] = 1;
  func_0x0001001cddd0(param_1,uVar4,4);
  func_0x0001001cddd0(param_1,uVar4,4);
  if (puStack_1d0 != puVar38) {
    lVar24 = (long)uVar4 >> 2;
    do {
      iVar3 = puVar30[lVar24 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  param_1[0x46] = 0;
  puVar37 = param_1;
  func_0x0001001ce0bc(param_1,uVar4 >> 2);
  piVar16 = param_2;
  func_0x00010c0cba00();
  uVar4 = (long)puVar31 - (long)puStack_1d8;
  puVar38 = (undefined4 *)&UNK_10dd8f51c;
  if (uVar4 != 0) {
    puVar38 = puStack_1d8;
  }
  param_1[0x46] = 1;
  func_0x0001001cddd0(param_1,uVar4,4);
  func_0x0001001cddd0(param_1,uVar4,4);
  if (puStack_1d8 != puVar31) {
    lVar24 = (long)uVar4 >> 2;
    do {
      iVar3 = puVar38[lVar24 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  param_1[0x46] = 0;
  puVar17 = param_1;
  func_0x0001001ce0bc(param_1,uVar4 >> 2);
  piVar18 = param_2;
  func_0x00010c074940();
  lVar24 = 0x1130c2400;
  if (lStack_1a8 - lStack_1b0 != 0) {
    lVar24 = lStack_1b0;
  }
  puVar19 = param_1;
  func_0x000100c47e34(param_1,lVar24,lStack_1a8 - lStack_1b0 >> 2);
  piVar20 = param_2;
  func_0x00010c13e020();
  piVar21 = param_2;
  func_0x00010c15db20();
  param_1[0x46] = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001001ce170(param_1,0x28,piVar20,0);
  func_0x0001001ce170(param_1,0x14,piVar15,0);
  func_0x0001001ce170(param_1,0x12,piVar14,0);
  func_0x0001001ce1c8(param_1,0xc,(ulong)piVar11 & 0xffffffff,0);
  func_0x0001001ce170(param_1,8,piVar29,0);
  func_0x000100c3b024(param_1,0x2a,piVar21,0);
  func_0x000100c47f00(param_1,0x26,(ulong)puVar19 & 0xffffffff);
  if ((int)puVar17 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x22,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar17) + 4,0);
  }
  if ((int)puVar37 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x1e,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar37) + 4,0);
  }
  if ((int)puVar36 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x1c,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar36) + 4,0);
  }
  if (uStack_1f0 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0x18,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_1f0) + 4,0);
  }
  func_0x0001001ce2e4(param_1,0x10,(int)puVar35);
  func_0x0001001ce2e4(param_1,0xe,(int)puVar33);
  func_0x0001001ce2e4(param_1,10,(int)puVar26);
  func_0x0001001ce2e4(param_1,6,(int)puVar25);
  func_0x0001001ce2e4(param_1,4,(int)puVar28);
  func_0x000100ab13ac(param_1,0x24,piVar18,0);
  func_0x0001001ce42c(param_1,0x20,(int)piVar16,0);
  func_0x0001001ce548(param_1,((int)uVar27 - (int)uVar2) + (int)uVar1);
  _objc_release(piVar13);
  _objc_release(piVar12);
  _objc_release(piVar10);
  _objc_release(piVar7);
  _objc_release(piVar6);
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  if (puStack_1d8 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  if (puStack_1d0 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  if (puStack_1c8 != (undefined4 *)0x0) {
    __ZdlPv(puStack_1c8);
  }
  piVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar27);
  _objc_release(uVar2);
  _objc_release(param_2);
  __Unwind_Resume();
  if (piVar6 == (int *)0x0) {
    puVar28 = (undefined *)0x0;
    goto LAB_1050960dc;
  }
  puVar28 = PTR_PTR_1126b46c8;
  _objc_alloc(PTR_PTR_1126b46c8);
  lVar24 = (long)*piVar6;
  uVar22 = *(ushort *)((long)piVar6 - lVar24);
  if ((uVar22 < 5) || (uVar22 < 7)) {
    puVar25 = (undefined *)0x0;
LAB_105096064:
    puVar26 = (undefined *)0x0;
LAB_105096068:
    puVar33 = (undefined *)0x0;
LAB_10509606c:
    puVar35 = (undefined *)0x0;
LAB_105096070:
    puVar36 = (undefined *)0x0;
LAB_105096078:
    puVar37 = (undefined *)0x0;
  }
  else {
    if (((ushort *)((long)piVar6 - lVar24))[3] == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = (long)*piVar6;
      uVar22 = *(ushort *)((long)piVar6 - lVar24);
    }
    lVar24 = -lVar24;
    if (uVar22 < 9) goto LAB_105096064;
    if (*(short *)((long)piVar6 + lVar24 + 8) == 0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = -(long)*piVar6;
      uVar22 = *(ushort *)((long)piVar6 - (long)*piVar6);
    }
    if (uVar22 < 0xb) goto LAB_105096068;
    if (*(short *)((long)piVar6 + lVar24 + 10) == 0) {
      puVar33 = (undefined *)0x0;
    }
    else {
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = -(long)*piVar6;
      uVar22 = *(ushort *)((long)piVar6 - (long)*piVar6);
    }
    if (uVar22 < 0xd) goto LAB_10509606c;
    if (*(short *)((long)piVar6 + lVar24 + 0xc) == 0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      puVar35 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = -(long)*piVar6;
      uVar22 = *(ushort *)((long)piVar6 - (long)*piVar6);
    }
    if (uVar22 < 0xf) goto LAB_105096070;
    if (*(short *)((long)piVar6 + lVar24 + 0xe) == 0) {
      puVar36 = (undefined *)0x0;
    }
    else {
      puVar36 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar24 = -(long)*piVar6;
      uVar22 = *(ushort *)((long)piVar6 - (long)*piVar6);
    }
    if ((uVar22 < 0x11) || (uVar22 < 0x13)) goto LAB_105096078;
    if (*(short *)((long)piVar6 + lVar24 + 0x12) == 0) {
      puVar37 = (undefined *)0x0;
    }
    else {
      puVar37 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
    }
  }
  func_0x00010c029120(puVar28);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar33);
  _objc_release(puVar26);
  _objc_release(puVar25);
LAB_1050960dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return puVar28;
}



/* Entry: 105095fa8; end: 10509635f;  */

void FUN_105095fa8(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  
  if (param_1 == (int *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_1050960dc;
  }
  puVar9 = PTR_PTR_1126b46c8;
  _objc_alloc(PTR_PTR_1126b46c8);
  uVar10 = 0;
  lVar4 = (long)*param_1;
  puVar5 = (ushort *)((long)param_1 - lVar4);
  uVar3 = *puVar5;
  if (uVar3 < 5) {
LAB_105096060:
    puVar7 = (undefined *)0x0;
LAB_105096064:
    puVar8 = (undefined *)0x0;
LAB_105096068:
    puVar11 = (undefined *)0x0;
LAB_10509606c:
    puVar12 = (undefined *)0x0;
LAB_105096070:
    puVar13 = (undefined *)0x0;
LAB_105096074:
    bVar2 = false;
LAB_105096078:
    puVar14 = (undefined *)0x0;
    uVar15 = 0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)param_1 + (ulong)puVar5[2]);
    }
    if (uVar3 < 7) goto LAB_105096060;
    if ((ulong)puVar5[3] == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar5[3]);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar3 < 9) goto LAB_105096064;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
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
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xb) goto LAB_105096068;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar6 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xd) goto LAB_10509606c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xf) goto LAB_105096070;
    if (*(short *)((long)param_1 + lVar4 + 0xe) == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0x11) goto LAB_105096074;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x10);
    if (uVar6 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar6) != '\0';
    }
    if (uVar3 < 0x13) goto LAB_105096078;
    if (*(short *)((long)param_1 + lVar4 + 0x12) == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bffa160();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    uVar15 = 0;
    if ((0x14 < uVar3) &&
       (uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x14), uVar15 = 0, uVar6 != 0)) {
      uVar15 = *(undefined4 *)((long)param_1 + uVar6);
    }
  }
  func_0x00010c029120(uVar15,puVar9,param_2,uVar10,puVar7,puVar8,puVar11,puVar12,puVar13,bVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_1050960dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105096360; end: 1050966cf;  */

ulong FUN_105096360(undefined8 param_1,ulong param_2,ulong param_3)

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
  undefined4 uStack_94;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0c4660(param_3);
  uVar5 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_105096918(param_2,uVar5);
  uVar7 = param_3;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  FUN_105096918(param_2,uVar7);
  uVar9 = param_3;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  FUN_105096918(param_2,uVar9);
  uVar11 = param_3;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  FUN_105096918(param_2,uVar11);
  uVar13 = param_3;
  func_0x00010c0ce220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar13 == 0) {
    uStack_94 = 0;
  }
  else {
    uVar14 = uVar13;
    _objc_retainAutorelease(uVar13);
    func_0x00010bf25f00();
    uVar15 = uVar13;
    func_0x00010c08fa60(uVar13);
    uVar18 = param_2;
    func_0x0001001d1030(param_2,uVar14,uVar15);
    uStack_94 = (undefined4)uVar18;
  }
  _objc_release(uVar13);
  uVar14 = param_3;
  func_0x00010c070020();
  uVar15 = param_3;
  func_0x00010c094fa0();
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
    uVar18 = param_2;
    func_0x0001001d1030(param_2,uVar16,uVar17);
  }
  _objc_release(uVar15);
  func_0x00010c2707e0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce1c8(param_2,4,uVar4 & 0xffffffff,0);
  func_0x0001001ce290(param_1,0,param_2,0x14);
  func_0x0001001ce220(param_2,0x12,uVar18 & 0xffffffff);
  func_0x0001001ce220(param_2,0xe,uStack_94);
  func_0x0001001ce2e4(param_2,0xc,uVar12 & 0xffffffff);
  func_0x0001001ce2e4(param_2,10,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_2,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar6 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x10,uVar14 & 0xffffffff,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1050966d0; end: 1050967df;  */

ulong FUN_1050966d0(ulong param_1,undefined8 param_2)

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
  func_0x00010c0f49c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105096918(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c14b7c0(param_2);
  uVar7 = param_2;
  func_0x00010c298be0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,8,uVar7,0);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_1,6,uVar6,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050967e0; end: 105096917;  */

ulong FUN_1050967e0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c24d960(param_2);
  uVar5 = param_2;
  func_0x00010bf940a0(param_2);
  uVar6 = param_2;
  func_0x00010c27dd80(param_2);
  uVar7 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_105096918(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,10,uVar8 & 0xffffffff);
  func_0x0001001ce354(param_1,6,uVar5,0);
  func_0x0001001ce354(param_1,4,uVar4,0);
  func_0x0001001ce42c(param_1,8,uVar6,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105096918; end: 105096a47;  */

undefined8 FUN_105096918(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1050969f8;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1050969f8;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1050969b8;
    param_1 = 0;
  }
  else {
LAB_1050969b8:
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
LAB_1050969f8:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105096a48; end: 105096a5b;  */

void FUN_105096a48(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 105096a5c; end: 105096a63;  */

void FUN_105096a5c(void)

{
  return;
}



/* Entry: 105096a64; end: 105096a97;  */

void FUN_105096a64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110865398;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105096a98; end: 105096ad7;  */

void FUN_105096a98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110865398;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105096ad8; end: 105096b13;  */

long FUN_105096ad8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110865408);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105096b14; end: 105096b1f;  */

undefined ** FUN_105096b14(void)

{
  return &PTR_DAT_110865408;
}



/* Entry: 105096b20; end: 105096b33;  */

void FUN_105096b20(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 105096b34; end: 105096b3b;  */

void FUN_105096b34(void)

{
  return;
}



/* Entry: 105096b3c; end: 105096b6f;  */

void FUN_105096b3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110865448;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105096b70; end: 105096baf;  */

void FUN_105096b70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110865448;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105096bb0; end: 105096beb;  */

long FUN_105096bb0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108654b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105096bec; end: 105096bf7;  */

undefined ** FUN_105096bec(void)

{
  return &PTR_DAT_1108654b8;
}



/* Entry: 105096bf8; end: 105096c0b;  */

void FUN_105096bf8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 105096c0c; end: 105096c13;  */

void FUN_105096c0c(void)

{
  return;
}



/* Entry: 105096c14; end: 105096c47;  */

void FUN_105096c14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1108654f8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 105096c48; end: 105096c87;  */

void FUN_105096c48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1108654f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 105096c88; end: 105096cc3;  */

long FUN_105096c88(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110865568);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105096cc4; end: 105096ccf;  */

undefined ** FUN_105096cc4(void)

{
  return &PTR_DAT_110865568;
}



/* Entry: 105096cd0; end: 105096ce3;  */

undefined * FUN_105096cd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010c07d080();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010c0757c0(puVar1);
  }
  else {
    puVar2 = (undefined *)0x1;
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 105096ce4; end: 105096d2f;  */

ulong FUN_105096ce4(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c07d080();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0757c0(param_1);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105096d30; end: 105096e07; -[SCArroyoChatProfileFetcher initWithNativeSessionManager:graphene:] */

undefined1 *
FUN_105096d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5e98;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105096e08; end: 105096e4f; -[SCArroyoChatProfileFetcher nativeConversationManager] */

void FUN_105096e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105096e50; end: 105096fb7; -[SCArroyoChatProfileFetcher savedMediaChatMessagesInConversation:numberOfMessages:paginationCursor:completionQueue:completionHandler:] */

void FUN_105096e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105096fb8; end: 105096ff7;  */

void FUN_105096fb8(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105096ff8; end: 10509715f; -[SCArroyoChatProfileFetcher savedAttachmentsChatMessagesInConversation:numberOfMessages:paginationCursor:completionQueue:completionHandler:] */

void FUN_105096ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105097160; end: 10509719f;  */

void FUN_105097160(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050971a0; end: 10509779b; -[SCArroyoChatProfileFetcher _waitForSavedChatContentInConversation:savedContentType:numOfMessagesToFetch:paginationCursor:completionQueue:completionHandler:] */

void FUN_1050971a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,ulong param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_3 != 0) && (param_8 != 0)) {
    if (param_5 == (undefined *)0x0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10509779c;
      puStack_88 = &UNK_110849530;
      _objc_retain(param_8);
      lStack_80 = param_8;
      func_0x00010007380c(param_7,&puStack_a0);
      _objc_release(lStack_80);
    }
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    uStack_b8 = 0x1050977b8;
    uStack_b0 = 0x1050977c8;
    _objc_retain(param_6);
    _objc_opt_class(puVar4);
    uVar5 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar4);
    uStack_a8 = param_6;
    if ((uVar5 & 1) == 0) {
      uStack_a8 = 0;
    }
    _objc_retain(uStack_a8);
    _objc_release(param_6);
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uVar12 = 0x2020000000;
    uStack_e0 = 0x2020000000;
    uStack_d8 = 1;
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    uStack_108 = 0x1050977b8;
    uStack_100 = 0x1050977c8;
    uStack_f8 = 0;
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x2020000000;
    uStack_128 = 0;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x2020000000;
    uStack_168 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0x2020000000;
    uStack_188 = 0;
    puStack_198 = &uStack_1a0;
    _CACurrentMediaTime();
    uVar13 = uVar12;
    while( true ) {
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if (((param_5 <= puVar4) || (*(char *)(puStack_e8 + 3) != '\x01')) || (puStack_118[5] != 0))
      break;
      uVar6 = 0;
      _dispatch_semaphore_create();
      puStack_208 = puVar1;
      uStack_200 = 0xc2000000;
      pcStack_1f8 = FUN_1050977d0;
      puStack_1f0 = &UNK_1108655c8;
      puStack_1d8 = &uStack_f0;
      puStack_1c8 = &uStack_180;
      puStack_1c0 = &uStack_140;
      puStack_1b8 = &uStack_160;
      puStack_1b0 = &uStack_d0;
      puStack_1d0 = &uStack_1a0;
      uStack_1a8 = param_4;
      _objc_retain(puVar3);
      puStack_1e8 = puVar3;
      _objc_retain(uVar6);
      ppuVar7 = &puStack_208;
      uStack_1e0 = uVar6;
      _objc_retainBlock(ppuVar7);
      puStack_240 = puVar1;
      uStack_238 = 0xc2000000;
      pcStack_230 = FUN_105097c60;
      puStack_228 = &UNK_1108655f8;
      _objc_retain(param_3);
      puStack_210 = &uStack_120;
      lStack_220 = param_3;
      _objc_retain(uVar6);
      ppuVar8 = &puStack_240;
      uStack_218 = uVar6;
      _objc_retainBlock(ppuVar8);
      puStack_268 = puVar1;
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_105097d48;
      puStack_250 = &UNK_110847658;
      ppuVar9 = &puStack_268;
      puStack_248 = &uStack_1a0;
      _objc_retainBlock(ppuVar9);
      puVar4 = PTR_PTR_1126b46e0;
      _objc_alloc(PTR_PTR_1126b46e0);
      func_0x00010c04f560();
      uVar10 = param_1;
      func_0x00010c0d58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6000();
      _objc_release(uVar10);
      _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
      _objc_release(puVar4);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(uStack_218);
      _objc_release(lStack_220);
      _objc_release(ppuVar7);
      _objc_release(uStack_1e0);
      _objc_release(puStack_1e8);
      _objc_release(uVar6);
    }
    _CACurrentMediaTime();
    lVar11 = puStack_118[5];
    func_0x00010be54400(uVar12,puStack_158[3],uVar13,param_1);
    if (lVar11 == 0) {
      if (*(char *)(puStack_e8 + 3) == '\x01') {
        lVar11 = puStack_c8[5];
      }
      else {
        lVar11 = 0;
      }
      _objc_retain(lVar11);
      puStack_2a0 = puVar1;
      uStack_298 = 0xc2000000;
      uStack_290 = 0x105097d60;
      puStack_288 = &UNK_11084a9e8;
      _objc_retain(param_8);
      lStack_270 = param_8;
      _objc_retain(puVar3);
      puStack_280 = puVar3;
      lStack_278 = lVar11;
      _objc_retain(lVar11);
      func_0x00010007380c(param_7,&puStack_2a0);
      _objc_release(lStack_278);
      _objc_release(puStack_280);
      _objc_release(lStack_270);
    }
    else {
      puStack_2d0 = puVar1;
      uStack_2c8 = 0xc2000000;
      uStack_2c0 = 0x105097d78;
      puStack_2b8 = &UNK_1108647e8;
      _objc_retain(param_8);
      puStack_2a8 = &uStack_120;
      lStack_2b0 = param_8;
      func_0x00010007380c(param_7,&puStack_2d0);
      lVar11 = lStack_2b0;
    }
    _objc_release(lVar11);
    __Block_object_dispose(&uStack_1a0,8);
    __Block_object_dispose(&uStack_180,8);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    __Block_object_dispose(&uStack_f0,8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10509779c; end: 1050977cf;  */

void FUN_10509779c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001050977b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,0,0);
  return;
}



/* Entry: 1050977d0; end: 105097b63;  */

void FUN_1050977d0(long param_1,long param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == 0) {
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18);
    lVar1 = param_3;
    func_0x00010bf529e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = lVar1 + lVar9;
    _CACurrentMediaTime();
    *(ulong *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18);
    lVar1 = param_3;
    func_0x00010bf529e0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = lVar1 + lVar9;
  }
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf6e760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb5a0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar2;
    _objc_release(uVar7);
    _objc_release(lVar9);
    _objc_release(lVar1);
  }
  lVar8 = param_3;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      _objc_release(lVar8);
      _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
      _objc_release(param_3);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(*(undefined8 *)(lVar5 + 0x20));
      _objc_retain(*(undefined8 *)(lVar5 + 0x28));
      __Block_object_assign(param_2 + 0x30,*(undefined8 *)(lVar5 + 0x30),8);
      __Block_object_assign(param_2 + 0x38,*(undefined8 *)(lVar5 + 0x38),8);
      __Block_object_assign(param_2 + 0x40,*(undefined8 *)(lVar5 + 0x40),8);
      __Block_object_assign(param_2 + 0x48,*(undefined8 *)(lVar5 + 0x48),8);
      __Block_object_assign(param_2 + 0x50,*(undefined8 *)(lVar5 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_object_assign_11034bce0)(param_2 + 0x58,*(undefined8 *)(lVar5 + 0x58),8)
      ;
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar8);
      }
      uVar11 = *(ulong *)(lVar10 * 8);
      lVar12 = *(long *)(param_1 + 0x60);
      _objc_retain(uVar11);
      uVar13 = uVar11;
      FUN_105096ce4();
      if ((uVar13 & 1) == 0) {
LAB_105097a78:
        _objc_release(uVar11);
      }
      else if (lVar12 == 0) {
        _objc_retain(uVar11);
        FUN_105096ce4(uVar11);
        uVar13 = uVar11;
        FUN_105096ce4();
        if ((int)uVar13 == 0) {
LAB_105097a70:
          _objc_release(uVar11);
          goto LAB_105097a78;
        }
        uVar13 = uVar11;
        func_0x00010c07ea80();
        if ((int)uVar13 == 0) {
          uVar13 = uVar11;
          func_0x00010c07d100();
          if ((int)uVar13 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar11;
            func_0x00010c07d1e0();
          }
          uVar4 = uVar11;
          func_0x00010c07b3e0();
          _objc_release(uVar11);
          _objc_release(uVar11);
          if (((uVar4 & 1) != 0) || ((uVar13 & 1) != 0)) goto LAB_105097a88;
        }
        else {
          uVar13 = uVar11;
          func_0x00010c07d080();
          if ((int)uVar13 == 0) goto LAB_105097a70;
          uVar13 = uVar11;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar13;
          func_0x00010c0fecc0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c067fc0();
          _objc_release(uVar4);
          _objc_release(uVar13);
          _objc_release(uVar11);
          _objc_release(uVar11);
          if (uVar3 != 3) goto LAB_105097a88;
        }
      }
      else {
        if (lVar12 == 1) {
          _objc_retain(uVar11);
          FUN_105096ce4(uVar11);
          uVar13 = uVar11;
          FUN_105096ce4();
          if ((uVar13 & 1) == 0) goto LAB_105097a70;
          uVar13 = uVar11;
          func_0x00010c06c820();
          _objc_release(uVar11);
          _objc_release(uVar11);
          if ((int)uVar13 == 0) goto LAB_105097a94;
        }
        else {
          _objc_release();
        }
LAB_105097a88:
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      }
LAB_105097a94:
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105097b64; end: 105097c5f;  */

void FUN_105097b64(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 105097c60; end: 105097d47;  */

void FUN_105097c60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dc4598;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  lVar4 = *(long *)(param_1 + 0x28);
  _dispatch_semaphore_signal();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 8);
  *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
  return;
}



/* Entry: 105097d48; end: 105097d97;  */

void FUN_105097d48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 105097d98; end: 10509806f; -[SCArroyoChatProfileFetcher _logGrapheneMetricsForContentType:paginationCursor:numberOfLocalMessagesFetched:numberOfServerMessagesFetched:numberOfServerRequests:startTimestamp:localFetchTimestamp:endTimestamp:hasMoreMessages:success:] */

void FUN_105097d98(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long in_x6;
  int in_w7;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc4538;
  if (param_6 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9458;
  if (param_6 != 0) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105098840();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105098c78(param_3 - param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (in_w7 == 0) {
    FUN_105099350();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105099134();
  }
  else {
    FUN_105098f18();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105098cfc();
  }
  _objc_release(uVar3);
  if (0.0 < param_2) {
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10509a07c(param_2 - param_1);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105099c44();
  _objc_release(uVar3);
  if (in_x6 != 0) {
    if (param_2 <= 0.0) {
      param_2 = param_1;
    }
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105099bc0(param_3 - param_2);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10509956c();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105099788();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105098070; end: 1050980ab; -[SCArroyoChatProfileFetcher .cxx_destruct] */

void FUN_105098070(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050980ac; end: 105098153; -[SCArroyoProfileChatMessagesUpdateTracker initWithConversationDataUpdateAnnouncer:] */

undefined1 * FUN_1050980ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5ea0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46e8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105098154; end: 10509815b; -[SCArroyoProfileChatMessagesUpdateTracker addListener:] */

void FUN_105098154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10509815c; end: 105098163; -[SCArroyoProfileChatMessagesUpdateTracker removeListener:] */

void FUN_10509815c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105098164; end: 10509822f; -[SCArroyoProfileChatMessagesUpdateTracker didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_105098164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010c272380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_6;
    func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_110865648);
    func_0x00010bf7e140(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105098230; end: 10509828b;  */

void FUN_105098230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cb5a0(param_2);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


