/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ca9870; end: 106ca98f3; -[SCStoredPostSnapActionChangeRequest .cxx_destruct] */

void FUN_106ca9870(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106ca98f4; end: 106ca98ff; -[SCStoredPostSnapActionChangeRequest table] */

undefined * FUN_106ca98f4(void)

{
  return &UNK_10f3cca6d;
}



/* Entry: 106ca9900; end: 106ca99b3; -[SCStoredPostSnapActionChangeRequest createTableWithSQLite:] */

void FUN_106ca9900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded2b0,0xaf,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded35f,0x7b,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dded3da,0x97,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106ca99b4; end: 106ca9fa3; -[SCStoredPostSnapActionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106ca99b4(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  double dVar12;
  undefined8 uVar13;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar5 = param_2;
  if (iVar3 == 1) {
    FUN_106ca97dc(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    FUN_106ca9fa4(param_5,puVar5);
    func_0x0001001ce6fc(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar9);
    lVar6 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f3ccbc9);
    if (lVar6 == 0) goto LAB_106ca9efc;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106ca9efc;
    uVar10 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar7 & 1) != 0) {
      func_0x0001001b9e08(param_4,&UNK_10f3cca94);
      _sqlite3_bind_int64();
      uVar13 = 0;
      if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar8 != 0)) {
        uVar13 = *(undefined8 *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_double(uVar13,param_4,2);
      _sqlite3_step();
      if ((int)param_4 != 0x65) goto LAB_106ca9efc;
    }
    *(undefined8 *)(param_2 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d1f90);
    func_0x00010c21c9a0(puVar9);
LAB_106ca9ed4:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar6 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f3ccb52);
        if (lVar6 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar6 == 0x65) {
            func_0x0001001b9e08(param_4,&UNK_10f3ccb82);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_106ca9ae4;
            }
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d1f90);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106ca9f08;
          }
        }
      }
LAB_106ca9ae4:
      puVar9 = (undefined *)0x0;
      goto LAB_106ca9f08;
    }
    FUN_106ca97dc(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    FUN_106ca9fa4(param_5,puVar5);
    func_0x0001001ce6fc(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar5);
    lVar6 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f3ccc1d);
    if (lVar6 != 0) {
      _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(lVar6,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(lVar6,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar6 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1f90);
        puVar7 = puVar9;
        func_0x00010c0dfea0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        func_0x00010c29eae0(puVar7);
        dVar12 = param_1;
        func_0x00010c29eae0(puVar5);
        if (param_1 != dVar12) {
          func_0x0001001b9e08(param_4,&UNK_10f3ccc7a);
          uVar13 = 0;
          if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
             (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar8 != 0)) {
            uVar13 = *(undefined8 *)((long)piVar1 + uVar8);
          }
          _sqlite3_bind_double(uVar13,param_4,1);
          _sqlite3_bind_int64(param_4,2,uVar10);
          _sqlite3_step();
          if ((int)param_4 != 0x65) {
            _objc_release(puVar7);
            goto LAB_106ca9ef4;
          }
        }
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1f90);
        func_0x00010c21c9a0(puVar9);
        goto LAB_106ca9ed4;
      }
    }
LAB_106ca9ef4:
    _objc_release(puVar5);
LAB_106ca9efc:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106ca9f08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106ca9fa4; end: 106caa3ab;  */

ulong FUN_106ca9fa4(undefined8 param_1,ulong param_2,ulong param_3)

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
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_106caa3ac(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_106caa3ac(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010c15e960();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_106caa3ac(param_2,uVar8);
  uVar10 = param_3;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  FUN_106caa3ac(param_2,uVar10);
  uVar12 = param_3;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  FUN_106caa3ac(param_2,uVar12);
  uVar14 = param_3;
  func_0x00010c15df60();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  FUN_106caa3ac(param_2,uVar14);
  uVar16 = param_3;
  func_0x00010c15db00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_2;
  FUN_106caa3ac(param_2,uVar16);
  uVar18 = param_3;
  func_0x00010c15dba0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_2;
  FUN_106caa3ac(param_2,uVar18);
  uVar20 = param_3;
  func_0x00010c073e00();
  func_0x00010c29eae0(param_3);
  uVar21 = param_3;
  func_0x00010c074920();
  uVar22 = param_3;
  func_0x00010c07fbc0(param_3);
  uVar23 = param_3;
  func_0x00010c096520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_2;
  FUN_106caa3ac(param_2,uVar23);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,0x1a);
  func_0x0001001ce2e4(param_2,0x20,uVar24 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0x14,uVar19 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0x12,uVar17 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0x10,uVar15 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0xc,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_2,10,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x1e,uVar22,0);
  func_0x000100ab13ac(param_2,0x1c,uVar21 & 0xffffffff,0);
  func_0x000100ab13ac(param_2,0x18,uVar20 & 0xffffffff,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar23);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106caa3ac; end: 106caa4db;  */

undefined8 FUN_106caa3ac(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106caa48c;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106caa48c;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106caa44c;
    param_1 = 0;
  }
  else {
LAB_106caa44c:
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
LAB_106caa48c:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106caa4dc; end: 106caa53f;  */

undefined ** FUN_106caa4dc(void)

{
  int iVar1;
  
  if ((bRam000000011381e7b0 & 1) == 0) {
    iVar1 = 0x1381e7b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1131840c0,0x100000000);
      ___cxa_guard_release(0x11381e7b0);
    }
  }
  return &PTR_PTR_1131840c0;
}



/* Entry: 106caa540; end: 106caa5c7;  */

void FUN_106caa540(uint *param_1,undefined1 *param_2)

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



/* Entry: 106caa5c8; end: 106caa653;  */

void FUN_106caa5c8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106caa654; end: 106caa70b;  */

undefined8 FUN_106caa654(void)

{
  int iVar1;
  
  if ((bRam000000011381e828 & 1) == 0) {
    iVar1 = 0x1381e828;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e7c0 = 0xe;
      puRam000000011381e7c8 = &UNK_10f3cccdd;
      uRam000000011381e7d0 = 0x100;
      pcRam000000011381e7d8 = FUN_106caa70c;
      pcRam000000011381e7e0 = FUN_106caa740;
      ppuRam000000011381e7b8 = &PTR_DAT_11086d7d0;
      uRam000000011381e7f8 = 0;
      uRam000000011381e7f0 = 0;
      uRam000000011381e808 = 0;
      uRam000000011381e800 = 0;
      uRam000000011381e818 = 0;
      uRam000000011381e810 = 0;
      uRam000000011381e820 = 0;
      ___cxa_atexit(&DAT_105187b98,0x11381e7b8,0x100000000);
      ___cxa_guard_release(0x11381e828);
    }
  }
  return 0x11381e7b8;
}



/* Entry: 106caa70c; end: 106caa73f;  */

undefined8 FUN_106caa70c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 106caa740; end: 106caa79b;  */

undefined8 FUN_106caa740(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c29eae0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106caa79c; end: 106caa7a7; +[SCStoredViewedSnapsForPostSnapActions table] */

undefined * FUN_106caa79c(void)

{
  return &UNK_10f3cccef;
}



/* Entry: 106caa7a8; end: 106caa96b; +[SCStoredViewedSnapsForPostSnapActions immutableObjectParse:bufferSize:] */

void FUN_106caa7a8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126d1fa0;
  _objc_alloc(PTR_PTR_1126d1fa0);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar9 = (undefined *)0x0;
LAB_106caa888:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar6 < 7) goto LAB_106caa888;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 6);
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (8 < uVar6) {
      uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 8);
      if (uVar8 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)((long)piVar1 + uVar8);
      }
      if (uVar6 < 0xf) {
        bVar3 = false;
      }
      else {
        uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0xe);
        if (uVar8 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = *(char *)((long)piVar1 + uVar8) != '\0';
        }
        if ((0x10 < uVar6) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x10), uVar8 != 0))
        {
          bVar4 = *(char *)((long)piVar1 + uVar8) != '\0';
          goto LAB_106caa898;
        }
      }
      bVar4 = false;
      goto LAB_106caa898;
    }
  }
  bVar3 = false;
  bVar4 = false;
  uVar11 = 0;
LAB_106caa898:
  func_0x00010c0054a0(uVar11,puVar5,param_2,puVar9,puVar10,bVar3,bVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106caa96c; end: 106caa97f; +[SCStoredViewedSnapsForPostSnapActions objectClassFunctionPointer] */

undefined1  [16] FUN_106caa96c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_106caa9a8;
  auVar1._0_8_ = FUN_106caa980;
  return auVar1;
}



/* Entry: 106caa980; end: 106caa9a7;  */

