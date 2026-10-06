/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c31094; end: 108c313b7; +[SCSnapchattersPublisher immutableObjectParse:bufferSize:] */

void FUN_108c31094(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126db338;
  _objc_alloc(PTR_PTR_1126db338);
  lVar4 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar4);
  if (uVar5 < 5) {
    puVar7 = (undefined *)0x0;
LAB_108c3117c:
    puVar8 = (undefined *)0x0;
LAB_108c31180:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar4))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_108c3117c;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 6);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_108c31180;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 8);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (10 < uVar5) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 10);
      if (uVar6 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = -(long)*piVar1;
        uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if (uVar5 < 0xd) {
        puVar12 = (undefined *)0x0;
        puVar11 = (undefined *)0x0;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 0xc);
        if (uVar6 == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = -(long)*piVar1;
          uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        if ((uVar5 < 0xf) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 0xe), uVar6 == 0)) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      goto LAB_108c31190;
    }
  }
  puVar12 = (undefined *)0x0;
  puVar11 = (undefined *)0x0;
  puVar10 = (undefined *)0x0;
LAB_108c31190:
  func_0x00010c05c160(puVar3,param_2,puVar7,puVar8,puVar9,puVar10,puVar11,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c313b8; end: 108c313db; +[SCSnapchattersPublisher objectClassFunctionPointer] */

undefined1  [16] FUN_108c313b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c313d4;
  auVar1._0_8_ = 0x108c313cc;
  return auVar1;
}



/* Entry: 108c313dc; end: 108c31443;  */

void FUN_108c313dc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db338;
    _objc_alloc(PTR_PTR_1126db338);
    func_0x00010c05c160();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c31444; end: 108c314a3; -[SCSnapchattersPublisherChangeRequest .cxx_destruct] */

void FUN_108c31444(long param_1)

{
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



/* Entry: 108c314a4; end: 108c314af; -[SCSnapchattersPublisherChangeRequest table] */

undefined * FUN_108c314a4(void)

{
  return &UNK_10f50c517;
}



/* Entry: 108c314b0; end: 108c314f7; -[SCSnapchattersPublisherChangeRequest createTableWithSQLite:] */

void FUN_108c314b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df96bca,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c314f8; end: 108c3187f; -[SCSnapchattersPublisherChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c314f8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108c313dc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c31880(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50c56e);
    if (lVar6 == 0) goto LAB_108c3181c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108c3181c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db338);
    func_0x00010c21c9a0(puVar7);
LAB_108c31804:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50c535);
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
            _objc_opt_class(PTR_PTR_1126db338);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c31828;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108c31828;
    }
    FUN_108c313dc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c31880(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50c5b4);
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
        _objc_opt_class(PTR_PTR_1126db338);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108c31804;
      }
    }
LAB_108c3181c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108c31828:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c31880; end: 108c31af3;  */

ulong FUN_108c31880(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_108c31af4(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108c31af4(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_108c31af4(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c260ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_108c31af4(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c2626c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_108c31af4(param_1,uVar12);
  uVar14 = param_2;
  func_0x00010c26e500(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  FUN_108c31af4(param_1,uVar14);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,0xe,uVar15 & 0xffffffff);
  func_0x000107c27ddc(param_1,0xc,uVar13 & 0xffffffff);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c31af4; end: 108c31c23;  */

undefined8 FUN_108c31af4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108c31bd4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108c31bd4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108c31b94;
    param_1 = 0;
  }
  else {
LAB_108c31b94:
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
LAB_108c31bd4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c31c24; end: 108c31cdf;  */

undefined8 FUN_108c31c24(void)

{
  int iVar1;
  
  if ((bRam00000001138296d0 & 1) == 0) {
    iVar1 = 0x138296d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829668 = 0xe;
      puRam0000000113829670 = &UNK_10f50c604;
      uRam0000000113829678 = 0x1010000;
      pcRam0000000113829680 = FUN_108c31ce0;
      pcRam0000000113829688 = FUN_108c31d14;
      ppuRam0000000113829660 = &PTR_SUB_11086d7d0;
      uRam00000001138296a0 = 0;
      uRam0000000113829698 = 0;
      uRam00000001138296b0 = 0;
      uRam00000001138296a8 = 0;
      uRam00000001138296c0 = 0;
      uRam00000001138296b8 = 0;
      uRam00000001138296c8 = 0;
      ___cxa_atexit(&SUB_105187b98,0x113829660,0x100000000);
      ___cxa_guard_release(0x1138296d0);
    }
  }
  return 0x113829660;
}



/* Entry: 108c31ce0; end: 108c31d13;  */

undefined8 FUN_108c31ce0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 108c31d14; end: 108c31d6f;  */

undefined8 FUN_108c31d14(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c088b80(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c31d70; end: 108c31d7b; +[SCSnapchattersPublicInfo table] */

undefined * FUN_108c31d70(void)

{
  return &UNK_10f50c619;
}



/* Entry: 108c31d7c; end: 108c3214f; +[SCSnapchattersPublicInfo immutableObjectParse:bufferSize:] */

void FUN_108c31d7c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d1590;
  _objc_alloc(PTR_PTR_1126d1590);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar9 = (undefined *)0x0;
LAB_108c31e70:
    puVar10 = (undefined *)0x0;
LAB_108c31e74:
    puVar11 = (undefined *)0x0;
LAB_108c31e78:
    bVar3 = false;
LAB_108c31e7c:
    lVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_108c31e70;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 6);
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_108c31e74;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
    if (uVar8 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 0xb) goto LAB_108c31e78;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 10);
    if (uVar8 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + uVar8) != '\0';
    }
    if ((uVar5 < 0xd) || (uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc), uVar8 == 0))
    goto LAB_108c31e7c;
    puVar2 = (uint *)((long)piVar1 + uVar8);
    lVar6 = (long)puVar2 + (ulong)*puVar2;
  }
  func_0x000107c2a820(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar5 < 0xf) {
    puVar12 = (undefined *)0x0;
LAB_108c31f14:
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[7];
    if (uVar8 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar5 < 0x11) goto LAB_108c31f14;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x10);
    if (uVar8 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)((long)piVar1 + uVar8);
    }
    if (uVar5 < 0x13) {
      uVar14 = 0;
    }
    else {
      uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x12);
      if (uVar8 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)((long)piVar1 + uVar8);
      }
      if (0x14 < uVar5) {
        uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 0x14);
        if (uVar8 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar8);
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_108c31f24;
      }
    }
  }
  puVar13 = (undefined *)0x0;
