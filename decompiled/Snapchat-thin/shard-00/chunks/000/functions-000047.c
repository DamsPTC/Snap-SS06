/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10011c074; end: 10011c0f7;  */

undefined8 FUN_10011c074(void)

{
  undefined8 unaff_x21;
  
  func_0x00010011a8ac();
  FUN_10011a944();
  FUN_1001010e4();
  func_0x000107c61180();
  func_0x000107c43f34();
  func_0x000107c61180();
  FUN_10011b4b4();
  FUN_10011c84c(unaff_x21);
  FUN_10011485c();
  func_0x00010011b62c();
  return unaff_x21;
}



/* Entry: 10011c0f8; end: 10011c3b7; +[SCNetworkTrafficDataStatistic calculate] */

void FUN_10011c0f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)&plStack_d0;
  func_0x000107c61004();
  if (iVar1 == 0) {
    if (plStack_d0 == (long *)0x0) {
      plStack_d0 = (long *)0x0;
      uVar11 = 0;
      uVar12 = 0;
      uVar14 = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 0;
      plVar16 = plStack_d0;
      do {
        if (*(char *)(plVar16[3] + 1) == '\x12') {
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110dd60f8);
          func_0x000107c61180();
          puVar3 = puVar2;
          func_0x000107c44a40();
          if (((int)puVar3 != 0) && (lVar10 = plVar16[6], lVar10 != 0)) {
            uVar15 = (ulong)(uint)(*(int *)(lVar10 + 0x2c) + (int)uVar15);
            uVar14 = (ulong)(uint)(*(int *)(lVar10 + 0x28) + (int)uVar14);
          }
          puVar3 = puVar2;
          func_0x000107c44a40(puVar2,param_2,&PTR____CFConstantStringClassReference_110f9d0b8);
          if (((int)puVar3 != 0) && (lVar10 = plVar16[6], lVar10 != 0)) {
            uVar12 = (ulong)(uint)(*(int *)(lVar10 + 0x2c) + (int)uVar12);
            uVar11 = (ulong)(uint)(*(int *)(lVar10 + 0x28) + (int)uVar11);
          }
          func_0x000107c61170(puVar2);
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    func_0x000107c60fd8(plStack_d0);
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f9d038;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d970(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar15);
  func_0x000107c61180();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f9d058;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar2;
  func_0x000107c4d970(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
  func_0x000107c61180();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f9cff8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar3;
  func_0x000107c4d970(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar12);
  func_0x000107c61180();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f9d018;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar4;
  func_0x000107c4d970(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  func_0x000107c61180();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f9d078;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar5;
  func_0x000107c4d978(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar15 + uVar12);
  func_0x000107c61180();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f9d098;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar6;
  func_0x000107c4d978(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14 + uVar11);
  func_0x000107c61180();
  ppuVar9 = &puStack_98;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x000107c419ac();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x000107c61174(ppuVar9);
    ppuVar8 = ppuVar9;
    func_0x000107c5c64c();
    if (ppuVar8 == (undefined **)0xc) {
      puVar13 = *(undefined **)(puVar2 + 8);
      ppuVar8 = ppuVar9;
      FUN_100101430(ppuVar9);
      func_0x000107c61180();
      func_0x000107c3ebdc(puVar13,param_2,ppuVar8);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar8);
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    func_0x000107c61170(ppuVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10011c3b8; end: 10011c443; -[SCCircumstanceEngineConfigurationMashaller getBooleanValue:] */

void FUN_10011c3b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if (lVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    FUN_100101430(param_3);
    func_0x000107c61180();
    func_0x000107c3ebdc(uVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10011c444; end: 10011c597; -[SCCircumstanceEngineConfiguration boolValueForKey:] */

void FUN_10011c444(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5c64c();
  if (uVar1 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar1 = param_3;
    func_0x000107c4a8c4(param_3);
    func_0x000107c61180();
    func_0x000107c4baac(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dec58;
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar3);
    uVar4 = param_3;
    func_0x000107c6115c(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c3b834(param_1);
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000107c4a8c4(uVar1);
    func_0x000107c61180();
    uVar5 = uVar1;
    func_0x000107c42e88(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    lVar6 = param_1;
    func_0x000107c3ebd8(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
  }
  else {
    lVar6 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10011c598; end: 10011c61b; -[SCLazyCircumstanceEngineProxy boolValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10011c598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b5e8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3ebd8();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011c61c; end: 10011c697; -[SCCircumstanceEngine boolValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10011c61c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3ade8(param_1,param_2,param_3,4);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c3ebd8(uVar1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011c698; end: 10011c723; -[SCCircumstanceEngineConfigProvider boolValueForConfigKeySync:featureProvidedSignals:] */

void FUN_10011c698(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c3c078();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3ebcc(lVar1);
    func_0x000107c4d94c(puVar3,param_2,lVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10011c724; end: 10011c813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011c724(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10010cd00(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  uVar8 = *(uint *)(lVar11 + 0x18);
  lVar7 = *(long *)(param_1 + 0x40);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (param_3 == 0) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
    if ((param_3 & 1) == 0) goto LAB_10011c7a8;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (param_3 == 0) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
LAB_10011c7a8:
      bVar4 = (*(ushort *)(lVar11 + 0x1c) & 0x20) == 0;
      goto LAB_10011c7b4;
    }
    *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
  }
  bVar4 = true;
LAB_10011c7b4:
  uVar8 = *(uint *)(lVar11 + 0x14);
  if ((int)uVar8 < 0) {
    uVar9 = *(undefined4 *)(lVar11 + 0x10);
    if (!bVar4) {
      uVar9 = 0;
    }
    *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
  }
  else {
    uVar10 = (ulong)(uVar8 >> 5);
    uVar8 = 1 << (ulong)(uVar8 & 0x1f);
    if (bVar4) {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
    }
  }
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar12 = *(long *)(lVar7 + 8);
    bVar1 = *(byte *)(lVar12 + 0x1e);
    uVar2 = *(ushort *)(lVar12 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar7 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar7 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                    *(undefined4 *)(lVar12 + 0x10));
      uVar2 = *(ushort *)(lVar12 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar7 = param_1, func_0x000107c4adac(), lVar7 != 0)) {
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = *(undefined4 *)(lVar12 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar10 = (ulong)(uVar8 >> 5);
      uVar8 = 1 << (ulong)(uVar8 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) | uVar8;
    }
    else {
      func_0x000107c61170(param_1);
      uVar8 = *(uint *)(lVar12 + 0x14);
      lVar7 = *(long *)(lVar11 + 0x40);
      if ((int)uVar8 < 0) {
        param_1 = 0;
        uVar9 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar7 + (ulong)-uVar8 * 4) = uVar9;
      }
      else {
        uVar10 = (ulong)(uVar8 >> 5);
        uVar8 = 1 << (ulong)(uVar8 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar7 + uVar10 * 4) = *(uint *)(lVar7 + uVar10 * 4) & (uVar8 ^ 0xffffffff);
      }
    }
    uVar10 = *(ulong *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18));
    *(long *)(lVar7 + (ulong)*(uint *)(lVar12 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar10 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar10 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar10);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar10 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar12 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar10 == 0) goto FUN_100109ff0;
  lVar12 = lVar7;
  func_0x000107c433d8();
  uVar6 = uVar10;
  if ((int)lVar12 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar10 + 8) == lVar11) {
        *(undefined8 *)(uVar10 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar5 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar7 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar5 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar10,puVar5);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar6 & 1) != 0) && (*(long *)(uVar10 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar10 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar10);
  param_1 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 10011c814; end: 10011c84b;  */

undefined8 FUN_10011c814(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c3ebcc(param_1);
  FUN_10011c874();
  return param_1;
}



/* Entry: 10011c84c; end: 10011c873;  */

uint FUN_10011c84c(long param_1)

{
  bool bVar1;
  
  bVar1 = param_1 != 0;
  if (bVar1) {
    FUN_10011c814();
  }
  return (uint)param_1 | (uint)bVar1 << 8;
}



/* Entry: 10011c874; end: 10011c883;  */

void FUN_10011c874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10011c884; end: 10011c89b;  */

void FUN_10011c884(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10011c89c; end: 10011c8fb; -[SCBatteryCameraMonitor init] */

undefined8 FUN_10011c89c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  func_0x000107c3ba18(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10011c8fc; end: 10011c993; -[SCBatteryCameraMonitor _initWithQueuePerformer:] */

undefined1 *
FUN_10011c8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_4);
  puStack_28 = PTR_PTR_1126e7538;
  uStack_30 = param_2;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c3b9dc(puVar1);
    func_0x000107c6071c();
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = &PTR___NSConcreteGlobalBlock_110876160;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10011c994; end: 10011ca13; -[SCBatteryCameraMonitor _initCameraLoggingDict] */

/* WARNING: Possible PIC construction at 0x00010011c9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011c9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011c9c8) */
/* WARNING: Removing unreachable block (ram,0x00010011c9ec) */

void FUN_10011c994(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10011ca14; end: 10011ca7b; -[SCBatteryCameraMonitor resetCameraUsageRecordWhenAppOpen] */

void FUN_10011ca14(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000107c6071c();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10011dac4;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 10011ca7c; end: 10011cb43; -[SCBatteryLogger _setUpCameraStatusChangeListener] */

void FUN_10011ca7c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c3e708(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c530c4(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10011cb44; end: 10011cb4b; -[SCBatteryLogger batteryCameraMonitor] */

undefined8 FUN_10011cb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10011cb4c; end: 10011cbdb; -[SCBatteryCameraMonitor setCameraStatusChangeListener:] */

void FUN_10011cb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10011de20;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10011cbdc; end: 10011cca3; -[SCBatteryLogger resetThermalStateWhenAppOpen] */

/* WARNING: Possible PIC construction at 0x00010011cc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011cc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011cc88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011cc5c) */
/* WARNING: Removing unreachable block (ram,0x00010011cc34) */
/* WARNING: Removing unreachable block (ram,0x00010011cc8c) */

void FUN_10011cbdc(void)

{
  undefined *puVar1;
  
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c61180();
  func_0x000107c5c8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10011cca4; end: 10011cd3f;  */

/* WARNING: Possible PIC construction at 0x00010011cce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011ccf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011cce8) */
/* WARNING: Removing unreachable block (ram,0x00010011ccfc) */

void FUN_10011cca4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10011cd40();
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10011cd40; end: 10011cd93;  */

void FUN_10011cd40(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0f30 != -1) {
    FUN_10002a2fc(0x1137f0f30,&PTR___NSConcreteGlobalBlock_110c9b9b8);
  }
  uVar1 = uRam00000001137f0f38;
  func_0x000107c61174(uRam00000001137f0f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011cd94; end: 10011cf1b;  */

undefined * FUN_10011cd94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2808;
  puVar2 = PTR_PTR_1126b6ed0;
  func_0x000107c5c8dc(PTR_PTR_1126b6ed0);
  func_0x000107c4d960(puVar3,param_2,puVar2);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2820;
  puVar4 = PTR_PTR_1126b6ed0;
  puStack_68 = puVar3;
  func_0x000107c5c8d8(PTR_PTR_1126b6ed0);
  func_0x000107c4d960(puVar2,param_2,puVar4);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2838;
  puVar5 = PTR_PTR_1126b6ed0;
  puStack_60 = puVar2;
  func_0x000107c5c8e0(PTR_PTR_1126b6ed0);
  func_0x000107c4d960(puVar4,param_2,puVar5);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2850;
  puVar6 = PTR_PTR_1126b6ed0;
  puStack_58 = puVar4;
  func_0x000107c5c8d4(PTR_PTR_1126b6ed0);
  func_0x000107c4d960(puVar5,param_2,puVar6);
  func_0x000107c61180();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar5;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_88,4);
  func_0x000107c61180();
  uVar1 = puRam00000001137f0f38;
  puRam00000001137f0f38 = puVar6;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  func_0x000107c60e78();
  return (undefined *)0x0;
}



/* Entry: 10011cf1c; end: 10011cf23; +[SCBatteryLoggingConstants thermalStateNominal] */

undefined8 FUN_10011cf1c(void)

{
  return 0;
}



/* Entry: 10011cf24; end: 10011cf2b; +[SCBatteryLoggingConstants thermalStateFair] */

undefined8 FUN_10011cf24(void)

{
  return 2;
}



/* Entry: 10011cf2c; end: 10011cf33; +[SCBatteryLoggingConstants thermalStateSerious] */

undefined8 FUN_10011cf2c(void)

{
  return 3;
}



/* Entry: 10011cf34; end: 10011cf3b; +[SCBatteryLoggingConstants thermalStateCritical] */

undefined8 FUN_10011cf34(void)

{
  return 4;
}



/* Entry: 10011cf3c; end: 10011cf9b; -[SCTracer traceCounter:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011cf3c(long param_1)

{
  param_1 = param_1 + _DAT_11309bf58;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5cd38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10011cf9c; end: 10011d053; -[SCBatteryLogger _resetThermalStateWhenAppOpenWithThermalState:appOpenTime:] */

void FUN_10011cf9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10011de54;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10011d054; end: 10011d05b; +[SCAttributedBatterySubtask loggerInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011d054(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309afd0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011d05c; end: 10011d0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011d05c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309afd0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011d0ac; end: 10011d12b; +[SCAttributedClientResourcesTask battery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011d0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309afd8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309aff0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11309afe8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309afe0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011d12c; end: 10011d3c7; +[SCAttributedTask clientResources:] */

void FUN_10011d12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010011d164();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011d3c8; end: 10011d3cf; +[SCSnapTaskPriority low] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011d3c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113096e78) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011d3d0; end: 10011d4fb; -[SCIdleMonitorV1 waitUntilIdleForAttributedTask:priority:callbackQueue:block:] */

void FUN_10011d3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126e02e8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c5ae20(puVar1,param_2,param_3);
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126e02e8;
    func_0x000107c44064(PTR_PTR_1126e02e8,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5e074(param_1,param_2,puVar1,param_5,param_6);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    param_1 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126ae970;
    func_0x000107c4c0f8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c3c4b8(param_1,param_2,param_3,puVar1,param_4,param_5,param_6);
    func_0x000107c61180();
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10011d4fc; end: 10011d57f;  */

undefined4 FUN_10011d4fc(void)

{
  if (lRam00000001137fc0d0 != -1) {
    FUN_10002a2fc(0x1137fc0d0,&PTR___NSConcreteGlobalBlock_110d664b8);
  }
  return uRam00000001137fc034;
}



/* Entry: 10011d580; end: 10011d733;  */

void FUN_10011d580(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar1 = 0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  if ((param_1 == 4) || (param_1 == 5)) {
    func_0x000107c61538();
    uVar3 = 0x112d38270;
    FUN_1000285a8(0x112d38270,&UNK_10d905a20);
    uVar2 = uVar3;
    FUN_10011d734();
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar3,uVar2);
    return;
  }
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x79726574746142;
  *(undefined8 *)(lVar1 + 0x28) = 0xe700000000000000;
  if (param_1 < 2) {
    if (param_1 == 0) {
      uVar4 = 0x800000010f2166f0;
      uVar3 = 0xd000000000000010;
      goto LAB_10011d6c4;
    }
    pcVar5 = "backgroundExecution";
  }
  else {
    if (param_1 == 2) {
      uVar4 = 0xea00000000007469;
      uVar3 = 0x6e49726567676f6c;
      goto LAB_10011d6c4;
    }
    pcVar5 = "loggerDebugViewInit";
  }
  uVar3 = 0xd000000000000013;
  uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
LAB_10011d6c4:
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  *(ulong *)(lVar1 + 0x38) = uVar4;
  uVar3 = 0x112d38270;
  FUN_1000285a8(0x112d38270,&UNK_10d905a20);
  uVar2 = uVar3;
  FUN_10011d734();
  func_0x000107c5fa80(0x23,0xe100000000000000,uVar3,uVar2);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 10011d734; end: 10011d783;  */

void FUN_10011d734(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d38278 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d38270;
  FUN_10002969c(0x112d38270,&UNK_10d905a20);
  puVar2 = PTR___sSayxGSKsMc_11034dcf0;
  func_0x000107c61520(PTR___sSayxGSKsMc_11034dcf0,uVar1);
  puRam0000000112d38278 = puVar2;
  return;
}



/* Entry: 10011d784; end: 10011d8c7; -[SCIdleMonitorV1 waitUntilIdleForTag:callbackQueue:block:] */

void FUN_10011d784(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  bVar1 = param_4 == PTR___dispatch_main_q_11034be20;
  func_0x000107c61144(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c6111c(auStack_58,auStack_48);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uStack_50 = bVar1;
  func_0x000107c4e590(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10011d8c8; end: 10011d947; -[SCMainQueuePerformerImpl perform:] */

void FUN_10011d8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61184(param_3);
  FUN_10007380c(uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10011d948; end: 10011d98f; -[SCAttributedClientResourcesTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010011d964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011d968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011d948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309aff0));
  return;
}



/* Entry: 10011d990; end: 10011d997; +[SCAttributedBatterySubtask loggerDebugViewInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011d990(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309afd0) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10011d998; end: 10011dac3; -[SCIdleMonitorV1 waitUntilStartCompleteForAttributedTask:priority:callbackQueue:block:] */

void FUN_10011d998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126e02e8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c5ae20(puVar1,param_2,param_3);
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126e02e8;
    func_0x000107c44064(PTR_PTR_1126e02e8,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5e090(param_1,param_2,puVar1,param_5,param_6);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    param_1 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c3c4b8(param_1,param_2,param_3,puVar1,param_4,param_5,param_6);
    func_0x000107c61180();
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10011dac4; end: 10011dad3;  */

void FUN_10011dac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__resetCameraUsageRecordWhenAppOp_112582300);
  return;
}



/* Entry: 10011dad4; end: 10011dd77; -[SCBatteryCameraMonitor _resetCameraUsageRecordWhenAppOpenWithTimestamp:] */

undefined * FUN_10011dad4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar2;
  func_0x000107c61170(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  *(undefined **)(param_2 + 0x18) = puVar2;
  func_0x000107c61170(uVar9);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x000107c3db60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  if (lVar4 == 0) {
    func_0x000107c61170(lVar3);
  }
  else {
    bVar12 = false;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar3);
        }
        uVar10 = *(undefined8 *)(lVar11 * 8);
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        uVar9 = uVar5;
        func_0x000107c49804();
        func_0x000107c61170(uVar5);
        if ((int)uVar9 == 0) {
          func_0x000107c49804(uVar10);
          puVar2 = PTR_PTR_1126b6ed8;
          func_0x000107c610f4(PTR_PTR_1126b6ed8);
          func_0x000107c48d28(param_1);
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          func_0x000107c61180();
          func_0x000107c3d798();
          func_0x000107c56bd8(*(undefined8 *)(param_2 + 0x18));
          puVar7 = PTR_PTR_1126b6ec8;
          func_0x000107c5a9bc(PTR_PTR_1126b6ec8);
          func_0x000107c61180();
          bVar12 = true;
          func_0x000107c5d454();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar2);
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x000107c4080c();
    } while (lVar4 != 0);
    func_0x000107c61170(lVar3);
    if (bVar12) {
      *(undefined1 *)(param_2 + 0x38) = 1;
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
      func_0x000107c61180();
      func_0x000107c3f234(PTR_PTR_1126b6ed0);
      goto LAB_10011dd1c;
    }
  }
  *(undefined1 *)(param_2 + 0x38) = 0;
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3f230(PTR_PTR_1126b6ed0);
LAB_10011dd1c:
  func_0x000107c5cd38(puVar2);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar2;
  }
  func_0x000107c60e78();
  if (lRam00000001137fc0d8 != -1) {
    FUN_10002a2fc(0x1137fc0d8,&PTR___NSConcreteGlobalBlock_110d664d8);
  }
  return (undefined *)(ulong)uRam00000001137fc038;
}



/* Entry: 10011dd78; end: 10011ddfb;  */

undefined4 FUN_10011dd78(void)

{
  if (lRam00000001137fc0d8 != -1) {
    FUN_10002a2fc(0x1137fc0d8,&PTR___NSConcreteGlobalBlock_110d664d8);
  }
  return uRam00000001137fc038;
}



/* Entry: 10011ddfc; end: 10011de17; -[SCIdleMonitorV1 waitUntilStartCompleteForTag:callbackQueue:block:] */

void FUN_10011ddfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__waitUntilStartCompleteWithQueue_112598318,
             *(undefined8 *)(param_1 + 0x38),2,param_3,param_4,param_5,0);
  return;
}



/* Entry: 10011de18; end: 10011de1f; +[SCBatteryLoggingConstants cameraStatusClosed] */

undefined8 FUN_10011de18(void)

{
  return 1;
}



/* Entry: 10011de20; end: 10011de53;  */

void FUN_10011de20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61184();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10011de54; end: 10011deff;  */

/* WARNING: Possible PIC construction at 0x00010011de8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011dea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011dec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011dea8) */
/* WARNING: Removing unreachable block (ram,0x00010011de90) */
/* WARNING: Removing unreachable block (ram,0x00010011dec4) */

void FUN_10011de54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10011df00; end: 10011df07; +[SCBatteryResourceUsageDebugView shared] */

undefined8 FUN_10011df00(void)

{
  return 0;
}



/* Entry: 10011df08; end: 10011df53;  */

void FUN_10011df08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10011df54; end: 10011dfab; -[SCBatteryLogger _resetCpuUsageRecord] */

void FUN_10011df54(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10011e970;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_38);
  return;
}



/* Entry: 10011dfac; end: 10011e0f3; -[SCBatteryLogger _setupCapturerObservable] */

void FUN_10011dfac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  if (*(long *)(param_1 + 0x80) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    func_0x000107c61170(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c52094();
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5d58c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_50);
  }
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10011e0f4; end: 10011e83f;  */

void FUN_10011e0f4(void)

{
  return;
}



/* Entry: 10011e840; end: 10011e867;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_10011e840(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam00000001137f4f28 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110cd4810;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110cd4810);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  FUN_10002a3a8(&PTR___NSConcreteGlobalBlock_110cd4810);
  func_0x000107c61180();
  (*pcVar3)(0x1137f4f28,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10011e868; end: 10011e89b; -[SCManagedCapturerStateCoordinatorImpl sessionStateManager] */

void FUN_10011e868(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10011e8bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10011e89c; end: 10011e8bb;  */

void FUN_10011e89c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7e70);
  return;
}



/* Entry: 10011e8bc; end: 10011e96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10011e8bc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112da08e0;
  plVar5 = &lStack_50;
  puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112da08e0);
  puVar8 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da08c0);
    lVar3 = 0;
    FUN_10011e89c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112da0890) = uVar7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar5;
    func_0x000107c61174();
    FUN_10011ecd0(uVar7);
    puVar8 = (undefined1 *)plVar5;
  }
  func_0x00010011ece0(puVar6);
  return puVar8;
}



/* Entry: 10011e970; end: 10011eaab;  */

/* WARNING: Possible PIC construction at 0x00010011e9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011e9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011ea14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011ea4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010011ea7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010011ea50) */
/* WARNING: Removing unreachable block (ram,0x00010011ea84) */
/* WARNING: Removing unreachable block (ram,0x00010011ea54) */
/* WARNING: Removing unreachable block (ram,0x00010011ea18) */
/* WARNING: Removing unreachable block (ram,0x00010011e9e8) */
/* WARNING: Removing unreachable block (ram,0x00010011ea1c) */
/* WARNING: Removing unreachable block (ram,0x00010011ea28) */
/* WARNING: Removing unreachable block (ram,0x00010011e9ec) */
/* WARNING: Removing unreachable block (ram,0x00010011e9ac) */
/* WARNING: Removing unreachable block (ram,0x00010011ea80) */
/* WARNING: Removing unreachable block (ram,0x00010011ea90) */

void FUN_10011e970(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10011eaac; end: 10011eccf; +[SCAppResourceUsage cpuTime] */

void FUN_10011eaac(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_ec [20];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  byte bStack_a4;
  long lStack_98;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar3 = PTR__mach_task_self__11034c5c8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined *)(ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  uStack_8c = 10;
  puVar2 = puVar6;
  func_0x000107c61678(puVar6,0x12,auStack_ec,&uStack_8c);
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (((int)puVar2 == 0) &&
     (func_0x000107c61684(puVar6,&lStack_98,&uStack_c4),
     puVar4 = PTR____NSDictionary0__struct_11034ab58, puVar2 = puVar6, (int)puVar6 == 0)) {
    dVar9 = (double)(iStack_d0 * 1000) + (double)iStack_cc * 0.001;
    dVar8 = (double)(iStack_d8 * 1000) + (double)iStack_d4 * 0.001;
    if (uStack_c4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uStack_8c = 10;
        puVar2 = (undefined *)(ulong)*(uint *)(lStack_98 + uVar7 * 4);
        func_0x000107c61688(puVar2,3,&iStack_c0,&uStack_8c);
        if ((int)puVar2 != 0) goto LAB_10011eb2c;
        if ((bStack_a4 >> 1 & 1) == 0) {
          dVar8 = dVar8 + (double)(iStack_c0 * 1000) + (double)iStack_bc * 0.001;
          dVar9 = dVar9 + (double)(iStack_b8 * 1000) + (double)iStack_b4 * 0.001;
        }
        func_0x000107c61088(*(undefined4 *)puVar3,*(undefined4 *)(lStack_98 + uVar7 * 4));
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
      } while (uVar1 != uStack_c4);
      lVar5 = uVar7 << 3;
    }
    func_0x000107c616cc(*(undefined4 *)puVar3,lStack_98,lVar5);
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f3ed18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(dVar9);
    func_0x000107c61180();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f3ecf8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar2;
    func_0x000107c4d954(dVar8);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170();
  }
LAB_10011eb2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  func_0x000107c60e78();
  if (puVar2 != (undefined *)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 10011ecd0; end: 10011ecef;  */

void FUN_10011ecd0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10011ecf0; end: 10011ed0f; -[SCManagedCapturerSessionStateManagerImpl updateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011ecf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112da0890) + _DAT_112da0958));
  return;
}



/* Entry: 10011ed10; end: 10011ed5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011ed10(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130809c0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10011ed5c; end: 10011ee43;  */

void FUN_10011ed5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10011ee44; end: 10011ee9f;  */

void FUN_10011ee44(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  long *plStack_38;
  
  pcVar3 = *(char **)(param_1 + 0x20);
  if (*pcVar3 == '\x01') {
    uVar1 = 0x68;
    func_0x000107c60e20();
    FUN_10011eea0();
    pcVar3 = *(char **)(param_1 + 0x20);
    uRam00000001137f64c0 = uVar1;
  }
  FUN_10011ef3c(*(undefined4 *)(pcVar3 + 4),*(undefined8 *)(pcVar3 + 8));
  uVar1 = 0x300;
  func_0x000107c60e20();
  plVar2 = (long *)0x150;
  func_0x000107c60e20();
  FUN_1001204d0();
  *plVar2 = (long)&PTR_DAT_110cd6430;
  plVar2[0x29] = 0;
  plStack_38 = plVar2;
  func_0x00010012064c(uVar1,&UNK_10f76e7d7,7,&plStack_38);
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 8))();
  }
  if (plRam000000011383ad50 != (long *)0x0) {
    (**(code **)(*plRam000000011383ad50 + 8))();
  }
  plRam000000011383ad50 = (long *)uVar1;
  return;
}



/* Entry: 10011eea0; end: 10011ef3b;  */

ulong FUN_10011eea0(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_30 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&uStack_38);
  func_0x000107c61274(&uStack_38,1);
  puVar5 = &uStack_38;
  func_0x000107c6125c(param_1,puVar5);
  puVar2 = &uStack_38;
  func_0x000107c6126c(puVar2);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(ulong *)(param_1 + 0x60) = uRam000000011383a980;
  uRam000000011383a980 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  puVar1 = puRam000000011383a988;
  if (puRam000000011383a988 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x38;
    func_0x000107c60e20();
    puVar4 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    *puVar3 = puVar4;
    puVar3[1] = puVar4 + 3;
    puVar3[4] = 0;
    puVar3[2] = puVar4 + 3;
    puVar3[3] = puVar3 + 4;
    puVar3[5] = 0;
    puVar3[6] = 1;
    puRam000000011383a988 = puVar3;
    FUN_10011efcc(puVar3,puVar2,puVar5);
  }
  return (ulong)(puVar1 == (undefined8 *)0x0);
}



/* Entry: 10011ef3c; end: 10011efcb;  */

bool FUN_10011ef3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = puRam000000011383a988;
  if (puRam000000011383a988 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    func_0x000107c60e20();
    puVar3 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar2 = puVar3;
    puVar2[1] = puVar3 + 3;
    puVar2[4] = 0;
    puVar2[2] = puVar3 + 3;
    puVar2[3] = puVar2 + 4;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puRam000000011383a988 = puVar2;
    FUN_10011efcc(puVar2,param_1,param_2);
  }
  return puVar1 == (undefined8 *)0x0;
}



/* Entry: 10011efcc; end: 10012006f;  */

/* WARNING: Removing unreachable block (ram,0x00010011f1e4) */
/* WARNING: Removing unreachable block (ram,0x000100120024) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10011efcc(long *param_1,uint param_2,ulong *param_3)

{
  short *******pppppppsVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  short *******pppppppsVar10;
  short *******pppppppsVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  short *******pppppppsVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  short *******pppppppsVar33;
  ulong uVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *******pppppppuStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *******pppppppuStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  short *******pppppppsStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *******pppppppuStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  short *******pppppppsStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 *******pppppppuStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 < 1) {
    puVar8 = (undefined8 *)0x0;
    puVar36 = (undefined8 *)0x0;
  }
  else {
    puVar22 = (undefined8 *)0x0;
    uVar34 = (ulong)param_2;
    puVar9 = (undefined8 *)0x0;
    puVar35 = (undefined8 *)0x0;
    do {
      while( true ) {
        uVar29 = *param_3;
        uVar17 = uVar29;
        func_0x000107c613d0();
        if (0x7ffffffffffffff7 < uVar17) goto LAB_100120048;
        if (0x16 < uVar17) break;
        uStack_160 = (undefined8 *******)CONCAT17((char)uVar17,(undefined7)uStack_160);
        pppppppuVar7 = &pppppppuStack_170;
        if (uVar17 != 0) goto LAB_10011f0c4;
                    /* WARNING: Ignoring partial resolution of indirect */
        pppppppuStack_170._0_1_ = 0;
        if (puVar35 < puVar22) goto LAB_10011f030;
LAB_10011f0e0:
        lVar26 = (long)puVar35 - (long)puVar9;
        uVar17 = (lVar26 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar17) goto LAB_10012004c;
        lVar20 = (long)puVar22 - (long)puVar9 >> 3;
        uVar29 = lVar20 * 0x5555555555555556;
        if (uVar29 < uVar17 || uVar29 - uVar17 == 0) {
          uVar29 = uVar17;
        }
        if (0x555555555555554 < (ulong)(lVar20 * -0x5555555555555555)) {
          uVar29 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar29 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar29) goto LAB_100120050;
          puVar8 = (undefined8 *)(uVar29 * 0x18);
          func_0x000107c60e20();
        }
        puVar36 = (undefined8 *)((long)puVar8 + lVar26);
        puVar22 = puVar8 + uVar29 * 3;
        puVar36[2] = uStack_160;
        puVar36[1] = uStack_168;
        *puVar36 = pppppppuStack_170;
        puVar36 = puVar36 + 3;
        func_0x000107c610b4(puVar8,puVar9,lVar26);
        if (puVar9 != (undefined8 *)0x0) {
          func_0x000107c60e14(puVar9);
        }
        uVar34 = uVar34 - 1;
        param_3 = param_3 + 1;
        puVar9 = puVar8;
        puVar35 = puVar36;
        if (uVar34 == 0) goto LAB_10011f198;
      }
      pppppppuVar2 = (undefined8 *******)0x19;
      if ((uVar17 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)((uVar17 | 7) + 1);
      }
      pppppppuVar7 = pppppppuVar2;
      func_0x000107c60e20();
      uStack_160 = (undefined8 *******)((ulong)pppppppuVar2 | 0x8000000000000000);
      pppppppuStack_170 = pppppppuVar7;
      uStack_168 = uVar17;
LAB_10011f0c4:
      func_0x000107c610b8(pppppppuVar7,uVar29,uVar17);
      *(undefined1 *)((long)pppppppuVar7 + uVar17) = 0;
      if (puVar22 <= puVar35) goto LAB_10011f0e0;
LAB_10011f030:
      puVar35[2] = uStack_160;
      puVar36 = puVar35 + 3;
      puVar35[1] = uStack_168;
      *puVar35 = pppppppuStack_170;
      uVar34 = uVar34 - 1;
      param_3 = param_3 + 1;
      puVar8 = puVar9;
      puVar35 = puVar36;
    } while (uVar34 != 0);
  }
LAB_10011f198:
  puVar9 = (undefined8 *)0x18;
  func_0x000107c60e20();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  lVar26 = *param_1;
  if (lVar26 != 0) {
    lVar27 = param_1[1];
    lVar20 = lVar26;
    if (lVar27 != lVar26) {
      do {
        lVar27 = lVar27 + -0x18;
      } while (lVar27 != lVar26);
      lVar20 = *param_1;
    }
    param_1[1] = lVar26;
    func_0x000107c60e14(lVar20);
  }
  *param_1 = (long)puVar9;
  param_1[1] = (long)(puVar9 + 3);
  param_1[2] = (long)(puVar9 + 3);
  plVar23 = param_1 + 4;
  FUN_100120070(*plVar23);
  param_1[3] = (long)plVar23;
  *plVar23 = 0;
  param_1[6] = 1;
  param_1[5] = 0;
  if (puVar8 == puVar36) {
    uVar34 = 0;
    pppppppsVar24 = (short *******)0x0;
    uVar17 = 0;
    pppppppsStack_188 = (short *******)0x0;
    uStack_180 = 0;
    uStack_178 = 0;
LAB_10011f32c:
    bVar6 = -1 < (char)uVar17;
    if (bVar6) {
      pppppppsVar24 = (short *******)&pppppppsStack_188;
    }
    if (bVar6) {
      uVar34 = uVar17 & 0xff;
    }
    puVar9 = (undefined8 *)*param_1;
    if (uVar34 != 0) {
      uVar17 = 0;
      pppppppuStack_170 = (undefined8 *******)0x0;
      uStack_158 = 0;
      uStack_160 = (undefined8 *******)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_150 = 1;
      uStack_168 = 0x10101010100;
      do {
        if (*(char *)((long)&pppppppuStack_170 + (ulong)*(byte *)((long)pppppppsVar24 + uVar17)) !=
            '\x01') goto LAB_10011f3ac;
        uVar17 = uVar17 + 1;
      } while (uVar34 != uVar17);
    }
    uVar17 = 0xffffffffffffffff;
LAB_10011f3ac:
    pppppppsVar33 = pppppppsVar24;
    FUN_10012019c(pppppppsVar24,uVar34,&UNK_10e574678,6,0xffffffffffffffff);
    if (((uVar34 == 0) || (uVar17 == 0xffffffffffffffff)) ||
       (pppppppsVar33 == (short *******)0xffffffffffffffff)) {
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        *(undefined1 *)*puVar9 = 0;
        puVar9[1] = 0;
      }
      else {
        *(undefined1 *)puVar9 = 0;
        *(undefined1 *)((long)puVar9 + 0x17) = 0;
      }
    }
    else {
      FUN_100042f24(puVar9,(char *)((long)pppppppsVar24 + uVar17),
                    (char *)((long)pppppppsVar33 + (1 - uVar17)));
    }
    if ((long)uStack_178 < 0) {
      func_0x000107c60e14(pppppppsStack_188);
    }
    uVar34 = ((long)puVar36 - (long)puVar8 >> 3) * -0x5555555555555555;
    if (1 < uVar34) {
      uVar17 = 1;
      uVar4 = true;
      do {
        puVar9 = puVar8 + uVar17 * 3;
        uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
        uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
        pppppppsStack_1c0 = (short *******)0xaaaaaaaaaaaaaaaa;
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          FUN_100033dac(&pppppppsStack_1c0,*puVar9,puVar9[1]);
        }
        else {
          uStack_1b0 = puVar9[2];
          uStack_1b8 = puVar9[1];
          pppppppsStack_1c0 = (short *******)*puVar9;
        }
        pppppppsVar24 = pppppppsStack_1c0;
        if (-1 < (long)uStack_1b0._7_1_) {
          pppppppsVar24 = (short *******)&pppppppsStack_1c0;
        }
        uVar29 = uStack_1b8;
        if (-1 < (long)uStack_1b0) {
          uVar29 = (long)uStack_1b0._7_1_;
        }
        if (uVar29 != 0) {
          uVar28 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          pppppppuStack_170 = (undefined8 *******)0x0;
          uStack_158 = 0;
          uStack_160 = (undefined8 *******)0x0;
          uStack_150 = 1;
          uStack_168 = 0x10101010100;
          do {
            if (*(char *)((long)&pppppppuStack_170 + (ulong)*(byte *)((long)pppppppsVar24 + uVar28))
                != '\x01') goto LAB_10011f518;
            uVar28 = uVar28 + 1;
          } while (uVar29 != uVar28);
        }
        uVar28 = 0xffffffffffffffff;
LAB_10011f518:
        pppppppsVar33 = pppppppsVar24;
        FUN_10012019c(pppppppsVar24,uVar29,&UNK_10e574678,6,0xffffffffffffffff);
        if (((uVar29 == 0) || (uVar28 == 0xffffffffffffffff)) ||
           (pppppppsVar33 == (short *******)0xffffffffffffffff)) {
          if ((long)uStack_1b0 < 0) {
            *(char *)pppppppsStack_1c0 = '\0';
            uStack_1b8 = 0;
            goto joined_r0x00010011f608;
          }
          uVar19 = 0;
          iVar16 = 0;
          iVar15 = 0;
          pppppppsStack_1c0 = (short *******)((ulong)pppppppsStack_1c0 & 0xffffffffffffff00);
          uStack_1b0 = uStack_1b0 & 0xffffffffffffff;
          if ((bool)uVar4) goto LAB_10011f638;
LAB_10011f5cc:
          uVar4 = false;
          if (uVar19 == 0) {
            uVar28 = (ulong)iVar15;
            pppppppsVar33 = (short *******)&pppppppsStack_1c0;
          }
          else {
LAB_10011f71c:
            pppppppuStack_1e0 = (undefined8 *******)0x0;
            pppppppuStack_200 = (undefined8 *******)0x0;
            uStack_1d0 = (undefined8 *******)0x0;
            uStack_1f0 = (undefined8 *******)0x0;
            uStack_1d8 = 0;
            uStack_1f8 = 0;
            pppppppsVar33 = pppppppsStack_1c0;
            uVar28 = uStack_1b8;
            if (0x7ffffffffffffff7 < uStack_1b8) goto LAB_100120048;
          }
LAB_10011f72c:
          pppppppuStack_1e0 = (undefined8 *******)0x0;
          pppppppuStack_200 = (undefined8 *******)0x0;
          uStack_1d0 = (undefined8 *******)0x0;
          uStack_1f0 = (undefined8 *******)0x0;
          uStack_1d8 = 0;
          uStack_1f8 = 0;
          if (uVar28 < 0x17) {
            uStack_160 = (undefined8 *******)CONCAT17((char)uVar28,(undefined7)uStack_160);
            pppppppuVar7 = &pppppppuStack_170;
            if (uVar28 != 0) goto LAB_10011f7a0;
                    /* WARNING: Ignoring partial resolution of indirect */
            pppppppuStack_170._0_1_ = 0;
            func_0x000107c35c98(param_1,&pppppppuStack_170);
          }
          else {
            pppppppuVar2 = (undefined8 *******)0x19;
            if ((uVar28 | 7) != 0x17) {
              pppppppuVar2 = (undefined8 *******)((uVar28 | 7) + 1);
            }
            pppppppuVar7 = pppppppuVar2;
            func_0x000107c60e20();
            uStack_160 = (undefined8 *******)((ulong)pppppppuVar2 | 0x8000000000000000);
            pppppppuStack_170 = pppppppuVar7;
            uStack_168 = uVar28;
LAB_10011f7a0:
            func_0x000107c610b8(pppppppuVar7,pppppppsVar33,uVar28);
            *(undefined1 *)((long)pppppppuVar7 + uVar28) = 0;
            func_0x000107c35c98(param_1,&pppppppuStack_170);
          }
          if ((long)uStack_160 < 0) {
            func_0x000107c60e14(pppppppuStack_170);
          }
        }
        else {
          FUN_100042f24(&pppppppsStack_1c0,(char *)((long)pppppppsVar24 + uVar28),
                        (char *)((long)pppppppsVar33 + (1 - uVar28)));
joined_r0x00010011f608:
          if ((long)uStack_1b0 < 0) {
            iVar16 = (int)uStack_1b0._7_1_;
            pppppppsVar24 = pppppppsStack_1c0;
            if (uStack_1b8 == 2) goto LAB_10011f61c;
            if ((bool)uVar4) goto LAB_10011f67c;
            uVar4 = false;
            goto LAB_10011f71c;
          }
          if (uStack_1b0._7_1_ == '\x02') {
            pppppppsVar24 = (short *******)&pppppppsStack_1c0;
LAB_10011f61c:
            uVar19 = (uint)((ulong)(long)uStack_1b0._7_1_ >> 0x1f) & 1;
            uVar4 = uVar4 & *(short *)pppppppsVar24 != 0x2d2d;
          }
          else {
            uVar19 = 0;
          }
          iVar15 = (int)uStack_1b0._7_1_;
          iVar16 = iVar15;
          if (!(bool)uVar4) goto LAB_10011f5cc;
LAB_10011f638:
          if (uVar19 == 0) {
            bVar6 = false;
            uVar28 = (ulong)iVar16;
            uVar29 = uVar28;
            pppppppsVar24 = (short *******)&pppppppsStack_1c0;
          }
          else {
LAB_10011f67c:
            uVar28 = (ulong)iVar16;
            bVar6 = true;
            uVar29 = uStack_1b8;
            pppppppsVar24 = pppppppsStack_1c0;
          }
          pppppppuStack_1e0 = (undefined8 *******)0x0;
          pppppppuStack_200 = (undefined8 *******)0x0;
          uStack_1d0 = (undefined8 *******)0x0;
          uStack_1f0 = (undefined8 *******)0x0;
          uStack_1d8 = 0;
          uStack_1f8 = 0;
          uStack_168 = 0xaaaaaaaaaaaaaaaa;
          uStack_160 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_170 = (undefined8 *******)0xaaaaaaaaaaaa2d2d;
          if (1 < uVar29) {
            if (*(short *)pppppppsVar24 != 0x2d2d) goto LAB_10011f6dc;
            uVar21 = 2;
            if (!bVar6) goto LAB_10011f6c0;
LAB_10011f6f0:
            pppppppsVar33 = pppppppsStack_1c0;
            uVar28 = uStack_1b8;
            if (uVar21 != uStack_1b8) goto LAB_10011f7e0;
            uVar4 = true;
            goto LAB_10011f72c;
          }
          if (uVar29 == 0) {
LAB_10011f700:
            uVar4 = true;
            if (bVar6) goto LAB_10011f71c;
            pppppppsVar33 = (short *******)&pppppppsStack_1c0;
            goto LAB_10011f72c;
          }
LAB_10011f6dc:
          if (*(char *)pppppppsVar24 != '-') goto LAB_10011f700;
          uVar21 = 1;
          if (bVar6) goto LAB_10011f6f0;
LAB_10011f6c0:
          pppppppsVar33 = (short *******)&pppppppsStack_1c0;
          if (uVar21 == uVar28) {
            uVar4 = true;
            goto LAB_10011f72c;
          }
LAB_10011f7e0:
          pppppppsVar1 = (short *******)((long)pppppppsVar33 + uVar28);
          pppppppsVar10 = pppppppsVar33;
          while (((pppppppsVar11 = pppppppsVar1, 0 < (long)uVar28 &&
                  (func_0x000107c610ac(pppppppsVar10,0x3d,uVar28),
                  pppppppsVar10 != (short *******)0x0)) &&
                 (pppppppsVar11 = pppppppsVar10, *(char *)pppppppsVar10 != '='))) {
            pppppppsVar10 = (short *******)((long)pppppppsVar10 + 1);
            uVar28 = (long)pppppppsVar1 - (long)pppppppsVar10;
          }
          uVar28 = (long)pppppppsVar11 - (long)pppppppsVar33;
          if (pppppppsVar11 == pppppppsVar1) {
            uVar28 = 0xffffffffffffffff;
          }
          if (uVar28 <= uVar29) {
            uVar29 = uVar28;
          }
          if (0x7ffffffffffffff7 < uVar29) goto LAB_100120048;
          if (uVar29 < 0x17) {
            uStack_160 = (undefined8 *******)CONCAT17((char)uVar29,(undefined7)uStack_160);
            pppppppuVar7 = &pppppppuStack_170;
            if (uVar29 != 0) goto LAB_10011f8a8;
                    /* WARNING: Ignoring partial resolution of indirect */
            pppppppuStack_170._0_1_ = 0;
          }
          else {
            pppppppuVar2 = (undefined8 *******)0x19;
            if ((uVar29 | 7) != 0x17) {
              pppppppuVar2 = (undefined8 *******)((uVar29 | 7) + 1);
            }
            pppppppuVar7 = pppppppuVar2;
            func_0x000107c60e20();
            uStack_160 = (undefined8 *******)((ulong)pppppppuVar2 | 0x8000000000000000);
            pppppppuStack_170 = pppppppuVar7;
            uStack_168 = uVar29;
LAB_10011f8a8:
            func_0x000107c610b8(pppppppuVar7,pppppppsVar24,uVar29);
            *(undefined1 *)((long)pppppppuVar7 + uVar29) = 0;
          }
          pppppppuVar2 = pppppppuStack_170;
          uVar29 = uStack_168;
          pppppppuVar7 = uStack_160;
          if ((long)uStack_1d0 < 0) {
            func_0x000107c60e14(pppppppuStack_1e0);
            pppppppuVar2 = pppppppuStack_170;
            uVar29 = uStack_168;
            pppppppuVar7 = uStack_160;
          }
          uStack_1d0 = pppppppuVar7;
          uStack_1d8 = uVar29;
          pppppppuStack_1e0 = pppppppuVar2;
          pppppppuStack_170 = pppppppuStack_1e0;
          uStack_168 = uStack_1d8;
          uStack_160 = uStack_1d0;
          if (uVar28 != 0xffffffffffffffff) {
            uStack_1b0._7_1_ = (char)(uStack_1b0 >> 0x38);
            uVar29 = (ulong)uStack_1b0._7_1_;
            if ((long)uVar29 < 0) {
              if (uStack_1b8 <= uVar28) goto LAB_100120054;
              uVar21 = uStack_1b8 - (uVar28 + 1);
              pppppppsVar24 = pppppppsStack_1c0;
              uVar29 = uStack_1b8;
            }
            else {
              if (uVar29 <= uVar28) goto LAB_100120054;
              pppppppsVar24 = (short *******)&pppppppsStack_1c0;
              uVar21 = uVar29 - (uVar28 + 1);
            }
            if (0x7ffffffffffffff7 < uVar21) goto LAB_100120048;
            if (uVar21 < 0x17) {
              uStack_160._0_7_ = SUB87(uStack_1d0,0);
              uStack_160 = (undefined8 *******)CONCAT17((char)uVar21,(undefined7)uStack_160);
              pppppppuVar7 = &pppppppuStack_170;
              if (uVar29 != uVar28 + 1) goto LAB_10011fd04;
              *(undefined1 *)((long)pppppppuVar7 + uVar21) = 0;
            }
            else {
              pppppppuVar2 = (undefined8 *******)0x19;
              if ((uVar21 | 7) != 0x17) {
                pppppppuVar2 = (undefined8 *******)((uVar21 | 7) + 1);
              }
              pppppppuVar7 = pppppppuVar2;
              func_0x000107c60e20();
              uStack_160 = (undefined8 *******)((ulong)pppppppuVar2 | 0x8000000000000000);
              pppppppuStack_170 = pppppppuVar7;
              uStack_168 = uVar21;
LAB_10011fd04:
              func_0x000107c610b8(pppppppuVar7,(char *)((long)pppppppsVar24 + uVar28 + 1),uVar21);
              *(undefined1 *)((long)pppppppuVar7 + uVar21) = 0;
            }
            if ((long)uStack_1f0 < 0) {
              func_0x000107c60e14(pppppppuStack_200);
            }
            uStack_1f8 = uStack_168;
            pppppppuStack_200 = pppppppuStack_170;
            uStack_1f0 = uStack_160;
          }
          pppppppuVar2 = pppppppuStack_1e0;
          if (-1 < (long)uStack_1d0._7_1_) {
            pppppppuVar2 = &pppppppuStack_1e0;
          }
          uVar29 = uStack_1d8;
          if (-1 < (long)uStack_1d0) {
            uVar29 = (long)uStack_1d0._7_1_;
          }
          pppppppuVar7 = pppppppuStack_200;
          if (-1 < (long)uStack_1f0._7_1_) {
            pppppppuVar7 = &pppppppuStack_200;
          }
          uVar28 = uStack_1f8;
          if (-1 < (long)uStack_1f0) {
            uVar28 = (long)uStack_1f0._7_1_;
          }
          uStack_180 = 0xaaaaaaaaaaaaaaaa;
          uStack_178 = 0xaaaaaaaaaaaaaaaa;
          pppppppsStack_188 = (short *******)0xaaaaaaaaaaaaaaaa;
          if (0x7ffffffffffffff7 < uVar29) goto LAB_100120048;
          if (uVar29 < 0x17) {
            uStack_178 = CONCAT17((char)uVar29,0xaaaaaaaaaaaaaa);
            pppppppsVar33 = (short *******)&pppppppsStack_188;
            if (uVar29 != 0) goto LAB_10011fa04;
          }
          else {
            pppppppsVar24 = (short *******)0x19;
            if ((uVar29 | 7) != 0x17) {
              pppppppsVar24 = (short *******)((uVar29 | 7) + 1);
            }
            pppppppsVar33 = pppppppsVar24;
            func_0x000107c60e20();
            uStack_178 = (ulong)pppppppsVar24 | 0x8000000000000000;
            pppppppsStack_188 = pppppppsVar33;
            uStack_180 = uVar29;
LAB_10011fa04:
            func_0x000107c610b8(pppppppsVar33,pppppppuVar2,uVar29);
          }
          *(char *)((long)pppppppsVar33 + uVar29) = '\0';
          pppppppsVar24 = pppppppsStack_188;
          if (-1 < (long)(char)uStack_178._7_1_) {
            pppppppsVar24 = (short *******)&pppppppsStack_188;
          }
          uVar21 = uStack_180;
          if (-1 < (long)uStack_178) {
            uVar21 = (long)(char)uStack_178._7_1_;
          }
          uStack_168 = 0xaaaaaaaaaaaaaaaa;
          uStack_160 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
          pppppppuStack_170 = (undefined8 *******)0xaaaaaaaaaaaa2d2d;
          if (uVar21 < 2) {
            if (uVar21 != 0) goto LAB_10011fa6c;
LAB_10011fa88:
            uVar21 = 0;
          }
          else {
            if (*(short *)pppppppsVar24 == 0x2d2d) {
              uVar21 = 2;
            }
            else {
LAB_10011fa6c:
              if (*(char *)pppppppsVar24 != '-') goto LAB_10011fa88;
              uVar21 = 1;
            }
            if (uVar29 < uVar21) goto LAB_100120064;
          }
          if (0x7ffffffffffffff7 < uVar28) goto LAB_100120048;
          if (uVar28 < 0x17) {
            uStack_160 = (undefined8 *******)CONCAT17((char)uVar28,0xaaaaaaaaaaaaaa);
            pppppppuVar12 = &pppppppuStack_170;
            if (uVar28 != 0) goto LAB_10011fadc;
          }
          else {
            pppppppuVar13 = (undefined8 *******)0x19;
            if ((uVar28 | 7) != 0x17) {
              pppppppuVar13 = (undefined8 *******)((uVar28 | 7) + 1);
            }
            pppppppuVar12 = pppppppuVar13;
            func_0x000107c60e20();
            uStack_160 = (undefined8 *******)((ulong)pppppppuVar13 | 0x8000000000000000);
            pppppppuStack_170 = pppppppuVar12;
            uStack_168 = uVar28;
LAB_10011fadc:
            func_0x000107c610b8(pppppppuVar12,pppppppuVar7,uVar28);
          }
          uVar31 = uVar29 - uVar21;
          *(undefined1 *)((long)pppppppuVar12 + uVar28) = 0;
          if (0x7ffffffffffffff7 < uVar31) goto LAB_100120048;
          if (uVar31 < 0x17) {
            uStack_190 = CONCAT17((char)uVar31,(undefined7)uStack_190);
            pppppppuVar12 = &pppppppuStack_1a0;
            if (uVar29 != uVar21) goto LAB_10011fb64;
            *(undefined1 *)((long)pppppppuVar12 + uVar31) = 0;
            plVar18 = (long *)*plVar23;
          }
          else {
            pppppppuVar13 = (undefined8 *******)0x19;
            if ((uVar31 | 7) != 0x17) {
              pppppppuVar13 = (undefined8 *******)((uVar31 | 7) + 1);
            }
            pppppppuVar12 = pppppppuVar13;
            func_0x000107c60e20();
            uStack_190 = (ulong)pppppppuVar13 | 0x8000000000000000;
            pppppppuStack_1a0 = pppppppuVar12;
            uStack_198 = uVar31;
LAB_10011fb64:
            func_0x000107c610b8(pppppppuVar12,(undefined *)((long)pppppppuVar2 + uVar21),uVar31);
            *(undefined1 *)((long)pppppppuVar12 + uVar31) = 0;
            plVar18 = (long *)*plVar23;
          }
          plVar30 = plVar23;
          plVar32 = plVar23;
          if (plVar18 != (long *)0x0) {
            uVar29 = uStack_198;
            pppppppuVar2 = pppppppuStack_1a0;
            if (-1 < (long)uStack_190) {
              uVar29 = uStack_190 >> 0x38;
              pppppppuVar2 = &pppppppuStack_1a0;
            }
            do {
              while( true ) {
                plVar14 = plVar18;
                plVar18 = (long *)plVar14[4];
                uVar31 = plVar14[5];
                if (-1 < (char)*(byte *)((long)plVar14 + 0x37)) {
                  plVar18 = plVar14 + 4;
                  uVar31 = (ulong)*(byte *)((long)plVar14 + 0x37);
                }
                uVar25 = uVar31;
                if (uVar29 <= uVar31) {
                  uVar25 = uVar29;
                }
                pppppppuVar13 = pppppppuVar2;
                func_0x000107c610b0(pppppppuVar2,plVar18,uVar25);
                bVar6 = uVar29 < uVar31;
                if ((int)pppppppuVar13 != 0) {
                  bVar6 = (int)pppppppuVar13 < 0;
                }
                plVar30 = plVar14;
                if (bVar6) break;
                func_0x000107c610b0(plVar18,pppppppuVar2,uVar25);
                bVar6 = uVar31 < uVar29;
                if ((int)plVar18 != 0) {
                  bVar6 = (int)plVar18 < 0;
                }
                if (!bVar6) {
                  cVar3 = *(char *)((long)plVar14 + 0x4f);
                  goto joined_r0x00010011fd38;
                }
                plVar18 = (long *)plVar14[1];
                if ((long *)plVar14[1] == (long *)0x0) {
                  plVar32 = plVar14 + 1;
                  goto LAB_10011fc44;
                }
              }
              plVar18 = (long *)*plVar14;
              plVar32 = plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
LAB_10011fc44:
          plVar14 = (long *)0x50;
          func_0x000107c60e20();
          uVar29 = uStack_190;
          plVar14[5] = uStack_198;
          plVar14[4] = (long)pppppppuStack_1a0;
          pppppppuStack_1a0 = (undefined8 *******)0x0;
          uStack_198 = 0;
          uStack_190 = 0;
          plVar14[6] = uVar29;
          plVar14[7] = 0;
          plVar14[8] = 0;
          plVar14[9] = 0;
          *plVar14 = 0;
          plVar14[1] = 0;
          plVar14[2] = (long)plVar30;
          *plVar32 = (long)plVar14;
          plVar18 = plVar14;
          if (*(long *)param_1[3] != 0) {
            param_1[3] = *(long *)param_1[3];
            plVar18 = (long *)*plVar32;
          }
          FUN_1001292e0(param_1[4],plVar18);
          param_1[5] = param_1[5] + 1;
          cVar3 = *(char *)((long)plVar14 + 0x4f);
joined_r0x00010011fd38:
          if (cVar3 < '\0') {
            func_0x000107c60e14(plVar14[7]);
            plVar14[8] = uStack_168;
            plVar14[7] = (long)pppppppuStack_170;
            plVar14[9] = (long)uStack_160;
          }
          else {
            plVar14[8] = uStack_168;
            plVar14[7] = (long)pppppppuStack_170;
            plVar14[9] = (long)uStack_160;
          }
          pppppppsVar24 = pppppppsStack_188;
          uVar29 = uStack_180;
          uVar31 = uStack_178;
          if ((long)uStack_190 < 0) {
            func_0x000107c60e14(pppppppuStack_1a0);
            pppppppsVar24 = pppppppsStack_188;
            uVar29 = uStack_180;
            uVar31 = uStack_178;
          }
          pppppppsStack_188 = pppppppsVar24;
          uStack_180 = uVar29;
          uStack_178 = uVar31;
          if (uVar21 == 0) {
            uStack_178._7_1_ = (byte)(uVar31 >> 0x38);
            if ((long)uVar31 < 0) {
              uVar21 = (uVar31 & 0x7fffffffffffffff) - 1;
              if (uVar21 - uVar29 < 2) {
                uVar25 = uVar29 + 2;
                if (uVar25 - uVar21 <= 0x7ffffffffffffff7 - (uVar31 & 0x7fffffffffffffff)) {
                  if (uVar21 < 0x3ffffffffffffff3) goto LAB_10011fde0;
                  bVar6 = false;
                  pppppppsVar33 = (short *******)0x7ffffffffffffff7;
                  pppppppsVar10 = pppppppsVar33;
                  func_0x000107c60e20();
                  *(short *)pppppppsVar10 = 0x2d2d;
                  goto joined_r0x00010011fe24;
                }
                goto LAB_100120060;
              }
              if (uVar29 != 0) goto LAB_10011ff08;
LAB_10011ff6c:
              *(short *)pppppppsVar24 = 0x2d2d;
              uVar29 = 2;
              if (-1 < (long)uStack_178) goto LAB_10011ff4c;
LAB_10011ff88:
              uStack_180 = uVar29;
              *(char *)((long)pppppppsVar24 + uVar29) = '\0';
            }
            else {
              uVar29 = (ulong)uStack_178._7_1_;
              if (uStack_178._7_1_ - 0x15 < 2) {
                uVar25 = uVar29 + 2;
                uVar21 = 0x16;
                pppppppsVar24 = (short *******)&pppppppsStack_188;
LAB_10011fde0:
                uVar31 = uVar25;
                if (uVar25 <= uVar21 * 2) {
                  uVar31 = uVar21 * 2;
                }
                pppppppsVar10 = (short *******)0x19;
                if ((uVar31 | 7) != 0x17) {
                  pppppppsVar10 = (short *******)((uVar31 | 7) + 1);
                }
                pppppppsVar33 = (short *******)0x17;
                if (0x16 < uVar31) {
                  pppppppsVar33 = pppppppsVar10;
                }
                bVar6 = uVar21 == 0x16;
                pppppppsVar10 = pppppppsVar33;
                func_0x000107c60e20();
                *(short *)pppppppsVar10 = 0x2d2d;
joined_r0x00010011fe24:
                if (uVar29 != 0) {
                  func_0x000107c610b8((short *)((long)pppppppsVar10 + 2),pppppppsVar24,uVar29);
                }
                if (!bVar6) {
                  func_0x000107c60e14(pppppppsVar24);
                }
                *(char *)((long)pppppppsVar10 + uVar25) = '\0';
                pppppppsStack_188 = pppppppsVar10;
                uStack_180 = uVar25;
                uStack_178 = (ulong)pppppppsVar33 | 0x8000000000000000;
              }
              else {
                pppppppsVar24 = (short *******)&pppppppsStack_188;
                if (uVar29 == 0) goto LAB_10011ff6c;
LAB_10011ff08:
                lVar26 = 2;
                if ((char *)((long)pppppppsVar24 + uVar29) <= "--" || &UNK_10e573f9d < pppppppsVar24
                   ) {
                  lVar26 = 0;
                }
                func_0x000107c610b8((short *)((long)pppppppsVar24 + 2),pppppppsVar24,uVar29);
                *(short *)pppppppsVar24 = *(short *)(&UNK_10e573f9d + lVar26);
                uVar29 = uVar29 + 2;
                if ((long)uStack_178 < 0) goto LAB_10011ff88;
LAB_10011ff4c:
                uStack_178 = CONCAT17((char)uVar29,(undefined7)uStack_178) & 0x7fffffffffffffff;
                *(char *)((long)pppppppsVar24 + uVar29) = '\0';
              }
            }
          }
          if (uVar28 != 0) {
            pppppppuStack_170 = (undefined8 *******)&UNK_10e573f9b;
            uStack_168 = 1;
            uStack_160 = pppppppuVar7;
            uStack_158 = uVar28;
            FUN_1002219cc(&pppppppsStack_188,2,&pppppppuStack_170);
          }
          lVar26 = param_1[6];
          param_1[6] = lVar26 + 1;
          func_0x000104c43cf8(param_1,*param_1 + lVar26 * 0x18,&pppppppsStack_188);
          if ((long)uStack_178 < 0) {
            func_0x000107c60e14(pppppppsStack_188);
            uVar4 = true;
          }
          else {
            uVar4 = true;
          }
        }
        if ((long)uStack_1f0 < 0) {
          func_0x000107c60e14(pppppppuStack_200);
        }
        if ((long)uStack_1d0 < 0) {
          func_0x000107c60e14(pppppppuStack_1e0);
        }
        if ((long)uStack_1b0 < 0) {
          func_0x000107c60e14(pppppppsStack_1c0);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar34);
    }
    if (puVar8 != (undefined8 *)0x0) {
      for (; puVar8 != puVar36; puVar36 = puVar36 + -3) {
      }
      func_0x000107c60e14(puVar8);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    cVar3 = *(char *)((long)puVar8 + 0x17);
    puVar9 = (undefined8 *)*puVar8;
    if (-1 < (long)cVar3) {
      puVar9 = puVar8;
    }
    uVar34 = puVar8[1];
    if (-1 < cVar3) {
      uVar34 = (long)cVar3;
    }
    if (uVar34 < 0x7ffffffffffffff8) {
      if (uVar34 < 0x17) {
        uStack_178 = CONCAT17((char)uVar34,(undefined7)uStack_178);
        pppppppsVar33 = (short *******)&pppppppsStack_188;
        if (uVar34 != 0) goto LAB_10011f2b0;
      }
      else {
        pppppppsVar24 = (short *******)0x19;
        if ((uVar34 | 7) != 0x17) {
          pppppppsVar24 = (short *******)((uVar34 | 7) + 1);
        }
        pppppppsVar33 = pppppppsVar24;
        func_0x000107c60e20();
        uStack_178 = (ulong)pppppppsVar24 | 0x8000000000000000;
        pppppppsStack_188 = pppppppsVar33;
        uStack_180 = uVar34;
LAB_10011f2b0:
        func_0x000107c610b8(pppppppsVar33,puVar9,uVar34);
      }
      *(char *)((long)pppppppsVar33 + uVar34) = '\0';
      uVar34 = uStack_180;
      pppppppsVar24 = pppppppsStack_188;
      uVar28 = (ulong)uStack_178._7_1_;
      uVar19 = (uint)(char)uStack_178._7_1_;
      uVar17 = (ulong)uVar19;
      uVar29 = uStack_180;
      pppppppsVar33 = pppppppsStack_188;
      if (-1 < (int)uVar19) {
        uVar29 = uVar28;
        pppppppsVar33 = (short *******)&pppppppsStack_188;
      }
      pppppppsVar10 = pppppppsVar33;
      func_0x000107c610ac(pppppppsVar33,0,uVar29);
      if ((pppppppsVar10 != (short *******)0x0) &&
         (uVar29 = (long)pppppppsVar10 - (long)pppppppsVar33, uVar29 != 0xffffffffffffffff)) {
        if ((int)uVar19 < 0) {
          if (uVar34 < uVar29) goto LAB_10012005c;
          uStack_180 = uVar29;
        }
        else {
          if (uVar28 < uVar29) goto LAB_10012005c;
          uStack_178 = CONCAT17((char)uVar29,(undefined7)uStack_178);
          pppppppsVar24 = (short *******)&pppppppsStack_188;
        }
        *(char *)((long)pppppppsVar24 + uVar29) = '\0';
        uVar17 = uStack_178 >> 0x38;
        pppppppsVar24 = pppppppsStack_188;
        uVar34 = uStack_180;
      }
      goto LAB_10011f32c;
    }
LAB_100120048:
    func_0x000107c35c54();
LAB_10012004c:
    func_0x000107c35c9c();
LAB_100120050:
    func_0x000107c35c58();
LAB_100120054:
    func_0x000107c2ca1c();
  }
  func_0x000107c60e78();
LAB_10012005c:
  func_0x000104c03f14();
LAB_100120060:
  func_0x000104bd47d4();
LAB_100120064:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0,0x100120068);
  (*pcVar5)();
}



/* Entry: 100120070; end: 1001200df;  */

/* WARNING: Possible PIC construction at 0x0001001200cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001200d0) */

void FUN_100120070(undefined8 *param_1)

{
  char cVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_100120070(*param_1);
  FUN_100120070(param_1[1]);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    func_0x000107c60e14(param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    param_1 = (undefined8 *)param_1[4];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1001200e0; end: 1001200f7;  */

void FUN_1001200e0(long param_1,long param_2)

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



/* Entry: 1001200f8; end: 10012019b; -[SCSystemLocationServices initWithDeviceLocationPermissionsManager:locationOperationsUpdateObservable:] */

undefined1 *
FUN_1001200f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112709e20;
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



/* Entry: 10012019c; end: 1001203af;  */

void FUN_10012019c(long param_1,long param_2,char *param_3,ulong param_4,ulong param_5)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long *plStack_168;
  byte abStack_130 [264];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
LAB_1001202c4:
    uVar3 = 0xffffffffffffffff;
LAB_1001202c8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_10012030c;
  }
  else {
    uVar3 = param_2 - 1U;
    if (param_5 <= param_2 - 1U) {
      uVar3 = param_5;
    }
    if (param_4 != 0) {
      if (param_4 == 1) {
        if (*(char *)(param_1 + uVar3) == *param_3) {
          uVar6 = uVar3;
          do {
            if (uVar6 == 0) goto LAB_1001202c4;
            uVar3 = uVar6 - 1;
            pcVar1 = (char *)(param_1 + -1 + uVar6);
            uVar6 = uVar3;
          } while (*pcVar1 == *param_3);
          goto LAB_1001202c8;
        }
      }
      else {
        abStack_130[0xe8] = 0;
        abStack_130[0xe9] = 0;
        abStack_130[0xea] = 0;
        abStack_130[0xeb] = 0;
        abStack_130[0xec] = 0;
        abStack_130[0xed] = 0;
        abStack_130[0xee] = 0;
        abStack_130[0xef] = 0;
        abStack_130[0xe0] = 0;
        abStack_130[0xe1] = 0;
        abStack_130[0xe2] = 0;
        abStack_130[0xe3] = 0;
        abStack_130[0xe4] = 0;
        abStack_130[0xe5] = 0;
        abStack_130[0xe6] = 0;
        abStack_130[0xe7] = 0;
        abStack_130[0xf8] = 0;
        abStack_130[0xf9] = 0;
        abStack_130[0xfa] = 0;
        abStack_130[0xfb] = 0;
        abStack_130[0xfc] = 0;
        abStack_130[0xfd] = 0;
        abStack_130[0xfe] = 0;
        abStack_130[0xff] = 0;
        abStack_130[0xf0] = 0;
        abStack_130[0xf1] = 0;
        abStack_130[0xf2] = 0;
        abStack_130[0xf3] = 0;
        abStack_130[0xf4] = 0;
        abStack_130[0xf5] = 0;
        abStack_130[0xf6] = 0;
        abStack_130[0xf7] = 0;
        abStack_130[200] = 0;
        abStack_130[0xc9] = 0;
        abStack_130[0xca] = 0;
        abStack_130[0xcb] = 0;
        abStack_130[0xcc] = 0;
        abStack_130[0xcd] = 0;
        abStack_130[0xce] = 0;
        abStack_130[0xcf] = 0;
        abStack_130[0xc0] = 0;
        abStack_130[0xc1] = 0;
        abStack_130[0xc2] = 0;
        abStack_130[0xc3] = 0;
        abStack_130[0xc4] = 0;
        abStack_130[0xc5] = 0;
        abStack_130[0xc6] = 0;
        abStack_130[199] = 0;
        abStack_130[0xd8] = 0;
        abStack_130[0xd9] = 0;
        abStack_130[0xda] = 0;
        abStack_130[0xdb] = 0;
        abStack_130[0xdc] = 0;
        abStack_130[0xdd] = 0;
        abStack_130[0xde] = 0;
        abStack_130[0xdf] = 0;
        abStack_130[0xd0] = 0;
        abStack_130[0xd1] = 0;
        abStack_130[0xd2] = 0;
        abStack_130[0xd3] = 0;
        abStack_130[0xd4] = 0;
        abStack_130[0xd5] = 0;
        abStack_130[0xd6] = 0;
        abStack_130[0xd7] = 0;
        abStack_130[0xa8] = 0;
        abStack_130[0xa9] = 0;
        abStack_130[0xaa] = 0;
        abStack_130[0xab] = 0;
        abStack_130[0xac] = 0;
        abStack_130[0xad] = 0;
        abStack_130[0xae] = 0;
        abStack_130[0xaf] = 0;
        abStack_130[0xa0] = 0;
        abStack_130[0xa1] = 0;
        abStack_130[0xa2] = 0;
        abStack_130[0xa3] = 0;
        abStack_130[0xa4] = 0;
        abStack_130[0xa5] = 0;
        abStack_130[0xa6] = 0;
        abStack_130[0xa7] = 0;
        abStack_130[0xb8] = 0;
        abStack_130[0xb9] = 0;
        abStack_130[0xba] = 0;
        abStack_130[0xbb] = 0;
        abStack_130[0xbc] = 0;
        abStack_130[0xbd] = 0;
        abStack_130[0xbe] = 0;
        abStack_130[0xbf] = 0;
        abStack_130[0xb0] = 0;
        abStack_130[0xb1] = 0;
        abStack_130[0xb2] = 0;
        abStack_130[0xb3] = 0;
        abStack_130[0xb4] = 0;
        abStack_130[0xb5] = 0;
        abStack_130[0xb6] = 0;
        abStack_130[0xb7] = 0;
        abStack_130[0x88] = 0;
        abStack_130[0x89] = 0;
        abStack_130[0x8a] = 0;
        abStack_130[0x8b] = 0;
        abStack_130[0x8c] = 0;
        abStack_130[0x8d] = 0;
        abStack_130[0x8e] = 0;
        abStack_130[0x8f] = 0;
        abStack_130[0x80] = 0;
        abStack_130[0x81] = 0;
        abStack_130[0x82] = 0;
        abStack_130[0x83] = 0;
        abStack_130[0x84] = 0;
        abStack_130[0x85] = 0;
        abStack_130[0x86] = 0;
        abStack_130[0x87] = 0;
        abStack_130[0x98] = 0;
        abStack_130[0x99] = 0;
        abStack_130[0x9a] = 0;
        abStack_130[0x9b] = 0;
        abStack_130[0x9c] = 0;
        abStack_130[0x9d] = 0;
        abStack_130[0x9e] = 0;
        abStack_130[0x9f] = 0;
        abStack_130[0x90] = 0;
        abStack_130[0x91] = 0;
        abStack_130[0x92] = 0;
        abStack_130[0x93] = 0;
        abStack_130[0x94] = 0;
        abStack_130[0x95] = 0;
        abStack_130[0x96] = 0;
        abStack_130[0x97] = 0;
        abStack_130[0x68] = 0;
        abStack_130[0x69] = 0;
        abStack_130[0x6a] = 0;
        abStack_130[0x6b] = 0;
        abStack_130[0x6c] = 0;
        abStack_130[0x6d] = 0;
        abStack_130[0x6e] = 0;
        abStack_130[0x6f] = 0;
        abStack_130[0x60] = 0;
        abStack_130[0x61] = 0;
        abStack_130[0x62] = 0;
        abStack_130[99] = 0;
        abStack_130[100] = 0;
        abStack_130[0x65] = 0;
        abStack_130[0x66] = 0;
        abStack_130[0x67] = 0;
        abStack_130[0x78] = 0;
        abStack_130[0x79] = 0;
        abStack_130[0x7a] = 0;
        abStack_130[0x7b] = 0;
        abStack_130[0x7c] = 0;
        abStack_130[0x7d] = 0;
        abStack_130[0x7e] = 0;
        abStack_130[0x7f] = 0;
        abStack_130[0x70] = 0;
        abStack_130[0x71] = 0;
        abStack_130[0x72] = 0;
        abStack_130[0x73] = 0;
        abStack_130[0x74] = 0;
        abStack_130[0x75] = 0;
        abStack_130[0x76] = 0;
        abStack_130[0x77] = 0;
        abStack_130[0x48] = 0;
        abStack_130[0x49] = 0;
        abStack_130[0x4a] = 0;
        abStack_130[0x4b] = 0;
        abStack_130[0x4c] = 0;
        abStack_130[0x4d] = 0;
        abStack_130[0x4e] = 0;
        abStack_130[0x4f] = 0;
        abStack_130[0x40] = 0;
        abStack_130[0x41] = 0;
        abStack_130[0x42] = 0;
        abStack_130[0x43] = 0;
        abStack_130[0x44] = 0;
        abStack_130[0x45] = 0;
        abStack_130[0x46] = 0;
        abStack_130[0x47] = 0;
        abStack_130[0x58] = 0;
        abStack_130[0x59] = 0;
        abStack_130[0x5a] = 0;
        abStack_130[0x5b] = 0;
        abStack_130[0x5c] = 0;
        abStack_130[0x5d] = 0;
        abStack_130[0x5e] = 0;
        abStack_130[0x5f] = 0;
        abStack_130[0x50] = 0;
        abStack_130[0x51] = 0;
        abStack_130[0x52] = 0;
        abStack_130[0x53] = 0;
        abStack_130[0x54] = 0;
        abStack_130[0x55] = 0;
        abStack_130[0x56] = 0;
        abStack_130[0x57] = 0;
        abStack_130[0x28] = 0;
        abStack_130[0x29] = 0;
        abStack_130[0x2a] = 0;
        abStack_130[0x2b] = 0;
        abStack_130[0x2c] = 0;
        abStack_130[0x2d] = 0;
        abStack_130[0x2e] = 0;
        abStack_130[0x2f] = 0;
        abStack_130[0x20] = 0;
        abStack_130[0x21] = 0;
        abStack_130[0x22] = 0;
        abStack_130[0x23] = 0;
        abStack_130[0x24] = 0;
        abStack_130[0x25] = 0;
        abStack_130[0x26] = 0;
        abStack_130[0x27] = 0;
        abStack_130[0x38] = 0;
        abStack_130[0x39] = 0;
        abStack_130[0x3a] = 0;
        abStack_130[0x3b] = 0;
        abStack_130[0x3c] = 0;
        abStack_130[0x3d] = 0;
        abStack_130[0x3e] = 0;
        abStack_130[0x3f] = 0;
        abStack_130[0x30] = 0;
        abStack_130[0x31] = 0;
        abStack_130[0x32] = 0;
        abStack_130[0x33] = 0;
        abStack_130[0x34] = 0;
        abStack_130[0x35] = 0;
        abStack_130[0x36] = 0;
        abStack_130[0x37] = 0;
        abStack_130[8] = 0;
        abStack_130[9] = 0;
        abStack_130[10] = 0;
        abStack_130[0xb] = 0;
        abStack_130[0xc] = 0;
        abStack_130[0xd] = 0;
        abStack_130[0xe] = 0;
        abStack_130[0xf] = 0;
        abStack_130[0] = 0;
        abStack_130[1] = 0;
        abStack_130[2] = 0;
        abStack_130[3] = 0;
        abStack_130[4] = 0;
        abStack_130[5] = 0;
        abStack_130[6] = 0;
        abStack_130[7] = 0;
        abStack_130[0x18] = 0;
        abStack_130[0x19] = 0;
        abStack_130[0x1a] = 0;
        abStack_130[0x1b] = 0;
        abStack_130[0x1c] = 0;
        abStack_130[0x1d] = 0;
        abStack_130[0x1e] = 0;
        abStack_130[0x1f] = 0;
        abStack_130[0x10] = 0;
        abStack_130[0x11] = 0;
        abStack_130[0x12] = 0;
        abStack_130[0x13] = 0;
        abStack_130[0x14] = 0;
        abStack_130[0x15] = 0;
        abStack_130[0x16] = 0;
        abStack_130[0x17] = 0;
        if (param_4 < 2) {
          uVar7 = 0;
LAB_100120270:
          lVar9 = param_4 - uVar7;
          pbVar8 = (byte *)(param_3 + uVar7);
          do {
            abStack_130[*pbVar8] = 1;
            lVar9 = lVar9 + -1;
            pbVar8 = pbVar8 + 1;
          } while (lVar9 != 0);
        }
        else {
          uVar7 = param_4 & 0xfffffffffffffffe;
          pbVar8 = (byte *)(param_3 + 1);
          uVar6 = uVar7;
          do {
            bVar2 = *pbVar8;
            abStack_130[pbVar8[-1]] = 1;
            abStack_130[bVar2] = 1;
            uVar6 = uVar6 - 2;
            pbVar8 = pbVar8 + 2;
          } while (uVar6 != 0);
          if (param_4 != uVar7) goto LAB_100120270;
        }
        if (abStack_130[*(byte *)(param_1 + uVar3)] == 1) {
          uVar6 = uVar3;
          do {
            if (uVar6 == 0) goto LAB_1001202c4;
            uVar3 = uVar6 - 1;
            pbVar8 = (byte *)(param_1 + -1 + uVar6);
            uVar6 = uVar3;
          } while ((abStack_130[*pbVar8] & 1) != 0);
          goto LAB_1001202c8;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
LAB_10012030c:
      func_0x000107c60e78(uVar3);
      uVar4 = 0x300;
      func_0x000107c60e20();
      plVar5 = (long *)0x150;
      func_0x000107c60e20();
      FUN_1001204d0();
      *plVar5 = (long)&PTR_DAT_110cd6430;
      plVar5[0x29] = 0;
      plStack_168 = plVar5;
      func_0x00010012064c(uVar4,uVar3,param_2,&plStack_168);
      if (plStack_168 != (long *)0x0) {
        (**(code **)(*plStack_168 + 8))();
      }
      if (plRam000000011383ad50 != (long *)0x0) {
        (**(code **)(*plRam000000011383ad50 + 8))();
      }
      plRam000000011383ad50 = (long *)uVar4;
      return;
    }
  }
  return;
}



/* Entry: 1001203b0; end: 1001204cf;  */

bool FUN_1001203b0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0,0x1001204c8);
    (*pcVar5)();
  }
  uVar6 = param_2;
  func_0x000107c613d0();
  plVar9 = (long *)(param_1 + 0x20);
  plVar11 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar11 != (long *)0x0) {
    do {
      cVar4 = *(char *)((long)plVar11 + 0x37);
      puVar7 = (ulong *)plVar11[4];
      if (-1 < (long)cVar4) {
        puVar7 = (ulong *)(plVar11 + 4);
      }
      uVar3 = plVar11[5];
      if (-1 < cVar4) {
        uVar3 = (long)cVar4;
      }
      uVar1 = uVar6;
      if (uVar3 <= uVar6) {
        uVar1 = uVar3;
      }
      func_0x000107c610b0(puVar7,param_2,uVar1);
      uVar8 = (uint)((ulong)puVar7 >> 0x1f) & 1;
      uVar1 = 8;
      if (uVar3 >= uVar6) {
        uVar1 = 0;
      }
      uVar2 = (ulong)((uint)((ulong)puVar7 >> 0x1c) & 8);
      if ((int)puVar7 == 0) {
        uVar8 = (uint)(uVar3 < uVar6);
        uVar2 = uVar1;
      }
      if (uVar8 == 0) {
        plVar10 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + uVar2);
    } while (plVar11 != (long *)0x0);
    if (plVar10 != plVar9) {
      cVar4 = *(char *)((long)plVar10 + 0x37);
      plVar11 = (long *)plVar10[4];
      if (-1 < (long)cVar4) {
        plVar11 = plVar10 + 4;
      }
      uVar3 = plVar10[5];
      if (-1 < cVar4) {
        uVar3 = (long)cVar4;
      }
      uVar1 = uVar3;
      if (uVar6 <= uVar3) {
        uVar1 = uVar6;
      }
      func_0x000107c610b0(param_2,plVar11,uVar1);
      if ((int)param_2 == 0) {
        if (uVar3 <= uVar6) goto LAB_100120498;
      }
      else if (-1 < (int)param_2) goto LAB_100120498;
    }
  }
  plVar10 = plVar9;
LAB_100120498:
  return plVar9 != plVar10;
}



/* Entry: 1001204d0; end: 100120c43;  */

/* WARNING: Possible PIC construction at 0x000100120c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100120c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100120c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100120c78) */
/* WARNING: Removing unreachable block (ram,0x000100120c60) */
/* WARNING: Removing unreachable block (ram,0x000100120c90) */

long * FUN_1001204d0(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long lStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long alStack_58 [3];
  
  alStack_58[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_DAT_110cd5e30;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  lVar9 = lRam000000011383a988;
  if (lRam000000011383a988 != 0) {
    FUN_1001203b0(lRam000000011383a988,&UNK_10e574b83);
  }
  *(char *)(param_1 + 5) = (char)lVar9;
  puVar8 = (undefined4 *)0x4;
  func_0x000107c60e20();
  *puVar8 = 0;
  param_1[6] = (long)puVar8;
  param_1[7] = 0;
  alStack_58[0] = -0x5555555555555556;
  alStack_58[1] = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(alStack_58);
  func_0x000107c61274(alStack_58,1);
  func_0x000107c6125c(param_1 + 8,alStack_58);
  func_0x000107c6126c(alStack_58);
  lVar9 = 0x40;
  func_0x000107c60e20();
  *(long **)(lVar9 + 0x30) = param_1 + 8;
  *(undefined1 *)(lVar9 + 0x38) = 1;
  func_0x000107c61224();
  param_1[0x10] = lVar9;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  alStack_58[0] = -0x5555555555555556;
  alStack_58[1] = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(alStack_58);
  func_0x000107c61274(alStack_58,1);
  plVar14 = alStack_58;
  func_0x000107c6125c(param_1 + 0x15);
  plVar10 = alStack_58;
  func_0x000107c6126c();
  plVar11 = param_1 + 0x1f;
  *(int *)plVar11 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)param_1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = (int)*plVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = (long)(param_1 + 0x1e);
  *(undefined1 *)(param_1[0x10] + 0x38) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_58[2]) {
    return param_1;
  }
  func_0x000107c60e78();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar10 + 2;
  *plVar13 = (long)&PTR_DAT_110cd6108;
  plRam000000011383ad30 = plVar10 + 3;
  *plRam000000011383ad30 = (long)&PTR_DAT_110cd6130;
  *plVar10 = (long)&PTR_DAT_110cd6000;
  plVar10[1] = (long)&PTR_DAT_110cd60c8;
  lVar9 = *param_4;
  *param_4 = 0;
  plVar10[4] = lVar9;
  plVar11 = (long *)0x19;
  func_0x000107c60e20();
  pcStack_d8 = (char *)0x8000000000000019;
  lStack_e0 = 0x17;
  plVar11[1] = 0x6369767265536c6f;
  *plVar11 = 0x6f50646165726854;
  *(undefined8 *)((long)plVar11 + 0xf) = 0x6461657268546563;
  *(undefined1 *)((long)plVar11 + 0x17) = 0;
  plStack_e8 = plVar11;
  FUN_100120d44(plVar10 + 5,&plStack_e8);
  func_0x000107c60e14(plVar11);
  plVar10[5] = (long)&PTR_DAT_110cd5d90;
  if ((bRam000000011383c618 & 1) == 0) {
    iVar7 = 0x1383c618;
    func_0x000107c60e48();
    if (iVar7 != 0) {
      ppuRam000000011383c610 = &PTR_DAT_110cd6250;
      func_0x000107c60e4c(0x11383c618);
    }
  }
  puVar8 = (undefined4 *)0x38;
  func_0x000107c60e20();
  *puVar8 = 1;
  *(undefined **)(puVar8 + 2) = &UNK_10b317850;
  *(undefined **)(puVar8 + 4) = &UNK_10b31786c;
  *(undefined8 *)(puVar8 + 6) = 0x100142430;
  *(undefined **)(puVar8 + 8) = &UNK_10b316e34;
  *(undefined8 *)(puVar8 + 10) = 0;
  *(long **)(puVar8 + 0xc) = plVar10 + 0x2a;
  plVar10[0x2a] = (long)puVar8;
  plVar10[0x2b] = 0x11383c610;
  plStack_e8 = (long *)0xaaaaaaaaaaaaaaaa;
  lStack_e0 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&plStack_e8);
  func_0x000107c61274(&plStack_e8,1);
  func_0x000107c6125c(plVar10 + 0x2c,&plStack_e8);
  func_0x000107c6126c(&plStack_e8);
  plVar10[0x35] = 0;
  plVar10[0x34] = 0;
  plVar10[0x37] = 0;
  plVar10[0x36] = 0;
  plVar11 = (long *)(plVar10[4] + 0xf0);
  piVar1 = (int *)(plVar10[4] + 0xf8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar10[0x38] = *plVar11;
  plVar10[0x39] = (long)plVar11;
  plVar10[0x3a] = (long)(plVar10 + 0x2a);
  plVar10[0x3b] = 0;
  plStack_e8 = (long *)0xaaaaaaaaaaaaaaaa;
  lStack_e0 = -0x5555555555555556;
  func_0x000107c61270(&plStack_e8);
  func_0x000107c61274(&plStack_e8,1);
  func_0x000107c6125c(plVar10 + 0x3c,&plStack_e8);
  func_0x000107c6126c(&plStack_e8);
  *(undefined4 *)(plVar10 + 0x47) = 0;
  plVar10[0x46] = 0;
  plVar10[0x45] = 0;
  plVar10[0x44] = 0;
  plVar10[0x49] = 0;
  plVar10[0x48] = 0;
  plVar10[0x4b] = 0;
  plVar10[0x4a] = 0;
  plVar10[0x4d] = 0;
  plVar10[0x4c] = 0;
  plVar10[0x4f] = 0;
  plVar10[0x4e] = 0;
  *(undefined1 *)(plVar10 + 0x50) = 0;
  uRam000000011383ad28 = 1;
  plVar11 = plVar10 + 0x51;
  plVar10[0x52] = 0;
  *plVar11 = 0;
  *(undefined4 *)(plVar10 + 0x53) = 0;
  lVar9 = lRam000000011383a988;
  if (lRam000000011383a988 != 0) {
    FUN_1001203b0(lRam000000011383a988,&UNK_10e574b30);
  }
  *(char *)((long)plVar10 + 0x29c) = (char)lVar9;
  plVar10[0x54] = 0;
  plVar2 = plVar10 + 0x55;
  plVar10[0x55] = (long)plVar13;
  plVar3 = plVar10 + 0x56;
  *(undefined4 *)(plVar10 + 0x56) = 0;
  *(undefined1 *)(plVar10 + 0x57) = 0;
  plVar10[0x59] = 0;
  plVar10[0x58] = 0;
  plVar10[0x5b] = 0;
  plVar10[0x5a] = 0;
  plVar10[0x5c] = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined1 *)(plVar10 + 0x5d) = 1;
  plVar10[0x5e] = (long)plVar13;
  plVar10[0x5f] = (long)plVar2;
  if (param_3 == 0) {
    plStack_120 = (long *)0x0;
    uStack_118 = 0;
    lStack_110 = 0;
  }
  else {
    pcStack_d8 = "Foreground";
    uStack_d0 = 10;
    plStack_e8 = plVar14;
    lStack_e0 = param_3;
    FUN_100120e70(&plStack_120,&plStack_e8,2,&DAT_10f62a9de,1);
  }
  puVar16 = (undefined8 *)(plVar10[4] + 0xf0);
  uVar15 = *puVar16;
  piVar1 = (int *)(plVar10[4] + 0xf8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar9 = *plVar2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar12 = 0x230;
  func_0x000107c60e20();
  lStack_108 = lVar9;
  plStack_100 = plVar2;
  uStack_f8 = uVar15;
  puStack_f0 = puVar16;
  func_0x000100121950();
  if (plStack_100 != (long *)0x0) {
    plVar13 = plStack_100 + 1;
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      if ((*(byte *)(plStack_100 + 2) & 1) == 0) goto LAB_100120bc8;
      func_0x00010012c800(plStack_100 + 3);
    }
  }
  if (puStack_f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(puStack_f0 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      if ((*(byte *)(puStack_f0 + 2) & 1) == 0) goto LAB_100120bc8;
      func_0x00010012c800(puStack_f0 + 3);
    }
  }
  plVar13 = (long *)*plVar11;
  *plVar11 = lVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  if (lStack_110 < 0) {
    plVar13 = plStack_120;
    func_0x000107c60e14(plStack_120);
  }
  if ((bRam000000011383ad20 & 1) == 0) {
    plVar13 = (long *)0x11383ad20;
    func_0x000107c60e48();
    if ((int)plVar13 != 0) {
      if (lRam000000011383a988 != 0) {
        FUN_1001203b0(lRam000000011383a988,&UNK_10e574b65);
      }
      cRam000000011383ad18 = '\x01';
      plVar13 = (long *)0x11383ad20;
      func_0x000107c60e4c(0x11383ad20);
    }
  }
  if (cRam000000011383ad18 == '\x01') {
    if (param_3 == 0) {
      plStack_120 = (long *)0x0;
      uStack_118 = 0;
      lStack_110 = 0;
    }
    else {
      pcStack_d8 = "Background";
      uStack_d0 = 10;
      plStack_e8 = plVar14;
      lStack_e0 = param_3;
      FUN_100120e70(&plStack_120,&plStack_e8,2,&DAT_10f62a9de,1);
    }
    puVar16 = (undefined8 *)(plVar10[4] + 0xf0);
    uVar15 = *puVar16;
    piVar1 = (int *)(plVar10[4] + 0xf8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *plVar2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = 0x230;
    func_0x000107c60e20();
    lStack_108 = lVar9;
    plStack_100 = plVar2;
    uStack_f8 = uVar15;
    puStack_f0 = puVar16;
    func_0x000100121950();
    if (plStack_100 != (long *)0x0) {
      plVar14 = plStack_100 + 1;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        if ((*(byte *)(plStack_100 + 2) & 1) == 0) goto LAB_100120bc8;
        func_0x00010012c800(plStack_100 + 3);
      }
    }
    if (puStack_f0 != (undefined8 *)0x0) {
      piVar1 = (int *)(puStack_f0 + 1);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        if ((*(byte *)(puStack_f0 + 2) & 1) == 0) {
LAB_100120bc8:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100120bcc);
          (*pcVar6)();
        }
        func_0x00010012c800(puStack_f0 + 3);
      }
    }
    plVar13 = (long *)plVar10[0x52];
    plVar10[0x52] = lVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    if (lStack_110 < 0) {
      plVar13 = plStack_120;
      func_0x000107c60e14(plStack_120);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    func_0x000107c60e78();
    plVar13 = plVar13 + 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(plVar13,0);
    return plVar13;
  }
  return plVar10;
}



/* Entry: 100120c44; end: 100120caf; -[SCCameraDeviceSettings .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100120c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100120c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100120c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100120c78) */
/* WARNING: Removing unreachable block (ram,0x000100120c60) */
/* WARNING: Removing unreachable block (ram,0x000100120c90) */

void FUN_100120c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 100120cb0; end: 100120d03;  */

void FUN_100120cb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d5cec0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100120d04(0xff,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112d5cec0 = puVar2;
  return;
}



/* Entry: 100120d04; end: 100120d43;  */

void FUN_100120d04(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100120d44; end: 100120e6f;  */

ulong * FUN_100120d44(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong *extraout_x8;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (ulong)&PTR_DAT_110cd61b0;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 10) = 0;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&uStack_48);
  func_0x000107c61274(&uStack_48,1);
  func_0x000107c6125c(param_1 + 2,&uStack_48);
  func_0x000107c6126c(&uStack_48);
  param_1[10] = 0;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&uStack_48);
  func_0x000107c61274(&uStack_48,1);
  func_0x000107c6125c(param_1 + 0xb,&uStack_48);
  func_0x000107c6126c(&uStack_48);
  *(undefined4 *)(param_1 + 0x13) = 0;
  func_0x0001000fff3c(param_1 + 0x14,0,1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1 + 0x1c,*param_2,param_2[1]);
  }
  else {
    uVar14 = param_2[1];
    uVar15 = *param_2;
    param_1[0x1e] = param_2[2];
    param_1[0x1d] = uVar14;
    param_1[0x1c] = uVar15;
  }
  puVar17 = param_1 + 0x1f;
  lVar9 = 0;
  uVar10 = 1;
  func_0x0001000fff3c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  if (lVar9 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return puVar17;
  }
  uVar15 = (lVar9 + -1) * param_4;
  uVar14 = lVar9 * 0x10 - 0x10;
  puVar7 = puVar17;
  if (0x3f < uVar14) {
    uVar14 = (uVar14 >> 4) + 1;
    uVar11 = uVar14 & 3;
    uVar18 = 4;
    if (uVar11 != 0) {
      uVar18 = uVar11;
    }
    lVar16 = uVar14 - uVar18;
    lVar4 = lVar16 * 2;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    puVar7 = puVar17 + 5;
    do {
      uVar15 = puVar7[-4] + uVar15;
      lVar22 = puVar7[-2] + lVar22;
      lVar20 = *puVar7 + lVar20;
      lVar21 = puVar7[2] + lVar21;
      puVar7 = puVar7 + 8;
      lVar16 = lVar16 + -4;
    } while (lVar16 != 0);
    uVar15 = lVar20 + uVar15 + lVar21 + lVar22;
    puVar7 = puVar17 + lVar4;
  }
  do {
    uVar15 = puVar7[1] + uVar15;
    puVar7 = puVar7 + 2;
  } while (puVar7 != puVar17 + lVar9 * 2);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar7 = puVar17;
  if (0x7ffffffffffffff6 < uVar15) goto LAB_100121354;
  if (uVar15 < 0x17) {
    uVar18 = 0x16;
    uVar15 = *puVar17;
    uVar14 = puVar17[1];
    uVar11 = uVar14 - 0x16;
    puVar6 = extraout_x8;
    if (0x15 < uVar14 && uVar11 != 0) goto LAB_100120fec;
LAB_100120fa8:
    if (uVar14 == 0) goto LAB_100121060;
    puVar7 = puVar6;
    func_0x000107c610b8(puVar6,uVar15,uVar14);
    puVar12 = puVar6;
    if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
      extraout_x8[1] = uVar14;
    }
    else {
      *(byte *)((long)extraout_x8 + 0x17) = (byte)uVar14 & 0x7f;
    }
  }
  else {
    puVar7 = (ulong *)0x19;
    if ((uVar15 | 7) != 0x17) {
      puVar7 = (ulong *)((uVar15 | 7) + 1);
    }
    puVar6 = puVar7;
    func_0x000107c60e20();
    *(char *)puVar6 = (char)*extraout_x8;
    extraout_x8[1] = 0;
    extraout_x8[2] = (ulong)puVar7 | 0x8000000000000000;
    *extraout_x8 = (ulong)puVar6;
    uVar18 = (long)puVar7 - 1;
    uVar15 = *puVar17;
    uVar14 = puVar17[1];
    uVar11 = uVar14 - uVar18;
    puVar7 = puVar6;
    if (uVar14 < uVar18 || uVar11 == 0) goto LAB_100120fa8;
LAB_100120fec:
    if (0x7ffffffffffffff6 - uVar18 < uVar11) {
LAB_100121354:
      func_0x000104bd47d4();
      puVar17 = (ulong *)puVar7[2];
      puVar6 = (ulong *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (puVar17 != (ulong *)0x0) {
        uVar15 = 0;
        FUN_1000285a8(0x112da0590);
        puVar6 = puVar17;
        func_0x000107c60498();
        func_0x000107c6157c();
        puVar7 = puVar7 + 6;
        do {
          uVar14 = puVar7[-2];
          uVar11 = puVar7[-1];
          uVar19 = *puVar7;
          func_0x000107c61174();
          func_0x000107c61434(uVar19);
          uVar18 = uVar14;
          FUN_100121450();
          if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10012144c);
            (*pcVar5)();
          }
          uVar13 = uVar18 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)puVar6 + uVar13 + 0x40) =
               *(ulong *)((long)puVar6 + uVar13 + 0x40) | 1L << (uVar18 & 0x3f);
          *(ulong *)(puVar6[6] + uVar18 * 8) = uVar14;
          puVar12 = (ulong *)(puVar6[7] + uVar18 * 0x10);
          *puVar12 = uVar11;
          puVar12[1] = uVar19;
          if (SCARRY8(puVar6[2],1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100121450);
            (*pcVar5)();
          }
          puVar6[2] = puVar6[2] + 1;
          puVar17 = (ulong *)((long)puVar17 - 1);
          puVar7 = puVar7 + 3;
        } while (puVar17 != (ulong *)0x0);
        func_0x000107c61574(puVar6);
      }
      return puVar6;
    }
    uVar15 = uVar14;
    if (uVar14 <= uVar18 * 2) {
      uVar15 = uVar18 * 2;
    }
    uVar15 = uVar15 | 7;
    if (0x3ffffffffffffff2 < uVar18) {
      uVar15 = 0x7ffffffffffffff6;
    }
    puVar12 = (ulong *)(uVar15 + 1);
    func_0x000107c60e20();
    puVar7 = puVar12;
    func_0x000107c610b8();
    if (uVar18 != 0x16) {
      func_0x000107c60e14();
      puVar7 = puVar6;
    }
    extraout_x8[1] = uVar14;
    extraout_x8[2] = uVar15 + 1 | 0x8000000000000000;
    *extraout_x8 = (ulong)puVar12;
  }
  *(undefined1 *)((long)puVar12 + uVar14) = 0;