int FUN_106caa980(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf3cca82;
  _strcmp(&UNK_10f3cca82,param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 106caa9a8; end: 106caaa43;  */

bool FUN_106caa9a8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f3ccd13);
  _sqlite3_bind_int64();
  uVar3 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  _sqlite3_bind_double(uVar3,param_2,2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 106caaa44; end: 106caab37;  */

undefined1 *
FUN_106caaa44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_1126f61c0;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined1 *)((long)plVar1 + 0x14) = param_6;
      *(undefined1 *)((long)plVar1 + 0x15) = param_7;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 106caab38; end: 106caaf63;  */

void FUN_106caab38(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar7 = param_2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar1;
          func_0x00010bf636c0();
          _objc_release(puVar1);
          func_0x0001001b9e08(puVar7,&UNK_10f3ccd85);
          if (puVar7 != (undefined *)0x0) {
            puVar1 = param_2;
            func_0x00010bf50280(param_2);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
            _objc_release(puVar1);
            _objc_release(puVar1);
            puVar1 = param_2;
            func_0x00010c241220(param_2);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
            _sqlite3_bind_text(puVar7,2,puVar2,0xffffffff,0xffffffffffffffff);
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
              _objc_opt_class(PTR_PTR_1126d1fa0);
              _sqlite3_column_blob(puVar7,1);
              _sqlite3_column_bytes(puVar7,1);
              puVar3 = puVar2;
              func_0x00010c0dfea0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_2);
              _objc_release(puVar2);
              _sqlite3_reset(puVar7);
              if (puVar3 == (undefined *)0x0) goto LAB_106caaea8;
              puVar7 = PTR_PTR_1126d1fb0;
              _objc_alloc(PTR_PTR_1126d1fb0);
              puVar2 = puVar3;
              func_0x00010bf50280(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c241220(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c29eae0(puVar3);
              puVar5 = puVar3;
              func_0x00010bfda3c0(puVar3);
              puVar6 = puVar3;
              func_0x00010bfd90a0(puVar3);
              FUN_106caaa44(param_1,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
              param_2 = puVar3;
              goto LAB_106caac50;
            }
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d1fa0);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d1fb0;
        _objc_alloc(PTR_PTR_1126d1fb0);
        puVar2 = puVar3;
        func_0x00010bf50280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c241220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29eae0(puVar3);
        puVar5 = puVar3;
        func_0x00010bfda3c0(puVar3);
        puVar6 = puVar3;
        func_0x00010bfd90a0(puVar3);
        FUN_106caaa44(param_1,puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_2 = puVar3;
LAB_106caac50:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106caaeb0;
      }
LAB_106caaea8:
      param_2 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106caaeb0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106caaf64; end: 106caafd7;  */

void FUN_106caaf64(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106caab38();
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



/* Entry: 106caafd8; end: 106cab243;  */

void FUN_106caafd8(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1fb0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_106caab38();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar6 = PTR_PTR_1126d1fb0;
    _objc_retain(param_2);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126d1fb0;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bf50280(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29eae0(param_2);
      puVar4 = param_2;
      func_0x00010bfda3c0(param_2);
      puVar5 = param_2;
      func_0x00010bfd90a0(param_2);
      FUN_106caaa44(param_1,puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar3);
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
    func_0x00010bf50280(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    func_0x00010c29eae0(param_2);
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    puVar6 = param_2;
    func_0x00010bfda3c0();
    puVar1[0x14] = (char)puVar6;
    puVar6 = param_2;
    func_0x00010bfd90a0();
    puVar1[0x15] = (char)puVar6;
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



/* Entry: 106cab244; end: 106cab2af;  */

void FUN_106cab244(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d1fa0;
    _objc_alloc(PTR_PTR_1126d1fa0);
    func_0x00010c0054a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cab2b0; end: 106cab2df; -[SCStoredViewedSnapsForPostSnapActionsChangeRequest .cxx_destruct] */

void FUN_106cab2b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106cab2e0; end: 106cab2eb; -[SCStoredViewedSnapsForPostSnapActionsChangeRequest table] */

undefined * FUN_106cab2e0(void)

{
  return &UNK_10f3cccef;
}



/* Entry: 106cab2ec; end: 106cab39f; -[SCStoredViewedSnapsForPostSnapActionsChangeRequest createTableWithSQLite:] */

void FUN_106cab2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded471,0xb8,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded529,0x8a,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dded5b3,0xb5,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106cab3a0; end: 106cab98f; -[SCStoredViewedSnapsForPostSnapActionsChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106cab3a0(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  double dVar12;
  undefined8 uVar13;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar5 = param_2;
  if (iVar3 == 1) {
    FUN_106cab244(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    FUN_106cab990(param_5,puVar5);
    func_0x0001001ce6fc(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar9);
    lVar6 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f3cce81);
    if (lVar6 == 0) goto LAB_106cab8e8;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                       (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                       *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106cab8e8;
    uVar10 = *(undefined8 *)(param_4 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar7 & 1) != 0) {
      func_0x0001001b9e08(param_4,&UNK_10f3ccd13);
      _sqlite3_bind_int64();
      uVar13 = 0;
      if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 != 0)) {
        uVar13 = *(undefined8 *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_double(uVar13,param_4,2);
      _sqlite3_step();
      if ((int)param_4 != 0x65) goto LAB_106cab8e8;
    }
    *(undefined8 *)(param_2 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d1fa0);
    func_0x00010c21c9a0(puVar9);
LAB_106cab8c0:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar6 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f3ccdec);
        if (lVar6 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar6 == 0x65) {
            func_0x0001001b9e08(param_4,&UNK_10f3cce2b);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_106cab4d0;
            }
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d1fa0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106cab8f4;
          }
        }
      }
LAB_106cab4d0:
      puVar9 = (undefined *)0x0;
      goto LAB_106cab8f4;
    }
    FUN_106cab244(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    FUN_106cab990(param_5,puVar5);
    func_0x0001001ce6fc(param_5,lVar6,0,0);
    puVar11 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar5);
    lVar6 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f3ccee1);
    if (lVar6 != 0) {
      _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(lVar6,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(lVar6,3,puVar2 + 1,*puVar2,0);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(lVar6,4,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar6 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1fa0);
        puVar7 = puVar9;
        func_0x00010c0dfea0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        func_0x00010c29eae0(puVar7);
        dVar12 = param_1;
        func_0x00010c29eae0(puVar5);
        if (param_1 != dVar12) {
          func_0x0001001b9e08(param_4,&UNK_10f3ccf4a);
          uVar13 = 0;
          if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
             (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 != 0)) {
            uVar13 = *(undefined8 *)((long)piVar1 + uVar8);
          }
          _sqlite3_bind_double(uVar13,param_4,1);
          _sqlite3_bind_int64(param_4,2,uVar10);
          _sqlite3_step();
          if ((int)param_4 != 0x65) {
            _objc_release(puVar7);
            goto LAB_106cab8e0;
          }
        }
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1fa0);
        func_0x00010c21c9a0(puVar9);
        goto LAB_106cab8c0;
      }
    }
LAB_106cab8e0:
    _objc_release(puVar5);
LAB_106cab8e8:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106cab8f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106cab990; end: 106cabb2b;  */

ulong FUN_106cab990(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_106cabb2c(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_106cabb2c(param_2,uVar6);
  func_0x00010c29eae0(param_3);
  uVar8 = param_3;
  func_0x00010bfda3c0(param_3);
  uVar9 = param_3;
  func_0x00010bfd90a0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,8);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x000100ab13ac(param_2,0x10,uVar9,0);
  func_0x000100ab13ac(param_2,0xe,uVar8,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106cabb2c; end: 106cabc5b;  */

undefined8 FUN_106cabb2c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106cabc0c;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106cabc0c;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106cabbcc;
    param_1 = 0;
  }
  else {
LAB_106cabbcc:
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
LAB_106cabc0c:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106cabc5c; end: 106cabcc3; -[SCRdcCrashLogger reportFailedExpectationWithMessage:] */

void FUN_106cabc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3e98;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf60460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132d60(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cabcc4; end: 106cabccf; -[SCRdcCrashLogger .cxx_destruct] */

void FUN_106cabcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cabcd0; end: 106cabdeb; -[SCRdcImpl initWithDurableJob:repository:graphene:syncListHandler:snapchattersDataFetching:] */

undefined1 *
FUN_106cabcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f61d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cabdec; end: 106cac273; -[SCRdcImpl getDeviceProperties:property:] */

void FUN_106cabdec(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c13e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar14 = 0.0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_4);
      puVar10 = puVar3;
      func_0x00010bf529e0();
      if (puVar10 != (undefined *)0x0) {
        lVar4 = param_2 + 0x28;
        _objc_loadWeakRetained(lVar4);
        lVar8 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 0x11;
        param_3 = 0;
        _dispatch_get_global_queue(0x11);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(param_4);
        func_0x00010c244e80(lVar8);
        _objc_release(uVar9);
        _objc_release(lVar8);
        _objc_release(lVar4);
        _objc_release(param_4);
        _objc_release(puVar3);
      }
      puVar10 = PTR_PTR_1126d1fc0;
      func_0x00010bfc4ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar5);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf529e0();
      func_0x00010bf529e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar10);
      func_0x00010bfec2a0(*(undefined8 *)(param_2 + 0x18));
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(lVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
        return;
      }
      ___stack_chk_fail();
      lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(param_3);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bf529e0(*(undefined8 *)(param_4 + 0x20));
      func_0x00010bffc4a0();
      _objc_retain(param_3);
      lVar4 = param_3;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar12 = *(undefined8 *)(lVar11 * 8);
          uVar9 = uVar12;
          func_0x000100bf119c();
          if ((int)uVar9 != 0) {
            func_0x00010c2923e0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar12);
          }
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      puVar3 = puVar2;
      func_0x00010bf529e0();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = PTR_PTR_1126d1fc0;
        func_0x00010bfc4cc0(PTR_PTR_1126d1fc0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x18);
        func_0x00010bf529e0(puVar2);
        func_0x00010bfec320(uVar9);
        func_0x00010bf964c0(*(undefined8 *)(*(long *)(param_4 + 0x28) + 0x20));
        uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x10);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c250d40();
        _objc_release(uVar9);
        _objc_release(puVar10);
      }
      puVar10 = *(undefined **)(param_4 + 0x30);
      func_0x00010bf529e0();
      puVar3 = puVar2;
      func_0x00010bf529e0();
      if (puVar10 != puVar3) {
        puVar3 = PTR_PTR_1126d1fc0;
        func_0x00010bfc4cc0(PTR_PTR_1126d1fc0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x18);
        func_0x00010bf529e0(*(undefined8 *)(param_4 + 0x30));
        func_0x00010bf529e0(puVar2);
        func_0x00010bfec320(uVar9);
        _objc_release(puVar10);
      }
      _objc_release(puVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
        return;
      }
      ___stack_chk_fail();
      _objc_destroyWeak(param_3 + 0x28);
      _objc_storeStrong(param_3 + 0x20,0);
      _objc_storeStrong(param_3 + 0x18,0);
      _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_4);
      }
      puVar10 = PTR_PTR_1126d1fc0;
      func_0x00010bfc4d00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar5);
      lVar7 = lVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      if (lVar7 == 0) {
LAB_106cabfe0:
        func_0x00010c2ac460(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        func_0x00010befa120(puVar3);
      }
      else {
        func_0x00010c1d0560(puVar2);
        func_0x00010bf179e0(lVar7);
        if (dVar14 <= param_1) goto LAB_106cabfe0;
        func_0x00010c2ac460(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      func_0x00010bfec2a0(*(undefined8 *)(param_2 + 0x18));
      _objc_release(lVar7);
      _objc_release(puVar10);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = param_4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106cac274; end: 106cac50f;  */

void FUN_106cac274(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bffc4a0();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar7 = uVar8;
      func_0x000100bf119c();
      if ((int)uVar7 != 0) {
        func_0x00010c2923e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar4 = puVar2;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d1fc0;
    func_0x00010bfc4cc0(PTR_PTR_1126d1fc0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010bf529e0(puVar2);
    func_0x00010bfec320(uVar7);
    func_0x00010bf964c0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250d40();
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  puVar5 = *(undefined **)(param_1 + 0x30);
  func_0x00010bf529e0();
  puVar4 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 != puVar4) {
    puVar4 = PTR_PTR_1126d1fc0;
    func_0x00010bfc4cc0(PTR_PTR_1126d1fc0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bf529e0(puVar2);
    func_0x00010bfec320(uVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_2 + 0x28);
  _objc_storeStrong(param_2 + 0x20,0);
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 106cac510; end: 106cac55f; -[SCRdcImpl .cxx_destruct] */

void FUN_106cac510(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cac560; end: 106cac71f; -[SCRdcSyncJob initWithJobScheduler:syncUploadService:graphene:syncListHandler:snapchattersDataFetching:] */

undefined1 *
FUN_106cac560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f61d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d1fc8;
    func_0x00010bf496a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b0448;
    _objc_alloc();
    func_0x00010c02d480();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cac720; end: 106cac897; +[SCRdcSyncJob constructJobConfig] */

void FUN_106cac720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_alloc_init(PTR_PTR_1126b7228);
  puVar2 = puVar1;
  func_0x00010c1b6840();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b67a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c198180(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x00010c085560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc140();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c085560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c085560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edae0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c35c0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cac898; end: 106cacac7; -[SCRdcSyncJob processJobWithJobConfig:input:context:onComplete:] */

/* WARNING: Possible PIC construction at 0x000106cac9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106cac9a4) */

undefined * FUN_106cac898(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long in_x5;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x5);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bfab3e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 0)) {
    pcVar10 = *(code **)(in_x5 + 0x10);
    uVar8 = 0;
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar12 = *(long *)(lVar11 * 8);
        lVar4 = lVar12;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0d8c0();
        if (lVar12 - 4U < 0xfffffffffffffffb) {
          puVar5 = *(undefined **)(param_1 + 0x38);
          goto code_r0x00010c12ef00;
        }
        uVar13 = *(undefined8 *)(param_1 + 0x40);
        uVar7 = 0x11;
        _dispatch_get_global_queue(0x11,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar4);
        func_0x00010c2448c0(uVar13);
        _objc_release(uVar7);
        _objc_release(lVar4);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    pcVar10 = *(code **)(in_x5 + 0x10);
    uVar8 = 1;
  }
  (*pcVar10)(in_x5,uVar8,0);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
  func_0x000100bf119c();
  lVar4 = *(long *)(in_x5 + 0x28);
  puVar5 = *(undefined **)(*(long *)(in_x5 + 0x20) + 0x38);
  if ((uVar8 & 1) != 0) {
    func_0x00010bf0d8c0(*(undefined8 *)(in_x5 + 0x30));
    func_0x00010c28b8c0(puVar5);
    puVar5 = PTR_PTR_1126b0438;
    func_0x00010c0d5160(PTR_PTR_1126b0438);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0440;
    _objc_alloc(PTR_PTR_1126b0440);
    func_0x00010c021180();
    uVar7 = *(undefined8 *)(*(long *)(in_x5 + 0x20) + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266020();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return puVar5;
  }
code_r0x00010c12ef00:
                    /* WARNING: Could not recover jumptable at 0x00010c12ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_removeUser__1126295e0,lVar4);
  return puVar5;
}



/* Entry: 106cacac8; end: 106cacbaf;  */

void FUN_106cacac8(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000100bf119c();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  if ((param_2 & 1) != 0) {
    func_0x00010bf0d8c0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c28b8c0(uVar3);
    puVar1 = PTR_PTR_1126b0438;
    func_0x00010c0d5160(PTR_PTR_1126b0438);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0440;
    _objc_alloc(PTR_PTR_1126b0440);
    func_0x00010c021180();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266020();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_removeUser__1126295e0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106cacbb0; end: 106cacc0f; -[SCRdcSyncJob startSyncJob] */

void FUN_106cacbb0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cacc10; end: 106cacc83; -[SCRdcSyncJob .cxx_destruct] */

void FUN_106cacc10(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cacc84; end: 106cacf67; -[SCRecipientDeviceCapabilityEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cacc84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126d1fd0;
  _objc_alloc();
  lVar11 = (long)_DAT_11275bd54;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d1fd8;
  _objc_alloc(PTR_PTR_1126d1fd8);
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar2 = lVar11;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar11);
  puVar6 = PTR_PTR_1126d1fe0;
  _objc_alloc(PTR_PTR_1126d1fe0);
  lVar2 = param_1 + _DAT_11275bd60;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c120540();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11275bd64;
  _objc_loadWeakRetained(lVar11);
  lVar9 = lVar11;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e9a0(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126d1fe8;
  _objc_alloc(PTR_PTR_1126d1fe8);
  func_0x00010c03d460();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275bd68));
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106cacf68; end: 106cad117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cacf68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126d1fc8;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_11275bd58;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c085740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_11275bd5c;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c248100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_11275bd60;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c120540();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    lVar10 = lVar1 + _DAT_11275bd64;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020920(puVar13,param_2,lVar3,lVar5,lVar9,uVar14,lVar12);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106cad118; end: 106cad1fb; -[SCRecipientDeviceCapabilityEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cad118(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275bd68,0);
  _objc_destroyWeak(param_1 + _DAT_11275bd64);
  _objc_destroyWeak(param_1 + _DAT_11275bd60);
  _objc_destroyWeak(param_1 + _DAT_11275bd54);
  _objc_destroyWeak(param_1 + _DAT_11275bd5c);
  _objc_destroyWeak(param_1 + _DAT_11275bd58);
  _objc_destroyWeak(param_1 + _DAT_11275bd70);
  _objc_destroyWeak(param_1 + _DAT_11275bd6c);
  _objc_storeStrong(param_1 + _DAT_11275bd74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275bd78,0);
  return;
}



/* Entry: 106cad1fc; end: 106cad223; -[SCRdcDeltaSyncProcessor type] */

void FUN_106cad1fc(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cad224; end: 106caefc3; -[SCRdcDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_106cad224(double param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  long param_6,long param_7,long param_8)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined ***pppuVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined ***pppuVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined ***pppuVar32;
  long lVar33;
  undefined *puStack_af8;
  undefined ***pppuStack_ad0;
  long lStack_aa8;
  undefined ***pppuStack_aa0;
  undefined8 uStack_a78;
  undefined1 auStack_964 [4];
  long lStack_960;
  long lStack_958;
  undefined8 uStack_950;
  undefined1 uStack_941;
  undefined **ppuStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  undefined ***pppuStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  long *plStack_8e0;
  long *plStack_8d8;
  undefined **ppuStack_8d0;
  undefined **ppuStack_8c8;
  undefined8 uStack_8c0;
  undefined1 uStack_8b1;
  undefined8 uStack_8b0;
  ulong uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined *puStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined *puStack_860;
  undefined ***pppuStack_858;
  undefined8 uStack_850;
  long lStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  long lStack_808;
  long *plStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  code *pcStack_7b8;
  undefined *puStack_7b0;
  undefined ***pppuStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  long *plStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  long *plStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined *puStack_668;
  undefined8 uStack_660;
  code *pcStack_658;
  undefined *puStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined **ppuStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uStack_640 = 0;
  uStack_630 = 0x3032000000;
  pcStack_628 = FUN_106caefc4;
  uStack_620 = 0x106caefd4;
  uStack_618 = 0;
  lVar26 = param_4;
  puStack_638 = &uStack_640;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_668 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_660 = 0xc2000000;
  pcStack_658 = FUN_106caefdc;
  puStack_650 = &UNK_110864a68;
  puStack_648 = &uStack_640;
  func_0x00010c0bee60();
  _objc_release(lVar26);
  if (param_5 != 0) {
    _objc_opt_class(PTR_PTR_1126d1ff0);
    if (param_8 == 0) {
      uStack_910 = 0;
      uStack_928 = 0;
      uStack_930 = 0;
      uStack_918 = 0;
      uStack_920 = 0;
      uStack_938 = 0;
      ppuStack_940 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_940);
    }
    pppuVar21 = &ppuStack_8d0;
    FUN_106cb1c58();
    ppuStack_6d8 = (undefined **)CONCAT44(ppuStack_6d8._4_4_,0xf);
    uStack_6c8 = CONCAT44(uStack_6c8._4_4_,0x100);
    uVar22 = puStack_638[5];
    _objc_retain(uVar22);
    ppuStack_6e0 = &PTR_DAT_110862760;
    uStack_6a0 = 0;
    uStack_6a8 = 0;
    puStack_690 = (undefined *)0x0;
    puStack_698 = (undefined *)0x0;
    plStack_680 = (long *)0x0;
    uStack_688 = 0;
    plStack_678 = (long *)0x0;
    pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,10);
    uStack_108._0_4_ = CONCAT22(*(undefined2 *)((long)pppuVar21 + 0x1a),0x100);
    ppuStack_120 = &PTR_SUB_110862700;
    pppuStack_e0 = &ppuStack_6e0;
    puStack_d0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    uStack_408 = (undefined **)0x0;
    ppuStack_410 = (undefined **)0x0;
    pcStack_400 = (code *)0x0;
    uStack_8b0 = (ulong)uStack_8b0._4_4_ << 0x20;
    pppuVar4 = &ppuStack_940;
    uStack_6b0 = uVar22;
    pppuStack_e8 = pppuVar21;
    func_0x0001000e77a0(pppuVar4,&ppuStack_120,&ppuStack_410,&uStack_8b0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_410 != (undefined **)0x0) {
      uStack_408 = ppuStack_410;
      __ZdlPv();
    }
    plVar2 = plStack_b8;
    ppuStack_120 = &PTR_SUB_110862700;
    plStack_b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_410 = &puStack_d8;
    func_0x000100105004(&ppuStack_410);
    plVar2 = plStack_678;
    ppuStack_6e0 = &PTR_DAT_110862760;
    plStack_678 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_680;
    plStack_680 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_410 = &puStack_698;
    func_0x000100105004(&ppuStack_410);
    _objc_release(uStack_6b0);
    func_0x0001000e76e0(&uStack_918);
    _objc_release(uStack_928);
    _objc_release(uStack_930);
    lStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    plStack_710 = (long *)0x0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    uStack_6f0 = 0;
    _objc_retain(pppuVar4);
    pppuVar21 = pppuVar4;
    func_0x00010bf52a60();
    if (pppuVar21 != (undefined ***)0x0) {
      lVar26 = *plStack_710;
      do {
        pppuVar27 = (undefined ***)0x0;
        do {
          if (*plStack_710 != lVar26) {
            _objc_enumerationMutation(pppuVar4);
          }
          puVar5 = PTR_PTR_1126d1ff8;
          FUN_106cb2a50(PTR_PTR_1126d1ff8,*(undefined8 *)(lStack_718 + (long)pppuVar27 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar5);
          pppuVar27 = (undefined ***)((long)pppuVar27 + 1);
        } while (pppuVar21 != pppuVar27);
        pppuVar21 = pppuVar4;
        func_0x00010bf52a60();
      } while (pppuVar21 != (undefined ***)0x0);
    }
    _objc_release(pppuVar4);
    _objc_release(pppuVar4);
  }
  uStack_738 = 0;
  uStack_740 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  lStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  plStack_750 = (long *)0x0;
  _objc_retain(param_6);
  lStack_aa8 = param_6;
  func_0x00010bf52a60();
  if (lStack_aa8 == 0) {
    uStack_a78 = (undefined *)((ulong)uStack_a78._4_4_ << 0x20);
  }
  else {
    uStack_a78 = (undefined *)((ulong)uStack_a78._4_4_ << 0x20);
    lVar26 = *plStack_750;
    do {
      pppuStack_aa0 = (undefined ***)0x0;
      do {
        if (*plStack_750 != lVar26) {
          _objc_enumerationMutation(param_6);
        }
        lVar33 = *(long *)(lStack_758 + (long)pppuStack_aa0 * 8);
        lStack_798 = 0;
        uStack_7a0 = 0;
        uStack_788 = 0;
        plStack_790 = (long *)0x0;
        uStack_778 = 0;
        uStack_780 = 0;
        uStack_768 = 0;
        uStack_770 = 0;
        lVar18 = lVar33;
        func_0x00010c084700();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar18;
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar18);
        lVar18 = lVar9;
        func_0x00010bf52a60();
        if (lVar18 != 0) {
          lVar19 = *plStack_790;
          do {
            lVar30 = 0;
            do {
              if (*plStack_790 != lVar19) {
                _objc_enumerationMutation(lVar9);
              }
              uVar23 = *(ulong *)(lStack_798 + lVar30 * 8);
              uVar20 = uVar23;
              func_0x00010c087060();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar20;
              func_0x00010c0720c0();
              _objc_release(uVar20);
              if ((uVar15 & 1) != 0) {
                ppuStack_120 = (undefined **)0x0;
                uStack_110 = 0x2020000000;
                uStack_108 = 0;
                pppuStack_118 = &ppuStack_120;
                func_0x00010bfe5ec0(uVar23);
                _objc_retainAutoreleasedReturnValue();
                puStack_7c8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_7c0 = 0xc2000000;
                pcStack_7b8 = FUN_106caf014;
                puStack_7b0 = &UNK_110864a98;
                pppuStack_7a8 = &ppuStack_120;
                func_0x00010c0bee60();
                _objc_release(uVar23);
                lVar6 = lVar33;
                func_0x00010c118b40(lVar33);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar6);
                lVar6 = param_2;
                func_0x00010bdfbec0(param_2);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = param_2;
                func_0x00010bea1460(param_2);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar6);
                ppuStack_6e0 = (undefined **)((ulong)ppuStack_6e0 & 0xffffffffffffff00);
                lVar6 = lVar8;
                FUN_106cb2ac4(lVar8,&ppuStack_6e0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(param_8);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(lVar6);
                bVar3 = (byte)ppuStack_6e0;
                _objc_release(lVar8);
                _objc_release(lVar7);
                uStack_a78 = (undefined *)CONCAT44(uStack_a78._4_4_,(int)uStack_a78 + (uint)bVar3);
                __Block_object_dispose(&ppuStack_120,8);
              }
              lVar30 = lVar30 + 1;
            } while (lVar18 != lVar30);
            lVar18 = lVar9;
            func_0x00010bf52a60();
          } while (lVar18 != 0);
        }
        _objc_release(lVar9);
        pppuStack_aa0 = (undefined ***)((long)pppuStack_aa0 + 1);
      } while (pppuStack_aa0 != (undefined ***)lStack_aa8);
      lStack_aa8 = param_6;
      func_0x00010bf52a60();
    } while (lStack_aa8 != 0);
  }
  _objc_release(param_6);
  lVar26 = param_7;
  func_0x00010bf529e0();
  if (lVar26 == 0) {
    iVar1 = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    uStack_7d8 = 0;
    uStack_7e0 = 0;
    lStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    plStack_800 = (long *)0x0;
    _objc_retain(param_7);
    lStack_aa8 = param_7;
    func_0x00010bf52a60();
    if (lStack_aa8 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      lVar26 = *plStack_800;
      do {
        pppuStack_aa0 = (undefined ***)0x0;
        do {
          if (*plStack_800 != lVar26) {
            _objc_enumerationMutation(param_7);
          }
          lVar9 = *(long *)(lStack_808 + (long)pppuStack_aa0 * 8);
          lStack_848 = 0;
          uStack_850 = 0;
          uStack_838 = 0;
          plStack_840 = (long *)0x0;
          uStack_828 = 0;
          uStack_830 = 0;
          uStack_818 = 0;
          uStack_820 = 0;
          func_0x00010c0f5860();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar9;
          func_0x00010bf52a60();
          if (lVar18 != 0) {
            lVar33 = *plStack_840;
            do {
              lVar19 = 0;
              do {
                if (*plStack_840 != lVar33) {
                  _objc_enumerationMutation(lVar9);
                }
                uVar23 = *(ulong *)(lStack_848 + lVar19 * 8);
                uVar20 = uVar23;
                func_0x00010c087060();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar20;
                func_0x00010c0720c0();
                _objc_release(uVar20);
                if ((uVar15 & 1) != 0) {
                  ppuStack_120 = (undefined **)0x0;
                  uStack_110 = 0x2020000000;
                  uStack_108 = 0;
                  pppuStack_118 = &ppuStack_120;
                  func_0x00010bfe5ec0(uVar23);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_878 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_870 = 0xc2000000;
                  uStack_868 = 0x106caf024;
                  puStack_860 = &UNK_110864a98;
                  pppuStack_858 = &ppuStack_120;
                  func_0x00010c0bee60();
                  _objc_release(uVar23);
                  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar5);
                  _objc_release(puVar10);
                  iVar1 = iVar1 + 1;
                  __Block_object_dispose(&ppuStack_120,8);
                }
                lVar19 = lVar19 + 1;
              } while (lVar18 != lVar19);
              lVar18 = lVar9;
              func_0x00010bf52a60();
            } while (lVar18 != 0);
          }
          _objc_release(lVar9);
          pppuStack_aa0 = (undefined ***)((long)pppuStack_aa0 + 1);
        } while (pppuStack_aa0 != (undefined ***)lStack_aa8);
        lStack_aa8 = param_7;
        func_0x00010bf52a60();
      } while (lStack_aa8 != 0);
    }
    _objc_release(param_7);
    _objc_opt_class(PTR_PTR_1126d1ff0);
    if (param_8 == 0) {
      uStack_880 = 0;
      uStack_898 = 0;
      uStack_8a0 = 0;
      uStack_888 = 0;
      uStack_890 = 0;
      uStack_8a8 = 0;
      uStack_8b0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_8b0);
    }
    puVar11 = &uStack_8b1;
    FUN_106cb1dd0(puVar11);
    _objc_retain(puVar5);
    uStack_8c0 = 0;
    ppuStack_8d0 = (undefined **)0x0;
    ppuStack_8c8 = (undefined **)0x0;
    puVar10 = puVar5;
    func_0x00010bf529e0(puVar5);
    func_0x00010050496c(&ppuStack_8d0,puVar10);
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6c8 = 0;
    plStack_6d0 = (long *)0x0;
    ppuStack_6d8 = (undefined **)0x0;
    ppuStack_6e0 = (undefined **)0x0;
    _objc_retain(puVar5);
    puVar10 = puVar5;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      lVar26 = *plStack_6d0;
      do {
        puVar28 = (undefined *)0x0;
        do {
          if (*plStack_6d0 != lVar26) {
            _objc_enumerationMutation(puVar5);
          }
          ppuVar25 = *(undefined ***)((long)ppuStack_6d8 + (long)puVar28 * 8);
          _objc_retain(ppuVar25);
          _objc_retain(ppuVar25);
          ppuVar12 = ppuVar25;
          func_0x00010c282800();
          _objc_release(ppuVar25);
          ppuStack_940 = ppuVar12;
          func_0x0001005049f8(&ppuStack_8d0,&ppuStack_940);
          _objc_release(ppuVar25);
          puVar28 = puVar28 + 1;
        } while (puVar10 != puVar28);
        puVar10 = puVar5;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
    func_0x000100504ab8(&ppuStack_6e0,0xc,puVar11,&ppuStack_8d0);
    puVar11 = &uStack_941;
    FUN_106cb1c58();
    uStack_408 = (undefined **)CONCAT44(uStack_408._4_4_,0xf);
    uStack_3f8 = CONCAT44(uStack_3f8._4_4_,0x100);
    uVar24 = puStack_638[5];
    _objc_retain(uVar24);
    uVar31 = uStack_108;
    uVar22 = uStack_928;
    ppuStack_410 = &PTR_DAT_110862760;
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    uStack_3c0 = 0;
    uStack_3c8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_3b8 = 0;
    plStack_3a8 = (long *)0x0;
    uStack_938 = CONCAT44(uStack_938._4_4_,10);
    uStack_928._4_4_ = SUB84(uVar22,4);
    uStack_928._0_4_ = CONCAT13(puVar11[0x1b],CONCAT12(puVar11[0x1a],0x100));
    ppuStack_940 = &PTR_SUB_110862700;
    pppuStack_900 = &ppuStack_410;
    pppuStack_e0 = &ppuStack_940;
    uStack_8f0 = 0;
    uStack_8f8 = 0;
    plStack_8e0 = (long *)0x0;
    uStack_8e8 = 0;
    plStack_8d8 = (long *)0x0;
    pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,4);
    uStack_108._4_4_ = SUB84(uVar31,4);
    uStack_108._0_4_ =
         CONCAT13(uStack_6c8._3_1_ & puVar11[0x1b],CONCAT12(uStack_6c8._2_1_ | puVar11[0x1a],0x100))
    ;
    ppuStack_120 = &PTR_DAT_1108629c8;
    plStack_b8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    puStack_d0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    lStack_960 = 0;
    lStack_958 = 0;
    uStack_950 = 0;
    auStack_964 = (undefined1  [4])0x0;
    puVar13 = &uStack_8b0;
    puStack_908 = puVar11;
    uStack_3e0 = uVar24;
    pppuStack_e8 = &ppuStack_6e0;
    func_0x0001000e77a0(puVar13,&ppuStack_120,&lStack_960,auStack_964);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_960 != 0) {
      lStack_958 = lStack_960;
      __ZdlPv();
    }
    plVar2 = plStack_b8;
    ppuStack_120 = &PTR_DAT_1108629c8;
    plStack_b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (puStack_d8 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar2 = plStack_8d8;
    ppuStack_940 = &PTR_SUB_110862700;
    plStack_8d8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_8e0;
    plStack_8e0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lStack_960 = (long)&uStack_8f8;
    func_0x000100105004(&lStack_960);
    plVar2 = plStack_3a8;
    ppuStack_410 = &PTR_DAT_110862760;
    plStack_3a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_3b0;
    plStack_3b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lStack_960 = (long)&uStack_3c8;
    func_0x000100105004(&lStack_960);
    _objc_release(uStack_3e0);
    plVar2 = plStack_678;
    ppuStack_6e0 = &PTR_DAT_110864b38;
    plStack_678 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_680;
    plStack_680 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (puStack_698 != (undefined *)0x0) {
      puStack_690 = puStack_698;
      __ZdlPv();
    }
    if (ppuStack_8d0 != (undefined **)0x0) {
      ppuStack_8c8 = ppuStack_8d0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_888);
    _objc_release(uStack_898);
    _objc_release(uStack_8a0);
    _objc_retain(puVar13);
    puVar14 = puVar13;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (puVar14 != (undefined8 *)0x0) {
      puVar29 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(puVar13);
        }
        puVar10 = PTR_PTR_1126d1ff8;
        FUN_106cb2a50(PTR_PTR_1126d1ff8,*(undefined8 *)((long)puVar29 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        puVar29 = (undefined8 *)((long)puVar29 + 1);
      } while (puVar14 != puVar29);
      puVar14 = puVar13;
      func_0x00010bf52a60();
    }
    _objc_release(puVar13);
    _objc_release(puVar13);
    _objc_release(puVar5);
  }
  _objc_opt_class(PTR_PTR_1126d1ff0);
  if (param_8 == 0) {
    uStack_910 = 0;
    uStack_928 = 0;
    uStack_930 = 0;
    uStack_918 = 0;
    uStack_920 = 0;
    uStack_938 = 0;
    ppuStack_940 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_940);
  }
  pppuVar21 = &ppuStack_8d0;
  FUN_106cb1c58();
  ppuStack_6d8 = (undefined **)CONCAT44(ppuStack_6d8._4_4_,0xf);
  uStack_6c8 = CONCAT44(uStack_6c8._4_4_,0x100);
  uVar22 = puStack_638[5];
  _objc_retain(uVar22);
  ppuStack_6e0 = &PTR_DAT_110862760;
  uStack_6a0 = 0;
  uStack_6a8 = 0;
  puStack_690 = (undefined *)0x0;
  puStack_698 = (undefined *)0x0;
  plStack_680 = (long *)0x0;
  uStack_688 = 0;
  plStack_678 = (long *)0x0;
  pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,10);
  uStack_108._0_4_ = CONCAT22(*(undefined2 *)((long)pppuVar21 + 0x1a),0x100);
  ppuStack_120 = &PTR_SUB_110862700;
  pppuStack_e0 = &ppuStack_6e0;
  puStack_d0 = (undefined *)0x0;
  puStack_d8 = (undefined *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  uStack_408 = (undefined **)0x0;
  ppuStack_410 = (undefined **)0x0;
  pcStack_400 = (code *)0x0;
  uStack_8b0 = uStack_8b0 & 0xffffffff00000000;
  pppuVar4 = &ppuStack_940;
  uStack_6b0 = uVar22;
  pppuStack_e8 = pppuVar21;
  func_0x0001000e77a0(pppuVar4,&ppuStack_120,&ppuStack_410,&uStack_8b0);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_410 != (undefined **)0x0) {
    uStack_408 = ppuStack_410;
    __ZdlPv();
  }
  plVar2 = plStack_b8;
  ppuStack_120 = &PTR_SUB_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_410 = &puStack_d8;
  func_0x000100105004(&ppuStack_410);
  plVar2 = plStack_678;
  ppuStack_6e0 = &PTR_DAT_110862760;
  plStack_678 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_680;
  plStack_680 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_410 = &puStack_698;
  func_0x000100105004(&ppuStack_410);
  _objc_release(uStack_6b0);
  func_0x0001000e76e0(&uStack_918);
  _objc_release(uStack_928);
  _objc_release(uStack_930);
  _objc_retain(pppuVar4);
  pppuVar21 = pppuVar4;
  func_0x00010bf52a60();
  lVar26 = lRam0000000000000000;
  if (pppuVar21 != (undefined ***)0x0) {
    do {
      pppuVar27 = (undefined ***)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(pppuVar4);
        }
        puVar5 = PTR_PTR_1126d1ff8;
        FUN_106cb2510(PTR_PTR_1126d1ff8,*(undefined8 *)((long)pppuVar27 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          *(long *)(puVar5 + 0x30) = (long)(param_1 + 43200000.0);
          func_0x00010c25ed40(param_8);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar5);
        pppuVar27 = (undefined ***)((long)pppuVar27 + 1);
      } while (pppuVar21 != pppuVar27);
      pppuVar21 = pppuVar4;
      func_0x00010bf52a60();
    } while (pppuVar21 != (undefined ***)0x0);
  }
  _objc_release(pppuVar4);
  func_0x00010c12ef00(*(undefined8 *)(param_2 + 8));
  puVar5 = PTR_PTR_1126d1fc0;
  func_0x00010bf6d340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar22 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar22);
  if (iVar1 < (int)uStack_a78) {
    _objc_opt_class(PTR_PTR_1126d1ff0);
    if (param_8 == 0) {
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      pppuStack_118 = (undefined ***)0x0;
      ppuStack_120 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_120);
    }
    ppuStack_6d8 = (undefined **)0x0;
    ppuStack_6e0 = (undefined **)0x0;
    plStack_6d0 = (long *)0x0;
    ppuStack_940 = (undefined **)((ulong)ppuStack_940 & 0xffffffff00000000);
    pppuVar21 = &ppuStack_120;
    func_0x00010054c81c(pppuVar21,&ppuStack_6e0,&ppuStack_940);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_6e0 != (undefined **)0x0) {
      ppuStack_6d8 = ppuStack_6e0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_f8);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    pppuVar27 = pppuVar21;
    func_0x00010bf529e0();
    _objc_release(pppuVar21);
    uVar15 = *(ulong *)(param_2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar15;
    func_0x00010c282760();
    _objc_release(uVar15);
    if ((undefined ***)(uVar20 & 0xffffffff) < pppuVar27) {
      puStack_af8 = PTR_PTR_1126d1fc0;
      func_0x00010c0c2c60();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar22);
      uVar15 = *(ulong *)(param_2 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar15;
      func_0x00010c282760();
      _objc_release(uVar15);
      _objc_opt_class(PTR_PTR_1126d1ff0);
      if (param_8 == 0) {
        uStack_910 = 0;
        uStack_928 = 0;
        uStack_930 = 0;
        uStack_918 = 0;
        uStack_920 = 0;
        uStack_938 = 0;
        ppuStack_940 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_940);
      }
      pppuVar21 = (undefined ***)auStack_964;
      FUN_106cb1f14();
      ppuStack_6d8 = (undefined **)CONCAT44(ppuStack_6d8._4_4_,0xf);
      uStack_6c8 = CONCAT44(uStack_6c8._4_4_,0x100);
      ppuStack_6e0 = &PTR_DAT_110864b98;
      uStack_6a0 = 0;
      uStack_6a8 = 0;
      puStack_690 = (undefined *)0x0;
      puStack_698 = (undefined *)0x0;
      plStack_680 = (long *)0x0;
      uStack_688 = 0;
      uStack_6b0 = 0;
      plStack_678 = (long *)0x0;
      pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,8);
      uStack_108._0_4_ = CONCAT22(*(undefined2 *)((long)pppuVar21 + 0x1a),0x100);
      ppuStack_120 = &PTR_DAT_110864b38;
      pppuStack_e0 = &ppuStack_6e0;
      puStack_d0 = (undefined *)0x0;
      puStack_d8 = (undefined *)0x0;
      plStack_c0 = (long *)0x0;
      uStack_c8 = 0;
      plStack_b8 = (long *)0x0;
      puVar11 = &uStack_8b1;
      pppuStack_e8 = pppuVar21;
      FUN_106cb1f14();
      ppuStack_410 = *(undefined ***)(puVar11 + 0x10);
      uStack_3f8 = *(undefined8 *)(puVar11 + 0x28);
      uStack_408._0_2_ = CONCAT11(puVar11[0x18],puVar11[0x19]);
      uStack_408 = (undefined **)((ulong)uStack_408 & 0xffffffff);
      pcStack_400 = FUN_106caf798;
      uStack_8c0 = 0;
      ppuStack_8d0 = (undefined **)0x0;
      ppuStack_8c8 = (undefined **)0x0;
      func_0x000100c435d0(&ppuStack_8d0,&ppuStack_410,auStack_3f0,1);
      uVar20 = (long)pppuVar27 - (uVar20 & 0xffffffff);
      func_0x000100c436b8(&uStack_8b0,&ppuStack_8d0);
      lStack_960 = CONCAT44(lStack_960._4_4_,(int)uVar20);
      pppuStack_ad0 = &ppuStack_940;
      func_0x0001000e77a0(pppuStack_ad0,&ppuStack_120,&uStack_8b0,&lStack_960);
      _objc_retainAutoreleasedReturnValue();
      if (uStack_8b0 != 0) {
        uStack_8a8 = uStack_8b0;
        __ZdlPv();
      }
      if (ppuStack_8d0 != (undefined **)0x0) {
        ppuStack_8c8 = ppuStack_8d0;
        __ZdlPv();
      }
      plVar2 = plStack_b8;
      ppuStack_120 = &PTR_DAT_110864b38;
      plStack_b8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_c0;
      plStack_c0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (puStack_d8 != (undefined *)0x0) {
        puStack_d0 = puStack_d8;
        __ZdlPv();
      }
      plVar2 = plStack_678;
      ppuStack_6e0 = &PTR_DAT_110864b98;
      plStack_678 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_680;
      plStack_680 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (puStack_698 != (undefined *)0x0) {
        puStack_690 = puStack_698;
        __ZdlPv();
      }
      func_0x0001000e76e0(&uStack_918);
      _objc_release(uStack_928);
      _objc_release(uStack_930);
      uStack_a78 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc();
      func_0x00010bffc4a0();
      _objc_retain(pppuStack_ad0);
      pppuStack_aa0 = pppuStack_ad0;
      func_0x00010bf52a60();
      lVar26 = lRam0000000000000000;
      if (pppuStack_aa0 != (undefined ***)0x0) {
        uVar15 = 0;
        do {
          pppuVar21 = (undefined ***)0x0;
          do {
            if (lRam0000000000000000 != lVar26) {
              _objc_enumerationMutation(pppuStack_ad0);
            }
            if (uVar20 <= uVar15) goto LAB_106caeb10;
            uVar31 = *(undefined8 *)((long)pppuVar21 * 8);
            uVar22 = uVar31;
            func_0x00010c2923e0(uVar31);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = uStack_a78;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar22);
            if (puVar5 == (undefined *)0x0) {
              uVar22 = uVar31;
              func_0x00010c2923e0(uVar31);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uStack_a78);
              _objc_release(uVar22);
              _objc_opt_class(PTR_PTR_1126d1ff0);
              if (param_8 == 0) {
                uStack_910 = 0;
                uStack_928 = 0;
                uStack_930 = 0;
                uStack_918 = 0;
                uStack_920 = 0;
                uStack_938 = 0;
                ppuStack_940 = (undefined **)0x0;
              }
              else {
                func_0x00010bfa6be0(&ppuStack_940);
              }
              pppuVar27 = &ppuStack_8d0;
              FUN_106cb1c58();
              uVar22 = uVar31;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_6d8 = (undefined **)CONCAT44(ppuStack_6d8._4_4_,0xf);
              uStack_6c8 = CONCAT44(uStack_6c8._4_4_,0x100);
              _objc_retain();
              ppuStack_6e0 = &PTR_DAT_110862760;
              pppuStack_e0 = &ppuStack_6e0;
              uStack_6a0 = 0;
              uStack_6a8 = 0;
              puStack_690 = (undefined *)0x0;
              puStack_698 = (undefined *)0x0;
              plStack_680 = (long *)0x0;
              uStack_688 = 0;
              plStack_678 = (long *)0x0;
              pppuStack_118 = (undefined ***)CONCAT44(pppuStack_118._4_4_,10);
              uStack_108._0_4_ = CONCAT22(*(undefined2 *)((long)pppuVar27 + 0x1a),0x100);
              ppuStack_120 = &PTR_SUB_110862700;
              puStack_d0 = (undefined *)0x0;
              puStack_d8 = (undefined *)0x0;
              plStack_c0 = (long *)0x0;
              uStack_c8 = 0;
              plStack_b8 = (long *)0x0;
              uStack_408 = (undefined **)0x0;
              ppuStack_410 = (undefined **)0x0;
              pcStack_400 = (code *)0x0;
              uStack_8b0 = uStack_8b0 & 0xffffffff00000000;
              pppuVar16 = &ppuStack_940;
              uStack_6b0 = uVar22;
              pppuStack_e8 = pppuVar27;
              func_0x0001000e77a0(pppuVar16,&ppuStack_120,&ppuStack_410,&uStack_8b0);
              _objc_retainAutoreleasedReturnValue();
              if (ppuStack_410 != (undefined **)0x0) {
                uStack_408 = ppuStack_410;
                __ZdlPv();
              }
              plVar2 = plStack_b8;
              ppuStack_120 = &PTR_SUB_110862700;
              plStack_b8 = (long *)0x0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
              plVar2 = plStack_c0;
              plStack_c0 = (long *)0x0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
              ppuStack_410 = &puStack_d8;
              func_0x000100105004(&ppuStack_410);
              plVar2 = plStack_678;
              ppuStack_6e0 = &PTR_DAT_110862760;
              plStack_678 = (long *)0x0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
              plVar2 = plStack_680;
              plStack_680 = (long *)0x0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
              ppuStack_410 = &puStack_698;
              func_0x000100105004(&ppuStack_410);
              _objc_release(uStack_6b0);
              _objc_release(uVar22);
              func_0x0001000e76e0(&uStack_918);
              _objc_release(uStack_928);
              _objc_release(uStack_930);
              puVar5 = PTR_PTR_1126b0438;
              func_0x00010c2923e0(uVar31);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0d5160();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar31);
              puVar28 = PTR_PTR_1126b0440;
              _objc_alloc(PTR_PTR_1126b0440);
              func_0x00010c021180();
              lVar18 = param_2 + 0x18;
              _objc_loadWeakRetained(lVar18);
              lVar9 = lVar18;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf3c2a0();
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(lVar9);
              _objc_release(lVar18);
              _objc_retain(pppuVar16);
              pppuVar27 = pppuVar16;
              func_0x00010bf52a60();
              lVar18 = lRam0000000000000000;
              while (pppuVar27 != (undefined ***)0x0) {
                pppuVar32 = (undefined ***)0x0;
                uVar15 = (long)pppuVar27 + uVar15;
                do {
                  if (lRam0000000000000000 != lVar18) {
                    _objc_enumerationMutation(pppuVar16);
                  }
                  puVar17 = PTR_PTR_1126d1ff8;
                  FUN_106cb2a50(PTR_PTR_1126d1ff8,*(undefined8 *)((long)pppuVar32 * 8));
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25ed40(param_8);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  _objc_release(puVar17);
                  pppuVar32 = (undefined ***)((long)pppuVar32 + 1);
                } while (pppuVar27 != pppuVar32);
                pppuVar27 = pppuVar16;
                func_0x00010bf52a60();
              }
              _objc_release(pppuVar16);
              _objc_release(puVar28);
              _objc_release(puVar5);
              _objc_release(pppuVar16);
            }
            pppuVar21 = (undefined ***)((long)pppuVar21 + 1);
          } while (pppuVar21 != pppuStack_aa0);
          pppuStack_aa0 = pppuStack_ad0;
          func_0x00010bf52a60();
        } while (pppuStack_aa0 != (undefined ***)0x0);
      }
