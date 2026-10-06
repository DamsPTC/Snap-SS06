/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10592c8cc; end: 10592cb23; -[SCFideliusDeviceGraphManager onPurge:] */

/* WARNING: Possible PIC construction at 0x00010592c910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010592c914) */
/* WARNING: Removing unreachable block (ram,0x00010592c978) */
/* WARNING: Removing unreachable block (ram,0x00010592c984) */
/* WARNING: Removing unreachable block (ram,0x00010592c988) */
/* WARNING: Removing unreachable block (ram,0x00010592c998) */
/* WARNING: Removing unreachable block (ram,0x00010592c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010592ca2c) */
/* WARNING: Removing unreachable block (ram,0x00010592ca6c) */
/* WARNING: Removing unreachable block (ram,0x00010592c9f4) */
/* WARNING: Removing unreachable block (ram,0x00010592ca00) */
/* WARNING: Removing unreachable block (ram,0x00010592ca1c) */
/* WARNING: Removing unreachable block (ram,0x00010592ca74) */
/* WARNING: Removing unreachable block (ram,0x00010592cb20) */
/* WARNING: Removing unreachable block (ram,0x00010592cb00) */

void FUN_10592c8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be99110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveFideliusDeviceGraph_112583de0);
  return;
}



/* Entry: 10592cb24; end: 10592cb27; -[SCFideliusDeviceGraphManager onOrderUpdated] */

void FUN_10592cb24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveFideliusDeviceGraph_112583de0);
  return;
}



/* Entry: 10592cb28; end: 10592cc0f; -[SCFideliusDeviceGraphManager hashedBetas] */

void FUN_10592cb28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar2 = &UNK_10f30e509;
  func_0x0001000ba800(&UNK_10f30e509);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10592cc10;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain();
  puStack_38 = puVar3;
  func_0x00010c0f8240(uVar4,param_2,&puStack_60);
  puVar1 = puStack_38;
  _objc_retain(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10592cc10; end: 10592cd87;  */

void FUN_10592cc10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar1 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar7 = *(long *)(lStack_118 + lVar9 * 8);
        lVar4 = lVar7;
        func_0x00010bfdebe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bfdebe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar8,param_2,lVar7);
          _objc_release(lVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &UNK_10f30e532;
  func_0x0001000ba800(&UNK_10f30e532);
  lVar2 = lVar3;
  func_0x00010bfdec00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar3 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c08b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010bde2060(lVar3,param_2,lVar2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10592cd88; end: 10592ce63; -[SCFideliusDeviceGraphManager hashedPublicKeysIncludingKVStore] */

void FUN_10592cd88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_10f30e532;
  func_0x0001000ba800(&UNK_10f30e532);
  lVar2 = param_1;
  func_0x00010bfdec00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08b0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bde2060(param_1,param_2,lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10592ce64; end: 10592cf5b; -[SCFideliusDeviceGraphManager _combineHashedKeysArray:withAnotherArray:] */

void FUN_10592ce64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30e570;
  func_0x0001000ba800(&UNK_10f30e570);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280520();
  puVar4 = puVar3;
  func_0x00010bf00560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10592cf5c; end: 10592cffb; -[SCFideliusDeviceGraphManager resetAllUsers] */

void FUN_10592cf5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f30e5a5;
  func_0x0001000ba800(&UNK_10f30e5a5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10592cffc;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 10592cffc; end: 10592d2e3;  */

void FUN_10592cffc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bdc9d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar4;
  _objc_release(uVar6);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_1a0;
    do {
      unaff_x19 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bf3d9e0(*(undefined8 *)(lStack_1a8 + unaff_x19 * 8));
        unaff_x19 = unaff_x19 + 1;
      } while (lVar1 != unaff_x19);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  lStack_1f8 = lVar2;
  _objc_release(lVar2);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar2 != 0) {
    lVar1 = *plStack_1e0;
    do {
      unaff_x19 = 0;
      do {
        if (*plStack_1e0 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar4 = PTR_PTR_1126c0460;
        uVar8 = *(undefined8 *)(lStack_1e8 + unaff_x19 * 8);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6bae0(puVar4,param_2,uVar8,10,&PTR____CFConstantStringClassReference_110e0eb98
                            ,uVar6);
        _objc_release(uVar6);
        unaff_x19 = unaff_x19 + 1;
      } while (lVar2 != unaff_x19);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  uVar5 = 0;
  func_0x00010c18cfe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdfa0a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be4dce0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12ac60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb49c0();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4ce0();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb51c0();
  _objc_release(uVar8);
  _objc_release(lVar3);
  lVar2 = lStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_10592d2e4;
  uStack_230 = uVar6;
  lStack_228 = lVar3;
  uStack_220 = uVar8;
  lStack_218 = unaff_x19;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(lVar2 + 8);
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_10592d374;
  puStack_248 = &UNK_110841f80;
  lStack_240 = lVar2;
  uStack_238 = uVar5;
  _objc_retain(uVar5);
  func_0x00010c0f7fc0(uVar6,param_2,&puStack_260);
  _objc_release(uStack_238);
  _objc_release(uVar5);
  return;
}



/* Entry: 10592d2e4; end: 10592d373; -[SCFideliusDeviceGraphManager putIdentityToBackupAsync:] */

void FUN_10592d2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10592d374;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10592d374; end: 10592d37f;  */

void FUN_10592d374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),PTR_s_putUserIdentity__112624ca0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10592d380; end: 10592d4ef; -[SCFideliusDeviceGraphManager _allDbNames] */

undefined8 FUN_10592d380(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = *(long *)(lStack_118 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010bf64ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010bf64ce0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(0,param_2,lVar5);
          _objc_release(lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return 0;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10592d4f0;
  uVar4 = *(undefined8 *)(lVar2 + 8);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10592d548;
  puStack_140 = &UNK_110842e18;
  lStack_138 = lVar2;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_158);
  return uVar4;
}



/* Entry: 10592d4f0; end: 10592d547; -[SCFideliusDeviceGraphManager forceLoad] */

void FUN_10592d4f0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10592d548;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10592d548; end: 10592d59b;  */

void FUN_10592d548(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18cfe0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be4dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__loadLocal_1125710d8)
  ;
  return;
}



/* Entry: 10592d59c; end: 10592d5f3; -[SCFideliusDeviceGraphManager forceSave] */

void FUN_10592d59c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10592d5f4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10592d5f4; end: 10592d5ff;  */

void FUN_10592d5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveFideliusDeviceGraph__112583de8,0);
  return;
}



/* Entry: 10592d600; end: 10592d78f; -[SCFideliusDeviceGraphManager _deleteFideliusDeviceGraph] */

void FUN_10592d600(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd048;
  func_0x00010bfac380(PTR_PTR_1126bd048);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c12c5e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar4);
  }
  puVar1 = PTR_PTR_1126aef90;
  puVar2 = PTR_PTR_1126c0438;
  func_0x00010bf70540(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar4);
  }
  puVar1 = PTR_PTR_1126aef90;
  puVar2 = PTR_PTR_1126c0438;
  func_0x00010c27a3c0(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b23c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10592d790; end: 10592d797; -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraph] */