LAB_108c31f24:
  func_0x00010c05c0c0(uVar15,puVar4,param_2,puVar9,puVar10,puVar11,bVar3,lVar6,puVar12,uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c32150; end: 108c32163; +[SCSnapchattersPublicInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108c32150(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108c3218c;
  auVar1._0_8_ = FUN_108c32164;
  return auVar1;
}



/* Entry: 108c32164; end: 108c3218b;  */

int FUN_108c32164(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf1fbb9c;
  _strcmp("username",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 108c3218c; end: 108c32243;  */

bool FUN_108c3218c(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x000107c310d8(param_2,&UNK_10f50c632);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    _sqlite3_bind_null(param_2,2);
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
    _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 108c32244; end: 108c32417;  */

long * FUN_108c32244(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    undefined1 param_7,long param_8,long param_9,undefined4 param_10,
                    undefined4 param_11,long param_12,undefined1 param_13)

{
  long *plVar1;
  long lVar2;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_1126fde00;
    plVar1 = &lStack_80;
    lStack_80 = param_2;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_3;
      _objc_retain(param_4);
      lVar2 = plVar1[4];
      plVar1[4] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[5];
      plVar1[5] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[6];
      plVar1[6] = param_6;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_7;
      _objc_retain(param_8);
      lVar2 = plVar1[7];
      plVar1[7] = param_8;
      _objc_release(lVar2);
      _objc_retain(param_9);
      lVar2 = plVar1[8];
      plVar1[8] = param_9;
      _objc_release(lVar2);
      plVar1[9] = param_1;
      *(undefined4 *)(plVar1 + 3) = param_10;
      _objc_retain(param_12);
      lVar2 = plVar1[10];
      plVar1[10] = param_12;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x15) = param_13;
    }
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return plVar1;
}



/* Entry: 108c32418; end: 108c32937;  */

void FUN_108c32418(undefined8 param_1,undefined *param_2)

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
  undefined *puStack_78;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar10,&UNK_10f50c687);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
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
            _objc_opt_class(PTR_PTR_1126d1590);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_108c32828;
            puVar10 = PTR_PTR_1126d1598;
            _objc_alloc(PTR_PTR_1126d1598);
            puStack_78 = puVar3;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010c294420(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c07a6a0(puVar3);
            puVar6 = puVar3;
            func_0x00010bf1bae0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c242760(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c088b80(puVar3);
            puVar8 = puVar3;
            func_0x00010c26e7a0();
            puVar9 = puVar3;
            func_0x00010c116d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06bb80();
            FUN_108c32244(param_1,puVar10,puVar1,puStack_78,puVar2,puVar4,puVar5,puVar6,puVar7,
                          (int)puVar8);
            goto LAB_108c325ac;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d1590);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126d1598;
        _objc_alloc(PTR_PTR_1126d1598);
        puStack_78 = puVar3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c294420(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c07a6a0(puVar3);
        puVar6 = puVar3;
        func_0x00010bf1bae0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c242760(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c088b80(puVar3);
        puVar8 = puVar3;
        func_0x00010c26e7a0();
        puVar9 = puVar3;
        func_0x00010c116d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06bb80();
        FUN_108c32244(param_1,puVar10,puVar1,puStack_78,puVar2,puVar4,puVar5,puVar6,puVar7,
                      (int)puVar8);
LAB_108c325ac:
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(puStack_78);
        param_2 = puVar3;
        goto LAB_108c32830;
      }
LAB_108c32828:
      param_2 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_108c32830:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108c32938; end: 108c329ab;  */

void FUN_108c32938(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c32418();
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



/* Entry: 108c329ac; end: 108c32dd3;  */

void FUN_108c329ac(undefined8 param_1,undefined *param_2,undefined1 *param_3)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1598;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_108c32418();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar10 = PTR_PTR_1126d1598;
    _objc_retain(param_2);
    _objc_opt_self(puVar10);
    puVar10 = PTR_PTR_1126d1598;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c07a6a0(param_2);
      puVar6 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c242760(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c088b80(param_2);
      puVar8 = param_2;
      func_0x00010c26e7a0();
      puVar9 = param_2;
      func_0x00010c116d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06bb80();
      FUN_108c32244(param_1,puVar10,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,
                    (int)puVar8);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar10 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar10 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar10);
    puVar10 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar10);
    puVar10 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar10);
    puVar10 = param_2;
    func_0x00010c07a6a0();
    puVar1[0x14] = (char)puVar10;
    puVar10 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar10);
    puVar10 = param_2;
    func_0x00010c242760(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar10);
    func_0x00010c088b80(param_2);
    *(undefined8 *)(puVar1 + 0x48) = param_1;
    puVar10 = param_2;
    func_0x00010c26e7a0();
    *(int *)(puVar1 + 0x18) = (int)puVar10;
    puVar10 = param_2;
    func_0x00010c116d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar10);
    puVar10 = param_2;
    func_0x00010c06bb80();
    puVar1[0x15] = (char)puVar10;
    _objc_retain(puVar1);
    puVar10 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108c32dd4; end: 108c32e63;  */

void FUN_108c32dd4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d1590;
    _objc_alloc(PTR_PTR_1126d1590);
    func_0x00010c05c0c0(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c32e64; end: 108c32ec3; -[SCSnapchattersPublicInfoChangeRequest .cxx_destruct] */

void FUN_108c32e64(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108c32ec4; end: 108c32ecf; -[SCSnapchattersPublicInfoChangeRequest table] */

undefined * FUN_108c32ec4(void)

{
  return &UNK_10f50c619;
}



/* Entry: 108c32ed0; end: 108c32f83; -[SCSnapchattersPublicInfoChangeRequest createTableWithSQLite:] */

void FUN_108c32ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df96c55,0x86,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df96cdb,0x6f,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10df96d4a,0x84,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 108c32f84; end: 108c33603; -[SCSnapchattersPublicInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c32f84(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_108c32dd4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_108c33604(param_4,puVar7);
    func_0x000107c27dc4(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar11);
    lVar8 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50c743);
    if (lVar8 == 0) goto LAB_108c33530;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_108c33530;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      func_0x000107c310d8(param_3,&UNK_10f50c632);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        _sqlite3_bind_null(param_3,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        _sqlite3_bind_text(param_3,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_108c33530;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar7);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d1590);
    func_0x00010c21c9a0(puVar11);
LAB_108c33508:
    _objc_release(puVar11);
    _objc_retain(puVar7);
    puVar11 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x000107c310d8(param_3,&UNK_10f50c6cd);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            func_0x000107c310d8(param_3,&UNK_10f50c701);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_108c330b0;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d1590);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar11);
            _objc_release(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c3353c;
          }
        }
      }
LAB_108c330b0:
      puVar11 = (undefined *)0x0;
      goto LAB_108c3353c;
    }
    FUN_108c32dd4();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_108c33604(param_4,puVar7);
    func_0x000107c27dc4(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50c784);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1590);
        puVar9 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar9;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar11);
        _objc_retain(puVar5);
        if (puVar11 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
          if ((puVar11 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
            _objc_release(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar5);
            _objc_release(puVar11);
          }
          else {
            puVar6 = puVar11;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar5);
            _objc_release(puVar11);
            if (((ulong)puVar6 & 1) != 0) goto LAB_108c334c4;
          }
          func_0x000107c310d8(param_3,&UNK_10f50c7cf);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            _sqlite3_bind_null(param_3,1);
          }
          else {
            puVar13 = (uint *)((long)piVar1 + uVar10);
            puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
            _sqlite3_bind_text(param_3,1,puVar2 + 1,*puVar2,0);
          }
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar9);
            goto LAB_108c33528;
          }
        }
LAB_108c334c4:
        _objc_release(puVar9);
        _objc_release(puVar7);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d1590);
        func_0x00010c21c9a0(puVar11);
        goto LAB_108c33508;
      }
    }
LAB_108c33528:
    _objc_release(puVar7);
LAB_108c33530:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_108c3353c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108c33604; end: 108c3394f;  */