LAB_106caeb10:
      _objc_release(pppuStack_ad0);
      _objc_release(uStack_a78);
      _objc_release(pppuStack_ad0);
      _objc_release(puStack_af8);
    }
  }
  _objc_release(puVar10);
  _objc_release(pppuVar4);
  __Block_object_dispose(&uStack_640,8);
  _objc_release(uStack_618);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  lVar26 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppuStack_ad0);
  _objc_release(uStack_a78);
  _objc_release(pppuStack_ad0);
  _objc_release(puStack_af8);
  _objc_release(puVar10);
  _objc_release(pppuVar4);
  lVar18 = 8;
  __Block_object_dispose(&uStack_640);
  _objc_release(uStack_618);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  __Unwind_Resume();
  *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 106caefc4; end: 106caefdb;  */

void FUN_106caefc4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106caefdc; end: 106caf013;  */

void FUN_106caefdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106caf014; end: 106caf033;  */

void FUN_106caf014(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106caf034; end: 106caf233; -[SCRdcDeltaSyncProcessor _devicePropertyParseValueFromDeltaSyncValue:] */

void FUN_106caf034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_120 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106caefc4;
  uStack_30 = 0x106caefd4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106caf234;
  puStack_60 = &UNK_110864a68;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106caf26c;
  puStack_88 = &UNK_110885dd8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x106caf2b4;
  puStack_b0 = &UNK_110885e08;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106caf2fc;
  puStack_d8 = &UNK_110885e38;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x106caf340;
  puStack_100 = &UNK_110864a98;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x106caf388;
  puStack_128 = &UNK_11084f5b8;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106caf3c0;
  puStack_150 = &UNK_11096f170;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x106caf3d4;
  puStack_178 = &UNK_11096f1a0;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x106caf3e8;
  puStack_1a0 = &UNK_11096f1d0;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x106caf3fc;
  puStack_1c8 = &UNK_11087bb00;
  uStack_1c0 = param_1;
  uStack_198 = param_1;
  uStack_170 = param_1;
  uStack_148 = param_1;
  puStack_f8 = puStack_120;
  puStack_d0 = puStack_120;
  puStack_a8 = puStack_120;
  puStack_80 = puStack_120;
  puStack_58 = puStack_120;
  puStack_48 = puStack_120;
  func_0x00010c0c0580(param_3,param_2,&puStack_78,&puStack_a0,&puStack_c8,&puStack_f0,&puStack_118,
                      &puStack_140,&puStack_168,&puStack_190,&puStack_1b8,&puStack_1e0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106caf234; end: 106caf3bf;  */

void FUN_106caf234(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106caf3c0; end: 106caf40f;  */

void FUN_106caf3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_reportFailedExpectationWithMessa_11262a570,
             &PTR____CFConstantStringClassReference_110e81cf8);
  return;
}



/* Entry: 106caf410; end: 106caf747; -[SCRdcDeltaSyncProcessor _serializeObject:propertyType:becomesStaleAt:value:] */

void FUN_106caf410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  pbVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar5);
  if (((ulong)pbVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    pbVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar5);
    if (((ulong)pbVar3 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      pbVar3 = param_6;
      _objc_opt_isKindOfClass(param_6,puVar5);
      if (((ulong)pbVar3 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c132d40(*(undefined8 *)(param_1 + 0x10));
        _objc_release(puVar5);
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126d1ff0;
        func_0x00010c2abc80(PTR_PTR_1126d1ff0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar5 = PTR_PTR_1126d1ff0;
      func_0x00010c2ba860(PTR_PTR_1126d1ff0);
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_106caf690;
  }
  _objc_retain(param_6);
  pbVar3 = param_6;
  _objc_retainAutorelease();
  func_0x00010c0dfba0();
  puVar5 = PTR_PTR_1126d1ff0;
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  if (bVar1 < 0x53) {
    if (uVar4 == 0x4b || bVar1 < 0x4b) {
      if ((bVar1 == 0x43) || (bVar1 == 0x49)) {
LAB_106caf654:
        func_0x00010c2827c0(param_6);
        func_0x00010c2bbfe0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106caf688;
      }
    }
    else if ((uVar4 == 0x4c) || (bVar1 == 0x51)) goto LAB_106caf654;
LAB_106caf6bc:
    func_0x00010c132d40(*(undefined8 *)(param_1 + 0x10));
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar4 - 100;
    if (uVar2 < 0x10) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0xa120U) == 0) {
        if (uVar2 == 0) {
          func_0x00010bf885a0(param_6);
          func_0x00010c2ac900(puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (uVar2 != 2) goto LAB_106caf610;
          func_0x00010bfb2c80(param_6);
          func_0x00010c2ae440(puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010c0b4fe0(param_6);
        func_0x00010c2aff00(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
LAB_106caf610:
      if (uVar4 == 0x53) goto LAB_106caf654;
      if (bVar1 != 99) goto LAB_106caf6bc;
      func_0x00010bf1f3c0(param_6);
      func_0x00010c2a96e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_106caf688:
  _objc_release(param_6);
LAB_106caf690:
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106caf748; end: 106caf797; -[SCRdcDeltaSyncProcessor .cxx_destruct] */

void FUN_106caf748(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106caf798; end: 106caf847;  */

undefined4 FUN_106caf798(ulong param_1,ulong param_2,code *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bStack_32;
  byte bStack_31;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  (*param_3)(param_1,&bStack_31);
  uVar3 = param_2;
  (*param_3)(param_2,&bStack_32);
  uVar4 = 2;
  if (bStack_32 == 0) {
    uVar4 = 0;
  }
  if (bStack_31 == 0) {
    uVar4 = 1;
  }
  uVar5 = 1;
  if (uVar3 > uVar2 || uVar2 == uVar3) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (uVar3 <= uVar2) {
    uVar1 = uVar5;
  }
  uVar5 = uVar4;
  if ((bStack_32 & 1) == 0) {
    uVar5 = uVar1;
  }
  if ((bStack_31 & 1) == 0) {
    uVar4 = uVar5;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106caf848; end: 106caf8cf; -[SCRdcRepository initWithDocObjectContext:] */

undefined1 * FUN_106caf848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f61e8;
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



/* Entry: 106caf8d0; end: 106caff0b; -[SCRdcRepository retrieveAvailableItems:propertyType:] */

void FUN_106caf8d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_344;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  undefined4 uStack_320;
  undefined4 uStack_310;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined1 uStack_2b1;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined2 uStack_298;
  byte bStack_296;
  byte bStack_295;
  undefined1 *puStack_278;
  undefined ***pppuStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *apuStack_1d8 [3];
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined2 uStack_e0;
  byte bStack_de;
  byte bStack_dd;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar12 = *(long *)(param_1 + 8);
  _objc_opt_class(PTR_PTR_1126d1ff0);
  if (lVar12 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,lVar12);
  }
  puVar2 = &uStack_221;
  FUN_106cb1c58(puVar2);
  _objc_retain(param_3);
  uStack_238 = 0;
  uStack_230 = 0;
  puStack_240 = (undefined *)0x0;
  lVar12 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x0001004c2bb4(&puStack_240,lVar12);
  lStack_218 = 0;
  ppuStack_220 = (undefined **)0x0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar9 = *plStack_210;
    do {
      lVar10 = 0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar14 = *(undefined ***)(lStack_218 + lVar10 * 8);
        _objc_retain(ppuVar14);
        ppuStack_2b0 = ppuVar14;
        func_0x0001004c2d3c(&puStack_240,&ppuStack_2b0);
        _objc_release(ppuStack_2b0);
        lVar10 = lVar10 + 1;
      } while (lVar12 != lVar10);
      lVar12 = param_3;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x0001004c2e3c(&ppuStack_220,0xc,puVar2,&puStack_240);
  puVar2 = &uStack_2b1;
  FUN_106cb1dd0();
  uStack_320 = 0xf;
  uStack_310 = 0x100;
  ppuStack_328 = &PTR_DAT_110864b98;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lStack_2d8 = 0;
  lStack_2e0 = 0;
  plStack_2c8 = (long *)0x0;
  uStack_2d0 = 0;
  plStack_2c0 = (long *)0x0;
  bStack_296 = puVar2[0x1a];
  bStack_295 = puVar2[0x1b];
  uStack_2a8 = 10;
  uStack_298 = 0x100;
  ppuStack_2b0 = &PTR_DAT_110864b38;
  pppuStack_270 = &ppuStack_328;
  plStack_248 = (long *)0x0;
  lStack_260 = 0;
  lStack_268 = 0;
  plStack_250 = (long *)0x0;
  uStack_258 = 0;
  bStack_de = uStack_208._2_1_ | bStack_296;
  bStack_dd = uStack_208._3_1_ & bStack_295;
  uStack_f0 = 4;
  uStack_e0 = 0x100;
  ppuStack_f8 = &PTR_DAT_1108629c8;
  pppuStack_b8 = &ppuStack_2b0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  plStack_90 = (long *)0x0;
  lStack_340 = 0;
  lStack_338 = 0;
  uStack_330 = 0;
  uStack_344 = 0;
  puVar3 = &uStack_1b0;
  uStack_2f8 = param_4;
  puStack_278 = puVar2;
  pppuStack_c0 = &ppuStack_220;
  func_0x0001000e77a0(puVar3,&ppuStack_f8,&lStack_340,&uStack_344);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_340 != 0) {
    lStack_338 = lStack_340;
    __ZdlPv();
  }
  plVar1 = plStack_90;
  ppuStack_f8 = &PTR_DAT_1108629c8;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b0 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_248;
  ppuStack_2b0 = &PTR_DAT_110864b38;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_268 != 0) {
    lStack_260 = lStack_268;
    __ZdlPv();
  }
  plVar1 = plStack_2c0;
  ppuStack_328 = &PTR_DAT_110864b98;
  plStack_2c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2c8;
  plStack_2c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2e0 != 0) {
    lStack_2d8 = lStack_2e0;
    __ZdlPv();
  }
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_SUB_110862700;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2b0 = apuStack_1d8;
  func_0x000100105004(&ppuStack_2b0);
  ppuStack_2b0 = &puStack_240;
  func_0x000100105004(&ppuStack_2b0);
  func_0x0001000e76e0(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bf529e0(puVar3);
  func_0x00010bffc4a0(puVar5);
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  _objc_retain(puVar4);
  puVar13 = &uStack_390;
  puVar6 = puVar4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    lVar12 = *plStack_380;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_380 != lVar12) {
          _objc_enumerationMutation(puVar4);
        }
        uVar15 = *(ulong *)(lStack_388 + (long)puVar13 * 8);
        puVar7 = PTR_PTR_1126d2000;
        _objc_alloc(PTR_PTR_1126d2000);
        func_0x00010c118da0(uVar15);
        uVar8 = uVar15;
        func_0x00010bf179e0();
        lVar9 = param_1;
        func_0x00010bdfb1e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03b7e0((double)uVar8,puVar7);
        func_0x00010c2923e0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar5);
        _objc_release(uVar15);
        _objc_release(puVar7);
        _objc_release(lVar9);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar6 != puVar13);
      puVar13 = &uStack_390;
      puVar6 = puVar4;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar13);
  uVar11 = *(undefined8 *)(lVar12 + 8);
  _objc_retain(puVar13);
  func_0x00010c0f8500(uVar11);
  _objc_release(puVar13);
  _objc_release(puVar13);
  return;
}



/* Entry: 106caff0c; end: 106caffc3; -[SCRdcRepository purgeDataStore:completion:] */

void FUN_106caff0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106caffc4;
  puStack_40 = &UNK_11084f688;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,0,param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106caffc4; end: 106cb02a3;  */

void FUN_106caffc4(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_14c;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d1ff0);
  if (param_2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130);
  }
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_14c = 0;
  puVar2 = &uStack_130;
  func_0x00010054c81c(puVar2,&lStack_148,&uStack_14c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(puVar2);
  puVar11 = &uStack_190;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar10 = *plStack_180;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_180 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        puVar5 = PTR_PTR_1126b0438;
        uVar9 = *(undefined8 *)(lStack_188 + (long)puVar11 * 8);
        uVar4 = uVar9;
        func_0x00010c2923e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d5160(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126b0440;
        _objc_alloc(PTR_PTR_1126b0440);
        func_0x00010c021180();
        func_0x00010bf3c2a0(*(undefined8 *)(param_1 + 0x20));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d1ff8;
        FUN_106cb2a50(PTR_PTR_1126d1ff8,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar3 != puVar11);
      puVar11 = &uStack_190;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  lVar10 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(param_2);
    __Unwind_Resume(lVar10);
    _objc_retain(puVar11);
    puVar3 = puVar11;
    func_0x00010c2950a0();
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar8 = (undefined8 *)0x0;
    uVar1 = (uint)puVar3 & 0xff;
    if (uVar1 < 4) {
      if (uVar1 == 1) {
        func_0x00010c294f80(puVar11);
        func_0x00010c0df6e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
      }
      else if (uVar1 == 2) {
        puVar8 = puVar11;
        func_0x00010c294fc0(puVar11);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (uVar1 == 3) {
        func_0x00010c295040(puVar11);
        func_0x00010c0df7c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 4) {
        func_0x00010c2950c0(puVar11);
        func_0x00010c0df880(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
      }
      else if (uVar1 == 5) {
        func_0x00010c295020(puVar11);
        func_0x00010c0df740(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
      }
    }
    else if (uVar1 == 6) {
      func_0x00010c294fe0(puVar11);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
    }
    else if (uVar1 == 7) {
      puVar8 = puVar11;
      func_0x00010c295080(puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  return;
}



/* Entry: 106cb02a4; end: 106cb0427; -[SCRdcRepository _deserializeObject:] */

void FUN_106cb02a4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c2950a0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = (undefined *)0x0;
  uVar1 = (uint)puVar2 & 0xff;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      puVar2 = param_3;
      func_0x00010c294f80(param_3);
      func_0x00010c0df6e0(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
    }
    else if (uVar1 == 2) {
      puVar4 = param_3;
      func_0x00010c294fc0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar1 == 3) {
      puVar2 = param_3;
      func_0x00010c295040(param_3);
      func_0x00010c0df7c0(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      puVar2 = param_3;
      func_0x00010c2950c0(param_3);
      func_0x00010c0df880(puVar3,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
    }
    else if (uVar1 == 5) {
      func_0x00010c295020(param_3);
      func_0x00010c0df740(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
    }
  }
  else if (uVar1 == 6) {
    func_0x00010c294fe0(param_3);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
  }
  else if (uVar1 == 7) {
    puVar4 = param_3;
    func_0x00010c295080(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cb0428; end: 106cb0433; -[SCRdcRepository .cxx_destruct] */

void FUN_106cb0428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb0434; end: 106cb053f; -[SCUserSyncListHandler fetchUserSyncList] */

void FUN_106cb0434(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d2008);
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,lVar1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar2 = &uStack_70;
  func_0x00010054c81c(puVar2,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar1);
  puVar3 = puVar2;
  func_0x00010bf0a540(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cb0540; end: 106cb061b; -[SCUserSyncListHandler enqueueUsers:] */

void FUN_106cb0540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106cb061c;
  puStack_40 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb061c; end: 106cb07d3;  */

void FUN_106cb061c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        puVar2 = PTR_PTR_1126d2008;
        _objc_alloc();
        func_0x00010c05ac60();
        puVar3 = puVar2;
        FUN_106cb3df8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar5);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  func_0x00010c0f8500(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 106cb07d4; end: 106cb08af; -[SCUserSyncListHandler removeUser:] */

void FUN_106cb07d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106cb08b0;
  puStack_40 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb08b0; end: 106cb0bf3;  */

void FUN_106cb08b0(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_214;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  puVar8 = &uStack_260;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d2008);
  if (param_2 == 0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_2);
  }
  puVar2 = &uStack_181;
  FUN_106cb3724();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  ppuStack_1f8 = &PTR_DAT_110862760;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_110862700;
  pppuStack_140 = &ppuStack_1f8;
  uStack_130 = 0;
  uStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_200 = 0;
  uStack_214 = 0;
  puVar3 = &uStack_110;
  uStack_1c8 = uVar6;
  puStack_148 = puVar2;
  func_0x0001000e77a0(puVar3,&ppuStack_180,&puStack_210,&uStack_214);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_210 != (undefined8 *)0x0) {
    puStack_208 = puStack_210;
    __ZdlPv();
  }
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_SUB_110862700;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_210 = &uStack_138;
  func_0x000100105004(&puStack_210);
  plVar1 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_110862760;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_210 = &uStack_1b0;
  func_0x000100105004(&puStack_210);
  _objc_release(uStack_1c8);
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = *plStack_250;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_250 != lVar7) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR_PTR_1126d2010;
        FUN_106cb3d84(PTR_PTR_1126d2010,*(undefined8 *)(lStack_258 + (long)puVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      puVar8 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar8);
  uVar6 = *(undefined8 *)(lVar7 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar8);
  func_0x00010c0f8500(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar8);
  return;
}



/* Entry: 106cb0bf4; end: 106cb0cd3; -[SCUserSyncListHandler updateUser:attemptCount:] */

void FUN_106cb0bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106cb0cd4;
  puStack_48 = &UNK_1108b4c98;
  _objc_retain(param_3);
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb0cd4; end: 106cb0d8b;  */

void FUN_106cb0cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d2008;
  _objc_alloc(PTR_PTR_1126d2008);
  func_0x00010c05ac60();
  puVar2 = puVar1;
  FUN_106cb3df8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cb0d8c; end: 106cb0d97; -[SCUserSyncListHandler .cxx_destruct] */

void FUN_106cb0d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb0d98; end: 106cb0dc3; +[SCGrapheneRdcMetric deltaForceSync] */

void FUN_106cb0d98(void)

{
  _objc_alloc(PTR_PTR_1126d1fc0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb0dc4; end: 106cb0def; +[SCGrapheneRdcMetric getDevicePropertiesInvocation] */

void FUN_106cb0dc4(void)

{
  _objc_alloc(PTR_PTR_1126d1fc0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb0df0; end: 106cb0e1b; +[SCGrapheneRdcMetric getDevicePropertiesLocalData] */

void FUN_106cb0df0(void)

{
  _objc_alloc(PTR_PTR_1126d1fc0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb0e1c; end: 106cb0e47; +[SCGrapheneRdcMetric getDevicePropertiesFriendship] */

void FUN_106cb0e1c(void)

{
  _objc_alloc(PTR_PTR_1126d1fc0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb0e48; end: 106cb0e73; +[SCGrapheneRdcMetric maxRowsExceeded] */

void FUN_106cb0e48(void)

{
  _objc_alloc(PTR_PTR_1126d1fc0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cb0e74; end: 106cb0f13; -[SCGrapheneRdcMetric description] */

void FUN_106cb0e74(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e81db8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e81db8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f61f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106cb0f14; end: 106cb107f; -[SCGrapheneRegistry rdcGraphene] */

void FUN_106cb0f14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106cb0f9c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c7d18 != -1) {
    func_0x00010002a2fc(0x1136c7d18,&puStack_48);
  }
  uVar1 = uRam00000001136c7d10;
  _objc_retain(uRam00000001136c7d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cb1080; end: 106cb1113; +[SCDeviceProperty withBool:propertyType:becomesStaleAtMs:boolValue:] */

void FUN_106cb1080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0(0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb1114; end: 106cb11b7; +[SCDeviceProperty withData:propertyType:becomesStaleAtMs:dataValue:] */

void FUN_106cb1114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0(0,0);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb11b8; end: 106cb124b; +[SCDeviceProperty withInteger:propertyType:becomesStaleAtMs:intValue:] */

void FUN_106cb11b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0(0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb124c; end: 106cb12df; +[SCDeviceProperty withUnsignedInteger:propertyType:becomesStaleAtMs:uintValue:] */

void FUN_106cb124c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0(0,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb12e0; end: 106cb1373; +[SCDeviceProperty withFloat:propertyType:becomesStaleAtMs:floatValue:] */

void FUN_106cb12e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0(param_1,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb1374; end: 106cb1407; +[SCDeviceProperty withDouble:propertyType:becomesStaleAtMs:doubleValue:] */

void FUN_106cb1374(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0((float)param_1,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb1408; end: 106cb14ab; +[SCDeviceProperty withString:propertyType:becomesStaleAtMs:stringValue:] */

void FUN_106cb1408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1ff0;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05b8e0(0,0);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cb14ac; end: 106cb161b; -[SCDeviceProperty initWithUserId:propertyType:becomesStaleAtMs:valType:valBool:valInt:valUInt:valFloat:valDouble:valString:valData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106cb14ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126f6200;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bd98);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bd98) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bd9c) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bda0) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275bda4) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275bda8) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdac) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdb0) = param_11;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275bdb4) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdb8) = param_2;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdbc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdbc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdc0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdc0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106cb161c; end: 106cb163f; -[SCDeviceProperty copyWithZone:] */

undefined8 FUN_106cb161c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cb1640; end: 106cb175f; -[SCDeviceProperty hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106cb1640(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275bd98);
  func_0x00010bfde980();
  uStack_78 = *(undefined8 *)(param_1 + _DAT_11275bd9c);
  uStack_70 = *(undefined8 *)(param_1 + _DAT_11275bda0);
  lStack_68 = (long)*(char *)(param_1 + _DAT_11275bda4);
  uStack_60 = (ulong)*(byte *)(param_1 + _DAT_11275bda8);
  lVar6 = *(long *)(param_1 + _DAT_11275bdac);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uStack_50 = *(undefined8 *)(param_1 + _DAT_11275bdb0);
  uVar7 = (ulong)*(uint *)(param_1 + _DAT_11275bdb4) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = ~*(ulong *)(param_1 + _DAT_11275bdb8) + *(ulong *)(param_1 + _DAT_11275bdb8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275bdbc);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275bdc0);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106cb1914:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106cb1920;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(long *)((long)puVar4 + (long)_DAT_11275bd9c) == *(long *)(param_3 + _DAT_11275bd9c) &&
           (*(long *)((long)puVar4 + (long)_DAT_11275bda0) == *(long *)(param_3 + _DAT_11275bda0)))
          && (*(char *)((long)puVar4 + (long)_DAT_11275bda4) == param_3[_DAT_11275bda4])) &&
         ((*(char *)((long)puVar4 + (long)_DAT_11275bda8) == param_3[_DAT_11275bda8] &&
          (*(long *)((long)puVar4 + (long)_DAT_11275bdac) == *(long *)(param_3 + _DAT_11275bdac)))))
        )) && (*(long *)((long)puVar4 + (long)_DAT_11275bdb0) == *(long *)(param_3 + _DAT_11275bdb0)
              )) {
      fVar11 = ABS(*(float *)((long)puVar4 + (long)_DAT_11275bdb4) -
                   *(float *)(param_3 + _DAT_11275bdb4));
      fVar9 = ABS(*(float *)((long)puVar4 + (long)_DAT_11275bdb4) +
                  *(float *)(param_3 + _DAT_11275bdb4)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar9))) {
        bVar1 = fVar11 < fVar9;
      }
      if (bVar1) {
        dVar12 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275bdb8) -
                     *(double *)(param_3 + _DAT_11275bdb8));
        dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275bdb8) +
                     *(double *)(param_3 + _DAT_11275bdb8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
          bVar1 = dVar12 < dVar10;
        }
        if (((bVar1) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275bd98),
             lVar6 == *(long *)(param_3 + _DAT_11275bd98) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275bdbc),
            lVar6 == *(long *)(param_3 + _DAT_11275bdbc) || (func_0x00010c071ae0(), (int)lVar6 != 0)
            ))) {
          puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_11275bdc0);
          if (puVar8 != *(undefined1 **)(param_3 + _DAT_11275bdc0)) {
            func_0x00010c071ae0();
            goto LAB_106cb1920;
          }
          goto LAB_106cb1914;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_106cb1920:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 106cb1760; end: 106cb193b; -[SCDeviceProperty isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106cb1760(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cb1914:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cb1920;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((((uVar3 & 1) != 0) &&
        ((((*(long *)(param_1 + (long)_DAT_11275bd9c) == *(long *)(param_3 + (long)_DAT_11275bd9c)
           && (*(long *)(param_1 + (long)_DAT_11275bda0) ==
               *(long *)(param_3 + (long)_DAT_11275bda0))) &&
          (*(char *)(param_1 + (long)_DAT_11275bda4) == *(char *)(param_3 + (long)_DAT_11275bda4)))
         && ((*(char *)(param_1 + (long)_DAT_11275bda8) == *(char *)(param_3 + (long)_DAT_11275bda8)
             && (*(long *)(param_1 + (long)_DAT_11275bdac) ==
                 *(long *)(param_3 + (long)_DAT_11275bdac))))))) &&
       (*(long *)(param_1 + (long)_DAT_11275bdb0) == *(long *)(param_3 + (long)_DAT_11275bdb0))) {
      fVar5 = *(float *)(param_1 + (long)_DAT_11275bdb4);
      fVar7 = *(float *)(param_3 + (long)_DAT_11275bdb4);
      fVar9 = ABS(fVar5 - fVar7);
      fVar5 = ABS(fVar5 + fVar7) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar5))) {
        bVar1 = fVar9 < fVar5;
      }
      if (bVar1) {
        dVar6 = *(double *)(param_1 + (long)_DAT_11275bdb8);
        dVar8 = *(double *)(param_3 + (long)_DAT_11275bdb8);
        dVar10 = ABS(dVar6 - dVar8);
        dVar6 = ABS(dVar6 + dVar8) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar6))) {
          bVar1 = dVar10 < dVar6;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11275bd98),
             lVar4 == *(long *)(param_3 + (long)_DAT_11275bd98) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11275bdbc),
            lVar4 == *(long *)(param_3 + (long)_DAT_11275bdbc) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11275bdc0);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11275bdc0)) {
            func_0x00010c071ae0();
            goto LAB_106cb1920;
          }
          goto LAB_106cb1914;
        }
      }
    }
    lVar4 = 0;
  }
