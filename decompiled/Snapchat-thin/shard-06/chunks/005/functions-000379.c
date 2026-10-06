/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a619dc; end: 104a61a17; -[GTMGatherInputStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a619dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f7a4,0);
  return;
}



/* Entry: 104a61a18; end: 104a61a83; +[GTMMIMEDocumentPart partWithHeaders:body:] */

void FUN_104a61a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c01a260();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a61a84; end: 104a61b27; -[GTMMIMEDocumentPart initWithHeaders:body:] */

undefined1 *
FUN_104a61a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e35e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x18),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 104a61b28; end: 104a61be7; -[GTMMIMEDocumentPart containsBytes:length:] */

bool FUN_104a61b28(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_1;
  func_0x00010bfdf420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  lVar4 = lVar2;
  func_0x00010c08fa60(lVar2);
  lVar5 = param_3;
  FUN_104a61be8(param_3,param_4,lVar3,lVar4,0);
  if (lVar5 == param_4) {
    bVar1 = true;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf25f00(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08fa60(uVar7);
    FUN_104a61be8(param_3,param_4,uVar6,uVar7,0);
    bVar1 = param_3 == param_4;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 104a61be8; end: 104a61ca7;  */

ulong FUN_104a61be8(undefined1 *param_1,ulong param_2,long param_3,long param_4,long *param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (0 < param_4) {
    uVar2 = *param_1;
    lVar3 = param_3;
    lVar5 = param_4;
    do {
      _memchr(lVar3,uVar2,lVar5);
      if (lVar3 == 0) break;
      lVar5 = lVar3 - param_3;
      uVar6 = param_4 - lVar5;
      uVar1 = uVar6;
      if (param_2 <= uVar6) {
        uVar1 = param_2;
      }
      lVar4 = lVar3;
      _memcmp();
      if ((int)lVar4 == 0) {
        if (param_5 == (long *)0x0) {
          return uVar1;
        }
        goto LAB_104a61c78;
      }
      lVar3 = lVar3 + 1;
      lVar5 = uVar6 - 1;
    } while (lVar5 != 0 && 0 < (long)uVar6);
  }
  lVar5 = 0;
  uVar6 = 0;
  uVar1 = 0;
  if (param_5 != (long *)0x0) {
LAB_104a61c78:
    uVar6 = uVar1;
    *param_5 = lVar5;
  }
  return uVar6;
}



/* Entry: 104a61ca8; end: 104a61cf7; -[GTMMIMEDocumentPart headerData] */

void FUN_104a61ca8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae150;
    func_0x00010bf64b20(PTR_PTR_1126ae150,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(lVar1);
  return;
}



/* Entry: 104a61cf8; end: 104a61cff; -[GTMMIMEDocumentPart body] */

void FUN_104a61cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 104a61d00; end: 104a61d33; -[GTMMIMEDocumentPart length] */

long FUN_104a61d00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60(lVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c08fa60(lVar2);
  return lVar2 + lVar1;
}



/* Entry: 104a61d34; end: 104a61d9b; -[GTMMIMEDocumentPart description] */

void FUN_104a61d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010bf529e0();
  func_0x00010c08fa60();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daa058);
  return;
}



/* Entry: 104a61d9c; end: 104a61e5f; -[GTMMIMEDocumentPart isEqual:] */

long FUN_104a61d9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 == param_3) {
    lVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ae418;
    _objc_opt_class(PTR_PTR_1126ae418);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = param_3;
      _objc_retain();
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(uVar2 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 8);
        if (lVar3 == *(long *)(uVar2 + 8)) {
          lVar3 = 1;
        }
        else {
          func_0x00010c071ae0();
        }
      }
      else {
        lVar3 = 0;
      }
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104a61e60; end: 104a61e93; -[GTMMIMEDocumentPart hash] */

ulong FUN_104a61e60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bfde980(uVar1);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980(uVar2);
  return uVar2 | uVar1;
}



/* Entry: 104a61e94; end: 104a61e9b; -[GTMMIMEDocumentPart headers] */

undefined8 FUN_104a61e94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a61e9c; end: 104a61ed7; -[GTMMIMEDocumentPart .cxx_destruct] */

void FUN_104a61e9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a61ed8; end: 104a61eeb; +[GTMMIMEDocument MIMEDocument] */

void FUN_104a61ed8(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a61eec; end: 104a61f4f; -[GTMMIMEDocument init] */

undefined1 * FUN_104a61eec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e35e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104a61f50; end: 104a61fab; -[GTMMIMEDocument description] */

void FUN_104a61f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daa078);
  return;
}



/* Entry: 104a61fac; end: 104a61ffb; -[GTMMIMEDocument addPartWithHeaders:body:] */

void FUN_104a61fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae418;
  func_0x00010c0f4920(PTR_PTR_1126ae418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a61ffc; end: 104a6200f; -[GTMMIMEDocument seedRandomWith:] */

void FUN_104a61ffc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a62010; end: 104a6202b; -[GTMMIMEDocument random] */

void FUN_104a62010(long param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__arc4random_11034bee0)();
  return;
}



/* Entry: 104a6202c; end: 104a6224f; -[GTMMIMEDocument boundary] */

