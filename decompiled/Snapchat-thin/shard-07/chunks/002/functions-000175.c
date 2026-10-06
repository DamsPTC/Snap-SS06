/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105337498; end: 1053376c7;  */

ulong FUN_105337498(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf45ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_1053376c8(param_2,lVar4);
  lVar6 = param_3;
  func_0x00010c142600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_1053376c8(param_2,lVar6);
  lVar8 = param_3;
  func_0x00010bf46240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    lVar9 = lVar8;
    _objc_retainAutorelease(lVar8);
    func_0x00010bf25f00();
    lVar10 = lVar8;
    func_0x00010c08fa60(lVar8);
    uVar11 = param_2;
    func_0x0001001d1030(param_2,lVar9,lVar10);
  }
  _objc_release(lVar8);
  func_0x00010c08a720(param_3);
  uVar12 = param_1;
  func_0x00010c27d180(param_3);
  lVar9 = param_3;
  func_0x00010bf46100(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(uVar12,0,param_2,0xc);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x000100c3b024(param_2,0xe,lVar9,0);
  func_0x0001001ce220(param_2,8,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1053376c8; end: 1053377f7;  */

undefined8 FUN_1053376c8(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1053377a8;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1053377a8;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105337768;
    param_1 = 0;
  }
  else {
LAB_105337768:
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
LAB_1053377a8:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1053377f8; end: 105337803; +[SCCircumstanceEngineEtag table] */

char * FUN_1053377f8(void)

{
  return "circumstanceengine__etag";
}



/* Entry: 105337804; end: 10533796b; +[SCCircumstanceEngineEtag immutableObjectParse:bufferSize:] */

void FUN_105337804(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b7878;
  _objc_alloc(PTR_PTR_1126b7878);
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
    lVar5 = -lVar5;
    if (6 < uVar4) {
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
      if ((8 < uVar4) &&
         (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8), uVar9 = 0, uVar6 != 0)) {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      goto LAB_1053378ec;
    }
  }
  puVar8 = (undefined *)0x0;
  uVar9 = 0;
LAB_1053378ec:
  func_0x00010c0109c0(uVar9,puVar3,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10533796c; end: 10533798f; +[SCCircumstanceEngineEtag objectClassFunctionPointer] */

undefined1  [16] FUN_10533796c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105337988;
  auVar1._0_8_ = 0x105337980;
  return auVar1;
}



/* Entry: 105337990; end: 1053379f3;  */

void FUN_105337990(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b7878;
    _objc_alloc(PTR_PTR_1126b7878);
    func_0x00010c0109c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053379f4; end: 105337a23; -[SCCircumstanceEngineEtagChangeRequest .cxx_destruct] */

void FUN_1053379f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105337a24; end: 105337a2f; -[SCCircumstanceEngineEtagChangeRequest table] */

char * FUN_105337a24(void)

{
  return "circumstanceengine__etag";
}



/* Entry: 105337a30; end: 105337a77; -[SCCircumstanceEngineEtagChangeRequest createTableWithSQLite:] */

void FUN_105337a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd9659f,0x86,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105337a78; end: 105337dff; -[SCCircumstanceEngineEtagChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105337a78(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_105337990(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105337e00(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,"INSERT INTO circumstanceengine__etag (p, etagId) VALUES (?1, ?2)");
    if (lVar6 == 0) goto LAB_105337d9c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105337d9c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b7878);
    func_0x00010c21c9a0(puVar7);
LAB_105337d84:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM circumstanceengine__etag WHERE rowid=?1");
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
            _objc_opt_class(PTR_PTR_1126b7878);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105337da8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105337da8;
    }
    FUN_105337990(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105337e00(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE circumstanceengine__etag SET p=?1, etagId=?3 WHERE rowid=?2 LIMIT 1"
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
        _objc_opt_class(PTR_PTR_1126b7878);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105337d84;
      }
    }
LAB_105337d9c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105337da8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105337e00; end: 105337f3f;  */

ulong FUN_105337e00(undefined8 param_1,ulong param_2,undefined8 param_3)

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
  func_0x00010bf998e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_105337f40(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010bf998c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_105337f40(param_2,uVar6);
  func_0x00010c08a720(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,8);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105337f40; end: 10533806f;  */

undefined8 FUN_105337f40(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105338020;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105338020;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105337fe0;
    param_1 = 0;
  }
  else {
LAB_105337fe0:
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
LAB_105338020:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105338070; end: 10533814b;  */

void FUN_105338070(undefined8 *param_1,undefined8 param_2,int param_3,long param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 auStack_390 [3];
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [7];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  puVar4 = auStack_90;
  func_0x0001000e2ff0();
  uVar10 = *param_1;
  uStack_48 = extraout_x8;
  func_0x000105338760();
  func_0x0001053387a8();
  uVar2 = param_3 == 0;
  uVar6 = unaff_x23;
  if ((bool)uVar2) {
    uVar6 = unaff_x22;
  }
  func_0x00010002b838(unaff_x24 + 0x18,uVar6);
  func_0x00010533877c(auStack_90,auStack_78);
  func_0x0001000e30d0();
  (*extraout_x8_00)(uVar10,&UNK_11087bc50);
  func_0x000105338784();
  do {
    func_0x000105338744();
    func_0x00010533879c();
  } while (!(bool)uVar2);
  func_0x0001000e3134(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000105338784();
    puVar3 = auStack_60;
    lVar11 = -0x30;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      iVar8 = (int)puVar4;
      puVar3 = puVar3 + -3;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0);
    func_0x00010533873c();
    pcStack_98 = FUN_10533814c;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x0001000e2ff0();
    uStack_d8 = extraout_x8_01;
    plVar9 = (long *)*puVar3;
    func_0x000105338760();
    func_0x0001053387a8();
    uVar2 = iVar8 == 0;
    if ((bool)uVar2) {
      unaff_x23 = unaff_x22;
    }
    func_0x00010002b838(unaff_x24 + 0x18,unaff_x23);
    func_0x00010533877c(auStack_120,auStack_108);
    param_4 = param_4 / 1000000;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087bca0,auStack_120);
    func_0x000105338784();
    do {
      func_0x000105338744();
      func_0x00010533879c();
    } while (!(bool)uVar2);
    func_0x0001000e3134(uStack_d8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x000105338784();
      puVar4 = auStack_f0;
      lVar11 = -0x30;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
        iVar8 = (int)param_4;
        puVar4 = puVar4 + -0x18;
        lVar11 = lVar11 + 0x18;
      } while (lVar11 != 0);
      func_0x00010533873c();
      pcStack_128 = FUN_105338234;
      ppuStack_130 = &puStack_a0;
      func_0x0001000e2ff0();
      uStack_178 = extraout_x8_02;
      func_0x0001000e3068();
      func_0x000105338720();
      pcVar1 = "true";
      if (iVar8 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_1b0,pcVar1);
      uVar2 = (int)param_5 == 0;
      pcVar1 = "true";
      if ((bool)uVar2) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_198,pcVar1);
      uVar6 = 4;
      func_0x0001000e3098(auStack_1f8,auStack_1e0);
      func_0x0001000e30d0();
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      do {
        func_0x000105338744();
        func_0x00010533879c();
      } while (!(bool)uVar2);
      func_0x0001000e3134(uStack_178);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x000105338714();
      puVar4 = auStack_198;
      lVar11 = -0x60;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
        puVar4 = puVar4 + -0x18;
        lVar11 = lVar11 + 0x18;
      } while (lVar11 != 0);
      func_0x00010533873c();
      uStack_218 = 0x48;
      pcStack_208 = FUN_105338350;
      uVar10 = uVar6;
      lStack_220 = lVar11;
      pppuStack_210 = &ppuStack_130;
      func_0x0001000e2ff0();
      uStack_228 = extraout_x8_03;
      func_0x0001000e3068();
      func_0x0001000e3088();
      func_0x0001000e30d0();
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      func_0x0001000e312c();
      func_0x0001000e3134(uStack_228);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x000105338714();
        func_0x0001000e312c();
        func_0x00010533873c();
        pcStack_268 = FUN_1053383b8;
        uVar7 = uVar10;
        lStack_280 = lVar11;
        uStack_278 = uVar6;
        pppuStack_270 = &pppuStack_210;
        func_0x0001000e2ff0();
        uStack_288 = extraout_x8_04;
        func_0x0001000e3068();
        func_0x0001000e3088();
        func_0x0001000e30d0();
        func_0x0001000e30dc();
        func_0x0001000e30ec();
        func_0x0001000e312c();
        func_0x0001000e3134(uStack_288);
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x000105338714();
          func_0x0001000e312c();
          func_0x00010533873c();
          pcStack_2c8 = FUN_105338420;
          uStack_2f0 = param_5;
          puStack_2e8 = auStack_198;
          lStack_2e0 = lVar11;
          uStack_2d8 = uVar10;
          pppuStack_2d0 = &pppuStack_270;
          func_0x0001000e2ff0();
          uStack_2f8 = extraout_x8_05;
          func_0x0001000e3068();
          func_0x000105338720();
          func_0x00010533877c(auStack_348,auStack_330);
          func_0x0001000e30d0();
          puVar5 = &UNK_11087bde0;
          func_0x0001000e30dc();
          func_0x0001000e30ec();
          do {
            func_0x000105338744();
            func_0x00010533879c();
          } while (!(bool)uVar2);
          func_0x0001000e3134(uStack_2f8);
          if ((bool)uVar2) {
            return;
          }
          ___stack_chk_fail();
          func_0x000105338714();
          lVar11 = 0x18;
          do {
            puVar3 = (undefined8 *)((long)auStack_330 + lVar11);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            iVar8 = (int)puVar5;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != -0x18);
          func_0x00010533873c();
          uStack_368 = 0x18;
          pcStack_358 = FUN_1053384c0;
          lStack_370 = lVar11;
          pppuStack_360 = &pppuStack_2d0;
          func_0x0001000e2ff0();
          uVar6 = *puVar3;
          uVar2 = iVar8 == 0;
          pcVar1 = "true";
          if ((bool)uVar2) {
            pcVar1 = "false";
          }
          puVar3 = auStack_390;
          uStack_378 = extraout_x8_06;
          func_0x00010002b838(puVar3,pcVar1);
          func_0x0001000e3088();
          func_0x0001000e30d0();
          puVar5 = &UNK_11087be30;
          func_0x0001000e30dc();
          func_0x0001000e30ec();
          func_0x0001000e312c();
          func_0x0001000e3134(uStack_378);
          if (!(bool)uVar2) {
            ___stack_chk_fail();
            func_0x000105338714();
            func_0x0001000e312c();
            func_0x00010533873c();
            pcStack_3b8 = FUN_105338550;
            uStack_3e8 = 0;
            uStack_3e0 = 0;
            uStack_3d8 = 0;
            uStack_3d0 = uVar6;
            uStack_3c8 = uVar7;
            pppuStack_3c0 = &pppuStack_360;
            (**(code **)(*(long *)*puVar3 + 0x18))
                      ((long *)*puVar3,&UNK_11087be80,&uStack_3e8,puVar5);
            func_0x0001000e30ec();
            return;
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10533814c; end: 105338233;  */

void FUN_10533814c(undefined8 *param_1,undefined8 param_2,int param_3,long param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long *plVar10;
  long lVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 auStack_300 [3];
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined1 auStack_2b8 [24];
  undefined8 auStack_2a0 [7];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x0001000e2ff0();
  plVar10 = (long *)*param_1;
  uStack_48 = extraout_x8;
  func_0x000105338760();
  func_0x0001053387a8();
  uVar2 = param_3 == 0;
  if ((bool)uVar2) {
    unaff_x23 = unaff_x22;
  }
  func_0x00010002b838(unaff_x24 + 0x18,unaff_x23);
  func_0x00010533877c(auStack_90,auStack_78);
  param_4 = param_4 / 1000000;
  (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087bca0,auStack_90);
  func_0x000105338784();
  do {
    func_0x000105338744();
    func_0x00010533879c();
  } while (!(bool)uVar2);
  func_0x0001000e3134(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105338784();
  puVar3 = auStack_60;
  lVar11 = -0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    iVar9 = (int)param_4;
    puVar3 = puVar3 + -0x18;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0);
  func_0x00010533873c();
  pcStack_98 = FUN_105338234;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001000e2ff0();
  uStack_e8 = extraout_x8_00;
  func_0x0001000e3068();
  func_0x000105338720();
  pcVar1 = "true";
  if (iVar9 == 0) {
    pcVar1 = "false";
  }
  func_0x00010002b838(auStack_120,pcVar1);
  uVar2 = (int)param_5 == 0;
  pcVar1 = "true";
  if ((bool)uVar2) {
    pcVar1 = "false";
  }
  func_0x00010002b838(auStack_108,pcVar1);
  uVar6 = 4;
  func_0x0001000e3098(auStack_168,auStack_150);
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  do {
    func_0x000105338744();
    func_0x00010533879c();
  } while (!(bool)uVar2);
  func_0x0001000e3134(uStack_e8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105338714();
  puVar3 = auStack_108;
  lVar11 = -0x60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0);
  func_0x00010533873c();
  uStack_188 = 0x48;
  pcStack_178 = FUN_105338350;
  uVar7 = uVar6;
  lStack_190 = lVar11;
  ppuStack_180 = &puStack_a0;
  func_0x0001000e2ff0();
  uStack_198 = extraout_x8_01;
  func_0x0001000e3068();
  func_0x0001000e3088();
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_198);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000105338714();
    func_0x0001000e312c();
    func_0x00010533873c();
    pcStack_1d8 = FUN_1053383b8;
    uVar8 = uVar7;
    lStack_1f0 = lVar11;
    uStack_1e8 = uVar6;
    pppuStack_1e0 = &ppuStack_180;
    func_0x0001000e2ff0();
    uStack_1f8 = extraout_x8_02;
    func_0x0001000e3068();
    func_0x0001000e3088();
    func_0x0001000e30d0();
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    func_0x0001000e312c();
    func_0x0001000e3134(uStack_1f8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x000105338714();
      func_0x0001000e312c();
      func_0x00010533873c();
      pcStack_238 = FUN_105338420;
      uStack_260 = param_5;
      puStack_258 = auStack_108;
      lStack_250 = lVar11;
      uStack_248 = uVar7;
      pppuStack_240 = &pppuStack_1e0;
      func_0x0001000e2ff0();
      uStack_268 = extraout_x8_03;
      func_0x0001000e3068();
      func_0x000105338720();
      func_0x00010533877c(auStack_2b8,auStack_2a0);
      func_0x0001000e30d0();
      puVar5 = &UNK_11087bde0;
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      do {
        func_0x000105338744();
        func_0x00010533879c();
      } while (!(bool)uVar2);
      func_0x0001000e3134(uStack_268);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x000105338714();
      lVar11 = 0x18;
      do {
        puVar4 = (undefined8 *)((long)auStack_2a0 + lVar11);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        iVar9 = (int)puVar5;
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x18);
      func_0x00010533873c();
      uStack_2d8 = 0x18;
      pcStack_2c8 = FUN_1053384c0;
      lStack_2e0 = lVar11;
      pppuStack_2d0 = &pppuStack_240;
      func_0x0001000e2ff0();
      uVar6 = *puVar4;
      uVar2 = iVar9 == 0;
      pcVar1 = "true";
      if ((bool)uVar2) {
        pcVar1 = "false";
      }
      puVar4 = auStack_300;
      uStack_2e8 = extraout_x8_04;
      func_0x00010002b838(puVar4,pcVar1);
      func_0x0001000e3088();
      func_0x0001000e30d0();
      puVar5 = &UNK_11087be30;
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      func_0x0001000e312c();
      func_0x0001000e3134(uStack_2e8);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x000105338714();
        func_0x0001000e312c();
        func_0x00010533873c();
        pcStack_328 = FUN_105338550;
        uStack_358 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        uStack_340 = uVar6;
        uStack_338 = uVar8;
        pppuStack_330 = &pppuStack_2d0;
        (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,&UNK_11087be80,&uStack_358,puVar5);
        func_0x0001000e30ec();
        return;
      }
    }
  }
  return;
}



/* Entry: 105338234; end: 10533834f;  */

void FUN_105338234(void)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w3;
  undefined8 in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar10;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 auStack_270 [3];
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [7];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001000e2ff0();
  uStack_58 = extraout_x8;
  func_0x0001000e3068();
  func_0x000105338720();
  pcVar1 = "true";
  if (in_w3 == 0) {
    pcVar1 = "false";
  }
  func_0x00010002b838(auStack_90,pcVar1);
  uVar2 = (int)in_x4 == 0;
  pcVar1 = "true";
  if ((bool)uVar2) {
    pcVar1 = "false";
  }
  func_0x00010002b838(auStack_78,pcVar1);
  uVar7 = 4;
  func_0x0001000e3098(auStack_d8,auStack_c0);
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  do {
    func_0x000105338744();
    func_0x00010533879c();
  } while (!(bool)uVar2);
  func_0x0001000e3134(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105338714();
  puVar3 = auStack_78;
  lVar10 = -0x60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0);
  func_0x00010533873c();
  uStack_f8 = 0x48;
  pcStack_e8 = FUN_105338350;
  uVar8 = uVar7;
  lStack_100 = lVar10;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x0001000e2ff0();
  uStack_108 = extraout_x8_00;
  func_0x0001000e3068();
  func_0x0001000e3088();
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_108);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000105338714();
    func_0x0001000e312c();
    func_0x00010533873c();
    pcStack_148 = FUN_1053383b8;
    uVar9 = uVar8;
    lStack_160 = lVar10;
    uStack_158 = uVar7;
    ppuStack_150 = &puStack_f0;
    func_0x0001000e2ff0();
    uStack_168 = extraout_x8_01;
    func_0x0001000e3068();
    func_0x0001000e3088();
    func_0x0001000e30d0();
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    func_0x0001000e312c();
    func_0x0001000e3134(uStack_168);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x000105338714();
      func_0x0001000e312c();
      func_0x00010533873c();
      pcStack_1a8 = FUN_105338420;
      uStack_1d0 = in_x4;
      puStack_1c8 = auStack_78;
      lStack_1c0 = lVar10;
      uStack_1b8 = uVar8;
      pppuStack_1b0 = &ppuStack_150;
      func_0x0001000e2ff0();
      uStack_1d8 = extraout_x8_02;
      func_0x0001000e3068();
      func_0x000105338720();
      func_0x00010533877c(auStack_228,auStack_210);
      func_0x0001000e30d0();
      puVar6 = &UNK_11087bde0;
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      do {
        func_0x000105338744();
        func_0x00010533879c();
      } while (!(bool)uVar2);
      func_0x0001000e3134(uStack_1d8);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x000105338714();
      lVar10 = 0x18;
      do {
        puVar4 = (undefined8 *)((long)auStack_210 + lVar10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        iVar5 = (int)puVar6;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x18);
      func_0x00010533873c();
      uStack_248 = 0x18;
      pcStack_238 = FUN_1053384c0;
      lStack_250 = lVar10;
      pppuStack_240 = &pppuStack_1b0;
      func_0x0001000e2ff0();
      uVar7 = *puVar4;
      uVar2 = iVar5 == 0;
      pcVar1 = "true";
      if ((bool)uVar2) {
        pcVar1 = "false";
      }
      puVar4 = auStack_270;
      uStack_258 = extraout_x8_03;
      func_0x00010002b838(puVar4,pcVar1);
      func_0x0001000e3088();
      func_0x0001000e30d0();
      puVar6 = &UNK_11087be30;
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      func_0x0001000e312c();
      func_0x0001000e3134(uStack_258);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x000105338714();
        func_0x0001000e312c();
        func_0x00010533873c();
        pcStack_298 = FUN_105338550;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b0 = uVar7;
        uStack_2a8 = uVar9;
        pppuStack_2a0 = &pppuStack_240;
        (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,&UNK_11087be80,&uStack_2c8,puVar6);
        func_0x0001000e30ec();
        return;
      }
    }
  }
  return;
}



