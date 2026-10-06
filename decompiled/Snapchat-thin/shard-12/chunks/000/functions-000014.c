/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c391f8; end: 108c393b7; +[SCSnapchattersTopDisplaySuggestion immutableObjectParse:bufferSize:] */

void FUN_108c391f8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126db158;
  _objc_alloc(PTR_PTR_1126db158);
  lVar7 = (long)*piVar1;
  puVar8 = (ushort *)((long)piVar1 - lVar7);
  uVar3 = *puVar8;
  if (uVar3 < 5) {
    uVar10 = 0;
  }
  else {
    if ((ulong)puVar8[2] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[2]);
    }
    if (6 < uVar3) {
      if ((ulong)puVar8[3] == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + (ulong)puVar8[3]);
        puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2 + 1;
        if (*puVar2 != 0) {
          do {
            puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar11 + (ulong)*puVar11 + 4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 != (undefined *)0x0) {
              func_0x00010befa120(puVar5,param_2,puVar9);
            }
            _objc_release(puVar9);
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar2 + 1 + *puVar2);
        }
        puVar9 = puVar5;
        func_0x00010bf51e00(puVar5);
        _objc_release(puVar5);
        lVar7 = (long)*piVar1;
        uVar3 = *(ushort *)((long)piVar1 - lVar7);
      }
      uVar12 = 0;
      if ((8 < uVar3) &&
         (uVar6 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar7)), uVar12 = 0, uVar6 != 0)) {
        uVar12 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      goto LAB_108c39328;
    }
  }
  puVar9 = (undefined *)0x0;
  uVar12 = 0;
LAB_108c39328:
  func_0x00010c032e20(uVar12,puVar4,param_2,uVar10,puVar9);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c393b8; end: 108c393db; +[SCSnapchattersTopDisplaySuggestion objectClassFunctionPointer] */

undefined1  [16] FUN_108c393b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c393d4;
  auVar1._0_8_ = 0x108c393cc;
  return auVar1;
}



/* Entry: 108c393dc; end: 108c39443;  */

void FUN_108c393dc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db158;
    _objc_alloc(PTR_PTR_1126db158);
    func_0x00010c032e20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c39444; end: 108c3944f; -[SCSnapchattersTopDisplaySuggestionChangeRequest .cxx_destruct] */

void FUN_108c39444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c39450; end: 108c3945b; -[SCSnapchattersTopDisplaySuggestionChangeRequest table] */

undefined * FUN_108c39450(void)

{
  return &UNK_10f50ccda;
}



/* Entry: 108c3945c; end: 108c394a3; -[SCSnapchattersTopDisplaySuggestionChangeRequest createTableWithSQLite:] */

void FUN_108c3945c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df972c5,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c394a4; end: 108c3983b; -[SCSnapchattersTopDisplaySuggestionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c394a4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_108c393dc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c3983c(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50cd3b);
    if (lVar5 == 0) goto LAB_108c397d8;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,uVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_108c397d8;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db158);
    func_0x00010c21c9a0(puVar8);
LAB_108c397c0:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50ccfd);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126db158);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c397e4;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_108c397e4;
    }
    FUN_108c393dc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c3983c(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50cd84);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,uVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126db158);
        func_0x00010c21c9a0(puVar8);
        goto LAB_108c397c0;
      }
    }
LAB_108c397d8:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_108c397e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c3983c; end: 108c39ba7;  */

ulong FUN_108c3983c(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  int aiStack_134 [3];
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  lStack_128 = 0;
  aiStack_134[1] = 0;
  aiStack_134[2] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar4);
        }
        pcVar11 = *(char **)(lStack_128 + lVar13 * 8);
        _objc_retain(pcVar11);
        if (pcVar11 != (char *)0x0) {
          pcVar6 = pcVar11;
          _CFStringGetCStringPtr(pcVar11,0x8000100);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = pcVar11;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (char *)0x0) {
              pcVar6 = pcVar11;
              func_0x00010bf64940();
              _objc_retainAutoreleasedReturnValue();
              if (pcVar6 != (char *)0x0) goto LAB_108c39980;
              iVar3 = 0;
            }
            else {
LAB_108c39980:
              _objc_retainAutorelease(pcVar6);
              pcVar8 = pcVar6;
              func_0x00010bf25f00();
              pcVar9 = pcVar6;
              func_0x00010c08fa60(pcVar6);
              pcVar7 = "";
              if (pcVar8 != (char *)0x0) {
                pcVar7 = pcVar8;
              }
              uVar10 = param_1;
              func_0x000107c27df0(param_1,pcVar7,pcVar9);
              iVar3 = (int)uVar10;
            }
            _objc_release(pcVar6);
          }
          else {
            pcVar7 = pcVar6;
            _strlen(pcVar6);
            uVar10 = param_1;
            func_0x000107c27df0(param_1,pcVar6,pcVar7);
            iVar3 = (int)uVar10;
          }
          _objc_release(pcVar11);
          aiStack_134[0] = iVar3;
          if (iVar3 != 0) {
            func_0x000100c47d40(&lStack_150,aiStack_134);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010c0f0be0(param_2);
  lVar4 = 0x1130c2400;
  if (lStack_148 - lStack_150 != 0) {
    lVar4 = lStack_150;
  }
  uVar10 = param_1;
  func_0x000100c47e34(param_1,lVar4,lStack_148 - lStack_150 >> 2);
  func_0x00010c274f20(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x000107c27db8(param_1,8);
  func_0x000100c47f00(param_1,6,uVar10 & 0xffffffff);
  func_0x000107c27de0(param_1,4,lVar5,0);
  func_0x000107c27dc0(param_1,(iVar3 - iVar1) + iVar2);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  lVar4 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(param_2);
  __Unwind_Resume(lVar4);
  if ((bRam0000000113829848 & 1) == 0) {
    iVar3 = 0x13829848;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001138297e0 = 0xe;
      puRam00000001138297e8 = &UNK_10f50cdd7;
      uRam00000001138297f0 = 0x10001;
      pcRam00000001138297f8 = FUN_108c39c60;
      pcRam0000000113829800 = FUN_108c39c98;
      ppuRam00000001138297d8 = &PTR_DAT_110ab79c0;
      uRam0000000113829818 = 0;
      uRam0000000113829810 = 0;
      uRam0000000113829828 = 0;
      uRam0000000113829820 = 0;
      uRam0000000113829838 = 0;
      uRam0000000113829830 = 0;
      uRam0000000113829840 = 0;
      ___cxa_atexit(0x108bf3df0,0x1138297d8,0x100000000);
      ___cxa_guard_release(0x113829848);
    }
  }
  return 0x1138297d8;
}