void FUN_104a6202c(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  int iVar11;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    *(undefined ***)(param_1 + 0x18) = &PTR____CFConstantStringClassReference_110daa098;
    _objc_release();
    bVar9 = false;
    iVar11 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf64920(uVar2,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uVar3 = uVar2;
      func_0x00010c08fa60(uVar2);
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar4 = *(long *)(param_1 + 8);
      _objc_retain();
      param_3 = &puStack_130;
      lVar1 = lVar4;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar10 = *plStack_120;
        do {
          lVar8 = 0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(lVar4);
            }
            uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
            func_0x00010bf4b660(uVar5,param_2,uVar7,uVar3);
            if ((int)uVar5 != 0) {
              _objc_release(lVar4);
              goto LAB_104a62164;
            }
            lVar8 = lVar8 + 1;
          } while (lVar1 != lVar8);
          param_3 = &puStack_130;
          lVar1 = lVar4;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
        _objc_release(lVar4);
        goto LAB_104a62204;
      }
      _objc_release(lVar4);
      if (!bVar9) goto LAB_104a62204;
LAB_104a62164:
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c11f0e0();
      func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110daa0b8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar6;
      _objc_release(uVar7);
      _objc_release(uVar2);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      iVar11 = iVar11 + 1;
      bVar9 = true;
    } while (iVar11 != 10);
    func_0x00010c11f0e0();
    func_0x00010c11f0e0();
    param_3 = &PTR____CFConstantStringClassReference_110daa0d8;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar6;
LAB_104a62204:
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined ***)(lVar1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 104a62250; end: 104a6227f; -[GTMMIMEDocument setBoundary:] */

void FUN_104a62250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a62280; end: 104a6250f; -[GTMMIMEDocument generateDataArray:length:boundary:] */

/* WARNING: Possible PIC construction at 0x000104a62564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a62568) */
/* WARNING: Removing unreachable block (ram,0x000104a625d0) */
/* WARNING: Removing unreachable block (ram,0x000104a6257c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104a62280(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf20a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar8 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar13 = *(long *)(lVar15 * 8);
        func_0x00010befa120(param_3);
        lVar9 = lVar13;
        func_0x00010bfdf420(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(param_3);
        _objc_release(lVar9);
        lVar9 = lVar13;
        func_0x00010bf1e9c0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(param_3);
        _objc_release(lVar9);
        func_0x00010c08fa60();
        puVar10 = puVar5;
        func_0x00010c08fa60();
        puVar14 = puVar10 + (long)(puVar14 + lVar13);
        lVar15 = lVar15 + 1;
      } while (lVar8 != lVar15);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar7);
  puVar11 = puVar6;
  func_0x00010befa120(param_3);
  puVar10 = puVar6;
  func_0x00010c08fa60();
  if (param_4 != (long *)0x0) {
    *param_4 = (long)(puVar10 + (long)puVar14);
  }
  if (param_5 != (long *)0x0) {
    _objc_retainAutorelease(lVar2);
    *param_5 = lVar2;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    if (puVar11 != (undefined *)0x0) {
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bfbf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_generateDataArray_length_boundar_1125cd6a0)
    ;
    return;
  }
  return;
}



/* Entry: 104a62510; end: 104a625df; -[GTMMIMEDocument generateInputStream:length:boundary:] */

/* WARNING: Possible PIC construction at 0x000104a62564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a62568) */
/* WARNING: Removing unreachable block (ram,0x000104a625d0) */
/* WARNING: Removing unreachable block (ram,0x000104a6257c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104a62510(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generateDataArray_length_boundar_1125cd6a0,puVar1,param_4,param_5);
  return;
}



/* Entry: 104a625e0; end: 104a628b3; -[GTMMIMEDocument generateDispatchData:length:boundary:] */

/* WARNING: Possible PIC construction at 0x000104a62650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a62654) */
/* WARNING: Removing unreachable block (ram,0x000104a626a0) */
/* WARNING: Removing unreachable block (ram,0x000104a626cc) */
/* WARNING: Removing unreachable block (ram,0x000104a626d0) */
/* WARNING: Removing unreachable block (ram,0x000104a626e0) */
/* WARNING: Removing unreachable block (ram,0x000104a626e8) */
/* WARNING: Removing unreachable block (ram,0x000104a62788) */
/* WARNING: Removing unreachable block (ram,0x000104a62768) */
/* WARNING: Removing unreachable block (ram,0x000104a62794) */
/* WARNING: Removing unreachable block (ram,0x000104a627bc) */
/* WARNING: Removing unreachable block (ram,0x000104a627d8) */
/* WARNING: Removing unreachable block (ram,0x000104a62820) */

void FUN_104a625e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_170 [240];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
      ___stack_chk_fail();
      lVar1 = 8;
      __Block_object_dispose(auStack_170);
      __Unwind_Resume();
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      return;
    }
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generateDataArray_length_boundar_1125cd6a0,puVar2,param_4,param_5);
  return;
}



/* Entry: 104a628b4; end: 104a628df;  */

void FUN_104a628b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104a628e0; end: 104a62aaf; +[GTMMIMEDocument dataWithHeaders:] */