/* Entry: 105338350; end: 1053383b7;  */

void FUN_105338350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 auStack_190 [3];
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [7];
  undefined8 uStack_f8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_28;
  
  func_0x0001000e2ff0();
  uStack_28 = extraout_x8;
  func_0x0001000e3068();
  func_0x0001000e3088();
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_105338714();
    func_0x0001000e312c();
    func_0x00010533873c();
    pcStack_68 = FUN_1053383b8;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x0001000e2ff0();
    uStack_88 = extraout_x8_00;
    func_0x0001000e3068();
    func_0x0001000e3088();
    func_0x0001000e30d0();
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    func_0x0001000e312c();
    func_0x0001000e3134(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_105338714();
      func_0x0001000e312c();
      func_0x00010533873c();
      pcStack_c8 = FUN_105338420;
      ppuStack_d0 = &puStack_70;
      func_0x0001000e2ff0();
      uStack_f8 = extraout_x8_01;
      func_0x0001000e3068();
      func_0x000105338720();
      func_0x00010533877c(auStack_148,auStack_130);
      func_0x0001000e30d0();
      puVar5 = &UNK_11087bde0;
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      do {
        func_0x000105338744();
        func_0x00010533879c();
      } while (!(bool)in_ZR);
      func_0x0001000e3134(uStack_f8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      FUN_105338714();
      lVar6 = 0x18;
      do {
        puVar3 = (undefined8 *)((long)auStack_130 + lVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        iVar4 = (int)puVar5;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x00010533873c();
      uStack_168 = 0x18;
      pcStack_158 = FUN_1053384c0;
      lStack_170 = lVar6;
      pppuStack_160 = &ppuStack_d0;
      func_0x0001000e2ff0();
      uVar7 = *puVar3;
      uVar2 = iVar4 == 0;
      pcVar1 = "true";
      if ((bool)uVar2) {
        pcVar1 = "false";
      }
      puVar3 = auStack_190;
      uStack_178 = extraout_x8_02;
      func_0x00010002b838(puVar3,pcVar1);
      func_0x0001000e3088();
      func_0x0001000e30d0();
      puVar5 = &UNK_11087be30;
      func_0x0001000e30dc();
      func_0x0001000e30ec();
      func_0x0001000e312c();
      func_0x0001000e3134(uStack_178);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        FUN_105338714();
        func_0x0001000e312c();
        func_0x00010533873c();
        pcStack_1b8 = FUN_105338550;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = uVar7;
        uStack_1c8 = param_3;
        pppuStack_1c0 = &pppuStack_160;
        (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,&UNK_11087be80,&uStack_1e8,puVar5);
        func_0x0001000e30ec();
        return;
      }
    }
  }
  return;
}



/* Entry: 1053383b8; end: 10533841f;  */

