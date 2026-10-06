/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059c47c0; end: 1059c489b; -[SCSortableSnapchatterObservableRepositoryImpl allFriendsObservableWithQueue:] */

void FUN_1059c47c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ee960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c489c; end: 1059c48e7; -[SCSortableSnapchatterObservableRepositoryImpl aToZMapObservableWithQueue:] */

void FUN_1059c489c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf000c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c48e8; end: 1059c48ef;  */

undefined ** FUN_1059c48e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c246f60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar4 == (undefined **)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
        _objc_release(puVar5);
      }
      ppuVar4 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(ppuVar4);
      _objc_release(uVar7);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e2ca98;
}



/* Entry: 1059c48f0; end: 1059c49c7; -[SCSortableSnapchatterObservableRepositoryImpl friendsObservableForLetterKey:queue:] */

void FUN_1059c48f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010beec0e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059c49c8;
  puStack_40 = &UNK_1108b2f88;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059c49c8; end: 1059c4a1b;  */

void FUN_1059c49c8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c4a1c; end: 1059c4af3; -[SCSortableSnapchatterObservableRepositoryImpl mutualFriendsObservableForLetterKey:queue:] */

void FUN_1059c4a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010beec0e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059c4af4;
  puStack_40 = &UNK_1108b2f88;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059c4af4; end: 1059c4b63;  */