LAB_100121060:
  if (lVar9 != 1) {
    puVar6 = puVar17 + 2;
    do {
      bVar2 = *(byte *)((long)extraout_x8 + 0x17);
      uVar11 = extraout_x8[1];
      uVar15 = extraout_x8[2];
      uVar18 = (uVar15 & 0x7fffffffffffffff) - 1;
      uVar14 = uVar11;
      if (-1 < (char)bVar2) {
        uVar18 = 0x16;
        uVar14 = (ulong)bVar2;
      }
      if (uVar18 - uVar14 < param_4) {
        uVar11 = uVar14 + param_4;
        if (0x7ffffffffffffff6 - uVar18 < uVar11 - uVar18) goto LAB_100121354;
        puVar12 = (ulong *)*extraout_x8;
        if (-1 < (char)bVar2) {
          puVar12 = extraout_x8;
        }
        if (uVar18 < 0x3ffffffffffffff3) {
          uVar19 = uVar11;
          if (uVar11 <= uVar18 * 2) {
            uVar19 = uVar18 * 2;
          }
          uVar13 = 0x19;
          if ((uVar19 | 7) != 0x17) {
            uVar13 = (uVar19 | 7) + 1;
          }
          uVar15 = 0x17;
          if (0x16 < uVar19) {
            uVar15 = uVar13;
          }
          uVar19 = uVar15;
          func_0x000107c60e20();
        }
        else {
          uVar15 = 0x7ffffffffffffff7;
          uVar19 = uVar15;
          func_0x000107c60e20();
        }
        if (uVar14 != 0) {
          func_0x000107c610b8(uVar19,puVar12,uVar14);
        }
        puVar7 = (ulong *)(uVar19 + uVar14);
        func_0x000107c610b8(puVar7,uVar10,param_4);
        if (uVar18 != 0x16) {
          func_0x000107c60e14();
          puVar7 = puVar12;
        }
        uVar15 = uVar15 | 0x8000000000000000;
        extraout_x8[1] = uVar11;
        extraout_x8[2] = uVar15;
        *extraout_x8 = uVar19;
        *(undefined1 *)(uVar19 + uVar11) = 0;
        uVar14 = uVar15 >> 0x38;
      }
      else if (param_4 == 0) {
        uVar14 = uVar15 >> 0x38;
      }
      else {
        puVar12 = (ulong *)*extraout_x8;
        if (-1 < (char)bVar2) {
          puVar12 = extraout_x8;
        }
        puVar7 = (ulong *)((long)puVar12 + uVar14);
        func_0x000107c610b8(puVar7,uVar10,param_4);
        uVar14 = uVar14 + param_4;
        if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
          extraout_x8[1] = uVar14;
        }
        else {
          *(byte *)((long)extraout_x8 + 0x17) = (byte)uVar14 & 0x7f;
        }
        *(undefined1 *)((long)puVar12 + uVar14) = 0;
        uVar14 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
        uVar11 = extraout_x8[1];
        uVar15 = extraout_x8[2];
      }
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      cVar3 = (char)uVar14;
      uVar15 = (uVar15 & 0x7fffffffffffffff) - 1;
      if (-1 < cVar3) {
        uVar15 = 0x16;
        uVar11 = uVar14;
      }
      if (uVar15 - uVar11 < uVar19) {
        uVar14 = uVar11 + uVar19;
        if (0x7ffffffffffffff6 - uVar15 < uVar14 - uVar15) goto LAB_100121354;
        puVar12 = (ulong *)*extraout_x8;
        if (-1 < cVar3) {
          puVar12 = extraout_x8;
        }
        if (uVar15 < 0x3ffffffffffffff3) {
          uVar8 = uVar14;
          if (uVar14 <= uVar15 * 2) {
            uVar8 = uVar15 * 2;
          }
          uVar1 = 0x19;
          if ((uVar8 | 7) != 0x17) {
            uVar1 = (uVar8 | 7) + 1;
          }
          uVar13 = 0x17;
          if (0x16 < uVar8) {
            uVar13 = uVar1;
          }
          uVar8 = uVar13;
          func_0x000107c60e20();
        }
        else {
          uVar13 = 0x7ffffffffffffff7;
          uVar8 = uVar13;
          func_0x000107c60e20();
        }
        if (uVar11 != 0) {
          func_0x000107c610b8(uVar8,puVar12,uVar11);
        }
        puVar7 = (ulong *)(uVar8 + uVar11);
        func_0x000107c610b8(puVar7,uVar18,uVar19);
        if (uVar15 != 0x16) {
          func_0x000107c60e14();
          puVar7 = puVar12;
        }
        extraout_x8[1] = uVar14;
        extraout_x8[2] = uVar13 | 0x8000000000000000;
        *extraout_x8 = uVar8;
        *(undefined1 *)(uVar8 + uVar14) = 0;
      }
      else if (uVar19 != 0) {
        puVar12 = (ulong *)*extraout_x8;
        if (-1 < cVar3) {
          puVar12 = extraout_x8;
        }
        puVar7 = (ulong *)((long)puVar12 + uVar11);
        func_0x000107c610b8(puVar7,uVar18,uVar19);
        uVar11 = uVar11 + uVar19;
        if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
          extraout_x8[1] = uVar11;
          *(undefined1 *)((long)puVar12 + uVar11) = 0;
        }
        else {
          *(byte *)((long)extraout_x8 + 0x17) = (byte)uVar11 & 0x7f;
          *(undefined1 *)((long)puVar12 + uVar11) = 0;
        }
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar17 + lVar9 * 2);
  }
  return puVar7;
}