/* Entry: 108c39ba8; end: 108c39c5f;  */

undefined8 FUN_108c39ba8(void)

{
  int iVar1;
  
  if ((bRam0000000113829848 & 1) == 0) {
    iVar1 = 0x13829848;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138297e0 = 0xe;
      puRam00000001138297e8 = &UNK_10f50cdd7;
      uRam00000001138297f0 = 0x10001;
      pcRam00000001138297f8 = FUN_108c39c60;
      pcRam0000000113829800 = FUN_108c39c98;
      ppuRam00000001138297d8 = &PTR_DAT_110ab79c0;
      uRam0000000113829818 = 0;
      uRam0000000113829810 = 0;
      uRam0000000113829828 = 0;
      uRam0000000113829820 = 0;
      uRam0000000113829838 = 0;
      uRam0000000113829830 = 0;
      uRam0000000113829840 = 0;
      ___cxa_atexit(0x108bf3df0,0x1138297d8,0x100000000);
      ___cxa_guard_release(0x113829848);
    }
  }
  return 0x1138297d8;
}



/* Entry: 108c39c60; end: 108c39c97;  */

undefined4 FUN_108c39c60(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c39c98; end: 108c39ceb;  */

undefined8 FUN_108c39c98(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108c39cec; end: 108c39cf7; +[SCSnapchattersDisplaySuggestion table] */

undefined * FUN_108c39cec(void)

{
  return &UNK_10f50cddc;
}



/* Entry: 108c39cf8; end: 108c39e73; +[SCSnapchattersDisplaySuggestion immutableObjectParse:bufferSize:] */

void FUN_108c39cf8(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  puVar3 = PTR_PTR_1126db000;
  _objc_alloc(PTR_PTR_1126db000);
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
      goto LAB_108c39e10;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108c39e10:
  func_0x00010c032e00(puVar3,param_2,uVar7,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c39e74; end: 108c39e97; +[SCSnapchattersDisplaySuggestion objectClassFunctionPointer] */

undefined1  [16] FUN_108c39e74(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c39e90;
  auVar1._0_8_ = 0x108c39e88;
  return auVar1;
}



/* Entry: 108c39e98; end: 108c39f73;  */

void FUN_108c39e98(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126db298;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c0f0be0(param_2);
    lVar2 = param_2;
    func_0x00010c292720(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c39f74(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c39f74; end: 108c3a017;  */

undefined1 * FUN_108c39f74(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fde28;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined4 *)((long)plVar1 + 0x14) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108c3a018; end: 108c3a08b;  */

void FUN_108c3a018(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3a08c();
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



/* Entry: 108c3a08c; end: 108c3a35f;  */

void FUN_108c3a08c(undefined *param_1)

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
      func_0x000107c310d8(puVar5,&UNK_10f50cdfc);
      if (puVar5 != (undefined *)0x0) {
        puVar1 = param_1;
        func_0x00010c0f0be0(param_1);
        _sqlite3_bind_int64(puVar5,1,(ulong)puVar1 & 0xffffffff);
        puVar1 = puVar5;
        _sqlite3_step();
        if ((int)puVar1 == 100) {
          puVar1 = puVar5;
          _sqlite3_column_int64(puVar5,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126db000);
          _sqlite3_column_blob(puVar5,1);
          _sqlite3_column_bytes(puVar5,1);
          puVar3 = puVar2;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar2);
          _sqlite3_reset(puVar5);
          if (puVar3 == (undefined *)0x0) goto LAB_108c3a2d4;
          puVar5 = PTR_PTR_1126db298;
          _objc_alloc(PTR_PTR_1126db298);
          puVar2 = puVar3;
          func_0x00010c0f0be0(puVar3);
          puVar4 = puVar3;
          func_0x00010c292720(puVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_108c39f74(puVar5,puVar1,puVar2,puVar4);
          param_1 = puVar3;
          goto LAB_108c3a170;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126db000);
      puVar2 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar2 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126db298;
        _objc_alloc(PTR_PTR_1126db298);
        puVar3 = puVar2;
        func_0x00010c0f0be0(puVar2);
        puVar4 = puVar2;
        func_0x00010c292720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c39f74(puVar5,puVar1,puVar3,puVar4);
        param_1 = puVar2;
LAB_108c3a170:
        _objc_release(puVar4);
        goto LAB_108c3a2dc;
      }
LAB_108c3a2d4:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c3a2dc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c3a360; end: 108c3a3d3;  */

void FUN_108c3a360(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3a08c();
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



/* Entry: 108c3a3d4; end: 108c3a437;  */

void FUN_108c3a3d4(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db000;
    _objc_alloc(PTR_PTR_1126db000);
    func_0x00010c032e00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c3a438; end: 108c3a443; -[SCSnapchattersDisplaySuggestionChangeRequest .cxx_destruct] */

void FUN_108c3a438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c3a444; end: 108c3a44f; -[SCSnapchattersDisplaySuggestionChangeRequest table] */

undefined * FUN_108c3a444(void)

{
  return &UNK_10f50cddc;
}



/* Entry: 108c3a450; end: 108c3a497; -[SCSnapchattersDisplaySuggestionChangeRequest createTableWithSQLite:] */

void FUN_108c3a450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df97352,0x8a,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c3a498; end: 108c3a82f; -[SCSnapchattersDisplaySuggestionChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c3a498(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_108c3a3d4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c3a830(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50ce82);
    if (lVar5 == 0) goto LAB_108c3a7cc;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,uVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_108c3a7cc;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db000);
    func_0x00010c21c9a0(puVar8);
LAB_108c3a7b4:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50ce47);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126db000);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c3a7d8;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_108c3a7d8;
    }
    FUN_108c3a3d4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c3a830(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50cec8);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,uVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126db000);
        func_0x00010c21c9a0(puVar8);
        goto LAB_108c3a7b4;
      }
    }
LAB_108c3a7cc:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_108c3a7d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c3a830; end: 108c3ab7f;  */

ulong FUN_108c3a830(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  int aiStack_134 [3];
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  lStack_128 = 0;
  aiStack_134[1] = 0;
  aiStack_134[2] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(uVar4);
  uVar5 = uVar4;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar13 = *plStack_120;
    do {
      uVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(uVar4);
        }
        pcVar12 = *(char **)(lStack_128 + uVar14 * 8);
        _objc_retain(pcVar12);
        if (pcVar12 != (char *)0x0) {
          pcVar6 = pcVar12;
          _CFStringGetCStringPtr(pcVar12,0x8000100);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = pcVar12;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (char *)0x0) {
              pcVar6 = pcVar12;
              func_0x00010bf64940();
              _objc_retainAutoreleasedReturnValue();
              if (pcVar6 != (char *)0x0) goto LAB_108c3a974;
              iVar3 = 0;
            }
            else {
LAB_108c3a974:
              _objc_retainAutorelease(pcVar6);
              pcVar8 = pcVar6;
              func_0x00010bf25f00();
              pcVar9 = pcVar6;
              func_0x00010c08fa60(pcVar6);
              pcVar7 = "";
              if (pcVar8 != (char *)0x0) {
                pcVar7 = pcVar8;
              }
              uVar10 = param_1;
              func_0x000107c27df0(param_1,pcVar7,pcVar9);
              iVar3 = (int)uVar10;
            }
            _objc_release(pcVar6);
          }
          else {
            pcVar7 = pcVar6;
            _strlen(pcVar6);
            uVar10 = param_1;
            func_0x000107c27df0(param_1,pcVar6,pcVar7);
            iVar3 = (int)uVar10;
          }
          _objc_release(pcVar12);
          aiStack_134[0] = iVar3;
          if (iVar3 != 0) {
            func_0x000100c47d40(&lStack_150,aiStack_134);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      uVar5 = uVar4;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c0f0be0(param_2);
  lVar13 = 0x1130c2400;
  if (lStack_148 - lStack_150 != 0) {
    lVar13 = lStack_150;
  }
  uVar5 = param_1;
  func_0x000100c47e34(param_1,lVar13,lStack_148 - lStack_150 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x000100c47f00(param_1,6,uVar5 & 0xffffffff);
  func_0x000107c27de0(param_1,4,uVar4,0);
  puVar11 = (undefined1 *)(ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x000107c27dc0();
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  uVar4 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  __Unwind_Resume(uVar4);
  _objc_retain();
  _objc_retain(uVar4);
  *puVar11 = 0;
  uVar5 = uVar4;
  func_0x00010c27dd80(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar4);
  return uVar5;
}



/* Entry: 108c3ab80; end: 108c3abd3;  */

undefined8 FUN_108c3ab80(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108c3abd4; end: 108c3abf7; +[SCSnapchattersDeltaSyncMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_108c3abd4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c3abf0;
  auVar1._0_8_ = 0x108c3abe8;
  return auVar1;
}



/* Entry: 108c3abf8; end: 108c3ac6b;  */

void FUN_108c3abf8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  func_0x000100c411dc();
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



/* Entry: 108c3ac6c; end: 108c3acbf;  */

undefined8 FUN_108c3ac6c(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108c3acc0; end: 108c3ace3; +[SCSnapchattersCountSummary objectClassFunctionPointer] */

undefined1  [16] FUN_108c3acc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c3acdc;
  auVar1._0_8_ = 0x108c3acd4;
  return auVar1;
}



/* Entry: 108c3ace4; end: 108c3ad57;  */

void FUN_108c3ace4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  func_0x000100c442a8();
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



/* Entry: 108c3ad58; end: 108c3adbb;  */

undefined ** FUN_108c3ad58(void)

{
  int iVar1;
  
  if ((bRam0000000113829940 & 1) == 0) {
    iVar1 = 0x13829940;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291d38,0x100000000);
      ___cxa_guard_release(0x113829940);
    }
  }
  return &PTR_PTR_113291d38;
}



/* Entry: 108c3adbc; end: 108c3ae43;  */

void FUN_108c3adbc(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c3ae44; end: 108c3aecf;  */

void FUN_108c3ae44(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0faf60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c3aed0; end: 108c3aedb; +[SCSnapchattersContactNonSnapchatter table] */

undefined * FUN_108c3aed0(void)

{
  return &UNK_10f50d19f;
}



/* Entry: 108c3aedc; end: 108c3b26f; +[SCSnapchattersContactNonSnapchatter immutableObjectParse:bufferSize:] */

void FUN_108c3aedc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126bb3f0;
  _objc_alloc(PTR_PTR_1126bb3f0);
  lVar5 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar6 < 5) {
    puVar8 = (undefined *)0x0;
LAB_108c3afd0:
    puVar9 = (undefined *)0x0;
LAB_108c3afd4:
    uVar10 = 0;
    uVar14 = 0;
LAB_108c3afe4:
    uVar15 = 0;
    bVar3 = false;
    uVar16 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar6 < 7) goto LAB_108c3afd0;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 9) goto LAB_108c3afd4;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    uVar15 = 0;
    uVar14 = 0;
    if (uVar7 != 0) {
      uVar14 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar6 < 0xb) {
      uVar10 = 0;
      goto LAB_108c3afe4;
    }
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
    if (uVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar6 < 0xd) goto LAB_108c3afe4;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc);
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar15 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar6 < 0xf) {
      bVar3 = false;
      uVar16 = uVar17;
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xe);
      if (uVar7 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)((long)piVar1 + uVar7) != '\0';
      }
      uVar16 = 0;
      if (0x10 < uVar6) {
        uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x10);
        if (uVar7 != 0) {
          uVar17 = *(undefined8 *)((long)piVar1 + uVar7);
        }
        uVar16 = uVar17;
        if (0x12 < uVar6) {
          uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x12);
          if (uVar7 == 0) {
            puVar11 = (undefined *)0x0;
          }
          else {
            puVar2 = (uint *)((long)piVar1 + uVar7);
            puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar2 + (ulong)*puVar2 + 4);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = -(long)*piVar1;
            uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
          }
          if (uVar6 < 0x15) {
            puVar13 = (undefined *)0x0;
            puVar12 = (undefined *)0x0;
          }
          else {
            uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x14);
            if (uVar7 == 0) {
              puVar12 = (undefined *)0x0;
            }
            else {
              puVar2 = (uint *)((long)piVar1 + uVar7);
              puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  (long)puVar2 + (ulong)*puVar2 + 4);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = -(long)*piVar1;
              uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
            }
            if ((uVar6 < 0x17) ||
               (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x16), uVar7 == 0)) {
              puVar13 = (undefined *)0x0;
            }
            else {
              puVar2 = (uint *)((long)piVar1 + uVar7);
              puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  (long)puVar2 + (ulong)*puVar2 + 4);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          goto LAB_108c3aff4;
        }
      }
    }
  }
  puVar13 = (undefined *)0x0;
  puVar12 = (undefined *)0x0;
  puVar11 = (undefined *)0x0;