void FUN_10592d790(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveFideliusDeviceGraph__112583de8,1);
  return;
}



/* Entry: 10592d798; end: 10592d857; -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraph:] */

uint FUN_10592d798(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bf71280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bee78c0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110e0ebf8);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b23c0();
      _objc_release(uVar3);
      uVar4 = 0;
      goto LAB_10592d844;
    }
  }
  uVar1 = param_1;
  func_0x00010be99140(param_1);
  uVar2 = param_1;
  func_0x00010be99160(param_1);
  func_0x00010be99180(param_1);
  uVar4 = (uint)uVar1 | (uint)uVar2;
LAB_10592d844:
  return uVar4 & 1;
}



/* Entry: 10592d858; end: 10592d92b; -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraphToArchive] */

undefined * FUN_10592d858(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf71280(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd048;
  func_0x00010bfac380(PTR_PTR_1126bd048);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,lVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar5);
  }
  return puVar4;
}



/* Entry: 10592d92c; end: 10592da9f; -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraphToKeychain] */

undefined8 FUN_10592d92c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b7392a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aef90;
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
  }
  else {
    puVar3 = PTR_PTR_1126c0438;
    func_0x00010bf70540(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e560(puVar4,param_2,lVar2,puVar3);
    _objc_release(puVar3);
    if ((int)puVar4 == 0) {
      uVar5 = 1;
      goto LAB_10592da80;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126aef90;
    puVar3 = PTR_PTR_1126c0438;
    func_0x00010bf70540(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12bcc0(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
  }
  _objc_release(uVar5);
  uVar5 = 0;
LAB_10592da80:
  _objc_release(lVar2);
  return uVar5;
}



/* Entry: 10592daa0; end: 10592dc37; -[SCFideliusDeviceGraphManager _saveFideliusDeviceGraphToKeychainNewEntry] */

undefined8 FUN_10592daa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010b7392a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126aef90;
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
  }
  else {
    puVar3 = PTR_PTR_1126c0438;
    func_0x00010c27a3c0(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16eaa0(puVar4,param_2,lVar2,puVar3);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar4 == 0) {
      func_0x00010c0a9260(uVar5,param_2,&PTR____CFConstantStringClassReference_110e0e998,
                          &PTR____CFConstantStringClassReference_110e0ea18);
      uVar6 = 1;
      goto LAB_10592dc0c;
    }
    func_0x00010c0b23e0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e0e8f8,
                        &PTR____CFConstantStringClassReference_110e0ea18,(long)(int)puVar4);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126aef90;
    puVar3 = PTR_PTR_1126c0438;
    func_0x00010c27a3c0(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12bcc0(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
  }
  uVar6 = 0;
LAB_10592dc0c:
  _objc_release(uVar5);
  _objc_release(lVar2);
  return uVar6;
}



/* Entry: 10592dc38; end: 10592dd6f; -[SCFideliusDeviceGraphManager _loadFideliusDeviceGraphFromKeychain] */

void FUN_10592dc38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126aef90;
  puVar1 = PTR_PTR_1126c0438;
  func_0x00010bf70540(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aef90;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0438;
    func_0x00010c27a3c0(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63b00(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x000100408474(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9260();
      _objc_release(uVar3);
      _objc_retain(puVar4);
    }
    _objc_release(puVar1);
  }
  else {
    puVar4 = puVar2;
    func_0x000100408474(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10592dd70; end: 10592ddc7; -[SCFideliusDeviceGraphManager deleteTempIdentities] */

void FUN_10592dd70(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10592ddc8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10592ddc8; end: 10592ddd3;  */

void FUN_10592ddc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteTempIdentitiesAndSave__11255c3f8,1);
  return;
}



/* Entry: 10592ddd4; end: 10592e06b; -[SCFideliusDeviceGraphManager _deleteTempIdentitiesAndSave:] */

undefined * FUN_10592ddd4(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar17);
  puVar3 = puVar17;
  func_0x00010bf52a60();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar17);
  }
  else {
    uStack_134 = (uint)param_3;
    unaff_x24 = 0;
    param_3 = *plStack_120;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_120 != param_3) {
          _objc_enumerationMutation(puVar17);
        }
        unaff_x26 = *(undefined8 *)(lStack_128 + (long)puVar16 * 8);
        unaff_x27 = param_1;
        func_0x00010bf71280();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x27;
        func_0x00010bfcdca0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x28;
        func_0x00010c0e0060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        puVar2 = unaff_x25;
        func_0x00010c26b200();
        if ((int)puVar2 != 0) {
          puVar2 = param_1;
          func_0x00010bf71280(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010bfcdca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0();
          _objc_release(puVar4);
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126c0460;
          unaff_x27 = unaff_x25;
          func_0x00010bf64ce0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = *(undefined **)(param_1 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6bae0(puVar2);
          _objc_release(unaff_x28);
          _objc_release(unaff_x27);
          unaff_x26 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a4e40();
          _objc_release(unaff_x26);
          unaff_x24 = 1;
        }
        _objc_release(unaff_x25);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar3 = puVar17;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
    _objc_release(puVar17);
    puVar2 = (undefined *)0x0;
    if ((uStack_134 & (uint)unaff_x24) == 1) {
      func_0x00010be99100(param_1);
    }
  }
  puVar3 = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10592e06c;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = &UNK_10f30e6c4;
  puStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  puStack_178 = puVar16;
  puStack_170 = puVar2;
  puStack_168 = puVar17;
  lStack_160 = param_3;
  puStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001000ba800();
  puVar5 = (undefined8 *)PTR_PTR_1126c0388;
  func_0x00010c291a60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar16;
  puVar12 = puVar6;
  func_0x00010bfacbe0();
  _objc_release(puVar6);
  _objc_release(puVar16);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b24e8;
    uStack_1b8 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d8 = 0xc2000000;
    pcStack_2d0 = FUN_10592e480;
    puStack_2c8 = &UNK_1108c08e0;
    _objc_retain(puVar2);
    puStack_2c0 = puVar2;
    func_0x00010c27b080(puVar16);
    _objc_release(puVar17);
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    _objc_retain(puVar2);
    puVar12 = &uStack_320;
    puVar16 = puVar2;
    func_0x00010bf52a60();
    if (puVar16 != (undefined *)0x0) {
      lVar13 = *plStack_310;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_310 != lVar13) {
            _objc_enumerationMutation(puVar2);
          }
          uVar7 = *(undefined8 *)(lStack_318 + (long)puVar17 * 8);
          func_0x00010c0899c0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010bf71280();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar8;
          func_0x00010bfcdca0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar15;
          func_0x00010bf00580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          _objc_release(puVar8);
          puVar8 = puVar9;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          if (puVar8 == (undefined *)0x0) {
            _objc_release(puVar9);
LAB_10592e350:
            puVar8 = PTR_PTR_1126c0460;
            uVar11 = *(undefined8 *)(puVar3 + 0x20);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6bae0(puVar8);
            _objc_release(uVar11);
          }
          else {
            uVar14 = 0;
            do {
              puVar15 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(puVar9);
                }
                uVar10 = *(undefined8 *)((long)puVar15 * 8);
                func_0x00010bf64ce0();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar10;
                func_0x00010c0720c0();
                _objc_release(uVar10);
                uVar14 = (uint)uVar11 | uVar14;
                puVar15 = puVar15 + 1;
              } while (puVar8 != puVar15);
              puVar8 = puVar9;
              func_0x00010bf52a60();
            } while (puVar8 != (undefined *)0x0);
            _objc_release(puVar9);
            if ((uVar14 & 1) == 0) goto LAB_10592e350;
          }
          _objc_release(uVar7);
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar16);
        puVar12 = &uStack_320;
        puVar16 = puVar2;
        func_0x00010bf52a60();
      } while (puVar16 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puStack_2c0);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  puVar16 = puVar4;
  func_0x0001000e2a84();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar4);
    __Unwind_Resume();
    _objc_terminate();
    _objc_retain(param_2);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010bf1f3c0();
    _objc_release(puVar12);
    if ((int)puVar5 != 0) {
      func_0x00010befa120(*(undefined8 *)(puVar16 + 0x20));
    }
    _objc_release(param_2);
    return (undefined *)0x1;
  }
  return puVar16;
}