ulong FUN_108c33604(undefined8 param_1,ulong param_2,ulong param_3)

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
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar17 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_2;
    FUN_108c308f8(param_2,uVar5);
    _objc_release(uVar5);
    uVar17 = uVar17 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108c33950(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108c33950(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_108c33950(param_2,uVar8);
  uVar10 = param_3;
  func_0x00010c07a6a0();
  uVar11 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  FUN_108c33950(param_2,uVar11);
  func_0x00010c088b80(param_3);
  uVar13 = param_3;
  func_0x00010c26e7a0(param_3);
  uVar14 = param_3;
  func_0x00010c116d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  FUN_108c33950(param_2,uVar14);
  uVar16 = param_3;
  func_0x00010c06bb80(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,0x10);
  func_0x000107c27ddc(param_2,0x14,uVar15 & 0xffffffff);
  func_0x000100c3b024(param_2,0x12,uVar13,0);
  func_0x000107c27ddc(param_2,0xe,uVar12 & 0xffffffff);
  func_0x000100c3b32c(param_2,0xc,uVar17);
  func_0x000107c27ddc(param_2,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_2,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dec(param_2,0x16,uVar16,0);
  func_0x000107c27dec(param_2,10,uVar10 & 0xffffffff,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108c33950; end: 108c33a7f;  */

undefined8 FUN_108c33950(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108c33a30;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108c33a30;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108c339f0;
    param_1 = 0;
  }
  else {
LAB_108c339f0:
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
LAB_108c33a30:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c33a80; end: 108c33b3b;  */

undefined8 FUN_108c33a80(void)

{
  int iVar1;
  
  if ((bRam0000000113829748 & 1) == 0) {
    iVar1 = 0x13829748;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138296e0 = 0xe;
      puRam00000001138296e8 = &UNK_10f50c824;
      uRam00000001138296f0 = 0x1010000;
      pcRam00000001138296f8 = FUN_108c33b3c;
      pcRam0000000113829700 = FUN_108c33b70;
      ppuRam00000001138296d8 = &PTR_SUB_11086d7d0;
      uRam0000000113829718 = 0;
      uRam0000000113829710 = 0;
      uRam0000000113829728 = 0;
      uRam0000000113829720 = 0;
      uRam0000000113829738 = 0;
      uRam0000000113829730 = 0;
      uRam0000000113829740 = 0;
      ___cxa_atexit(&SUB_105187b98,0x1138296d8,0x100000000);
      ___cxa_guard_release(0x113829748);
    }
  }
  return 0x1138296d8;
}



/* Entry: 108c33b3c; end: 108c33b6f;  */

undefined8 FUN_108c33b3c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 108c33b70; end: 108c33bcb;  */

undefined8 FUN_108c33b70(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010bfe14e0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c33bcc; end: 108c33bd7; +[SCSnapchattersHiddenSuggestion table] */

undefined * FUN_108c33bcc(void)

{
  return &UNK_10f50c834;
}



/* Entry: 108c33bd8; end: 108c33e7b; +[SCSnapchattersHiddenSuggestion immutableObjectParse:bufferSize:] */

void FUN_108c33bd8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126db058;
  _objc_alloc(PTR_PTR_1126db058);
  lVar7 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar5 < 5) {
    puVar9 = (undefined *)0x0;
LAB_108c33cc0:
    puVar10 = (undefined *)0x0;
LAB_108c33cc4:
    puVar11 = (undefined *)0x0;
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
      uVar5 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar5 < 7) goto LAB_108c33cc0;
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
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_108c33cc4;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 8);
    if (uVar8 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((10 < uVar5) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 10), uVar8 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      lVar7 = (long)puVar2 + (ulong)*puVar2;
      goto LAB_108c33ccc;
    }
  }
  lVar7 = 0;
LAB_108c33ccc:
  func_0x000107c2a820(lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar6 < 0xd) {
    lVar4 = 0;
    uVar12 = 0;
  }
  else {
    if ((ulong)puVar6[6] == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)piVar1 + (ulong)puVar6[6]);
    }
    if ((*puVar6 < 0xf) || ((ulong)puVar6[7] == 0)) {
      lVar4 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar6[7]);
      lVar4 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  func_0x000107c2a824(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c040(uVar12,puVar3,param_2,puVar9,puVar10,puVar11,lVar7,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c33e7c; end: 108c33e8f; +[SCSnapchattersHiddenSuggestion objectClassFunctionPointer] */

undefined1  [16] FUN_108c33e7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108c33eb8;
  auVar1._0_8_ = FUN_108c33e90;
  return auVar1;
}



/* Entry: 108c33e90; end: 108c33eb7;  */

int FUN_108c33e90(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf1fbb9c;
  _strcmp("username",param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 108c33eb8; end: 108c33f6f;  */

bool FUN_108c33eb8(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x000107c310d8(param_2,&UNK_10f50c853);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    _sqlite3_bind_null(param_2,2);
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
    _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 108c33f70; end: 108c34123;  */

void FUN_108c33f70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar6 = PTR_PTR_1126db2a8;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe14e0(param_3);
    lVar5 = param_3;
    func_0x00010bf5b820(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c34124(param_1,puVar6,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar6 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c34124; end: 108c3429f;  */

undefined1 *
FUN_108c34124(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1126fde08;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
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
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108c342a0; end: 108c3470b;  */

void FUN_108c342a0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar8,&UNK_10f50c8ae);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126db058);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_108c34618;
            puVar8 = PTR_PTR_1126db2a8;
            _objc_alloc(PTR_PTR_1126db2a8);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c294420(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf1bae0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe14e0(puVar3);
            puVar7 = puVar3;
            func_0x00010bf5b820(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108c34124(param_1,puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_2 = puVar3;
            goto LAB_108c343e8;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126db058);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126db2a8;
        _objc_alloc(PTR_PTR_1126db2a8);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c294420(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf1bae0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe14e0(puVar3);
        puVar7 = puVar3;
        func_0x00010bf5b820(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c34124(param_1,puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_2 = puVar3;
LAB_108c343e8:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108c34620;
      }
LAB_108c34618:
      param_2 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_108c34620:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c3470c; end: 108c3477f;  */

void FUN_108c3470c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c342a0();
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



/* Entry: 108c34780; end: 108c3497b;  */

void FUN_108c34780(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2a8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_108c342a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar2 = PTR_PTR_1126db2a8;
    FUN_108c33f70(PTR_PTR_1126db2a8,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    func_0x00010bfe14e0(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    puVar2 = param_2;
    func_0x00010bf5b820(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c3497c; end: 108c349e7;  */

void FUN_108c3497c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db058;
    _objc_alloc(PTR_PTR_1126db058);
    func_0x00010c05c040(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c349e8; end: 108c34a3b; -[SCSnapchattersHiddenSuggestionChangeRequest .cxx_destruct] */

void FUN_108c349e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c34a3c; end: 108c34a47; -[SCSnapchattersHiddenSuggestionChangeRequest table] */

undefined * FUN_108c34a3c(void)

{
  return &UNK_10f50c834;
}



/* Entry: 108c34a48; end: 108c34afb; -[SCSnapchattersHiddenSuggestionChangeRequest createTableWithSQLite:] */

void FUN_108c34a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df96dce,0x8c,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10df96e5a,0x75,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10df96ecf,0x90,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 108c34afc; end: 108c3517b; -[SCSnapchattersHiddenSuggestionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c34afc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_108c3497c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_108c3517c(param_4,puVar7);
    func_0x000107c27dc4(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010bf636c0();
    func_0x00010507cae4();
    _objc_release(puVar11);
    lVar8 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50c97c);
    if (lVar8 == 0) goto LAB_108c350a8;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_108c350a8;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      func_0x000107c310d8(param_3,&UNK_10f50c853);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        _sqlite3_bind_null(param_3,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        _sqlite3_bind_text(param_3,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_108c350a8;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar7);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db058);
    func_0x00010c21c9a0(puVar11);
LAB_108c35080:
    _objc_release(puVar11);
    _objc_retain(puVar7);
    puVar11 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x000107c310d8(param_3,&UNK_10f50c8fa);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            func_0x000107c310d8(param_3,&UNK_10f50c934);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_108c34c28;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126db058);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar11);
            _objc_release(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c350b4;
          }
        }
      }
LAB_108c34c28:
      puVar11 = (undefined *)0x0;
      goto LAB_108c350b4;
    }
    FUN_108c3497c();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_108c3517c(param_4,puVar7);
    func_0x000107c27dc4(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50c9c3);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126db058);
        puVar9 = puVar11;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar9;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar11);
        _objc_retain(puVar5);
        if (puVar11 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
          if ((puVar11 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
            _objc_release(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar5);
            _objc_release(puVar11);
          }
          else {
            puVar6 = puVar11;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            _objc_release(puVar11);
            _objc_release(puVar5);
            _objc_release(puVar11);
            if (((ulong)puVar6 & 1) != 0) goto LAB_108c3503c;
          }
          func_0x000107c310d8(param_3,&UNK_10f50ca14);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            _sqlite3_bind_null(param_3,1);
          }
          else {
            puVar13 = (uint *)((long)piVar1 + uVar10);
            puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
            _sqlite3_bind_text(param_3,1,puVar2 + 1,*puVar2,0);
          }
          _sqlite3_bind_int64(param_3,2,uVar12);
          _sqlite3_step();
          if ((int)param_3 != 0x65) {
            _objc_release(puVar9);
            goto LAB_108c350a0;
          }
        }
LAB_108c3503c:
        _objc_release(puVar9);
        _objc_release(puVar7);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126db058);
        func_0x00010c21c9a0(puVar11);
        goto LAB_108c35080;
      }
    }
LAB_108c350a0:
    _objc_release(puVar7);
LAB_108c350a8:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_108c350b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108c3517c; end: 108c35423;  */

ulong FUN_108c3517c(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar11 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    FUN_108c308f8(param_2,lVar5);
    _objc_release(lVar5);
    uVar11 = uVar11 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010bf5b820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    FUN_108c30bb4(param_2,lVar5);
    _objc_release(lVar5);
    uVar10 = uVar10 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_108c35424(param_2,lVar4);
  lVar5 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108c35424(param_2,lVar5);
  lVar8 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_108c35424(param_2,lVar8);
  func_0x00010bfe14e0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,0xc);
  func_0x000100c3b2bc(param_2,0xe,uVar10);
  func_0x000100c3b32c(param_2,10,uVar11);
  func_0x000107c27ddc(param_2,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_2,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108c35424; end: 108c35553;  */

undefined8 FUN_108c35424(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108c35504;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108c35504;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108c354c4;
    param_1 = 0;
  }
  else {
LAB_108c354c4:
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
LAB_108c35504:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c35554; end: 108c355b7;  */

undefined ** FUN_108c35554(void)

{
  int iVar1;
  
  if ((bRam0000000113829750 & 1) == 0) {
    iVar1 = 0x13829750;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291c58,0x100000000);
      ___cxa_guard_release(0x113829750);
    }
  }
  return &PTR_PTR_113291c58;
}



/* Entry: 108c355b8; end: 108c3563f;  */

void FUN_108c355b8(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c35640; end: 108c356cb;  */

void FUN_108c35640(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfa3d00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c356cc; end: 108c35763;  */

long FUN_108c356cc(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((6 < *puVar2) && ((ulong)puVar2[3] != 0)) &&
      (8 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[3]) == '\x01')) &&
     ((ulong)puVar2[4] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[4]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 108c35764; end: 108c3576f; +[SCSnapchattersFriendFeedSummary table] */

undefined * FUN_108c35764(void)

{
  return &UNK_10f50ca6f;
}



/* Entry: 108c35770; end: 108c361cb; +[SCSnapchattersFriendFeedSummary immutableObjectParse:bufferSize:] */

void FUN_108c35770(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ushort uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  piVar7 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126cb208;
  _objc_alloc();
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar12 == 0)) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar7 + uVar12);
    puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  piVar6 = piVar7;
  FUN_108c356cc();
  func_0x000108c35718();
  puVar16 = PTR_PTR_1126cb220;
  if (piVar6 == (int *)0x0) {
    if (piVar7 == (int *)0x0) {
      puVar16 = (undefined *)0x0;
      goto LAB_108c35ae8;
    }
    puVar9 = PTR_PTR_1126cb218;
    _objc_alloc();
    lVar8 = (long)*piVar7;
    uVar11 = *(ushort *)((long)piVar7 - lVar8);
    if (uVar11 < 5) {
      puVar20 = (undefined *)0x0;
LAB_108c3599c:
      puVar23 = (undefined *)0x0;
LAB_108c359a4:
      puVar22 = (undefined *)0x0;
    }
    else {
      uVar12 = (ulong)((ushort *)((long)piVar7 - lVar8))[2];
      if (uVar12 == 0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar7 + uVar12);
        puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = (long)*piVar7;
        uVar11 = *(ushort *)((long)piVar7 - lVar8);
      }
      lVar8 = -lVar8;
      if (uVar11 < 7) goto LAB_108c3599c;
      uVar12 = (ulong)*(ushort *)((long)piVar7 + lVar8 + 6);
      if (uVar12 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)((long)piVar7 + uVar12) != '\0';
      }
      if (uVar11 < 9) goto LAB_108c3599c;
      uVar12 = (ulong)*(ushort *)((long)piVar7 + lVar8 + 8);
      if (uVar12 == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        uVar17 = (ulong)*(uint *)((long)piVar7 + uVar12);
        puVar1 = (uint *)((long)((long)piVar7 + uVar12) + uVar17);
        puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
        _objc_retainAutoreleasedReturnValue();
        if (*puVar1 != 0) {
          lVar8 = (long)piVar7 + uVar17 + uVar12 + 10;
          do {
            uVar12 = (ulong)*(uint *)(lVar8 + -6);
            puVar23 = PTR_PTR_1126cb210;
            _objc_alloc(PTR_PTR_1126cb210);
            lVar14 = lVar8 + uVar12;
            lVar10 = lVar8 + (uVar12 - (long)*(int *)(lVar14 + -6));
            if ((*(ushort *)(lVar10 + -6) < 5) ||
               (uVar17 = (ulong)*(ushort *)(lVar10 + -2), uVar17 == 0)) {
              lVar10 = 0;
            }
            else {
              lVar10 = lVar8 + uVar12 + uVar17;
              lVar10 = lVar10 + (ulong)*(uint *)(lVar10 + -6) + -6;
            }
            FUN_108c36e84(lVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = (long)*(int *)(lVar14 + -6);
            uVar11 = *(ushort *)(lVar8 + (uVar12 - lVar13) + -6);
            if (uVar11 < 7) {
              puVar26 = (undefined *)0x0;
LAB_108c35d58:
              puVar19 = (undefined *)0x0;
LAB_108c35d5c:
              puVar21 = (undefined *)0x0;
LAB_108c35d60:
              puVar24 = (undefined *)0x0;
LAB_108c35d64:
              puVar18 = (undefined *)0x0;
            }
            else {
              uVar17 = (ulong)*(ushort *)(lVar8 + (uVar12 - lVar13));
              if (uVar17 == 0) {
                puVar26 = (undefined *)0x0;
              }
              else {
                lVar13 = lVar8 + uVar12 + uVar17;
                puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    lVar13 + (ulong)*(uint *)(lVar13 + -6) + -2);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = (long)*(int *)(lVar14 + -6);
                uVar11 = *(ushort *)(lVar8 + (uVar12 - lVar13) + -6);
              }
              lVar13 = -lVar13;
              if (uVar11 < 9) goto LAB_108c35d58;
              uVar17 = (ulong)*(ushort *)(lVar8 + lVar13 + uVar12 + 2);
              if (uVar17 == 0) {
                puVar19 = (undefined *)0x0;
              }
              else {
                lVar13 = lVar8 + uVar12 + uVar17;
                puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    lVar13 + (ulong)*(uint *)(lVar13 + -6) + -2);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = -(long)*(int *)(lVar14 + -6);
                uVar11 = *(ushort *)(lVar8 + (uVar12 - (long)*(int *)(lVar14 + -6)) + -6);
              }
              if (uVar11 < 0xb) goto LAB_108c35d5c;
              uVar17 = (ulong)*(ushort *)(lVar8 + lVar13 + uVar12 + 4);
              if (uVar17 == 0) {
                puVar21 = (undefined *)0x0;
              }
              else {
                lVar13 = lVar8 + uVar12 + uVar17;
                puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    lVar13 + (ulong)*(uint *)(lVar13 + -6) + -2);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = -(long)*(int *)(lVar14 + -6);
                uVar11 = *(ushort *)(lVar8 + (uVar12 - (long)*(int *)(lVar14 + -6)) + -6);
              }
              if (uVar11 < 0xd) goto LAB_108c35d60;
              uVar17 = (ulong)*(ushort *)(lVar8 + lVar13 + uVar12 + 6);
              if (uVar17 == 0) {
                puVar24 = (undefined *)0x0;
              }
              else {
                lVar13 = lVar8 + uVar12 + uVar17;
                puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    lVar13 + (ulong)*(uint *)(lVar13 + -6) + -2);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = -(long)*(int *)(lVar14 + -6);
                uVar11 = *(ushort *)(lVar8 + (uVar12 - (long)*(int *)(lVar14 + -6)) + -6);
              }
              if ((uVar11 < 0xf) || (*(short *)(lVar8 + lVar13 + uVar12 + 8) == 0))
              goto LAB_108c35d64;
              puVar18 = PTR_PTR_1126d78b8;
              _objc_alloc(PTR_PTR_1126d78b8);
              func_0x00010c02c8c0();
            }
            func_0x00010bff73c0(puVar23,param_2,lVar10,puVar26,puVar19,puVar21,puVar24,puVar18);
            _objc_release(puVar18);
            _objc_release(puVar24);
            _objc_release(puVar21);
            _objc_release(puVar19);
            _objc_release(puVar26);
            _objc_release(lVar10);
            func_0x00010befa120(puVar22,param_2,puVar23);
            _objc_release(puVar23);
            puVar15 = (uint *)(lVar8 + -2);
            lVar8 = lVar8 + 4;
          } while (puVar15 != puVar1 + (ulong)*puVar1 + 1);
        }
        puVar23 = puVar22;
        func_0x00010bf51e00(puVar22);
        _objc_release(puVar22);
        lVar8 = -(long)*piVar7;
        uVar11 = *(ushort *)((long)piVar7 - (long)*piVar7);
      }
      if ((uVar11 < 0xb) || (uVar11 < 0xd)) goto LAB_108c359a4;
      uVar12 = (ulong)*(ushort *)((long)piVar7 + lVar8 + 0xc);
      if (uVar12 == 0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar7 + uVar12);
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4,bVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    func_0x00010c018a80();
    _objc_release(puVar22);
    _objc_release(puVar23);
    _objc_release(puVar20);
    func_0x00010bfcf400(puVar16,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = PTR_PTR_1126db340;
    _objc_alloc(PTR_PTR_1126db340);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
       (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar12 == 0)) {
      lVar8 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar6 + uVar12);
      lVar8 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_108c36e84(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)*piVar6;
    uVar11 = *(ushort *)((long)piVar6 - lVar14);
    if (uVar11 < 7) {
      puVar20 = (undefined *)0x0;
LAB_108c35a7c:
      puVar23 = (undefined *)0x0;
LAB_108c35a80:
      uVar27 = 0;
LAB_108c35a90:
      uVar28 = 0;
      bVar4 = false;
      bVar3 = false;
      uVar29 = 0;
    }
    else {
      uVar12 = (ulong)((ushort *)((long)piVar6 - lVar14))[3];
      if (uVar12 == 0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar6 + uVar12);
        uVar2 = *puVar1;
        puVar20 = PTR_PTR_1126db348;
        _objc_alloc(PTR_PTR_1126db348);
        piVar7 = (int *)((long)puVar1 + (ulong)uVar2);
        uVar11 = *(ushort *)((long)piVar7 - (long)*piVar7);
        uVar27 = 0;
        if (((4 < uVar11) && (6 < uVar11)) &&
           (uVar12 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar12 != 0)) {
          uVar27 = *(undefined8 *)((long)piVar7 + uVar12);
        }
        func_0x00010c006120(uVar27);
        lVar14 = (long)*piVar6;
        uVar11 = *(ushort *)((long)piVar6 - lVar14);
      }
      lVar14 = -lVar14;
      if (uVar11 < 9) goto LAB_108c35a7c;
      uVar12 = (ulong)*(ushort *)((long)piVar6 + lVar14 + 8);
      if (uVar12 == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar6 + uVar12);
        puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = -(long)*piVar6;
        uVar11 = *(ushort *)((long)piVar6 - (long)*piVar6);
      }
      if (uVar11 < 0xb) goto LAB_108c35a80;
      uVar12 = (ulong)*(ushort *)((long)piVar6 + lVar14 + 10);
      uVar28 = 0;
      uVar27 = 0;
      if (uVar12 != 0) {
        uVar27 = *(undefined8 *)((long)piVar6 + uVar12);
      }
      if (uVar11 < 0xd) goto LAB_108c35a90;
      uVar12 = (ulong)*(ushort *)((long)piVar6 + lVar14 + 0xc);
      uVar29 = 0;
      if (uVar12 != 0) {
        uVar28 = *(undefined8 *)((long)piVar6 + uVar12);
      }
      if (uVar11 < 0xf) {
LAB_108c35bac:
        bVar3 = false;
LAB_108c35bb0:
        bVar4 = false;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)piVar6 + lVar14 + 0xe);
        if (uVar12 != 0) {
          uVar29 = *(undefined8 *)((long)piVar6 + uVar12);
        }
        if (uVar11 < 0x11) goto LAB_108c35bac;
        uVar12 = (ulong)*(ushort *)((long)piVar6 + lVar14 + 0x10);
        if (uVar12 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = *(char *)((long)piVar6 + uVar12) != '\0';
        }
        if ((uVar11 < 0x13) ||
           (uVar12 = (ulong)*(ushort *)((long)piVar6 + lVar14 + 0x12), uVar12 == 0))
        goto LAB_108c35bb0;
        bVar4 = *(char *)((long)piVar6 + uVar12) != '\0';
      }
    }
    func_0x00010bff73a0(uVar27,uVar28,uVar29,puVar9,param_2,lVar8,puVar20,puVar23,bVar3,bVar4);
    _objc_release(puVar23);
    _objc_release(puVar20);
    _objc_release(lVar8);
    func_0x00010c2446e0(puVar16,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
LAB_108c35ae8:
  func_0x00010c012540(puVar5,param_2,puVar25,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c361cc; end: 108c361ef; +[SCSnapchattersFriendFeedSummary objectClassFunctionPointer] */

undefined1  [16] FUN_108c361cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c361e8;
  auVar1._0_8_ = 0x108c361e0;
  return auVar1;
}



/* Entry: 108c361f0; end: 108c362eb;  */

void FUN_108c361f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126cb240;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c262900(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c362ec(puVar3,0xffffffffffffffff,lVar1,lVar2);
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



/* Entry: 108c362ec; end: 108c363b7;  */

undefined1 * FUN_108c362ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fde10;
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



/* Entry: 108c363b8; end: 108c3642b;  */

void FUN_108c363b8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3642c();
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



/* Entry: 108c3642c; end: 108c36783;  */

void FUN_108c3642c(undefined *param_1)

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
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar5,&UNK_10f50ca8f);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bfa3d00(param_1);
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
            _objc_opt_class(PTR_PTR_1126cb208);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_108c366d4;
            puVar5 = PTR_PTR_1126cb240;
            _objc_alloc(PTR_PTR_1126cb240);
            puVar2 = puVar3;
            func_0x00010bfa3d00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c262900(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108c362ec(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_108c36514;
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
      _objc_opt_class(PTR_PTR_1126cb208);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126cb240;
        _objc_alloc(PTR_PTR_1126cb240);
        puVar2 = puVar3;
        func_0x00010bfa3d00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c262900(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c362ec(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_108c36514:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108c366dc;
      }
LAB_108c366d4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c366dc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c36784; end: 108c367f7;  */

void FUN_108c36784(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3642c();
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



/* Entry: 108c367f8; end: 108c36857;  */

void FUN_108c367f8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cb208;
    _objc_alloc(PTR_PTR_1126cb208);
    func_0x00010c012540();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c36858; end: 108c36887; -[SCSnapchattersFriendFeedSummaryChangeRequest .cxx_destruct] */

void FUN_108c36858(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c36888; end: 108c36893; -[SCSnapchattersFriendFeedSummaryChangeRequest table] */

undefined * FUN_108c36888(void)

{
  return &UNK_10f50ca6f;
}



/* Entry: 108c36894; end: 108c368db; -[SCSnapchattersFriendFeedSummaryChangeRequest createTableWithSQLite:] */

void FUN_108c36894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df96f5f,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c368dc; end: 108c36c63; -[SCSnapchattersFriendFeedSummaryChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c368dc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108c367f8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c36c64(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50cb17);
    if (lVar6 == 0) goto LAB_108c36c00;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108c36c00;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cb208);
    func_0x00010c21c9a0(puVar7);
LAB_108c36be8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50cadc);
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
            _objc_opt_class(PTR_PTR_1126cb208);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c36c0c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108c36c0c;
    }
    FUN_108c367f8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c36c64(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50cb5f);
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
        _objc_opt_class(PTR_PTR_1126cb208);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108c36be8;
      }
    }
LAB_108c36c00:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108c36c0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c36c64; end: 108c36e83;  */

ulong FUN_108c36c64(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c262900(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3812000000;
  pcStack_a0 = FUN_108c371d0;
  uStack_98 = 0x108c371dc;
  pcStack_90 = "";
  uStack_88 = 0;
  func_0x00010c0c0120();
  uVar1 = *(uint *)(puStack_78 + 3);
  uVar2 = *(undefined4 *)(puStack_b0 + 6);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108c370a0(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x000100c3b11c(param_1,8,uVar2);
  func_0x000107c27ddc(param_1,4,uVar7 & 0xffffffff);
  func_0x000107c27dec(param_1,6,uVar1 & 0xff,0);
  func_0x000107c27dc0(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c36e84; end: 108c3709f;  */

void FUN_108c36e84(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_108c36fc8;
  }
  puVar6 = PTR_PTR_1126b14c0;
  _objc_alloc(PTR_PTR_1126b14c0);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_108c36f70:
    puVar7 = (undefined *)0x0;
LAB_108c36f74:
    puVar8 = (undefined *)0x0;
LAB_108c36f78:
    lVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    lVar3 = -lVar3;
    if (uVar2 < 7) goto LAB_108c36f70;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 6);
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar2 < 9) goto LAB_108c36f74;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 8);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar2 < 0xb) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar3 + 10), uVar4 == 0))
    goto LAB_108c36f78;
    puVar1 = (uint *)((long)param_1 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  func_0x000107c2a820(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c020(puVar6,param_2,puVar5,puVar7,puVar8,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_108c36fc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c370a0; end: 108c371cf;  */

undefined8 FUN_108c370a0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108c37180;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108c37180;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108c37140;
    param_1 = 0;
  }
  else {
LAB_108c37140:
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
LAB_108c37180:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c371d0; end: 108c371df;  */

void FUN_108c371d0(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 108c371e0; end: 108c37537;  */

void FUN_108c371e0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 1;
  uVar8 = *(ulong *)(param_2 + 0x30);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf16620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010bf16620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    FUN_108c37ad4(uVar8,lVar5);
    _objc_release(lVar5);
    uVar10 = uVar10 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c25c040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c25c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar6 = lVar5;
    func_0x00010bf529e0(lVar5);
    func_0x00010bf9c880(lVar5);
    *(undefined1 *)(uVar8 + 0x46) = 1;
    iVar1 = *(int *)(uVar8 + 0x20);
    iVar2 = *(int *)(uVar8 + 0x30);
    iVar3 = *(int *)(uVar8 + 0x28);
    func_0x000107c27db8(uVar8,6);
    func_0x000107c27db0(uVar8,4,lVar6,0);
    uVar9 = uVar8;
    func_0x000107c27dc0(uVar8,(iVar1 - iVar2) + iVar3);
    _objc_release(lVar5);
    _objc_release(lVar5);
    uVar9 = uVar9 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bfb9b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  FUN_108c370a0(uVar8,lVar4);
  func_0x00010befcb40(param_3);
  uVar11 = param_1;
  func_0x00010c13ff00(param_3);
  uVar12 = uVar11;
  func_0x00010bf1a5c0(param_3);
  lVar5 = param_3;
  func_0x00010c07fc80(param_3);
  lVar6 = param_3;
  func_0x00010c073980(param_3);
  *(undefined1 *)(uVar8 + 0x46) = 1;
  iVar1 = *(int *)(uVar8 + 0x20);
  iVar2 = *(int *)(uVar8 + 0x30);
  iVar3 = *(int *)(uVar8 + 0x28);
  func_0x000107c27db8(uVar12,0,uVar8,0xe);
  func_0x000107c27db8(uVar11,0,uVar8,0xc);
  func_0x000107c27db8(param_1,0,uVar8,10);
  func_0x000107c27ddc(uVar8,8,uVar7 & 0xffffffff);
  if (uVar9 != 0) {
    func_0x000107c27db4(uVar8,4);
    func_0x000107c27de0(uVar8,6,(((*(int *)(uVar8 + 0x20) - *(int *)(uVar8 + 0x30)) +
                                 *(int *)(uVar8 + 0x28)) - (int)uVar9) + 4,0);
  }
  FUN_108c37ce0(uVar8,uVar10);
  func_0x000107c27dec(uVar8,0x12,lVar6,0);
  func_0x000107c27dec(uVar8,0x10,lVar5,0);
  func_0x000107c27dc0(uVar8,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar4);
  _objc_release(param_3);
  *(int *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x30) = (int)uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c37538; end: 108c37ad3;  */

ulong FUN_108c37538(long param_1,ulong param_2)

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
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar18 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110ab9010;
  pcStack_108 = FUN_108c37d38;
  pppuStack_f8 = &ppuStack_110;
  uVar12 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar12);
  uVar5 = uVar12;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (uVar5 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar21 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar21 = (undefined4 *)0x0;
    puVar16 = (undefined4 *)0x0;
    do {
      uVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(uVar12);
        }
        uVar17 = *(undefined8 *)(uVar15 * 8);
        _objc_retain(uVar17);
        _objc_retain(uVar17);
        uStack_118 = uVar17;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_108c379d8;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,uVar18,&uStack_118);
        _objc_release(uStack_118);
        if (puVar21 < puVar16) {
          *puVar21 = (int)pppuVar6;
          puVar20 = puStack_168;
        }
        else {
          lVar19 = (long)puVar21 - (long)puStack_168;
          uVar8 = (lVar19 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            FUN_108c38080();
LAB_108c379d8:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x108c379dc);
            (*pcVar4)();
          }
          uVar14 = (long)puVar16 - (long)puStack_168 >> 1;
          if (uVar14 <= uVar8) {
            uVar14 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar16 - (long)puStack_168)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_108c379d8;
          }
          lVar7 = uVar14 << 2;
          __Znwm();
          puVar21 = (undefined4 *)(lVar7 + lVar19);
          puVar16 = (undefined4 *)(lVar7 + uVar14 * 4);
          puVar20 = puVar21 + -(lVar19 >> 2);
          *puVar21 = (int)pppuVar6;
          _memcpy(puVar20,puStack_168,lVar19);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar20;
        puVar21 = puVar21 + 1;
        _objc_release(uVar17);
        uVar15 = uVar15 + 1;
      } while (uVar5 != uVar15);
      uVar5 = uVar12;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar12);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar13 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_108c37788;
    lVar13 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar13))();