LAB_108c3aff4:
  func_0x00010c0359a0(uVar14,uVar15,uVar16,puVar4,param_2,puVar8,puVar9,uVar10,bVar3,puVar11,puVar12
                      ,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c3b270; end: 108c3b293; +[SCSnapchattersContactNonSnapchatter objectClassFunctionPointer] */

undefined1  [16] FUN_108c3b270(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c3b28c;
  auVar1._0_8_ = 0x108c3b284;
  return auVar1;
}



/* Entry: 108c3b294; end: 108c3b49f;  */

void FUN_108c3b294(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar8 = PTR_PTR_1126db2b0;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0891c0(param_3);
    lVar3 = param_3;
    uVar9 = param_1;
    func_0x00010c089f40(param_3);
    func_0x00010c089f60(param_3);
    lVar4 = param_3;
    uVar10 = uVar9;
    func_0x00010c070aa0(param_3);
    func_0x00010c150c20(param_3);
    lVar5 = param_3;
    func_0x00010c0fb380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfded40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c260ca0();
    _objc_retainAutoreleasedReturnValue();
    FUN_108c3b4a0(param_1,uVar9,uVar10,puVar8,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6
                  ,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar8 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c3b4a0; end: 108c3b647;  */

undefined1 *
FUN_108c3b4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_90;
  undefined *puStack_88;
  
  plVar1 = &lStack_90;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar3 = (undefined1 *)0x0;
  if (param_4 != 0) {
    puStack_88 = PTR_PTR_1126fde40;
    lStack_90 = param_4;
    _objc_msgSendSuper2(&lStack_90,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x18) = param_8;
      *(undefined8 *)((long)plVar1 + 0x30) = param_1;
      *(undefined8 *)((long)plVar1 + 0x38) = param_2;
      *(undefined1 *)((long)plVar1 + 0x14) = param_9;
      *(undefined8 *)((long)plVar1 + 0x40) = param_3;
      _objc_retain(param_10);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_10;
      _objc_release(uVar2);
      _objc_retain(param_11);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x50);
      *(undefined8 *)((long)plVar1 + 0x50) = param_11;
      _objc_release(uVar2);
      _objc_retain(param_12);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x58);
      *(undefined8 *)((long)plVar1 + 0x58) = param_12;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar3;
}



/* Entry: 108c3b648; end: 108c3b6bb;  */

void FUN_108c3b648(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3b6bc();
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



/* Entry: 108c3b6bc; end: 108c3bbbf;  */

void FUN_108c3b6bc(undefined8 param_1,undefined *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c0faf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar10,&UNK_10f50d1c3);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c0faf60(param_2);
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
            _objc_opt_class(PTR_PTR_1126bb3f0);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_108c3bac0;
            puVar10 = PTR_PTR_1126db2b0;
            _objc_alloc(PTR_PTR_1126db2b0);
            puVar2 = puVar3;
            func_0x00010c0faf60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0891c0(puVar3);
            puVar5 = puVar3;
            uVar11 = param_1;
            func_0x00010c089f40(puVar3);
            func_0x00010c089f60(puVar3);
            puVar6 = puVar3;
            uVar12 = uVar11;
            func_0x00010c070aa0(puVar3);
            func_0x00010c150c20(puVar3);
            puVar7 = puVar3;
            func_0x00010c0fb380(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010bfded40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar3;
            func_0x00010c260ca0();
            _objc_retainAutoreleasedReturnValue();
            FUN_108c3b4a0(param_1,uVar11,uVar12,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,
                          puVar8,puVar9);
            goto LAB_108c3b850;
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
      _objc_opt_class(PTR_PTR_1126bb3f0);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126db2b0;
        _objc_alloc(PTR_PTR_1126db2b0);
        puVar2 = puVar3;
        func_0x00010c0faf60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0891c0(puVar3);
        puVar5 = puVar3;
        uVar11 = param_1;
        func_0x00010c089f40(puVar3);
        func_0x00010c089f60(puVar3);
        puVar6 = puVar3;
        uVar12 = uVar11;
        func_0x00010c070aa0(puVar3);
        func_0x00010c150c20(puVar3);
        puVar7 = puVar3;
        func_0x00010c0fb380(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bfded40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c260ca0();
        _objc_retainAutoreleasedReturnValue();
        FUN_108c3b4a0(param_1,uVar11,uVar12,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8
                      ,puVar9);
LAB_108c3b850:
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar2);
        param_2 = puVar3;
        goto LAB_108c3bac8;
      }
LAB_108c3bac0:
      param_2 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_108c3bac8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108c3bbc0; end: 108c3bc33;  */

void FUN_108c3bbc0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3b6bc();
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



/* Entry: 108c3bc34; end: 108c3bcb7;  */

void FUN_108c3bc34(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bb3f0;
    _objc_alloc(PTR_PTR_1126bb3f0);
    func_0x00010c0359a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c3bcb8; end: 108c3bd0b; -[SCSnapchattersContactNonSnapchatterChangeRequest .cxx_destruct] */

void FUN_108c3bcb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108c3bd0c; end: 108c3bd17; -[SCSnapchattersContactNonSnapchatterChangeRequest table] */

undefined * FUN_108c3bd0c(void)

{
  return &UNK_10f50d19f;
}



/* Entry: 108c3bd18; end: 108c3bd5f; -[SCSnapchattersContactNonSnapchatterChangeRequest createTableWithSQLite:] */

void FUN_108c3bd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df974f1,0x9b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c3bd60; end: 108c3c0e7; -[SCSnapchattersContactNonSnapchatterChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c3bd60(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_108c3bc34(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c3c0e8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50d258);
    if (lVar6 == 0) goto LAB_108c3c084;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108c3c084;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb3f0);
    func_0x00010c21c9a0(puVar7);
LAB_108c3c06c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50d219);
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
            _objc_opt_class(PTR_PTR_1126bb3f0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c3c090;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108c3c090;
    }
    FUN_108c3bc34(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c3c0e8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50d2a9);
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
        _objc_opt_class(PTR_PTR_1126bb3f0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108c3c06c;
      }
    }
LAB_108c3c084:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108c3c090:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c3c0e8; end: 108c3c3c7;  */

ulong FUN_108c3c0e8(undefined8 param_1,ulong param_2,ulong param_3)

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
  undefined8 uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108c3c3c8(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108c3c3c8(param_2,uVar6);
  func_0x00010c0891c0(param_3);
  uVar8 = param_3;
  uVar16 = param_1;
  func_0x00010c089f40(param_3);
  func_0x00010c089f60(param_3);
  uVar9 = param_3;
  uVar17 = uVar16;
  func_0x00010c070aa0();
  func_0x00010c150c20(param_3);
  uVar10 = param_3;
  func_0x00010c0fb380();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  FUN_108c3c3c8(param_2,uVar10);
  uVar12 = param_3;
  func_0x00010bfded40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  FUN_108c3c3c8(param_2,uVar12);
  uVar14 = param_3;
  func_0x00010c260ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  FUN_108c3c3c8(param_2,uVar14);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(uVar17,0,param_2,0x10);
  func_0x000107c27db8(uVar16,0,param_2,0xc);
  func_0x000107c27db8(param_1,0,param_2,8);
  func_0x000107c27ddc(param_2,0x16,uVar15 & 0xffffffff);
  func_0x000107c27ddc(param_2,0x14,uVar13 & 0xffffffff);
  func_0x000107c27ddc(param_2,0x12,uVar11 & 0xffffffff);
  func_0x000107c27de0(param_2,10,uVar8,0);
  func_0x000107c27ddc(param_2,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dec(param_2,0xe,uVar9 & 0xffffffff,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108c3c3c8; end: 108c3c4f7;  */

undefined8 FUN_108c3c3c8(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_108c3c4a8;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_108c3c4a8;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_108c3c468;
    param_1 = 0;
  }
  else {
LAB_108c3c468:
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
LAB_108c3c4a8:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c3c4f8; end: 108c3c5af;  */

undefined8 FUN_108c3c4f8(void)

{
  int iVar1;
  
  if ((bRam00000001138299b8 & 1) == 0) {
    iVar1 = 0x138299b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829950 = 0xe;
      puRam0000000113829958 = &UNK_10f50d304;
      uRam0000000113829960 = 0x10001;
      pcRam0000000113829968 = FUN_108c3c5b0;
      pcRam0000000113829970 = FUN_108c3c5e8;
      ppuRam0000000113829948 = &PTR_DAT_110ab8570;
      uRam0000000113829988 = 0;
      uRam0000000113829980 = 0;
      uRam0000000113829998 = 0;
      uRam0000000113829990 = 0;
      uRam00000001138299a8 = 0;
      uRam00000001138299a0 = 0;
      uRam00000001138299b0 = 0;
      ___cxa_atexit(0x108c0d614,0x113829948,0x100000000);
      ___cxa_guard_release(0x1138299b8);
    }
  }
  return 0x113829948;
}



/* Entry: 108c3c5b0; end: 108c3c5e7;  */

undefined4 FUN_108c3c5b0(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c3c5e8; end: 108c3c63b;  */

undefined8 FUN_108c3c5e8(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108c3c63c; end: 108c3c65f; +[SCSnapchattersBestFriendMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_108c3c63c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c3c658;
  auVar1._0_8_ = 0x108c3c650;
  return auVar1;
}



/* Entry: 108c3c660; end: 108c3c6d3;  */

void FUN_108c3c660(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  func_0x000100c46cd0();
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



/* Entry: 108c3c6d4; end: 108c3c6f7; +[SCSnapchattersIncomingFriendsSyncToken objectClassFunctionPointer] */

undefined1  [16] FUN_108c3c6d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c3c6f0;
  auVar1._0_8_ = 0x108c3c6e8;
  return auVar1;
}



/* Entry: 108c3c6f8; end: 108c3c7af;  */

undefined8 FUN_108c3c6f8(void)

{
  int iVar1;
  
  if ((bRam0000000113829a30 & 1) == 0) {
    iVar1 = 0x13829a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138299c8 = 0xe;
      puRam00000001138299d0 = &UNK_10f50d5af;
      uRam00000001138299d8 = 0x10001;
      pcRam00000001138299e0 = FUN_108c3c7b0;
      pcRam00000001138299e8 = FUN_108c3c7e8;
      ppuRam00000001138299c0 = &PTR_DAT_1108d6648;
      uRam0000000113829a00 = 0;
      uRam00000001138299f8 = 0;
      uRam0000000113829a10 = 0;
      uRam0000000113829a08 = 0;
      uRam0000000113829a20 = 0;
      uRam0000000113829a18 = 0;
      uRam0000000113829a28 = 0;
      ___cxa_atexit(&DAT_105b3f390,0x1138299c0,0x100000000);
      ___cxa_guard_release(0x113829a30);
    }
  }
  return 0x1138299c0;
}



/* Entry: 108c3c7b0; end: 108c3c7e7;  */

undefined4 FUN_108c3c7b0(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c3c7e8; end: 108c3c83b;  */

undefined8 FUN_108c3c7e8(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 108c3c83c; end: 108c3c847; +[SCSnapchattersFriendingDebuggingInfo table] */

undefined * FUN_108c3c83c(void)

{
  return &UNK_10f50d5b4;
}



/* Entry: 108c3c848; end: 108c3c923; +[SCSnapchattersFriendingDebuggingInfo immutableObjectParse:bufferSize:] */

void FUN_108c3c848(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c2830;
  _objc_alloc(PTR_PTR_1126c2830);
  puVar4 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar4 < 5) {
    uVar5 = 0;
  }
  else {
    if ((ulong)puVar4[2] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + (ulong)puVar4[2]);
    }
    if ((6 < *puVar4) && ((ulong)puVar4[3] != 0)) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar4[3]);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108c3c8e0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108c3c8e0:
  func_0x00010c055ba0(puVar3,param_2,uVar5,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c3c924; end: 108c3c947; +[SCSnapchattersFriendingDebuggingInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108c3c924(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c3c940;
  auVar1._0_8_ = 0x108c3c938;
  return auVar1;
}



/* Entry: 108c3c948; end: 108c3ca23;  */

void FUN_108c3c948(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126c2840;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c27dd80(param_2);
    lVar2 = param_2;
    func_0x00010bfe4900(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c3ca24(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c3ca24; end: 108c3cac7;  */

undefined1 * FUN_108c3ca24(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
    puStack_38 = PTR_PTR_1126fde58;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined4 *)((long)plVar1 + 0x14) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 108c3cac8; end: 108c3cb3b;  */

void FUN_108c3cac8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c3cb3c();
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



/* Entry: 108c3cb3c; end: 108c3ce0f;  */

void FUN_108c3cb3c(undefined *param_1)

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
      func_0x000107c310d8(puVar5,&UNK_10f50d5d9);
      if (puVar5 != (undefined *)0x0) {
        puVar1 = param_1;
        func_0x00010c27dd80(param_1);
        _sqlite3_bind_int64(puVar5,1,(ulong)puVar1 & 0xffffffff);
        puVar1 = puVar5;
        _sqlite3_step();
        if ((int)puVar1 == 100) {
          puVar1 = puVar5;
          _sqlite3_column_int64(puVar5,0);
          puVar2 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126c2830);
          _sqlite3_column_blob(puVar5,1);
          _sqlite3_column_bytes(puVar5,1);
          puVar3 = puVar2;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar2);
          _sqlite3_reset(puVar5);
          if (puVar3 == (undefined *)0x0) goto LAB_108c3cd84;
          puVar5 = PTR_PTR_1126c2840;
          _objc_alloc(PTR_PTR_1126c2840);
          puVar2 = puVar3;
          func_0x00010c27dd80(puVar3);
          puVar4 = puVar3;
          func_0x00010bfe4900(puVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_108c3ca24(puVar5,puVar1,puVar2,puVar4);
          param_1 = puVar3;
          goto LAB_108c3cc20;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c2830);
      puVar2 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar2 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c2840;
        _objc_alloc(PTR_PTR_1126c2840);
        puVar3 = puVar2;
        func_0x00010c27dd80(puVar2);
        puVar4 = puVar2;
        func_0x00010bfe4900(puVar2);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c3ca24(puVar5,puVar1,puVar3,puVar4);
        param_1 = puVar2;
LAB_108c3cc20:
        _objc_release(puVar4);
        goto LAB_108c3cd8c;
      }
LAB_108c3cd84:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c3cd8c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c3ce10; end: 108c3ce73;  */

void FUN_108c3ce10(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c2830;
    _objc_alloc(PTR_PTR_1126c2830);
    func_0x00010c055ba0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c3ce74; end: 108c3ce7f; -[SCSnapchattersFriendingDebuggingInfoChangeRequest .cxx_destruct] */

void FUN_108c3ce74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c3ce80; end: 108c3ce8b; -[SCSnapchattersFriendingDebuggingInfoChangeRequest table] */

undefined * FUN_108c3ce80(void)

{
  return &UNK_10f50d5b4;
}



/* Entry: 108c3ce8c; end: 108c3ced3; -[SCSnapchattersFriendingDebuggingInfoChangeRequest createTableWithSQLite:] */

void FUN_108c3ce8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df976ac,0x8f,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c3ced4; end: 108c3d26b; -[SCSnapchattersFriendingDebuggingInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c3ced4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_108c3ce10(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c3d26c(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50d669);
    if (lVar5 == 0) goto LAB_108c3d208;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    _sqlite3_bind_int64(lVar5,2,uVar6);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_108c3d208;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c2830);
    func_0x00010c21c9a0(puVar8);
LAB_108c3d1f0:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50d629);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c2830);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c3d214;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_108c3d214;
    }
    FUN_108c3ce10(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_108c3d26c(param_4,puVar4);
    func_0x000107c27dc4(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50d6b4);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar9);
      piVar1 = (int *)((long)puVar10 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar7 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      _sqlite3_bind_int64(param_3,3,uVar6);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar8 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c2830);
        func_0x00010c21c9a0(puVar8);
        goto LAB_108c3d1f0;
      }
    }
LAB_108c3d208:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_108c3d214:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c3d26c; end: 108c3d44b;  */

ulong FUN_108c3d26c(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c27dd80(param_2);
  pcVar5 = param_2;
  func_0x00010bfe4900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
    goto LAB_108c3d378;
  }
  pcVar6 = pcVar5;
  _CFStringGetCStringPtr(pcVar5,0x8000100);
  uVar10 = param_1;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    _strlen(pcVar6);
    func_0x000107c27df0(param_1,pcVar6,pcVar7);
    goto LAB_108c3d378;
  }
  pcVar6 = pcVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar5;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar6 != (char *)0x0) goto LAB_108c3d338;
    uVar10 = 0;
  }
  else {
LAB_108c3d338:
    pcVar8 = pcVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar9 = pcVar6;
    func_0x00010c08fa60(pcVar6);
    pcVar7 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
    }
    func_0x000107c27df0(param_1,pcVar7,pcVar9);
  }
  _objc_release(pcVar6);
LAB_108c3d378:
  _objc_release(pcVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,6,uVar10 & 0xffffffff);
  func_0x000107c27de0(param_1,4,pcVar4,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c3d44c; end: 108c3d4c3; -[SCNAtlasAtlasCleanupManager initWithCpp:] */

undefined1 * FUN_108c3d44c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fde60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c3de10();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108c3d99c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c3d4c4; end: 108c3d773; -[SCNAtlasAtlasCleanupManager wipeAllLocalData] */

/* WARNING: Type propagation algorithm not settling */

void FUN_108c3d4c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_78 [7];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_d0);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar2 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  FUN_108c3d9c4(alStack_78 + 3,&uStack_e0,alStack_78 + 1);
  FUN_108c3da20(alStack_78 + 5,alStack_78 + 3);
  func_0x000108c3de9c();
  func_0x000108c3d890(alStack_78 + 1);
  func_0x000107c27b48(alStack_78);
  func_0x000107c27b4c(alStack_78 + 3,alStack_78[0]);
  lStack_88 = alStack_78[0];
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_78[5] + 0x38;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  puStack_90 = puVar2;
  __ZNSt3__15mutex4lockEv();
  lVar4 = alStack_78[5];
  func_0x000108c3da60();
  if ((int)lVar4 == 0) {
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    lVar4 = lStack_88;
    puVar1 = puStack_90;
    *puVar5 = &PTR_FUN_110ab90d0;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    puVar5[2] = lVar4;
    puVar5[1] = puVar1;
    plVar6 = *(long **)(alStack_78[5] + 0x80);
    *(undefined8 **)(alStack_78[5] + 0x80) = puVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  else {
    FUN_108c3da20(&lStack_a0,alStack_78 + 5);
  }
  func_0x000107c2798c(&lStack_b0);
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x000108c3de10();
      } while (extraout_w10 != 0);
    }
    FUN_108c3daa8(&puStack_90);
    func_0x000108c3de64();
  }
  uStack_b8 = alStack_78[4];
  uStack_c0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  func_0x000108c3d890(&lStack_a0);
  func_0x000108c3dde4(&puStack_90);
  func_0x000107c27b58(alStack_78 + 3);
  lVar4 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar4 != 0) {
    func_0x000108c3de88();
  }
  func_0x000108c3dea4();
  func_0x000107c27b58(&uStack_c0);
  _objc_release(0);
  _objc_release(puVar2);
  func_0x000108c3de44();
  func_0x000108c3de54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c3d774; end: 108c3d7cf; -[SCNAtlasAtlasCleanupManager wipeAllLocalDataSynchronous] */

void FUN_108c3d774(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 108c3d7d0; end: 108c3d7fb;  */

void FUN_108c3d7d0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108c3d8b8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3d7fc; end: 108c3d84f; -[SCNAtlasAtlasCleanupManager .cxx_destruct] */

void FUN_108c3d7fc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab90b0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108c3d99c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c3d850; end: 108c3d8b7; -[SCNAtlasAtlasCleanupManager .cxx_construct] */

undefined8 * FUN_108c3d850(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108c3de10();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c3d8b8; end: 108c3d92b;  */

void FUN_108c3d8b8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab90b0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108c3de10();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c3d92c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c3de74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3d92c; end: 108c3d99b;  */

void FUN_108c3d92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db350;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c3de10();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108c3d99c(&uStack_30);
  return;
}



/* Entry: 108c3d99c; end: 108c3d9c3;  */

long FUN_108c3d99c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c3d9c4; end: 108c3da1f;  */

void FUN_108c3d9c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 108c3da20; end: 108c3daa7;  */

undefined8 * FUN_108c3da20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108c3de44();
  return param_1;
}



/* Entry: 108c3daa8; end: 108c3dd4f;  */

void FUN_108c3daa8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined1 uStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_108c3de10();
    } while (extraout_w10 != 0);
    do {
      FUN_108c3de10();
    } while (extraout_w10_00 != 0);
  }
  uVar5 = *param_1;
  puStack_90 = (undefined1 *)0x0;
  lStack_88 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_a0 = param_2;
  lStack_98 = param_3;
  FUN_108c3d9c4(&puStack_50,&uStack_a0,&uStack_60);
  FUN_108c3da20(&puStack_90,&puStack_50);
  func_0x000108c3dea4();
  func_0x000108c3de9c();
  puStack_50 = puStack_90 + 0x38;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar2 = puStack_90;
  puStack_70 = puStack_90;
  lStack_68 = lStack_88;
  if (lStack_88 != 0) {
    do {
      FUN_108c3de10();
    } while (extraout_w10_01 != 0);
  }
  while (puVar4 = puVar2, func_0x000108c3da60(), ((ulong)puVar4 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar2 + 8,&puStack_50);
  }
  func_0x000108c3d890(&puStack_70);
  if (*(long *)(puStack_90 + 0x78) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_78);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_78);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x108c3dbec);
    (*pcVar3)();
  }
  uVar1 = *puStack_90;
  func_0x000107c2798c(&puStack_50);
  func_0x000108c3de64();
  func_0x000107c2830c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar5);
  func_0x000108c3de5c();
  func_0x000108c3d890(&uStack_a0);
  func_0x000108c3de54();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 108c3dd50; end: 108c3dd53;  */