void FUN_104a628e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uStack_2c0;
  char *pcStack_2a8;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  ulong uStack_238;
  long lStack_1b0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_retain();
  puVar4 = auStack_e8;
  lVar14 = lVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar3);
      }
      lVar15 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar2);
      _objc_release(lVar15);
      lVar21 = lVar21 + 1;
    } while (lVar14 != lVar21);
    puVar4 = auStack_e8;
    lVar14 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010bf070e0(puVar2);
  lVar14 = 4;
  puVar22 = puVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain();
    lVar5 = lVar14;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c08fa60();
    _objc_retainAutorelease(lVar5);
    func_0x00010bf25f00();
    uStack_238 = 0;
    func_0x00010c153820(param_3);
    uVar6 = uStack_238;
    _objc_retain();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    puVar22 = (undefined *)0x0;
    if (1 < uVar7) {
      puVar8 = puVar4;
      func_0x00010bf481c0();
      puVar10 = puVar4;
      if ((int)puVar8 == 0) {
        uVar9 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        puVar8 = puVar4;
        func_0x00010c08fa60(puVar4);
        puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_258 = 0xc2000000;
        pcStack_250 = FUN_104a62f48;
        puStack_248 = &UNK_110842e18;
        puVar17 = puVar4;
        _objc_retain();
        puStack_240 = puVar17;
        _dispatch_data_create(puVar10,puVar8,uVar9,&puStack_260);
        _objc_release(puStack_240);
        _objc_release(uVar9);
      }
      else {
        _objc_retain();
      }
      uVar7 = uVar6;
      _objc_retain();
      uStack_2c0 = uVar7;
      func_0x00010bf52a60();
      lVar21 = lRam0000000000000000;
      puVar22 = (undefined *)0x0;
      if (uStack_2c0 != 0) {
        lVar15 = -1;
        do {
          uVar20 = 0;
          lVar18 = lVar15;
          do {
            if (lRam0000000000000000 != lVar21) {
              _objc_enumerationMutation(uVar7);
            }
            lVar15 = *(long *)(uVar20 * 8);
            if (lVar18 != -1) {
              lVar18 = lVar3 + 2 + lVar18;
              lVar19 = lVar15;
              func_0x00010c067fc0();
              lVar19 = lVar19 - lVar18;
              lVar16 = lVar19 + -4;
              if (1 < lVar16) {
                if (puVar22 == (undefined *)0x0) {
                  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  func_0x00010bf09f00();
                  _objc_retainAutoreleasedReturnValue();
                }
                puVar8 = puVar10;
                _dispatch_data_create_subrange(puVar10,lVar18,lVar16);
                _dispatch_data_create_map();
                puVar17 = puVar8;
                if (*pcStack_2a8 == '\r') {
                  cVar1 = pcStack_2a8[1];
                  _objc_release();
                  if (cVar1 != '\n') goto LAB_104a62d34;
                  _dispatch_data_create_subrange(puVar8,2,lVar19 + -6);
                  lVar18 = 0;
                }
                else {
                  _objc_release();
LAB_104a62d34:
                  func_0x00010c153820(param_3);
                  lVar19 = 0;
                  _objc_retain();
                  lVar18 = lVar19;
                  func_0x00010bf529e0();
                  if (lVar18 == 0) {
                    puVar17 = (undefined1 *)0x0;
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = lVar19;
                    func_0x00010bfb1920(lVar19);
                    _objc_retainAutoreleasedReturnValue();
                    lVar11 = lVar18;
                    func_0x00010c067fc0();
                    _objc_release(lVar18);
                    puVar12 = puVar8;
                    _dispatch_data_create_subrange(puVar8,0,lVar11);
                    lVar18 = param_3;
                    func_0x00010bfe0300(param_3);
                    _objc_retainAutoreleasedReturnValue();
                    _dispatch_data_create_subrange(puVar8,lVar11 + 4,lVar16 - (lVar11 + 4));
                    _objc_release(puVar12);
                  }
                  _objc_release(lVar19);
                }
                puVar2 = PTR_PTR_1126ae418;
                if (puVar17 == (undefined1 *)0x0) {
                  puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
                  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0f4920(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar13);
                }
                else {
                  func_0x00010c0f4920(PTR_PTR_1126ae418);
                  _objc_retainAutoreleasedReturnValue();
                }
                func_0x00010befa120(puVar22);
                _objc_release(puVar2);
                _objc_release(lVar18);
                _objc_release(puVar17);
                _objc_release(puVar8);
              }
            }
            func_0x00010c067fc0();
            uVar20 = uVar20 + 1;
            lVar18 = lVar15;
          } while (uStack_2c0 != uVar20);
          uStack_2c0 = uVar7;
          func_0x00010bf52a60();
        } while (uStack_2c0 != 0);
      }
      _objc_release(uVar7);
      _objc_release(puVar10);
    }
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      _objc_opt_self(*(undefined8 *)(lVar14 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 104a62ab0; end: 104a62f47; +[GTMMIMEDocument MIMEPartsWithBoundary:data:] */

void FUN_104a62ab0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uStack_180;
  char *pcStack_168;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lVar2 = param_3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_retainAutorelease(lVar2);
  func_0x00010bf25f00();
  uStack_f8 = 0;
  func_0x00010c153820(param_1);
  uVar4 = uStack_f8;
  _objc_retain();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  puVar19 = (undefined *)0x0;
  if (1 < uVar5) {
    lVar6 = param_4;
    func_0x00010bf481c0();
    lVar7 = param_4;
    if ((int)lVar6 == 0) {
      uVar16 = 0;
      _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      lVar6 = param_4;
      func_0x00010c08fa60(param_4);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_104a62f48;
      puStack_108 = &UNK_110842e18;
      lVar13 = param_4;
      _objc_retain();
      lStack_100 = lVar13;
      _dispatch_data_create(lVar7,lVar6,uVar16,&puStack_120);
      _objc_release(lStack_100);
      _objc_release(uVar16);
    }
    else {
      _objc_retain();
    }
    uVar5 = uVar4;
    _objc_retain();
    uStack_180 = uVar5;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    puVar19 = (undefined *)0x0;
    if (uStack_180 != 0) {
      lVar13 = -1;
      do {
        uVar18 = 0;
        lVar15 = lVar13;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(uVar5);
          }
          lVar13 = *(long *)(uVar18 * 8);
          if (lVar15 != -1) {
            lVar15 = lVar3 + 2 + lVar15;
            lVar17 = lVar13;
            func_0x00010c067fc0();
            lVar17 = lVar17 - lVar15;
            lVar14 = lVar17 + -4;
            if (1 < lVar14) {
              if (puVar19 == (undefined *)0x0) {
                puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00();
                _objc_retainAutoreleasedReturnValue();
              }
              lVar8 = lVar7;
              _dispatch_data_create_subrange(lVar7,lVar15,lVar14);
              _dispatch_data_create_map();
              lVar15 = lVar8;
              if (*pcStack_168 == '\r') {
                cVar1 = pcStack_168[1];
                _objc_release();
                if (cVar1 != '\n') goto LAB_104a62d34;
                _dispatch_data_create_subrange(lVar8,2,lVar17 + -6);
                uVar16 = 0;
              }
              else {
                _objc_release();
LAB_104a62d34:
                func_0x00010c153820(param_1);
                lVar9 = 0;
                _objc_retain();
                lVar17 = lVar9;
                func_0x00010bf529e0();
                if (lVar17 == 0) {
                  lVar15 = 0;
                  uVar16 = 0;
                }
                else {
                  lVar17 = lVar9;
                  func_0x00010bfb1920(lVar9);
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar17;
                  func_0x00010c067fc0();
                  _objc_release(lVar17);
                  lVar17 = lVar8;
                  _dispatch_data_create_subrange(lVar8,0,lVar10);
                  uVar16 = param_1;
                  func_0x00010bfe0300(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  _dispatch_data_create_subrange(lVar8,lVar10 + 4,lVar14 - (lVar10 + 4));
                  _objc_release(lVar17);
                }
                _objc_release(lVar9);
              }
              puVar12 = PTR_PTR_1126ae418;
              if (lVar15 == 0) {
                puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0f4920(puVar12);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
              }
              else {
                func_0x00010c0f4920(PTR_PTR_1126ae418);
                _objc_retainAutoreleasedReturnValue();
              }
              func_0x00010befa120(puVar19);
              _objc_release(puVar12);
              _objc_release(uVar16);
              _objc_release(lVar15);
              _objc_release(lVar8);
            }
          }
          func_0x00010c067fc0();
          uVar18 = uVar18 + 1;
          lVar15 = lVar13;
        } while (uStack_180 != uVar18);
        uStack_180 = uVar5;
        func_0x00010bf52a60();
      } while (uStack_180 != 0);
    }
    _objc_release(uVar5);
    _objc_release(lVar7);
  }
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return;
  }
  ___stack_chk_fail();
  _objc_opt_self(*(undefined8 *)(param_3 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104a62f48; end: 104a62f67;  */

void FUN_104a62f48(long param_1)

{
  _objc_opt_self(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104a62f68; end: 104a62fef; +[GTMMIMEDocument searchData:targetBytes:targetLength:foundOffsets:] */

void FUN_104a62f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  FUN_104a62ff0(param_3,param_4,param_5,puVar1,0);
  _objc_release(param_3);
  _objc_retainAutorelease(puVar1);
  *param_6 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104a62ff0; end: 104a63173;  */

void FUN_104a62ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0xffffffffffffffff;
  _objc_retain();
  _objc_retain();
  func_0x00010bf97b40(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 104a63174; end: 104a6322f; +[GTMMIMEDocument searchData:targetBytes:targetLength:foundOffsets:foundBlockNumbers:] */

void FUN_104a63174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  FUN_104a62ff0(param_3,param_4,param_5,puVar1,puVar2);
  _objc_release(param_3);
  _objc_retainAutorelease(puVar1);
  *param_6 = puVar1;
  _objc_retainAutorelease(puVar2);
  *param_7 = puVar2;
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a63230; end: 104a63247; +[GTMMIMEDocument findBytesWithNeedle:needleLength:haystack:haystackLength:foundOffset:] */

ulong FUN_104a63230(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4,
                   long param_5,long param_6,long *param_7)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (0 < param_6) {
    uVar2 = *param_3;
    lVar3 = param_5;
    lVar5 = param_6;
    do {
      _memchr(lVar3,uVar2,lVar5);
      if (lVar3 == 0) break;
      lVar5 = lVar3 - param_5;
      uVar6 = param_6 - lVar5;
      uVar1 = uVar6;
      if (param_4 <= uVar6) {
        uVar1 = param_4;
      }
      lVar4 = lVar3;
      _memcmp();
      if ((int)lVar4 == 0) {
        if (param_7 == (long *)0x0) {
          return uVar1;
        }
        goto LAB_104a61c78;
      }
      lVar3 = lVar3 + 1;
      lVar5 = uVar6 - 1;
    } while (lVar5 != 0 && 0 < (long)uVar6);
  }
  lVar5 = 0;
  uVar6 = 0;
  uVar1 = 0;
  if (param_7 != (long *)0x0) {
LAB_104a61c78:
    uVar6 = uVar1;
    *param_7 = lVar5;
  }
  return uVar6;
}



/* Entry: 104a63248; end: 104a6342f; +[GTMMIMEDocument headersWithData:] */

void FUN_104a63248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    puVar4 = puVar2;
    func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3eb8,&uStack_68);
    uVar5 = uStack_68;
    _objc_retain();
    if ((int)puVar4 != 0) {
      uVar8 = uVar5;
      uVar9 = 0;
      do {
        puVar4 = puVar2;
        func_0x00010c14f4e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3eb8,0);
        uVar6 = uVar9;
        uVar5 = uVar8;
        if ((int)puVar4 == 0) break;
        puVar4 = puVar2;
        uStack_70 = uVar9;
        func_0x00010c14f5e0(puVar2,param_2,puVar3,&uStack_70);
        uVar6 = uStack_70;
        _objc_retain();
        _objc_release(uVar9);
        if ((int)puVar4 == 0) break;
        func_0x00010c1d0560(puVar7,param_2,uVar6,uVar8);
        func_0x00010c14ea40(puVar2,param_2,puVar3,0);
        puVar4 = puVar2;
        uStack_68 = uVar8;
        func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3eb8,
                            &uStack_68);
        uVar5 = uStack_68;
        _objc_retain();
        _objc_release(uVar8);
        uVar8 = uVar5;
        uVar9 = uVar6;
      } while (((ulong)puVar4 & 1) != 0);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104a63430; end: 104a6345f; -[GTMMIMEDocument .cxx_destruct] */

void FUN_104a63430(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a63460; end: 104a6368b;  */

void FUN_104a63460(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_58;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(long *)(param_1 + 0x48) - lVar3;
    uVar2 = *(long *)(param_1 + 0x50) + lVar3;
    FUN_104a61be8(uVar2,uVar4,param_2,param_4,&lStack_58);
    if (uVar2 != 0 && lStack_58 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      if (uVar2 < uVar4) {
        *(ulong *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + uVar2;
        return;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(puVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(puVar1);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 0xffffffffffffffff;
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  }
  if (0 < param_4) {
    lVar3 = *(long *)(param_1 + 0x48);
    do {
      uVar2 = *(ulong *)(param_1 + 0x50);
      FUN_104a61be8(uVar2,lVar3,param_2,param_4,&lStack_58);
      if (uVar2 == 0) {
        return;
      }
      if (uVar2 < *(ulong *)(param_1 + 0x48)) {
        *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar2;
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) =
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
        return;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(puVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(puVar1);
      lVar3 = *(long *)(param_1 + 0x48);
      param_2 = param_2 + lStack_58 + lVar3;
      param_4 = param_4 - (lStack_58 + lVar3);
    } while (0 < param_4);
  }
  return;
}



/* Entry: 104a6368c; end: 104a636ef;  */

void FUN_104a6368c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
  func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd11c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a636f0; end: 104a636fb; +[GTMReadMonitorInputStream methodSignatureForSelector:] */

void FUN_104a636f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSInputStream_1126bc580,PTR_s_methodSignatureForSelector__112610cb8);
  return;
}



/* Entry: 104a636fc; end: 104a6373f; +[GTMReadMonitorInputStream forwardInvocation:] */

void FUN_104a636fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010c06ae40(param_3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a63740; end: 104a63767; -[GTMReadMonitorInputStream respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104a63740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270f7d4);
  _objc_opt_respondsToSelector(uVar1,param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 104a63768; end: 104a63777; -[GTMReadMonitorInputStream methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_methodSignatureForSelector__112610cb8);
  return;
}



/* Entry: 104a63778; end: 104a6378f; -[GTMReadMonitorInputStream forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63778(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_invokeWithTarget__1125f85a0,*(undefined8 *)(param_1 + _DAT_11270f7d4));
  return;
}



/* Entry: 104a63790; end: 104a637d7; +[GTMReadMonitorInputStream inputStreamWithStream:] */

void FUN_104a63790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c04e6a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a637d8; end: 104a63883; -[GTMReadMonitorInputStream initWithStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a637d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e35f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + (long)_DAT_11270f7d4),param_3);
    puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf60460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11270f7d8);
    *(undefined **)((long)puVar2 + (long)_DAT_11270f7d8) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104a63884; end: 104a638b3; -[GTMReadMonitorInputStream init] */

undefined8 FUN_104a63884(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf879a0(param_1,param_2,param_2);
  _objc_release(param_1);
  return 0;
}



/* Entry: 104a638b4; end: 104a639ff; -[GTMReadMonitorInputStream read:maxLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a638b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_11270f7d4);
  func_0x00010c121160();
  if (0 < lVar1) {
    lVar4 = param_1 + _DAT_11270f7dc;
    _objc_loadWeakRetained();
    if ((lVar4 != 0) && (lVar4 = *(long *)(param_1 + _DAT_11270f7e0), _objc_release(), lVar4 != 0))
    {
      lVar4 = (long)_DAT_11270f7d8;
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar5,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR_s_invokeReadSelectorWithBuffer__1125f8580;
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      if ((int)uVar5 == 0) {
        func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3,lVar1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)(param_1 + _DAT_11270f7e4) == 0) {
          func_0x00010c0f8ee0(param_1,param_2,puVar2,*(undefined8 *)(param_1 + lVar4),puVar3,0);
        }
        else {
          func_0x00010c0f8f00();
        }
      }
      else {
        func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3,lVar1,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06adc0(param_1,param_2,puVar3);
      }
      _objc_release(puVar3);
    }
  }
  return lVar1;
}



/* Entry: 104a63a00; end: 104a63b3b; -[GTMReadMonitorInputStream invokeReadSelectorWithBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retainAutorelease(param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf25f00();
  uVar2 = param_3;
  uStack_48 = uVar1;
  func_0x00010c08fa60();
  _objc_release(param_3);
  uStack_50 = uVar2;
  _objc_retain();
  lVar3 = param_1 + _DAT_11270f7dc;
  lStack_58 = param_1;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010c0cca80(lVar3,param_2,*(undefined8 *)(param_1 + _DAT_11270f7e0));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbb60();
    func_0x00010c2121a0(puVar5,param_2,lVar3);
    func_0x00010c16a2c0(puVar5,param_2,&lStack_58,2);
    func_0x00010c16a2c0(puVar5,param_2,&uStack_48,3);
    func_0x00010c16a2c0(puVar5,param_2,&uStack_50,4);
    func_0x00010c06abe0(puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lStack_58);
  return;
}



/* Entry: 104a63b3c; end: 104a63b4b; -[GTMReadMonitorInputStream getBuffer:length:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_getBuffer_length__1125ce630);
  return;
}



/* Entry: 104a63b4c; end: 104a63b5b; -[GTMReadMonitorInputStream hasBytesAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_hasBytesAvailable_1125d2d38);
  return;
}



/* Entry: 104a63b5c; end: 104a63b6b; -[GTMReadMonitorInputStream open] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_open_112617da0);
  return;
}



/* Entry: 104a63b6c; end: 104a63b7b; -[GTMReadMonitorInputStream close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_close_1125ad020);
  return;
}



/* Entry: 104a63b7c; end: 104a63b8b; -[GTMReadMonitorInputStream delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 104a63b8c; end: 104a63b9b; -[GTMReadMonitorInputStream setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 104a63b9c; end: 104a63bab; -[GTMReadMonitorInputStream propertyForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c118c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_propertyForKey__112623d38);
  return;
}



/* Entry: 104a63bac; end: 104a63bbb; -[GTMReadMonitorInputStream setProperty:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e50b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_setProperty_forKey__112656e50);
  return;
}



/* Entry: 104a63bbc; end: 104a63bcb; -[GTMReadMonitorInputStream scheduleInRunLoop:forMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_scheduleInRunLoop_forMode__112631998);
  return;
}



/* Entry: 104a63bcc; end: 104a63bdb; -[GTMReadMonitorInputStream removeFromRunLoop:forMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_removeFromRunLoop_forMode__112628c60);
  return;
}



/* Entry: 104a63bdc; end: 104a63beb; -[GTMReadMonitorInputStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_streamStatus_112674bc8);
  return;
}



/* Entry: 104a63bec; end: 104a63bfb; -[GTMReadMonitorInputStream streamError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11270f7d4),PTR_s_streamError_112674b60);
  return;
}



/* Entry: 104a63bfc; end: 104a63c1b; -[GTMReadMonitorInputStream readDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63bfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11270f7dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a63c1c; end: 104a63c2f; -[GTMReadMonitorInputStream setReadDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11270f7dc,param_3);
  return;
}



/* Entry: 104a63c30; end: 104a63c3f; -[GTMReadMonitorInputStream readSelector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a63c30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f7e0);
}



/* Entry: 104a63c40; end: 104a63c4f; -[GTMReadMonitorInputStream setReadSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11270f7e0) = param_3;
  return;
}



/* Entry: 104a63c50; end: 104a63c5f; -[GTMReadMonitorInputStream runLoopModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63c50(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f7e4,1);
  return;
}



/* Entry: 104a63c60; end: 104a63c6b; -[GTMReadMonitorInputStream setRunLoopModes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a63c6c; end: 104a63ccf; -[GTMReadMonitorInputStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a63c6c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f7dc);
  _objc_storeStrong(param_1 + _DAT_11270f7e4,0);
  _objc_storeStrong(param_1 + _DAT_11270f7d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f7d4,0);
  return;
}



/* Entry: 104a63cd0; end: 104a63d23; -[GIDAuthStateMigration init] */

undefined8 FUN_104a63cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae430;
  _objc_alloc(PTR_PTR_1126ae430);
  func_0x00010c020300();
  func_0x00010c021020(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104a63d24; end: 104a640a3; -[GIDAuthStateMigration extractAuthSessionWithTokenURL:callbackPath:] */

void FUN_104a63d24(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
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
  
  _objc_retain(param_3);
  _objc_retain();
  puVar1 = PTR_PTR_1126ae438;
  func_0x00010c0f5320();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010c086d80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010c086d00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010c0f5340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 0;
    _objc_retain();
    _objc_release(puVar14);
    _objc_release(param_1);
    puVar14 = (undefined *)0x0;
    if (lVar3 == 0) {
      puVar14 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar14;
      func_0x00010bf24a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(puVar1);
      puVar7 = puVar6;
      func_0x00010c0c1b40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf529e0();
      puVar14 = (undefined *)0x0;
      if (puVar8 == (undefined *)0x1) {
        puVar14 = puVar7;
        func_0x00010c0dfd40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11f2c0();
        puVar8 = puVar1;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar14 = PTR_PTR_1126ae440;
        _objc_alloc();
        func_0x00010bfff120();
        puVar9 = puVar14;
        func_0x00010bf3d060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126ae438;
        func_0x00010c0f5320();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        _objc_retain();
        puVar13 = puVar14;
        if (puVar12 != (undefined *)0x0) {
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
        }
        puVar14 = PTR_PTR_1126ae448;
        func_0x00010bf10960(PTR_PTR_1126ae448);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 104a640a4; end: 104a6424b; +[GIDAuthStateMigration passwordForService:] */

/* WARNING: Removing unreachable block (ram,0x000104a641d4) */

undefined * FUN_104a640a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_104a64210;
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  _SecItemCopyMatching();
  if ((int)puVar4 == 0) {
    lVar3 = 0;
    func_0x00010c08fa60();
    if (lVar3 == 0) goto LAB_104a641a4;
    lVar3 = 0;
    func_0x00010bf51e00();
  }
  else {
LAB_104a641a4:
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
LAB_104a64210:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    return *(undefined **)(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 104a6424c; end: 104a64253; -[GIDAuthStateMigration keychainStore] */

undefined8 FUN_104a6424c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a64254; end: 104a6425f; -[GIDAuthStateMigration setKeychainStore:] */

void FUN_104a64254(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 104a64260; end: 104a642d7; -[GIDAuthentication initWithAuthState:] */

undefined1 * FUN_104a64260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 8),param_3);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104a642d8; end: 104a642df; +[GIDAuthentication supportsSecureCoding] */

undefined8 FUN_104a642d8(void)

{
  return 1;
}



/* Entry: 104a642e0; end: 104a64377; -[GIDAuthentication initWithCoder:] */

undefined1 * FUN_104a642e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126ae388);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a64378; end: 104a643d3; -[GIDAuthentication encodeWithCoder:] */

void FUN_104a64378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf109c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110daa298);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a643d4; end: 104a643db; -[GIDAuthentication authState] */

undefined8 FUN_104a643d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a643dc; end: 104a643e7; -[GIDAuthentication setAuthState:] */

void FUN_104a643dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 104a643e8; end: 104a643f3; -[GIDAuthentication .cxx_destruct] */

void FUN_104a643e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a643f4; end: 104a64457; -[GIDCallbackQueue init] */

undefined1 * FUN_104a643f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3608;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104a64458; end: 104a6446f; -[GIDCallbackQueue wait] */

void FUN_104a64458(long param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_1);
  return;
}



/* Entry: 104a64470; end: 104a644c3; -[GIDCallbackQueue next] */

void FUN_104a64470(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      _objc_retainAutorelease(param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfb0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fire_1125c99c0);
      return;
    }
  }
  return;
}



/* Entry: 104a644c4; end: 104a644f3; -[GIDCallbackQueue reset] */

void FUN_104a644c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a644f4; end: 104a6455f; -[GIDCallbackQueue addCallback:] */

void FUN_104a644f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010befa120(uVar2,param_2,lVar1);
    _objc_release(lVar1);
    if (*(int *)(param_1 + 0xc) == 0) {
      func_0x00010bfb0060(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a64560; end: 104a645df; -[GIDCallbackQueue fire] */

void FUN_104a64560(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    while (*(int *)(param_1 + 0xc) == 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010bf529e0();
      if (lVar1 == 0) break;
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010c0dfd20(lVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10),param_2,0);
      (**(code **)(lVar1 + 0x10))(lVar1);
      _objc_release(lVar1);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 104a645e0; end: 104a6460f; -[GIDCallbackQueue .cxx_destruct] */

void FUN_104a645e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104a64610; end: 104a6461f; -[GIDConfiguration initWithClientID:] */

void FUN_104a64610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bffef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithClientID_serverClientID__1125dd5a0,param_3,0,0,0);
  return;
}



/* Entry: 104a64620; end: 104a6462b; -[GIDConfiguration initWithClientID:serverClientID:] */

void FUN_104a64620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bffef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithClientID_serverClientID__1125dd5a0,param_3,param_4,0,0);
  return;
}



/* Entry: 104a6462c; end: 104a646af; -[GIDConfiguration description] */

void FUN_104a6462c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daa338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a646b0; end: 104a646b3; -[GIDConfiguration copyWithZone:] */

void FUN_104a646b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a646b4; end: 104a646bb; +[GIDConfiguration supportsSecureCoding] */

undefined8 FUN_104a646b4(void)

{
  return 1;
}



/* Entry: 104a646bc; end: 104a64803; -[GIDConfiguration initWithCoder:] */

undefined8 FUN_104a646bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  _objc_opt_class(puVar1);
  lVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110daa2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110daa2d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110daa2f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar5 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110daa318);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x00010bffef60(param_1,param_2,lVar2,lVar3,lVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 104a64804; end: 104a64887; -[GIDConfiguration encodeWithCoder:] */

void FUN_104a64804(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110daa2d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110daa2f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110daa318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a64888; end: 104a6488f; -[GIDConfiguration clientID] */

undefined8 FUN_104a64888(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a64890; end: 104a64897; -[GIDConfiguration serverClientID] */

undefined8 FUN_104a64890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a64898; end: 104a6489f; -[GIDConfiguration hostedDomain] */

undefined8 FUN_104a64898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a648a0; end: 104a648a7; -[GIDConfiguration openIDRealm] */

undefined8 FUN_104a648a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a648a8; end: 104a648ef; -[GIDConfiguration .cxx_destruct] */

void FUN_104a648a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a648f0; end: 104a6498b; +[GIDEMMErrorHandler sharedInstance] */

void FUN_104a648f0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x104a64964;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam00000001136a1ce0 != -1) {
    func_0x00010002a2fc(0x1136a1ce0,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1ce8);
  return;
}



/* Entry: 104a6498c; end: 104a64c67; -[GIDEMMErrorHandler handleErrorFromResponse:completion:] */

bool FUN_104a6498c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  int iStack_58;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    _objc_opt_class();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if ((uVar1 & 1) != 0) {
        uVar1 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c071ae0();
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar1;
          func_0x00010bfda7c0();
          if ((int)uVar2 != 0) {
            func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110daa398);
            uVar2 = uVar1;
            func_0x00010c260c00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar2;
            func_0x00010bfda7c0();
            uVar6 = uVar2;
            if ((int)uVar5 != 0) {
              func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110db3eb8);
              func_0x00010c260c00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
            }
            puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar6;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            _objc_release(puVar7);
            uVar5 = uVar2;
            func_0x00010c08fa60();
            if (uVar5 == 0) {
              puVar7 = (undefined *)0x0;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
              func_0x00010bdc3460();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(uVar2);
            iVar8 = 3;
            goto LAB_104a64c38;
          }
          uVar2 = uVar1;
          func_0x00010bfda7c0();
          puVar7 = (undefined *)0x0;
          if ((int)uVar2 != 0) {
            iVar8 = 1;
            goto LAB_104a64c38;
          }
          iVar8 = 0;
        }
        else {
          puVar7 = (undefined *)0x0;
          iVar8 = 2;
LAB_104a64c38:
          *(undefined1 *)(param_1 + 8) = 1;
        }
        _objc_release(uVar1);
        goto LAB_104a64a4c;
      }
    }
  }
  iVar8 = 0;
  puVar7 = (undefined *)0x0;