/* Entry: 10592e06c; end: 10592e47f; -[SCFideliusDeviceGraphManager _deleteOrphanedDatabasesV2WithVersion:] */

undefined * FUN_10592e06c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = &UNK_10f30e6c4;
  func_0x0001000ba800();
  puVar3 = (undefined8 *)PTR_PTR_1126c0388;
  func_0x00010c291a60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  puVar13 = puVar5;
  func_0x00010bfacbe0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b24e8;
    uStack_78 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_10592e480;
    puStack_188 = &UNK_1108c08e0;
    _objc_retain(puVar6);
    puStack_180 = puVar6;
    func_0x00010c27b080(puVar4);
    _objc_release(puVar17);
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    _objc_retain(puVar6);
    puVar13 = &uStack_1e0;
    puVar4 = puVar6;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar14 = *plStack_1d0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_1d0 != lVar14) {
            _objc_enumerationMutation(puVar6);
          }
          uVar7 = *(undefined8 *)(lStack_1d8 + (long)puVar17 * 8);
          func_0x00010c0899c0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_1;
          func_0x00010bf71280();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bfcdca0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf00580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_release(lVar8);
          lVar9 = lVar10;
          func_0x00010bf52a60();
          lVar8 = lRam0000000000000000;
          if (lVar9 == 0) {
            _objc_release(lVar10);
LAB_10592e350:
            puVar1 = PTR_PTR_1126c0460;
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c269d40(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6bae0(puVar1);
            _objc_release(uVar12);
          }
          else {
            uVar15 = 0;
            do {
              lVar16 = 0;
              do {
                if (lRam0000000000000000 != lVar8) {
                  _objc_enumerationMutation(lVar10);
                }
                uVar11 = *(undefined8 *)(lVar16 * 8);
                func_0x00010bf64ce0();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x00010c0720c0();
                _objc_release(uVar11);
                uVar15 = (uint)uVar12 | uVar15;
                lVar16 = lVar16 + 1;
              } while (lVar9 != lVar16);
              lVar9 = lVar10;
              func_0x00010bf52a60();
            } while (lVar9 != 0);
            _objc_release(lVar10);
            if ((uVar15 & 1) == 0) goto LAB_10592e350;
          }
          _objc_release(uVar7);
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar4);
        puVar13 = &uStack_1e0;
        puVar4 = puVar6;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    _objc_release(puStack_180);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x0001000e2a84();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar2);
    __Unwind_Resume();
    _objc_terminate();
    _objc_retain(param_2);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf1f3c0();
    _objc_release(puVar13);
    if ((int)puVar3 != 0) {
      func_0x00010befa120(*(undefined8 *)(puVar4 + 0x20));
    }
    _objc_release(param_2);
    return (undefined *)0x1;
  }
  return puVar4;
}



/* Entry: 10592e480; end: 10592e4ff;  */

undefined8 FUN_10592e480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10592e500; end: 10592e5a3; -[SCFideliusDeviceGraphManager _initFields] */