void FUN_1053383b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined8 auStack_130 [3];
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [24];
  undefined8 auStack_d0 [7];
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_28;
  
  func_0x0001000e2ff0();
  uStack_28 = extraout_x8;
  func_0x0001000e3068();
  func_0x0001000e3088();
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_105338714();
    func_0x0001000e312c();
    func_0x00010533873c();
    pcStack_68 = FUN_105338420;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x0001000e2ff0();
    uStack_98 = extraout_x8_00;
    func_0x0001000e3068();
    func_0x000105338720();
    func_0x00010533877c(auStack_e8,auStack_d0);
    func_0x0001000e30d0();
    puVar5 = &UNK_11087bde0;
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    do {
      func_0x000105338744();
      func_0x00010533879c();
    } while (!(bool)in_ZR);
    func_0x0001000e3134(uStack_98);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    FUN_105338714();
    lVar6 = 0x18;
    do {
      puVar3 = (undefined8 *)((long)auStack_d0 + lVar6);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      iVar4 = (int)puVar5;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x18);
    func_0x00010533873c();
    uStack_108 = 0x18;
    pcStack_f8 = FUN_1053384c0;
    lStack_110 = lVar6;
    ppuStack_100 = &puStack_70;
    func_0x0001000e2ff0();
    uVar7 = *puVar3;
    uVar2 = iVar4 == 0;
    pcVar1 = "true";
    if ((bool)uVar2) {
      pcVar1 = "false";
    }
    puVar3 = auStack_130;
    uStack_118 = extraout_x8_01;
    func_0x00010002b838(puVar3,pcVar1);
    func_0x0001000e3088();
    func_0x0001000e30d0();
    puVar5 = &UNK_11087be30;
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    func_0x0001000e312c();
    func_0x0001000e3134(uStack_118);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      FUN_105338714();
      func_0x0001000e312c();
      func_0x00010533873c();
      pcStack_158 = FUN_105338550;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = uVar7;
      uStack_168 = param_3;
      pppuStack_160 = &ppuStack_100;
      (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,&UNK_11087be80,&uStack_188,puVar5);
      func_0x0001000e30ec();
      return;
    }
  }
  return;
}



/* Entry: 105338420; end: 1053384bf;  */

void FUN_105338420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 auStack_d0 [3];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [7];
  undefined8 uStack_38;
  
  func_0x0001000e2ff0();
  uStack_38 = extraout_x8;
  func_0x0001000e3068();
  func_0x000105338720();
  func_0x00010533877c(auStack_88,auStack_70);
  func_0x0001000e30d0();
  puVar5 = &UNK_11087bde0;
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  do {
    func_0x000105338744();
    func_0x00010533879c();
  } while (!(bool)in_ZR);
  func_0x0001000e3134(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105338714();
  lVar6 = 0x18;
  do {
    puVar3 = (undefined8 *)((long)auStack_70 + lVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    iVar4 = (int)puVar5;
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x18);
  func_0x00010533873c();
  uStack_a8 = 0x18;
  pcStack_98 = FUN_1053384c0;
  lStack_b0 = lVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001000e2ff0();
  uVar7 = *puVar3;
  uVar2 = iVar4 == 0;
  pcVar1 = "true";
  if ((bool)uVar2) {
    pcVar1 = "false";
  }
  puVar3 = auStack_d0;
  uStack_b8 = extraout_x8_00;
  func_0x00010002b838(puVar3,pcVar1);
  func_0x0001000e3088();
  func_0x0001000e30d0();
  puVar5 = &UNK_11087be30;
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_b8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105338714();
  func_0x0001000e312c();
  func_0x00010533873c();
  pcStack_f8 = FUN_105338550;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = uVar7;
  uStack_108 = param_3;
  ppuStack_100 = &puStack_a0;
  (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,&UNK_11087be80,&uStack_128,puVar5);
  func_0x0001000e30ec();
  return;
}



/* Entry: 1053384c0; end: 10533854f;  */

void FUN_1053384c0(undefined8 *param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  func_0x0001000e2ff0();
  uVar5 = *param_1;
  uVar2 = param_2 == 0;
  pcVar1 = "true";
  if ((bool)uVar2) {
    pcVar1 = "false";
  }
  puVar3 = auStack_40;
  uStack_28 = extraout_x8;
  func_0x00010002b838(puVar3,pcVar1);
  func_0x0001000e3088();
  func_0x0001000e30d0();
  puVar4 = &UNK_11087be30;
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_105338714();
  func_0x0001000e312c();
  func_0x00010533873c();
  pcStack_68 = FUN_105338550;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = uVar5;
  uStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,&UNK_11087be80,&uStack_98,puVar4);
  func_0x0001000e30ec();
  return;
}



/* Entry: 105338550; end: 1053385a3;  */

void FUN_105338550(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,&UNK_11087be80,&uStack_38,param_2);
  func_0x0001000e30ec();
  return;
}



/* Entry: 1053385a4; end: 10533860b;  */

undefined1 * FUN_1053385a4(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar3;
  undefined1 *puStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [48];
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_28;
  
  func_0x0001000e2ff0();
  uStack_28 = extraout_x8;
  func_0x0001000e3068();
  func_0x0001000e3088();
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_105338714();
    func_0x0001000e312c();
    func_0x00010533873c();
    pcStack_68 = FUN_10533860c;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x0001000e2ff0();
    uStack_98 = extraout_x8_00;
    func_0x0001000e3068();
    func_0x000105338720();
    puVar2 = auStack_e8;
    func_0x00010533877c(puVar2,auStack_d0);
    func_0x0001000e30d0();
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    do {
      func_0x000105338744();
      func_0x00010533879c();
    } while (!(bool)in_ZR);
    func_0x0001000e3134(uStack_98);
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    FUN_105338714();
    lVar3 = 0x18;
    do {
      param_1 = auStack_d0 + lVar3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      lVar3 = lVar3 + -0x18;
      uVar1 = lVar3 == -0x18;
    } while (!(bool)uVar1);
    func_0x00010533873c();
    uStack_108 = 0x18;
    pcStack_f8 = FUN_1053386ac;
    lStack_110 = lVar3;
    ppuStack_100 = &puStack_70;
    func_0x0001000e2ff0();
    uStack_118 = extraout_x8_01;
    func_0x0001000e3068();
    func_0x0001000e3088();
    func_0x0001000e30d0();
    func_0x0001000e30dc();
    func_0x0001000e30ec();
    func_0x0001000e312c();
    func_0x0001000e3134(uStack_118);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      FUN_105338714();
      func_0x0001000e312c();
      func_0x00010533873c();
      pcStack_158 = FUN_105338714;
      puStack_178 = auStack_148;
      lStack_170 = lVar3;
      puStack_168 = param_1;
      pppuStack_160 = &ppuStack_100;
      func_0x00010007e5dc(&puStack_178);
      return auStack_148;
    }
  }
  return param_1;
}



/* Entry: 10533860c; end: 1053386ab;  */

/* WARNING: Possible PIC construction at 0x000105338680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105338700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105338684) */
/* WARNING: Removing unreachable block (ram,0x00010533868c) */
/* WARNING: Removing unreachable block (ram,0x000105338694) */
/* WARNING: Removing unreachable block (ram,0x0001053386a8) */
/* WARNING: Removing unreachable block (ram,0x0001053386fc) */
/* WARNING: Removing unreachable block (ram,0x0001053386f4) */
/* WARNING: Removing unreachable block (ram,0x0001000e3148) */
/* WARNING: Removing unreachable block (ram,0x000105338704) */
/* WARNING: Removing unreachable block (ram,0x00010533870c) */

undefined1 * FUN_10533860c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001000e2ff0();
  uStack_38 = extraout_x8;
  func_0x0001000e3068();
  func_0x000105338720();
  puVar1 = auStack_88;
  func_0x00010533877c(puVar1,auStack_70);
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  do {
    func_0x000105338744();
    func_0x00010533879c();
  } while (!(bool)in_ZR);
  func_0x0001000e3134(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  uStack_98 = 0x105338684;
  puStack_b8 = auStack_88;
  puStack_b0 = auStack_70;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010007e5dc(&puStack_b8);
  return auStack_88;
}



/* Entry: 1053386ac; end: 105338713;  */

undefined1 * FUN_1053386ac(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 *puStack_88;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x0001000e2ff0();
  uStack_28 = extraout_x8;
  func_0x0001000e3068();
  func_0x0001000e3088();
  func_0x0001000e30d0();
  func_0x0001000e30dc();
  func_0x0001000e30ec();
  func_0x0001000e312c();
  func_0x0001000e3134(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_105338714();
  func_0x0001000e312c();
  func_0x00010533873c();
  puStack_88 = auStack_58;
  func_0x00010007e5dc(&puStack_88);
  return auStack_58;
}



/* Entry: 105338714; end: 1053387e3;  */

undefined1 * FUN_105338714(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000008;
  func_0x00010007e5dc(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 1053387e4; end: 10533885f;  */

undefined8 * FUN_1053387e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c140;
  _pthread_rwlock_destroy(param_1 + 0xd);
  __ZNSt3__15mutexD1Ev(param_1 + 0x35);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2d);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2a);
  func_0x0001000e2fc4(param_1 + 0x28);
  func_0x0001000d04cc(param_1 + 0x26);
  func_0x0001000e315c(param_1 + 10);
  FUN_1053362ac(param_1 + 8);
  FUN_10533b344(param_1 + 6);
  func_0x0001000e12bc();
  func_0x0001000e31a4(param_1 + 1);
  return param_1;
}



/* Entry: 105338860; end: 105338863;  */

undefined8 * FUN_105338860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c140;
  _pthread_rwlock_destroy(param_1 + 0xd);
  __ZNSt3__15mutexD1Ev(param_1 + 0x35);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2d);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2a);
  func_0x0001000e2fc4(param_1 + 0x28);
  func_0x0001000d04cc(param_1 + 0x26);
  func_0x0001000e315c(param_1 + 10);
  FUN_1053362ac(param_1 + 8);
  FUN_10533b344(param_1 + 6);
  func_0x0001000e12bc();
  func_0x0001000e31a4(param_1 + 1);
  return param_1;
}



/* Entry: 105338864; end: 105338877;  */

void FUN_105338864(void)

