/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059a1fac; end: 1059a20ff; -[SCProcessedNotificationPersister initWithUserId:sharedExtensionFolder:todayFileName:yesterdayFileName:notifProcessedTodayFile:notifProcessedYesterdayFile:] */

undefined1 *
FUN_1059a1fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126eb1f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059a2100; end: 1059a2183; -[SCProcessedNotificationPersister notificationProcessed:] */

undefined * FUN_1059a2100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0309a0();
  puVar2 = PTR_PTR_1126c08b8;
  func_0x00010c25d200(PTR_PTR_1126c08b8,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1059a2184; end: 1059a219b; -[SCProcessedNotificationPersister saveProcessedNotificationId:] */

void FUN_1059a2184(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c08b8,PTR_s_addStringToSetAndSaveToFile_newS_11259c858,
             *(undefined8 *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1059a219c; end: 1059a2333; -[SCProcessedNotificationPersister cleanUpProcessedNotificationsFiles] */

void FUN_1059a219c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar9;
  long alStack_f0 [17];
  long lStack_68;
  ulong uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x30);
  alStack_f0[0] = 0;
  func_0x00010bfad480(lVar2,param_2,alStack_f0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = alStack_f0[0];
  _objc_retain(alStack_f0[0]);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      iVar7 = (int)uVar8;
      func_0x00010bf4bb00();
      if (((iVar7 != 0) && (uVar4 = uVar8, func_0x00010c0720c0(), (uVar4 & 1) == 0)) &&
         (func_0x00010c0720c0(), (uVar8 & 1) == 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c22b9e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6bde0();
        _objc_release(uVar5);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar6 + 0x30,0);
  _objc_storeStrong(lVar6 + 0x28,0);
  _objc_storeStrong(lVar6 + 0x20,0);
  _objc_storeStrong(lVar6 + 0x18,0);
  _objc_storeStrong(lVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + 8,0);
  return;
}



/* Entry: 1059a2334; end: 1059a2393; -[SCProcessedNotificationPersister .cxx_destruct] */

void FUN_1059a2334(long param_1)

{
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



/* Entry: 1059a2394; end: 1059a239f; -[SCNotificationCategoryPluginScope .cxx_destruct] */

void FUN_1059a2394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a23a0; end: 1059a23c3; -[SCNotificationCategoryAction copyWithZone:] */

undefined8 FUN_1059a23a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059a23c4; end: 1059a249b; -[SCNotificationCategoryAction hash] */

undefined8 * FUN_1059a23c4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x58);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1059a25dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1059a25e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_1059a25e8;
                    }
                    goto LAB_1059a25dc;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1059a25e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1059a249c; end: 1059a2603; -[SCNotificationCategoryAction isEqual:] */

long FUN_1059a249c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059a25dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059a25e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if (lVar3 != *(long *)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_1059a25e8;
                    }
                    goto LAB_1059a25dc;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1059a25e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059a2604; end: 1059a267b; -[SCNotificationCategoryAction .cxx_destruct] */

void FUN_1059a2604(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1059a267c; end: 1059a2abb; -[SCUserNotificationsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a267c(long param_1)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  lVar20 = (long)_DAT_11272cad4;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar19);
  puVar1 = PTR_PTR_1126c08c8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272cb30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1059a2abc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016360();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11272cad8);
  *(undefined **)(param_1 + _DAT_11272cad8) = puVar1;
  _objc_release(uVar19);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c08d0;
  _objc_alloc();
  lVar4 = param_1;
  FUN_1059a2abc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x0001059a2ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfebf20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0001059a2ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x0001059a2b04(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272caf0;
  _objc_loadWeakRetained(lVar2);
  lVar13 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272cb50;
  _objc_loadWeakRetained(lVar3);
  lVar14 = lVar3;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b4c0();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11272cadc);
  *(undefined **)(param_1 + _DAT_11272cadc) = puVar1;
  _objc_release(uVar19);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar15 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  puVar16 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae960;
  puVar17 = PTR_PTR_1126bdb28;
  func_0x00010c293000(PTR_PTR_1126bdb28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bfa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c11de00(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar15);
  func_0x00010c2a1660(puVar16);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(puVar1);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar15);
  return;
}



/* Entry: 1059a2abc; end: 1059a2b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a2abc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272cb2c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059a2b28; end: 1059a2b63;  */

void FUN_1059a2b28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be3b7e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059a2b64; end: 1059a34af; -[SCUserNotificationsEntryPoint _initializeObjectsAndData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a2b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_1059a2abc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c08d8;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_1059a2abc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11272cae0;
  _objc_loadWeakRetained(lVar1);
  lVar19 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11272cae8;
    _objc_loadWeakRetained(lVar18);
  }
  lVar7 = lVar18;
  func_0x00010bf07a00(lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  FUN_1059a34b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar21;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3920(puVar4,param_2,puVar5,lVar6,lVar19,lVar7,lVar8,param_3);
  lVar22 = (long)_DAT_11272cae4;
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar4;
  _objc_release(uVar17);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar19);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar5);
  lVar1 = param_1;
  func_0x0001059a2ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfebf20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x0001059a2ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c08e0;
  _objc_alloc();
  uVar17 = *(undefined8 *)(param_1 + _DAT_11272cad8);
  func_0x00010bfb9dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11272cae8;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272caec;
  _objc_loadWeakRetained(lVar2);
  lVar21 = lVar2;
  func_0x00010c0dc960();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11272caf0;
  lVar6 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar6);
  lVar10 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016500(puVar4,param_2,uVar17,lVar8,lVar9,lVar7,lVar21,lVar10);
  lVar23 = (long)_DAT_11272caf4;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar4;
  _objc_release(uVar20);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(uVar17);
  uVar20 = *(undefined8 *)(param_1 + lVar22);
  uVar17 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf151c0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f460(uVar20,param_2,uVar17);
  _objc_release(uVar17);
  puVar4 = PTR_PTR_1126c08e8;
  _objc_alloc();
  lVar1 = param_1;
  func_0x0001059a34d4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x0001059a2ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar7;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x0001059a2ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar10;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x0001059a2b04(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar23;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b220(puVar4,param_2,lVar3,lVar6,lVar21,lVar22,lVar11);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11272caf8);
  *(undefined **)(param_1 + _DAT_11272caf8) = puVar4;
  _objc_release(uVar17);
  _objc_release(lVar11);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar10);
  _objc_release(lVar21);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c08f0;
  _objc_alloc();
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272cafc;
  _objc_loadWeakRetained();
  lVar21 = lVar2;
  func_0x00010bf1c260();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x0001059a2b04(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010be08e60(param_1);
  lVar6 = param_1 + _DAT_11272cb54;
  _objc_loadWeakRetained(lVar6);
  lVar12 = lVar6;
  func_0x00010c2a2720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe320(puVar4,param_2,lVar7,lVar10,lVar23,lVar11,lVar12);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11272cb00);
  *(undefined **)(param_1 + _DAT_11272cb00) = puVar4;
  _objc_release(uVar17);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar10);
  _objc_release(lVar21);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  func_0x00010be734c0(param_1);
  lVar1 = param_1;
  func_0x00010bdf0880();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + _DAT_11272cb04);
  *(long *)(param_1 + _DAT_11272cb04) = lVar1;
  _objc_release(uVar17);
  puVar4 = PTR_PTR_1126c08f8;
  _objc_alloc();
  lVar23 = param_1;
  FUN_1059a2abc();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar23;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11272cb14;
  lVar1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272cb4c;
  _objc_loadWeakRetained();
  lVar12 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar16 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272cb08;
  _objc_loadWeakRetained();
  lVar11 = lVar6;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar22 = lVar18;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272cb0c;
  _objc_loadWeakRetained();
  lVar10 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ae20(puVar4,param_2,lVar14,lVar15,lVar12,lVar16,lVar11,lVar22,lVar10);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11272cb10);
  *(undefined **)(param_1 + _DAT_11272cb10) = puVar4;
  _objc_release(uVar17);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar22);
  _objc_release(lVar18);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar15);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar23);
  lVar19 = param_1;
  FUN_1059a34b0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar19;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf8f680();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar19);
  if ((int)lVar1 != 0) {
    puVar4 = PTR_PTR_1126c0900;
    _objc_alloc();
    lVar21 = param_1 + lVar21;
    _objc_loadWeakRetained(lVar21);
    lVar2 = lVar21;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11272cb18;
    _objc_loadWeakRetained(lVar1);
    lVar6 = lVar1;
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3580(puVar4,param_2,param_3,lVar2,lVar6);
    uVar17 = *(undefined8 *)(param_1 + _DAT_11272cb1c);
    *(undefined **)(param_1 + _DAT_11272cb1c) = puVar4;
    _objc_release(uVar17);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar21);
  }
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a34b0; end: 1059a34f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a34b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272cb44);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059a34f8; end: 1059a369b; -[SCUserNotificationsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a34f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_PTR_1126af6d8;
  lVar5 = param_1;
  FUN_1059a2abc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aba80(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = (long)_DAT_11272cae4;
  func_0x00010c2562a0(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272caf4);
  *(undefined8 *)(param_1 + _DAT_11272caf4) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272cad8);
  *(undefined8 *)(param_1 + _DAT_11272cad8) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272caf8);
  *(undefined8 *)(param_1 + _DAT_11272caf8) = 0;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272cb20;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar2);
  lVar5 = param_1 + _DAT_11272cb40;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291c80();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar2);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar6));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059a369c; end: 1059a36d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a369c(long param_1)

