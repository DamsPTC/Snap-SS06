/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100503f30; end: 100504077; -[SCUserPropertiesObservableContext initWithKeysToObserve:queue:changeHandler:docObjectContext:userPropertiesDocRepository:] */

undefined1 *
FUN_100503f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126ecaa0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c3c01c(puVar1);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100504078; end: 100504553; -[SCUserPropertiesObservableContext _observeKeys:queue:changeHandler:] */

undefined *
FUN_100504078(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined1 uStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **appuStack_f8 [9];
  long lStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar3 = param_3;
  func_0x000107c3db80();
  func_0x000107c61180();
  puVar4 = puVar3;
  FUN_100504554();
  func_0x000107c61170(puVar3);
  puVar3 = param_3;
  func_0x000107c3db80();
  func_0x000107c61180();
  puVar5 = puVar3;
  FUN_10050471c();
  func_0x000107c61170(puVar3);
  lVar18 = *(long *)(param_1 + 8);
  func_0x000107c61158(PTR_PTR_1126c3858);
  if (lVar18 == 0) {
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_180,lVar18);
  }
  puVar6 = &uStack_181;
  FUN_1004fd544(puVar6);
  func_0x000107c61174(puVar4);
  lStack_198 = 0;
  uStack_190 = 0;
  lStack_1a0 = 0;
  puVar3 = puVar4;
  func_0x000107c40808(puVar4);
  FUN_10050496c(&lStack_1a0,puVar3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  lStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  func_0x000107c61174(puVar4);
  puVar3 = puVar4;
  func_0x000107c4080c();
  if (puVar3 != (undefined *)0x0) {
    lVar18 = *plStack_130;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar18) {
          func_0x000107c61128(puVar4);
        }
        uVar19 = *(ulong *)(lStack_138 + (long)puVar17 * 8);
        func_0x000107c61174(uVar19);
        func_0x000107c61174(uVar19);
        uVar7 = uVar19;
        func_0x000107c5d38c();
        func_0x000107c61170(uVar19);
        uStack_148 = uVar7;
        func_0x0001005049f8(&lStack_1a0,&uStack_148);
        func_0x000107c61170(uVar19);
        puVar17 = puVar17 + 1;
      } while (puVar3 != puVar17);
      puVar3 = puVar4;
      func_0x000107c4080c();
    } while (puVar3 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  FUN_100504ab8(appuStack_f8,0xc,puVar6,&lStack_1a0);
  lStack_140 = 0;
  lStack_138 = 0;
  plStack_130 = (long *)0x0;
  uStack_148 = uStack_148 & 0xffffffff00000000;
  puVar8 = &uStack_180;
  FUN_1000e77a0(puVar8,appuStack_f8,&lStack_140,&uStack_148);
  func_0x000107c61180();
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    func_0x000107c60e14();
  }
  plVar2 = plStack_90;
  appuStack_f8[0] = &PTR_DAT_110864b38;
  plStack_90 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    func_0x000107c60e14();
  }
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_158);
  func_0x000107c61170(uStack_168);
  func_0x000107c61170(uStack_170);
  puVar9 = puVar8;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  ppuVar13 = &PTR___NSConcreteGlobalBlock_1108e29e8;
  puVar10 = puVar9;
  FUN_10050471c();
  puVar11 = puVar10;
  func_0x000107c4d2d4();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar11;
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar5);
  func_0x000107c4da54();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  puVar3 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar13;
  func_0x000107c61174();
  func_0x000107c61174(ppuVar13);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (ppuVar13 != (undefined **)0x0) {
    func_0x000107c61174(puVar3);
    puVar5 = puVar3;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(puVar3);
        }
        ppuVar14 = *(undefined ***)((long)puVar17 * 8);
        ppuVar12 = ppuVar13;
        (*(code *)ppuVar13[2])(ppuVar13,ppuVar14);
        func_0x000107c61180();
        if (ppuVar12 != (undefined **)0x0) {
          func_0x000107c3d798(puVar4);
        }
        func_0x000107c61170(ppuVar12);
        puVar17 = puVar17 + 1;
      } while (puVar5 != puVar17);
      puVar5 = puVar3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(ppuVar13);
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return puVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61174(ppuVar14);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a77c(ppuVar14);
  func_0x000107c4d974(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 100504554; end: 1005046af;  */

undefined * FUN_100504554(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_2 != 0) {
    func_0x000107c61174(param_1);
    lVar3 = param_1;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_1);
        }
        lVar5 = *(long *)(lVar7 * 8);
        lVar4 = param_2;
        (**(code **)(param_2 + 0x10))(param_2,lVar5);
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c3d798(puVar2);
        }
        func_0x000107c61170(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_1;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61174(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a77c(lVar5);
  func_0x000107c4d974(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1005046b0; end: 10050471b;  */

void FUN_1005046b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a77c(param_2);
  func_0x000107c4d974(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10050471c; end: 1005048d7;  */

undefined * FUN_10050471c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61174(param_1);
    lVar3 = param_1;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_1);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar4 = param_2;
        (**(code **)(param_2 + 0x10))(param_2,lVar7);
        func_0x000107c61180();
        lVar5 = param_3;
        (**(code **)(param_3 + 0x10))(param_3,lVar7);
        func_0x000107c61180();
        if (lVar4 != 0 && lVar5 != 0) {
          func_0x000107c56bd8(puVar2);
        }
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_1;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61174(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a77c(lVar7);
  func_0x000107c4d974(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1005048d8; end: 100504943;  */

void FUN_1005048d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a77c(param_2);
  func_0x000107c4d974(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100504944; end: 10050496b;  */

void FUN_100504944(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10050496c; end: 100504ab7;  */

/* WARNING: Possible PIC construction at 0x000100504a9c: Changing call to branch */

ulong * FUN_10050496c(ulong *param_1,undefined8 *param_2,ulong param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar4 = param_1 + 2;
  uVar6 = *param_1;
  if ((undefined8 *)((long)(*puVar4 - uVar6) >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000105078430();
      puVar5 = puVar4 + 2;
      puVar9 = (undefined8 *)puVar4[1];
      if (puVar9 < (undefined8 *)*puVar5) {
        puVar11 = puVar9 + 1;
        *puVar9 = *param_2;
      }
      else {
        lVar10 = (long)puVar9 - *puVar4;
        uVar6 = (lVar10 >> 3) + 1;
        if (uVar6 >> 0x3d != 0) {
          func_0x000105078430();
          uVar2 = *(undefined2 *)(param_3 + 0x19);
          uVar1 = *(undefined1 *)(param_3 + 0x1b);
          *(int *)(puVar5 + 1) = (int)param_2;
          *(undefined1 *)(puVar5 + 3) = 0;
          *(undefined2 *)((long)puVar5 + 0x19) = uVar2;
          *(undefined1 *)((long)puVar5 + 0x1b) = uVar1;
          *puVar5 = (ulong)&PTR_DAT_110864b38;
          puVar5[7] = param_3;
          puVar5[9] = 0;
          puVar5[8] = 0;
          puVar5[0xb] = 0;
          puVar5[10] = 0;
          FUN_10048aee0(puVar5 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          return puVar5;
        }
        uVar7 = (long)*puVar5 - *puVar4;
        uVar8 = (long)uVar7 >> 2;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar8 = 0x1fffffffffffffff;
        }
        FUN_10048ac4c();
        puVar9 = (undefined8 *)((long)puVar5 + lVar10);
        uVar6 = (long)puVar9 - (puVar4[1] - *puVar4);
        puVar11 = puVar9 + 1;
        *puVar9 = *param_2;
        func_0x000107c610b4(uVar6);
        puVar3 = (ulong *)*puVar4;
        *puVar4 = uVar6;
        puVar4[1] = (ulong)puVar11;
        puVar4[2] = (ulong)(puVar5 + uVar8);
        puVar5 = (ulong *)0x0;
        if (puVar3 != (ulong *)0x0) goto code_r0x000107c60e14;
      }
      puVar4[1] = (ulong)puVar11;
      return puVar5;
    }
    uVar8 = param_1[1];
    FUN_10048ac4c();
    uVar6 = (long)puVar4 + (uVar8 - uVar6);
    uVar8 = uVar6 - (param_1[1] - *param_1);
    func_0x000107c610b4(uVar8);
    puVar3 = (ulong *)*param_1;
    *param_1 = uVar8;
    param_1[1] = uVar6;
    param_1[2] = (ulong)(puVar4 + (long)param_2);
    puVar4 = (ulong *)0x0;
    if (puVar3 != (ulong *)0x0) {
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return puVar3;
    }
  }
  return puVar4;
}



/* Entry: 100504ab8; end: 100504b27;  */

undefined8 * FUN_100504ab8(undefined8 *param_1,undefined4 param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)(param_3 + 0x19);
  uVar1 = *(undefined1 *)(param_3 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110864b38;
  param_1[7] = param_3;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_10048aee0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 100504b28; end: 100504bbf;  */

undefined8 * FUN_100504b28(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

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
  *param_1 = &PTR_DAT_110864b38;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_10048aee0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
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



/* Entry: 100504bc0; end: 100504c2b;  */

void FUN_100504bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a77c(param_2);
  func_0x000107c4d978(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100504c2c; end: 100504c3b; -[SCUserProperties itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100504c2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273316c);
}



/* Entry: 100504c3c; end: 100504c63;  */

void FUN_100504c3c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100504c64; end: 100504c6b; -[SCPreloadController setDataSaverExpirationMillis:] */

void FUN_100504c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 100504c6c; end: 100504c7b; -[SCFeatureSettingsService travelModeEnabled] */

void FUN_100504c6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f5f358,0);
  return;
}



/* Entry: 100504c7c; end: 100504cc3; -[SCFeatureSettingsService _boolForFeatureSetting:defaultValue:] */

long FUN_100504c7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5dc18();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c3ebcc(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 100504cc4; end: 100504cd3; -[SCUserProperties valBool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100504cc4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112733180);
}



/* Entry: 100504cd4; end: 100504d77; -[SCPreloadController _updatePreloadMode] */

void FUN_100504cd4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = param_1;
  func_0x000107c5cf80();
  if ((int)lVar1 != 0) {
    func_0x000107c4a65c();
  }
  func_0x000107c576cc(param_1);
  if (lVar3 != *(long *)(param_1 + 0x18)) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d664(uVar4);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0acb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logPreloadMode_112608cd0);
  return;
}



/* Entry: 100504d78; end: 100504db3; -[SCPreloadController setPreloadMode:] */

void FUN_100504d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100504db4; end: 100504db7; -[SCPreloadController logPreloadMode] */

void FUN_100504db4(void)

{
  return;
}



/* Entry: 100504db8; end: 100504dbf; -[SCPreloadController queuePerformer] */

undefined8 FUN_100504db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100504dc0; end: 100505123; -[SCFeatureSettingsUserPropertiesService observeKeys:queue:changeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_100504dc0(code *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  func_0x000107c61174(param_3);
  lVar4 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      lVar5 = *(long *)(lVar14 * 8);
      func_0x000107c3ff54();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c4aa28();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c4adac();
      if (lVar7 != 0) {
        lVar7 = lVar6;
        func_0x000107c5c170(lVar6);
        func_0x000107c61180();
        lVar8 = lVar7;
        func_0x000107c60b08();
        func_0x000107c61170(lVar7);
        pcVar9 = param_1;
        func_0x000107c61164(param_1,lVar8);
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = param_1;
          func_0x000107c4ce60();
          pcVar10 = param_1;
          (*pcVar9)(param_1,lVar8);
          func_0x000107c61180();
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
          pcVar9 = pcVar10;
          func_0x000107c6115c(pcVar10,puVar11);
          if ((((ulong)pcVar9 & 1) != 0) &&
             (pcVar9 = param_1, func_0x000107c3bbdc(), (int)pcVar9 != -0x4524111)) {
            puVar11 = PTR_PTR_1126b8720;
            func_0x000107c610f4(PTR_PTR_1126b8720);
            func_0x000107c46fd0();
            func_0x000107c3d798(puVar2);
            puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c61180();
            func_0x000107c56bd8(puVar3);
            func_0x000107c61170(puVar12);
            func_0x000107c61170(puVar11);
          }
          func_0x000107c61170(pcVar10);
        }
      }
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      lVar14 = lVar14 + 1;
    } while (lVar4 != lVar14);
    lVar4 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  ppuVar15 = *(undefined ***)(param_1 + _DAT_112722cac);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(param_5);
  func_0x000107c4da68(ppuVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
    return ppuVar15;
  }
  func_0x000107c60e78();
  return &PTR____CFConstantStringClassReference_110f5f378;
}



/* Entry: 100505124; end: 10050512f; -[SCFeatureSettingsService dataSaverExpirationMillisServerParam] */

undefined ** FUN_100505124(void)

{
  return &PTR____CFConstantStringClassReference_110f5f378;
}



/* Entry: 100505130; end: 10050518f; -[SCUserPropertiesKey hash] */

ulong * FUN_100505130(long param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(ulong *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c44c3c();
  puVar2 = &uStack_28;
  uVar4 = 2;
  uStack_20 = uVar1;
  FUN_100505190();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar3 = (ulong *)*puVar2;
  if (1 < (int)uVar4) {
    lVar5 = (ulong)uVar4 - 1;
    do {
      puVar2 = puVar2 + 1;
      uVar6 = *puVar2 | (long)puVar3 << 0x20;
      uVar6 = ~uVar6 + uVar6 * 0x40000;
      uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
      uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
      puVar3 = (ulong *)(uVar6 ^ uVar6 >> 0x16);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar3;
}



/* Entry: 100505190; end: 1005051df;  */

ulong FUN_100505190(ulong *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if (1 < (int)param_2) {
    lVar2 = (ulong)param_2 - 1;
    do {
      param_1 = param_1 + 1;
      uVar1 = *param_1 | uVar1 << 0x20;
      uVar1 = ~uVar1 + uVar1 * 0x40000;
      uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
      uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
      uVar1 = uVar1 ^ uVar1 >> 0x16;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return uVar1;
}



/* Entry: 1005051e0; end: 1005051eb; -[SCFeatureSettingsService travelModeEnabledServerParam] */

undefined ** FUN_1005051e0(void)

{
  return &PTR____CFConstantStringClassReference_110f5f358;
}



/* Entry: 1005051ec; end: 10050525b; -[_TtC20SCMapBitmojiServices20SCMapBitmojiServices initWithBitmojiAvatarGenerator:use3DActionmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005051ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113072c10) = param_3;
  *(undefined1 *)(param_1 + _DAT_113072c18) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10050525c; end: 100505287;  */

void FUN_10050525c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100505288; end: 10050528f;  */

void FUN_100505288(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100505290; end: 1005052e3;  */

void FUN_100505290(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005052e4; end: 1005052ef;  */

void FUN_1005052e4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10020cf68();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8420;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005052f0; end: 1005055b3;  */

void FUN_1005052f0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10020cf68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8420;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1005055b4; end: 1005056a7; -[SCLegacyMapNetworkingServiceProvider provide] */

void FUN_1005055b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cac68;
  func_0x000107c610f4(PTR_PTR_1126cac68);
  func_0x000107c45da4();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005056a8; end: 1005057cb; -[SCLegacyMapNetworkingServices initWithCheckinMapSnapTokenService:exploreMapSnapTokenService:friendsFinderMapSnapTokenService:mapSnapTokenServiceFSNProxy:placesMapSnapTokenService:] */

undefined1 *
FUN_1005056a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112701f00;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005057cc; end: 100505807;  */

void FUN_1005057cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100505808; end: 1005058eb; -[SCMapStatusServiceProvider provide] */

void FUN_100505808(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c5da8;
  func_0x000107c610f4(PTR_PTR_1126c5da8);
  func_0x000107c475dc();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005058ec; end: 100505943; -[_TtC19SCMapStatusServices19SCMapStatusServices initWithMapStatusService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005058ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113072718) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100505944; end: 1005059b7;  */

void FUN_100505944(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005059b8; end: 100505a9b; -[SCMapPersonLocationServiceProvider provide] */

void FUN_1005059b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bf140;
  func_0x000107c610f4(PTR_PTR_1126bf140);
  func_0x000107c475c8();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100505a9c; end: 100505b0f; -[SCMapPersonLocationServices initWithMapPersonLocationsProvider:] */

undefined1 * FUN_100505a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701158;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100505b10; end: 100505b83;  */

void FUN_100505b10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100505b84; end: 100505b8b;  */

void FUN_100505b84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_50 = &UNK_102206a04;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10220699c;
  puStack_58 = &UNK_1104e40f0;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126aa258;
  func_0x000107c610f8();
  func_0x000107c47d0c();
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 100505b8c; end: 100505c6f;  */

void FUN_100505b8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_50 = &UNK_102206a04;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10220699c;
  puStack_58 = &UNK_1104e40f0;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar2,param_3,ppuVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126aa258;
  func_0x000107c610f8();
  func_0x000107c47d0c();
  func_0x000107c61170(puVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 100505c70; end: 100505c83;  */

void FUN_100505c70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100505c84; end: 100505d4f; -[SCPageLauncherServices initWithPageLauncher:] */

undefined1 * FUN_100505c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f9c70;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100505d50; end: 100505d5f;  */

void FUN_100505d50(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 100505d60; end: 100505f3b;  */

/* WARNING: Possible PIC construction at 0x000100505da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100505e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100505e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100505eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100505e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100505eb4) */
/* WARNING: Removing unreachable block (ram,0x000100505e94) */
/* WARNING: Removing unreachable block (ram,0x000100505e74) */
/* WARNING: Removing unreachable block (ram,0x000100505dac) */
/* WARNING: Removing unreachable block (ram,0x000100505db8) */
/* WARNING: Removing unreachable block (ram,0x000100505e28) */
/* WARNING: Removing unreachable block (ram,0x000100505e38) */
/* WARNING: Removing unreachable block (ram,0x000100505e30) */
/* WARNING: Removing unreachable block (ram,0x000100505e40) */
/* WARNING: Removing unreachable block (ram,0x000100505e04) */

void FUN_100505d60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 2) {
    FUN_100505f9c(2);
    func_0x000107c61180();
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar2 + 0x68) == 0) {
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x30);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c61160();
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x70) = puVar1;
    }
    else {
      func_0x000107c4bb10(*(undefined8 *)(lVar2 + 0x30),param_2,lVar3);
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x90);
    func_0x000107c5c734(lVar3);
    func_0x000107c61180();
    func_0x000107c5bcb8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100505f3c; end: 100505f9b;  */

void FUN_100505f3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  FUN_1003f2924();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5bcac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100505f9c; end: 100505fd7;  */

void FUN_100505f9c(ulong param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 < 3) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_110891f70)[param_1];
    func_0x000107c61174(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 100505fd8; end: 1005060f3; -[SCMapNotificationServiceProvider provide] */

void FUN_100505fd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126cd7e8;
  func_0x000107c610f4(PTR_PTR_1126cd7e8);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c3bdbc(param_1);
  func_0x000107c61180();
  func_0x000107c474e8(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005060f4; end: 1005060fb; -[SCGhostToFeedGrapheneLogger configureWithSource:] */

void FUN_1005060f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1005060fc; end: 10050611b;  */

void FUN_1005060fc(long param_1)

{
  func_0x000107c5c734(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c611b0();
  return;
}



/* Entry: 10050611c; end: 10050615b;  */

void FUN_10050611c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c6fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10050615c; end: 1005064f7; -[SCLocationSharingServiceProvider _sharingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050615c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  
  uVar11 = param_1 + _DAT_11273a52c;
  uVar1 = uVar11;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4a0e0();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126c5e98;
    func_0x000107c610f4();
    lVar21 = (long)_DAT_11273a530;
    lVar6 = param_1 + lVar21;
    func_0x000107c61148(lVar6);
    lVar22 = lVar6;
    func_0x000107c42eac();
    func_0x000107c61180();
    lVar7 = param_1 + _DAT_11273a534;
    func_0x000107c61148(lVar7);
    lVar8 = lVar7;
    func_0x000107c3e944();
    func_0x000107c61180();
    func_0x000107c46890(puVar5,param_2,lVar22,lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(lVar6);
    puVar23 = PTR_PTR_1126c5ea0;
    func_0x000107c610f4();
    lVar22 = (long)_DAT_11273a538;
    lVar6 = param_1 + lVar22;
    func_0x000107c61148();
    lVar9 = lVar6;
    func_0x000107c41920();
    func_0x000107c61180();
    lVar10 = lVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar1 = uVar11;
    func_0x000107c61148();
    uVar2 = uVar1;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61148();
    uVar3 = uVar11;
    func_0x000107c4b8d8();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(param_1 + _DAT_11273a514);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar7 = param_1 + _DAT_11273a53c;
    func_0x000107c61148();
    lVar13 = lVar7;
    func_0x000107c52030();
    func_0x000107c61180();
    lVar22 = param_1 + lVar22;
    func_0x000107c61148();
    lVar14 = lVar22;
    func_0x000107c4b8d0();
    func_0x000107c61180();
    lVar15 = lVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar8 = param_1 + _DAT_11273a540;
    func_0x000107c61148();
    lVar16 = lVar8;
    func_0x000107c3de48();
    func_0x000107c61180();
    lVar17 = param_1 + _DAT_11273a544;
    func_0x000107c61148();
    lVar18 = lVar17;
    func_0x000107c5dc04();
    func_0x000107c61180();
    lVar19 = param_1 + _DAT_11273a548;
    func_0x000107c61148();
    lVar20 = lVar19;
    func_0x000107c3dfac();
    func_0x000107c61180();
    param_1 = param_1 + lVar21;
    func_0x000107c61148();
    lVar21 = param_1;
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c492a0(puVar23,param_2,puVar5,lVar10,uVar2,uVar4,uVar12,lVar13,lVar15,lVar16,lVar18
                        ,lVar20,lVar21);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar5);
  }
  else {
    puVar23 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1005064f8; end: 10050659f;  */

void FUN_1005064f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  lVar2 = param_1 + 0x30;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  lVar5 = lVar1;
  func_0x000107c3bdc0(lVar1,param_2,lVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1005065a0; end: 10050660f;  */

void FUN_1005065a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3c118(lVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100506610; end: 10050664f;  */

void FUN_100506610(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3ba3c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100506650; end: 1005067c3; -[SCUserLocationServicesEntryPoint _initializeLocationManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100506650(long param_1,undefined8 param_2)

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
  undefined *puVar10;
  
  puVar10 = PTR_PTR_1126bc3c0;
  lVar1 = param_1 + _DAT_112726b78;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112726b8c;
  func_0x000107c61148(lVar3);
  lVar4 = lVar3;
  func_0x000107c3e710();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112726b74;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_112726b80;
  func_0x000107c61148(lVar7);
  lVar8 = lVar7;
  func_0x000107c3fa04();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112726b90;
  func_0x000107c61148(param_1);
  lVar9 = param_1;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c5a9f4(puVar10,param_2,lVar2,lVar4,lVar6,lVar8,lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1005067c4; end: 1005067e3; -[_TtC24SCBatteryLoggingServices24SCBatteryLoggingServices batteryLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005067c4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_1130809c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005067e4; end: 100506a43; -[SCUserLocationServicesEntryPoint _permissionsManagerWithLocationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005067e4(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126bc3b8;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112726b6c;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112726b70;
  func_0x000107c61148();
  lVar6 = lVar5;
  func_0x000107c41920();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_112726b74;
  func_0x000107c61148();
  lVar9 = lVar8;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar10 = param_1 + _DAT_112726b78;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar12 = param_1 + _DAT_112726b7c;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar14 = param_1 + _DAT_112726b80;
  func_0x000107c61148();
  lVar15 = lVar14;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_112726b84;
  func_0x000107c61148();
  lVar17 = lVar16;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112726b88;
  func_0x000107c61148();
  lVar18 = param_1;
  func_0x000107c4c42c();
  func_0x000107c61180();
  func_0x000107c462d8(puVar1,param_2,lVar4,lVar7,lVar9,lVar11,lVar13,param_3,lVar15,lVar17,lVar18);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100506a44; end: 100506a53; -[_TtC23SCMapComplianceServices23SCMapComplianceServices mapUKUnder18ComplianceChecker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100506a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113039d88));
  return;
}



/* Entry: 100506a54; end: 100506d33; -[SCUserLocationPermissionsManager initWithCurrentUserId:devicePermissionsManager:lazyPreferences:applicationLifecycleEvents:userTrackedLogger:locationAuthorizationManager:circumstanceEngine:valdiRuntimeProvider:mapUKUnder18ComplianceChecker:] */

undefined8 *
FUN_100506a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126e9590;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bc358;
    func_0x000107c610fc();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    uVar4 = puVar1[3];
    func_0x000107c4e640();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar2 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar5 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100506d34; end: 100506da7; -[SCGraphenePermissionDialogMetric2 init] */

undefined1 * FUN_100506d34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e95c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100506da8; end: 100506dcf; -[SCDeviceLocationPermissionsManager permissionsUpdateObservable] */

void FUN_100506da8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100506dd0; end: 100506e87; -[SCUserLocationServicesEntryPoint _locationProviderWithPermissionsManager:locationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100506dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc3c8;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  param_1 = param_1 + _DAT_112726b90;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c492b0(puVar1,param_2,param_3,param_4,lVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100506e88; end: 10050709f; -[SCUserLocationProvider initWithUserLocationPermissionsManager:locationManager:appStartExperimentReader:] */

undefined8 *
FUN_100506e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e9598;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c3b68c(puVar1);
    func_0x000107c61144(auStack_58,puVar1);
    uVar5 = puVar1[5];
    func_0x000107c4e640();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar2 = uVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar6 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005070a0; end: 10050717b; -[SCUserLocationProvider _fetchAndStoreLocationPermissionsWithCompletion:] */

void FUN_1005070a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(param_3);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c43188(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10050717c; end: 10050718b; -[SCUserLocationPermissionsManager fetchLocationPermissionStatusWithCompletion:onQueue:] */

void FUN_10050717c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchLocationPermissionStatusWit_1125c7a30,2,param_3,param_4);
  return;
}



/* Entry: 10050718c; end: 1005072b3; -[SCUserLocationPermissionsManager fetchLocationPermissionStatusWithRequestType:completion:onQueue:] */

void FUN_10050718c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_5 == (undefined *)0x0) {
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    param_5 = puVar1;
  }
  func_0x000107c61144(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c43174(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1005072b4; end: 1005072c3; -[SCDeviceLocationPermissionsManager fetchLocationAuthorizationStatus:onQueue:] */

void FUN_1005072b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLocationAuthorizationStatus_1125c79f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfa8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchLocationAuthorizationStatus_1125c79f0);
  return;
}



/* Entry: 1005072c4; end: 10050731b; -[SCUserLocationPermissionsManager permissionsUpdateObservable] */

void FUN_1005072c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10050731c; end: 100507323; -[SCUserLocationProvider isNextGen] */

undefined8 FUN_10050731c(void)

{
  return 0;
}



/* Entry: 100507324; end: 1005073c7; -[SCLocationSharingUserInfoProvider initWithFeatureSettingsService:userBirthdayProvider:] */

undefined1 *
FUN_100507324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126edf98;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005073c8; end: 100507407;  */

void FUN_1005073c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc20();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100507408; end: 10050777b; -[SCLocationSharingServiceProvider _lazyValisPreferencesProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100507408(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  
  puVar1 = PTR_PTR_1126c5eb0;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11273a558;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11273a550;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_11273a544;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c5dc04();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_11273a54c;
  func_0x000107c61148();
  lVar9 = lVar8;
  func_0x000107c4c440();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11273a510);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar12 = param_1 + _DAT_11273a55c;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar14 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_11273a530;
  func_0x000107c61148();
  lVar16 = lVar15;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar30 = (long)_DAT_11273a560;
  lVar17 = param_1 + lVar30;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c5da68();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_11273a564;
  func_0x000107c61148();
  lVar20 = lVar19;
  func_0x000107c4c394();
  func_0x000107c61180();
  lVar21 = param_1 + _DAT_11273a52c;
  func_0x000107c61148();
  lVar22 = lVar21;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  lVar30 = param_1 + lVar30;
  func_0x000107c61148();
  lVar23 = lVar30;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar24 = lVar23;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar25 = param_1 + _DAT_11273a568;
  func_0x000107c61148();
  lVar26 = lVar25;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar27 = param_1 + _DAT_11273a548;
  func_0x000107c61148();
  lVar28 = lVar27;
  func_0x000107c3dfac();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11273a528;
  func_0x000107c61148();
  lVar29 = param_1;
  func_0x000107c4c42c();
  func_0x000107c61180();
  func_0x000107c492d8(puVar1,param_2,lVar3,lVar5,lVar7,lVar10,uVar11,lVar14,lVar16,lVar18,lVar20,
                      lVar22,lVar24,lVar26,lVar28,lVar29);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10050777c; end: 100507783; -[SCMapValisServices valisService] */

undefined8 FUN_10050777c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100507784; end: 10050778b; -[SCMapUserPreferencesServices mapUserPreferences] */

undefined8 FUN_100507784(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10050778c; end: 1005077cb;  */

void FUN_10050778c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bee0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005077cc; end: 10050785f; -[SCMapUserPreferencesServiceProvider _mapUserPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005077cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bf258;
  func_0x000107c610f4(PTR_PTR_1126bf258);
  param_1 = param_1 + _DAT_11272abc4;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c47fd4(puVar1,param_2,lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100507860; end: 10050793b; -[SCMapUserPreferencesImpl initWithPreferences:] */

undefined8 * FUN_100507860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126ea9a8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_48,puVar1);
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[3];
    puVar1[3] = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10050793c; end: 10050797b;  */

void FUN_10050793c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bfd0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10050797c; end: 100507b3b; -[SCLocationSharingServiceProvider _notificationPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050797c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c5e90;
  func_0x000107c610f4();
  lVar13 = (long)_DAT_11273a520;
  lVar2 = param_1 + lVar13;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar13 = param_1 + lVar13;
  func_0x000107c61148();
  lVar4 = lVar13;
  func_0x000107c45070();
  func_0x000107c61180();
  lVar14 = (long)_DAT_11273a524;
  lVar5 = param_1 + lVar14;
  func_0x000107c61148();
  lVar6 = lVar5;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar14 = param_1 + lVar14;
  func_0x000107c61148(lVar14);
  lVar8 = lVar14;
  func_0x000107c3de14();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar10 = param_1 + _DAT_11273a528;
  func_0x000107c61148(lVar10);
  lVar11 = lVar10;
  func_0x000107c4c42c();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c45994(puVar1,param_2,lVar3,lVar4,lVar7,lVar9,lVar12,
                      *(undefined8 *)(param_1 + _DAT_11273a514));
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100507b3c; end: 100507b43; -[SCNotificationsServices notificationProcessingManager] */

undefined8 FUN_100507b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100507b44; end: 100507c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100507b44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b7560;
    func_0x000107c610f4(PTR_PTR_1126b7560);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112721784);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    lVar2 = param_1 + _DAT_112721788;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c408d0();
    func_0x000107c61180();
    func_0x000107c456e4(puVar4,param_2,uVar1,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100507c0c; end: 100507eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100507c0c(long param_1,undefined8 param_2)

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
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_a0;
  
  puVar1 = PTR_PTR_1126b7558;
  func_0x000107c610f4();
  lVar2 = param_1 + 0x20;
  func_0x000107c61148();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_11272179c;
    func_0x000107c61148();
  }
  lVar4 = lVar3;
  func_0x000107c3ddb0();
  func_0x000107c61180();
  lVar5 = param_1 + 0x20;
  func_0x000107c61148();
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + _DAT_1127217a0;
    func_0x000107c61148();
  }
  lVar7 = lVar6;
  func_0x000107c3de00();
  func_0x000107c61180();
  lVar8 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar8 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = lVar8 + _DAT_112721798;
    func_0x000107c61148();
  }
  lVar9 = param_1 + 0x20;
  func_0x000107c61148();
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + _DAT_1127217a4;
    func_0x000107c61148();
  }
  lVar11 = lVar10;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar12 = param_1 + 0x20;
  func_0x000107c61148();
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + _DAT_1127217a8;
    func_0x000107c61148();
  }
  lVar14 = lVar13;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar15 = param_1 + 0x20;
  func_0x000107c61148();
  lVar16 = 0;
  if (lVar15 != 0) {
    lVar16 = lVar15 + _DAT_1127217ac;
    func_0x000107c61148();
  }
  lVar17 = lVar16;
  func_0x000107c5e12c();
  func_0x000107c61180();
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127217b0;
    func_0x000107c61148();
  }
  lVar18 = lVar19;
  func_0x000107c4d7f4();
  func_0x000107c61180();
  func_0x000107c48bdc(puVar1,param_2,lVar4,lVar7,uStack_a0,lVar11,lVar14,lVar17,lVar18);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100507eb0; end: 100507eb7; -[SCAppExtensionStorageServices appGroupUserDefaults] */

undefined8 FUN_100507eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100507eb8; end: 100507ebf; -[SCWatchDetectorServices watchDetector] */

undefined8 FUN_100507eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100507ec0; end: 100507ec7; -[SCNotificationPermissionServices notificationOSSettingsRetriever] */

undefined8 FUN_100507ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100507ec8; end: 100507feb; -[SCAppNotificationProvider initWithSystemScopedAppGroupUserDefaults:appLifeCycleManagerLazy:systemScope:circumstanceEngine:grapheneRegistry:watchDetector:notificationPermissionRetriever:] */

undefined8
FUN_100507ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7500;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c46be4();
  func_0x000107c61170(param_8);
  func_0x000107c48bd8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1,param_9);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100507fec; end: 100508077; -[SCIncomingNotificationReporter initWithGrapheneRegistry:watchDetector:] */

undefined8
FUN_100507fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5a9c4(puVar1);
  func_0x000107c61180();
  func_0x000107c46504(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100508078; end: 10050813b; -[SCIncomingNotificationReporter initWithDependencies:watchDetector:uiApplication:] */

undefined1 *
FUN_100508078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eb1e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10050813c; end: 1005084eb; -[SCAppNotificationProvider initWithSystemScopedAppGroupUserDefaults:appLifeCycleManagerLazy:systemScope:circumstanceEngine:grapheneRegistry:incomingReporter:notificationPermissionRetriever:] */

undefined8 *
FUN_10050813c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126e7888;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b7548;
    func_0x000107c610fc(PTR_PTR_1126b7548);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e178();
    func_0x000107c61180();
    uVar2 = puVar1[1];
    puVar1[1] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c3df5c();
    func_0x000107c61180();
    uVar7 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar7);
    uVar2 = param_5;
    func_0x000107c4d820();
    func_0x000107c61180();
    uVar7 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar7);
    pcVar5 = "com.snapchat.SCMainAppStateShareWithExtension";
    func_0x000107c60f50("com.snapchat.SCMainAppStateShareWithExtension",0);
    uVar2 = puVar1[10];
    puVar1[10] = pcVar5;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005084ec; end: 100508557; -[SCDuplicateNotificationProcessor init] */

undefined1 * FUN_1005084ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7880;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100508558; end: 100508567; -[_TtC13SCSystemScope13SCSystemScope application] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100508558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091b58));
  return;
}



/* Entry: 100508568; end: 100508577; -[_TtC13SCSystemScope13SCSystemScope notificationProcessingStepEventEmitter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100508568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bc8));
  return;
}



/* Entry: 100508578; end: 10050864f; -[SCNotificationProcessingManager initWithAppNotificationProvider:crashLogger:] */

undefined1 *
FUN_100508578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7890;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100508650; end: 100508663; -[SCNotificationsServices appNotificationProvider] */

undefined8 FUN_100508650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100508664; end: 1005088cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100508664(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c3e944();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  FUN_100083b20(&uStack_70);
  uVar4 = uStack_70;
  func_0x000107c4fd08();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  FUN_100083b20(&plStack_78);
  plVar5 = plStack_78;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170();
  plVar6 = plStack_78;
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_80);
  uVar7 = *(undefined8 *)(lStack_80 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  uVar8 = uVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  FUN_100083b20(&lStack_88);
  uVar9 = *(undefined8 *)(lStack_88 + _DAT_113091ae0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  uVar8 = uVar9;
  func_0x000107c49e24();
  func_0x000107c61170(uVar9);
  lVar10 = 0;
  FUN_1005088cc();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(undefined8 *)(lVar11 + _DAT_112dc2028) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112dc2030) = uVar4;
  *(long **)(lVar11 + _DAT_112dc2038) = plVar5;
  *(long **)(lVar11 + _DAT_112dc2040) = plVar6;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112dc2048);
  *puVar1 = uVar7;
  puVar1[1] = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_98 = lVar11;
  lStack_90 = lVar10;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(plVar5);
  func_0x000107c61174(plVar6);
  plVar12 = &lStack_98;
  func_0x000107c61154(plVar12,puVar2);
  plVar13 = plVar6;
  if ((int)uVar8 != 0) {
    plVar13 = plVar12;
    func_0x000107c61174(plVar12);
    func_0x0001016d7a30();
    func_0x000107c61170(plVar5);
    plVar5 = plVar6;
  }
  func_0x000107c61170(plVar5);
  func_0x000107c61170(plVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = (long)plVar12;
  return;
}



/* Entry: 1005088cc; end: 1005088eb;  */

void FUN_1005088cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e78b8);
  return;
}



/* Entry: 1005088ec; end: 1005088ef;  */

void FUN_1005088ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