{
  FUN_1053387e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105338878; end: 105338947;  */

void FUN_105338878(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 auStack_58 [3];
  
  FUN_10533b44c(auStack_58);
  FUN_105338948(param_1,auStack_58[0]);
  __ZNSt3__15mutex4lockEv(param_2 + 0x168);
  lVar1 = param_2;
  FUN_10533898c(param_2,param_3,param_4,0);
  if ((int)lVar1 != 0) {
    FUN_105338c58(param_2);
  }
  FUN_105338c84(auStack_58,lVar1);
  func_0x00010533bd40();
  func_0x0001005f95d0(auStack_58);
  return;
}



/* Entry: 105338948; end: 10533898b;  */

void FUN_105338948(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_18;
  
  lStack_18 = param_2;
  if (param_2 == 0) {
    lStack_18 = 0;
  }
  else {
    do {
      func_0x00010533bd68();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_18;
  lStack_18 = 0;
  func_0x00010054ebfc(&lStack_18);
  return;
}



/* Entry: 10533898c; end: 105338c57;  */

undefined8 FUN_10533898c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_140 [48];
  long alStack_110 [2];
  long lStack_100;
  long lStack_f0;
  long lStack_e0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long alStack_90 [5];
  undefined1 auStack_68 [24];
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar2 = param_1;
  FUN_105338d0c(param_1,param_3);
  uVar3 = param_2;
  FUN_105345a4c(param_2,1,0);
  if ((uVar3 & 1) == 0) {
    func_0x00010002b838(auStack_68,"InvalidFormat");
    func_0x00010533bc74();
    func_0x00010533bbfc();
    func_0x00010533bc10();
    func_0x0001000e3154();
    return 3;
  }
  if (*(long *)(param_2 + 0x38) == *(long *)(param_2 + 0x30)) {
    return 3;
  }
  FUN_105338d64(alStack_90,param_1);
  if ((alStack_90[0] != 0) && (*(long *)(alStack_90[0] + 0x18) != 0)) {
    lVar4 = (long)*(char *)(alStack_90[0] + 0x17);
    if (lVar4 < 0) {
      lVar4 = *(long *)(alStack_90[0] + 8);
    }
    if (lVar4 != 0) {
      FUN_105342194(alStack_110,param_1,param_2);
      if ((((alStack_110[0] == 0) || (lStack_100 == 0)) || (lStack_f0 == 0)) ||
         ((lStack_e0 == 0 || (*(long *)(alStack_110[0] + 0x88) == 0)))) {
        func_0x00010533bcb4();
        func_0x00010533bdbc();
        func_0x00010002b838(auStack_140,"fileDataCreation");
        func_0x00010533bbfc();
        func_0x00010533bcac();
        func_0x00010533bcd0();
LAB_105338b44:
        uVar5 = 1;
      }
      else {
        FUN_105338edc(*(undefined8 *)(alStack_90[0] + 0x18),alStack_110);
        if ((int)lVar2 == 0) {
          FUN_105339054(param_1);
          lVar2 = param_1;
          FUN_105339098(param_1,alStack_90,alStack_110[0] + 0x70,1);
          if ((int)lVar2 == 0) goto LAB_105338b44;
          uVar5 = *(undefined8 *)(param_1 + 8);
          __ZNSt3__16chrono12steady_clock3nowEv();
          FUN_10533814c(uVar5,1,0,lVar2 - lVar1);
          func_0x00010533bddc(*(undefined8 *)(param_1 + 8),1);
          FUN_105344020(param_1,alStack_110[0] + 0x70,param_4);
        }
        else {
          lVar2 = param_1;
          FUN_105338f50(param_1,alStack_90,1,lVar1);
          if ((int)lVar2 == 0) goto LAB_105338b44;
          FUN_1053441cc(param_1,alStack_110[0] + 0x70,param_4);
        }
        uVar5 = 0;
      }
      FUN_10533ac5c(alStack_110);
      goto LAB_105338b50;
    }
  }
  func_0x00010533bcb4();
  func_0x00010002b838(auStack_a8);
  func_0x00010002b838(auStack_c0,"tempFileCreation");
  func_0x00010533bbfc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  uVar5 = 1;
LAB_105338b50:
  FUN_10533b4d8(alStack_90);
  return uVar5;
}



/* Entry: 105338c58; end: 105338c83;  */

void FUN_105338c58(long *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  func_0x00010533bdf0();
  (**(code **)(*(long *)param_1[10] + 0x20))((long *)param_1[10],param_1 + 0x2a);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x35);
  return;
}



/* Entry: 105338c84; end: 105338d0b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_105338c84(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_38;
  
  plVar6 = (long *)(param_1 + 8);
  lVar7 = *plVar6;
  do {
    uStack_38 = 0;
    lVar4 = lVar7 + 0x10;
    func_0x0001005ef680(lVar4,&uStack_38,1,2);
    if ((int)lVar4 != 0) {
      *(undefined4 *)(lVar7 + 0x98) = param_2;
      *(undefined1 *)(lVar7 + 0x9c) = 1;
      *(undefined8 *)(lVar7 + 0x10) = 2;
      func_0x0001005fb9fc(lVar7,plVar6);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 105338d0c; end: 105338d63;  */

bool FUN_105338d0c(long param_1,int param_2)

{
  bool bVar1;
  long lStack_28;
  
  if (param_2 == 1) {
    lStack_28 = param_1 + 0x68;
    _pthread_rwlock_rdlock();
    bVar1 = *(long *)(param_1 + 0x140) != 0;
    func_0x000100107b84(&lStack_28);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 105338d64; end: 105338edb;  */

void FUN_105338d64(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000da72c();
  func_0x0001000cbe88(&lStack_60,unaff_x20 + 0x18,&UNK_10dd978e0);
  func_0x00010048a6c8(&uStack_a0,&lStack_60,&DAT_10f62a9de);
  *(int *)(unaff_x20 + 0x60) = *(int *)(unaff_x20 + 0x60) + 1;
  __ZNSt3__19to_stringEj(auStack_78);
  FUN_10533a9c0(&uStack_48,&uStack_a0,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x00010533bcac();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_60);
  (**(code **)(**(long **)(unaff_x20 + 0x50) + 0x38))
            (&lStack_60,*(long **)(unaff_x20 + 0x50),&uStack_48);
  uVar3 = uStack_38;
  uVar2 = uStack_58;
  lVar1 = lStack_60;
  if (lStack_60 == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    uStack_98 = uStack_40;
    uStack_a0 = uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_90 = uVar3;
    lStack_88 = lStack_60;
    uStack_80 = uStack_58;
    lStack_60 = 0;
    uStack_58 = 0;
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_11087c478;
    puVar4[4] = uStack_98;
    puVar4[3] = uStack_a0;
    func_0x000100291f3c(&uStack_a0);
    puVar4[5] = extraout_x10;
    puVar4[6] = lVar1;
    puVar4[7] = uVar2;
    *(undefined8 *)(extraout_x8 + 0x18) = 0;
    *(undefined8 *)(extraout_x8 + 0x20) = 0;
    *unaff_x19 = extraout_x9;
    unaff_x19[1] = puVar4;
    FUN_10533b24c(&uStack_a0);
  }
  func_0x00010533b6a0(&lStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 105338edc; end: 105338f4f;  */

void FUN_105338edc(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001000da72c();
  lVar1 = **(long **)(param_2 + 0x20);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
            (param_1 + 0x10,lVar1,(*(long **)(param_2 + 0x20))[1] - lVar1);
  puVar3 = (undefined8 *)unaff_x20[8];
  if (puVar3 != (undefined8 *)0x0) {
    if (0 < (int)puVar3[1] - (int)*puVar3) {
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(unaff_x19 + 2);
    }
  }
  func_0x00010533bc3c(unaff_x20[2]);
  func_0x00010533bc3c(*unaff_x20);
  func_0x00010533bc3c(unaff_x20[6]);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(unaff_x19 + 2);
  plVar2 = unaff_x19 + 3;
  func_0x000100456a38();
  if (plVar2 != (long *)0x0) {
    return;
  }
  lVar1 = (long)unaff_x19 + *(long *)(*unaff_x19 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_1103468e0)(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}



/* Entry: 105338f50; end: 105339053;  */

long * FUN_105338f50(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010533bdf0();
  plVar1 = *(long **)(param_1 + 0x50);
  (**(code **)(*plVar1 + 0x48))(plVar1,*param_2,param_1 + 0x150);
  lVar2 = param_1 + 0x1a8;
  __ZNSt3__15mutex6unlockEv(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (((ulong)plVar1 & 1) == 0) {
    func_0x00010533bcb4();
    func_0x00010533bdbc();
    func_0x00010002b838(auStack_70,"fileRename");
    func_0x00010533bc18(uVar3,auStack_58,auStack_70,param_3,1);
    func_0x00010533bcac();
    func_0x00010533bcd0();
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10533814c(uVar3,param_3,1,lVar2 - param_4);
    FUN_105338070(*(undefined8 *)(param_1 + 8),param_3,1,1);
  }
  return plVar1;
}



/* Entry: 105339054; end: 105339097;  */

void FUN_105339054(long param_1)

{
  func_0x00010533bdf0();
  (**(code **)(**(long **)(param_1 + 0x50) + 0x20))(*(long **)(param_1 + 0x50),param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x1a8);
  return;
}



/* Entry: 105339098; end: 105339387;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_105339098(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  long alStack_e8 [2];
  long lStack_d8;
  long lStack_d0;
  long alStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long alStack_60 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000100291754();
  uStack_48 = extraout_x8;
  func_0x0001000e2d70(alStack_60,1);
  puVar1 = puStack_50;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_11087c4c8;
  puStack_50[1] = 0;
  FUN_10533b718(puStack_50 + 3,param_3);
  puStack_68 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  puStack_70 = puStack_68 + 3;
  func_0x0001000e2e50(alStack_60);
  puStack_78 = puStack_68;
  puStack_80 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  func_0x0001000dee68(alStack_60,param_1,*param_2,&puStack_80,0,*(undefined8 *)(param_1 + 0x130));
  func_0x0001000e13bc(&puStack_80);
  if (alStack_60[0] == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010533bcb4();
    func_0x00010002b838(auStack_98);
    func_0x00010002b838(auStack_b0,"publishSnapshotMap");
    func_0x00010533bc18(uVar3,auStack_98,auStack_b0,param_4,0);
    func_0x00010533bdb4();
    func_0x00010533bd14();
    bVar4 = false;
  }
  else {
    alStack_c8[1] = 0;
    alStack_c8[2] = 0;
    alStack_c8[0] = param_1 + 0x68;
    _pthread_rwlock_wrlock();
    lVar2 = *(long *)(param_1 + 0x130);
    lStack_d0 = *(long *)(param_1 + 0x138);
    lStack_d8 = lVar2;
    if (lStack_d0 != 0) {
      do {
        func_0x0001001d7934();
      } while (extraout_w10 != 0);
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(alStack_e8);
      func_0x0001000dee38((long *)(lVar2 + 0x18),alStack_e8);
      func_0x00010533be10();
    }
    (**(code **)(**(long **)(param_1 + 0x50) + 0x50))
              (alStack_e8,*(long **)(param_1 + 0x50),param_2,&lStack_d8);
    in_ZR = alStack_e8[0] == 0;
    bVar4 = !(bool)in_ZR;
    if (alStack_e8[0] == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010533bcb4();
      func_0x00010002b838(auStack_100);
      func_0x00010533bdf8();
      func_0x00010533bc18(uVar3,auStack_100,auStack_118,param_4,0);
      func_0x0001000e1074();
      func_0x0001000e0f68();
    }
    else {
      func_0x0001000dee38(*(long *)(param_1 + 0x130) + 0x18,alStack_e8);
      func_0x0001000e2fa0(alStack_c8 + 1,param_1 + 0x140);
      func_0x0001000e2fa0(param_1 + 0x140,alStack_60);
    }
    func_0x00010533be10();
    func_0x0001000d04cc(&lStack_d8);
    FUN_10533b228(alStack_c8);
    func_0x0001000e2fc4(alStack_c8 + 1);
  }
  func_0x0001000e2fc4(alStack_60);
  func_0x0001000e13bc(&puStack_70);
  func_0x0001000cb720(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001000e1074();
    func_0x0001000e0f68();
    func_0x00010533be10();
    func_0x0001000d04cc(&lStack_d8);
    FUN_10533b228(alStack_c8);
    func_0x0001000e2fc4(alStack_c8 + 1);
    func_0x0001000e2fc4(alStack_60);
    func_0x0001000e13bc(&puStack_70);
    do {
      func_0x00010533bbe8();
      __ZNSt3__119__shared_weak_countD2Ev(puVar1);
      func_0x0001000e2e50(alStack_60);
    } while( true );
  }
  return bVar4;
}



/* Entry: 105339388; end: 105339ec7;  */

void FUN_105339388(undefined8 param_1,long param_2,long param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  int *piVar15;
  long *****ppppplVar16;
  long lVar17;
  int extraout_w10;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  long ****pppplVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  int iVar24;
  int iVar25;
  long ****pppplVar26;
  long *****ppppplVar27;
  long ****pppplVar28;
  undefined8 auStack_170 [3];
  long ****pppplStack_158;
  long lStack_150;
  long ****pppplStack_148;
  long lStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long alStack_128 [2];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long alStack_100 [3];
  long ****pppplStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c0;
  byte bStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  
  FUN_10533b44c(auStack_170);
  FUN_105338948(param_1,auStack_170[0]);
  lVar10 = param_2 + 0x168;
  __ZNSt3__15mutex4lockEv();
  if (param_4 != 0) {
    func_0x0001001a5598(param_3);
    lVar10 = param_3 + 0x18;
    func_0x0001001a5598();
    *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_3 + 0x60);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__15mutex4lockEv(param_2 + 0x1a8);
  plVar11 = *(long **)(param_2 + 0x50);
  (**(code **)(*plVar11 + 0x28))(plVar11,param_2 + 0x150);
  func_0x00010533bde8();
  if ((param_4 & 1) == 0) {
    lVar17 = param_2;
    FUN_105338d0c(param_2,param_5);
    iVar19 = (int)lVar17;
  }
  else {
    iVar19 = 0;
  }
  alStack_100[0] = 0;
  alStack_100[1] = 0;
  if ((int)plVar11 == 0) {
LAB_1053394e0:
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    pppplStack_80 = (long ****)(param_2 + 0x68);
    _pthread_rwlock_rdlock();
    if (*(long *)(param_2 + 0x140) == 0) {
      func_0x00010533bd1c();
      func_0x00010533bc90();
    }
    else {
      func_0x000100291f48(*(undefined8 *)(*(long *)(param_2 + 0x140) + 0x28),alStack_100 + 2);
    }
    func_0x000100066230(&uStack_118,alStack_100 + 2);
    func_0x00010533bc6c();
    func_0x00010533be08();
    bVar7 = false;
  }
  else {
    FUN_105339ec8(alStack_100 + 2,param_2,0);
    if ((bStack_a8 & 1) == 0) {
      uVar20 = *(undefined8 *)(param_2 + 8);
      func_0x00010533bc74();
      FUN_1053383b8(uVar20,&pppplStack_80,1);
      func_0x00010533bc10();
      pppplStack_a0 = (long ****)0x0;
      pppplStack_98 = (long ****)0x0;
    }
    else {
      func_0x0001000e2f5c(&pppplStack_a0,alStack_100 + 2);
    }
    func_0x0001000e2f30(alStack_100 + 2);
    func_0x0001000e2fa0(alStack_100,&pppplStack_a0);
    func_0x00010533be00();
    if (alStack_100[0] == 0) {
      FUN_105339054(param_2);
      goto LAB_1053394e0;
    }
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_118,*(long *)(alStack_100[0] + 0x28) + 0x30);
    bVar7 = true;
  }
  func_0x00010533bd1c();
  iVar24 = (int)&uStack_118;
  func_0x000100152bb8();
  if (((param_4 & 1) == 0) && (iVar24 != 0)) {
    func_0x00010533bc90();
    func_0x00010533bc74();
    func_0x00010533bbbc();
LAB_105339560:
    func_0x00010533bc10();
    func_0x00010533bc6c();
    iVar19 = 2;
    goto LAB_105339630;
  }
  lVar17 = param_3;
  FUN_105345a4c(param_3,0,1);
  if (((param_4 | (uint)lVar17) & 1) == 0) {
    func_0x00010533bc90();
    func_0x00010533bc74();
    func_0x00010533bbbc();
    func_0x00010533bc10();
    func_0x00010533bc6c();
    iVar19 = 3;
    goto LAB_105339630;
  }
  if ((param_4 & 1) == 0) {
    uVar12 = param_3 + 0x18;
    func_0x0001000e107c(uVar12,&uStack_118);
    if ((uVar12 & 1) == 0) {
      func_0x00010533bc90();
      func_0x00010533bc74();
      func_0x00010533bbbc();
      goto LAB_105339560;
    }
  }
  FUN_105338d64(alStack_128,param_2);
  if ((alStack_128[0] == 0) || (*(long *)(alStack_128[0] + 0x18) == 0)) {
LAB_105339604:
    func_0x00010533bc20();
    func_0x00010533bc74();
    func_0x00010533bbbc();
    func_0x00010533bc10();
    func_0x00010533bc6c();
LAB_105339624:
    iVar19 = 1;
  }
  else {
    lVar17 = (long)*(char *)(alStack_128[0] + 0x17);
    if (lVar17 < 0) {
      lVar17 = *(long *)(alStack_128[0] + 8);
    }
    if (lVar17 == 0) goto LAB_105339604;
    if (!bVar7) {
      pppplStack_a0 = (long ****)0x0;
      pppplStack_98 = (long ****)0x0;
      pppplStack_80 = (long ****)(param_2 + 0x68);
      _pthread_rwlock_rdlock();
      ppppplVar27 = *(long ******)(param_2 + 0x148);
      ppppplVar16 = *(long ******)(param_2 + 0x140);
      pppplStack_e8 = (long ****)(long *****)0x0;
      if (*(long *)(param_2 + 0x148) != 0) {
        do {
          func_0x0001001d7934();
          pppplStack_e8 = pppplStack_98;
        } while (extraout_w10 != 0);
      }
      alStack_100[2] = 0;
      pppplStack_a0 = (long ****)ppppplVar16;
      pppplStack_98 = (long ****)ppppplVar27;
      func_0x0001000e2fc4(alStack_100 + 2);
      func_0x00010533be08();
      if ((long *****)pppplStack_a0 == (long *****)0x0) {
        uVar20 = *(undefined8 *)(param_2 + 8);
        func_0x00010533bc20();
        func_0x00010533bc74();
        func_0x00010533bbd8(uVar20,alStack_100 + 2,&pppplStack_80);
        func_0x00010533bc10();
        func_0x00010533bc6c();
        ppppplVar16 = &pppplStack_138;
      }
      else {
        pppplStack_138 = pppplStack_a0;
        pppplStack_130 = pppplStack_98;
        ppppplVar16 = &pppplStack_a0;
      }
      *ppppplVar16 = (long ****)0x0;
      ppppplVar16[1] = (long ****)0x0;
      func_0x00010533be00();
      func_0x0001000e2fa0(alStack_100,&pppplStack_138);
      func_0x0001000e2fc4(&pppplStack_138);
      if (alStack_100[0] != 0) goto LAB_105339760;
      goto LAB_105339624;
    }
LAB_105339760:
    piVar15 = *(int **)(alStack_100[0] + 0x28);
    if (*piVar15 == 2) {
      bVar8 = *(long *)(param_3 + 0x60) != *(long *)(param_3 + 0x68);
LAB_105339798:
      lVar17 = *(long *)(alStack_100[0] + 0x18);
      uVar5 = piVar15[1];
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      pppplStack_80 = &ppplStack_78;
      if (((int)uVar5 < 0) || (*(ulong *)(alStack_100[0] + 0x20) >> 3 < (ulong)uVar5)) {
LAB_1053397f0:
        pppplStack_138 = (long ****)0x0;
        pppplStack_130 = (long ****)0x0;
        uVar20 = *(undefined8 *)(param_2 + 8);
        func_0x00010533bc20();
        func_0x00010533bc74();
        func_0x00010533bbd8(uVar20,alStack_100 + 2,&pppplStack_80);
        func_0x00010533bc10();
        func_0x00010533bc6c();
      }
      else {
        uVar18 = 0x5e;
        if (*piVar15 < 3) {
          uVar18 = 0x5a;
        }
        lVar2 = (ulong)uVar18 + (long)piVar15[0x18];
        lVar1 = (ulong)uVar5 + 1;
        if (*(ulong *)(alStack_100[0] + 0x20) < (ulong)(lVar2 + lVar1 * 8)) goto LAB_1053397f0;
        func_0x000100291ce0(&pppplStack_a0,lVar1 * 2);
        ppppplVar16 = (long *****)pppplStack_a0;
        _memcpy(pppplStack_a0,lVar17 + lVar2);
        iVar24 = 0;
        iVar25 = (int)lVar2 + (int)lVar1 * 8;
        while( true ) {
          pppplStack_158 = (long ****)CONCAT44(pppplStack_158._4_4_,iVar24);
          if ((int)uVar5 < iVar24) break;
          uVar18 = iVar24 << 1;
          piVar15 = (int *)((long)pppplStack_a0 + (long)(int)uVar18 * 4);
          iVar3 = *piVar15;
          iVar4 = piVar15[1];
          if ((iVar24 < 1) || (iVar4 == *(int *)((long)pppplStack_a0 + (ulong)uVar18 * 4 + -4))) {
            bVar9 = false;
          }
          else {
            bVar9 = iVar3 != *(int *)((long)pppplStack_a0 + (ulong)uVar18 * 4 + -8);
          }
          if (iVar4 - iVar3 != 0 && iVar24 == 0 || bVar9) {
            ppppplVar27 = &pppplStack_80;
            FUN_10533ba90(ppppplVar27,&pppplStack_148,&pppplStack_158);
            pppplVar21 = *ppppplVar27;
            ppppplVar16 = ppppplVar27;
            if (pppplVar21 == (long ****)0x0) {
              pppplVar21 = (long ****)0x38;
              __Znwm();
              lStack_e0 = 1;
              *(int *)((long)pppplVar21 + 0x1c) = (int)pppplStack_158;
              pppplVar21[5] = (long ***)0x0;
              pppplVar21[6] = (long ***)0x0;
              pppplVar21[4] = (long ***)0x0;
              ppppplVar16 = &pppplStack_80;
              pppplStack_e8 = &ppplStack_78;
              FUN_10533bae0(ppppplVar16,pppplStack_148,ppppplVar27,pppplVar21);
              func_0x00010533bdc4();
            }
            *(int *)(pppplVar21 + 4) = iVar25;
            *(int *)((long)pppplVar21 + 0x24) = iVar3 - iVar25;
            *(int *)(pppplVar21 + 5) = iVar24;
            *(int *)((long)pppplVar21 + 0x2c) = iVar3;
            *(int *)(pppplVar21 + 6) = iVar4 - iVar3;
            *(int *)((long)pppplVar21 + 0x34) = iVar24;
            iVar24 = (int)pppplStack_158;
          }
          iVar24 = iVar24 + 1;
          iVar25 = iVar4;
        }
        func_0x0001000cbe6c();
        ppppplVar16[1] = (long ****)0x0;
        ppppplVar16[2] = (long ****)0x0;
        *ppppplVar16 = (long ****)&PTR_FUN_11087c518;
        ppppplVar23 = ppppplVar16 + 4;
        *ppppplVar23 = (long ****)0x0;
        ppppplVar22 = ppppplVar16 + 3;
        *ppppplVar22 = (long ****)ppppplVar23;
        ppppplVar16[5] = (long ****)0x0;
        ppppplVar27 = (long *****)pppplStack_80;
        while (ppppplVar27 != (long *****)&ppplStack_78) {
          ppppplVar13 = ppppplVar23;
          if ((ppppplVar23 == (long *****)*ppppplVar22) ||
             (func_0x00010002c810(),
             *(int *)((long)ppppplVar13 + 0x1c) < *(int *)((long)ppppplVar27 + 0x1c))) {
            ppppplVar14 = ppppplVar23;
            pppplStack_148 = (long ****)ppppplVar23;
            if (*ppppplVar23 != (long ****)0x0) {
              ppppplVar14 = ppppplVar13 + 1;
              pppplStack_148 = (long ****)ppppplVar13;
              goto LAB_105339a00;
            }
LAB_105339a1c:
            pppplVar21 = pppplStack_148;
            lVar17 = 0x38;
            __Znwm();
            lStack_e0 = 1;
            pppplVar28 = ppppplVar27[6];
            pppplVar26 = ppppplVar27[5];
            uVar20 = *(undefined8 *)((long)ppppplVar27 + 0x1c);
            *(undefined8 *)(lVar17 + 0x24) = *(undefined8 *)((long)ppppplVar27 + 0x24);
            *(undefined8 *)(lVar17 + 0x1c) = uVar20;
            *(long *****)(lVar17 + 0x30) = pppplVar28;
            *(long *****)(lVar17 + 0x28) = pppplVar26;
            pppplStack_e8 = (long ****)ppppplVar23;
            FUN_10533bae0(ppppplVar22,pppplVar21,ppppplVar14,lVar17);
            func_0x00010533bdc4();
          }
          else {
            ppppplVar14 = ppppplVar22;
            FUN_10533ba90(ppppplVar22,&pppplStack_148,(long)ppppplVar27 + 0x1c);
LAB_105339a00:
            if (*ppppplVar14 == (long ****)0x0) goto LAB_105339a1c;
          }
          func_0x00010002c7d4();
        }
        pppplStack_138 = (long ****)ppppplVar22;
        pppplStack_130 = (long ****)ppppplVar16;
        func_0x0001002920a0(&pppplStack_a0);
        func_0x00010533ba5c(ppplStack_78);
      }
      if ((long *****)pppplStack_138 == (long *****)0x0) {
        iVar19 = 1;
      }
      else {
        ppppplVar16 = *(long ******)(alStack_100[0] + 0x38);
        if (ppppplVar16 == (long *****)0x0) {
          func_0x0001000e13e8(&pppplStack_148);
        }
        else {
          lStack_140 = *(long *)(alStack_100[0] + 0x40);
          pppplStack_148 = (long ****)ppppplVar16;
          if (lStack_140 != 0) {
            plVar11 = (long *)(lStack_140 + 8);
            do {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar9) {
                *plVar11 = *plVar11 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        uVar20 = *(undefined8 *)(alStack_100[0] + 0x18);
        lStack_150 = lStack_140;
        if (lStack_140 != 0) {
          plVar11 = (long *)(lStack_140 + 8);
          do {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = *plVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pppplStack_158 = pppplStack_148;
        FUN_10533c560(alStack_100 + 2,param_2,param_3,uVar20,alStack_100[0] + 0x28,&pppplStack_158,
                      &pppplStack_138,*(undefined8 *)(alStack_100[0] + 0x20));
        func_0x0001000e2fe8();
        if ((((alStack_100[2] == 0) || (lStack_e0 == 0)) || (lStack_d0 == 0)) || (lStack_c0 == 0)) {
          uVar20 = *(undefined8 *)(param_2 + 8);
          func_0x00010533bcb4();
          func_0x00010533bc74();
          func_0x00010002b838(&pppplStack_a0,"fileDataCreation");
          func_0x00010533bbd8(uVar20,&pppplStack_80,&pppplStack_a0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_a0);
          func_0x00010533bc10();
LAB_105339bbc:
          iVar19 = 1;
        }
        else {
          FUN_105338edc(*(undefined8 *)(alStack_128[0] + 0x18),alStack_100 + 2);
          if (iVar19 == 0) {
            FUN_105339054(param_2);
            lVar17 = param_2;
            FUN_105339098(param_2,alStack_128,alStack_100[2] + 0x70,0);
            if ((int)lVar17 == 0) goto LAB_105339bbc;
            if (bVar7) {
              lVar17 = *(long *)(param_2 + 8);
              func_0x00010533bc74();
              FUN_105338350(lVar17,&pppplStack_80,1);
              func_0x00010533bc10();
            }
            uVar20 = *(undefined8 *)(param_2 + 8);
            __ZNSt3__16chrono12steady_clock3nowEv();
            FUN_10533814c(uVar20,0,0,lVar17 - lVar10);
            func_0x00010533bddc(*(undefined8 *)(param_2 + 8),0);
            if (bVar8) {
              FUN_105343af8(param_2,param_3 + 0x60);
            }
            else {
              FUN_105344020(param_2,alStack_100[2] + 0x70,1);
            }
          }
          else {
            lVar17 = param_2;
            FUN_105338f50(param_2,alStack_128,0,lVar10);
            if ((int)lVar17 == 0) goto LAB_105339bbc;
            if (bVar8) {
              FUN_105343d34(param_2,param_3 + 0x60);
            }
            else {
              FUN_1053441cc(param_2,alStack_100[2] + 0x70,1);
            }
          }
          iVar19 = 0;
        }
        FUN_10533ac5c(alStack_100 + 2);
        func_0x0001000e13bc(&pppplStack_148);
      }
      func_0x00010533b4fc(&pppplStack_138);
    }
    else {
      if (*piVar15 == 3) {
        bVar8 = false;
        goto LAB_105339798;
      }
      if (!bVar7) {
        (**(code **)(**(long **)(param_2 + 0x50) + 0x20))
                  (*(long **)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x130));
      }
      func_0x00010533bc90();
      func_0x00010533bc74();
      func_0x00010533bbbc();
      func_0x00010533bc10();
      func_0x00010533bc6c();
      iVar19 = 4;
    }
  }
  func_0x00010533b4d8(alStack_128);
LAB_105339630:
  func_0x00010533bd14();
  func_0x0001000e2fc4(alStack_100);
  if (iVar19 != 0) {
    FUN_105338c58(param_2);
  }
  FUN_105338c84(auStack_170,iVar19);
  func_0x00010533bd40();
  func_0x0001005f95d0(auStack_170);
  return;
}



/* Entry: 105339ec8; end: 105339f7b;  */

void FUN_105339ec8(undefined8 param_1,int param_2)

{
  undefined1 *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_80 [80];
  
  func_0x000100182d88();
  *extraout_x8 = 0;
  extraout_x8[0x48] = 0;
  func_0x00010533bdf0();
  func_0x0001000defe4(auStack_80);
  FUN_10533ad50();
  func_0x0001000e2f30(auStack_80);
  __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x1a8);
  if ((param_2 != 0) && ((*(byte *)(unaff_x19 + 0x48) & 1) != 0)) {
    func_0x0001000e13e8(auStack_80);
    func_0x0001000e2ef0(unaff_x19 + 0x38,auStack_80);
    func_0x0001000e13bc(auStack_80);
  }
  return;
}



/* Entry: 105339f7c; end: 10533a043;  */

void FUN_105339f7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte bStack_28;
  
  FUN_105339ec8(auStack_70,param_2,0);
  if ((bStack_28 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    func_0x000100291f48(uStack_48,&uStack_a0);
    FUN_10533a044(&uStack_88,uStack_48,uStack_58,uStack_50);
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[2] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    param_1[4] = uStack_80;
    param_1[3] = uStack_88;
    param_1[5] = uStack_78;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x000100100fec(&uStack_88);
    func_0x00010533bcac();
  }
  func_0x0001000e2f30(auStack_70);
  return;
}



/* Entry: 10533a044; end: 10533a083;  */

undefined8 * FUN_10533a044(undefined8 *param_1,int *param_2,undefined8 param_3,ulong param_4)

{
  if ((((param_2 != (int *)0x0) && (2 < *param_2)) && (0 < param_2[0x18])) &&
     ((ulong)(uint)param_2[0x18] + 0x5e <= param_4)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x00010029a7f4();
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* Entry: 10533a084; end: 10533a0f3;  */

void FUN_10533a084(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  long lStack_28;
  
  (**(code **)(*param_2 + 0x38))(&lStack_28);
  func_0x00010bcd32f8(&lStack_28);
  func_0x00010086e594(&lStack_28);
  lVar1 = *(long *)(lStack_28 + 0xa0);
  uVar2 = *(undefined8 *)(lStack_28 + 0x98);
  param_1[1] = *(undefined8 *)(lStack_28 + 0xa0);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001001d7934();
    } while (extraout_w10 != 0);
  }
  func_0x00010054ebfc(&lStack_28);
  return;
}



/* Entry: 10533a0f4; end: 10533a22b;  */

void FUN_10533a0f4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined8 *puStack_68;
  undefined8 *apuStack_60 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001000da72c();
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  puVar2 = puVar1;
  func_0x00010533bcd8();
  *puVar2 = &PTR_FUN_11087c3f8;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x15) = 0;
  func_0x00010533bd30();
  func_0x00010533bd28();
  puStack_68 = puVar1;
  apuStack_60[0] = puVar1;
  func_0x00010533bdd0();
  puStack_50 = puStack_68;
  if (puStack_68 != (undefined8 *)0x0) {
    do {
      func_0x00010533bd68();
    } while (extraout_w10 != 0);
  }
  *extraout_x8 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010533bd28();
  func_0x0001001077f8();
  FUN_10533a22c(&puStack_50);
  puVar2 = apuStack_60[0];
  do {
    func_0x00010533bce4();
    if ((int)unaff_x19 != 0) {
      if (*(char *)(puVar2 + 0x15) == '\x01') {
        FUN_10533b344(puVar2 + 0x13);
      }
      puVar2[0x14] = uStack_48;
      puVar2[0x13] = puStack_50;
      puStack_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      *(undefined1 *)(puVar2 + 0x15) = 1;
      puVar2[2] = 2;
      func_0x0001005fb9fc(puVar2,apuStack_60);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x0001005f9520(apuStack_60,0);
  FUN_10533b344(&puStack_50);
  func_0x0001005f95d0(&puStack_68);
  return;
}



/* Entry: 10533a22c; end: 10533a2c7;  */

void FUN_10533a22c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  undefined8 uVar2;
  
  func_0x000100182df4();
  func_0x000100182e00();
  lVar1 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001001078e4();
      lVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x38);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x0001001d7934();
      } while (extraout_w10 != 0);
    }
  }
  else {
    FUN_10533aaa4(param_1,param_2,*(undefined8 *)(lVar1 + 0x18),lVar1 + 0x38,param_3,
                  *(undefined8 *)(lVar1 + 0x20));
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return;
}



/* Entry: 10533a2c8; end: 10533a35f;  */

void FUN_10533a2c8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010029190c();
  uStack_28 = extraout_x8;
  FUN_10533a360(&uStack_60);
  func_0x0001000cbdfc(auStack_40,1);
  *(undefined8 *)(lStack_30 + 0x10) = 0;
  func_0x0001000cbe48();
  *(undefined8 *)(extraout_x8_00 + 0x20) = uStack_58;
  *(undefined8 *)(extraout_x8_00 + 0x18) = uStack_60;
  *(undefined8 *)(extraout_x8_00 + 0x28) = uStack_50;
  func_0x000100291f3c();
  lVar2 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar2 + 0x18;
  unaff_x19[1] = lVar2;
  puVar1 = auStack_40;
  func_0x0001000cbe5c();
  func_0x00010533bd58();
  func_0x0001000cb720(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010533bc84();
    FUN_10533adc0();
    func_0x00010533bbe8();
    func_0x000100182d88();
    func_0x000100291f3c();
    puStack_88 = puVar1 + 0x68;
    _pthread_rwlock_rdlock();
    lVar2 = *(long *)(unaff_x20 + 0x140);
    if (*(long *)(unaff_x20 + 0x148) != 0) {
      do {
        func_0x0001001d7934();
      } while (extraout_w10 != 0);
    }
    if (lVar2 == 0) {
      func_0x00010533b624();
    }
    else {
      FUN_10533a3f4();
    }
    func_0x0001002920ec();
    func_0x000100107b84(&puStack_88);
    func_0x00010533bd58();
    return;
  }
  return;
}



/* Entry: 10533a360; end: 10533a3f3;  */

void FUN_10533a360(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x20;
  long lStack_28;
  
  func_0x000100182d88();
  func_0x000100291f3c();
  lStack_28 = param_1 + 0x68;
  _pthread_rwlock_rdlock();
  lVar1 = *(long *)(unaff_x20 + 0x140);
  if (*(long *)(unaff_x20 + 0x148) != 0) {
    do {
      func_0x0001001d7934();
    } while (extraout_w10 != 0);
  }
  if (lVar1 == 0) {
    func_0x00010533b624();
  }
  else {
    FUN_10533a3f4();
  }
  func_0x0001002920ec();
  func_0x000100107b84(&lStack_28);
  func_0x00010533bd58();
  return;
}



/* Entry: 10533a3f4; end: 10533a51f;  */

void FUN_10533a3f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_78 [24];
  undefined8 *apuStack_60 [2];
  undefined1 auStack_50 [16];
  
  lVar2 = *(long *)(param_3 + 0x28);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 4);
    uVar3 = (ulong)uVar1;
    uVar4 = *(ulong *)(param_3 + 0x20);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if ((-1 < (int)uVar1) && (uVar3 <= uVar4 >> 3)) {
      for (lVar2 = 0; lVar2 <= (int)uVar3; lVar2 = lVar2 + 1) {
        func_0x000100291920(auStack_50);
        func_0x00010002b838(auStack_78,"[COF] CircumstanceEngineRepositoryFileStorage");
        FUN_10533bf10(apuStack_60,auStack_50,auStack_78,lVar2);
        func_0x0001000e1074();
        if (apuStack_60[0] != (undefined8 *)0x0) {
          FUN_10533a520(param_1,param_1[1],*apuStack_60[0],apuStack_60[0][1]);
        }
        FUN_10533b344(apuStack_60);
        func_0x0001002920f4(auStack_50);
        uVar3 = (ulong)*(uint *)(*(long *)(param_3 + 0x28) + 4);
      }
    }
  }
  return;
}



/* Entry: 10533a520; end: 10533a52f;  */

long FUN_10533a520(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  lVar4 = (param_4 - param_3) / 0x88;
  if (0 < lVar4) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x88 < lVar4) {
      plVar1 = param_1;
      FUN_10533b11c(param_1,(lVar3 - *param_1) / 0x88 + lVar4);
      FUN_10533b1dc(&lStack_78,plVar1,(param_2 - *param_1) / 0x88,plVar2);
      lVar3 = lStack_68 + lVar4 * 0x88;
      lVar5 = lStack_70;
      for (lVar4 = lVar4 * 0x88; lStack_70 = lVar5, lVar4 != 0; lVar4 = lVar4 + -0x88) {
        func_0x0001002a0cb4(lStack_68,param_3);
        lStack_68 = lStack_68 + 0x88;
        param_3 = param_3 + 0x88;
        lVar5 = lStack_70;
      }
      lStack_68 = lVar3;
      FUN_105335cf4(plVar2,param_2,param_1[1],lVar3);
      lStack_68 = lStack_68 + (param_1[1] - param_2);
      param_1[1] = param_2;
      lVar4 = lStack_70 + ((param_2 - *param_1) / -0x88) * 0x88;
      FUN_105335cf4(plVar2,*param_1,param_2,lVar4);
      lStack_78 = *param_1;
      *param_1 = lVar4;
      lVar4 = param_1[2];
      param_1[2] = lStack_60;
      param_1[1] = lStack_68;
      lStack_70 = lStack_78;
      lStack_68 = lStack_78;
      lStack_60 = lVar4;
      FUN_105335e1c(&lStack_78);
      param_2 = lVar5;
    }
    else {
      lVar5 = lVar3 - param_2;
      if (lVar5 / 0x88 < lVar4) {
        FUN_105335f34(plVar2,param_3 + lVar5,param_4,lVar3);
        param_1[1] = (long)plVar2;
        if (lVar5 < 1) {
          return param_2;
        }
        func_0x00010533bcfc();
        lVar4 = lVar5 / 0x88;
      }
      else {
        func_0x00010533bcfc();
      }
      FUN_10533b0a8(param_1,param_3,lVar4,param_2);
    }
  }
  return param_2;
}