{
  func_0x00010c12ef60(PTR_PTR_1126ba528);
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272cb20),
             PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1059a36d4; end: 1059a3797; -[SCUserNotificationsEntryPoint _enableNotificationCustomSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1059a36d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272cb48;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bfa2420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf619c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar5 == 3;
}



/* Entry: 1059a3798; end: 1059a37f7; -[SCUserNotificationsEntryPoint _performPersistSettingsForExtensions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a3798(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1059a37f8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11272cad4),param_2,&puStack_38);
  return;
}



/* Entry: 1059a37f8; end: 1059a37ff;  */

void FUN_1059a37f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be734d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__persistSettingsForExtensions_11257a6d0);
  return;
}



/* Entry: 1059a3800; end: 1059a3a0f; -[SCUserNotificationsEntryPoint _persistSettingsForExtensions] */

void FUN_1059a3800(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2;
  func_0x0001059a2b04();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1add40(uVar3,param_3,(long)param_1,&PTR____CFConstantStringClassReference_110e127f8);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x0001059a2b04(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x0001059a34d4(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf642a0();
  func_0x00010c172fe0(uVar3,param_3,uVar8,&PTR____CFConstantStringClassReference_110e127b8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x0001059a2b04(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001059a34d4(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf91040();
  func_0x00010c172fe0(uVar3,param_3,uVar7,&PTR____CFConstantStringClassReference_110e127d8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059a3a10; end: 1059a3c13; -[SCUserNotificationsEntryPoint _createNotificationFeatureScreenAccessTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a3a10(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126c0908;
  _objc_alloc();
  lVar16 = (long)_DAT_11272caec;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0dc900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272cae8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar6 = lVar16;
  func_0x00010c0dc960();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0dc940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272caf0;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272cb24;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf669c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272cb28;
  _objc_loadWeakRetained(param_1);
  lVar14 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf5f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0301a0(puVar1,param_2,lVar3,lVar5,lVar8,lVar10,lVar13,lVar15);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059a3c14; end: 1059a3c33; -[SCUserNotificationsEntryPoint sigNotificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a3c14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272cb0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059a3c34; end: 1059a3c47; -[SCUserNotificationsEntryPoint setSigNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a3c34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272cb0c,param_3);
  return;
}



/* Entry: 1059a3c48; end: 1059a3e1f; -[SCUserNotificationsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a3c48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272cb54);
  _objc_destroyWeak(param_1 + _DAT_11272cb18);
  _objc_destroyWeak(param_1 + _DAT_11272cb0c);
  _objc_destroyWeak(param_1 + _DAT_11272cb50);
  _objc_destroyWeak(param_1 + _DAT_11272cb28);
  _objc_destroyWeak(param_1 + _DAT_11272cb24);
  _objc_destroyWeak(param_1 + _DAT_11272cb08);
  _objc_destroyWeak(param_1 + _DAT_11272cb4c);
  _objc_destroyWeak(param_1 + _DAT_11272cb48);
  _objc_destroyWeak(param_1 + _DAT_11272cb44);
  _objc_destroyWeak(param_1 + _DAT_11272caf0);
  _objc_destroyWeak(param_1 + _DAT_11272cb40);
  _objc_destroyWeak(param_1 + _DAT_11272cb14);
  _objc_destroyWeak(param_1 + _DAT_11272caec);
  _objc_destroyWeak(param_1 + _DAT_11272cafc);
  _objc_destroyWeak(param_1 + _DAT_11272cb3c);
  _objc_destroyWeak(param_1 + _DAT_11272cb38);
  _objc_destroyWeak(param_1 + _DAT_11272cb34);
  _objc_destroyWeak(param_1 + _DAT_11272cb30);
  _objc_destroyWeak(param_1 + _DAT_11272cb2c);
  _objc_destroyWeak(param_1 + _DAT_11272cae0);
  _objc_destroyWeak(param_1 + _DAT_11272cae8);
  _objc_storeStrong(param_1 + _DAT_11272cad4,0);
  _objc_storeStrong(param_1 + _DAT_11272cb1c,0);
  _objc_storeStrong(param_1 + _DAT_11272cb04,0);
  _objc_storeStrong(param_1 + _DAT_11272cb00,0);
  _objc_storeStrong(param_1 + _DAT_11272cb10,0);
  _objc_storeStrong(param_1 + _DAT_11272cb20,0);
  _objc_storeStrong(param_1 + _DAT_11272cadc,0);
  _objc_storeStrong(param_1 + _DAT_11272caf8,0);
  _objc_storeStrong(param_1 + _DAT_11272cad8,0);
  _objc_storeStrong(param_1 + _DAT_11272caf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272cae4,0);
  return;
}



/* Entry: 1059a3e20; end: 1059a409f; -[SCNotificationExtensionExecutionMainAppLogger initWithUserId:blizzardLogger:grapheneRegistry:circumstanceEngine:appLifeCycleManager:applicationLifecycleEvents:notificationPool:] */

undefined8 *
FUN_1059a3e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eb208;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_8;
    func_0x00010c2a6420(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010be81200(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a40a0; end: 1059a40d3;  */

void FUN_1059a40a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be81200(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a40d4; end: 1059a417b; -[SCNotificationExtensionExecutionMainAppLogger _processFile] */

void FUN_1059a40d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059a417c; end: 1059a4397;  */

void FUN_1059a417c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b7490;
    _objc_alloc(PTR_PTR_1126b7490);
    func_0x00010bfef900();
    func_0x00010c0d0480();
    _objc_retain(0);
    _objc_release(0);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1059a4398; end: 1059a43bf;  */

void FUN_1059a4398(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059a43c0; end: 1059a45cb;  */

void FUN_1059a43c0(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar2 = param_3;
  func_0x00010c115a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  _objc_release(lVar2);
  if (param_1 <= 120.0) {
    _objc_retain(param_3);
    lVar2 = param_3;
  }
  else {
    puVar3 = PTR_PTR_1126c0910;
    _objc_opt_new(PTR_PTR_1126c0910);
    lVar2 = param_3;
    func_0x00010c0dcb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce740(puVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce180(puVar3);
    _objc_release(lVar2);
    func_0x00010bf057e0();
    func_0x00010c1691e0(puVar3);
    func_0x00010c1e0a60(puVar3);
    lVar2 = param_3;
    func_0x00010c115a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199320(puVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf2c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010bf2c2c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c177880(puVar3);
      _objc_release(lVar2);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    func_0x00010be8fe60(*(undefined8 *)(param_2 + 0x20));
    func_0x00010beb89e0(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar3);
    lVar2 = 0;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059a45cc; end: 1059a46f3; -[SCNotificationExtensionExecutionMainAppLogger _reportNotificationServiceExtensionExecutionDidNotFinished:] */

void FUN_1059a45cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c0ddbc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dcb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf057e0();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e12638;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df09d8;
  }
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd6d58,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059a46f4; end: 1059a46f7; -[SCNotificationExtensionExecutionMainAppLogger _showDebugAlert:] */

void FUN_1059a46f4(void)

{
  return;
}



/* Entry: 1059a46f8; end: 1059a4763; -[SCNotificationExtensionExecutionMainAppLogger .cxx_destruct] */

void FUN_1059a46f8(long param_1)

{
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



/* Entry: 1059a4764; end: 1059a4867; -[SCNonMessagingNotificationsBadgeCountProvider initWithApplicationLifecycleEvents:notificationScreenAccessorObservable:circumstanceEngine:] */

undefined8
FUN_1059a4764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3b00(param_1,param_2,param_3,param_4,puVar1,puVar2,param_5,puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1059a4868; end: 1059a4acf; -[SCNonMessagingNotificationsBadgeCountProvider initWithApplicationLifecycleEvents:notificationScreenAccessorObservable:badgeCountPublisher:performer:circumstanceEngine:notificationCenter:] */

undefined8 *
FUN_1059a4868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126eb210;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    func_0x00010c0d9840(param_5);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    func_0x00010be65b60(puVar1);
    if (puVar1[4] != 0) {
      func_0x00010be66c00(puVar1);
    }
    _objc_release(param_7);
    _objc_release(param_7);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a4ad0; end: 1059a4b2f;  */

void FUN_1059a4ad0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001070c238c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1059a4b30; end: 1059a4b57; -[SCNonMessagingNotificationsBadgeCountProvider badgeCountObservable] */

void FUN_1059a4b30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059a4b58; end: 1059a4d17; -[SCNonMessagingNotificationsBadgeCountProvider _observeApplicationLifecycleEvent] */

void FUN_1059a4b58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf72840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1059a4d18;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2a6a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1059a4d18; end: 1059a4d6f;  */

void FUN_1059a4d18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a4d70; end: 1059a4e5b; -[SCNonMessagingNotificationsBadgeCountProvider _observeScreenAccessEvent] */

void FUN_1059a4d70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059a4e5c; end: 1059a4f03;  */

void FUN_1059a4e5c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd560(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1059a4f04; end: 1059a4f37;  */

void FUN_1059a4f04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a4f38; end: 1059a4f47; -[SCNonMessagingNotificationsBadgeCountProvider _applicationDidBecomeActive] */

void FUN_1059a4f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2068);
  return;
}



/* Entry: 1059a4f48; end: 1059a4fb7; -[SCNonMessagingNotificationsBadgeCountProvider _didEnterTargetScreen:] */

void FUN_1059a4f48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    func_0x00010befa120(lVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a4fb8; end: 1059a5033; -[SCNonMessagingNotificationsBadgeCountProvider _updateBadgeCount] */

void FUN_1059a4fb8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc4a60();
  _objc_release(puVar1);
  return;
}



/* Entry: 1059a5034; end: 1059a503f;  */

void FUN_1059a5034(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleDeliveredNotifications__112567a70,param_2)
  ;
  return;
}



/* Entry: 1059a5040; end: 1059a5117; -[SCNonMessagingNotificationsBadgeCountProvider _handleDeliveredNotifications:] */

void FUN_1059a5040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a5118; end: 1059a514b;  */

void FUN_1059a5118(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a514c; end: 1059a554b; -[SCNonMessagingNotificationsBadgeCountProvider _publishBadgeCountWithDeliveredNotifications:] */

ulong FUN_1059a514c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_150;
  long lStack_140;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar16 = param_3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (uVar16 == 0) {
    lStack_140 = 0;
  }
  else {
    lStack_150 = 0;
    lStack_140 = 0;
    do {
      uVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar14 = *(ulong *)(uVar17 * 8);
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar14;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar13;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(uVar13);
        _objc_release(uVar14);
        lVar3 = param_1;
        func_0x00010beb2a00();
        if ((int)lVar3 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar4;
          func_0x00010bf1f3c0();
          if ((int)uVar15 == 0) {
            puVar5 = PTR_PTR_1126b1370;
            func_0x00010c25d500();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar2;
            func_0x00010c0720c0();
            if ((int)uVar13 == 0) {
              puVar6 = PTR_PTR_1126b1370;
              func_0x00010c25d500();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar2;
              func_0x00010c0720c0();
              if ((int)uVar13 == 0) {
                puVar7 = PTR_PTR_1126b1370;
                func_0x00010c25d500();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar2;
                func_0x00010c0720c0();
                if ((uVar13 & 1) == 0) {
                  puVar8 = PTR_PTR_1126b1370;
                  func_0x00010c25d500();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar2;
                  func_0x00010c0720c0();
                  if ((uVar13 & 1) == 0) {
                    puVar9 = PTR_PTR_1126b1370;
                    func_0x00010c25d500();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar2;
                    func_0x00010c0720c0();
                    _objc_release(puVar9);
                  }
                  else {
                    uVar13 = 1;
                  }
                  _objc_release(puVar8);
                }
                else {
                  uVar13 = 1;
                }
                _objc_release(puVar7);
                _objc_release(puVar6);
                _objc_release(puVar5);
                _objc_release(uVar4);
                if ((uVar13 & 1) != 0) {
                  lStack_150 = 1;
                }
                uVar13 = (ulong)~(uint)uVar13 & 1;
              }
              else {
                _objc_release(puVar6);
                _objc_release(puVar5);
                _objc_release(uVar4);
                uVar13 = 0;
                lStack_150 = 1;
              }
              lStack_140 = uVar13 + lStack_140;
            }
            else {
              _objc_release(puVar5);
              _objc_release(uVar4);
              lStack_150 = 1;
            }
          }
          else {
            _objc_release(uVar4);
            lStack_140 = lStack_140 + 1;
          }
        }
        _objc_release(uVar2);
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
      uVar16 = param_3;
      func_0x00010bf52a60();
    } while (uVar16 != 0);
    lStack_140 = lStack_140 + lStack_150;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x000100a046e8();
  _objc_release(uVar4);
  FUN_1059abcf4(*(undefined8 *)(param_1 + 0x50),param_3,uVar15,lStack_140);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d9840(uVar15);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release(uVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    uVar16 = param_3;
    func_0x00010beb2b40();
    if ((uVar16 & 1) == 0) {
      uVar15 = *(undefined8 *)(param_3 + 0x40);
      _objc_retain(uVar15);
      if (lRam00000001136c1870 != -1) {
        func_0x00010002a2fc(0x1136c1870,&PTR___NSConcreteGlobalBlock_1108c97c8);
      }
      uVar4 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((int)uVar10 != 0) {
        lVar12 = lRam00000001136c1868;
        func_0x00010c0d3c80();
        puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
        uVar4 = 0x13;
        func_0x000107fcbeb0(0x13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c226900(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b1370;
        func_0x00010c25d500(PTR_PTR_1126b1370);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar12);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(uVar4);
        lVar3 = lVar12;
        func_0x00010bf51e00();
        lVar11 = lRam00000001136c1868;
        lRam00000001136c1868 = lVar3;
        _objc_release(lVar11);
        _objc_release(lVar12);
      }
      lVar11 = lRam00000001136c1868;
      _objc_retain(lRam00000001136c1868);
      _objc_release(uVar15);
      lVar12 = lVar11;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      lVar11 = lVar12;
      func_0x00010bf529e0();
      if (lVar11 == 0) {
        uVar16 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(param_3 + 0x30);
        func_0x00010bf51e00(uVar15);
        lVar11 = lVar12;
        func_0x00010c069880(lVar12);
        _objc_release(uVar15);
        uVar16 = (ulong)((uint)lVar11 ^ 1);
      }
      _objc_release(lVar12);
    }
    else {
      uVar16 = 1;
    }
    _objc_release(puVar6);
    return uVar16;
  }
  return param_3;
}



/* Entry: 1059a554c; end: 1059a573f; -[SCNonMessagingNotificationsBadgeCountProvider _shouldBadgeForNotificationType:notification:] */

uint FUN_1059a554c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb2b40();
  if ((uVar1 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar10);
    if (lRam00000001136c1870 != -1) {
      func_0x00010002a2fc(0x1136c1870,&PTR___NSConcreteGlobalBlock_1108c97c8);
    }
    uVar4 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      lVar3 = lRam00000001136c1868;
      func_0x00010c0d3c80();
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      uVar4 = 0x13;
      func_0x000107fcbeb0(0x13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c226900(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b1370;
      func_0x00010c25d500(PTR_PTR_1126b1370);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      lVar7 = lVar3;
      func_0x00010bf51e00();
      lVar8 = lRam00000001136c1868;
      lRam00000001136c1868 = lVar7;
      _objc_release(lVar8);
      _objc_release(lVar3);
    }
    lVar8 = lRam00000001136c1868;
    _objc_retain(lRam00000001136c1868);
    _objc_release(uVar10);
    lVar3 = lVar8;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar3;
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      uVar9 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf51e00(uVar10);
      lVar8 = lVar3;
      func_0x00010c069880(lVar3);
      _objc_release(uVar10);
      uVar9 = (uint)lVar8 ^ 1;
    }
    _objc_release(lVar3);
  }
  else {
    uVar9 = 1;
  }
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1059a5740; end: 1059a589f; -[SCNonMessagingNotificationsBadgeCountProvider _shouldBypassFeatureAccessedVerificationForNotificationType:notification:] */

undefined8 FUN_1059a5740(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x0001070c23b4();
  if (iVar1 == 0) {
LAB_1059a57a8:
    lVar4 = param_3;
    func_0x000107fd3b4c();
    if (lVar4 == 0x16) {
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x0001070c2278();
      if ((uVar5 & 1) == 0) goto LAB_1059a57c4;
LAB_1059a586c:
      uVar7 = 1;
      goto LAB_1059a5878;
    }
LAB_1059a57c4:
    lVar4 = param_3;
    func_0x000107fd3b4c();
    if (lVar4 == 0x73) {
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x0001070c2264();
      if ((uVar5 & 1) != 0) goto LAB_1059a586c;
    }
    lVar4 = param_3;
    func_0x000107fd3b4c();
    if (lVar4 == 0x98) {
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x0001070c228c();
      if ((uVar5 & 1) != 0) goto LAB_1059a586c;
    }
    lVar4 = param_3;
    func_0x000107fd3b4c();
    if (lVar4 == 0x9a) {
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x0001070c22a0();
      if ((uVar5 & 1) != 0) goto LAB_1059a586c;
    }
    lVar4 = param_3;
    func_0x000107fd3b4c();
    if (lVar4 == 0xb1) {
      uVar6 = *(ulong *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      if ((uVar5 & 1) != 0) goto LAB_1059a586c;
    }
    lVar4 = param_3;
    func_0x000107fd3b4c();
    if (lVar4 == 0xb0) {
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x0001070c22b4();
      if ((uVar5 & 1) != 0) goto LAB_1059a586c;
    }
  }
  else {
    puVar2 = PTR_PTR_1126b1370;
    _objc_alloc();
    func_0x00010c05c980();
    puVar3 = puVar2;
    func_0x00010c07cda0();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) goto LAB_1059a57a8;
  }
  uVar7 = 0;
LAB_1059a5878:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1059a58a0; end: 1059a58cf; -[SCNonMessagingNotificationsBadgeCountProvider _setFeatureScreenAccessedSet:] */

void FUN_1059a58a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059a58d0; end: 1059a595f; -[SCNonMessagingNotificationsBadgeCountProvider .cxx_destruct] */

void FUN_1059a58d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1059a5960; end: 1059a5f53;  */

undefined * FUN_1059a5960(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined **ppuVar40;
  undefined **ppuVar41;
  undefined *puVar42;
  ulong uVar43;
  long lVar44;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x17);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar3 = 5;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1370;
  puStack_d0 = puVar4;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar6 = 5;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b1370;
  puStack_c8 = puVar42;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar8 = 0xd;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 2;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b1370;
  puStack_c0 = puVar10;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar12 = 5;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b1370;
  puStack_b8 = puVar13;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar15 = 5;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b1370;
  puStack_b0 = puVar16;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar18 = 0xd;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 2;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b1370;
  puStack_a8 = puVar20;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar22 = 2;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b1370;
  puStack_a0 = puVar23;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar25 = 2;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126b1370;
  puStack_98 = puVar26;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar28 = 0x13;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126b1370;
  puStack_90 = puVar29;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar31 = 0x13;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126b1370;
  puStack_88 = puVar32;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar34 = 0x13;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126b1370;
  puStack_80 = puVar35;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar37 = 0x13;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar41 = &puStack_d0;
  puVar39 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar38;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c1868;
  puRam00000001136c1868 = puVar39;
  _objc_release(uVar1);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar42);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    puVar4 = PTR_PTR_1126c0918;
    _objc_retain(ppuVar41);
    _objc_opt_new(puVar4);
    func_0x00010c1c3260();
    func_0x00010c1e8440(puVar4);
    func_0x00010c1e8460(puVar4);
    puVar42 = PTR_PTR_1126af7d0;
    _objc_opt_new(PTR_PTR_1126af7d0);
    puVar10 = puVar4;
    func_0x00010bf63640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar42);
    _objc_release(puVar10);
    _objc_release(puVar4);
    ppuVar40 = ppuVar41;
    func_0x00010c1195e0(ppuVar41);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar41);
    ppuVar41 = ppuVar40;
    func_0x00010c296d80(ppuVar40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar40);
    _objc_release(puVar42);
    puVar4 = PTR_PTR_1126c0918;
    _objc_alloc();
    func_0x00010c008360();
    _objc_release(ppuVar41);
    puVar42 = puVar4;
    func_0x00010c0c22e0();
    if ((int)puVar42 < 1) {
      uVar43 = 0x1e;
    }
    else {
      puVar42 = puVar4;
      func_0x00010c0c22e0();
      uVar43 = (ulong)(int)puVar42;
    }
    puVar42 = puVar4;
    func_0x00010c122420();
    if (0 < (int)puVar42) {
      func_0x00010c122420();
    }
    puVar42 = puVar4;
    func_0x00010c122460();
    if ((int)puVar42 < 1) {
      lVar44 = 6;
    }
    else {
      puVar42 = puVar4;
      func_0x00010c122460(puVar4);
      lVar44 = (long)(int)puVar42;
    }
    if (uVar43 < param_2) {
      puVar42 = (undefined *)0x1;
    }
    else {
      puVar42 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar42 != (undefined *)0x0) {
        func_0x00010c26f320(puVar42);
      }
      _objc_release(puVar42);
      puVar42 = puVar2;
      func_0x00010bfaea20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar42;
      func_0x00010bf529e0();
      _objc_release(puVar42);
      puVar42 = (undefined *)(ulong)(lVar44 < (long)puVar10);
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
    return puVar42;
  }
  return puVar2;
}



/* Entry: 1059a5f54; end: 1059a61cf;  */

bool FUN_1059a5f54(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c0918;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c3260();
  func_0x00010c1e8440(puVar1);
  func_0x00010c1e8460(puVar1);
  puVar2 = PTR_PTR_1126af7d0;
  _objc_opt_new(PTR_PTR_1126af7d0);
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010c1195e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c296d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126c0918;
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(uVar5);
  puVar2 = puVar1;
  func_0x00010c0c22e0();
  if ((int)puVar2 < 1) {
    uVar9 = 0x1e;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0c22e0();
    uVar9 = (ulong)(int)puVar2;
  }
  puVar2 = puVar1;
  func_0x00010c122420();
  if (0 < (int)puVar2) {
    func_0x00010c122420();
  }
  puVar2 = puVar1;
  func_0x00010c122460();
  if ((int)puVar2 < 1) {
    lVar10 = 6;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c122460(puVar1);
    lVar10 = (long)(int)puVar2;
  }
  if (uVar9 < param_2) {
    bVar8 = true;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c26f320(puVar2);
    }
    _objc_release(puVar2);
    lVar6 = param_1;
    func_0x00010bfaea20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    bVar8 = lVar10 < lVar7;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  return bVar8;
}



/* Entry: 1059a61d0; end: 1059a621b;  */

bool FUN_1059a61d0(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  
  func_0x00010bfebe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  dVar1 = *(double *)(param_2 + 0x20);
  _objc_release(param_3);
  return dVar1 < param_1;
}



/* Entry: 1059a621c; end: 1059a6393; -[SCNotificationAppOpenLogger initWithAppOpenBadgeCountObservable:blizzardLogger:notificationOSSettingsRetriever:] */

undefined8 *
FUN_1059a621c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb218;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a6394; end: 1059a63db;  */

void FUN_1059a6394(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25b60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a63dc; end: 1059a64cf; -[SCNotificationAppOpenLogger _handleAppOpenBadgeCount:] */

void FUN_1059a63dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c13ecc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a64d0; end: 1059a6523;  */

void FUN_1059a64d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a6524; end: 1059a65ef; -[SCNotificationAppOpenLogger _logEventWithBadgeCount:authorizationStatus:] */

void FUN_1059a6524(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c0920;
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  uVar4 = param_3;
  func_0x00010c0b4fe0(param_3);
  _objc_release(param_3);
  func_0x00010c16eb80(puVar2,param_2,uVar4);
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_4;
    func_0x00010bf15440(param_4);
    bVar1 = lVar3 == 2;
  }
  func_0x00010c16ebc0(puVar2,param_2,bVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059a65f0; end: 1059a662b; -[SCNotificationAppOpenLogger .cxx_destruct] */

void FUN_1059a65f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a662c; end: 1059a68fb; -[SCNotificationBadgeCountObservableRepository initWithFriendsFeedObservable:incomingFriends:snapchattersDataFetcher:applicationLifecycleEvents:notificationScreenAccessor:circumstanceEngine:] */

undefined8 *
FUN_1059a662c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126eb220;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = param_4;
    func_0x00010c282e00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bdeb300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0928;
    _objc_alloc();
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0dc940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3b20();
    uVar8 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar7 = puVar5;
    func_0x00010bf870a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[4];
    func_0x00010bf151c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[6];
    puVar1[6] = uVar6;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a68fc; end: 1059a69bb;  */

void FUN_1059a68fc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c2827c0(param_2);
  lVar2 = param_3;
  func_0x00010c2827c0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_numberWithUnsignedInteger__112615828,lVar2 + param_2);
  return;
}



/* Entry: 1059a69bc; end: 1059a6b37; -[SCNotificationBadgeCountObservableRepository _createBadgeableFriendRequestsObservable:snapchattersDataFetcher:performerQueue:observableLifecycle:] */

void FUN_1059a69bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae820;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c0d9840();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1059a6b38;
  puStack_78 = &UNK_1108c9898;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = uVar4;
  _objc_retain(puVar2);
  puStack_58 = puVar2;
  _objc_retain(uVar4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c25ff60(param_3,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf1a3e0(uVar3,param_2,param_6);
  _objc_release(param_6);
  _objc_release(uVar3);
  puVar1 = puStack_58;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059a6b38; end: 1059a6c33;  */

void FUN_1059a6b38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010bf00220(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 1059a6c34; end: 1059a6ce7;  */

/* WARNING: Possible PIC construction at 0x0001059a6cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001059a6cd4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1059a6c34(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d42e0(uVar3);
  uVar1 = param_2;
  FUN_1059a5f54(param_2,uVar3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0df840(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2080;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_next__112614028,ppuVar2);
  return;
}



/* Entry: 1059a6ce8; end: 1059a6cef; -[SCNotificationBadgeCountObservableRepository badgeCountObservable] */

undefined8 FUN_1059a6ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1059a6cf0; end: 1059a6d4f; -[SCNotificationBadgeCountObservableRepository .cxx_destruct] */

void FUN_1059a6cf0(long param_1)

{
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



/* Entry: 1059a6d50; end: 1059a709b; -[SCNotificationBadgeUpdater initWithApplication:userSessionContext:asyncQueueProvider:applicationLifecycleEvents:messagingExperimentService:appOpenBadgeCountBehaviorSubject:] */

undefined8 *
FUN_1059a6d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126eb228;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[8];
    puVar2[8] = param_7;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1059a709c;
    puStack_98 = &UNK_1108b3e98;
    _objc_retain(param_5);
    uStack_90 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[6];
    puVar2[6] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[9];
    puVar2[9] = param_8;
    _objc_release(uVar3);
    _objc_initWeak(auStack_b8,puVar2);
    uVar3 = param_6;
    func_0x00010bf75dc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1059a70f0;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar5 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010c2a6420(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_b8);
    uVar5 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c07c8c0();
    if ((int)uVar3 != 0) {
      uVar5 = puVar2[8];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf8f680();
      _objc_release(uVar5);
      if ((int)uVar3 != 0) {
        func_0x00010be694c0(puVar2);
      }
    }
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1059a709c; end: 1059a7157;  */

void FUN_1059a709c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059a7158; end: 1059a72eb; -[SCNotificationBadgeUpdater startMonitoringItemsUpdates:] */

void FUN_1059a7158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  if (lRam00000001136c1880 != -1) {
    func_0x00010002a2fc(0x1136c1880,&PTR___NSConcreteGlobalBlock_1108c98e8);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if ((bRam00000001136c1878 & 1) == 0) {
    puVar2 = auStack_68;
    _objc_copyWeak(puVar2,auStack_38);
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1059a72ec;
    puStack_48 = &UNK_110842a38;
    puVar2 = auStack_40;
    _objc_copyWeak(puVar2,auStack_38);
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  _objc_release(uVar1);
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a72ec; end: 1059a7333;  */

void FUN_1059a72ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3d20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a7334; end: 1059a7407;  */

void FUN_1059a7334(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010bed3d40(), (uVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1059a7408; end: 1059a7413;  */

void FUN_1059a7408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateBadgeNumber__1125928f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059a7414; end: 1059a743f; -[SCNotificationBadgeUpdater stopMonitoringItemUpdates] */

void FUN_1059a7414(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c1698d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setApplicationIconBadgeNumber__112638050,0);
  return;
}



/* Entry: 1059a7440; end: 1059a74d7; -[SCNotificationBadgeUpdater _updateBadgeNumberNoXPC:] */

bool FUN_1059a7440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0(param_3);
    func_0x00010c16eba0(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return iVar1 != 0;
}



/* Entry: 1059a74d8; end: 1059a74db;  */

void FUN_1059a74d8(void)

{
  return;
}



/* Entry: 1059a74dc; end: 1059a7597; -[SCNotificationBadgeUpdater _updateBadgeNumber:] */

void FUN_1059a74dc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf07900(uVar2);
    func_0x00010c0df780(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar1 = *(ulong *)(param_1 + 0x28);
  }
  func_0x00010c071f40(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010c067fc0();
    if (lVar4 == 0) {
      lVar4 = -1;
    }
    else {
      lVar4 = param_3;
      func_0x00010c067fc0(param_3);
    }
    func_0x00010c1698c0(*(undefined8 *)(param_1 + 8),param_2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a7598; end: 1059a75a7; -[SCNotificationBadgeUpdater _onBackground] */

void FUN_1059a7598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059a75a8; end: 1059a766b; -[SCNotificationBadgeUpdater _onForeground] */

void FUN_1059a75a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f680();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar2);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059a766c; end: 1059a76cf;  */

void FUN_1059a766c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf07900(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_next__112614028,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  return;
}



/* Entry: 1059a76d0; end: 1059a77b3; -[SCNotificationBadgeUpdater .cxx_destruct] */

void FUN_1059a76d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1059a77b4; end: 1059a797f; -[SCNotificationBestFriendsSoundRepository initWithUserId:featureSettingsService:snapchattersDataFetcher:snapchattersDataTracker:userScopedAppGroupUserDefaults:] */

undefined1 *
FUN_1059a77b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eb230;
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
    puVar3 = PTR_PTR_1126bd770;
    _objc_alloc();
    func_0x00010c05cd80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    func_0x00010be0f720(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059a7980; end: 1059a79db; -[SCNotificationBestFriendsSoundRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1059a7980(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1059a79dc;
    puStack_20 = &UNK_110842e18;
    uStack_18 = param_1;
    func_0x00010c0bc6e0(param_3,param_2,&puStack_38);
  }
  return;
}



/* Entry: 1059a79dc; end: 1059a7a87;  */

void FUN_1059a79dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059a7a88; end: 1059a7ab3;  */

void FUN_1059a7a88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be135e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a7ab4; end: 1059a7ab7; -[SCNotificationBestFriendsSoundRepository didStartSnapchattersUpdateDataRequest:] */

void FUN_1059a7ab4(void)

{
  return;
}



/* Entry: 1059a7ab8; end: 1059a7bb3; -[SCNotificationBestFriendsSoundRepository didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_1059a7ab8(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bf0a6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a7bb4; end: 1059a7bdf;  */

void FUN_1059a7bb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be135e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a7be0; end: 1059a7c87; -[SCNotificationBestFriendsSoundRepository _fetchAndPersistDataWithPerformer] */

void FUN_1059a7be0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059a7c88; end: 1059a7cb3;  */

void FUN_1059a7c88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a7cb4; end: 1059a7cd7; -[SCNotificationBestFriendsSoundRepository _fetchAndPersistData] */

void FUN_1059a7cb4(undefined8 param_1)

{
  func_0x00010be135e0();
                    /* WARNING: Could not recover jumptable at 0x00010be0f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchAndObserveSettingsIfNecess_112561738);
  return;
}



/* Entry: 1059a7cd8; end: 1059a7dc7; -[SCNotificationBestFriendsSoundRepository _fetchRankedBestFriendSnapchatters] */

void FUN_1059a7cd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c11f720(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1059a7dc8; end: 1059a7e17;  */

void FUN_1059a7dc8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a7e18; end: 1059a8007; -[SCNotificationBestFriendsSoundRepository _handleSnapchatterFetchCompletionWithSnapchatters:] */

void FUN_1059a7e18(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar4 = uVar7;
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar4);
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11f740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar6 = puVar5;
  func_0x00010c072060();
  _objc_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010c1e70a0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1e70c0(*(undefined8 *)(param_1 + 0x40));
  }
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1059a8008;
  if (*(long *)(lVar3 + 0x38) == 0) {
    puStack_150 = puVar1;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010be66d00();
    _objc_initWeak(auStack_158,lVar3);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    _objc_copyWeak(auStack_160,auStack_158);
    func_0x00010c0f7fc0(uVar4);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
  }
  return;
}



/* Entry: 1059a8008; end: 1059a80bb; -[SCNotificationBestFriendsSoundRepository _fetchAndObserveSettingsIfNecessary] */

void FUN_1059a8008(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00010be66d00();
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1059a80bc; end: 1059a80fb;  */

void FUN_1059a80bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dbd00(uVar1);
    func_0x00010bedfc20(param_1,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a80fc; end: 1059a82c3; -[SCNotificationBestFriendsSoundRepository _observeSettingsChanges] */

void FUN_1059a80fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puVar7 = auStack_68;
  _objc_copyWeak(auStack_70);
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar7);
  puVar6 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined1 *)0x0) {
    puVar5 = puVar5 + 0x28;
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar7;
    func_0x00010c0e00e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010bedfc20(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}