undefined8 * FUN_108c3dd50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab90d0;
  func_0x000108c3dde4(param_1 + 1);
  return param_1;
}



/* Entry: 108c3dd54; end: 108c3dd67;  */

void FUN_108c3dd54(void)

{
  FUN_108c3ddb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c3dd68; end: 108c3ddb7;  */

void FUN_108c3dd68(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_108c3de10();
    } while (extraout_w10 != 0);
  }
  FUN_108c3daa8(param_1 + 8);
  func_0x000108c3de44();
  return;
}



/* Entry: 108c3ddb8; end: 108c3de0f;  */

undefined8 * FUN_108c3ddb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab90d0;
  func_0x000108c3dde4(param_1 + 1);
  return param_1;
}



/* Entry: 108c3de10; end: 108c3deab;  */

void FUN_108c3de10(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c3deac; end: 108c3dfa3;  */

void FUN_108c3deac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar3 = param_2;
  func_0x00010bf106e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27e34(&uStack_40);
  uVar4 = param_2;
  func_0x00010bf64d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_58);
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uStack_50;
  param_1[2] = uStack_58;
  param_1[4] = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  _objc_release(uVar4);
  func_0x000107c278a4(&uStack_40);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 108c3dfa4; end: 108c3e01b; -[SCNAtlasAtlasFactory initWithCpp:] */