/* Entry: 100120e70; end: 100121357;  */

ulong * FUN_100120e70(ulong *param_1,ulong *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  code *pcVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_2;
  }
  uVar13 = (param_3 + -1) * param_5;
  uVar12 = param_3 * 0x10 - 0x10;
  puVar7 = param_2;
  if (0x3f < uVar12) {
    uVar12 = (uVar12 >> 4) + 1;
    uVar10 = uVar12 & 3;
    uVar16 = 4;
    if (uVar10 != 0) {
      uVar16 = uVar10;
    }
    lVar14 = uVar12 - uVar16;
    lVar5 = lVar14 * 2;
    lVar18 = 0;
    lVar19 = 0;
    lVar20 = 0;
    puVar7 = param_2 + 5;
    do {
      uVar13 = puVar7[-4] + uVar13;
      lVar20 = puVar7[-2] + lVar20;
      lVar18 = *puVar7 + lVar18;
      lVar19 = puVar7[2] + lVar19;
      puVar7 = puVar7 + 8;
      lVar14 = lVar14 + -4;
    } while (lVar14 != 0);
    uVar13 = lVar18 + uVar13 + lVar19 + lVar20;
    puVar7 = param_2 + lVar5;
  }
  do {
    uVar13 = puVar7[1] + uVar13;
    puVar7 = puVar7 + 2;
  } while (puVar7 != param_2 + param_3 * 2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar7 = param_2;
  if (0x7ffffffffffffff6 < uVar13) goto LAB_100121354;
  if (uVar13 < 0x17) {
    uVar16 = 0x16;
    uVar13 = *param_2;
    uVar12 = param_2[1];
    uVar10 = uVar12 - 0x16;
    puVar8 = param_1;
    puVar15 = param_1;
    if (0x15 < uVar12 && uVar10 != 0) goto LAB_100120fec;
LAB_100120fa8:
    if (uVar12 == 0) goto LAB_100121060;
    puVar7 = puVar15;
    func_0x000107c610b8(puVar15,uVar13,uVar12);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = uVar12;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar12 & 0x7f;
    }
  }
  else {
    puVar15 = (ulong *)0x19;
    if ((uVar13 | 7) != 0x17) {
      puVar15 = (ulong *)((uVar13 | 7) + 1);
    }
    puVar7 = puVar15;
    func_0x000107c60e20();
    *(char *)puVar7 = (char)*param_1;
    param_1[1] = 0;
    param_1[2] = (ulong)puVar15 | 0x8000000000000000;
    *param_1 = (ulong)puVar7;
    uVar16 = (long)puVar15 - 1;
    uVar13 = *param_2;
    uVar12 = param_2[1];
    uVar10 = uVar12 - uVar16;
    puVar8 = puVar7;
    puVar15 = puVar7;
    if (uVar12 < uVar16 || uVar10 == 0) goto LAB_100120fa8;
LAB_100120fec:
    if (0x7ffffffffffffff6 - uVar16 < uVar10) {
LAB_100121354:
      func_0x000104bd47d4();
      puVar15 = (ulong *)puVar7[2];
      puVar8 = (ulong *)PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (puVar15 != (ulong *)0x0) {
        uVar13 = 0;
        FUN_1000285a8(0x112da0590);
        puVar8 = puVar15;
        func_0x000107c60498();
        func_0x000107c6157c();
        puVar7 = puVar7 + 6;
        do {
          uVar12 = puVar7[-2];
          uVar10 = puVar7[-1];
          uVar17 = *puVar7;
          func_0x000107c61174();
          func_0x000107c61434(uVar17);
          uVar16 = uVar12;
          FUN_100121450();
          if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10012144c);
            (*pcVar6)();
          }
          uVar11 = uVar16 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)puVar8 + uVar11 + 0x40) =
               *(ulong *)((long)puVar8 + uVar11 + 0x40) | 1L << (uVar16 & 0x3f);
          *(ulong *)(puVar8[6] + uVar16 * 8) = uVar12;
          puVar1 = (ulong *)(puVar8[7] + uVar16 * 0x10);
          *puVar1 = uVar10;
          puVar1[1] = uVar17;
          if (SCARRY8(puVar8[2],1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100121450);
            (*pcVar6)();
          }
          puVar8[2] = puVar8[2] + 1;
          puVar15 = (ulong *)((long)puVar15 - 1);
          puVar7 = puVar7 + 3;
        } while (puVar15 != (ulong *)0x0);
        func_0x000107c61574(puVar8);
      }
      return puVar8;
    }
    uVar13 = uVar12;
    if (uVar12 <= uVar16 * 2) {
      uVar13 = uVar16 * 2;
    }
    uVar13 = uVar13 | 7;
    if (0x3ffffffffffffff2 < uVar16) {
      uVar13 = 0x7ffffffffffffff6;
    }
    puVar15 = (ulong *)(uVar13 + 1);
    func_0x000107c60e20();
    puVar7 = puVar15;
    func_0x000107c610b8();
    if (uVar16 != 0x16) {
      func_0x000107c60e14();
      puVar7 = puVar8;
    }
    param_1[1] = uVar12;
    param_1[2] = uVar13 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar15;
  }
  *(undefined1 *)((long)puVar15 + uVar12) = 0;