void FUN_1059c4af4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x0001006372a4(puVar1,&PTR___NSConcreteGlobalBlock_1108cbcd0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059c4b64; end: 1059c4bef;  */

ulong FUN_1059c4b64(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100bec434();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c244280(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100bf119c();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1059c4bf0; end: 1059c4c1f; -[SCSortableSnapchatterObservableRepositoryImpl .cxx_destruct] */

void FUN_1059c4bf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059c4c20; end: 1059c4cf7;  */

void FUN_1059c4c20(long param_1)

{
  undefined8 *puVar1;
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
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c0aa8);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c4cf8; end: 1059c4f2f;  */

void FUN_1059c4cf8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c0aa0);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_1059c82c8();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 0;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_1108cbd60;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_1108cbd00;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_1108cbd00;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_1108cbd60;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059c4f30; end: 1059c500b;  */

undefined8 * FUN_1059c4f30(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108cbd00;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1059c500c; end: 1059c5093;  */

void FUN_1059c500c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1059c7824(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059c5094; end: 1059c511b;  */

void FUN_1059c5094(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1059c86ac(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059c511c; end: 1059c518b;  */

void FUN_1059c511c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1108cbd60;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1059c518c; end: 1059c5847;  */

void FUN_1059c518c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001059c57ec;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001059c580c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001059c580c;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001059c5780:
                    /* WARNING: Could not recover jumptable at 0x0001059c57a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001059c5780;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x0001059c580c;
    }
    goto code_r0x0001059c5800;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001059c5800;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x0001059c580c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001059c580c;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1059c581c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001059c57ec:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001059c5800:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001059c580c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1059c581c:
  return;
}



/* Entry: 1059c5848; end: 1059c58cf;  */

void FUN_1059c5848(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001059c58bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1059c58d0; end: 1059c5a03;  */

void FUN_1059c58d0(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001059c59f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1059c5a04; end: 1059c5ab3;  */

ulong FUN_1059c5a04(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1059c5ab4; end: 1059c5aef;  */

undefined8 FUN_1059c5ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1059c5af0(uVar1,param_1);
  return uVar1;
}



/* Entry: 1059c5af0; end: 1059c5c9b;  */

void FUN_1059c5af0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001059c5d30(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001059c5c9c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1059c5bdc:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1059c5e30(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1059c5bdc;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_1108cbd60;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1059c5c9c; end: 1059c5e2f;  */

undefined8 * FUN_1059c5c9c(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_1108cbd60;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1059c5e30; end: 1059c5ec7;  */

undefined8 * FUN_1059c5e30(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_1108cbd60;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1059c5ec8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1059c5ec8; end: 1059c5f3f;  */

void FUN_1059c5ec8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1059c5f40(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1059c5f40; end: 1059c5f7b;  */

void FUN_1059c5f40(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_1059c5f90();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_1059c5f7c();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108cbd00;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1059c5f7c; end: 1059c5f8f;  */

void FUN_1059c5f7c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108cbd00;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1059c5f90; end: 1059c602f;  */

void FUN_1059c5f90(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108cbd00;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1059c6030; end: 1059c66eb;  */

void FUN_1059c6030(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001059c6690;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001059c66b0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001059c66b0;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001059c6624:
                    /* WARNING: Could not recover jumptable at 0x0001059c6648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001059c6624;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x0001059c66b0;
    }
    goto code_r0x0001059c66a4;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001059c66a4;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x0001059c66b0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001059c66b0;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1059c66c0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001059c6690:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001059c66a4:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001059c66b0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1059c66c0:
  return;
}



/* Entry: 1059c66ec; end: 1059c6773;  */

void FUN_1059c66ec(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001059c6760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1059c6774; end: 1059c68a7;  */

void FUN_1059c6774(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001059c689c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1059c68a8; end: 1059c6ab3;  */

uint FUN_1059c68a8(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_1059c6a8c;
      }
      goto LAB_1059c69d8;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1059c6a8c;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_1059c6a8c;
    }
LAB_1059c69d8:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_1059c6a8c;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_1059c6a8c:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 1059c6ab4; end: 1059c6d2f;  */

undefined8 * FUN_1059c6ab4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_1108cbd00;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1059c5ec8(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_1108cbd00;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_1108cbd00;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_1059c6bdc;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1059c6bdc;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1059c6bdc:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108cbd00;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1059c6d30; end: 1059c6e33; -[SCSnapchattersIndexScriptObserver initWithDocObjectContext:observationQueue:] */

undefined1 *
FUN_1059c6d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb330;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0ae8;
    _objc_alloc();
    func_0x00010c00dd80();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059c6e34; end: 1059c6e53;  */

void FUN_1059c6e34(undefined8 param_1,undefined8 param_2)

{
  FUN_1059c4cf8(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059c6e54; end: 1059c6ec7; -[SCSnapchattersIndexScriptObserver indexScript] */

void FUN_1059c6e54(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0aa0;
  _objc_opt_class(PTR_PTR_1126c0aa0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c6ec8; end: 1059c6f6b; -[SCSnapchattersIndexScriptObserver indexScriptObservable] */

void FUN_1059c6ec8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uStack_54;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_opt_class(PTR_PTR_1126c0aa0);
  if (lVar2 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_38,lVar2);
  }
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  puVar1 = &uStack_38;
  func_0x000108c7f714(puVar1,&lStack_50,&uStack_54);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  _objc_release(uStack_28);
  _objc_release(uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c6f6c; end: 1059c700f; -[SCSnapchattersIndexScriptObserver displayMetadatasObservable] */

void FUN_1059c6f6c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uStack_54;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_opt_class(PTR_PTR_1126c0aa8);
  if (lVar2 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_38,lVar2);
  }
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  puVar1 = &uStack_38;
  func_0x000108c7f714(puVar1,&lStack_50,&uStack_54);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  _objc_release(uStack_28);
  _objc_release(uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c7010; end: 1059c704b; -[SCSnapchattersIndexScriptObserver .cxx_destruct] */

void FUN_1059c7010(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059c704c; end: 1059c7057; +[SCSnapchattersDisplayMetadata table] */

undefined * FUN_1059c704c(void)

{
  return &UNK_10f31a450;
}



/* Entry: 1059c7058; end: 1059c72ab; +[SCSnapchattersDisplayMetadata immutableObjectParse:bufferSize:] */

void FUN_1059c7058(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c0aa8;
  _objc_alloc(PTR_PTR_1126c0aa8);
  lVar5 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar6 < 5) {
    puVar8 = (undefined *)0x0;
LAB_1059c713c:
    puVar9 = (undefined *)0x0;
LAB_1059c7140:
    puVar10 = (undefined *)0x0;
LAB_1059c7144:
    puVar11 = (undefined *)0x0;
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
    if (uVar6 < 7) goto LAB_1059c713c;
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
    if (uVar6 < 9) goto LAB_1059c7140;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar7 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0xb) goto LAB_1059c7144;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
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
    if ((0xc < uVar6) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc), uVar7 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
      goto LAB_1059c714c;
    }
  }
  uVar4 = 0;
LAB_1059c714c:
  func_0x00010c05b660(puVar3,param_2,puVar8,puVar9,puVar10,puVar11,uVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059c72ac; end: 1059c72cf; +[SCSnapchattersDisplayMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_1059c72ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1059c72c8;
  auVar1._0_8_ = 0x1059c72c0;
  return auVar1;
}



/* Entry: 1059c72d0; end: 1059c7413;  */

undefined1 *
FUN_1059c72d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126eb338;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
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
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_7;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1059c7414; end: 1059c7823;  */

void FUN_1059c7414(undefined *param_1)

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
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar8,&UNK_10f31a46e);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2923e0(param_1);
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
            _objc_opt_class(PTR_PTR_1126c0aa8);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_1059c7748;
            puVar8 = PTR_PTR_1126c0ae0;
            _objc_alloc(PTR_PTR_1126c0ae0);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0d5140(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c1499e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c246f60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c151c00(puVar3);
            FUN_1059c72d0(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_1 = puVar3;
            goto LAB_1059c753c;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c0aa8);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126c0ae0;
        _objc_alloc(PTR_PTR_1126c0ae0);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0d5140(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c1499e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c246f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c151c00(puVar3);
        FUN_1059c72d0(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_1059c753c:
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_1059c7750;
      }
LAB_1059c7748:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1059c7750:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1059c7824; end: 1059c7b17;  */

void FUN_1059c7824(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c0ae0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1059c7414();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126c0ae0;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126c0ae0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c0d5140(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c1499e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c246f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c151c00(param_1);
      FUN_1059c72d0(puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar7 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c0d5140(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c1499e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c246f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c151c00();
    *(int *)(puVar1 + 0x14) = (int)puVar7;
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059c7b18; end: 1059c7b7f;  */

void FUN_1059c7b18(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0aa8;
    _objc_alloc(PTR_PTR_1126c0aa8);
    func_0x00010c05b660();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c7b80; end: 1059c7bc7; -[SCSnapchattersDisplayMetadataChangeRequest .cxx_destruct] */

void FUN_1059c7b80(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1059c7bc8; end: 1059c7bd3; -[SCSnapchattersDisplayMetadataChangeRequest table] */

undefined * FUN_1059c7bc8(void)

{
  return &UNK_10f31a450;
}



/* Entry: 1059c7bd4; end: 1059c7c1b; -[SCSnapchattersDisplayMetadataChangeRequest createTableWithSQLite:] */

void FUN_1059c7bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddc8436,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1059c7c1c; end: 1059c7fa3; -[SCSnapchattersDisplayMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1059c7c1c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1059c7b18(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1059c7fa4(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f31a4f2);
    if (lVar6 == 0) goto LAB_1059c7f40;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1059c7f40;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0aa8);
    func_0x00010c21c9a0(puVar7);
LAB_1059c7f28:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f31a4b9);
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
            _objc_opt_class(PTR_PTR_1126c0aa8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1059c7f4c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1059c7f4c;
    }
    FUN_1059c7b18(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1059c7fa4(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f31a538);
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
        _objc_opt_class(PTR_PTR_1126c0aa8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1059c7f28;
      }
    }
LAB_1059c7f40:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1059c7f4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059c7fa4; end: 1059c8197;  */

ulong FUN_1059c7fa4(ulong param_1,undefined8 param_2)

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
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1059c8198(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1059c8198(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c1499e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1059c8198(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010c246f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  FUN_1059c8198(param_1,uVar10);
  uVar12 = param_2;
  func_0x00010c151c00(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce354(param_1,0xc,uVar12,0);
  func_0x0001001ce2e4(param_1,10,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1059c8198; end: 1059c82c7;  */

undefined8 FUN_1059c8198(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1059c8278;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1059c8278;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1059c8238;
    param_1 = 0;
  }
  else {
LAB_1059c8238:
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
LAB_1059c8278:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1059c82c8; end: 1059c837f;  */

undefined8 FUN_1059c82c8(void)

{
  int iVar1;
  
  if ((bRam000000011381a618 & 1) == 0) {
    iVar1 = 0x1381a618;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a5b0 = 0xe;
      puRam000000011381a5b8 = &UNK_10f31a588;
      uRam000000011381a5c0 = 0x10001;
      pcRam000000011381a5c8 = FUN_1059c8380;
      pcRam000000011381a5d0 = FUN_1059c83b8;
      ppuRam000000011381a5a8 = &PTR_DAT_1108cbd60;
      uRam000000011381a5e8 = 0;
      uRam000000011381a5e0 = 0;
      uRam000000011381a5f8 = 0;
      uRam000000011381a5f0 = 0;
      uRam000000011381a608 = 0;
      uRam000000011381a600 = 0;
      uRam000000011381a610 = 0;
      ___cxa_atexit(0x1059c4f9c,0x11381a5a8,0x100000000);
      ___cxa_guard_release(0x11381a618);
    }
  }
  return 0x11381a5a8;
}



/* Entry: 1059c8380; end: 1059c83b7;  */

undefined4 FUN_1059c8380(uint *param_1,undefined1 *param_2)

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



/* Entry: 1059c83b8; end: 1059c840b;  */

undefined8 FUN_1059c83b8(undefined8 param_1,undefined1 *param_2)

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



/* Entry: 1059c840c; end: 1059c8417; +[SCSnapchattersIndexScript table] */

undefined * FUN_1059c840c(void)

{
  return &UNK_10f31a58d;
}



/* Entry: 1059c8418; end: 1059c85d3; +[SCSnapchattersIndexScript immutableObjectParse:bufferSize:] */

void FUN_1059c8418(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint *puVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c0aa0;
  _objc_alloc(PTR_PTR_1126c0aa0);
  lVar8 = (long)*piVar1;
  puVar9 = (ushort *)((long)piVar1 - lVar8);
  uVar6 = *puVar9;
  if (uVar6 < 5) {
    uVar10 = 0;
LAB_1059c8540:
    puVar11 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar9[2] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + (ulong)puVar9[2]);
    }
    if (uVar6 < 7) goto LAB_1059c8540;
    if ((ulong)puVar9[3] == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar12 + (ulong)*puVar12 + 4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010befa120(puVar4,param_2,puVar11);
          }
          _objc_release(puVar11);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar2 + 1 + *puVar2);
      }
      puVar11 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      lVar8 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar8);
    }
    if ((8 < uVar6) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar8)), uVar7 != 0)) {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar7);
      goto LAB_1059c8548;
    }
  }
  uVar5 = 0;
LAB_1059c8548:
  func_0x00010c055c00(puVar3,param_2,uVar10,puVar11,uVar5);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059c85d4; end: 1059c85f7; +[SCSnapchattersIndexScript objectClassFunctionPointer] */

undefined1  [16] FUN_1059c85d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1059c85f0;
  auVar1._0_8_ = 0x1059c85e8;
  return auVar1;
}



/* Entry: 1059c85f8; end: 1059c86ab;  */

undefined1 *
FUN_1059c85f8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126eb340;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined4 *)((long)plVar1 + 0x14) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x18) = param_5;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1059c86ac; end: 1059c8b3f;  */

void FUN_1059c86ac(ulong param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain();
  puVar9 = PTR_PTR_1126c0af0;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_1059c899c:
    uVar1 = 0;
LAB_1059c89a0:
    _objc_release(uVar1);
  }
  else {
    uVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)uVar1 < 0) {
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf636c0();
      _objc_release(puVar9);
      func_0x0001001b9e08(puVar2,&UNK_10f31a5a7);
      uVar1 = param_1;
      if (puVar2 != (undefined *)0x0) {
        uVar3 = param_1;
        func_0x00010c27dd80(param_1);
        _sqlite3_bind_int64(puVar2,1,uVar3 & 0xffffffff);
        puVar9 = puVar2;
        _sqlite3_step();
        if ((int)puVar9 == 100) {
          puVar9 = puVar2;
          _sqlite3_column_int64(puVar2,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126c0aa0);
          _sqlite3_column_blob(puVar2,1);
          _sqlite3_column_bytes(puVar2,1);
          puVar5 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar4);
          _sqlite3_reset(puVar2);
          if (puVar5 == (undefined *)0x0) goto LAB_1059c899c;
          puVar2 = PTR_PTR_1126c0af0;
          _objc_alloc();
          puVar4 = puVar5;
          func_0x00010c27dd80(puVar5);
          puVar6 = puVar5;
          func_0x00010bfed460(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c099520(puVar5);
          FUN_1059c85f8(puVar2,puVar9,puVar4,puVar6,puVar7);
          goto LAB_1059c87bc;
        }
      }
      goto LAB_1059c89a0;
    }
    uVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0aa0);
    puVar5 = puVar9;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar9);
    if (puVar5 == (undefined *)0x0) goto LAB_1059c899c;
    puVar2 = PTR_PTR_1126c0af0;
    _objc_alloc();
    puVar9 = puVar5;
    func_0x00010c27dd80(puVar5);
    puVar6 = puVar5;
    func_0x00010bfed460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c099520(puVar5);
    FUN_1059c85f8(puVar2,uVar1,puVar9,puVar6,puVar4);
LAB_1059c87bc:
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      uVar1 = param_1;
      func_0x00010c27dd80();
      *(int *)(puVar2 + 0x14) = (int)uVar1;
      uVar1 = param_1;
      func_0x00010bfed460(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c099520();
      *(int *)(puVar2 + 0x18) = (int)uVar1;
      _objc_retain(puVar2);
      puVar9 = puVar2;
      goto LAB_1059c8a50;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar9 = PTR_PTR_1126c0af0;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  puVar2 = PTR_PTR_1126c0af0;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    uVar1 = param_1;
    func_0x00010c27dd80(param_1);
    uVar3 = param_1;
    func_0x00010bfed460(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c099520(param_1);
    FUN_1059c85f8(puVar2,0xffffffffffffffff,uVar1,uVar3,uVar8);
    _objc_release(uVar3);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar9 = (undefined *)0x0;
LAB_1059c8a50:
  _objc_release(puVar9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059c8b40; end: 1059c8ba3;  */

void FUN_1059c8b40(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0aa0;
    _objc_alloc(PTR_PTR_1126c0aa0);
    func_0x00010c055c00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c8ba4; end: 1059c8baf; -[SCSnapchattersIndexScriptChangeRequest .cxx_destruct] */

void FUN_1059c8ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1059c8bb0; end: 1059c8bbb; -[SCSnapchattersIndexScriptChangeRequest table] */

undefined * FUN_1059c8bb0(void)

{
  return &UNK_10f31a58d;
}



/* Entry: 1059c8bbc; end: 1059c8c03; -[SCSnapchattersIndexScriptChangeRequest createTableWithSQLite:] */

void FUN_1059c8bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddc84c1,0x84,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1059c8c04; end: 1059c8f9b; -[SCSnapchattersIndexScriptChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1059c8c04(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_1059c8b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1059c8f9c(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f31a621);
    if (lVar5 == 0) goto LAB_1059c8f38;
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
    if ((int)lVar5 != 0x65) goto LAB_1059c8f38;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar9;
    func_0x00010c1eeb60(puVar4);
    puVar8 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0aa0);
    func_0x00010c21c9a0(puVar8);
LAB_1059c8f20:
    _objc_release(puVar8);
    _objc_retain(puVar4);
    puVar8 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f31a5ec);
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
            _objc_opt_class(PTR_PTR_1126c0aa0);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar4);
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1059c8f44;
          }
        }
      }
      puVar8 = (undefined *)0x0;
      goto LAB_1059c8f44;
    }
    FUN_1059c8b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_1059c8f9c(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar10 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar10;
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f31a661);
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
        _objc_opt_class(PTR_PTR_1126c0aa0);
        func_0x00010c21c9a0(puVar8);
        goto LAB_1059c8f20;
      }
    }
LAB_1059c8f38:
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_1059c8f44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1059c8f9c; end: 1059c930b;  */

/* WARNING: Possible PIC construction at 0x0001059c97ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001059c9d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001059c9c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001059c985c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001059c9c0c) */
/* WARNING: Removing unreachable block (ram,0x0001059c9d34) */
/* WARNING: Removing unreachable block (ram,0x0001059c97b0) */
/* WARNING: Removing unreachable block (ram,0x0001059c9860) */

undefined8 * FUN_1059c8f9c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 in_x5;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  undefined8 in_x6;
  int iVar31;
  undefined8 in_x7;
  long lVar32;
  long lVar33;
  char *pcVar34;
  long lVar35;
  ulong uVar36;
  long unaff_x26;
  char *unaff_x27;
  long unaff_x28;
  ulong uVar37;
  long lStack_368;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [256];
  long lStack_1c0;
  long lStack_1b0;
  char *pcStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
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
  lVar6 = param_2;
  func_0x00010bfed460();
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
  _objc_retain(lVar6);
  puVar26 = (undefined8 *)0x10;
  lVar32 = lVar6;
  func_0x00010bf52a60();
  if (lVar32 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = "";
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar6);
        }
        pcVar34 = *(char **)(lStack_128 + unaff_x28 * 8);
        _objc_retain(pcVar34);
        if (pcVar34 != (char *)0x0) {
          pcVar7 = pcVar34;
          _CFStringGetCStringPtr(pcVar34,0x8000100);
          if (pcVar7 == (char *)0x0) {
            pcVar7 = pcVar34;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar7 == (char *)0x0) {
              pcVar7 = pcVar34;
              func_0x00010bf64940();
              _objc_retainAutoreleasedReturnValue();
              if (pcVar7 != (char *)0x0) goto LAB_1059c90e0;
              iVar5 = 0;
            }
            else {
LAB_1059c90e0:
              _objc_retainAutorelease(pcVar7);
              pcVar9 = pcVar7;
              func_0x00010bf25f00();
              pcVar10 = pcVar7;
              func_0x00010c08fa60(pcVar7);
              pcVar8 = unaff_x27;
              if (pcVar9 != (char *)0x0) {
                pcVar8 = pcVar9;
              }
              puVar26 = param_1;
              func_0x0001001cde08(param_1,pcVar8,pcVar10);
              iVar5 = (int)puVar26;
            }
            _objc_release(pcVar7);
          }
          else {
            pcVar8 = pcVar7;
            _strlen(pcVar7);
            puVar26 = param_1;
            func_0x0001001cde08(param_1,pcVar7,pcVar8);
            iVar5 = (int)puVar26;
          }
          _objc_release(pcVar34);
          aiStack_134[0] = iVar5;
          if (iVar5 != 0) {
            func_0x000100c47d40(&lStack_150,aiStack_134);
          }
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar32 != unaff_x28);
      puVar26 = (undefined8 *)0x10;
      lVar32 = lVar6;
      func_0x00010bf52a60();
    } while (lVar32 != 0);
  }
  _objc_release(lVar6);
  _objc_release(lVar6);
  _objc_release(lVar6);
  lVar32 = param_2;
  func_0x00010c27dd80();
  lVar6 = 0x1130c2400;
  if (lStack_148 - lStack_150 != 0) {
    lVar6 = lStack_150;
  }
  puVar11 = param_1;
  func_0x000100c47e34(param_1,lVar6,lStack_148 - lStack_150 >> 2);
  lVar6 = param_2;
  func_0x00010c099520(param_2);
  *(undefined1 *)((long)param_1 + 0x46) = 1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 6);
  uVar3 = *(uint *)(param_1 + 5);
  func_0x0001001ce354(param_1,8,lVar6,0);
  func_0x000100c47f00(param_1,6,(ulong)puVar11 & 0xffffffff);
  puVar25 = (undefined8 *)0x0;
  lVar6 = lVar32;
  func_0x0001001ce354(param_1,4);
  puVar23 = (undefined8 *)(ulong)((uVar1 - uVar2) + uVar3);
  func_0x0001001ce548(param_1);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  lVar35 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(lVar32);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  _objc_release(lVar32);
  _objc_release(lVar32);
  _objc_release(param_2);
  lVar12 = lVar35;
  __Unwind_Resume();
  uStack_158 = 0x1059c930c;
  iVar29 = (int)in_x6;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = puVar23;
  uVar28 = in_x5;
  lStack_1b0 = unaff_x28;
  pcStack_1a8 = unaff_x27;
  lStack_1a0 = unaff_x26;
  uStack_198 = (ulong)uVar2;
  uStack_190 = (ulong)uVar1;
  uStack_188 = (ulong)uVar3;
  puStack_180 = puVar11;
  lStack_178 = lVar32;
  lStack_170 = lVar35;
  lStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar23);
  _objc_retain(lVar6);
  _objc_retain(puVar25);
  _objc_retain(puVar26);
  _objc_retain(in_x5);
  _objc_retain(puVar25);
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar11 = &uStack_340;
  iVar5 = (int)auStack_2c0;
  uVar27 = 0x10;
  lStack_368 = lVar12;
  func_0x00010bf52a60();
  iVar30 = (int)in_x6;
  iVar31 = (int)in_x7;
  iVar4 = (int)uVar28;
  if (lStack_368 != 0) {
    lVar32 = *plStack_330;
    do {
      lVar35 = 0;
      do {
        if (*plStack_330 != lVar32) {
          _objc_enumerationMutation(lVar12);
        }
        uVar37 = *(ulong *)(lStack_338 + lVar35 * 8);
        _objc_retain(uVar37);
        _objc_retain(puVar23);
        _objc_retain(lVar6);
        _objc_retain(puVar25);
        _objc_retain(puVar26);
        _objc_retain(in_x5);
        uVar27 = uVar37;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf5a4a0();
        func_0x00010bf651a0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar37;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c071ae0();
        _objc_release(uVar15);
        puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
        iVar31 = iVar29;
        if ((int)uVar16 == 0) {
          func_0x00010c1211c0(uVar27);
          func_0x00010bf651a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar11;
          func_0x00010c08aee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          uVar15 = uVar37;
          func_0x00010c07ea80();
          puVar19 = puVar26;
          if ((int)uVar15 != 0) {
            uVar15 = uVar27;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar15;
            func_0x00010bf4b900();
            _objc_release(uVar15);
            if ((int)uVar16 == 0) goto LAB_1059c95c8;
            func_0x00010c08a160();
            _objc_retainAutoreleasedReturnValue();
            if (puVar19 == (undefined8 *)0x0) {
LAB_1059c9824:
              _objc_retain(puVar14);
              puVar11 = puVar14;
            }
            else {
              func_0x00010c08a160();
              _objc_retainAutoreleasedReturnValue();
LAB_1059c9800:
              puVar11 = puVar26;
              func_0x00010c08aee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar26);
            }
            _objc_release(puVar19);
            iVar5 = 0;
            uVar27 = 1;
            iVar30 = 0;
            puVar24 = puVar25;
            goto SUB_1059c9e3c;
          }
LAB_1059c95c8:
          uVar15 = uVar37;
          func_0x00010c07ea80();
          if ((uVar15 & 1) == 0) {
            uVar15 = uVar27;
            func_0x00010c157500();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar15;
            func_0x00010bf4b900();
            _objc_release(uVar15);
            if ((int)uVar16 != 0) {
              uVar15 = uVar37;
              func_0x00010c0807c0();
              if ((int)uVar15 == 0) {
                lVar33 = lVar6;
                func_0x00010c0720c0();
                if ((int)lVar33 != 0) {
                  uVar15 = uVar37;
                  func_0x00010bf4df40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar16 = uVar15;
                  func_0x00010c253320();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar15);
                  uVar15 = uVar16;
                  func_0x00010c2533e0();
                  if (((int)uVar15 == 0x16) &&
                     (uVar13 = in_x5, func_0x00010bf1f440(), (int)uVar13 != 0)) {
                    _objc_retain(puVar25);
                    _objc_release(uVar16);
                    goto LAB_1059c9614;
                  }
                  _objc_release(uVar16);
                }
                func_0x00010c088540();
                _objc_retainAutoreleasedReturnValue();
                if (puVar19 == (undefined8 *)0x0) goto LAB_1059c9824;
                func_0x00010c088540();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1059c9800;
              }
              _objc_retain(puVar25);
LAB_1059c9614:
              _objc_release(puVar14);
              goto LAB_1059c9880;
            }
          }
          _objc_release(puVar14);
          _objc_retain(puVar25);
        }
        else {
          uVar15 = uVar37;
          func_0x00010c0cb9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar15 != 0) {
            uVar15 = uVar37;
            func_0x00010c07ea80();
            if ((int)uVar15 == 0) {
              uVar15 = uVar37;
              func_0x00010c0807c0();
              if ((int)uVar15 != 0) {
                _objc_retain(puVar25);
                goto LAB_1059c9880;
              }
              puVar23 = puVar26;
              func_0x00010c088500();
              _objc_retainAutoreleasedReturnValue();
              if (puVar23 == (undefined8 *)0x0) {
                _objc_retain(puVar11);
              }
              else {
                func_0x00010c088500();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar26;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar26);
              }
              _objc_release(puVar23);
              func_0x00010c06f4c0();
              iVar30 = (int)uVar37;
              iVar5 = 0;
            }
            else {
              puVar23 = puVar26;
              func_0x00010c08a0a0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar23 == (undefined8 *)0x0) {
                _objc_retain(puVar11);
              }
              else {
                func_0x00010c08a0a0();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar26;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar26);
              }
              _objc_release(puVar23);
              func_0x00010c06f4c0();
              iVar30 = (int)uVar37;
              iVar5 = 1;
            }
            uVar27 = 0;
            puVar24 = puVar25;
            goto SUB_1059c9e3c;
          }
          _objc_retain(puVar25);
        }
LAB_1059c9880:
        _objc_release(puVar11);
        _objc_release(uVar27);
        _objc_release(in_x5);
        _objc_release(puVar26);
        _objc_release(puVar25);
        _objc_release(lVar6);
        _objc_release(puVar23);
        _objc_release(uVar37);
        _objc_release(puVar25);
        _objc_retain(uVar37);
        _objc_retain(puVar23);
        _objc_retain(lVar6);
        _objc_retain(puVar25);
        _objc_retain(puVar26);
        uVar27 = uVar37;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf5a4a0();
        func_0x00010bf651a0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar37;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c071ae0();
        _objc_release(uVar15);
        puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
        puVar11 = puVar14;
        if ((int)uVar16 == 0) {
          uVar15 = uVar37;
          func_0x00010c07ea80();
          puVar19 = puVar26;
          if ((int)uVar15 != 0) {
            func_0x00010c08a080();
            _objc_retainAutoreleasedReturnValue();
            if (puVar19 != (undefined8 *)0x0) {
              func_0x00010c08a080();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1059c9bac;
            }
LAB_1059c9bd4:
            _objc_retain(puVar14);
LAB_1059c9be0:
            _objc_release(puVar19);
            iVar5 = 0;
            uVar27 = 2;
            iVar30 = 0;
            puVar24 = puVar25;
            iVar31 = 0;
            goto SUB_1059c9e3c;
          }
          uVar15 = uVar37;
          func_0x00010c0807c0();
          if ((int)uVar15 == 0) {
            func_0x00010c0884e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar19 == (undefined8 *)0x0) goto LAB_1059c9bd4;
            func_0x00010c0884e0();
            _objc_retainAutoreleasedReturnValue();
LAB_1059c9bac:
            puVar11 = puVar26;
            func_0x00010c08aee0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
            goto LAB_1059c9be0;
          }
        }
        else {
          func_0x00010c1211c0(uVar27);
          func_0x00010bf651a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08aee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          uVar15 = uVar37;
          func_0x00010c07ea80();
          uVar16 = uVar27;
          puVar19 = puVar26;
          if ((int)uVar15 == 0) {
LAB_1059c9aa8:
            uVar15 = uVar27;
            func_0x00010c157500();
            _objc_retainAutoreleasedReturnValue();
            uVar36 = uVar15;
            func_0x00010bf529e0();
            _objc_release(uVar15);
            if (uVar36 != 0) {
              uStack_2d8 = 0;
              uStack_2e0 = 0;
              uStack_2c8 = 0;
              uStack_2d0 = 0;
              lStack_2f8 = 0;
              uStack_300 = 0;
              uStack_2e8 = 0;
              plStack_2f0 = (long *)0x0;
              func_0x00010c157500();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar16;
              func_0x00010bf52a60();
              if (uVar15 != 0) {
                lVar33 = *plStack_2f0;
                do {
                  uVar36 = 0;
                  do {
                    if (*plStack_2f0 != lVar33) {
                      _objc_enumerationMutation(uVar16);
                    }
                    uVar18 = *(ulong *)(lStack_2f8 + uVar36 * 8);
                    func_0x00010c071ae0();
                    if ((uVar18 & 1) == 0) {
                      uVar15 = uVar37;
                      func_0x00010c07ea80();
                      if ((int)uVar15 != 0) goto LAB_1059c9c30;
                      uVar15 = uVar37;
                      func_0x00010c0807c0();
                      if ((int)uVar15 != 0) {
                        _objc_retain(puVar25);
                        _objc_release(uVar16);
                        _objc_release(puVar11);
                        goto LAB_1059c9d5c;
                      }
                      func_0x00010c088520();
                      _objc_retainAutoreleasedReturnValue();
                      if (puVar19 == (undefined8 *)0x0) goto LAB_1059c9cf8;
                      func_0x00010c088520();
                      _objc_retainAutoreleasedReturnValue();
                      goto LAB_1059c9c5c;
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar15 != uVar36);
                  uVar15 = uVar16;
                  func_0x00010bf52a60();
                } while (uVar15 != 0);
              }
              goto LAB_1059c9ca4;
            }
          }
          else {
            uVar15 = uVar27;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            uVar36 = uVar15;
            func_0x00010bf529e0();
            _objc_release(uVar15);
            if (uVar36 == 0) goto LAB_1059c9aa8;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            lStack_2f8 = 0;
            uStack_300 = 0;
            uStack_2e8 = 0;
            plStack_2f0 = (long *)0x0;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar16;
            func_0x00010bf52a60();
            if (uVar15 != 0) {
              lVar33 = *plStack_2f0;
              do {
                uVar36 = 0;
                do {
                  if (*plStack_2f0 != lVar33) {
                    _objc_enumerationMutation(uVar16);
                  }
                  uVar18 = *(ulong *)(lStack_2f8 + uVar36 * 8);
                  func_0x00010c071ae0();
                  if ((uVar18 & 1) == 0) goto LAB_1059c9c30;
                  uVar36 = uVar36 + 1;
                } while (uVar15 != uVar36);
                uVar15 = uVar16;
                func_0x00010bf52a60();
              } while (uVar15 != 0);
            }
LAB_1059c9ca4:
            _objc_release(uVar16);
          }
          _objc_release(puVar11);
        }
        _objc_retain(puVar25);
LAB_1059c9d5c:
        _objc_release(puVar14);
        _objc_release(uVar27);
        _objc_release(puVar26);
        _objc_release(puVar25);
        _objc_release(lVar6);
        _objc_release(puVar23);
        _objc_release(uVar37);
        _objc_release(puVar25);
        lVar35 = lVar35 + 1;
      } while (lVar35 != lStack_368);
      puVar11 = &uStack_340;
      iVar5 = (int)auStack_2c0;
      uVar27 = 0x10;
      lStack_368 = lVar12;
      func_0x00010bf52a60();
      iVar30 = (int)in_x6;
      iVar31 = (int)in_x7;
      iVar4 = (int)uVar28;
    } while (lStack_368 != 0);
  }
  iVar29 = iVar4;
  _objc_release(in_x5);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(lVar6);
  _objc_release(puVar23);
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar6 = lVar12;
SUB_1059c9e3c:
  _objc_retain(puVar24);
  _objc_retain(puVar11);
  _objc_retain(lVar6);
  puVar26 = puVar24;
  func_0x00010c08a5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar24;
  func_0x00010c154d00(puVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar24;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c089080();
  puVar19 = puVar24;
  func_0x00010bf8be60();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar11;
  func_0x00010bf433a0();
  puVar21 = puVar11;
  func_0x00010bf433a0();
  puVar22 = puVar26;
  if (((puVar14 == (undefined8 *)0x0) || (puVar20 == (undefined8 *)0x1)) ||
     ((uVar27 == 3 && puVar21 == (undefined8 *)0x0) && puVar25 != (undefined8 *)0x3)) {
    if (((uVar27 < 2) && (puVar25 == (undefined8 *)0x3)) ||
       ((puVar25 == (undefined8 *)0x2 && uVar27 < 2 ||
        ((uVar27 == 0 && puVar25 == (undefined8 *)0x1 ||
         (uVar27 == 2 && puVar25 == (undefined8 *)0x0 || uVar27 < 2 && puVar26 == (undefined8 *)0x0)
         ))))) {
      if (puVar26 == (undefined8 *)0x0) {
        _objc_retain(puVar11);
        puVar22 = puVar11;
      }
      else {
        _objc_retain(puVar26);
        _objc_release(puVar23);
        func_0x00010c08aee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar26);
        puVar23 = puVar26;
      }
    }
    _objc_retain(puVar11);
    _objc_release(puVar14);
    puVar14 = puVar11;
  }
  if (((puVar22 != (undefined8 *)0x0) && (1 < uVar27)) &&
     ((puVar26 = puVar11, func_0x00010bf433a0(), puVar26 == (undefined8 *)0x1 ||
      (puVar26 = puVar11, func_0x00010bf433a0(), puVar26 == (undefined8 *)0x0)))) {
    if (puVar19 == (undefined8 *)0x0) {
LAB_1059ca064:
      _objc_retain(puVar11);
      puVar19 = puVar11;
    }
    else {
      puVar26 = puVar19;
      func_0x00010bf433a0();
      if (puVar26 == (undefined8 *)0xffffffffffffffff) {
        _objc_retain(puVar11);
        _objc_release(puVar19);
        puVar19 = puVar11;
        if (puVar11 == (undefined8 *)0x0) goto LAB_1059ca064;
      }
      puVar26 = puVar19;
      func_0x00010bf8bde0(puVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = puVar26;
    }
  }
  if (iVar29 == 0) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    puVar26 = puVar24;
    func_0x00010c08a0a0();
    _objc_retainAutoreleasedReturnValue();
    if ((iVar5 != 0) &&
       ((puVar26 == (undefined8 *)0x0 ||
        (puVar25 = puVar11, func_0x00010bf433a0(), puVar25 == (undefined8 *)0x1)))) {
      _objc_retain(puVar11);
      _objc_release(puVar26);
      puVar26 = puVar11;
    }
  }
  puVar20 = puVar24;
  func_0x00010c0887e0();
  _objc_retainAutoreleasedReturnValue();
  if (((iVar30 != 0) && (iVar31 != 0)) &&
     ((puVar20 == (undefined8 *)0x0 ||
      (puVar25 = puVar11, func_0x00010bf433a0(), puVar25 == (undefined8 *)0x1)))) {
    _objc_retain(puVar11);
    _objc_release(puVar20);
    puVar20 = puVar11;
  }
  puVar25 = (undefined8 *)PTR_PTR_1126c0af8;
  _objc_alloc(PTR_PTR_1126c0af8);
  func_0x00010c050be0();
  _objc_release(lVar6);
  _objc_release(puVar20);
  _objc_release(puVar26);
  _objc_release(puVar19);
  _objc_release(puVar14);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar11);
  _objc_release(puVar24);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return puVar25;
LAB_1059c9c30:
  func_0x00010c08a140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar19 == (undefined8 *)0x0) {
LAB_1059c9cf8:
    _objc_retain(puVar11);
  }
  else {
    func_0x00010c08a140();
    _objc_retainAutoreleasedReturnValue();
LAB_1059c9c5c:
    puVar11 = puVar26;
    func_0x00010c08aee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
  }
  _objc_release(puVar19);
  iVar5 = 0;
  uVar27 = 3;
  iVar30 = 0;
  puVar24 = puVar25;
  iVar31 = 0;
  goto SUB_1059c9e3c;
}



/* Entry: 1059c930c; end: 1059ca1b3;  */

/* WARNING: Possible PIC construction at 0x0001059c97ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001059c9d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001059c9c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001059c985c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001059c9c0c) */
/* WARNING: Removing unreachable block (ram,0x0001059c9d34) */
/* WARNING: Removing unreachable block (ram,0x0001059c97b0) */
/* WARNING: Removing unreachable block (ram,0x0001059c9860) */

void FUN_1059c930c(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lStack_218;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  iVar19 = (int)param_7;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  uVar18 = param_6;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar9 = &uStack_1f0;
  iVar16 = (int)auStack_170;
  uVar17 = 0x10;
  lStack_218 = param_1;
  func_0x00010bf52a60();
  iVar20 = (int)param_7;
  iVar21 = (int)param_8;
  iVar1 = (int)uVar18;
  if (lStack_218 != 0) {
    lVar22 = *plStack_1e0;
    do {
      lVar24 = 0;
      do {
        if (*plStack_1e0 != lVar22) {
          _objc_enumerationMutation(param_1);
        }
        uVar27 = *(ulong *)(lStack_1e8 + lVar24 * 8);
        _objc_retain(uVar27);
        _objc_retain(param_2);
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_6);
        uVar17 = uVar27;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf5a4a0();
        func_0x00010bf651a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar27;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        iVar21 = iVar19;
        if ((int)uVar5 == 0) {
          func_0x00010c1211c0(uVar17);
          func_0x00010bf651a0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar9;
          func_0x00010c08aee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          uVar4 = uVar27;
          func_0x00010c07ea80();
          puVar8 = param_5;
          if ((int)uVar4 != 0) {
            uVar4 = uVar17;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf4b900();
            _objc_release(uVar4);
            if ((int)uVar5 == 0) goto LAB_1059c95c8;
            func_0x00010c08a160();
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 == (undefined8 *)0x0) {
LAB_1059c9824:
              _objc_retain(puVar26);
              puVar9 = puVar26;
            }
            else {
              func_0x00010c08a160();
              _objc_retainAutoreleasedReturnValue();
LAB_1059c9800:
              puVar9 = param_5;
              func_0x00010c08aee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_5);
            }
            _objc_release(puVar8);
            iVar16 = 0;
            uVar17 = 1;
            iVar20 = 0;
            puVar2 = param_4;
            goto SUB_1059c9e3c;
          }
LAB_1059c95c8:
          uVar4 = uVar27;
          func_0x00010c07ea80();
          if ((uVar4 & 1) == 0) {
            uVar4 = uVar17;
            func_0x00010c157500();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf4b900();
            _objc_release(uVar4);
            if ((int)uVar5 != 0) {
              uVar4 = uVar27;
              func_0x00010c0807c0();
              if ((int)uVar4 == 0) {
                lVar23 = param_3;
                func_0x00010c0720c0();
                if ((int)lVar23 != 0) {
                  uVar4 = uVar27;
                  func_0x00010bf4df40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010c253320();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar4);
                  uVar4 = uVar5;
                  func_0x00010c2533e0();
                  if (((int)uVar4 == 0x16) &&
                     (uVar3 = param_6, func_0x00010bf1f440(), (int)uVar3 != 0)) {
                    _objc_retain(param_4);
                    _objc_release(uVar5);
                    goto LAB_1059c9614;
                  }
                  _objc_release(uVar5);
                }
                func_0x00010c088540();
                _objc_retainAutoreleasedReturnValue();
                if (puVar8 == (undefined8 *)0x0) goto LAB_1059c9824;
                func_0x00010c088540();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1059c9800;
              }
              _objc_retain(param_4);
LAB_1059c9614:
              _objc_release(puVar26);
              goto LAB_1059c9880;
            }
          }
          _objc_release(puVar26);
          _objc_retain(param_4);
        }
        else {
          uVar4 = uVar27;
          func_0x00010c0cb9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar4 != 0) {
            uVar4 = uVar27;
            func_0x00010c07ea80();
            if ((int)uVar4 == 0) {
              uVar4 = uVar27;
              func_0x00010c0807c0();
              if ((int)uVar4 != 0) {
                _objc_retain(param_4);
                goto LAB_1059c9880;
              }
              puVar2 = param_5;
              func_0x00010c088500();
              _objc_retainAutoreleasedReturnValue();
              if (puVar2 == (undefined8 *)0x0) {
                _objc_retain(puVar9);
              }
              else {
                func_0x00010c088500();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = param_5;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(param_5);
              }
              _objc_release(puVar2);
              func_0x00010c06f4c0();
              iVar20 = (int)uVar27;
              iVar16 = 0;
            }
            else {
              puVar2 = param_5;
              func_0x00010c08a0a0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar2 == (undefined8 *)0x0) {
                _objc_retain(puVar9);
              }
              else {
                func_0x00010c08a0a0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = param_5;
                func_0x00010c08aee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(param_5);
              }
              _objc_release(puVar2);
              func_0x00010c06f4c0();
              iVar20 = (int)uVar27;
              iVar16 = 1;
            }
            uVar17 = 0;
            puVar2 = param_4;
            goto SUB_1059c9e3c;
          }
          _objc_retain(param_4);
        }