long FUN_10592e500(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0478;
  _objc_alloc(PTR_PTR_1126c0478);
  func_0x00010c00aa20();
  lVar2 = param_1;
  func_0x00010bee78c0(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e0ed38);
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7580();
    _objc_release(uVar3);
  }
  else {
    func_0x00010c18cfe0(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
  return lVar2;
}



/* Entry: 10592e5a4; end: 10592e7bb; -[SCFideliusDeviceGraphManager _deleteTempIdentity:iwek:hashedBeta:reason:message:] */

void FUN_10592e5a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = &UNK_10f30e760;
  func_0x0001000ba800(&UNK_10f30e760);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf706a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7e00(uVar2,param_2,2,0,param_6,param_7,0,param_4,9999,9999,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4e40();
  _objc_release(uVar2);
  if (param_3 == 0) {
    func_0x00010bf6bb20(param_1,param_2,param_5,0);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10592e7bc;
    puStack_78 = &UNK_110848bd8;
    lStack_70 = param_1;
    _objc_retain(param_5);
    uStack_68 = param_5;
    func_0x00010bf3dee0(param_1,param_2,param_3,&puStack_90);
    _objc_release(uStack_68);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10592e7bc; end: 10592e7cb;  */

void FUN_10592e7bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_deleteDeviceRowForHashedBeta_cal_1125b8870,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10592e7cc; end: 10592e973; -[SCFideliusDeviceGraphManager retainTempIdentity:] */

void FUN_10592e7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30e7b0;
  func_0x0001000ba800(&UNK_10f30e7b0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dcc0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c085320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c298be0();
  puVar6 = PTR_PTR_1126c0480;
  uVar5 = param_3;
  func_0x00010c0ee500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272440(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0b4ca0();
  func_0x00010bf706a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7e00(uVar3,param_2,2,1,0,0,0,uVar2,uVar4,puVar7,param_1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10592e974; end: 10592e9c3; -[SCFideliusDeviceGraphManager updateKVStoreOnLogoutWithIdentity:] */

void FUN_10592e974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ca20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10592e9c4; end: 10592ebbf; -[SCFideliusDeviceGraphManager _restoreKVStoreForBackfill] */

void FUN_10592e9c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c1211e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0488;
  _objc_alloc();
  func_0x00010c00aa20();
  uVar11 = 0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      puVar5 = PTR_PTR_1126c0490;
      _objc_alloc(PTR_PTR_1126c0490);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      uVar7 = uVar10;
      func_0x00010bf93b20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052920(uVar11,puVar5);
      _objc_release(uVar7);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010c0874a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdebe0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(uVar10);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + 0x60,0);
  _objc_storeStrong(lVar2 + 0x50,0);
  _objc_storeStrong(lVar2 + 0x48,0);
  _objc_storeStrong(lVar2 + 0x40,0);
  _objc_storeStrong(lVar2 + 0x38,0);
  _objc_storeStrong(lVar2 + 0x30,0);
  _objc_storeStrong(lVar2 + 0x28,0);
  _objc_storeStrong(lVar2 + 0x20,0);
  _objc_storeStrong(lVar2 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 10592ebc0; end: 10592ec4f; -[SCFideliusDeviceGraphManager .cxx_destruct] */

void FUN_10592ebc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10592ec50; end: 10592ed53; -[SCFideliusDeviceIDManager _createAndSaveDeviceID] */

void FUN_10592ec50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = &UNK_10f30e91d;
  func_0x0001000ba800(&UNK_10f30e91d);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10592ed54;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain();
  puStack_38 = puVar2;
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_60);
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar4);
  puVar3 = puVar2;
  func_0x00010bdc3580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10592ed54; end: 10592edcf;  */

void FUN_10592ed54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be989e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdc3580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4e20(uVar2,param_2,uVar3,uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10592edd0; end: 10592ee27; -[SCFideliusDeviceIDManager clear] */

void FUN_10592edd0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10592ee28;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 10592ee28; end: 10592ee5f;  */

void FUN_10592ee28(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bddfe00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bde06c0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10592ee60; end: 10592ee6b;  */

void FUN_10592ee60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveToArchive__1125841f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10592ee6c; end: 10592ef9f; -[SCFideliusDeviceIDManager _loadDeviceIDFromKeyChain] */

undefined * FUN_10592ee6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f30e9a9;
  func_0x0001000ba800();
  puVar2 = PTR_PTR_1126aef90;
  puVar4 = PTR_PTR_1126c0438;
  func_0x00010bf70660(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf63b00(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x10) {
    func_0x00010bfc3320(puVar2,param_2,auStack_48,0x10);
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    puVar3 = auStack_48;
    func_0x00010c057e80();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x0001000e2a84();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume(puVar2);
  _objc_terminate();
  _objc_retain(puVar3);
  puVar1 = &UNK_10f30e9dd;
  func_0x0001000ba800(&UNK_10f30e9dd);
  puVar4 = puVar2;
  func_0x00010be9a140(puVar2,param_2,puVar3);
  func_0x00010be9a2e0(puVar2,param_2,puVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(puVar3);
  return (undefined *)(ulong)(((uint)puVar4 | (uint)puVar2) & 1);
}



/* Entry: 10592efa0; end: 10592f03b; -[SCFideliusDeviceIDManager _save:] */

uint FUN_10592efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30e9dd;
  func_0x0001000ba800(&UNK_10f30e9dd);
  uVar2 = param_1;
  func_0x00010be9a140(param_1,param_2,param_3);
  func_0x00010be9a2e0(param_1,param_2,param_3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return ((uint)uVar2 | (uint)param_1) & 1;
}



/* Entry: 10592f03c; end: 10592f143; -[SCFideliusDeviceIDManager _saveToArchive:] */

undefined * FUN_10592f03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30e9fd;
  func_0x0001000ba800(&UNK_10f30e9fd);
  puVar2 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0458;
  func_0x00010be15820(PTR_PTR_1126c0458);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c14aa80(puVar2,param_2,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar5);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10592f144; end: 10592f363; -[SCFideliusDeviceIDManager _saveToKeychain:] */

undefined * FUN_10592f144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30ea38;
  func_0x0001000ba800();
  func_0x00010bfcb980(param_3,param_2,auStack_68);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_68,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aef90;
  if (puVar2 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
  }
  else {
    puVar3 = PTR_PTR_1126c0438;
    func_0x00010bf70660(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e560(puVar5,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    if ((int)puVar5 == 0) {
      puVar5 = (undefined *)0x1;
      goto LAB_10592f2d0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126aef90;
    puVar3 = PTR_PTR_1126c0438;
    func_0x00010bf70660(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12bcc0(puVar5,param_2,puVar3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
  }
  _objc_release(uVar4);
  puVar5 = (undefined *)0x0;
LAB_10592f2d0:
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume(param_3);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c0458;
  func_0x00010be15820(PTR_PTR_1126c0458);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5e0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 10592f364; end: 10592f3c3; -[SCFideliusDeviceIDManager _clearArchive] */

void FUN_10592f364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0458;
  func_0x00010be15820(PTR_PTR_1126c0458);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10592f3c4; end: 10592f44f; -[SCFideliusDeviceIDManager _clearKeychain] */

void FUN_10592f3c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001000ba800(&UNK_10f30eaab);
  puVar1 = PTR_PTR_1126aef90;
  puVar2 = PTR_PTR_1126c0438;
  func_0x00010bf70660(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10592f450; end: 10592f48b; -[SCFideliusDeviceIDManager .cxx_destruct] */

void FUN_10592f450(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10592f48c; end: 10592f5af; -[SCFideliusFriendDeviceInfo initWithTheirOutBeta:userId:mystique:version:timestamp:] */

undefined1 *
FUN_10592f48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eaf40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10592f5b0; end: 10592f783; -[SCFideliusFriendDeviceInfo isEqual:] */

bool FUN_10592f5b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126c03c0;
    _objc_opt_class(PTR_PTR_1126c03c0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      uVar3 = param_1;
      func_0x00010c26cfc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c26cfc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c071ae0();
      if ((int)uVar5 == 0) {
        bVar1 = false;
      }
      else {
        uVar5 = param_1;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c071ae0();
        if ((int)uVar7 == 0) {
          bVar1 = false;
        }
        else {
          uVar7 = param_1;
          func_0x00010c0d4ee0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_3;
          func_0x00010c0d4ee0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c071cc0();
          if ((int)uVar9 == 0) {
            bVar1 = false;
          }
          else {
            func_0x00010c298be0(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_1;
            func_0x00010c067ec0();
            uVar10 = param_3;
            func_0x00010c298be0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c067ec0();
            bVar1 = (int)uVar9 == (int)uVar11;
            _objc_release(uVar10);
            _objc_release(param_1);
          }
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10592f784; end: 10592f78b; -[SCFideliusFriendDeviceInfo theirOutBeta] */

undefined8 FUN_10592f784(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10592f78c; end: 10592f793; -[SCFideliusFriendDeviceInfo setTheirOutBeta:] */

void FUN_10592f78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10592f794; end: 10592f79b; -[SCFideliusFriendDeviceInfo userId] */

undefined8 FUN_10592f794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10592f79c; end: 10592f7a3; -[SCFideliusFriendDeviceInfo setUserId:] */

void FUN_10592f79c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10592f7a4; end: 10592f7ab; -[SCFideliusFriendDeviceInfo mystique] */

undefined8 FUN_10592f7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10592f7ac; end: 10592f7b3; -[SCFideliusFriendDeviceInfo setMystique:] */

void FUN_10592f7ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10592f7b4; end: 10592f7bb; -[SCFideliusFriendDeviceInfo version] */

undefined8 FUN_10592f7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10592f7bc; end: 10592f7eb; -[SCFideliusFriendDeviceInfo setVersion:] */

void FUN_10592f7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10592f7ec; end: 10592f7f3; -[SCFideliusFriendDeviceInfo timestamp] */

undefined8 FUN_10592f7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10592f7f4; end: 10592f823; -[SCFideliusFriendDeviceInfo setTimestamp:] */

void FUN_10592f7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10592f824; end: 10592f877; -[SCFideliusFriendDeviceInfo .cxx_destruct] */

void FUN_10592f824(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10592f878; end: 10592f973; -[SCFideliusIdentityArchiveManager archiveIdentity] */

void FUN_10592f878(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = &UNK_10f30eb6b;
  func_0x0001000ba800(&UNK_10f30eb6b);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10040876c;
  puStack_30 = &UNK_100414d24;
  uStack_28 = 0;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8));
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10592f974; end: 10592f9b3;  */

void FUN_10592f974(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bea1ec0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10592f9b4; end: 10592fa53; -[SCFideliusIdentityArchiveManager clear] */

void FUN_10592f9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f30ebd1;
  func_0x0001000ba800(&UNK_10f30ebd1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10592fa54;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 10592fa54; end: 10592fa93;  */

void FUN_10592fa54(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bddfc20(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  return;
}



/* Entry: 10592fa94; end: 10592fb63; -[SCFideliusIdentityArchiveManager blockingClear] */

void FUN_10592fa94(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x0001000ba800(&UNK_10f30ebf8);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x30) = 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10592fb64;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  }
  else {
    func_0x00010bddfc20(param_1);
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10592fb64; end: 10592fb6b;  */

void FUN_10592fb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddfc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__clear_1125558a8);
  return;
}



/* Entry: 10592fb6c; end: 10592fc7b; -[SCFideliusIdentityArchiveManager save:] */

undefined1 FUN_10592fb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30ec27;
  func_0x0001000ba800(&UNK_10f30ec27);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar3);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10592fc7c; end: 10592fcd7;  */

void FUN_10592fc7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be989e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  return;
}



/* Entry: 10592fcd8; end: 10592fda7; -[SCFideliusIdentityArchiveManager retain:] */

void FUN_10592fcd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30ec4d;
  func_0x0001000ba800(&UNK_10f30ec4d);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10592fda8;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f8240(uVar2,param_2,&puStack_70);
  _objc_release(uStack_48);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10592fda8; end: 10592fdf7;  */

void FUN_10592fda8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bddfc20(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  return;
}



/* Entry: 10592fdf8; end: 10592fe97; -[SCFideliusIdentityArchiveManager clearV2] */

void FUN_10592fdf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f30eca8;
  func_0x0001000ba800(&UNK_10f30eca8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10592fe98;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 10592fe98; end: 10592fed7;  */

void FUN_10592fe98(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde12a0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 1;
  return;
}



/* Entry: 10592fed8; end: 10592ffa7; -[SCFideliusIdentityArchiveManager blockingClearV2] */

void FUN_10592fed8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x0001000ba800(&UNK_10f30ecd1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x31) = 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10592ffa8;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  }
  else {
    func_0x00010bde12a0(param_1);
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10592ffa8; end: 10592ffaf;  */

void FUN_10592ffa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__clearV2_112555e48);
  return;
}



/* Entry: 10592ffb0; end: 1059300ef; -[SCFideliusIdentityArchiveManager saveV2:userId:] */

undefined1 FUN_10592ffb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = &UNK_10f30ed02;
  func_0x0001000ba800(&UNK_10f30ed02);
  puVar3 = PTR_PTR_1126c0498;
  _objc_alloc();
  func_0x00010c01be00();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1059300f0; end: 10593014b;  */

void FUN_1059300f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be9a3a0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 0;
  return;
}



/* Entry: 10593014c; end: 1059302d7; -[SCFideliusIdentityArchiveManager backfillArchiveV2withUserId:source:] */

void FUN_10593014c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  puStack_78 = &UNK_10040876c;
  puStack_70 = &UNK_100414d24;
  uStack_68 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059302d8; end: 105930417;  */

void FUN_1059302d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be4d7c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c0498;
    _objc_alloc();
    func_0x00010c01be00();
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1180();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105930418; end: 105930477; -[SCFideliusIdentityArchiveManager _save:] */

uint FUN_105930418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be9a140(param_1,param_2,param_3);
  func_0x00010be9a2e0(param_1,param_2,param_3);
  _objc_release(param_3);
  return ((uint)uVar1 | (uint)param_1) & 1;
}



/* Entry: 105930478; end: 105930547; -[SCFideliusIdentityArchiveManager _saveToArchive:] */

undefined * FUN_105930478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  _objc_retain(param_3);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd040;
  func_0x00010be15840(PTR_PTR_1126bd040);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar4);
  }
  return puVar3;
}



/* Entry: 105930548; end: 10593066b; -[SCFideliusIdentityArchiveManager _saveToKeychain:] */

undefined8 FUN_105930548(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010b7392a8();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
  }
  else {
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010c16e560(PTR_PTR_1126aef90,param_2,param_3,
                        &PTR____CFConstantStringClassReference_110e0ef18);
    if ((int)puVar1 == 0) {
      uVar2 = 1;
      goto LAB_10593064c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
    _objc_release(uVar2);
    func_0x00010c12bcc0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e0ef18);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
  }
  _objc_release(uVar2);
  uVar2 = 0;
LAB_10593064c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10593066c; end: 10593072b; -[SCFideliusIdentityArchiveManager _clear] */

void FUN_10593066c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001000ba800(&UNK_10f30ee03);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd040;
  func_0x00010be15840(PTR_PTR_1126bd040);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e0ef18);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10593072c; end: 10593077f; -[SCFideliusIdentityArchiveManager _loadIdentityFromKeyChainV2] */

void FUN_10593072c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e0ef38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100408474();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105930780; end: 1059307df; -[SCFideliusIdentityArchiveManager _saveV2:] */

uint FUN_105930780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be9a160(param_1,param_2,param_3);
  func_0x00010be9a300(param_1,param_2,param_3);
  _objc_release(param_3);
  return ((uint)uVar1 | (uint)param_1) & 1;
}



/* Entry: 1059307e0; end: 1059308af; -[SCFideliusIdentityArchiveManager _saveToArchiveV2:] */

undefined * FUN_1059307e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  _objc_retain(param_3);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd040;
  func_0x00010be15860(PTR_PTR_1126bd040);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
    _objc_release(uVar4);
  }
  return puVar3;
}



/* Entry: 1059308b0; end: 1059309d3; -[SCFideliusIdentityArchiveManager _saveToKeychainV2:] */

undefined8 FUN_1059308b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010b7392a8();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23c0();
  }
  else {
    puVar1 = PTR_PTR_1126aef90;
    func_0x00010c16e560(PTR_PTR_1126aef90,param_2,param_3,
                        &PTR____CFConstantStringClassReference_110e0ef38);
    if ((int)puVar1 == 0) {
      uVar2 = 1;
      goto LAB_1059309b4;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
    _objc_release(uVar2);
    func_0x00010c12bcc0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e0ef38);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
  }
  _objc_release(uVar2);
  uVar2 = 0;
LAB_1059309b4:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1059309d4; end: 105930a93; -[SCFideliusIdentityArchiveManager _clearV2] */

void FUN_1059309d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001000ba800(&UNK_10f30ee03);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd040;
  func_0x00010be15860(PTR_PTR_1126bd040);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c12bca0(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110e0ef38);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105930a94; end: 105930b2f; -[SCFideliusIdentityArchiveManager .cxx_destruct] */

void FUN_105930a94(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105930b30; end: 105930bd7; -[SCFideliusIdentityService dataInvalidated] */

void FUN_105930b30(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105930bd8; end: 105930c1b;  */

void FUN_105930bd8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105930c1c; end: 105930d8b; -[SCFideliusIdentityService _processFideliusFriendMetadataMap:source:] */

void FUN_105930c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30ef45;
  func_0x0001000ba800(&UNK_10f30ef45);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105930d8c;
  puStack_70 = &UNK_11085fb08;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_88;
  uStack_60 = param_3;
  lStack_58 = param_1;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244e80(uVar3,param_2,uVar4,uVar5,ppuVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105930d8c; end: 10593142f;  */

void FUN_105930d8c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined *puStack_358;
  undefined ***pppuStack_350;
  undefined *puStack_348;
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  uint uStack_274;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  puStack_2c0 = puVar1;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar12 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    lStack_298 = 0;
    lStack_290 = 0;
  }
  else {
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_288 = *plStack_210;
    lStack_2d0 = param_1;
    lStack_2c8 = param_2;
    uStack_274 = uVar12;
    do {
      lVar13 = 0;
      lStack_2b8 = lVar3;
      do {
        if (*plStack_210 != lStack_288) {
          _objc_enumerationMutation(param_2);
        }
        puVar15 = *(undefined **)(lStack_218 + lVar13 * 8);
        lVar14 = *(long *)(param_1 + 0x28);
        puVar4 = puVar15;
        lStack_280 = lVar13;
        func_0x00010c2923e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar15;
        func_0x000100bf119c();
        if (((ulong)puVar4 & 1) == 0) {
          uVar17 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c2923e0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be8c240(uVar17);
LAB_105931234:
          lVar13 = lStack_280;
          _objc_release(puVar15);
        }
        else {
          lVar13 = lStack_280;
          if (lVar14 != 0) {
            lVar13 = lVar14;
            puStack_2b0 = puVar15;
            func_0x00010bf71280();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar13;
            func_0x00010bf529e0();
            _objc_release(lVar13);
            lVar13 = lStack_280;
            if (lVar16 != 0) {
              lVar3 = lVar14;
              func_0x00010bf71280();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar3;
              func_0x00010bf529e0();
              lStack_2a8 = lVar13;
              _objc_release(lVar3);
              puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new();
              lStack_258 = 0;
              uStack_260 = 0;
              uStack_248 = 0;
              plStack_250 = (long *)0x0;
              uStack_238 = 0;
              uStack_240 = 0;
              uStack_228 = 0;
              uStack_230 = 0;
              lStack_2a0 = lVar14;
              puStack_270 = puVar15;
              func_0x00010bf71280();
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar14;
              func_0x00010bf52a60();
              uVar12 = uStack_274;
              if (lVar3 != 0) {
                lVar13 = *plStack_250;
                do {
                  lVar16 = 0;
                  do {
                    if (*plStack_250 != lVar13) {
                      _objc_enumerationMutation(lVar14);
                    }
                    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    uVar17 = *(undefined8 *)(lStack_258 + lVar16 * 8);
                    func_0x00010c298be0(uVar17);
                    func_0x00010c0df7c0(puVar15);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(puVar15);
                    if (((uVar12 & 1) == 0) &&
                       (puVar4 = puVar1, func_0x00010bf529e0(), puVar15 = PTR_PTR_1126c0388,
                       puVar4 < (undefined *)0x5)) {
                      func_0x00010c0ee500(uVar17);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c12c580();
                      _objc_retainAutoreleasedReturnValue();
                      puStack_268 = puVar15;
                      _objc_release(uVar17);
                      puVar15 = PTR_PTR_1126c0388;
                      func_0x00010bff6b40(PTR_PTR_1126c0388);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = PTR_PTR_1126c0480;
                      func_0x00010c272440();
                      _objc_retainAutoreleasedReturnValue();
                      puVar5 = puVar4;
                      func_0x00010c0b4ca0();
                      _objc_release(puVar4);
                      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      puStack_2e0 = puVar5;
                      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puStack_270);
                      uVar12 = uStack_274;
                      _objc_release(puVar4);
                      _objc_release(puVar15);
                      _objc_release(puStack_268);
                    }
                    lVar16 = lVar16 + 1;
                  } while (lVar3 != lVar16);
                  lVar3 = lVar14;
                  func_0x00010bf52a60();
                } while (lVar3 != 0);
              }
              _objc_release(lVar14);
              puVar15 = puStack_270;
              if (((uVar12 & 1) == 0) &&
                 (puVar4 = puVar1, func_0x00010bf529e0(), puVar4 < (undefined *)0x5)) {
                puVar4 = PTR_PTR_1126c04a0;
                _objc_opt_new(PTR_PTR_1126c04a0);
                puVar5 = puStack_2b0;
                func_0x00010c2923e0(puStack_2b0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21e620(puVar4);
                _objc_release(puVar5);
                puVar5 = puVar15;
                func_0x00010bf446e0(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1dc140(puVar4);
                _objc_release(puVar5);
                func_0x00010befa120(puVar1);
                _objc_release(puVar4);
              }
              lVar14 = lStack_2a0;
              lStack_298 = lStack_298 + 1;
              lStack_290 = lStack_2a8 + lStack_290;
              puVar4 = PTR_PTR_1126c04a8;
              func_0x00010becc800(PTR_PTR_1126c04a8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_2c0);
              _objc_release(puVar4);
              lVar3 = lStack_2b8;
              param_2 = lStack_2c8;
              param_1 = lStack_2d0;
              goto LAB_105931234;
            }
          }
        }
        _objc_release(lVar14);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar3);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  puVar4 = puStack_2c0;
  func_0x00010bdd2e60(*(undefined8 *)(param_1 + 0x30));
  func_0x00010be5d740(*(undefined8 *)(param_1 + 0x30));
  puStack_1a8 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110dab0d8;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e0f198;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e0f1b8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1a0 = puVar5;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_190 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dae8d8;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e0f1d8;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e0f1f8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e0f218;
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  puStack_198 = puVar6;
  puStack_188 = puVar2;
  puStack_180 = puVar1;
  func_0x00010be61be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  pppuVar11 = &ppuStack_1e0;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_178 = puVar15;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(uVar17);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar10 = puVar7;
  func_0x00010c0a92a0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18));
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_370;
    puStack_330 = puVar4;
    pcStack_2e8 = FUN_105931430;
    puStack_328 = puVar7;
    uStack_320 = uVar17;
    lStack_318 = param_2;
    puStack_310 = puVar2;
    puStack_308 = puVar15;
    puStack_300 = puVar6;
    puStack_2f8 = puVar5;
    puStack_2f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    _objc_retain(pppuVar11);
    puVar1 = &UNK_10f30efe5;
    func_0x0001000ba800(&UNK_10f30efe5);
    puVar2 = puVar10;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      _objc_initWeak(auStack_338,lVar3);
      puStack_370 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_368 = 0xc2000000;
      pcStack_360 = FUN_1059315f0;
      puStack_358 = &UNK_11085a578;
      _objc_copyWeak(auStack_340,auStack_338);
      _objc_retain(pppuVar11);
      pppuStack_350 = pppuVar11;
      _objc_retain(puVar10);
      puStack_348 = puVar10;
      _objc_retainBlock(&puStack_370);
      uVar17 = *(undefined8 *)(lVar3 + 0x28);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bf002e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar3 + 0x60);
      func_0x00010c11de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c244e80(uVar17);
      _objc_release(uVar9);
      _objc_release(puVar2);
      _objc_release(uVar17);
      _objc_release(ppuVar8);
      _objc_release(puStack_348);
      _objc_release(pppuStack_350);
      _objc_destroyWeak(auStack_340);
      _objc_destroyWeak(auStack_338);
    }
    func_0x0001000e2a84(puVar1);
    _objc_release(pppuVar11);
    _objc_release(puVar10);
    return;
  }
  return;
}



/* Entry: 105931430; end: 1059315ef; -[SCFideliusIdentityService _reconcileFullStateFideliusFriendMetadataMap:source:] */

void FUN_105931430(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar3 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30efe5;
  func_0x0001000ba800(&UNK_10f30efe5);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1059315f0;
    puStack_78 = &UNK_11085a578;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retainBlock(&puStack_90);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf002e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244e80(uVar4);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059315f0; end: 105931827;  */

void FUN_1059315f0(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if ((param_3 == (undefined *)0x0) && (lVar3 = param_2, func_0x00010bf529e0(), lVar3 != 0)) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      _objc_retain(param_2);
      lVar3 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar15 = *(undefined8 *)(lVar12 * 8);
          lVar14 = *(long *)(param_1 + 0x28);
          uVar5 = uVar15;
          func_0x00010c2923e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x000100bf119c();
          if ((int)uVar15 != 0 && lVar14 != 0) {
            lVar6 = lVar14;
            func_0x00010bf71280();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf529e0();
            _objc_release(lVar6);
            if (lVar7 != 0) {
              puVar10 = PTR_PTR_1126c04a8;
              func_0x00010becc800(PTR_PTR_1126c04a8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(puVar10);
            }
          }
          _objc_release(lVar14);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
      puVar10 = puVar4;
      func_0x00010bdd2e80(lVar2);
      _objc_release(puVar4);
    }
    else {
      puVar10 = (undefined *)0x0;
      func_0x00010c0a6da0(*(undefined8 *)(lVar2 + 0x18));
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar4 = puVar10;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  puVar4 = (undefined *)0x0;
  if (puVar8 != (undefined *)0x0) {
    puVar4 = puVar10;
    func_0x00010bf71280(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x000100504554();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c04b8;
    _objc_opt_new(PTR_PTR_1126c04b8);
    puVar9 = puVar8;
    func_0x00010c0d3c80(puVar8);
    func_0x00010c19fc60(puVar4);
    _objc_release(puVar9);
    puVar9 = puVar10;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x000100576d08();
    if ((int)puVar13 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar13);
    }
    func_0x00010c21e620(puVar4);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105931828; end: 105931a4b; +[SCFideliusIdentityService _toFideliusFriendKeys:] */

void FUN_105931828(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf71280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c04b8;
    _objc_opt_new(PTR_PTR_1126c04b8);
    lVar1 = lVar2;
    func_0x00010c0d3c80(lVar2);
    func_0x00010c19fc60(puVar3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000100576d08();
    if ((int)lVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar5);
    }
    func_0x00010c21e620(puVar3);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105931a4c; end: 105931b6f; +[SCFideliusIdentityService _toSCFideliusFriendMetadata:] */

void FUN_105931a4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb8020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bfb8020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c04c0;
    _objc_alloc(PTR_PTR_1126c04c0);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfe2ee0();
    lVar5 = lVar1;
    func_0x00010c0b5940(lVar1);
    func_0x000100c4a928(lVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c05b060(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105931b70; end: 105931c37;  */

void FUN_105931b70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126c0388;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c03f8;
  _objc_alloc(PTR_PTR_1126c03f8);
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c0326c0(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105931c38; end: 105931c43; -[SCFideliusIdentityService _batchProcessFriendInfoV2:] */

void FUN_105931c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__batchProcessFriendInfoV2_reconc_112552540,param_3,0,0);
  return;
}



/* Entry: 105931c44; end: 1059322e3; -[SCFideliusIdentityService _batchProcessFriendInfoV2:reconcileFullState:source:] */

void FUN_105931c44(ulong param_1,undefined **param_2,long param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined **ppuVar24;
  long lStack_208;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = &UNK_10f30f0b1;
  func_0x0001000ba800();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    param_2 = &PTR___NSConcreteGlobalBlock_1108c09e0;
    lVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c09e0);
    lVar4 = lVar2;
    func_0x00010c291b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb7fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2924e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar4 != 0) {
      lStack_208 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar21 = *(undefined ***)(lStack_208 * 8);
        ppuVar9 = ppuVar21;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        ppuVar24 = ppuVar9;
        func_0x00010bfe2ee0();
        param_2 = ppuVar9;
        func_0x00010c0b5940(ppuVar9);
        _objc_release(ppuVar9);
        func_0x000100c4a928(ppuVar24,param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar24;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar24);
        _objc_release(ppuVar9);
        lVar11 = lVar6;
        func_0x00010c0e00e0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_1;
        func_0x00010bdd4140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        func_0x00010bfb8020();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar21;
        func_0x00010bf52a60();
        lVar11 = lRam0000000000000000;
        while (ppuVar9 != (undefined **)0x0) {
          ppuVar24 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar11) {
              _objc_enumerationMutation(ppuVar21);
            }
            puVar15 = PTR_PTR_1126c0388;
            uVar23 = *(ulong *)((long)ppuVar24 * 8);
            uVar14 = uVar23;
            func_0x00010c11a480(uVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef8420(puVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010bf15da0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(uVar14);
            uVar14 = uVar12;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar14 == 0) {
LAB_105931fb4:
              func_0x00010befa120(puVar13);
            }
            else {
              uVar14 = uVar12;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar14;
              func_0x00010c298be0();
              _objc_retainAutoreleasedReturnValue();
              uVar18 = uVar17;
              func_0x00010c067fc0();
              uVar19 = uVar23;
              func_0x00010c298be0();
              if (uVar18 == uVar19) {
                _objc_release(uVar17);
                _objc_release(uVar14);
              }
              else {
                func_0x00010c298be0();
                _objc_release(uVar17);
                _objc_release(uVar14);
                if (8 < uVar23) goto LAB_105931fb4;
              }
            }
            uVar14 = uVar12;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar14 != 0) {
              func_0x00010c12d3e0(uVar12);
            }
            _objc_release(puVar16);
            ppuVar24 = (undefined **)((long)ppuVar24 + 1);
          } while (ppuVar9 != ppuVar24);
          ppuVar9 = ppuVar21;
          func_0x00010bf52a60();
        }
        _objc_release(ppuVar21);
        uVar14 = param_1;
        func_0x00010bdd2e40();
        _objc_retainAutoreleasedReturnValue();
        if ((param_4 & 1) == 0) {
          uVar23 = uVar12;
          func_0x00010bf00d20(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar8);
          _objc_release(uVar23);
        }
        func_0x00010befa160(puVar7);
        uVar23 = uVar12;
        func_0x00010bf529e0();
        if (uVar23 == 0) {
          func_0x00010bf529e0();
        }
        _objc_release(uVar14);
        _objc_release(puVar13);
        _objc_release(uVar12);
        _objc_release(ppuVar10);
        lStack_208 = lStack_208 + 1;
      } while (lStack_208 != lVar4);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar13 = puVar8;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      lVar4 = lVar2;
      func_0x00010c291b00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf659c0();
      _objc_release(lVar4);
    }
    puVar13 = puVar7;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      lVar4 = lVar2;
      func_0x00010c291b00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65a20();
      _objc_release(lVar4);
    }
    uVar22 = *(undefined8 *)(param_1 + 0x18);
    if (param_4 == 0) {
      func_0x00010bf529e0(lVar3);
      func_0x00010bf529e0();
      func_0x00010bf529e0(puVar8);
      func_0x00010c0a6d40(uVar22);
    }
    else {
      func_0x00010bf529e0(lVar3);
      func_0x00010bf529e0(puVar7);
      func_0x00010c0a6da0(uVar22);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar1);
    __Unwind_Resume(param_3);
    _objc_terminate();
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_2;
    func_0x00010bfe2ee0();
    ppuVar24 = param_2;
    func_0x00010c0b5940(param_2);
    func_0x000100c4a928(ppuVar9,ppuVar24);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar9;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar24);
    return;
  }
  return;
}



/* Entry: 1059322e4; end: 105932363;  */

void FUN_1059322e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe2ee0();
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105932364; end: 10593240f; -[SCFideliusIdentityService _betaToDeviceDictFromDeviceList:] */

void FUN_105932364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar1,param_2,uVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105932410;
  puStack_30 = &UNK_1108c0a00;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bf97e80(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