LAB_100121060:
  if (param_3 != 1) {
    puVar15 = param_2 + 2;
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar10 = param_1[1];
      uVar13 = param_1[2];
      uVar16 = (uVar13 & 0x7fffffffffffffff) - 1;
      uVar12 = uVar10;
      if (-1 < (char)bVar3) {
        uVar16 = 0x16;
        uVar12 = (ulong)bVar3;
      }
      if (uVar16 - uVar12 < param_5) {
        uVar10 = uVar12 + param_5;
        if (0x7ffffffffffffff6 - uVar16 < uVar10 - uVar16) goto LAB_100121354;
        puVar8 = (ulong *)*param_1;
        if (-1 < (char)bVar3) {
          puVar8 = param_1;
        }
        if (uVar16 < 0x3ffffffffffffff3) {
          uVar17 = uVar10;
          if (uVar10 <= uVar16 * 2) {
            uVar17 = uVar16 * 2;
          }
          uVar11 = 0x19;
          if ((uVar17 | 7) != 0x17) {
            uVar11 = (uVar17 | 7) + 1;
          }
          uVar13 = 0x17;
          if (0x16 < uVar17) {
            uVar13 = uVar11;
          }
          uVar17 = uVar13;
          func_0x000107c60e20();
        }
        else {
          uVar13 = 0x7ffffffffffffff7;
          uVar17 = uVar13;
          func_0x000107c60e20();
        }
        if (uVar12 != 0) {
          func_0x000107c610b8(uVar17,puVar8,uVar12);
        }
        puVar7 = (ulong *)(uVar17 + uVar12);
        func_0x000107c610b8(puVar7,param_4,param_5);
        if (uVar16 != 0x16) {
          func_0x000107c60e14();
          puVar7 = puVar8;
        }
        uVar13 = uVar13 | 0x8000000000000000;
        param_1[1] = uVar10;
        param_1[2] = uVar13;
        *param_1 = uVar17;
        *(undefined1 *)(uVar17 + uVar10) = 0;
        uVar12 = uVar13 >> 0x38;
      }
      else if (param_5 == 0) {
        uVar12 = uVar13 >> 0x38;
      }
      else {
        puVar8 = (ulong *)*param_1;
        if (-1 < (char)bVar3) {
          puVar8 = param_1;
        }
        puVar7 = (ulong *)((long)puVar8 + uVar12);
        func_0x000107c610b8(puVar7,param_4,param_5);
        uVar12 = uVar12 + param_5;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar12;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar12 & 0x7f;
        }
        *(undefined1 *)((long)puVar8 + uVar12) = 0;
        uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
        uVar10 = param_1[1];
        uVar13 = param_1[2];
      }
      uVar16 = *puVar15;
      uVar17 = puVar15[1];
      cVar4 = (char)uVar12;
      uVar13 = (uVar13 & 0x7fffffffffffffff) - 1;
      if (-1 < cVar4) {
        uVar13 = 0x16;
        uVar10 = uVar12;
      }
      if (uVar13 - uVar10 < uVar17) {
        uVar12 = uVar10 + uVar17;
        if (0x7ffffffffffffff6 - uVar13 < uVar12 - uVar13) goto LAB_100121354;
        puVar8 = (ulong *)*param_1;
        if (-1 < cVar4) {
          puVar8 = param_1;
        }
        if (uVar13 < 0x3ffffffffffffff3) {
          uVar9 = uVar12;
          if (uVar12 <= uVar13 * 2) {
            uVar9 = uVar13 * 2;
          }
          uVar2 = 0x19;
          if ((uVar9 | 7) != 0x17) {
            uVar2 = (uVar9 | 7) + 1;
          }
          uVar11 = 0x17;
          if (0x16 < uVar9) {
            uVar11 = uVar2;
          }
          uVar9 = uVar11;
          func_0x000107c60e20();
        }
        else {
          uVar11 = 0x7ffffffffffffff7;
          uVar9 = uVar11;
          func_0x000107c60e20();
        }
        if (uVar10 != 0) {
          func_0x000107c610b8(uVar9,puVar8,uVar10);
        }
        puVar7 = (ulong *)(uVar9 + uVar10);
        func_0x000107c610b8(puVar7,uVar16,uVar17);
        if (uVar13 != 0x16) {
          func_0x000107c60e14();
          puVar7 = puVar8;
        }
        param_1[1] = uVar12;
        param_1[2] = uVar11 | 0x8000000000000000;
        *param_1 = uVar9;
        *(undefined1 *)(uVar9 + uVar12) = 0;
      }
      else if (uVar17 != 0) {
        puVar8 = (ulong *)*param_1;
        if (-1 < cVar4) {
          puVar8 = param_1;
        }
        puVar7 = (ulong *)((long)puVar8 + uVar10);
        func_0x000107c610b8(puVar7,uVar16,uVar17);
        uVar10 = uVar10 + uVar17;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = uVar10;
          *(undefined1 *)((long)puVar8 + uVar10) = 0;
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)uVar10 & 0x7f;
          *(undefined1 *)((long)puVar8 + uVar10) = 0;
        }
      }
      puVar15 = puVar15 + 2;
    } while (puVar15 != param_2 + param_3 * 2);
  }
  return puVar7;
}