LAB_1059c9880:
        _objc_release(puVar9);
        _objc_release(uVar17);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_release(param_2);
        _objc_release(uVar27);
        _objc_release(param_4);
        _objc_retain(uVar27);
        _objc_retain(param_2);
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        uVar17 = uVar27;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf5a4a0();
        func_0x00010bf651a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar27;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c071ae0();
        _objc_release(uVar4);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        puVar9 = puVar26;
        if ((int)uVar5 == 0) {
          uVar4 = uVar27;
          func_0x00010c07ea80();
          puVar8 = param_5;
          if ((int)uVar4 != 0) {
            func_0x00010c08a080();
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 != (undefined8 *)0x0) {
              func_0x00010c08a080();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1059c9bac;
            }
LAB_1059c9bd4:
            _objc_retain(puVar26);
LAB_1059c9be0:
            _objc_release(puVar8);
            iVar16 = 0;
            uVar17 = 2;
            iVar20 = 0;
            puVar2 = param_4;
            iVar21 = 0;
            goto SUB_1059c9e3c;
          }
          uVar4 = uVar27;
          func_0x00010c0807c0();
          if ((int)uVar4 == 0) {
            func_0x00010c0884e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 == (undefined8 *)0x0) goto LAB_1059c9bd4;
            func_0x00010c0884e0();
            _objc_retainAutoreleasedReturnValue();