undefined1 * FUN_108c3dfa4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fde68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108c3e490();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108c3e3c4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c3e01c; end: 108c3e09b; -[SCNAtlasAtlasFactory getAtlasMyDataProvider] */

void FUN_108c3e01c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000108c3e4e4();
  func_0x000108c3e4bc();
  FUN_108c44538(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c3e484();
  func_0x000108c3e3e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e09c; end: 108c3e11b; -[SCNAtlasAtlasFactory getAtlasFriendsDataProvider] */

void FUN_108c3e09c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000108c3e4e4();
  func_0x000108c3e4bc();
  FUN_108c3fe7c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c3e484();
  func_0x000108c3e40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e11c; end: 108c3e19b; -[SCNAtlasAtlasFactory getAtlasUserIdProvider] */

void FUN_108c3e11c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000108c3e4e4();
  func_0x000108c3e4bc();
  FUN_108c46254(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c3e484();
  func_0x000108c3e430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e19c; end: 108c3e21b; -[SCNAtlasAtlasFactory getAtlasPublicDataProvider] */

void FUN_108c3e19c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000108c3e4e4();
  func_0x000108c3e4bc();
  FUN_108c44ad8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c3e484();
  func_0x000108c3e454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e21c; end: 108c3e247;  */

void FUN_108c3e21c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108c3e2dc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e248; end: 108c3e29b; -[SCNAtlasAtlasFactory .cxx_destruct] */

void FUN_108c3e248(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9110;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108c3e3c4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c3e29c; end: 108c3e2db; -[SCNAtlasAtlasFactory .cxx_construct] */

undefined8 * FUN_108c3e29c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108c3e490();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c3e2dc; end: 108c3e357;  */

void FUN_108c3e2dc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9110;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000108c3e490();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c3e358);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c3e484();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c3e358; end: 108c3e3c3;  */

void FUN_108c3e358(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db358;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c3e490();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108c3e3c4(&uStack_30);
  return;
}



/* Entry: 108c3e3c4; end: 108c3e477;  */

void FUN_108c3e3c4(long param_1)

{
  func_0x000108c3e4cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}