/* Entry: 10533a530; end: 10533a5ab;  */

void FUN_10533a530(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [16];
  
  (**(code **)(*param_2 + 0x90))(auStack_30);
  func_0x00010533bdf8();
  FUN_10533bf10(param_1,auStack_30,auStack_48,param_3);
  func_0x0001000e1074();
  func_0x0001002920f4(auStack_30);
  return;
}



/* Entry: 10533a5ac; end: 10533a6df;  */

void FUN_10533a5ac(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 *puStack_68;
  undefined8 *apuStack_60 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar2 = puVar1;
  func_0x00010533bcd8();
  *puVar2 = &PTR_FUN_11087c438;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  func_0x00010533bd30();
  func_0x00010533bd28();
  puStack_68 = puVar1;
  apuStack_60[0] = puVar1;
  func_0x00010533bdd0();
  puStack_50 = puStack_68;
  if (puStack_68 != (undefined8 *)0x0) {
    do {
      func_0x00010533bd68();
    } while (extraout_w10 != 0);
  }
  *param_1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010533bd28();
  (**(code **)(*param_2 + 0x60))(&puStack_50);
  puVar2 = apuStack_60[0];
  do {
    func_0x00010533bce4();
    if ((int)param_2 != 0) {
      func_0x000104bffddc(puVar2 + 0x13);
      puVar2[0x14] = uStack_48;
      puVar2[0x13] = puStack_50;
      puVar2[0x15] = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
      puStack_50 = (undefined8 *)0x0;
      *(undefined1 *)(puVar2 + 0x16) = 1;
      puVar2[2] = 2;
      func_0x0001005fb9fc(puVar2,apuStack_60);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x0001005f9520(apuStack_60,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_50);
  func_0x0001005f95d0(&puStack_68);
  return;
}



/* Entry: 10533a6e0; end: 10533a747;  */

void FUN_10533a6e0(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  int extraout_w11;
  
  func_0x000100182d88();
  func_0x000100182df4();
  func_0x000100182e00();
  lVar1 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001001078e4();
      lVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    func_0x00010533bc5c();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return;
}



/* Entry: 10533a748; end: 10533a7a7;  */

undefined4 FUN_10533a748(long param_1)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  undefined4 uVar2;
  
  func_0x000100182df4();
  lVar1 = *(long *)(param_1 + 0x140);
  if (*(long *)(param_1 + 0x148) != 0) {
    do {
      func_0x0001001078e4();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x28) + 4);
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return uVar2;
}



/* Entry: 10533a7a8; end: 10533a92f;  */

void FUN_10533a7a8(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w11;
  long lStack_118;
  long alStack_d8 [2];
  long lStack_c8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x000100291754();
  lStack_c8 = lVar1 + 0x68;
  uStack_28 = extraout_x8;
  _pthread_rwlock_wrlock();
  (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
            (alStack_d8,*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x130));
  if (alStack_d8[0] != 0) {
    plVar3 = (long *)(alStack_d8[0] + 0x10);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(auStack_c0,plVar3);
    in_ZR = 0;
    if ((*(byte *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x20) & 5) == 0) {
      plVar2 = *(long **)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x28);
      (**(code **)(*plVar2 + 0x20))(&lStack_b0,plVar2,0x24,0,0x10);
      in_ZR = lStack_30 == -1;
      if ((bool)in_ZR) {
        func_0x000100456940((long)plVar3 + *(long *)(*plVar3 + -0x18),4);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(auStack_c0);
    auStack_c0[0] = 0;
    func_0x00010002b8a8(&lStack_b0,0x34,auStack_c0);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
              (alStack_d8[0] + 0x10,lStack_b0,lStack_a8 - lStack_b0);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(alStack_d8[0] + 0x10);
    func_0x000100100fec(&lStack_b0);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    func_0x00010533bd1c(*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x28));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (extraout_x8_00 + 0x30);
  }
  func_0x00010533b6a0(alStack_d8);
  plVar3 = &lStack_c8;
  FUN_10533b228();
  func_0x0001000cb720(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(auStack_c0);
    func_0x00010533b6a0(alStack_d8);
    FUN_10533b228(&lStack_c8);
    func_0x00010533bbe8();
    func_0x000100182d88();
    func_0x000100182df4();
    func_0x000100182e00();
    lVar1 = extraout_x8_01;
    if (extraout_x9 != 0) {
      do {
        func_0x0001001078e4();
        lVar1 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    if (lVar1 == 0) {
      func_0x00010533bc5c();
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
    }
    else {
      func_0x000100182e0c(*(undefined8 *)(lVar1 + 0x28));
      FUN_10533a044(plVar3 + 3,*(undefined8 *)(lStack_118 + 0x28),*(undefined8 *)(lStack_118 + 0x18)
                    ,*(undefined8 *)(lStack_118 + 0x20));
    }
    func_0x000100107b68();
    func_0x000100107b70();
    return;
  }
  return;
}



/* Entry: 10533a930; end: 10533a9b7;  */

void FUN_10533a930(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_38;
  
  func_0x000100182d88();
  func_0x000100182df4();
  func_0x000100182e00();
  lVar1 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001001078e4();
      lVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (lVar1 == 0) {
    func_0x00010533bc5c();
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  else {
    func_0x000100182e0c(*(undefined8 *)(lVar1 + 0x28));
    FUN_10533a044(unaff_x19 + 0x18,*(undefined8 *)(uStack_38 + 0x28),
                  *(undefined8 *)(uStack_38 + 0x18),*(undefined8 *)(uStack_38 + 0x20));
  }
  func_0x000100107b68();
  func_0x000100107b70();
  return;
}



/* Entry: 10533a9b8; end: 10533a9bf;  */

void FUN_10533a9b8(void)

{
  return;
}



/* Entry: 10533a9c0; end: 10533aa1f;  */

void FUN_10533a9c0(void)

{
  func_0x0001004c3ca0();
  func_0x00010048a6e8();
  return;
}



/* Entry: 10533aa20; end: 10533aa87;  */

long FUN_10533aa20(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    if (*(long *)(param_1 + 0x18) != 0) {
      _munmap(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
    func_0x0001000e15c4();
    func_0x000100066230();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    func_0x0001000e12d8(param_1 + 0x28,param_2 + 0x28);
    func_0x0001000e2ef0(param_1 + 0x38,param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}



/* Entry: 10533aa88; end: 10533aaa3;  */

void FUN_10533aa88(void)

{
  undefined1 uStack_11;
  
  FUN_10533b9e0(&uStack_11);
  return;
}



/* Entry: 10533aaa4; end: 10533ac5b;  */

void FUN_10533aaa4(void)

{
  ulong *puVar1;
  undefined ***pppuVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long lVar3;
  long *plStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  long *aplStack_40 [2];
  
  func_0x000100182d88();
  func_0x000100107990(aplStack_40);
  if (aplStack_40[0] != (long *)0x0) {
    lVar3 = *aplStack_40[0];
    if (lVar3 != aplStack_40[0][1]) {
      ppuStack_78 = &PTR_DAT_110cf7ec0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      puStack_50 = &DAT_11383d918;
      uStack_48 = 0;
      pppuVar2 = &ppuStack_78;
      func_0x00010006369c(pppuVar2,lVar3,(int)aplStack_40[0][1] - (int)lVar3);
      if (((ulong)pppuVar2 & 1) == 0) {
        func_0x00010533bcc0();
        if (extraout_x8_00 != 0) {
          do {
            func_0x0001001d7934();
          } while (extraout_w10_00 != 0);
        }
      }
      else {
        func_0x0001000cbde0(&plStack_88);
        puVar1 = &uStack_68;
        if ((uStack_68 & 1) != 0) {
          puVar1 = (ulong *)(uStack_68 + 7);
        }
        for (lVar3 = (long)(int)uStack_60 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
          func_0x00010533b270(plStack_88,*puVar1);
          puVar1 = puVar1 + 1;
        }
        if (*plStack_88 == plStack_88[1]) {
          func_0x00010533bcc0();
          if (extraout_x8_01 != 0) {
            do {
              func_0x0001001d7934();
            } while (extraout_w10_01 != 0);
          }
        }
        else {
          *unaff_x19 = plStack_88;
          unaff_x19[1] = uStack_80;
          plStack_88 = (long *)0x0;
          uStack_80 = 0;
        }
        FUN_10533b344(&plStack_88);
      }
      func_0x0001002a1a8c(&ppuStack_78);
      goto LAB_10533abd8;
    }
  }
  func_0x00010533bcc0();
  if (extraout_x8 != 0) {
    do {
      func_0x0001001d7934();
    } while (extraout_w10 != 0);
  }
LAB_10533abd8:
  FUN_1053362ac(aplStack_40);
  return;
}



/* Entry: 10533ac5c; end: 10533ad4f;  */

undefined8 FUN_10533ac5c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010533ac9c(param_1 + 0x40);
  func_0x00010533acc0(param_1 + 0x30);
  func_0x00010533ace4(param_1 + 0x20);
  func_0x00010533ad08(param_1 + 0x10);
  func_0x0001000d04c0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10533ad50; end: 10533ad73;  */

undefined8 FUN_10533ad50(undefined8 param_1)

{
  FUN_10533ad74();
  return param_1;
}



/* Entry: 10533ad74; end: 10533ad9b;  */

long FUN_10533ad74(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 != *(char *)(param_2 + 0x48)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        func_0x0001000e137c();
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      return param_1;
    }
    func_0x0001000e1320();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return param_1;
  }
  if (cVar2 != '\0') {
    if (param_1 != param_2) {
      if (*(long *)(param_1 + 0x18) != 0) {
        _munmap(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      func_0x0001000e15c4();
      func_0x000100066230();
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      func_0x0001000e12d8(param_1 + 0x28,param_2 + 0x28);
      func_0x0001000e2ef0(param_1 + 0x38,param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10533ad9c; end: 10533adbf;  */

void FUN_10533ad9c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001000e137c();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 10533adc0; end: 10533adeb;  */

undefined8 FUN_10533adc0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_105335fc8(&uStack_28);
  return param_1;
}



/* Entry: 10533adec; end: 10533adf3;  */

void FUN_10533adec(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001000e2f50(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001002a1b38();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10533adf4; end: 10533ae27;  */

void FUN_10533adf4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001000e2f50();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001002a1b38();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10533ae28; end: 10533b00f;  */

long FUN_10533ae28(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  if (0 < param_5) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x88 < param_5) {
      plVar1 = param_1;
      FUN_10533b11c(param_1,(lVar3 - *param_1) / 0x88 + param_5);
      FUN_10533b1dc(&lStack_78,plVar1,(param_2 - *param_1) / 0x88,plVar2);
      lVar3 = lStack_68 + param_5 * 0x88;
      lVar4 = lStack_70;
      for (param_5 = param_5 * 0x88; lStack_70 = lVar4, param_5 != 0; param_5 = param_5 + -0x88) {
        func_0x0001002a0cb4(lStack_68,param_3);
        lStack_68 = lStack_68 + 0x88;
        param_3 = param_3 + 0x88;
        lVar4 = lStack_70;
      }
      lStack_68 = lVar3;
      FUN_105335cf4(plVar2,param_2,param_1[1],lVar3);
      lStack_68 = lStack_68 + (param_1[1] - param_2);
      param_1[1] = param_2;
      lVar3 = lStack_70 + ((param_2 - *param_1) / -0x88) * 0x88;
      FUN_105335cf4(plVar2,*param_1,param_2,lVar3);
      lStack_78 = *param_1;
      *param_1 = lVar3;
      lVar3 = param_1[2];
      param_1[2] = lStack_60;
      param_1[1] = lStack_68;
      lStack_70 = lStack_78;
      lStack_68 = lStack_78;
      lStack_60 = lVar3;
      FUN_105335e1c(&lStack_78);
      param_2 = lVar4;
    }
    else {
      lVar4 = lVar3 - param_2;
      if (lVar4 / 0x88 < param_5) {
        FUN_105335f34(plVar2,param_3 + lVar4,param_4,lVar3);
        param_1[1] = (long)plVar2;
        if (lVar4 < 1) {
          return param_2;
        }
        func_0x00010533bcfc();
        param_5 = lVar4 / 0x88;
      }
      else {
        func_0x00010533bcfc();
      }
      FUN_10533b0a8(param_1,param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 10533b010; end: 10533b0a7;  */

void FUN_10533b010(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0x88) {
    FUN_10533b16c(lVar1,uVar2);
    lVar1 = lVar1 + 0x88;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = lVar3 + -0x88;
  param_2 = param_2 + (lVar1 - param_4);
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0x88) {
    FUN_10533b178(lVar1,param_2);
    param_2 = param_2 + -0x88;
    lVar1 = lVar1 + -0x88;
  }
  return;
}



/* Entry: 10533b0a8; end: 10533b11b;  */

void FUN_10533b0a8(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_c0 [136];
  long lStack_38;
  
  for (param_3 = param_3 * 0x88; param_3 != 0; param_3 = param_3 + -0x88) {
    lStack_38 = param_1 + 0x10;
    func_0x0001002a0cb4(auStack_c0,param_2);
    FUN_10533b178(param_4,auStack_c0);
    func_0x0001002a1b38(auStack_c0);
    param_4 = param_4 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



/* Entry: 10533b11c; end: 10533b16b;  */

/* WARNING: Removing unreachable block (ram,0x000105335e00) */

long * FUN_10533b11c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x1e1e1e1e1e1e1e2) {
    uVar1 = (param_1[2] - *param_1) / 0x88;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xf0f0f0f0f0f0ef < uVar1) {
      plVar2 = (long *)0x1e1e1e1e1e1e1e1;
    }
    return plVar2;
  }
  FUN_105335ca0();
  *param_1 = (long)&PTR_DAT_110cf7e70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = (long)&DAT_11383d918;
  param_1[7] = (long)&DAT_11383d918;
  param_1[8] = (long)&DAT_11383d918;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x00010b50c090(param_1,param_2);
    }
    else {
      func_0x00010b50b8d0(param_1);
      func_0x00010b50be84(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 10533b16c; end: 10533b177;  */

/* WARNING: Removing unreachable block (ram,0x000105335e00) */

undefined8 * FUN_10533b16c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110cf7e70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[8] = &DAT_11383d918;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x00010b50c090(param_1,param_2);
    }
    else {
      func_0x00010b50b8d0(param_1);
      func_0x00010b50be84(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 10533b178; end: 10533b1db;  */

long FUN_10533b178(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b50c090(param_1);
    }
    else {
      func_0x00010b50c058(param_1);
    }
  }
  return param_1;
}



/* Entry: 10533b1dc; end: 10533b227;  */

long * FUN_10533b1dc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_105335cb4();
  }
  lVar1 = param_4 + param_3 * 0x88;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x88;
  return param_1;
}



/* Entry: 10533b228; end: 10533b24b;  */

void FUN_10533b228(void)

{
  func_0x000100107b78();
  _pthread_rwlock_unlock();
  return;
}



/* Entry: 10533b24c; end: 10533b2ab;  */

void FUN_10533b24c(long param_1)

{
  func_0x00010533b6a0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10533b2ac; end: 10533b2df;  */

void FUN_10533b2ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001002a0cb4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x88;
  return;
}



/* Entry: 10533b2e0; end: 10533b2e3;  */

void FUN_10533b2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c210;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10533b2e4; end: 10533b2f7;  */

void FUN_10533b2e4(void)

{
  func_0x00010533b308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b2f8; end: 10533b317;  */

void FUN_10533b2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010533b300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10533b318; end: 10533b32b;  */

void FUN_10533b318(void)

{
  func_0x00010533b338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b32c; end: 10533b343;  */

long FUN_10533b32c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  FUN_105335fc8(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 10533b344; end: 10533b367;  */

void FUN_10533b344(long param_1)

{
  func_0x0001000d04c0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10533b368; end: 10533b36b;  */

void FUN_10533b368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10533b36c; end: 10533b37f;  */

void FUN_10533b36c(void)

{
  FUN_10533b380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b380; end: 10533b38f;  */

void FUN_10533b380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10533b390; end: 10533b3a3;  */

void FUN_10533b390(void)

{
  func_0x00010533b3b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b3a4; end: 10533b3c3;  */

void FUN_10533b3a4(long param_1)

{
  func_0x0001000d04f0(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10533b3c4; end: 10533b44b;  */

undefined8 * FUN_10533b3c4(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  if (param_4 < 0x7ffffffffffffff7) {
    uVar3 = param_4;
    func_0x0001000da72c();
    if (uVar3 < 0x17) {
      *(char *)((long)unaff_x19 + 0x17) = (char)param_4;
    }
    else {
      uVar3 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar3 = (param_4 | 7) + 1;
      }
      param_1 = unaff_x19;
      func_0x000100033e30();
      unaff_x19[1] = param_4;
      unaff_x19[2] = uVar3 | 0x8000000000000000;
      *unaff_x19 = param_1;
      unaff_x19 = param_1;
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0001000e15c4();
      _memmove();
    }
    *(undefined1 *)((long)unaff_x19 + (param_3 - unaff_x20)) = 0;
    return param_1;
  }
  func_0x000104bd47d4();
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar2 = puVar1;
  func_0x00010533bcd8();
  *puVar2 = &PTR_FUN_11087c300;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)((long)puVar2 + 0x9c) = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  func_0x00010054ec98(&uStack_58);
  func_0x00010054ebfc(&uStack_70);
  *param_1 = puVar1;
  param_1[1] = puVar1;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010054ee7c(&uStack_70);
  return param_1;
}



/* Entry: 10533b44c; end: 10533b4bf;  */

undefined8 * FUN_10533b44c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar2 = puVar1;
  func_0x00010533bcd8();
  *puVar2 = &PTR_FUN_11087c300;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)((long)puVar2 + 0x9c) = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  func_0x00010054ec98(&uStack_28);
  func_0x00010054ebfc(&uStack_40);
  *param_1 = puVar1;
  param_1[1] = puVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010054ee7c(&uStack_40);
  return param_1;
}



/* Entry: 10533b4c0; end: 10533b4c3;  */

undefined8 * FUN_10533b4c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10533b4c4; end: 10533b4d7;  */

void FUN_10533b4c4(void)

{
  func_0x0001005fbc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b4d8; end: 10533b51f;  */

void FUN_10533b4d8(long param_1)

{
  func_0x0001000d04c0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10533b520; end: 10533b523;  */

void FUN_10533b520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c340;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10533b524; end: 10533b537;  */

void FUN_10533b524(void)

{
  func_0x00010533b544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b538; end: 10533b557;  */

void FUN_10533b538(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c610ec(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
  func_0x0001000e13bc(param_1 + 0x50);
  func_0x0001000e12fc(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10533b558; end: 10533b5b3;  */

void FUN_10533b558(undefined8 *param_1)

{
  func_0x00010533b57c();
  *param_1 = &PTR_DAT_11087c3a8;
  return;
}



/* Entry: 10533b5b4; end: 10533b5b7;  */

void FUN_10533b5b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10533b5b8; end: 10533b5cb;  */

void FUN_10533b5b8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10533b5cc; end: 10533b5cf;  */

undefined8 * FUN_10533b5cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c3f8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10533b344(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}