LAB_1059c9bac:
            puVar9 = param_5;
            func_0x00010c08aee0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_5);
            goto LAB_1059c9be0;
          }
        }
        else {
          func_0x00010c1211c0(uVar17);
          func_0x00010bf651a0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08aee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          uVar4 = uVar27;
          func_0x00010c07ea80();
          uVar5 = uVar17;
          puVar8 = param_5;
          if ((int)uVar4 == 0) {
LAB_1059c9aa8:
            uVar4 = uVar17;
            func_0x00010c157500();
            _objc_retainAutoreleasedReturnValue();
            uVar25 = uVar4;
            func_0x00010bf529e0();
            _objc_release(uVar4);
            if (uVar25 != 0) {
              uStack_188 = 0;
              uStack_190 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              lStack_1a8 = 0;
              uStack_1b0 = 0;
              uStack_198 = 0;
              plStack_1a0 = (long *)0x0;
              func_0x00010c157500();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar5;
              func_0x00010bf52a60();
              if (uVar4 != 0) {
                lVar23 = *plStack_1a0;
                do {
                  uVar25 = 0;
                  do {
                    if (*plStack_1a0 != lVar23) {
                      _objc_enumerationMutation(uVar5);
                    }
                    uVar7 = *(ulong *)(lStack_1a8 + uVar25 * 8);
                    func_0x00010c071ae0();
                    if ((uVar7 & 1) == 0) {
                      uVar4 = uVar27;
                      func_0x00010c07ea80();
                      if ((int)uVar4 != 0) goto LAB_1059c9c30;
                      uVar4 = uVar27;
                      func_0x00010c0807c0();
                      if ((int)uVar4 != 0) {
                        _objc_retain(param_4);
                        _objc_release(uVar5);
                        _objc_release(puVar9);
                        goto LAB_1059c9d5c;
                      }
                      func_0x00010c088520();
                      _objc_retainAutoreleasedReturnValue();
                      if (puVar8 == (undefined8 *)0x0) goto LAB_1059c9cf8;
                      func_0x00010c088520();
                      _objc_retainAutoreleasedReturnValue();
                      goto LAB_1059c9c5c;
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar4 != uVar25);
                  uVar4 = uVar5;
                  func_0x00010bf52a60();
                } while (uVar4 != 0);
              }
              goto LAB_1059c9ca4;
            }
          }
          else {
            uVar4 = uVar17;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            uVar25 = uVar4;
            func_0x00010bf529e0();
            _objc_release(uVar4);
            if (uVar25 == 0) goto LAB_1059c9aa8;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            lStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            plStack_1a0 = (long *)0x0;
            func_0x00010c0e9d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar5;
            func_0x00010bf52a60();
            if (uVar4 != 0) {
              lVar23 = *plStack_1a0;
              do {
                uVar25 = 0;
                do {
                  if (*plStack_1a0 != lVar23) {
                    _objc_enumerationMutation(uVar5);
                  }
                  uVar7 = *(ulong *)(lStack_1a8 + uVar25 * 8);
                  func_0x00010c071ae0();
                  if ((uVar7 & 1) == 0) goto LAB_1059c9c30;
                  uVar25 = uVar25 + 1;
                } while (uVar4 != uVar25);
                uVar4 = uVar5;
                func_0x00010bf52a60();
              } while (uVar4 != 0);
            }
LAB_1059c9ca4:
            _objc_release(uVar5);
          }
          _objc_release(puVar9);
        }
        _objc_retain(param_4);
LAB_1059c9d5c:
        _objc_release(puVar26);
        _objc_release(uVar17);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_release(param_2);
        _objc_release(uVar27);
        _objc_release(param_4);
        lVar24 = lVar24 + 1;
      } while (lVar24 != lStack_218);
      puVar9 = &uStack_1f0;
      iVar16 = (int)auStack_170;
      uVar17 = 0x10;
      lStack_218 = param_1;
      func_0x00010bf52a60();
      iVar20 = (int)param_7;
      iVar21 = (int)param_8;
      iVar1 = (int)uVar18;
    } while (lStack_218 != 0);
  }
  iVar19 = iVar1;
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  param_3 = param_1;
SUB_1059c9e3c:
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  _objc_retain(param_3);
  puVar26 = puVar2;
  func_0x00010c08a5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c154d00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c089080();
  puVar12 = puVar2;
  func_0x00010bf8be60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010bf433a0();
  puVar14 = puVar9;
  func_0x00010bf433a0();
  puVar15 = puVar26;
  if (((puVar10 == (undefined8 *)0x0) || (puVar13 == (undefined8 *)0x1)) ||
     ((uVar17 == 3 && puVar14 == (undefined8 *)0x0) && puVar11 != (undefined8 *)0x3)) {
    if (((uVar17 < 2) && (puVar11 == (undefined8 *)0x3)) ||
       ((puVar11 == (undefined8 *)0x2 && uVar17 < 2 ||
        ((uVar17 == 0 && puVar11 == (undefined8 *)0x1 ||
         (uVar17 == 2 && puVar11 == (undefined8 *)0x0 || uVar17 < 2 && puVar26 == (undefined8 *)0x0)
         ))))) {
      if (puVar26 == (undefined8 *)0x0) {
        _objc_retain(puVar9);
        puVar15 = puVar9;
      }
      else {
        _objc_retain(puVar26);
        _objc_release(puVar8);
        func_0x00010c08aee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar26);
        puVar8 = puVar26;
      }
    }
    _objc_retain(puVar9);
    _objc_release(puVar10);
    puVar10 = puVar9;
  }
  if (((puVar15 != (undefined8 *)0x0) && (1 < uVar17)) &&
     ((puVar26 = puVar9, func_0x00010bf433a0(), puVar26 == (undefined8 *)0x1 ||
      (puVar26 = puVar9, func_0x00010bf433a0(), puVar26 == (undefined8 *)0x0)))) {
    if (puVar12 == (undefined8 *)0x0) {
LAB_1059ca064:
      _objc_retain(puVar9);
      puVar12 = puVar9;
    }
    else {
      puVar26 = puVar12;
      func_0x00010bf433a0();
      if (puVar26 == (undefined8 *)0xffffffffffffffff) {
        _objc_retain(puVar9);
        _objc_release(puVar12);
        puVar12 = puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_1059ca064;
      }
      puVar26 = puVar12;
      func_0x00010bf8bde0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar26;
    }
  }
  if (iVar19 == 0) {
    puVar26 = (undefined8 *)0x0;
  }
  else {
    puVar26 = puVar2;
    func_0x00010c08a0a0();
    _objc_retainAutoreleasedReturnValue();
    if ((iVar16 != 0) &&
       ((puVar26 == (undefined8 *)0x0 ||
        (puVar11 = puVar9, func_0x00010bf433a0(), puVar11 == (undefined8 *)0x1)))) {
      _objc_retain(puVar9);
      _objc_release(puVar26);
      puVar26 = puVar9;
    }
  }
  puVar11 = puVar2;
  func_0x00010c0887e0();
  _objc_retainAutoreleasedReturnValue();
  if (((iVar20 != 0) && (iVar21 != 0)) &&
     ((puVar11 == (undefined8 *)0x0 ||
      (puVar13 = puVar9, func_0x00010bf433a0(), puVar13 == (undefined8 *)0x1)))) {
    _objc_retain(puVar9);
    _objc_release(puVar11);
    puVar11 = puVar9;
  }
  param_4 = (undefined8 *)PTR_PTR_1126c0af8;
  _objc_alloc(PTR_PTR_1126c0af8);
  func_0x00010c050be0();
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release(puVar26);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
LAB_1059c9c30:
  func_0x00010c08a140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined8 *)0x0) {
LAB_1059c9cf8:
    _objc_retain(puVar9);
  }
  else {
    func_0x00010c08a140();
    _objc_retainAutoreleasedReturnValue();
LAB_1059c9c5c:
    puVar9 = param_5;
    func_0x00010c08aee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  _objc_release(puVar8);
  iVar16 = 0;
  uVar17 = 3;
  iVar20 = 0;
  puVar2 = param_4;
  iVar21 = 0;
  goto SUB_1059c9e3c;
}