/* Entry: 100121358; end: 10012144f;  */

undefined * FUN_100121358(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    uVar7 = 0;
    FUN_1000285a8(0x112da0590);
    puVar4 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar5 = puVar11[-2];
      uVar2 = puVar11[-1];
      uVar10 = *puVar11;
      func_0x000107c61174();
      func_0x000107c61434(uVar10);
      uVar6 = uVar5;
      FUN_100121450();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10012144c);
        (*pcVar3)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) = *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar6 * 8) = uVar5;
      puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100121450);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 3;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 100121450; end: 10012147f;  */

undefined1  [16] FUN_100121450(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60114();
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100120d04(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    do {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c60118();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 100121480; end: 1001214cb;  */

void FUN_100121480(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001214cc; end: 100121597;  */

undefined1  [16] FUN_1001214cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_100120d04(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100121598; end: 1001215a7; -[SCSystemLocationServices deviceLocationPermissionsManager] */

undefined8 FUN_100121598(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1001215a8; end: 10012163b;  */

void FUN_1001215a8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10012163c; end: 10012163f;  */

void FUN_10012163c(long param_1,long param_2)

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



/* Entry: 100121640; end: 1001216d7;  */

void FUN_100121640(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = PTR_PTR_1126bc3c0;
  func_0x000107c61168();
  FUN_100083b20(&uStack_58);
  func_0x000107c5a9f4(puVar5,param_3,uVar1,uVar3,uVar2,uVar4,uStack_58);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  *param_1 = puVar5;
  return;
}



/* Entry: 1001216d8; end: 1001217a7; +[SCCameraHardwareRequest updateDeviceFormatWithDeviceSettingsMap:errorHandler:requestingFeatures:] */

void FUN_1001216d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126b00d0;
  func_0x000107c61174(param_4);
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar4 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = param_4;
  func_0x000107c61184();
  func_0x000107c61170(param_4);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = uVar4;
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_5;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1001217a8; end: 100121bd7;  */

/* WARNING: Possible PIC construction at 0x0001001218d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001218e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100121900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100121910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100121920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100121914) */
/* WARNING: Removing unreachable block (ram,0x000100121904) */
/* WARNING: Removing unreachable block (ram,0x0001001218e8) */
/* WARNING: Removing unreachable block (ram,0x0001001218d8) */
/* WARNING: Removing unreachable block (ram,0x000100121924) */

void FUN_1001217a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9da8;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c610f4();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3f070();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5ab6c();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3f0ec();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c49b08();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c464b4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100121bd8; end: 100121f3b;  */

void FUN_100121bd8(long *param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  int *piStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  ulong auStack_d0 [11];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar16 = *param_3;
  iVar13 = *param_4;
  bVar17 = iVar16 <= iVar13;
  iVar15 = iVar16;
  if (iVar13 < iVar16) {
    *param_3 = iVar13;
    *param_4 = iVar16;
    iVar15 = *param_3;
    iVar13 = iVar16;
  }
  if (iVar15 < 1) {
    iVar16 = 1;
    *param_3 = 1;
    iVar13 = *param_4;
    if (0 < iVar13) goto LAB_100121c58;
LAB_100121c68:
    *param_4 = iVar16;
  }
  else {
LAB_100121c58:
    if (iVar13 == 0x7fffffff) {
      iVar16 = 0x7ffffffe;
      goto LAB_100121c68;
    }
  }
  piVar6 = param_2;
  piVar8 = param_3;
  piVar10 = param_4;
  puVar12 = param_5;
  if (0x3ea < *param_5) {
    auStack_d0[0] = 0xaaaaaaaaaaaaaaaa;
    auStack_d0[1] = 0xaaaaaaaaaaaaaaaa;
    uStack_6c = 0;
    uStack_70 = 0;
    auStack_d0[9] = 0;
    auStack_d0[8] = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    auStack_d0[10] = 0;
    auStack_d0[5] = 0;
    auStack_d0[4] = 0;
    auStack_d0[7] = 0;
    auStack_d0[6] = 0;
    auStack_d0[3] = 0x1032547698badcfe;
    auStack_d0[2] = 0xefcdab8967452301;
    piVar8 = param_2;
    FUN_100122910(auStack_d0 + 2,param_1);
    FUN_100122a24(auStack_d0,auStack_d0 + 2);
    uVar3 = (auStack_d0[0] & 0xff00ff00ff00ff00) >> 8 | (auStack_d0[0] & 0xff00ff00ff00ff) << 8;
    piVar6 = (int *)(((uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10) >>
                    0x20);
    func_0x000100220d50(&UNK_10f74442c);
    if ((param_2 < (int *)0x10) ||
       (*param_1 != 0x73552e6b6e696c42 || param_1[1] != 0x7265746e756f4365)) {
      bVar17 = false;
      *param_5 = 0x66;
    }
  }
  uVar11 = SUB84(puVar12,0);
  uVar9 = SUB84(piVar10,0);
  uVar7 = SUB84(piVar8,0);
  uStack_124 = (uint)piVar6;
  iVar16 = *param_4;
  if (iVar16 == *param_3) {
    bVar17 = false;
    iVar16 = iVar16 + 1;
    *param_4 = iVar16;
  }
  if (*param_5 < 3) {
    *param_5 = 3;
    uVar14 = (*param_4 - *param_3) + 2;
    if (uVar14 < 3) {
LAB_100121d70:
      *param_5 = uVar14;
    }
  }
  else {
    uVar14 = (iVar16 - *param_3) + 2;
    if (uVar14 < *param_5) goto LAB_100121d70;
    if (bVar17) {
      puVar4 = (undefined8 *)0x1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_100121e1c;
    }
  }
  auStack_d0[0] = 0xaaaaaaaaaaaaaaaa;
  auStack_d0[1] = 0xaaaaaaaaaaaaaaaa;
  uStack_6c = 0;
  uStack_70 = 0;
  auStack_d0[9] = 0;
  auStack_d0[8] = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  auStack_d0[10] = 0;
  auStack_d0[5] = 0;
  auStack_d0[4] = 0;
  auStack_d0[7] = 0;
  auStack_d0[6] = 0;
  auStack_d0[3] = 0x1032547698badcfe;
  auStack_d0[2] = 0xefcdab8967452301;
  piVar6 = param_2;
  FUN_100122910(auStack_d0 + 2,param_1);
  uVar7 = SUB84(piVar6,0);
  FUN_100122a24(auStack_d0,auStack_d0 + 2);
  uVar3 = (auStack_d0[0] & 0xff00ff00ff00ff00) >> 8 | (auStack_d0[0] & 0xff00ff00ff00ff) << 8;
  uStack_124 = (uint)(ushort)(uVar3 >> 0x30) | (uint)(uVar3 >> 0x10) & 0xffff0000;
  func_0x000100220d50(&UNK_10f74444a);
  puVar4 = (undefined8 *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
LAB_100121e1c:
  func_0x000107c60e78();
  uStack_d8 = 0x100121e20;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar2 = *(char *)((long)puVar4 + 0x17);
  puVar5 = (undefined8 *)*puVar4;
  if (-1 < (long)cVar2) {
    puVar5 = puVar4;
  }
  lVar1 = puVar4[1];
  if (-1 < cVar2) {
    lVar1 = (long)cVar2;
  }
  uStack_12c = uVar9;
  uStack_128 = uVar7;
  plStack_f0 = param_1;
  piStack_e8 = param_2;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_100121bd8(puVar5,lVar1,&uStack_124,&uStack_128,&uStack_12c);
  if (((ulong)puVar5 & 1) == 0) {
    if ((bRam000000011383aa60 & 1) == 0) goto LAB_100121eec;
  }
  else {
    ppuStack_120 = &PTR_FUN_110cd4f18;
    uStack_110 = 0;
    uStack_10c = uStack_124;
    uStack_108 = uStack_128;
    uStack_104 = uStack_12c;
    puStack_118 = puVar4;
    uStack_100 = uVar11;
    FUN_100122250(&ppuStack_120);
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    func_0x000107c60e78();
LAB_100121eec:
    iVar16 = 0x1383aa60;
    func_0x000107c60e48();
    if (iVar16 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      func_0x000107c60e4c(0x11383aa60);
    }
  }
  return;
}



/* Entry: 100121f3c; end: 10012224f;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_100121f3c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long ******pppppplVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  undefined8 *puVar16;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long *******ppppppplVar19;
  undefined8 unaff_x22;
  long ******pppppplVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  ulong uVar23;
  long ******pppppplStack_1b0;
  undefined8 uStack_1a8;
  long ******pppppplStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  ulong uStack_140;
  undefined8 uStack_138;
  long *******ppppppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *******ppppppplStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  plVar9 = plRam000000011383aae8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_80 = param_1;
  uStack_78 = param_2;
  if (plRam000000011383aae8 < (long *)0x2) {
LAB_100121fb8:
    if (plRam000000011383aae8 == (long *)0x0) goto code_r0x000100121fc0;
    ClearExclusiveLocal();
    if (plRam000000011383aae8 == (long *)0x1) {
      (*(code *)PTR_FUN_11336f918)();
      unaff_x22 = 0xaaaaaaaaaaaaaaaa;
      uStack_88 = 1000000;
      lStack_90 = 0;
      plVar9 = param_1;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)plVar9 - (long)param_1 < 1000) {
          func_0x000107c612dc();
        }
        else {
          lStack_70 = -0x5555555555555556;
          uStack_68 = 0xaaaaaaaaaaaaaaaa;
          uStack_58 = uStack_88;
          lStack_60 = lStack_90;
          plVar9 = &lStack_60;
          func_0x000107c610f0(plVar9,&lStack_70);
          iVar8 = (int)plVar9;
          while ((iVar8 == -1 && (func_0x000107c60e5c(), (int)*plVar9 == 4))) {
            uStack_58 = uStack_68;
            lStack_60 = lStack_70;
            plVar9 = &lStack_60;
            func_0x000107c610f0(plVar9,&lStack_70);
            iVar8 = (int)plVar9;
          }
        }
      } while (plRam000000011383aae8 == (long *)0x1);
    }
    plVar9 = plRam000000011383aae8;
    plVar10 = plRam000000011383aae8;
    func_0x000107c61264();
    iVar8 = (int)plVar10;
    goto joined_r0x000100122008;
  }
  plVar10 = plRam000000011383aae8;
  func_0x000107c61264();
  iVar8 = (int)plVar10;
joined_r0x000100122008:
  if (iVar8 != 0) {
    plVar10 = plVar9;
    func_0x000107c2cfbc();
  }
  if (plRam000000011383aae8 < (long *)0x2) {
    do {
      if (plRam000000011383aae8 != (long *)0x0) {
        ClearExclusiveLocal();
        if (plRam000000011383aae8 == (long *)0x1) {
          unaff_x22 = 0x11336f000;
          (*(code *)PTR_FUN_11336f918)();
          uStack_88 = 1000000;
          lStack_90 = 0;
          plVar11 = plVar10;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)plVar11 - (long)plVar10 < 1000) {
              func_0x000107c612dc();
            }
            else {
              lStack_70 = -0x5555555555555556;
              uStack_68 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = uStack_88;
              lStack_60 = lStack_90;
              plVar11 = &lStack_60;
              func_0x000107c610f0(plVar11,&lStack_70);
              iVar8 = (int)plVar11;
              while ((iVar8 == -1 && (func_0x000107c60e5c(), (int)*plVar11 == 4))) {
                uStack_58 = uStack_68;
                lStack_60 = lStack_70;
                plVar11 = &lStack_60;
                func_0x000107c610f0(plVar11,&lStack_70);
                iVar8 = (int)plVar11;
              }
            }
          } while (plRam000000011383aae8 == (long *)0x1);
        }
        goto joined_r0x0001001221ec;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar5) {
        plRam000000011383aae8 = (long *)0x1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_60 = -0x5555555555555556;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&lStack_60);
    func_0x000107c61274(&lStack_60,1);
    func_0x000107c6125c(0x11383aaf0,&lStack_60);
    func_0x000107c6126c(&lStack_60);
    plRam000000011383aae8 = (long *)0x11383aaf0;
    if (ppppppplRam000000011383ab30 != (long *******)0x0) goto LAB_100121fa0;
LAB_1001221f0:
    func_0x000107c60e20(0xa0);
    FUN_1001224f0();
    pppppplVar12 = (long ******)ppppppplRam000000011383ab30;
    FUN_1001227ac(ppppppplRam000000011383ab30,&plStack_80);
    if (pppppplVar12 != (long ******)0x0) goto LAB_100121fac;
LAB_10012220c:
    ppppppplVar19 = (long *******)0x0;
  }
  else {
joined_r0x0001001221ec:
    if (ppppppplRam000000011383ab30 == (long *******)0x0) goto LAB_1001221f0;
LAB_100121fa0:
    pppppplVar12 = (long ******)ppppppplRam000000011383ab30;
    FUN_1001227ac(ppppppplRam000000011383ab30,&plStack_80);
    if (pppppplVar12 == (long ******)0x0) goto LAB_10012220c;
LAB_100121fac:
    ppppppplVar19 = (long *******)pppppplVar12[4];
  }
  plVar10 = plVar9;
  func_0x000107c61268();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppppplVar19;
  }
  func_0x000107c60e78();
  uStack_b8 = 0x11383aae8;
  pcStack_98 = FUN_100122250;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar15 = (long *******)plVar10[1];
  cVar3 = *(char *)((long)ppppppplVar15 + 0x17);
  ppppppplVar13 = (long *******)*ppppppplVar15;
  if (-1 < (long)cVar3) {
    ppppppplVar13 = ppppppplVar15;
  }
  ppppppplVar15 = (long *******)ppppppplVar15[1];
  if (-1 < cVar3) {
    ppppppplVar15 = (long *******)(long)cVar3;
  }
  uStack_c0 = unaff_x22;
  ppppppplStack_b0 = ppppppplVar19;
  plStack_a8 = plVar9;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_100121f3c();
  if (ppppppplVar13 == (long *******)0x0) {
    puVar16 = (undefined8 *)plVar10[1];
    cVar3 = *(char *)((long)puVar16 + 0x17);
    puVar1 = (undefined8 *)*puVar16;
    if (-1 < (long)cVar3) {
      puVar1 = puVar16;
    }
    lVar7 = puVar16[1];
    if (-1 < cVar3) {
      lVar7 = (long)cVar3;
    }
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0x1032547698badcfe;
    ppppppplStack_130 = (long *******)0xefcdab8967452301;
    FUN_100122910(&ppppppplStack_130,puVar1,lVar7);
    ppppppplVar15 = (long *******)&ppppppplStack_130;
    FUN_100122a24(&uStack_140);
    uVar4 = ((uint)uStack_140 & 0xff00ff00) >> 8 | ((uint)uStack_140 & 0xff00ff) << 8;
    ppppppplVar19 = (long *******)(ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
    FUN_100123510();
    if ((int)ppppppplVar19 != 0) {
      plVar9 = plVar10;
      (**(code **)*plVar10)();
      FUN_100123da8();
      if (*(int *)((long)plVar10 + 0x1c) == 0) {
        iVar8 = (int)((ulong)(plVar9[1] - *plVar9) >> 2);
        *(int *)((long)plVar10 + 0x1c) = iVar8 + -1;
        *(undefined4 *)((long)plVar10 + 0x14) = *(undefined4 *)(*plVar9 + 4);
        *(undefined4 *)(plVar10 + 3) = *(undefined4 *)(*plVar9 + (ulong)(iVar8 - 2) * 4);
      }
      *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xffffffbf;
      (**(code **)(*plVar10 + 8))(&ppppppplStack_130,plVar10);
      ppppppplVar13 = ppppppplStack_130;
      uVar4 = *(uint *)(plVar10 + 4);
      ppppppplVar19 = ppppppplStack_130 + 2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
        if (bVar5) {
          *(uint *)ppppppplVar19 = *(uint *)ppppppplVar19 | uVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppppplVar15 = ppppppplStack_130;
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_100124ac4();
      goto LAB_1001223b0;
    }
  }
  else {
LAB_1001223b0:
    lVar7 = plVar10[2];
    ppppppplVar19 = ppppppplVar13;
    (*(code *)(*ppppppplVar13)[4])();
    if ((int)lVar7 == (int)ppppppplVar19) {
      if (*(int *)((long)plVar10 + 0x1c) == 0) goto LAB_10012246c;
      ppppppplVar15 = (long *******)(ulong)*(uint *)((long)plVar10 + 0x14);
      ppppppplVar19 = ppppppplVar13;
      (*(code *)(*ppppppplVar13)[5])(ppppppplVar13,ppppppplVar15,(int)plVar10[3]);
      if (((ulong)ppppppplVar19 & 1) != 0) goto LAB_10012246c;
    }
    puVar16 = (undefined8 *)plVar10[1];
    cVar3 = *(char *)((long)puVar16 + 0x17);
    puVar1 = (undefined8 *)*puVar16;
    if (-1 < (long)cVar3) {
      puVar1 = puVar16;
    }
    lVar7 = puVar16[1];
    if (-1 < cVar3) {
      lVar7 = (long)cVar3;
    }
    uStack_140 = 0xaaaaaaaaaaaaaaaa;
    uStack_138 = 0xaaaaaaaaaaaaaaaa;
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0x1032547698badcfe;
    ppppppplStack_130 = (long *******)0xefcdab8967452301;
    FUN_100122910(&ppppppplStack_130,puVar1,lVar7);
    FUN_100122a24(&uStack_140,&ppppppplStack_130);
    uVar23 = (uStack_140 & 0xff00ff00ff00ff00) >> 8 | (uStack_140 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    ppppppplVar15 = (long *******)(uVar23 >> 0x20 | uVar23 << 0x20);
    ppppppplVar19 = (long *******)&UNK_10f744402;
    func_0x000100220d50();
  }
  if ((bRam000000011383aa60 & 1) == 0) {
    ppppppplVar19 = (long *******)0x11383aa60;
    func_0x000107c60e48();
    ppppppplVar13 = (long *******)0x11383aa48;
    if ((int)ppppppplVar19 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      ppppppplVar19 = (long *******)0x11383aa60;
      func_0x000107c60e4c();
    }
  }
  else {
    ppppppplVar13 = (long *******)0x11383aa48;
  }
LAB_10012246c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppppppplVar13;
  }
  func_0x000107c60e78();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar19[1] = (long ******)0x0;
  *ppppppplVar19 = (long ******)0x0;
  ppppppplVar19[3] = (long ******)0x0;
  ppppppplVar19[2] = (long ******)0x0;
  *(int *)(ppppppplVar19 + 4) = 0x3f800000;
  ppppppplVar19[6] = (long ******)0x0;
  ppppppplVar19[5] = (long ******)0x0;
  ppppppplVar19[8] = (long ******)0x0;
  ppppppplVar19[7] = (long ******)0x0;
  *(int *)(ppppppplVar19 + 9) = 0x3f800000;
  ppppppplVar19[0xb] = (long ******)0x0;
  ppppppplVar19[10] = (long ******)0x0;
  ppppppplVar19[0xd] = (long ******)0x0;
  ppppppplVar19[0xc] = (long ******)0x0;
  *(int *)(ppppppplVar19 + 0xe) = 0x3f800000;
  ppppppplVar19[0x10] = (long ******)0x0;
  ppppppplVar19[0xf] = (long ******)0x0;
  ppppppplVar19[0x12] = (long ******)0x0;
  ppppppplVar19[0x11] = (long ******)0x0;
  ppppppplVar19[0x13] = (long ******)0x0;
  ppppppplVar13 = ppppppplVar19;
  if (plRam000000011383aae8 < (long *)0x2) {
    do {
      if (plRam000000011383aae8 != (long *)0x0) {
        ClearExclusiveLocal();
        if (plRam000000011383aae8 == (long *)0x1) {
          ppppppplVar14 = ppppppplVar19;
          (*(code *)PTR_FUN_11336f918)();
          ppppppplVar13 = ppppppplVar14;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)ppppppplVar13 - (long)ppppppplVar14 < 1000) {
              func_0x000107c612dc();
            }
            else {
              pppppplStack_1b0 = (long ******)0xaaaaaaaaaaaaaaaa;
              uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
              uStack_198 = 1000000;
              pppppplStack_1a0 = (long ******)0x0;
              ppppppplVar13 = &pppppplStack_1a0;
              ppppppplVar15 = &pppppplStack_1b0;
              func_0x000107c610f0();
              iVar8 = (int)ppppppplVar13;
              while ((iVar8 == -1 && (func_0x000107c60e5c(), *(int *)ppppppplVar13 == 4))) {
                uStack_198 = uStack_1a8;
                pppppplStack_1a0 = pppppplStack_1b0;
                ppppppplVar13 = &pppppplStack_1a0;
                ppppppplVar15 = &pppppplStack_1b0;
                func_0x000107c610f0();
                iVar8 = (int)ppppppplVar13;
              }
            }
          } while (plRam000000011383aae8 == (long *)0x1);
        }
        goto LAB_10012265c;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar5) {
        plRam000000011383aae8 = (long *)0x1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppppplStack_1a0 = (long ******)0xaaaaaaaaaaaaaaaa;
    uStack_198 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&pppppplStack_1a0);
    func_0x000107c61274(&pppppplStack_1a0,1);
    ppppppplVar15 = &pppppplStack_1a0;
    func_0x000107c6125c(0x11383aaf0);
    ppppppplVar13 = &pppppplStack_1a0;
    func_0x000107c6126c();
    plRam000000011383aae8 = (long *)0x11383aaf0;
  }
LAB_10012265c:
  ppppppplVar19[0x13] = (long ******)ppppppplRam000000011383ab30;
  ppppppplVar14 = ppppppplVar13;
  ppppppplRam000000011383ab30 = ppppppplVar19;
  if (plRam000000011383aae8 < (long *)0x2) {
    do {
      if (plRam000000011383aae8 != (long *)0x0) {
        ClearExclusiveLocal();
        if (plRam000000011383aae8 == (long *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          ppppppplVar14 = ppppppplVar13;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)ppppppplVar14 - (long)ppppppplVar13 < 1000) {
              func_0x000107c612dc();
            }
            else {
              pppppplStack_1b0 = (long ******)0xaaaaaaaaaaaaaaaa;
              uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
              uStack_198 = 1000000;
              pppppplStack_1a0 = (long ******)0x0;
              ppppppplVar14 = &pppppplStack_1a0;
              ppppppplVar15 = &pppppplStack_1b0;
              func_0x000107c610f0();
              iVar8 = (int)ppppppplVar14;
              while ((iVar8 == -1 && (func_0x000107c60e5c(), *(int *)ppppppplVar14 == 4))) {
                uStack_198 = uStack_1a8;
                pppppplStack_1a0 = pppppplStack_1b0;
                ppppppplVar14 = &pppppplStack_1a0;
                ppppppplVar15 = &pppppplStack_1b0;
                func_0x000107c610f0();
                iVar8 = (int)ppppppplVar14;
              }
            }
          } while (plRam000000011383aae8 == (long *)0x1);
        }
        goto LAB_100122774;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar5) {
        plRam000000011383aae8 = (long *)0x1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppppplStack_1a0 = (long ******)0xaaaaaaaaaaaaaaaa;
    uStack_198 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&pppppplStack_1a0);
    func_0x000107c61274(&pppppplStack_1a0,1);
    ppppppplVar15 = &pppppplStack_1a0;
    func_0x000107c6125c(0x11383aaf0);
    ppppppplVar14 = &pppppplStack_1a0;
    func_0x000107c6126c();
    plRam000000011383aae8 = (long *)0x11383aaf0;
  }
LAB_100122774:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return ppppppplVar19;
  }
  func_0x000107c60e78();
  pppppplVar12 = *ppppppplVar15;
  pppppplVar2 = ppppppplVar15[1];
  if (pppppplVar2 == (long ******)0x0) {
    pppppplVar20 = (long ******)0x0;
    pppppplVar22 = ppppppplVar14[1];
  }
  else {
    pppppplVar20 = (long ******)0x0;
    pppppplVar22 = pppppplVar2;
    pppppplVar21 = pppppplVar12;
    do {
      pppppplVar20 = (long ******)((long)*(char *)pppppplVar21 + (long)pppppplVar20 * 0x83);
      pppppplVar22 = (long ******)((long)pppppplVar22 + -1);
      pppppplVar21 = (long ******)((long)pppppplVar21 + 1);
    } while (pppppplVar22 != (long ******)0x0);
    pppppplVar22 = ppppppplVar14[1];
  }
  if (pppppplVar22 != (long ******)0x0) {
    uVar23 = (long)pppppplVar22 - 1;
    if (((ulong)pppppplVar22 & uVar23) == 0) {
      pppppplVar21 = (long ******)(uVar23 & (ulong)pppppplVar20);
      ppppplVar17 = (*ppppppplVar14)[(long)pppppplVar21];
    }
    else {
      pppppplVar21 = pppppplVar20;
      if (pppppplVar22 <= pppppplVar20) {
        uVar6 = 0;
        if (pppppplVar22 != (long ******)0x0) {
          uVar6 = (ulong)pppppplVar20 / (ulong)pppppplVar22;
        }
        pppppplVar21 = (long ******)((long)pppppplVar20 - uVar6 * (long)pppppplVar22);
      }
      ppppplVar17 = (*ppppppplVar14)[(long)pppppplVar21];
    }
    if (ppppplVar17 != (long *****)0x0) {
      ppppppplVar19 = (long *******)*ppppplVar17;
      if (ppppppplVar19 == (long *******)0x0) {
        return (long *******)0x0;
      }
      if (((ulong)pppppplVar22 & uVar23) == 0) {
        do {
          if (ppppppplVar19[1] == pppppplVar20) {
            if (ppppppplVar19[3] == pppppplVar2) {
              pppppplVar22 = ppppppplVar19[2];
              func_0x000107c610b0(pppppplVar22,pppppplVar12,pppppplVar2);
              if ((int)pppppplVar22 == 0) {
                return ppppppplVar19;
              }
            }
          }
          else if ((long ******)((ulong)ppppppplVar19[1] & uVar23) != pppppplVar21) {
            return (long *******)0x0;
          }
          ppppppplVar19 = (long *******)*ppppppplVar19;
        } while (ppppppplVar19 != (long *******)0x0);
        return (long *******)0x0;
      }
      do {
        pppppplVar18 = ppppppplVar19[1];
        if (pppppplVar18 == pppppplVar20) {
          if (ppppppplVar19[3] == pppppplVar2) {
            pppppplVar18 = ppppppplVar19[2];
            func_0x000107c610b0(pppppplVar18,pppppplVar12,pppppplVar2);
            if ((int)pppppplVar18 == 0) {
              return ppppppplVar19;
            }
          }
        }
        else {
          if (pppppplVar22 <= pppppplVar18) {
            uVar23 = 0;
            if (pppppplVar22 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar18 / (ulong)pppppplVar22;
            }
            pppppplVar18 = (long ******)((long)pppppplVar18 - uVar23 * (long)pppppplVar22);
          }
          if (pppppplVar18 != pppppplVar21) {
            return (long *******)0x0;
          }
        }
        ppppppplVar19 = (long *******)*ppppppplVar19;
        if (ppppppplVar19 == (long *******)0x0) {
          return (long *******)0x0;
        }
      } while( true );
    }
  }
  return (long *******)0x0;
code_r0x000100121fc0:
  cVar3 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
  if (bVar5) {
    plRam000000011383aae8 = (long *)0x1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x000100121fc8;
  goto LAB_100121fb8;
code_r0x000100121fc8:
  lStack_60 = -0x5555555555555556;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&lStack_60);
  func_0x000107c61274(&lStack_60,1);
  plVar9 = (long *)0x11383aaf0;
  func_0x000107c6125c(0x11383aaf0,&lStack_60);
  func_0x000107c6126c(&lStack_60);
  plRam000000011383aae8 = (long *)0x11383aaf0;
  plVar10 = plVar9;
  func_0x000107c61264();
  iVar8 = (int)plVar10;
  goto joined_r0x000100122008;
}



/* Entry: 100122250; end: 1001224ef;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_100122250(long *param_1)

{
  undefined8 *puVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long *******ppppppplVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  long *****ppppplVar15;
  long ******pppppplVar16;
  long *******ppppppplVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  ulong uVar21;
  long ******pppppplStack_120;
  undefined8 uStack_118;
  long ******pppppplStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long *******ppppppplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar13 = (long *******)param_1[1];
  cVar4 = *(char *)((long)ppppppplVar13 + 0x17);
  ppppppplVar17 = (long *******)*ppppppplVar13;
  if (-1 < (long)cVar4) {
    ppppppplVar17 = ppppppplVar13;
  }
  ppppppplVar13 = (long *******)ppppppplVar13[1];
  if (-1 < cVar4) {
    ppppppplVar13 = (long *******)(long)cVar4;
  }
  FUN_100121f3c();
  if (ppppppplVar17 == (long *******)0x0) {
    puVar14 = (undefined8 *)param_1[1];
    cVar4 = *(char *)((long)puVar14 + 0x17);
    puVar1 = (undefined8 *)*puVar14;
    if (-1 < (long)cVar4) {
      puVar1 = puVar14;
    }
    lVar8 = puVar14[1];
    if (-1 < cVar4) {
      lVar8 = (long)cVar4;
    }
    uStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0x1032547698badcfe;
    ppppppplStack_a0 = (long *******)0xefcdab8967452301;
    FUN_100122910(&ppppppplStack_a0,puVar1,lVar8);
    ppppppplVar13 = (long *******)&ppppppplStack_a0;
    FUN_100122a24(&uStack_b0);
    uVar5 = ((uint)uStack_b0 & 0xff00ff00) >> 8 | ((uint)uStack_b0 & 0xff00ff) << 8;
    ppppppplVar10 = (long *******)(ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
    FUN_100123510();
    if ((int)ppppppplVar10 != 0) {
      plVar11 = param_1;
      (**(code **)*param_1)();
      FUN_100123da8();
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        iVar9 = (int)((ulong)(plVar11[1] - *plVar11) >> 2);
        *(int *)((long)param_1 + 0x1c) = iVar9 + -1;
        *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(*plVar11 + 4);
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(*plVar11 + (ulong)(iVar9 - 2) * 4);
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffbf;
      (**(code **)(*param_1 + 8))(&ppppppplStack_a0,param_1);
      ppppppplVar17 = ppppppplStack_a0;
      uVar5 = *(uint *)(param_1 + 4);
      ppppppplVar13 = ppppppplStack_a0 + 2;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
        if (bVar6) {
          *(uint *)ppppppplVar13 = *(uint *)ppppppplVar13 | uVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppppppplVar13 = ppppppplStack_a0;
      (**(code **)(*param_1 + 0x10))(param_1);
      FUN_100124ac4();
      goto LAB_1001223b0;
    }
  }
  else {
LAB_1001223b0:
    lVar8 = param_1[2];
    ppppppplVar10 = ppppppplVar17;
    (*(code *)(*ppppppplVar17)[4])();
    if ((int)lVar8 == (int)ppppppplVar10) {
      if (*(int *)((long)param_1 + 0x1c) == 0) goto LAB_10012246c;
      ppppppplVar13 = (long *******)(ulong)*(uint *)((long)param_1 + 0x14);
      ppppppplVar10 = ppppppplVar17;
      (*(code *)(*ppppppplVar17)[5])(ppppppplVar17,ppppppplVar13,(int)param_1[3]);
      if (((ulong)ppppppplVar10 & 1) != 0) goto LAB_10012246c;
    }
    puVar14 = (undefined8 *)param_1[1];
    cVar4 = *(char *)((long)puVar14 + 0x17);
    puVar1 = (undefined8 *)*puVar14;
    if (-1 < (long)cVar4) {
      puVar1 = puVar14;
    }
    lVar8 = puVar14[1];
    if (-1 < cVar4) {
      lVar8 = (long)cVar4;
    }
    uStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0x1032547698badcfe;
    ppppppplStack_a0 = (long *******)0xefcdab8967452301;
    FUN_100122910(&ppppppplStack_a0,puVar1,lVar8);
    FUN_100122a24(&uStack_b0,&ppppppplStack_a0);
    uVar21 = (uStack_b0 & 0xff00ff00ff00ff00) >> 8 | (uStack_b0 & 0xff00ff00ff00ff) << 8;
    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
    ppppppplVar13 = (long *******)(uVar21 >> 0x20 | uVar21 << 0x20);
    ppppppplVar10 = (long *******)&UNK_10f744402;
    func_0x000100220d50();
  }
  if ((bRam000000011383aa60 & 1) == 0) {
    ppppppplVar10 = (long *******)0x11383aa60;
    func_0x000107c60e48();
    ppppppplVar17 = (long *******)0x11383aa48;
    if ((int)ppppppplVar10 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      ppppppplVar10 = (long *******)0x11383aa60;
      func_0x000107c60e4c();
    }
  }
  else {
    ppppppplVar17 = (long *******)0x11383aa48;
  }
LAB_10012246c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppppplVar17;
  }
  func_0x000107c60e78();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar10[1] = (long ******)0x0;
  *ppppppplVar10 = (long ******)0x0;
  ppppppplVar10[3] = (long ******)0x0;
  ppppppplVar10[2] = (long ******)0x0;
  *(int *)(ppppppplVar10 + 4) = 0x3f800000;
  ppppppplVar10[6] = (long ******)0x0;
  ppppppplVar10[5] = (long ******)0x0;
  ppppppplVar10[8] = (long ******)0x0;
  ppppppplVar10[7] = (long ******)0x0;
  *(int *)(ppppppplVar10 + 9) = 0x3f800000;
  ppppppplVar10[0xb] = (long ******)0x0;
  ppppppplVar10[10] = (long ******)0x0;
  ppppppplVar10[0xd] = (long ******)0x0;
  ppppppplVar10[0xc] = (long ******)0x0;
  *(int *)(ppppppplVar10 + 0xe) = 0x3f800000;
  ppppppplVar10[0x10] = (long ******)0x0;
  ppppppplVar10[0xf] = (long ******)0x0;
  ppppppplVar10[0x12] = (long ******)0x0;
  ppppppplVar10[0x11] = (long ******)0x0;
  ppppppplVar10[0x13] = (long ******)0x0;
  ppppppplVar17 = ppppppplVar10;
  if (uRam000000011383aae8 < 2) {
    do {
      if (uRam000000011383aae8 != 0) {
        ClearExclusiveLocal();
        if (uRam000000011383aae8 == 1) {
          ppppppplVar12 = ppppppplVar10;
          (*(code *)PTR_FUN_11336f918)();
          ppppppplVar17 = ppppppplVar12;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)ppppppplVar17 - (long)ppppppplVar12 < 1000) {
              func_0x000107c612dc();
            }
            else {
              pppppplStack_120 = (long ******)0xaaaaaaaaaaaaaaaa;
              uStack_118 = 0xaaaaaaaaaaaaaaaa;
              uStack_108 = 1000000;
              pppppplStack_110 = (long ******)0x0;
              ppppppplVar17 = &pppppplStack_110;
              ppppppplVar13 = &pppppplStack_120;
              func_0x000107c610f0();
              iVar9 = (int)ppppppplVar17;
              while ((iVar9 == -1 && (func_0x000107c60e5c(), *(int *)ppppppplVar17 == 4))) {
                uStack_108 = uStack_118;
                pppppplStack_110 = pppppplStack_120;
                ppppppplVar17 = &pppppplStack_110;
                ppppppplVar13 = &pppppplStack_120;
                func_0x000107c610f0();
                iVar9 = (int)ppppppplVar17;
              }
            }
          } while (uRam000000011383aae8 == 1);
        }
        goto LAB_10012265c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar6) {
        uRam000000011383aae8 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppppplStack_110 = (long ******)0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&pppppplStack_110);
    func_0x000107c61274(&pppppplStack_110,1);
    ppppppplVar13 = &pppppplStack_110;
    func_0x000107c6125c(0x11383aaf0);
    ppppppplVar17 = &pppppplStack_110;
    func_0x000107c6126c();
    uRam000000011383aae8 = 0x11383aaf0;
  }
LAB_10012265c:
  ppppppplVar10[0x13] = (long ******)ppppppplRam000000011383ab30;
  ppppppplVar12 = ppppppplVar17;
  ppppppplRam000000011383ab30 = ppppppplVar10;
  if (uRam000000011383aae8 < 2) {
    do {
      if (uRam000000011383aae8 != 0) {
        ClearExclusiveLocal();
        if (uRam000000011383aae8 == 1) {
          (*(code *)PTR_FUN_11336f918)();
          ppppppplVar12 = ppppppplVar17;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)ppppppplVar12 - (long)ppppppplVar17 < 1000) {
              func_0x000107c612dc();
            }
            else {
              pppppplStack_120 = (long ******)0xaaaaaaaaaaaaaaaa;
              uStack_118 = 0xaaaaaaaaaaaaaaaa;
              uStack_108 = 1000000;
              pppppplStack_110 = (long ******)0x0;
              ppppppplVar12 = &pppppplStack_110;
              ppppppplVar13 = &pppppplStack_120;
              func_0x000107c610f0();
              iVar9 = (int)ppppppplVar12;
              while ((iVar9 == -1 && (func_0x000107c60e5c(), *(int *)ppppppplVar12 == 4))) {
                uStack_108 = uStack_118;
                pppppplStack_110 = pppppplStack_120;
                ppppppplVar12 = &pppppplStack_110;
                ppppppplVar13 = &pppppplStack_120;
                func_0x000107c610f0();
                iVar9 = (int)ppppppplVar12;
              }
            }
          } while (uRam000000011383aae8 == 1);
        }
        goto LAB_100122774;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar6) {
        uRam000000011383aae8 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppppplStack_110 = (long ******)0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&pppppplStack_110);
    func_0x000107c61274(&pppppplStack_110,1);
    ppppppplVar13 = &pppppplStack_110;
    func_0x000107c6125c(0x11383aaf0);
    ppppppplVar12 = &pppppplStack_110;
    func_0x000107c6126c();
    uRam000000011383aae8 = 0x11383aaf0;
  }
LAB_100122774:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return ppppppplVar10;
  }
  func_0x000107c60e78();
  pppppplVar2 = *ppppppplVar13;
  pppppplVar3 = ppppppplVar13[1];
  if (pppppplVar3 == (long ******)0x0) {
    pppppplVar18 = (long ******)0x0;
    pppppplVar20 = ppppppplVar12[1];
  }
  else {
    pppppplVar18 = (long ******)0x0;
    pppppplVar20 = pppppplVar3;
    pppppplVar19 = pppppplVar2;
    do {
      pppppplVar18 = (long ******)((long)*(char *)pppppplVar19 + (long)pppppplVar18 * 0x83);
      pppppplVar20 = (long ******)((long)pppppplVar20 + -1);
      pppppplVar19 = (long ******)((long)pppppplVar19 + 1);
    } while (pppppplVar20 != (long ******)0x0);
    pppppplVar20 = ppppppplVar12[1];
  }
  if (pppppplVar20 != (long ******)0x0) {
    uVar21 = (long)pppppplVar20 - 1;
    if (((ulong)pppppplVar20 & uVar21) == 0) {
      pppppplVar19 = (long ******)(uVar21 & (ulong)pppppplVar18);
      ppppplVar15 = (*ppppppplVar12)[(long)pppppplVar19];
    }
    else {
      pppppplVar19 = pppppplVar18;
      if (pppppplVar20 <= pppppplVar18) {
        uVar7 = 0;
        if (pppppplVar20 != (long ******)0x0) {
          uVar7 = (ulong)pppppplVar18 / (ulong)pppppplVar20;
        }
        pppppplVar19 = (long ******)((long)pppppplVar18 - uVar7 * (long)pppppplVar20);
      }
      ppppplVar15 = (*ppppppplVar12)[(long)pppppplVar19];
    }
    if (ppppplVar15 != (long *****)0x0) {
      ppppppplVar17 = (long *******)*ppppplVar15;
      if (ppppppplVar17 == (long *******)0x0) {
        return (long *******)0x0;
      }
      if (((ulong)pppppplVar20 & uVar21) == 0) {
        do {
          if (ppppppplVar17[1] == pppppplVar18) {
            if (ppppppplVar17[3] == pppppplVar3) {
              pppppplVar20 = ppppppplVar17[2];
              func_0x000107c610b0(pppppplVar20,pppppplVar2,pppppplVar3);
              if ((int)pppppplVar20 == 0) {
                return ppppppplVar17;
              }
            }
          }
          else if ((long ******)((ulong)ppppppplVar17[1] & uVar21) != pppppplVar19) {
            return (long *******)0x0;
          }
          ppppppplVar17 = (long *******)*ppppppplVar17;
        } while (ppppppplVar17 != (long *******)0x0);
        return (long *******)0x0;
      }
      do {
        pppppplVar16 = ppppppplVar17[1];
        if (pppppplVar16 == pppppplVar18) {
          if (ppppppplVar17[3] == pppppplVar3) {
            pppppplVar16 = ppppppplVar17[2];
            func_0x000107c610b0(pppppplVar16,pppppplVar2,pppppplVar3);
            if ((int)pppppplVar16 == 0) {
              return ppppppplVar17;
            }
          }
        }
        else {
          if (pppppplVar20 <= pppppplVar16) {
            uVar21 = 0;
            if (pppppplVar20 != (long ******)0x0) {
              uVar21 = (ulong)pppppplVar16 / (ulong)pppppplVar20;
            }
            pppppplVar16 = (long ******)((long)pppppplVar16 - uVar21 * (long)pppppplVar20);
          }
          if (pppppplVar16 != pppppplVar19) {
            return (long *******)0x0;
          }
        }
        ppppppplVar17 = (long *******)*ppppppplVar17;
        if (ppppppplVar17 == (long *******)0x0) {
          return (long *******)0x0;
        }
      } while( true );
    }
  }
  return (long *******)0x0;
}



/* Entry: 1001224f0; end: 1001227ab;  */

long * FUN_1001224f0(long *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(int *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(int *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(int *)(param_1 + 0xe) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  plVar9 = param_1;
  if (uRam000000011383aae8 < 2) {
    do {
      if (uRam000000011383aae8 != 0) {
        ClearExclusiveLocal();
        if (uRam000000011383aae8 == 1) {
          plVar7 = param_1;
          (*(code *)PTR_FUN_11336f918)();
          plVar9 = plVar7;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)plVar9 - (long)plVar7 < 1000) {
              func_0x000107c612dc();
            }
            else {
              lStack_70 = -0x5555555555555556;
              uStack_68 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = 1000000;
              lStack_60 = 0;
              plVar9 = &lStack_60;
              param_2 = &lStack_70;
              func_0x000107c610f0();
              iVar6 = (int)plVar9;
              while ((iVar6 == -1 && (func_0x000107c60e5c(), (int)*plVar9 == 4))) {
                uStack_58 = uStack_68;
                lStack_60 = lStack_70;
                plVar9 = &lStack_60;
                param_2 = &lStack_70;
                func_0x000107c610f0();
                iVar6 = (int)plVar9;
              }
            }
          } while (uRam000000011383aae8 == 1);
        }
        goto LAB_10012265c;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar4) {
        uRam000000011383aae8 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_60 = -0x5555555555555556;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&lStack_60);
    func_0x000107c61274(&lStack_60,1);
    param_2 = &lStack_60;
    func_0x000107c6125c(0x11383aaf0);
    plVar9 = &lStack_60;
    func_0x000107c6126c();
    uRam000000011383aae8 = 0x11383aaf0;
  }
LAB_10012265c:
  param_1[0x13] = (long)plRam000000011383ab30;
  plVar7 = plVar9;
  plRam000000011383ab30 = param_1;
  if (uRam000000011383aae8 < 2) {
    do {
      if (uRam000000011383aae8 != 0) {
        ClearExclusiveLocal();
        if (uRam000000011383aae8 == 1) {
          (*(code *)PTR_FUN_11336f918)();
          plVar7 = plVar9;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)plVar7 - (long)plVar9 < 1000) {
              func_0x000107c612dc();
            }
            else {
              lStack_70 = -0x5555555555555556;
              uStack_68 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = 1000000;
              lStack_60 = 0;
              plVar7 = &lStack_60;
              param_2 = &lStack_70;
              func_0x000107c610f0();
              iVar6 = (int)plVar7;
              while ((iVar6 == -1 && (func_0x000107c60e5c(), (int)*plVar7 == 4))) {
                uStack_58 = uStack_68;
                lStack_60 = lStack_70;
                plVar7 = &lStack_60;
                param_2 = &lStack_70;
                func_0x000107c610f0();
                iVar6 = (int)plVar7;
              }
            }
          } while (uRam000000011383aae8 == 1);
        }
        goto LAB_100122774;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar4) {
        uRam000000011383aae8 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_60 = -0x5555555555555556;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&lStack_60);
    func_0x000107c61274(&lStack_60,1);
    param_2 = &lStack_60;
    func_0x000107c6125c(0x11383aaf0);
    plVar7 = &lStack_60;
    func_0x000107c6126c();
    uRam000000011383aae8 = 0x11383aaf0;
  }
LAB_100122774:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  func_0x000107c60e78();
  pcVar1 = (char *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    uVar11 = 0;
    uVar13 = plVar7[1];
  }
  else {
    uVar11 = 0;
    lVar8 = lVar2;
    pcVar10 = pcVar1;
    do {
      uVar11 = (long)*pcVar10 + uVar11 * 0x83;
      lVar8 = lVar8 + -1;
      pcVar10 = pcVar10 + 1;
    } while (lVar8 != 0);
    uVar13 = plVar7[1];
  }
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
    if ((uVar13 & uVar14) == 0) {
      uVar12 = uVar14 & uVar11;
      plVar9 = *(long **)(*plVar7 + uVar12 * 8);
    }
    else {
      uVar12 = uVar11;
      if (uVar13 <= uVar11) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar11 / uVar13;
        }
        uVar12 = uVar11 - uVar12 * uVar13;
      }
      plVar9 = *(long **)(*plVar7 + uVar12 * 8);
    }
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((uVar13 & uVar14) == 0) {
        do {
          if (plVar9[1] == uVar11) {
            if (plVar9[3] == lVar2) {
              lVar8 = plVar9[2];
              func_0x000107c610b0(lVar8,pcVar1,lVar2);
              if ((int)lVar8 == 0) {
                return plVar9;
              }
            }
          }
          else if ((plVar9[1] & uVar14) != uVar12) {
            return (long *)0x0;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar14 = plVar9[1];
        if (uVar14 == uVar11) {
          if (plVar9[3] == lVar2) {
            lVar8 = plVar9[2];
            func_0x000107c610b0(lVar8,pcVar1,lVar2);
            if ((int)lVar8 == 0) {
              return plVar9;
            }
          }
        }
        else {
          if (uVar13 <= uVar14) {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar14 / uVar13;
            }
            uVar14 = uVar14 - uVar5 * uVar13;
          }
          if (uVar14 != uVar12) {
            return (long *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1001227ac; end: 10012290f;  */

long * FUN_1001227ac(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  pcVar1 = (char *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    uVar7 = 0;
    uVar9 = param_1[1];
  }
  else {
    uVar7 = 0;
    lVar4 = lVar2;
    pcVar6 = pcVar1;
    do {
      uVar7 = (long)*pcVar6 + uVar7 * 0x83;
      lVar4 = lVar4 + -1;
      pcVar6 = pcVar6 + 1;
    } while (lVar4 != 0);
    uVar9 = param_1[1];
  }
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      uVar8 = uVar10 & uVar7;
      plVar5 = *(long **)(*param_1 + uVar8 * 8);
    }
    else {
      uVar8 = uVar7;
      if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
      plVar5 = *(long **)(*param_1 + uVar8 * 8);
    }
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((uVar9 & uVar10) == 0) {
        do {
          if (plVar5[1] == uVar7) {
            if (plVar5[3] == lVar2) {
              lVar4 = plVar5[2];
              func_0x000107c610b0(lVar4,pcVar1,lVar2);
              if ((int)lVar4 == 0) {
                return plVar5;
              }
            }
          }
          else if ((plVar5[1] & uVar10) != uVar8) {
            return (long *)0x0;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar10 = plVar5[1];
        if (uVar10 == uVar7) {
          if (plVar5[3] == lVar2) {
            lVar4 = plVar5[2];
            func_0x000107c610b0(lVar4,pcVar1,lVar2);
            if ((int)lVar4 == 0) {
              return plVar5;
            }
          }
        }
        else {
          if (uVar9 <= uVar10) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar3 * uVar9;
          }
          if (uVar10 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 100122910; end: 100122a23;  */

undefined8 FUN_100122910(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar1 = (int)param_3 * 8;
    *(uint *)(param_1 + 0x10) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x14) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar3,uVar1);
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar4 < 0x40)) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      lVar5 = 0x40 - uVar4;
      if (uVar1 != 0x40) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,lVar5);
      }
      FUN_100122b04(param_1,puVar2,1);
      param_2 = param_2 + lVar5;
      param_3 = param_3 - lVar5;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (0x3f < param_3) {
      FUN_100122b04(param_1,param_2,param_3 >> 6);
      param_2 = param_2 + (param_3 & 0xffffffffffffffc0);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      func_0x000107c610b4(puVar2,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 100122a24; end: 100122b03;  */

undefined8 FUN_100122a24(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_2 + 6);
  uVar5 = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[0x16];
  uVar4 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (uVar2 < 0x38) {
    if (lVar3 == 0x38) goto LAB_100122aa8;
  }
  else {
    if (uVar2 != 0x3f) {
      func_0x000107c60ee4((long)puVar1 + lVar3,0x3f - uVar4);
    }
    FUN_100122b04(param_2,puVar1,1);
    lVar3 = 0;
  }
  func_0x000107c60ee4((long)puVar1 + lVar3,0x38 - lVar3);
LAB_100122aa8:
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  FUN_100122b04(param_2,puVar1,1);
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}



/* Entry: 100122b04; end: 10012350f;  */

void FUN_100122b04(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  if (param_3 != 0) {
    uVar24 = param_1[2];
    uVar23 = param_1[3];
    iVar21 = *param_1;
    uVar22 = param_1[1];
    do {
      iVar5 = *param_2;
      iVar13 = param_2[1];
      uVar1 = iVar21 + (uVar24 & uVar22 | uVar23 & (uVar22 ^ 0xffffffff)) + -0x28955b88 + iVar5;
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar22;
      uVar2 = uVar23 + iVar13 + -0x173848aa + (uVar22 & uVar1 | uVar24 & (uVar1 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      iVar6 = param_2[2];
      iVar14 = param_2[3];
      uVar3 = uVar24 + iVar6 + 0x242070db + (uVar1 & uVar2 | uVar22 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = uVar22 + iVar14 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      iVar7 = param_2[4];
      iVar15 = param_2[5];
      uVar1 = iVar7 + uVar1 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
      uVar2 = iVar15 + uVar2 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      iVar8 = param_2[6];
      iVar16 = param_2[7];
      uVar3 = iVar8 + uVar3 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = iVar16 + uVar4 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      iVar9 = param_2[8];
      iVar17 = param_2[9];
      uVar1 = iVar9 + uVar1 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
      uVar2 = iVar17 + uVar2 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      iVar10 = param_2[10];
      iVar18 = param_2[0xb];
      uVar3 = iVar10 + uVar3 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = iVar18 + uVar4 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      iVar11 = param_2[0xc];
      iVar19 = param_2[0xd];
      uVar1 = iVar11 + uVar1 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
      uVar2 = iVar19 + uVar2 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
      iVar12 = param_2[0xe];
      iVar20 = param_2[0xf];
      uVar3 = iVar12 + uVar3 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
      uVar4 = iVar20 + uVar4 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
      uVar1 = iVar13 + uVar1 + -0x9e1da9e + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar8 + uVar2 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar18 + uVar3 + 0x265e5a51 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar5 + uVar4 + -0x16493856 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar15 + uVar1 + -0x29d0efa3 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar10 + uVar2 + 0x2441453 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar7 + uVar4 + -0x182c0438 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar17 + uVar1 + 0x21e1cde6 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar12 + uVar2 + -0x3cc8f82a + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar14 + uVar3 + -0xb2af279 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar9 + uVar4 + 0x455a14ed + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar19 + uVar1 + -0x561c16fb + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
      uVar2 = iVar6 + uVar2 + -0x3105c08 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
      uVar3 = iVar16 + uVar3 + 0x676f02d9 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
      uVar4 = iVar11 + uVar4 + -0x72d5b376 + ((uVar3 ^ uVar2) & uVar1 ^ uVar2);
      uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
      uVar1 = iVar15 + uVar1 + -0x5c6be + (uVar4 ^ uVar3 ^ uVar2);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar9 + uVar2 + -0x788e097f + (uVar1 ^ uVar4 ^ uVar3);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar18 + uVar3 + 0x6d9d6122 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar12 + uVar4 + -0x21ac7f4 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar13 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar7 + uVar2 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar16 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar10 + uVar4 + -0x41404390 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar19 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar5 + uVar2 + -0x155ed806 + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar14 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar8 + uVar4 + 0x4881d05 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar17 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
      uVar2 = iVar11 + uVar2 + -0x1924661b + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
      uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
      uVar4 = iVar6 + uVar4 + -0x3b53a99b + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
      uVar1 = iVar5 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar16 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar12 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar15 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
      uVar1 = iVar11 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar14 + uVar2 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar10 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar13 + uVar4 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
      uVar1 = iVar9 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar20 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar8 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar19 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
      uVar1 = iVar7 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
      uVar2 = iVar18 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
      uVar3 = iVar6 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
      uVar4 = iVar17 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      iVar21 = uVar1 + iVar21;
      uVar22 = uVar3 + uVar22 + (uVar4 >> 0xb | uVar4 * 0x200000);
      uVar24 = uVar3 + uVar24;
      uVar23 = uVar2 + uVar23;
      *param_1 = iVar21;
      param_1[1] = uVar22;
      param_1[2] = uVar24;
      param_1[3] = uVar23;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 100123510; end: 10012382b;  */

long * FUN_100123510(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  double dVar15;
  double dVar16;
  double dStack_e8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  piVar6 = piRam000000011383aae8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (piRam000000011383aae8 < (int *)0x2) {
LAB_100123598:
    if (piRam000000011383aae8 == (int *)0x0) goto code_r0x0001001235a0;
    ClearExclusiveLocal();
    if (piRam000000011383aae8 == (int *)0x1) {
      piVar5 = param_1;
      (*(code *)PTR_FUN_11336f918)();
      piVar6 = piVar5;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)piVar6 - (long)piVar5 < 1000) {
          func_0x000107c612dc();
        }
        else {
          uStack_70 = 0xaaaaaaaaaaaaaaaa;
          uStack_68 = 0xaaaaaaaaaaaaaaaa;
          uStack_58 = 1000000;
          uStack_60 = 0;
          piVar6 = (int *)&uStack_60;
          func_0x000107c610f0(piVar6,&uStack_70);
          iVar3 = (int)piVar6;
          while ((iVar3 == -1 && (func_0x000107c60e5c(), *piVar6 == 4))) {
            uStack_58 = uStack_68;
            uStack_60 = uStack_70;
            piVar6 = (int *)&uStack_60;
            func_0x000107c610f0(piVar6,&uStack_70);
            iVar3 = (int)piVar6;
          }
        }
      } while (piRam000000011383aae8 == (int *)0x1);
    }
    piVar6 = piRam000000011383aae8;
    piVar5 = piRam000000011383aae8;
    func_0x000107c61264();
    iVar3 = (int)piVar5;
    goto joined_r0x0001001235e8;
  }
  piVar5 = piRam000000011383aae8;
  func_0x000107c61264();
  iVar3 = (int)piVar5;
joined_r0x0001001235e8:
  if (iVar3 != 0) {
    piVar5 = piVar6;
    func_0x000107c2cfbc();
  }
  if (piRam000000011383aae8 < (int *)0x2) {
    do {
      if (piRam000000011383aae8 != (int *)0x0) {
        ClearExclusiveLocal();
        if (piRam000000011383aae8 == (int *)0x1) {
          (*(code *)PTR_FUN_11336f918)();
          piVar7 = piVar5;
          do {
            (*(code *)PTR_FUN_11336f918)();
            if ((long)piVar7 - (long)piVar5 < 1000) {
              func_0x000107c612dc();
            }
            else {
              uStack_70 = 0xaaaaaaaaaaaaaaaa;
              uStack_68 = 0xaaaaaaaaaaaaaaaa;
              uStack_58 = 1000000;
              uStack_60 = 0;
              piVar7 = (int *)&uStack_60;
              func_0x000107c610f0(piVar7,&uStack_70);
              iVar3 = (int)piVar7;
              while ((iVar3 == -1 && (func_0x000107c60e5c(), *piVar7 == 4))) {
                uStack_58 = uStack_68;
                uStack_60 = uStack_70;
                piVar7 = (int *)&uStack_60;
                func_0x000107c610f0(piVar7,&uStack_70);
                iVar3 = (int)piVar7;
              }
            }
          } while (piRam000000011383aae8 == (int *)0x1);
        }
        goto joined_r0x000100123710;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
      if (bVar2) {
        piRam000000011383aae8 = (int *)0x1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_60 = 0xaaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    func_0x000107c61270(&uStack_60);
    func_0x000107c61274(&uStack_60,1);
    func_0x000107c6125c(0x11383aaf0,&uStack_60);
    func_0x000107c6126c(&uStack_60);
    piRam000000011383aae8 = (int *)0x11383aaf0;
  }
joined_r0x000100123710:
  if (lRam000000011383ab30 == 0) {
    func_0x000107c60e20(0xa0);
    FUN_1001224f0();
    plVar4 = *(long **)(lRam000000011383ab30 + 0x90);
  }
  else {
    plVar4 = *(long **)(lRam000000011383ab30 + 0x90);
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x1;
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  }
  func_0x000107c61268();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    plVar4 = (long *)0x20;
    func_0x000107c60e20();
    pbVar10 = (byte *)0x0;
    iVar3 = piVar6[7];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    if (iVar3 != -1) {
      pbVar12 = (byte *)((ulong)(iVar3 + 1) * 4);
      pbVar10 = pbVar12;
      func_0x000107c60e20();
      *plVar4 = (long)pbVar10;
      plVar4[2] = (long)(pbVar10 + (long)pbVar12);
      func_0x000107c60ee4();
      plVar4[1] = (long)(pbVar10 + (long)pbVar12);
    }
    plVar4[3] = 0;
    iVar3 = piVar6[5];
    dVar15 = (double)(long)piVar6[6];
    func_0x000107c61054();
    *(int *)(pbVar10 + 4) = iVar3;
    pbVar12 = (byte *)plVar4[1];
    uVar11 = (long)pbVar12 - (long)pbVar10;
    if (2 < ((long)uVar11 >> 2) - 1U) {
      uVar13 = ((long)uVar11 >> 2) - 3;
      pbVar14 = pbVar10 + 8;
      do {
        dVar16 = (double)iVar3;
        func_0x000107c61054();
        dStack_e8 = dVar16;
        func_0x000100123990(&dStack_e8);
        dVar16 = dStack_e8 + (dVar15 - dStack_e8) / (double)uVar13;
        func_0x000107c60fa4();
        iVar8 = (int)dVar16;
        if (iVar8 <= iVar3 + 1) {
          iVar8 = iVar3 + 1;
        }
        *(int *)pbVar14 = iVar8;
        uVar13 = uVar13 - 1;
        pbVar14 = pbVar14 + 4;
        iVar3 = iVar8;
      } while (uVar13 != 0);
    }
    pbVar14 = pbVar10 + (uVar11 - 4);
    pbVar14[0] = 0xff;
    pbVar14[1] = 0xff;
    pbVar14[2] = 0xff;
    pbVar14[3] = 0x7f;
    if (pbVar12 == pbVar10) {
      uVar9 = 0;
    }
    else {
      uVar13 = uVar11 >> 2;
      do {
        uVar9 = *(uint *)(&UNK_10e5741d0 + (ulong)((uint)uVar13 & 0xff ^ (uint)*pbVar10) * 4) ^
                (uint)uVar13 >> 8;
        uVar13 = (ulong)uVar9;
        uVar11 = uVar11 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar11 != 0);
    }
    *(uint *)(plVar4 + 3) = uVar9;
    return plVar4;
  }
  return plVar4;
code_r0x0001001235a0:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(0x11383aae8,0x10);
  if (bVar2) {
    piRam000000011383aae8 = (int *)0x1;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto code_r0x0001001235a8;
  goto LAB_100123598;
code_r0x0001001235a8:
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&uStack_60);
  func_0x000107c61274(&uStack_60,1);
  piVar6 = (int *)0x11383aaf0;
  func_0x000107c6125c(0x11383aaf0,&uStack_60);
  func_0x000107c6126c(&uStack_60);
  piRam000000011383aae8 = (int *)0x11383aaf0;
  piVar5 = piVar6;
  func_0x000107c61264();
  iVar3 = (int)piVar5;
  goto joined_r0x0001001235e8;
}



/* Entry: 10012382c; end: 100123993;  */

undefined8 * FUN_10012382c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  double dVar10;
  double dVar11;
  double dStack_68;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  pbVar4 = (byte *)0x0;
  iVar6 = *(int *)(param_1 + 0x1c);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (iVar6 != -1) {
    pbVar7 = (byte *)((ulong)(iVar6 + 1) * 4);
    pbVar4 = pbVar7;
    func_0x000107c60e20();
    *puVar1 = pbVar4;
    puVar1[2] = pbVar4 + (long)pbVar7;
    func_0x000107c60ee4();
    puVar1[1] = pbVar4 + (long)pbVar7;
  }
  puVar1[3] = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  dVar10 = (double)(long)*(int *)(param_1 + 0x18);
  func_0x000107c61054();
  *(int *)(pbVar4 + 4) = iVar6;
  pbVar7 = (byte *)puVar1[1];
  uVar5 = (long)pbVar7 - (long)pbVar4;
  if (2 < ((long)uVar5 >> 2) - 1U) {
    uVar8 = ((long)uVar5 >> 2) - 3;
    pbVar9 = pbVar4 + 8;
    do {
      dVar11 = (double)iVar6;
      func_0x000107c61054();
      dStack_68 = dVar11;
      func_0x000100123990(&dStack_68);
      dVar11 = dStack_68 + (dVar10 - dStack_68) / (double)uVar8;
      func_0x000107c60fa4();
      iVar2 = (int)dVar11;
      if (iVar2 <= iVar6 + 1) {
        iVar2 = iVar6 + 1;
      }
      *(int *)pbVar9 = iVar2;
      uVar8 = uVar8 - 1;
      pbVar9 = pbVar9 + 4;
      iVar6 = iVar2;
    } while (uVar8 != 0);
  }
  pbVar9 = pbVar4 + (uVar5 - 4);
  pbVar9[0] = 0xff;
  pbVar9[1] = 0xff;
  pbVar9[2] = 0xff;
  pbVar9[3] = 0x7f;
  if (pbVar7 == pbVar4) {
    uVar3 = 0;
  }
  else {
    uVar8 = uVar5 >> 2;
    do {
      uVar3 = *(uint *)(&UNK_10e5741d0 + (ulong)((uint)uVar8 & 0xff ^ (uint)*pbVar4) * 4) ^
              (uint)uVar8 >> 8;
      uVar8 = (ulong)uVar3;
      uVar5 = uVar5 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
  }
  *(uint *)(puVar1 + 3) = uVar3;
  return puVar1;
}