LAB_104a64a4c:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (iVar8 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a64c68;
    puStack_78 = &UNK_1108ecb60;
    lVar3 = param_4;
    lStack_70 = param_1;
    _objc_retain();
    puVar4 = puVar7;
    lStack_60 = lVar3;
    iStack_58 = iVar8;
    _objc_retain();
    puStack_68 = puVar4;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
    _objc_release(puStack_68);
    _objc_release(lStack_60);
  }
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  return iVar8 != 0;
}



/* Entry: 104a64c68; end: 104a64fb3;  */

void FUN_104a64c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar8 = &puStack_a0;
  lVar2 = *(long *)(param_5 + 0x20);
  func_0x00010c086b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_5 + 0x30) + 0x10))();
    goto LAB_104a64f8c;
  }
  lVar9 = lVar2;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
LAB_104a64d00:
    lVar9 = lVar2;
    func_0x00010bf20c00();
    iVar1 = (int)lVar9;
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar3);
    }
    else {
      func_0x00010bf20c00(lVar2);
    }
    puVar3 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    _objc_alloc();
    lVar9 = lVar2;
    func_0x00010c2a72c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0632a0(puVar3,param_6,lVar9);
    _objc_release(lVar9);
    if (puVar3 == (undefined *)0x0) goto LAB_104a64d00;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c1ee700(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c1417c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c225b00(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80,puVar3);
  func_0x00010c0b7280(puVar3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104a64fb4;
  puStack_88 = &UNK_1108465d0;
  _objc_retain();
  lVar9 = lVar2;
  puStack_80 = puVar3;
  _objc_retain();
  uStack_70 = *(undefined8 *)(param_5 + 0x20);
  uVar7 = *(undefined8 *)(param_5 + 0x30);
  lStack_78 = lVar9;
  _objc_retain();
  uStack_68 = uVar7;
  _objc_retainBlock();
  iVar1 = *(int *)(param_5 + 0x38);
  if (iVar1 == 1) {
    lVar9 = *(long *)(param_5 + 0x20);
    func_0x00010bf70c80(lVar9,param_6,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
LAB_104a64f18:
    if (lVar9 == 0) goto LAB_104a64f58;
    puVar4 = puVar3;
    func_0x00010c1417c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(puVar4);
    _objc_release(lVar9);
  }
  else {
    if (iVar1 == 3) {
      lVar9 = *(long *)(param_5 + 0x20);
      func_0x00010bf06680(lVar9,param_6,*(undefined8 *)(param_5 + 0x28),ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104a64f18;
    }
    if (iVar1 == 2) {
      lVar9 = *(long *)(param_5 + 0x20);
      func_0x00010c0f4dc0(lVar9,param_6,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104a64f18;
    }
LAB_104a64f58:
    (**(code **)((long)ppuVar8 + 0x10))(ppuVar8);
  }
  _objc_release(ppuVar8);
  _objc_release(uStack_68);
  _objc_release(lStack_78);
  _objc_release(puStack_80);
  _objc_release(puVar3);
LAB_104a64f8c:
  _objc_release(lVar2);
  return;
}



/* Entry: 104a64fb4; end: 104a64fff;  */

void FUN_104a64fb4(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20),param_2,1);
  func_0x00010c1ee700(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0b7280(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000104a64ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}