LAB_108c37788:
  uVar5 = param_2;
  func_0x00010bfce980();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  FUN_108c370a0(uVar18,uVar5);
  uVar8 = param_2;
  func_0x00010c07fc80();
  uVar12 = (long)puVar21 - (long)puStack_168;
  puVar16 = (undefined4 *)&UNK_10df9723d;
  if (uVar12 != 0) {
    puVar16 = puStack_168;
  }
  *(undefined1 *)(uVar18 + 0x46) = 1;
  func_0x000107c27dc8(uVar18,uVar12,4);
  func_0x000107c27dc8(uVar18,uVar12,4);
  if (puStack_168 != puVar21) {
    lVar13 = (long)uVar12 >> 2;
    do {
      iVar3 = puVar16[lVar13 + -1];
      func_0x000107c27db4(uVar18,4);
      func_0x000107c27dcc(uVar18,(((*(int *)(uVar18 + 0x20) - *(int *)(uVar18 + 0x30)) +
                                  *(int *)(uVar18 + 0x28)) - iVar3) + 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(undefined1 *)(uVar18 + 0x46) = 0;
  uVar14 = uVar18;
  func_0x000107c27dcc(uVar18,uVar12 >> 2);
  uVar12 = param_2;
  func_0x00010bfddc00();
  uVar9 = param_2;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar18;
  FUN_108c370a0(uVar18,uVar9);
  uVar11 = param_2;
  func_0x00010c234420(param_2);
  *(undefined1 *)(uVar18 + 0x46) = 1;
  iVar3 = *(int *)(uVar18 + 0x20);
  iVar1 = *(int *)(uVar18 + 0x30);
  iVar2 = *(int *)(uVar18 + 0x28);
  func_0x000107c27ddc(uVar18,0xc,uVar10 & 0xffffffff);
  if ((int)uVar14 != 0) {
    func_0x000107c27db4(uVar18,4);
    func_0x000107c27de0(uVar18,8,(((*(int *)(uVar18 + 0x20) - *(int *)(uVar18 + 0x30)) +
                                  *(int *)(uVar18 + 0x28)) - (int)uVar14) + 4,0);
  }
  func_0x000107c27ddc(uVar18,4,uVar15 & 0xffffffff);
  func_0x000107c27dec(uVar18,0xe,uVar11,0);
  func_0x000107c27dec(uVar18,10,uVar12,0);
  func_0x000107c27dec(uVar18,6,(int)uVar8,0);
  uVar12 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x000107c27dc0();
  _objc_release(uVar9);
  _objc_release(uVar5);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar5 = param_2;
  _objc_release();
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv(puStack_168);
    }
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar12);
    uVar18 = uVar12;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar18 == 0) {
      uVar15 = 0;
    }
    else {
      uVar8 = uVar12;
      func_0x00010bf1bae0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      FUN_108c308f8(uVar5,uVar8);
      _objc_release(uVar8);
      uVar15 = uVar15 & 0xffffffff;
    }
    _objc_release(uVar18);
    uVar18 = uVar12;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    FUN_108c370a0(uVar5,uVar18);
    uVar14 = uVar12;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    FUN_108c370a0(uVar5,uVar14);
    uVar10 = uVar12;
    func_0x00010bf85d80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    FUN_108c370a0(uVar5,uVar10);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    func_0x000100c3b32c(uVar5,10,uVar15);
    func_0x000107c27ddc(uVar5,8,uVar11 & 0xffffffff);
    func_0x000107c27ddc(uVar5,6,uVar9 & 0xffffffff);
    func_0x000107c27ddc(uVar5,4,uVar8 & 0xffffffff);
    func_0x000107c27dc0(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(uVar18);
    _objc_release(uVar12);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 108c37ad4; end: 108c37cdf;  */

ulong FUN_108c37ad4(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    FUN_108c308f8(param_1,lVar5);
    _objc_release(lVar5);
    uVar10 = uVar10 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_108c370a0(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108c370a0(param_1,lVar5);
  lVar8 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_108c370a0(param_1,lVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000100c3b32c(param_1,10,uVar10);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c37ce0; end: 108c37d37;  */

void FUN_108c37ce0(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ushort uVar4;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_2) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar3 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar3) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar3 = *(ulong **)(param_1 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | 0x400000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar4 = *(ushort *)(param_1 + 0x44);
  if (uVar4 < 5) {
    uVar4 = 4;
  }
  *(ushort *)(param_1 + 0x44) = uVar4;
  return;
}



/* Entry: 108c37d38; end: 108c3807f;  */

ulong FUN_108c37d38(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf16620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar12 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf16620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    FUN_108c37ad4(param_1,lVar5);
    _objc_release(lVar5);
    uVar12 = uVar12 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar13 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010bf1a5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar6 = lVar5;
    func_0x00010c0d0e40(lVar5);
    lVar7 = lVar5;
    func_0x00010bf65700(lVar5);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    func_0x000107c27dec(param_1,6,lVar7,0);
    func_0x000107c27dec(param_1,4,lVar6,0);
    uVar13 = param_1;
    func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
    _objc_release(lVar5);
    _objc_release(lVar5);
    uVar13 = uVar13 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c280540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_108c370a0(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010bf41040();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_108c370a0(param_1,lVar5);
  lVar6 = param_2;
  func_0x00010c268a60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_108c370a0(param_1,lVar6);
  lVar7 = param_2;
  func_0x00010c2996e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_108c370a0(param_1,lVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000100c3b07c(param_1,0xe,uVar13);
  func_0x000107c27ddc(param_1,0xc,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,10,uVar10 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar8 & 0xffffffff);
  FUN_108c37ce0(param_1,uVar12);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c38080; end: 108c38093;  */

void FUN_108c38080(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 108c38094; end: 108c3809b;  */

void FUN_108c38094(void)

{
  return;
}



/* Entry: 108c3809c; end: 108c380cf;  */

void FUN_108c3809c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ab9010;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108c380d0; end: 108c3810f;  */

void FUN_108c380d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ab9010;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c38110; end: 108c3814b;  */

long FUN_108c38110(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110ab9080);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108c3814c; end: 108c38157;  */

undefined ** FUN_108c3814c(void)

{
  return &PTR_DAT_110ab9080;
}



/* Entry: 108c38158; end: 108c381bb;  */

undefined ** FUN_108c38158(void)

{
  int iVar1;
  
  if ((bRam0000000113829758 & 1) == 0) {
    iVar1 = 0x13829758;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291cc8,0x100000000);
      ___cxa_guard_release(0x113829758);
    }
  }
  return &PTR_PTR_113291cc8;
}



/* Entry: 108c381bc; end: 108c38243;  */

void FUN_108c381bc(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c38244; end: 108c382cf;  */

void FUN_108c38244(long param_1,undefined1 *param_2)

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



/* Entry: 108c382d0; end: 108c382db; +[SCSnapchattersFriendScore table] */

undefined * FUN_108c382d0(void)

{
  return &UNK_10f50cbb1;
}



/* Entry: 108c382dc; end: 108c383f3; +[SCSnapchattersFriendScore immutableObjectParse:bufferSize:] */

void FUN_108c382dc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126db270;
  _objc_alloc(PTR_PTR_1126db270);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
    uVar5 = 0;
    uVar9 = 0;
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
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    uVar9 = 0;
    if (uVar3 < 7) {
      uVar5 = 0;
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6));
      if (uVar7 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)((long)piVar1 + uVar7);
      }
      if ((8 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar6)), uVar7 != 0)) {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
      }
    }
  }
  func_0x00010c05ba20(uVar9,puVar4,param_2,puVar8,uVar5);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c383f4; end: 108c38417; +[SCSnapchattersFriendScore objectClassFunctionPointer] */