/* Entry: 1059ca1b4; end: 1059ca227;  */

bool FUN_1059ca1b4(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    bVar1 = false;
  }
  else if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf433a0(param_1);
    bVar1 = lVar2 == 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1059ca228; end: 1059ca58f;  */

ulong FUN_1059ca228(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08a0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08a0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_1059ca1b4(uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c08a160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c08a160(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_1059ca1b4(uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_2;
      func_0x00010c088500();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c088500(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      FUN_1059ca1b4(uVar1,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        uVar1 = param_2;
        func_0x00010c088540();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c088540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        FUN_1059ca1b4(uVar1,uVar2);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) == 0) {
          uVar1 = param_2;
          func_0x00010c08aaa0();
          uVar2 = param_1;
          func_0x00010c08aaa0();
          if (uVar1 == uVar2) {
            uVar1 = param_2;
            func_0x00010c08a080();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_1;
            func_0x00010c08a080(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar1;
            FUN_1059ca1b4(uVar1,uVar2);
            _objc_release(uVar2);
            _objc_release(uVar1);
            if ((uVar3 & 1) == 0) {
              uVar1 = param_2;
              func_0x00010c08a140();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_1;
              func_0x00010c08a140(param_1);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar1;
              FUN_1059ca1b4(uVar1,uVar2);
              _objc_release(uVar2);
              _objc_release(uVar1);
              if ((uVar3 & 1) == 0) {
                uVar1 = param_2;
                func_0x00010c0884e0();
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_1;
                func_0x00010c0884e0(param_1);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar1;
                FUN_1059ca1b4(uVar1,uVar2);
                _objc_release(uVar2);
                _objc_release(uVar1);
                if ((uVar3 & 1) == 0) {
                  uVar1 = param_2;
                  func_0x00010c088520();
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = param_1;
                  func_0x00010c088520(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar1;
                  FUN_1059ca1b4(uVar1,uVar2);
                  _objc_release(uVar2);
                  _objc_release(uVar1);
                  if ((uVar3 & 1) == 0) {
                    uVar1 = param_2;
                    func_0x00010c0887e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = param_1;
                    func_0x00010c0887e0(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar1;
                    FUN_1059ca1b4(uVar1,uVar2);
                    _objc_release(uVar2);
                    _objc_release(uVar1);
                    if ((uVar3 & 1) == 0) {
                      uVar1 = param_2;
                      func_0x00010c08a1c0(param_2);
                      _objc_retainAutoreleasedReturnValue();
                      uVar2 = param_1;
                      func_0x00010c08a1c0(param_1);
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = uVar1;
                      FUN_1059ca1b4(uVar1,uVar2);
                      _objc_release(uVar2);
                      _objc_release(uVar1);
                      goto LAB_1059ca51c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_1059ca51c:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1059ca590; end: 1059ca8cf; -[SCLastInteractionDataServiceImpl initWithPreferences:performerProvider:circumstanceEngine:] */

undefined8 *
FUN_1059ca590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1126eb348;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 2) = 0;
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1059ca8d0;
    puStack_a0 = &UNK_11087b768;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1059ca914;
    puStack_c8 = &UNK_11087b768;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x1059ca958;
    puStack_f0 = &UNK_110854530;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_130 = puVar4;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x1059ca99c;
    puStack_118 = &UNK_110854530;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_138,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x000108f3de5c();
    *(char *)(puVar1 + 8) = (char)uVar2;
    uVar2 = param_5;
    func_0x000108f3de84();
    *(char *)((long)puVar1 + 0x41) = (char)uVar2;
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059ca8d0; end: 1059caa1f;  */

void FUN_1059ca8d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059caa20; end: 1059caad3; -[SCLastInteractionDataServiceImpl _lastTurnInteractionStatesSubject] */

void FUN_1059caa20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    func_0x00010c0d9840(puVar1,param_2,lVar4);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059caad4; end: 1059cab33; -[SCLastInteractionDataServiceImpl _conversationLastInteractionStatesObservableWithConversationType:] */

void FUN_1059caad4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x19;
  
  if (param_3 == 0) {
    lVar2 = 0x18;
  }
  else {
    if (param_3 != 1) goto LAB_1059cab24;
    lVar2 = 0x20;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  unaff_x19 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
LAB_1059cab24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1059cab34; end: 1059cabab; -[SCLastInteractionDataServiceImpl saveWithLastInteractionState:conversationType:] */

void FUN_1059cab34(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b2970;
    _objc_opt_class(PTR_PTR_1126b2970);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      _os_unfair_lock_lock(param_1 + 0x10);
      func_0x00010be9a4c0(param_1);
      _os_unfair_lock_unlock(param_1 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059cabac; end: 1059cac17; -[SCLastInteractionDataServiceImpl fetchLastInteractionStateWithRecipientId:conversationType:] */

void FUN_1059cabac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010be12080(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059cac18; end: 1059cac57; -[SCLastInteractionDataServiceImpl lastInteractionStatesObservableWithConversationType:] */

void FUN_1059cac18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0x28;
  }
  else {
    if (param_3 != 1) goto LAB_1059cac50;
    lVar1 = 0x30;
  }
  param_2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
LAB_1059cac50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059cac58; end: 1059cad03; -[SCLastInteractionDataServiceImpl fetchLastInteractionStatesWithConversationType:] */

void FUN_1059cac58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  if ((param_3 == 0) || (param_3 == 1)) {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x10);
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x10);
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059cad04; end: 1059cae03; -[SCLastInteractionDataServiceImpl updateLastTurnInteractionStateWithUpdatedMessages:userUUID:targetId:conversationType:] */

void FUN_1059cad04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfa7d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be120a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_1059c930c(param_3,param_4,param_5,lVar2,lVar1,*(undefined8 *)(param_1 + 0x48),
                *(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010be99440(param_1);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059cae04; end: 1059cae4b; -[SCLastInteractionDataServiceImpl lastTurnInteractionStatesObservable] */

void FUN_1059cae04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059cae4c; end: 1059caedb; -[SCLastInteractionDataServiceImpl fetchLastTurnInteractionStates] */

void FUN_1059cae4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059caedc; end: 1059cafeb; -[SCLastInteractionDataServiceImpl _conversationLastInteractionStatesSubjectWithConversationType:] */

void FUN_1059caedc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  if (param_3 == 1) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) goto LAB_1059cafd8;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    func_0x00010c0d9840(puVar1,param_2,lVar4);
    _objc_release(lVar4);
  }
LAB_1059cafd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059cafec; end: 1059cb36f; -[SCLastInteractionDataServiceImpl _saveWithLastInteractionState:conversationType:] */

void FUN_1059cafec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  if (param_4 == 1) {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_retain(puVar2);
    _objc_opt_class(puVar1);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    _objc_release(puVar2);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2 == (undefined *)0x0)) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puVar2;
      func_0x00010c0d3c80();
    }
    uVar4 = param_3;
    func_0x00010c269f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar5 = puVar3;
    FUN_1059ca228(puVar3,param_3);
    if ((int)puVar5 != 0) {
      uVar4 = param_3;
      func_0x00010c269f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010c00c580();
      func_0x00010bf72020(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar5);
LAB_1059cb324:
      _objc_release(puVar6);
      _objc_release(uVar4);
    }
  }
  else {
    if (param_4 != 0) goto LAB_1059cb34c;
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_retain(puVar2);
    _objc_opt_class(puVar1);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    _objc_release(puVar2);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2 == (undefined *)0x0)) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puVar2;
      func_0x00010c0d3c80();
    }
    uVar4 = param_3;
    func_0x00010c269f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar5 = puVar3;
    FUN_1059ca228(puVar3,param_3);
    if ((int)puVar5 != 0) {
      uVar4 = param_3;
      func_0x00010c269f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010c00c580();
      func_0x00010c0d9840(uVar4);
      goto LAB_1059cb324;
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
LAB_1059cb34c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059cb370; end: 1059cb467; -[SCLastInteractionDataServiceImpl _fetchLastInteractionStateWithRecipientId:conversationType:] */

void FUN_1059cb370(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if ((param_4 == 0) || (param_4 == 1)) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
LAB_1059cb438:
        uVar4 = 0;
      }
      else {
        puVar3 = PTR_PTR_1126b2970;
        _objc_opt_class(PTR_PTR_1126b2970);
        uVar4 = uVar1;
        _objc_opt_isKindOfClass(uVar1,puVar3);
        if ((uVar4 & 1) == 0) goto LAB_1059cb438;
        _objc_retain(uVar1);
        uVar4 = uVar1;
      }
      _objc_release(uVar1);
      _objc_release(uVar2);
      goto LAB_1059cb44c;
    }
  }
  uVar4 = 0;
LAB_1059cb44c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059cb468; end: 1059cb59f; -[SCLastInteractionDataServiceImpl _fetchLastTurnInteractionStateWithRecipientId:] */

void FUN_1059cb468(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      puVar2 = PTR_PTR_1126c0af8;
      _objc_opt_class(PTR_PTR_1126c0af8);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      if ((uVar4 & 1) != 0) {
        _objc_retain(uVar3);
        uVar4 = uVar3;
        goto LAB_1059cb550;
      }
    }
  }
  uVar4 = 0;
LAB_1059cb550:
  _objc_release(uVar3);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059cb5a0; end: 1059cb653; -[SCLastInteractionDataServiceImpl _saveLastTurnInteractionStateWithTargetId:oldState:newState:] */

void FUN_1059cb5a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = PTR_PTR_1126c0af8;
    _objc_opt_class(PTR_PTR_1126c0af8);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar1);
    if ((uVar2 & 1) != 0) {
      _os_unfair_lock_lock(param_1 + 0x10);
      func_0x00010be98a40(param_1);
      _os_unfair_lock_unlock(param_1 + 0x10);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059cb654; end: 1059cba17; -[SCLastInteractionDataServiceImpl _saveAndEmitLastTurnInteractionStateWithTargetId:oldState:newState:] */

void FUN_1059cb654(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar7 = *(undefined **)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(puVar1);
  _objc_opt_class(puVar7);
  puVar2 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar7);
  _objc_release(puVar1);
  if ((((ulong)puVar2 & 1) == 0) || (puVar1 == (undefined *)0x0)) {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = puVar1;
    func_0x00010c0d3c80(puVar1);
  }
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_5;
  func_0x00010c08a5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c08a5e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  FUN_1059ca1b4(uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((uVar5 & 1) == 0) {
    uVar3 = param_5;
    func_0x00010c154d00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c154d00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_1059ca1b4(uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) goto LAB_1059cb8dc;
    uVar3 = param_5;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0891c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_1059ca1b4(uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) goto LAB_1059cb8dc;
    uVar3 = param_5;
    func_0x00010c089080();
    uVar4 = param_4;
    func_0x00010c089080();
    if (uVar3 != uVar4) goto LAB_1059cb8dc;
    uVar3 = param_5;
    func_0x00010bf8be60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf8be60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_1059ca1b4(uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) goto LAB_1059cb8dc;
    uVar3 = param_5;
    func_0x00010c08a0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c08a0a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_1059ca1b4(uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) goto LAB_1059cb8dc;
    uVar3 = param_5;
    func_0x00010c0887e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0887e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_1059ca1b4(uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_4);
    if ((int)uVar5 == 0) goto LAB_1059cb978;
  }
  else {
LAB_1059cb8dc:
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_4);
  }
  func_0x00010c1d0560(puVar7);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c00c580();
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar6);
LAB_1059cb978:
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059cba18; end: 1059cba83; -[SCLastInteractionDataServiceImpl .cxx_destruct] */

void FUN_1059cba18(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059cba84; end: 1059cbb67; -[SCLastInteractionDataServiceProvider provide] */

void FUN_1059cba84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0b00;
  _objc_alloc(PTR_PTR_1126c0b00);
  func_0x00010c021720();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059cbb68; end: 1059cbba7;  */

void FUN_1059cbb68(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be46f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059cbba8; end: 1059cbc9f; -[SCLastInteractionDataServiceProvider _lastInteractionDataService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059cbba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c0b08;
  _objc_alloc(PTR_PTR_1126c0b08);
  lVar2 = param_1 + _DAT_11272d00c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272d010;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d014;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038220(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059cbca0; end: 1059cbcef; -[SCLastInteractionDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059cbca0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d014);
  _objc_destroyWeak(param_1 + _DAT_11272d010);
  _objc_destroyWeak(param_1 + _DAT_11272d00c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d018);
  return;
}



/* Entry: 1059cbcf0; end: 1059cbf1f; -[SCSendToListsDataServiceProvider provide] */

/* WARNING: Removing unreachable block (ram,0x0001059cbebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059cbcf0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1059cbf20;
  puStack_78 = &UNK_1108cbe30;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d01c;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c09a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0db900(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c0b10;
  _objc_alloc(PTR_PTR_1126c0b10);
  func_0x00010c0264e0();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059cbf20; end: 1059cbfa7;  */

void FUN_1059cbf20(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059cbfa8; end: 1059cc07f; -[SCSendToListsDataServiceProvider _createListsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059cbfa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c0b18;
  _objc_alloc(PTR_PTR_1126c0b18);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272d020;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d024;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045340(puVar1,param_2,puVar2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059cc080; end: 1059cc3bf; -[SCSendToListsDataServiceProvider _createListsDataCoordinator:recipientListsDataCoordinator:] */

/* WARNING: Removing unreachable block (ram,0x0001059cc38c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059cc080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  lVar11 = (long)_DAT_11272d028;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar6 = lVar11;
  if (lVar5 == 0) {
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = lVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85f80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = lVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c0b20;
  _objc_alloc(PTR_PTR_1126c0b20);
  lVar2 = param_1 + _DAT_11272d02c;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272d030;
  _objc_loadWeakRetained(lVar11);
  lVar6 = lVar11;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272d034;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272d038;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010c2627a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d03c;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e3c0(puVar1,param_2,lVar5,param_4,lVar6,lVar7,param_3,uStack_78,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(uStack_78);
  puVar10 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar10);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059cc3c0; end: 1059cc44b; -[SCSendToListsDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059cc3c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d024);
  _objc_destroyWeak(param_1 + _DAT_11272d038);
  _objc_destroyWeak(param_1 + _DAT_11272d020);
  _objc_destroyWeak(param_1 + _DAT_11272d03c);
  _objc_destroyWeak(param_1 + _DAT_11272d028);
  _objc_destroyWeak(param_1 + _DAT_11272d030);
  _objc_destroyWeak(param_1 + _DAT_11272d034);
  _objc_destroyWeak(param_1 + _DAT_11272d01c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d02c);
  return;
}



/* Entry: 1059cc44c; end: 1059cc4ab; -[SCRecipientListsDataCoordinator hasSyncedWithServer] */

bool FUN_1059cc44c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
  return lVar2 != 0;
}



/* Entry: 1059cc4ac; end: 1059cc4b3; -[SCRecipientListsDataCoordinator hasSyncedWithServerObservable] */

void FUN_1059cc4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1059cc4b4; end: 1059cc52f; -[SCRecipientListsDataCoordinator _updateLastServerSyncTimestamp] */

void FUN_1059cc4b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1059cc530; end: 1059cc57f; -[SCRecipientListsDataCoordinator lastServerSyncTimestamp] */

void FUN_1059cc530(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059cc580; end: 1059cc58b; +[SCRecipientListsDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1059cc580(void)

{
  return &PTR____CFConstantStringClassReference_110e14958;
}