LAB_106cb1920:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106cb193c; end: 106cb194b; -[SCDeviceProperty userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb193c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bd98);
}



/* Entry: 106cb194c; end: 106cb195b; -[SCDeviceProperty propertyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb194c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bd9c);
}



/* Entry: 106cb195c; end: 106cb196b; -[SCDeviceProperty becomesStaleAtMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb195c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bda0);
}



/* Entry: 106cb196c; end: 106cb197b; -[SCDeviceProperty valType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106cb196c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11275bda4);
}



/* Entry: 106cb197c; end: 106cb198b; -[SCDeviceProperty valBool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106cb197c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275bda8);
}



/* Entry: 106cb198c; end: 106cb199b; -[SCDeviceProperty valInt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb198c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdac);
}



/* Entry: 106cb199c; end: 106cb19ab; -[SCDeviceProperty valUInt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb199c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdb0);
}



/* Entry: 106cb19ac; end: 106cb19bb; -[SCDeviceProperty valFloat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106cb19ac(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275bdb4);
}



/* Entry: 106cb19bc; end: 106cb19cb; -[SCDeviceProperty valDouble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb19bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdb8);
}



/* Entry: 106cb19cc; end: 106cb19db; -[SCDeviceProperty valString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb19cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdbc);
}



/* Entry: 106cb19dc; end: 106cb19eb; -[SCDeviceProperty valData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cb19dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bdc0);
}



/* Entry: 106cb19ec; end: 106cb1a3b; -[SCDeviceProperty .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cb19ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275bdc0,0);
  _objc_storeStrong(param_1 + _DAT_11275bdbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275bd98,0);
  return;
}



/* Entry: 106cb1a3c; end: 106cb1ad3; -[SCUserSync initWithUserId:attemptCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106cb1a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdc4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdc4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bdc8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cb1ad4; end: 106cb1af7; -[SCUserSync copyWithZone:] */

undefined8 FUN_106cb1ad4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