undefined1  [16] FUN_108c383f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c38410;
  auVar1._0_8_ = 0x108c38408;
  return auVar1;
}



/* Entry: 108c38418; end: 108c384cb;  */

undefined1 *
FUN_108c38418(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
    puStack_48 = PTR_PTR_1126fde18;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108c384cc; end: 108c38807;  */

void FUN_108c384cc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x000107c310d8(puVar1,&UNK_10f50cbcb);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_108c38774;
        puVar5 = param_1;
        func_0x00010c2923e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126db270);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_108c3876c;
          puVar5 = PTR_PTR_1126db2a0;
          _objc_alloc(PTR_PTR_1126db2a0);
          puVar1 = puVar3;
          func_0x00010c2923e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c150c20(puVar3);
          func_0x00010c088b80(puVar3);
          FUN_108c38418(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_108c385b4;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126db270);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126db2a0;
        _objc_alloc(PTR_PTR_1126db2a0);
        puVar1 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c150c20(puVar3);
        func_0x00010c088b80(puVar3);
        FUN_108c38418(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_108c385b4:
        _objc_release(puVar1);
        goto LAB_108c38774;
      }
LAB_108c3876c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c38774:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c38808; end: 108c3887b;  */

void FUN_108c38808(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c384cc();
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



/* Entry: 108c3887c; end: 108c38a63;  */

void FUN_108c3887c(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2a0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_108c384cc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar4 = PTR_PTR_1126db2a0;
    _objc_retain(param_2);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126db2a0;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c150c20(param_2);
      func_0x00010c088b80(param_2);
      FUN_108c38418(puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar4 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_2;
    func_0x00010c150c20();
    *(undefined **)(puVar1 + 0x20) = puVar4;
    func_0x00010c088b80(param_2);
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c38a64; end: 108c38ac7;  */

void FUN_108c38a64(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db270;
    _objc_alloc(PTR_PTR_1126db270);
    func_0x00010c05ba20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c38ac8; end: 108c38ad3; -[SCSnapchattersFriendScoreChangeRequest .cxx_destruct] */

void FUN_108c38ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c38ad4; end: 108c38adf; -[SCSnapchattersFriendScoreChangeRequest table] */

undefined * FUN_108c38ad4(void)

{
  return &UNK_10f50cbb1;
}



/* Entry: 108c38ae0; end: 108c38b27; -[SCSnapchattersFriendScoreChangeRequest createTableWithSQLite:] */

void FUN_108c38ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df9723e,0x87,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c38b28; end: 108c38eaf; -[SCSnapchattersFriendScoreChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c38b28(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108c38a64(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c38eb0(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50cc47);
    if (lVar6 == 0) goto LAB_108c38e4c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108c38e4c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db270);
    func_0x00010c21c9a0(puVar7);
LAB_108c38e34:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50cc12);
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
            _objc_opt_class(PTR_PTR_1126db270);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c38e58;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108c38e58;
    }
    FUN_108c38a64(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c38eb0(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50cc89);
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
        _objc_opt_class(PTR_PTR_1126db270);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108c38e34;
      }
    }
LAB_108c38e4c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108c38e58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c38eb0; end: 108c390a7;  */

ulong FUN_108c38eb0(undefined8 param_1,ulong param_2,char *param_3)

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
    goto LAB_108c38fb0;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_2,pcVar5,pcVar6);
    goto LAB_108c38fb0;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_108c38f70;
    uVar9 = 0;
  }
  else {
LAB_108c38f70:
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
LAB_108c38fb0:
  _objc_release(pcVar4);
  pcVar5 = param_3;
  func_0x00010c150c20(param_3);
  func_0x00010c088b80(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_1,0,param_2,8);
  func_0x000107c27db0(param_2,6,pcVar5,0);
  func_0x000107c27ddc(param_2,4,uVar9 & 0xffffffff);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108c390a8; end: 108c3915f;  */

undefined8 FUN_108c390a8(void)

{
  int iVar1;
  
  if ((bRam00000001138297d0 & 1) == 0) {
    iVar1 = 0x138297d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829768 = 0xe;
      puRam0000000113829770 = &UNK_10f50ccd5;
      uRam0000000113829778 = 0x10001;
      pcRam0000000113829780 = FUN_108c39160;
      pcRam0000000113829788 = FUN_108c39198;
      ppuRam0000000113829760 = &PTR_DAT_110ab79c0;
      uRam00000001138297a0 = 0;
      uRam0000000113829798 = 0;
      uRam00000001138297b0 = 0;
      uRam00000001138297a8 = 0;
      uRam00000001138297c0 = 0;
      uRam00000001138297b8 = 0;
      uRam00000001138297c8 = 0;
      ___cxa_atexit(0x108bf3df0,0x113829760,0x100000000);
      ___cxa_guard_release(0x1138297d0);
    }
  }
  return 0x113829760;
}



/* Entry: 108c39160; end: 108c39197;  */

undefined4 FUN_108c39160(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c39198; end: 108c391eb;  */

undefined8 FUN_108c39198(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108c391ec; end: 108c391f7; +[SCSnapchattersTopDisplaySuggestion table] */

undefined * FUN_108c391ec(void)

{
  return &UNK_10f50ccda;
}


