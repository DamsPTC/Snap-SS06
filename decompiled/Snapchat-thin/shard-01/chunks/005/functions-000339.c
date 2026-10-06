/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101114f98; end: 101114fd7;  */

void FUN_101114f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d925978;
  func_0x000107c61520(&UNK_10d925978,&UNK_110386060);
  puRam0000000112d5e970 = puVar1;
  return;
}



/* Entry: 101114fd8; end: 10111527f;  */

int FUN_101114fd8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101115054;
        goto LAB_101115038;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101115038:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101115054:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101115280; end: 1011152db;  */

/* WARNING: Possible PIC construction at 0x000101115294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101115298) */

void FUN_101115280(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1011152dc; end: 101115337;  */

undefined8 * FUN_1011152dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101115338; end: 101115373;  */

undefined8 * FUN_101115338(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101115374; end: 101115407;  */

int FUN_101115374(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101115408; end: 101115663;  */

void FUN_101115408(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [24];
  ulong uStack_60;
  ulong uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(ulong *)(unaff_x20 + 0xf0) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  func_0x00010111dd94(unaff_x20 + 0x70,auStack_a0,0x112d5ece0,&UNK_10d925bf0);
  if (lStack_88 == 0) {
    func_0x00010111dfa8(auStack_a0,0x112d5ece0,&UNK_10d925bf0);
    return;
  }
  FUN_10111d660(auStack_a0,auStack_78);
  uVar4 = uStack_58;
  uVar1 = uStack_60;
  func_0x00010111d698(auStack_78,uStack_60);
  (**(code **)(uVar4 + 0x20))();
  uVar2 = param_1;
  uVar6 = uVar4;
  func_0x000107c44fdc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar6);
LAB_10111552c:
    func_0x00010111d698(auStack_78,uStack_60);
    (**(code **)(uStack_58 + 0x30))(0,uStack_60,uStack_58);
    uVar1 = param_1;
    func_0x000107c44fdc();
    func_0x000107c61180();
    uVar2 = uVar1;
    uVar4 = uStack_60;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    func_0x000107c61428(unaff_x20 + 0xf8,auStack_a0,0,0);
    uVar6 = *(ulong *)(unaff_x20 + 0xf8);
    if (*(long *)(uVar6 + 0x10) != 0) {
      func_0x000107c61434(uVar6);
      uVar1 = uVar4;
      func_0x000100029284();
      if ((uVar1 & 1) == 0) goto LAB_101115634;
      uVar5 = *(undefined8 *)(*(long *)(uVar6 + 0x38) + uVar2 * 8);
      func_0x000107c61174(uVar5);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar6);
      func_0x000107c439a4(param_1);
      func_0x000107c61180();
      uVar4 = param_1;
      func_0x000107c5fc54();
      func_0x000107c61170(param_1);
      func_0x000101119394(uVar5,uVar4);
      func_0x000107c61170(uVar5);
    }
  }
  else {
    if (uVar1 != uVar3 || uVar4 != uVar6) {
      func_0x000107c605b8(uVar1,uVar4,uVar3,uVar6,0);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar6);
      if ((uVar1 & 1) != 0) goto LAB_101115640;
      goto LAB_10111552c;
    }
LAB_101115634:
    func_0x000107c6142c(uVar4);
    uVar4 = uVar6;
  }
  func_0x000107c6142c(uVar4);
LAB_101115640:
  func_0x00010111d678(auStack_78);
  return;
}



/* Entry: 101115664; end: 101115683;  */

void FUN_101115664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101115684,0,0);
  return;
}



/* Entry: 101115684; end: 1011157c7;  */

void FUN_101115684(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  puVar3 = PTR_PTR_1126a63a0;
  func_0x000107c610f8(PTR_PTR_1126a63a0);
  func_0x000107c453e4();
  if (lVar6 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
              (&UNK_11053e480,unaff_x22 + 0x10,&UNK_11053e480,PTR___sSiN_11034deb0);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c579d4(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55800(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c5a390(uVar5);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000100087c34(unaff_x22 + 0x10);
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001011157c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011157c8; end: 101115ce3;  */

/* WARNING: Possible PIC construction at 0x000101115bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101115bd4) */

void FUN_1011157c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  puVar8 = (undefined *)(param_1 * 0x32);
  if (SUB168(SEXT816(param_1) * SEXT816(0x32),8) != (long)puVar8 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101115c00);
    (*pcVar2)();
  }
  if (SCARRY8((long)puVar8,0x32)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101115c04);
    (*pcVar2)();
  }
  puVar7 = *(undefined **)(unaff_x20 + 0x100);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar3 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar3 = puVar7;
    }
    func_0x000107c60480();
    puVar7 = *(undefined **)(unaff_x20 + 0x100);
  }
  if ((long)(puVar8 + 0x32) <= (long)puVar3) {
    puVar3 = puVar8 + 0x32;
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar4 = puVar7;
    }
    func_0x000107c60480();
  }
  if ((long)puVar4 <= (long)puVar8) {
    return;
  }
  if ((long)puVar3 < (long)puVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101115c50);
    (*pcVar2)();
  }
  puVar7 = *(undefined **)(unaff_x20 + 0x100);
  uVar9 = (ulong)puVar7 >> 0x3e;
  if (uVar9 == 0) {
    puVar4 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar4 = puVar7;
    }
    func_0x000107c60480();
  }
  if ((long)puVar4 < (long)puVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101115c68);
    (*pcVar2)();
  }
  if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101115c6c);
    (*pcVar2)();
  }
  if (uVar9 == 0) {
    puVar4 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar4 = puVar7;
    }
    func_0x000107c60480();
  }
  if ((long)puVar4 < (long)puVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101115c70);
    (*pcVar2)();
  }
  if ((((ulong)puVar7 & 0xc000000000000001) == 0) || ((long)puVar8 - (long)puVar3 == 0)) {
    func_0x000107c61438(puVar7,2);
  }
  else {
    if (puVar3 <= puVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101115cc0);
      (*pcVar2)();
    }
    uVar5 = 0;
    FUN_10111de9c(0,0x112d5e958,&PTR_PTR_1126a6398);
    func_0x000107c61438(puVar7,2);
    puVar4 = puVar8;
    do {
      puVar6 = puVar4 + 1;
      func_0x000107c60318(puVar4,puVar7,uVar5);
      puVar4 = puVar6;
    } while (puVar3 != puVar6);
  }
  func_0x000107c6142c(puVar7);
  if (uVar9 == 0) {
    puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x20;
    uVar9 = param_4;
    puVar4 = puVar8;
    puVar8 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    param_4 = (long)puVar3 << 1 | 1;
LAB_10111595c:
    uVar5 = 0;
    func_0x000107c605fc(0);
    puVar7 = puVar8;
    func_0x000107c615f4(puVar8,3);
    func_0x000107c61480();
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c615e8(puVar8);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar10 = *(long *)(puVar7 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(param_4 >> 1,(long)puVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101115cc4);
      (*pcVar2)();
    }
    if (lVar10 != (param_4 >> 1) - (long)puVar4) {
      func_0x000107c615ec(puVar8,2);
      goto LAB_101115940;
    }
    puVar4 = puVar8;
    func_0x000107c61480(puVar8,uVar5);
    func_0x000107c615ec(puVar8,2);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar4 == (undefined *)0x0) goto LAB_1011159d4;
  }
  else {
    puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar4 = puVar7;
    }
    puVar6 = puVar3;
    func_0x000107c60484(puVar8,puVar3);
    uVar9 = param_4;
    func_0x000107c6142c(puVar7);
    if ((param_4 & 1) != 0) goto LAB_10111595c;
LAB_101115940:
    uVar9 = param_4;
    puVar7 = puVar8;
    FUN_1011462c4(puVar8,puVar6,puVar4);
LAB_1011159d4:
    func_0x000107c615e8(puVar8);
    puVar4 = puVar7;
  }
  func_0x000101118658(puVar4);
  func_0x000107c61574(puVar4);
  puVar8 = *(undefined **)(unaff_x20 + 0x100);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar6 = *(undefined **)((undefined *)((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    puVar7 = puVar6;
    if ((long)puVar3 <= (long)puVar6) {
      puVar7 = puVar3;
    }
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar7;
    }
    if ((long)puVar6 < (long)puVar4) {
LAB_101115cb8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101115cbc);
      (*pcVar2)();
    }
  }
  else {
    puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if (((ulong)puVar8 & 0x8000000000000000) != 0) {
      puVar7 = puVar8;
    }
    puVar4 = puVar7;
    func_0x000107c60480();
    puVar6 = puVar7;
    func_0x000107c60480();
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101115ce4);
      (*pcVar2)();
    }
    puVar6 = puVar4;
    if ((long)puVar3 <= (long)puVar4) {
      puVar6 = puVar3;
    }
    puVar1 = puVar3;
    if (-1 < (long)puVar4) {
      puVar1 = puVar6;
    }
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar1;
    }
    func_0x000107c60480();
    if ((long)puVar7 < (long)puVar4) goto LAB_101115cb8;
  }
  if ((((ulong)puVar8 & 0xc000000000000001) == 0) || (puVar4 == (undefined *)0x0)) {
    func_0x000107c61438(puVar8,2);
  }
  else {
    uVar5 = 0;
    FUN_10111de9c(0,0x112d5e958,&PTR_PTR_1126a6398);
    func_0x000107c61438(puVar8,2);
    puVar7 = (undefined *)0x0;
    do {
      puVar3 = puVar7 + 1;
      func_0x000107c60318(puVar7,puVar8,uVar5);
      puVar7 = puVar3;
    } while (puVar4 != puVar3);
  }
  func_0x000107c6142c(puVar8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar7 = (undefined *)0x0;
    puVar3 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    uVar9 = (long)puVar4 << 1 | 1;
    puVar4 = puVar3 + 0x20;
LAB_101115af4:
    uVar5 = 0;
    func_0x000107c605fc(0);
    puVar8 = puVar3;
    func_0x000107c615f4(puVar3,3);
    func_0x000107c61480();
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c615e8(puVar3);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar10 = *(long *)(puVar8 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(uVar9 >> 1,(long)puVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101115cd4);
      (*pcVar2)();
    }
    if (lVar10 != (uVar9 >> 1) - (long)puVar7) {
      func_0x000107c615ec(puVar3,2);
      goto LAB_101115ad8;
    }
    puVar7 = puVar3;
    func_0x000107c61480(puVar3,uVar5);
    func_0x000107c615ec(puVar3,2);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) goto LAB_101115b74;
  }
  else {
    puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if (((ulong)puVar8 & 0x8000000000000000) != 0) {
      puVar7 = puVar8;
    }
    puVar3 = (undefined *)0x0;
    func_0x000107c60484(0,puVar4);
    func_0x000107c6142c(puVar8);
    if ((uVar9 & 1) != 0) goto LAB_101115af4;
LAB_101115ad8:
    puVar8 = puVar3;
    FUN_1011462c4(puVar3,puVar4,puVar7,uVar9);
  }
  func_0x000107c615e8(puVar3);
  puVar7 = puVar8;
LAB_101115b74:
  puVar8 = puVar7;
  FUN_1011448a4(puVar7);
  func_0x000107c61574(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar3 = puVar8;
  func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar8);
  func_0x000107c45788(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101115ce4; end: 101115fab;  */

undefined * FUN_101115ce4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1 != 0) && (uVar14 = *(ulong *)(param_1 + 0x10), uVar14 != 0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar12 = *(long *)(unaff_x20 + 0x40);
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar10,uVar2);
    func_0x000107c6142c(uVar2);
    lVar4 = lVar12;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (lVar4 != 0) {
      uVar13 = (ulong)*(byte *)(unaff_x20 + 0xe0);
      func_0x000107c4077c(lVar4);
      FUN_1011172b8();
      if (uVar13 != 0) {
        uVar15 = 0;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          uVar1 = uVar15;
          if (uVar15 <= uVar14) {
            uVar1 = uVar14;
          }
          puVar9 = (undefined8 *)(param_1 + 0x28 + uVar15 * 0x10);
          do {
            if (uVar14 == uVar15) {
              FUN_10111ce08(0,0,puVar8);
              uVar14 = uVar13;
              FUN_10111734c(uVar13,param_1);
              uVar10 = *(undefined8 *)(unaff_x20 + 0x100);
              *(ulong *)(unaff_x20 + 0x100) = uVar14;
              func_0x000107c6142c(uVar10);
              FUN_1011157c8(0);
              func_0x000107c6142c(uVar13);
              func_0x000107c61170(lVar4);
              puVar8 = *(undefined **)(unaff_x20 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_retain_11034d2d8)(puVar8);
              return puVar8;
            }
            uVar15 = uVar15 + 1;
            if (uVar1 + 1 == uVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101115fac);
              (*pcVar3)();
            }
            uVar10 = puVar9[-1];
            uVar2 = *puVar9;
            func_0x000107c61434(uVar2);
            func_0x000107c5fadc(uVar10,uVar2);
            lVar5 = lVar12;
            func_0x000107c4e680();
            func_0x000107c61180();
            func_0x000107c6142c(uVar2);
            func_0x000107c61170(uVar10);
            puVar9 = puVar9 + 2;
          } while (lVar5 == 0);
          puVar7 = puVar8;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
             (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar6 = puVar8;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_101136b48(0,puVar6 + 1,1,puVar8);
          }
          uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar11 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_101136b48(puVar8,uVar1 + 1,1,puVar7);
            uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
          *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar5;
        } while( true );
      }
      func_0x000107c61170(lVar4);
    }
  }
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  FUN_10111de9c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c4a8a4(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar8;
}



/* Entry: 101115fac; end: 1011161bf;  */

undefined * FUN_101115fac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar3 = &lStack_60;
  uVar9 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3e884();
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar1);
  lVar2 = param_1;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(param_1);
  uVar1 = 0x112d5e858;
  func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
  func_0x000107c61538();
  lStack_60 = param_1;
  uStack_58 = uVar1;
  func_0x000107c61434(param_1);
  func_0x0001006c71a4(&lStack_60);
  func_0x000107c6142c(param_1);
  puVar4 = &UNK_1103864e8;
  func_0x000107c613fc(&UNK_1103864e8,0x19,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  puVar4[0x18] = 0;
  uVar1 = 0x10111e010;
  func_0x0001000bfde0(0x10111e010,puVar4,PTR___sSbN_11034dd40);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar5 = FUN_101117ff8;
  func_0x0001000c0ebc(FUN_101117ff8,0);
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  func_0x000104880bc0(0x4014000000000000,uVar1);
  func_0x000107c61574(pcVar5);
  puVar4 = &UNK_1103861a0;
  func_0x000107c613fc(&UNK_1103861a0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar6 = &UNK_110386510;
  func_0x000107c613fc(&UNK_110386510,0x30,7);
  *(long *)(puVar6 + 0x10) = param_1;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  puVar6[0x20] = 1 < uVar9;
  *(undefined8 *)(puVar6 + 0x28) = uVar7;
  uVar7 = 0;
  FUN_10111de9c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61434(param_1);
  uVar8 = 0x12;
  func_0x0001048785ac(0x12,0,0x3c,4,&UNK_10d925c60,puVar6,uVar7);
  func_0x000107c61574(puVar6);
  func_0x0001004575f0();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar8);
  return puVar6;
}



/* Entry: 1011161c0; end: 1011161df;  */

void FUN_1011161c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011161e0,0,0);
  return;
}



/* Entry: 1011161e0; end: 101116357;  */

void FUN_1011161e0(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 *puVar11;
  long *plVar12;
  
  lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x10);
  *(long *)(unaff_x22 + 0x48) = lVar10;
  if (lVar10 != 0) {
    func_0x000107c61428(*(long *)(unaff_x22 + 0x38) + 0x10,unaff_x22 + 0x10,0,0);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar10 = 0;
    do {
      *(long *)(unaff_x22 + 0x50) = lVar10;
      *(undefined **)(unaff_x22 + 0x58) = puVar4;
      lVar10 = *(long *)(unaff_x22 + 0x30) + lVar10 * 0x10;
      lVar1 = *(long *)(lVar10 + 0x20);
      lVar2 = *(long *)(lVar10 + 0x28);
      *(long *)(unaff_x22 + 0x60) = lVar2;
      lVar10 = *(long *)(unaff_x22 + 0x38) + 0x10;
      func_0x000107c61648();
      *(long *)(unaff_x22 + 0x68) = lVar10;
      if (lVar10 != 0) {
        lVar8 = lVar1;
        func_0x000100077018(lVar1,lVar2,*(undefined8 *)(unaff_x22 + 0x40));
        plVar12 = (long *)0x70;
        func_0x000107c61434(lVar2);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x70) = plVar12;
        *plVar12 = unaff_x22;
        plVar12[1] = (long)FUN_101116358;
        uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
        plVar12[3] = lVar2;
        plVar12[4] = lVar10;
        *(byte *)((long)plVar12 + 0x61) = (byte)lVar8 & 1;
        *(undefined1 *)(plVar12 + 0xc) = uVar3;
        plVar12[2] = lVar1;
        lVar10 = 0;
        func_0x000107c5eea4();
        plVar12[5] = lVar10;
        lVar10 = *(long *)(lVar10 + -8);
        plVar12[6] = lVar10;
        uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar12[7] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101119ae0,0,0);
        return;
      }
      lVar10 = *(long *)(unaff_x22 + 0x50) + 1;
    } while (lVar10 != *(long *)(unaff_x22 + 0x48));
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = *(undefined8 **)(unaff_x22 + 0x28);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001011448c0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  puVar7 = puVar5;
  func_0x000107c5fc48(puVar5,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar5);
  func_0x000107c45788();
  func_0x000107c61170(puVar7);
  func_0x000107c6142c(puVar4);
  *puVar11 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x0001011162e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101116358; end: 1011163bb;  */

void FUN_101116358(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011163bc,0,0);
  return;
}



/* Entry: 1011163bc; end: 1011165b7;  */

void FUN_1011163bc(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x22;
  long *plVar11;
  undefined8 *puVar12;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar9 = *(ulong *)(unaff_x22 + 0x58);
  if (lVar4 != 0) {
    func_0x000107c61174();
    uVar5 = uVar9;
    func_0x000107c61550();
    uVar10 = *(ulong *)(unaff_x22 + 0x58);
    if ((((int)uVar5 == 0) || ((uVar9 >> 0x3e & 1) != 0)) || ((long)uVar10 < 0)) {
      if (uVar10 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar10) {
          uVar5 = uVar10;
        }
        func_0x000107c60480(uVar5);
        uVar10 = *(ulong *)(unaff_x22 + 0x58);
      }
      uVar9 = 0;
      func_0x000101136b90(0,uVar5 + 1,1,uVar10);
      uVar10 = uVar9;
    }
    uVar8 = uVar9 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    uVar9 = uVar10;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x000101136b90(uVar9,uVar5 + 1,1,uVar10);
      uVar8 = uVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
    *(long *)(uVar8 + uVar5 * 8 + 0x20) = lVar4;
    func_0x000107c61170(lVar4);
  }
  do {
    lVar4 = *(long *)(unaff_x22 + 0x50) + 1;
    if (lVar4 == *(long *)(unaff_x22 + 0x48)) {
      puVar12 = *(undefined8 **)(unaff_x22 + 0x28);
      uVar5 = uVar9;
      func_0x0001011448c0(uVar9);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      uVar10 = uVar5;
      func_0x000107c5fc48(uVar5,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(uVar5);
      func_0x000107c45788();
      func_0x000107c61170(uVar10);
      func_0x000107c6142c(uVar9);
      *puVar12 = puVar7;
                    /* WARNING: Could not recover jumptable at 0x000101116578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x50) = lVar4;
    *(ulong *)(unaff_x22 + 0x58) = uVar9;
    lVar4 = *(long *)(unaff_x22 + 0x30) + lVar4 * 0x10;
    lVar1 = *(long *)(lVar4 + 0x20);
    lVar2 = *(long *)(lVar4 + 0x28);
    *(long *)(unaff_x22 + 0x60) = lVar2;
    lVar4 = *(long *)(unaff_x22 + 0x38) + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x68) = lVar4;
  } while (lVar4 == 0);
  lVar6 = lVar1;
  func_0x000100077018(lVar1,lVar2,*(undefined8 *)(unaff_x22 + 0x40));
  plVar11 = (long *)0x70;
  func_0x000107c61434(lVar2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101116358;
  uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
  plVar11[3] = lVar2;
  plVar11[4] = lVar4;
  *(byte *)((long)plVar11 + 0x61) = (byte)lVar6 & 1;
  *(undefined1 *)(plVar11 + 0xc) = uVar3;
  plVar11[2] = lVar1;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar11[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar11[6] = lVar4;
  uVar9 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[7] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101119ae0,0,0);
  return;
}



/* Entry: 1011165b8; end: 1011166b3;  */

undefined1 * FUN_1011165b8(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_60;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ec88,&UNK_10d925be0);
    puVar1 = PTR_PTR_1126a63a8;
    func_0x000107c610f8();
    uVar2 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c49564();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    puStack_60 = puVar1;
    func_0x000100854cb0(&puStack_60);
    func_0x000107c61170(puVar1);
  }
  else {
    FUN_101118b98(param_3);
    func_0x000107c61574(param_2);
    ppuVar4 = (undefined **)param_3;
  }
  return (undefined1 *)ppuVar4;
}



/* Entry: 1011166b4; end: 1011167f7;  */

undefined1 * FUN_1011166b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_50;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
    FUN_10111de9c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5ff4c();
    puStack_50 = puVar2;
    func_0x000100854cb0(&puStack_50);
    func_0x000107c61170(puVar2);
  }
  else {
    puVar2 = &UNK_1103861a0;
    func_0x000107c613fc(&UNK_1103861a0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    puVar1 = &UNK_110386240;
    func_0x000107c613fc(&UNK_110386240,0x20,7);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    func_0x0001000285a8(0x112d5ec70,&UNK_10d925bd0);
    func_0x000107c613fc();
    func_0x000107c61434(param_3);
    ppuVar3 = (undefined **)0x10111c570;
    func_0x0001000b64ac(0x10111c570,puVar1);
    func_0x000107c61574(param_2);
  }
  return (undefined1 *)ppuVar3;
}



/* Entry: 1011167f8; end: 10111697f;  */

void FUN_1011167f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
    uVar2 = 0;
    FUN_10111de9c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    uStack_78 = 0x10111c188;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_100f6151c;
    puStack_80 = &UNK_1103861e0;
    ppuVar3 = &puStack_98;
    uStack_70 = param_1;
    func_0x000107c60bc4(ppuVar3);
    uVar1 = uStack_70;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c5b4f8(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101116980; end: 101116a63;  */

void FUN_101116980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110386538;
  func_0x000107c613fc(&UNK_110386538,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_3);
  uVar2 = 0x12;
  func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925c70,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 101116a64; end: 101116a7f;  */

void FUN_101116a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101116a80,0,0);
  return;
}



/* Entry: 101116a80; end: 101116b67;  */

void FUN_101116a80(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x50) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x101116b18;
    plVar1[3] = lVar3;
    plVar2 = (long *)0xb0;
    func_0x000107c615b8();
    plVar1[4] = (long)plVar2;
    *plVar2 = (long)plVar1;
    plVar2[1] = 0x10111b0cc;
    plVar2[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10111b1a8,0,0);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000100087f6c();
  func_0x000100c7f554();
                    /* WARNING: Could not recover jumptable at 0x000101116b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101116b68; end: 101116c07;  */

void FUN_101116b68(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    FUN_10111ab48();
    if (param_1 == 0) {
      param_1 = *(long *)(unaff_x22 + 0x48);
      func_0x000107c61174();
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0x30) = param_1;
    func_0x000100087f6c(unaff_x22 + 0x30);
    func_0x000100c7f554();
    func_0x000107c61170(param_1);
    func_0x000107c61574(uVar1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000100087f6c();
    func_0x000100c7f554();
  }
                    /* WARNING: Could not recover jumptable at 0x000101116c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101116c08; end: 101116f63;  */

undefined8 FUN_101116c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar1 = &UNK_1103861a0;
  func_0x000107c613fc(&UNK_1103861a0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110386470;
  func_0x000107c613fc(&UNK_110386470,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x0001000285a8(0x112d5ed00,&UNK_10d925c30);
  func_0x000107c613fc();
  func_0x000107c61434(param_2);
  uVar3 = 0x10111dc5c;
  func_0x0001000b64ac(0x10111dc5c,puVar2);
  lVar4 = 0x112d5ed08;
  func_0x0001000285a8(0x112d5ed08,&UNK_10d926730);
  func_0x00010114530c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 5;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  *(undefined8 *)(lVar4 + 0x28) = uVar8;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  lVar5 = lVar4;
  func_0x0001000c19f0(lVar4);
  func_0x000107c61574(lVar4);
  puVar1 = &UNK_110386498;
  func_0x000107c613fc(&UNK_110386498,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  uVar8 = 0x10111dc68;
  func_0x0001000c0ebc(0x10111dc68,puVar1);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(puVar1);
  uVar6 = 0;
  FUN_10111de9c(0,0x112d5ed10,&PTR_PTR_1126a63d0);
  pcVar7 = FUN_101116f64;
  func_0x0001000bfde0(FUN_101116f64,0,uVar6);
  func_0x000107c61574(uVar8);
  func_0x0001004575f0();
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar7);
  return uVar8;
}



/* Entry: 101116f64; end: 101116f6f;  */

void FUN_101116f64(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101116f70; end: 1011172b7;  */

uint FUN_101116f70(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint uVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ef5c();
  lStack_88 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar4 = (long)&pcStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ef64();
  lStack_80 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar12 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar5 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (lVar11 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c4aa7c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c5ee94(lVar9);
    func_0x000107c61170(lVar3);
    pcStack_a0 = *(code **)(lVar8 + 0x20);
    lStack_90 = lVar9 - extraout_x12_02;
    (*pcStack_a0)(lVar9 - extraout_x12_02,lVar9,lVar1);
    func_0x000107c5ef54(lVar12);
    lVar9 = lStack_78;
    lVar3 = lStack_88;
    lStack_98 = lVar2;
    (**(code **)(lStack_88 + 0x68))
              (lVar4,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,
               lStack_78);
    func_0x000107c5eea0(lVar11);
    func_0x000107c5ef4c(lVar5,lVar4,0xffffffffffffffff,lVar11,0);
    pcVar10 = *(code **)(lVar8 + 8);
    (*pcVar10)(lVar11,lVar1);
    (**(code **)(lVar3 + 8))(lVar4,lVar9);
    (**(code **)(lStack_80 + 8))(lVar12,lStack_98);
    lVar3 = lStack_68;
    FUN_10111df60(lVar5,lStack_68,0x112d373d8,&UNK_10d9014c0);
    pcVar7 = *(code **)(lVar8 + 0x30);
    lVar4 = lVar3;
    (*pcVar7)(lVar3,1,lVar1);
    lVar2 = lStack_70;
    if ((int)lVar4 == 1) {
      func_0x000107c5eea0(lStack_70);
      lVar4 = lVar3;
      (*pcVar7)(lVar3,1,lVar1);
      if ((int)lVar4 != 1) {
        func_0x00010111dfa8(lVar3,0x112d373d8,&UNK_10d9014c0);
      }
    }
    else {
      (*pcStack_a0)(lStack_70,lVar3,lVar1);
    }
    lVar3 = lStack_90;
    lVar4 = lStack_90;
    func_0x000107c5ee74(lStack_90,lVar2);
    uVar6 = (uint)lVar4;
    (*pcVar10)(lVar2,lVar1);
    (*pcVar10)(lVar3,lVar1);
  }
  return uVar6 & 1;
}



/* Entry: 1011172b8; end: 10111734b;  */

long FUN_1011172b8(char param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (param_1 == '\0') {
    func_0x000107c5b5d8(lVar1,param_2,0);
    func_0x000107c61180();
  }
  else {
    func_0x000107c3e874(lVar1,param_2,1,0);
    func_0x000107c61180();
  }
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10111de9c(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
  }
  return lVar3;
}



/* Entry: 10111734c; end: 10111747f;  */

undefined * FUN_10111734c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101117434);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar6;
        FUN_10111c1c0(uVar6,param_1,&PTR_PTR_1126bf130,0x112d5ecd8);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101117428);
        (*pcVar1)();
      }
      uVar7 = uVar6 + 1;
      uStack_78 = uVar2;
      FUN_101117480(&uStack_78);
      func_0x000107c61170(uVar2);
      uVar6 = uVar6 + 1;
      puVar3 = puStack_68;
      puVar4 = puStack_70;
    } while (uVar7 != uVar5);
  }
  func_0x000107c6142c(puVar3);
  return puVar4;
}



/* Entry: 101117480; end: 101117c3f;  */

void FUN_101117480(ulong *param_1,long param_2,ulong *param_3,long param_4,ulong *param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long lVar16;
  undefined1 *puVar17;
  long extraout_x12;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined *puStack_d8;
  ulong *puStack_d0;
  
  lVar16 = 0x112d36580;
  puVar12 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  puVar17 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar17 - extraout_x12;
  uVar21 = *param_1;
  uVar18 = *(ulong *)(param_2 + 0x40);
  uVar13 = uVar21;
  func_0x000107c5d984();
  func_0x000107c61180();
  puVar10 = puVar12;
  if (uVar13 == 0) {
    func_0x000107c5faec();
    puVar10 = puVar12;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar12);
  }
  func_0x000107c4e67c();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar18 != 0) {
    uVar13 = uVar18;
    func_0x000107c3fc6c();
    func_0x000107c61180();
    if (uVar13 != 0) {
      uVar4 = uVar13;
      func_0x000107c5faec();
      uVar5 = uVar4;
      func_0x000100077018();
      if ((uVar5 & 1) == 0) {
        uVar19 = uVar18;
        func_0x000107c4e684();
        func_0x000107c61180();
        uVar5 = 0;
        FUN_10111de9c(0,0x112d5ecd8,&PTR_PTR_1126bf130);
        uVar7 = uVar19;
        uVar6 = uVar5;
        func_0x000107c5fc54(uVar19,uVar5);
        func_0x000107c61170(uVar19);
        if (uVar7 >> 0x3e == 0) {
          uVar19 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          func_0x000107c6142c();
        }
        else {
          uVar19 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar19 = uVar7;
          }
          func_0x000107c60480();
          func_0x000107c6142c(uVar7);
        }
        if (uVar19 == 0) {
          func_0x000107c61170(uVar18);
          func_0x000107c6142c(puVar10);
          uVar18 = uVar13;
        }
        else {
          puStack_d8 = puVar10;
          func_0x000107c5d984();
          func_0x000107c61180();
          uVar19 = uVar21;
          func_0x000107c5faec();
          func_0x000107c61170(uVar21);
          func_0x000100077018(uVar19,uVar6,param_4);
          func_0x000107c6142c(uVar6);
          uStack_dc = (undefined4)uVar19;
          if ((uVar19 & 1) == 0) {
            bVar3 = false;
          }
          else {
            uVar21 = uVar18;
            func_0x000107c4e684();
            func_0x000107c61180();
            uVar6 = uVar21;
            func_0x000107c5fc54();
            func_0x000107c61170(uVar21);
            if (uVar6 >> 0x3e == 0) {
              uVar21 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar21 = uVar6 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar6) {
                uVar21 = uVar6;
              }
              func_0x000107c60480();
            }
            func_0x000107c6142c(uVar6);
            if ((long)uVar21 < 2) {
              bVar3 = false;
            }
            else {
              bVar3 = *(long *)(param_4 + 0x10) == 1;
            }
          }
          uVar21 = uVar18;
          func_0x000107c4e684();
          func_0x000107c61180();
          uVar6 = uVar21;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar21);
          if (uVar6 >> 0x3e == 0) {
            uVar21 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar21 = uVar6 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar6) {
              uVar21 = uVar6;
            }
            func_0x000107c60480();
          }
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puStack_d0 = param_3;
          if (uVar21 != 0) {
            uVar19 = 0;
LAB_101117788:
            do {
              if ((uVar6 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101117b3c);
                  (*pcVar1)();
                }
                uVar7 = *(ulong *)(uVar6 + 0x20 + uVar19 * 8);
                func_0x000107c61174();
                uVar14 = uVar5;
              }
              else {
                uVar7 = uVar19;
                uVar14 = uVar6;
                FUN_10111c1c0(uVar19,uVar6,&PTR_PTR_1126bf130,0x112d5ecd8);
              }
              bVar2 = SCARRY8(uVar19,1);
              uVar19 = uVar19 + 1;
              if (bVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101117b38);
                (*pcVar1)();
              }
              uVar5 = uVar14;
              if (bVar3) {
                uVar8 = uVar7;
                func_0x000107c5d984();
                func_0x000107c61180();
                uVar9 = uVar8;
                func_0x000107c5faec();
                uVar5 = uVar14;
                func_0x000107c61170(uVar8);
                lVar20 = *(long *)(param_4 + 0x10) + 1;
                puVar22 = (ulong *)(param_4 + 0x28);
                do {
                  lVar20 = lVar20 + -1;
                  if (lVar20 == 0) {
                    func_0x000107c6142c(uVar14);
                    func_0x000107c61170(uVar7);
                    if (uVar19 == uVar21) goto LAB_1011178f8;
                    goto LAB_101117788;
                  }
                  uVar8 = puVar22[-1];
                  uVar5 = *puVar22;
                  if (uVar8 == uVar9 && uVar5 == uVar14) break;
                  puVar22 = puVar22 + 2;
                  func_0x000107c605b8(uVar8,uVar5,uVar9,uVar14,0);
                } while ((uVar8 & 1) == 0);
                func_0x000107c6142c(uVar14);
              }
              uVar8 = uVar7;
              func_0x000107c5d984();
              func_0x000107c61180();
              uVar9 = uVar8;
              func_0x000107c5faec();
              uVar14 = uVar5;
              func_0x000107c61170(uVar8);
              func_0x000107c61170(uVar7);
              puVar10 = puVar12;
              func_0x000107c61558();
              puVar11 = puVar12;
              if (((ulong)puVar10 & 1) == 0) {
                uVar14 = *(long *)(puVar12 + 0x10) + 1;
                puVar11 = (undefined *)0x0;
                func_0x0001000d182c(0,uVar14,1,puVar12);
              }
              uVar8 = *(ulong *)(puVar11 + 0x10);
              uVar7 = uVar8 + 1;
              puVar12 = puVar11;
              if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar8) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
                uVar14 = uVar7;
                func_0x0001000d182c(puVar12,uVar7,1,puVar11);
              }
              *(ulong *)(puVar12 + 0x10) = uVar7;
              *(ulong *)(puVar12 + uVar8 * 0x10 + 0x20) = uVar9;
              *(ulong *)(puVar12 + uVar8 * 0x10 + 0x28) = uVar5;
              uVar5 = uVar14;
            } while (uVar19 != uVar21);
          }
LAB_1011178f8:
          func_0x000107c6142c(uVar6);
          func_0x000100077018(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                              puVar12);
          puVar10 = PTR_PTR_1126a6398;
          func_0x000107c610f8();
          puVar11 = puVar12;
          func_0x000107c5fc48(puVar12,PTR___sSSN_11034da80);
          func_0x000107c6142c(puVar12);
          func_0x000107c48ec4();
          func_0x000107c61170(uVar13);
          func_0x000107c61170(puVar11);
          uVar13 = uVar18;
          func_0x000107c4f4e8();
          func_0x000107c61180();
          bVar3 = uVar13 == 0;
          if (bVar3) {
            func_0x000107c5ede0();
          }
          else {
            func_0x000107c5edb4(puVar17);
            func_0x000107c61170(uVar13);
            uVar13 = 0;
            func_0x000107c5ede0();
          }
          puVar22 = puStack_d0;
          lVar23 = *(long *)(uVar13 - 8);
          (**(code **)(lVar23 + 0x38))(puVar17,bVar3,1,uVar13);
          FUN_10111df60(puVar17,lVar16,0x112d36580,&UNK_10d9016d0);
          func_0x000107c5ede0(0);
          uVar15 = 1;
          lVar20 = lVar16;
          (**(code **)(lVar23 + 0x30))(lVar16,1,uVar13);
          if ((int)lVar20 == 1) {
            func_0x00010111dfa8(lVar16,0x112d36580,&UNK_10d9016d0);
            lVar20 = 0;
          }
          else {
            func_0x000107c5ed70();
            (**(code **)(lVar23 + 8))(lVar16,uVar13);
            func_0x000107c5fadc(lVar20,uVar15);
            func_0x000107c6142c(uVar15);
          }
          func_0x000107c57998(puVar10);
          func_0x000107c61170(lVar20);
          func_0x000107c61174();
          FUN_10111c7d4();
          uVar21 = *param_5 & 0xffffffffffffff8;
          uVar13 = *(ulong *)(uVar21 + 0x10);
          if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar13) {
            uVar21 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
            func_0x000101136bd8(uVar21,uVar13 + 1,1);
            *param_5 = uVar21;
            uVar21 = uVar21 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar21 + 0x10) = uVar13 + 1;
          *(undefined **)(uVar21 + uVar13 * 8 + 0x20) = puVar10;
          uVar5 = *puVar22;
          uVar13 = uVar5;
          func_0x000107c61558();
          *puVar22 = uVar5;
          uVar21 = uVar5;
          if ((uVar13 & 1) == 0) {
            uVar21 = 0;
            func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            *puVar22 = uVar21;
          }
          uVar13 = *(ulong *)(uVar21 + 0x10);
          uVar5 = uVar21;
          if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar13) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
            func_0x0001000d182c(uVar5,uVar13 + 1,1,uVar21);
            *puVar22 = uVar5;
          }
          *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
          lVar16 = uVar5 + uVar13 * 0x10;
          *(ulong *)(lVar16 + 0x20) = uVar4;
          *(undefined **)(lVar16 + 0x28) = puStack_d8;
          func_0x000107c61170(puVar10);
        }
      }
      else {
        func_0x000107c61170(uVar18);
        func_0x000107c6142c(puVar10);
        uVar18 = uVar13;
      }
    }
    func_0x000107c61170(uVar18);
  }
  return;
}



/* Entry: 101117c40; end: 101117d83;  */

undefined8 FUN_101117c40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = &uStack_60;
  uVar5 = param_2;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(param_2);
  lVar1 = 0x112d5e858;
  func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined1 *)(lVar1 + 0x20) = param_3;
  uStack_60 = param_2;
  lStack_58 = lVar1;
  func_0x000107c61434(param_2);
  func_0x0001006c71a4(&uStack_60);
  func_0x000107c61574(lVar1);
  func_0x000107c6142c(param_2);
  puVar3 = &UNK_110386448;
  func_0x000107c613fc(&UNK_110386448,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  puVar3[0x18] = param_3;
  uVar5 = 0x10111dc50;
  func_0x0001000bfde0(0x10111dc50,puVar3,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  pcVar4 = FUN_101117ff8;
  func_0x0001000c0ebc(FUN_101117ff8,0);
  func_0x000107c61574(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
  func_0x000104880bc0(param_1,uVar5);
  func_0x000107c61574(pcVar4);
  return uVar5;
}



/* Entry: 101117d84; end: 101117e2f;  */

void FUN_101117d84(undefined8 param_1,long *param_2,ulong param_3,char param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  lVar5 = *param_2;
  lVar1 = param_2[1];
  lVar4 = lVar5;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(lVar5);
  if (*(long *)(lVar4 + 0x10) == 0) {
    func_0x000107c6142c(lVar4);
  }
  else {
    FUN_101117e30(param_3,lVar4);
    func_0x000107c6142c(lVar4);
    if ((param_3 & 1) != 0) {
      lVar5 = *(long *)(lVar1 + 0x10);
      pcVar6 = (char *)(lVar1 + 0x20);
      do {
        bVar3 = lVar5 != 0;
        lVar5 = lVar5 + -1;
        if (!bVar3) break;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != param_4);
      goto LAB_101117e18;
    }
  }
  bVar3 = false;
LAB_101117e18:
  *(bool *)param_1 = bVar3;
  return;
}



/* Entry: 101117e30; end: 101117ff7;  */

undefined8 FUN_101117e30(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_a8 [72];
  
  if (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_2 + 0x10)) {
    uVar11 = 0;
  }
  else {
    uVar10 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar14 = uVar14 & *(ulong *)(param_2 + 0x38);
    func_0x000107c61434(param_2);
    lVar13 = 0;
joined_r0x000101117ecc:
    while (uVar14 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar11 = 0;
        goto LAB_101117fc0;
      }
      uVar4 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
                        lVar13 * 0x400);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_1 + 0x28));
      func_0x000107c61434(uVar2);
      puVar7 = auStack_a8;
      func_0x000107c5fb58(puVar7,uVar4,uVar2);
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar12 = (ulong)puVar7 & (uVar9 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_1 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0) {
LAB_101117fa8:
        func_0x000107c6142c(uVar2);
        uVar11 = 0;
        goto LAB_101117fc0;
      }
      uVar14 = uVar14 - 1 & uVar14;
      while( true ) {
        puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
        uVar8 = *puVar1;
        uVar3 = puVar1[1];
        if ((uVar8 == uVar4 && uVar3 == uVar2) ||
           (func_0x000107c605b8(uVar8,uVar3,uVar4,uVar2,0), (uVar8 & 1) != 0)) break;
        uVar12 = uVar12 + 1 & ~uVar9;
        if ((*(ulong *)(param_1 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
        goto LAB_101117fa8;
      }
      func_0x000107c6142c(uVar2);
    }
    bVar6 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101117ff8);
      (*pcVar5)();
    }
    if (lVar13 < (long)(uVar10 + 0x3f >> 6)) {
      uVar14 = ((ulong *)(param_2 + 0x38))[lVar13];
      goto joined_r0x000101117ecc;
    }
    uVar11 = 1;
LAB_101117fc0:
    func_0x000107c61574(param_2);
  }
  return uVar11;
}



/* Entry: 101117ff8; end: 101117fff;  */

undefined1 FUN_101117ff8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101118000; end: 101118267;  */

void FUN_101118000(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    FUN_10111de9c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5ff4c();
    puStack_68 = puVar7;
    func_0x000100087f6c(&puStack_68);
    func_0x000107c61170(puVar7);
    func_0x000100c7f554();
  }
  else {
    lStack_90 = extraout_x12;
    lStack_88 = lVar3;
    uStack_80 = param_3;
    func_0x000107c5eea0(lVar8);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar10 = param_1 & 0xffffffffffffff8;
    puStack_78 = puVar7;
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar9 = param_1;
      if (-1 < (long)param_1) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      uVar11 = 0;
      uStack_70 = param_1 & 0xc000000000000001;
      do {
        if (uStack_70 == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101118208);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar11;
          FUN_10111c1c0(uVar11,param_1,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101118204);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar5 != 0) {
          uVar6 = uVar5;
          func_0x000107c5ee70();
          func_0x00010901cdb0(uVar4,uVar6);
          func_0x000107c61170(uVar6);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c61180();
          func_0x000107c61174(uVar5);
          func_0x000107c56bcc(puStack_78);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar5);
        }
        func_0x000107c61170(uVar4);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar9);
    }
    puVar7 = puStack_78;
    puStack_68 = puStack_78;
    func_0x000100087f6c(&puStack_68);
    func_0x000100c7f554();
    func_0x000107c61170(puVar7);
    (**(code **)(lStack_90 + 8))(lVar8,lStack_88);
  }
  return;
}



/* Entry: 101118268; end: 101118303;  */

void FUN_101118268(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101118304(param_3,param_1);
    func_0x000107c61574(param_2);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 101118304; end: 101118413;  */

void FUN_101118304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar1 = param_1;
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  puVar2 = &UNK_1103861a0;
  func_0x000107c613fc(&UNK_1103861a0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1103863f8;
  func_0x000107c613fc(&UNK_1103863f8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_50 = FUN_10111dc44;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101132f70;
  puStack_58 = &UNK_110386410;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5c070(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101118414; end: 1011188cb;  */

void FUN_101118414(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar10 = *(long *)(param_4 + 0x10);
      if (lVar10 != 0) {
        puVar8 = (ulong *)(param_4 + 0x28);
        do {
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar6 = puVar8[-1];
            uVar1 = *puVar8;
            func_0x000107c61434(uVar1);
            func_0x000107c61434(param_1);
            uVar2 = uVar6;
            uVar9 = uVar1;
            func_0x000100029284();
            if ((uVar9 & 1) == 0) {
              func_0x000107c6142c(param_1);
            }
            else {
              uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar2 * 8);
              func_0x000107c61174(uVar3);
              func_0x000107c6142c(param_1);
              uVar9 = *(ulong *)(param_2 + 0x10);
              uVar2 = uVar6;
              func_0x000107c5fadc(uVar6,uVar1);
              func_0x000107c4a52c();
              func_0x000107c61170(uVar2);
              if ((uVar9 & 1) == 0) {
                puVar4 = PTR_PTR_1126b4a40;
                func_0x000107c610f8(PTR_PTR_1126b4a40);
                func_0x000107c48448();
                puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
                func_0x000107c61174(puVar4);
                func_0x000107c5fadc(uVar6,uVar1);
                func_0x000107c48af4(puVar5);
                func_0x000107c61170(uVar6);
                func_0x000107c56bcc(puVar7);
                func_0x000107c61170(uVar3);
                func_0x000107c61170(puVar4);
                func_0x000107c61170(puVar4);
                func_0x000107c61170(puVar5);
              }
              else {
                func_0x000107c61170(uVar3);
              }
            }
            func_0x000107c6142c(uVar1);
          }
          puVar8 = puVar8 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      puStack_80 = puVar7;
      func_0x000100087f6c(&puStack_80);
      func_0x000100c7f554();
      func_0x000107c61574(param_2);
      func_0x000107c61170(puVar7);
      return;
    }
    func_0x000107c61574(param_2);
  }
  FUN_10111de9c(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ff4c();
  puStack_80 = puVar7;
  func_0x000100087f6c(&puStack_80);
  func_0x000107c61170(puVar7);
  func_0x000100c7f554();
  return;
}



/* Entry: 1011188cc; end: 1011188e7;  */

void FUN_1011188cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011188e8,0,0);
  return;
}



/* Entry: 1011188e8; end: 1011189df;  */

void FUN_1011188e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0xa8);
  uVar1 = uVar2;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(uVar2);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000107c6142c(uVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1011189e0;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,1);
  uVar2 = 0x112d5ecc0;
  func_0x0001000285a8(0x112d5ecc0,&UNK_10d925be8);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101118ac8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1103863c0;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c431a0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1011189e0; end: 101118a73;  */

void FUN_1011189e0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x101118a38;
  }
  else {
    pcVar1 = FUN_101118a74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101118a74; end: 101118ac7;  */

void FUN_101118a74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  **(undefined8 **)(unaff_x22 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x000101118ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101118ac8; end: 101118b97;  */

void FUN_101118ac8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x00010111d698(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10111de9c(0,0x112d5ecc8,&PTR_PTR_1126cd678);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 101118b98; end: 1011190bb;  */

undefined ** FUN_101118b98(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_68;
  
  lVar17 = *(long *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar7,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lVar17;
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  if (lVar3 == 0) {
LAB_101118ff0:
    func_0x0001000285a8(0x112d5ec88,&UNK_10d925be0);
    puVar6 = PTR_PTR_1126a63a8;
    func_0x000107c610f8();
    uVar7 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar13 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c49564();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar13);
    ppuVar14 = &puStack_68;
    puStack_68 = puVar6;
    func_0x000100854cb0(ppuVar14);
    func_0x000107c61170(puVar6);
    return ppuVar14;
  }
  uVar18 = 0;
  uVar19 = *(ulong *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar18;
    if (uVar18 <= uVar19) {
      uVar1 = uVar19;
    }
    puVar15 = (undefined8 *)(param_1 + 0x28 + uVar18 * 0x10);
    do {
      if (uVar19 == uVar18) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar5 = puVar6;
          }
          func_0x000107c60480();
        }
        if (puVar5 != (undefined *)0x0) {
          if (((ulong)puVar6 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1011190bc);
              (*pcVar2)();
            }
            uVar7 = *(undefined8 *)(puVar6 + 0x20);
            func_0x000107c61174(uVar7);
          }
          else {
            uVar7 = 0;
            FUN_10111c1c0(0,puVar6,&PTR_PTR_1126bf130,0x112d5ecd8);
          }
          func_0x000107c6142c(puVar6);
          uVar8 = 0;
          FUN_10111d450(0,lVar3,uVar7);
          puVar6 = &UNK_1103861a0;
          puVar4 = puVar6;
          func_0x000107c613fc(&UNK_1103861a0,0x18,7);
          func_0x000107c61644(puVar4 + 0x10);
          puVar5 = &UNK_1103862e0;
          func_0x000107c613fc(&UNK_1103862e0,0x20,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          *(undefined8 *)(puVar5 + 0x18) = uVar8;
          uVar13 = 0x112d5ece8;
          func_0x0001000285a8(0x112d5ece8,&UNK_10dac5a90);
          func_0x000107c613fc();
          func_0x000107c61174();
          pcVar2 = FUN_10111d6bc;
          func_0x0001000b64ac(FUN_10111d6bc,puVar5);
          uVar9 = 1;
          FUN_10111d450(1,lVar3,uVar7);
          puVar4 = puVar6;
          func_0x000107c613fc(&UNK_1103861a0,0x18,7);
          func_0x000107c61644(puVar4 + 0x10);
          puVar5 = &UNK_110386308;
          func_0x000107c613fc(&UNK_110386308,0x20,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          *(undefined8 *)(puVar5 + 0x18) = uVar9;
          func_0x000107c613fc(uVar13,0x28,7);
          func_0x000107c61174(uVar9);
          uVar13 = 0x10111d710;
          func_0x0001000b64ac(0x10111d710,puVar5);
          lVar17 = 0x112d5ecf0;
          func_0x0001000285a8(0x112d5ecf0,&UNK_10d925c00);
          func_0x0001011452e8();
          func_0x000107c613fc();
          *(undefined8 *)(lVar17 + 0x18) = 5;
          *(undefined8 *)(lVar17 + 0x10) = 2;
          *(code **)(lVar17 + 0x20) = pcVar2;
          *(undefined8 *)(lVar17 + 0x28) = uVar13;
          func_0x000107c6157c(pcVar2);
          func_0x000107c6157c(uVar13);
          lVar10 = lVar17;
          func_0x000100b658a4(lVar17);
          func_0x000107c61574(lVar17);
          func_0x000107c613fc(&UNK_1103861a0,0x18,7);
          func_0x000107c61644(puVar6 + 0x10);
          puVar5 = &UNK_110386330;
          func_0x000107c613fc(&UNK_110386330,0x20,7);
          *(undefined **)(puVar5 + 0x10) = puVar6;
          *(long *)(puVar5 + 0x18) = param_1;
          uVar11 = 0;
          FUN_10111de9c(0,0x112d5ec80,&PTR_PTR_1126a63a8);
          func_0x000107c61434(param_1);
          pcVar12 = FUN_10111d738;
          func_0x0001000bfde0(FUN_10111d738,puVar5,uVar11);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar8);
          func_0x000107c61574(pcVar2);
          func_0x000107c61170(uVar9);
          func_0x000107c61574(uVar13);
          func_0x000107c61574(lVar10);
          func_0x000107c61574(puVar5);
          return (undefined **)pcVar12;
        }
        func_0x000107c6142c(puVar6);
        func_0x000107c61170(lVar3);
        goto LAB_101118ff0;
      }
      uVar18 = uVar18 + 1;
      if (uVar1 + 1 == uVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101118fc8);
        (*pcVar2)();
      }
      uVar7 = puVar15[-1];
      uVar13 = *puVar15;
      func_0x000107c61434(uVar13);
      func_0x000107c5fadc(uVar7,uVar13);
      lVar10 = lVar17;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c6142c(uVar13);
      func_0x000107c61170(uVar7);
      puVar15 = puVar15 + 2;
    } while (lVar10 == 0);
    puVar5 = puVar6;
    func_0x000107c61550();
    if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
       (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar4 = puVar6;
        }
        func_0x000107c60480(puVar4);
      }
      puVar5 = (undefined *)0x0;
      FUN_101136b48(0,puVar4 + 1,1,puVar6);
    }
    uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar16 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
      FUN_101136b48(puVar6,uVar1 + 1,1,puVar5);
      uVar16 = (ulong)puVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
    *(long *)(uVar16 + uVar1 * 8 + 0x20) = lVar10;
  } while( true );
}



/* Entry: 1011190bc; end: 1011191bb;  */

void FUN_1011190bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_10111ef28;
    ppuVar2 = &puStack_88;
    uStack_70 = param_5;
    uStack_68 = param_4;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar2);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c4426c(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_2);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1011191bc; end: 101119a73;  */

void FUN_1011191bc(undefined8 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_78 [24];
  
  lVar10 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101119390);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(lVar10 + 0x20);
    if (uVar3 != 0) {
      if (*(long *)(lVar10 + 0x10) == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101119394);
        (*pcVar2)();
      }
      uVar11 = *(ulong *)(lVar10 + 0x28);
      if (uVar11 != 0) {
        func_0x000107c61174();
        func_0x000107c61174(uVar11);
        uVar8 = 0;
        uVar6 = uVar3;
        FUN_10111da84();
        uVar9 = 1;
        uVar7 = uVar11;
        FUN_10111da84(uVar11,1);
        uVar1 = uVar6 & 0xffffffffffff;
        if ((uVar8 & 0x2000000000000000) != 0) {
          uVar1 = uVar8 >> 0x38 & 0xf;
        }
        uVar4 = uVar11;
        if (uVar1 != 0) {
          uVar4 = uVar3;
        }
        func_0x000107c61174(uVar4);
        func_0x000101119394();
        func_0x000107c61170(uVar4);
        puVar5 = PTR_PTR_1126a63a8;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar6,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c5fadc(uVar7,uVar9);
        func_0x000107c6142c(uVar9);
        func_0x000107c49564();
        func_0x000107c61170(uVar3);
        func_0x000107c61574(param_3);
        func_0x000107c61170(uVar11);
        goto LAB_101119358;
      }
    }
    func_0x000107c61574(param_3);
  }
  puVar5 = PTR_PTR_1126a63a8;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c49564();
LAB_101119358:
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = puVar5;
  return;
}



/* Entry: 101119a74; end: 101119adf;  */

void FUN_101119a74(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x61) = param_4;
  *(undefined1 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x28) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101119ae0,0,0);
  return;
}



/* Entry: 101119ae0; end: 101119eb3;  */

void FUN_101119ae0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x40);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c4e680();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x40) = lVar13;
  func_0x000107c61170(uVar2);
  if (lVar13 == 0) {
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101119de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar11 = uVar2;
  FUN_10111a0e0(uVar15,uVar2);
  lVar4 = lVar13;
  func_0x00010111e2a8(lVar13);
  FUN_10111e658();
  puVar3 = PTR_PTR_1126c7238;
  func_0x000107c61168(PTR_PTR_1126c7238);
  uVar6 = uVar15;
  func_0x000107c5fadc(uVar15,uVar2);
  uVar5 = *(undefined8 *)(lVar12 + 0x18);
  func_0x000107c5fadc(uVar5,*(undefined8 *)(lVar12 + 0x20));
  func_0x000107c4b920(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x00010601db50(puVar3);
  puVar3 = PTR_PTR_1126a63c8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar15,uVar2);
  func_0x000107c5fadc(lVar4,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c46a1c();
  *(undefined **)(unaff_x22 + 0x48) = puVar3;
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar15);
  lVar4 = 0x6565735f7473616c;
  func_0x000107c5fadc(0x6565735f7473616c,0xee00657265685f6e);
  uVar5 = 0x6569567375636f46;
  func_0x000107c5fadc(0x6569567375636f46,0xe900000000000077);
  uVar6 = 0;
  func_0x000107c5fe40(0);
  lVar12 = lVar4;
  uVar2 = uVar5;
  func_0x0001000f6108(lVar4,uVar5,uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  if (lVar12 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar4 = lVar12;
    func_0x000107c5faec(lVar12);
    func_0x000107c61170(lVar12);
    lVar12 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    uVar5 = 0x48;
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x18) = 2;
    *(undefined8 *)(lVar12 + 0x10) = 1;
    func_0x000107c41324(lVar13);
    func_0x000107c61180();
    func_0x000107c5ee94(uVar6);
    func_0x000107c61170(lVar13);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61168();
    puVar14 = puVar7;
    func_0x000107c5ee70();
    func_0x000107c43874(0x404e000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    if (puVar7 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      uVar5 = 0xe000000000000000;
    }
    else {
      puVar14 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170(puVar7);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x28));
    *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar12 + 0x40) = uVar6;
    *(undefined **)(lVar12 + 0x20) = puVar14;
    *(undefined8 *)(lVar12 + 0x28) = uVar5;
    uVar5 = uVar2;
    func_0x000107c5fb00(lVar4,uVar2,lVar12);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fadc(lVar4,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c55a6c(puVar3);
    func_0x000107c61170(lVar4);
    plVar8 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101119eb4;
    lVar13 = *(long *)(unaff_x22 + 0x20);
    lVar12 = *(long *)(unaff_x22 + 0x10);
    plVar8[10] = *(long *)(unaff_x22 + 0x18);
    plVar8[0xb] = lVar13;
    plVar8[9] = lVar12;
    lVar13 = 0;
    func_0x000107c5eea4();
    plVar8[0xc] = lVar13;
    lVar13 = *(long *)(lVar13 + -8);
    plVar8[0xd] = lVar13;
    uVar10 = *(long *)(lVar13 + 0x40) + 0xf;
    uVar9 = uVar10 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0xe] = uVar9;
    uVar9 = uVar10 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0xf] = uVar9;
    uVar9 = uVar10 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x10] = uVar9;
    uVar10 = uVar10 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar8[0x11] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10111a220,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101119eb4);
  (*pcVar1)();
}



/* Entry: 101119eb4; end: 101119f03;  */

void FUN_101119eb4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101119f04,0,0);
  return;
}



/* Entry: 101119f04; end: 10111a0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101119f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  bVar1 = *(byte *)(unaff_x22 + 0x60);
  func_0x000107c53980(uVar4,param_2,uVar5);
  func_0x000107c61170(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55578(uVar4);
  func_0x000107c61170(puVar2);
  if ((bVar1 & 1) == 0) {
    lVar3 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c5bd58();
    func_0x000107c61180();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_113072870);
      uVar5 = ((undefined8 *)(lVar3 + _DAT_113072870))[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c5fadc(uVar4,uVar5);
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c56abc(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c61170(uVar4);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c3cf1c(uVar5);
  func_0x000107c61180();
  ppuVar6 = &PTR_PTR_1126bf310;
  lVar3 = 0;
  FUN_10111de9c(0,0x112d5ecd0,&PTR_PTR_1126bf310);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5);
  func_0x000107c61170(uVar5);
  func_0x0001026ea7b8(uVar4);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c5fadc();
    func_0x000107c57338(uVar5);
    func_0x000107c61170(uVar4);
    if (param_4 == 0) {
      ppuVar6 = (undefined **)0x0;
    }
    else {
      func_0x000107c61434(param_4);
      func_0x000107c5fadc(ppuVar6,param_4);
      func_0x000107c61430(param_4,2);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c6142c(lVar3);
    func_0x000107c57340(uVar4);
    func_0x000107c61170(ppuVar6);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010111a0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10111a0e0; end: 10111a197;  */

long FUN_10111a0e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5fadc();
  func_0x000107c43aa0(lVar2,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = lVar2;
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c4cda8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107cfdba8(lVar1);
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      goto LAB_10111a174;
    }
  }
  lVar3 = 0;
LAB_10111a174:
  func_0x000107c61170(lVar2);
  return lVar3;
}



/* Entry: 10111a198; end: 10111a21f;  */

void FUN_10111a198(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111a220,0,0);
  return;
}



/* Entry: 10111a220; end: 10111a61b;  */

void FUN_10111a220(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  undefined *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  lVar10 = *(long *)(unaff_x22 + 0x58);
  lVar12 = *(long *)(lVar10 + 0x60);
  *(long *)(unaff_x22 + 0x90) = lVar12;
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar10 + 0x68);
    *(long *)(unaff_x22 + 0x98) = lVar13;
    if (lVar13 != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar10 = *(long *)(lVar10 + 0x30);
      func_0x000107c615f0(lVar13);
      func_0x000107c615f0(lVar12);
      func_0x000107c5fadc(uVar4);
      func_0x000107c43aa0();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xa0) = lVar10;
      func_0x000107c61170(uVar4);
      if (lVar10 != 0) {
        puVar14 = PTR_PTR_1126a63c0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0xa8) = puVar14;
        func_0x000107c61174();
        lVar5 = lVar12;
        func_0x000107c44f90(lVar12);
        func_0x000107c61180();
        func_0x000107c551f8(puVar14);
        func_0x000107c61170(lVar5);
        lVar5 = lVar13;
        func_0x000107c3cfe4();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0xb0) = lVar5;
        func_0x000107c61170(lVar10);
        if (lVar5 != 0) {
          lVar6 = lVar10;
          func_0x000107c3d15c();
          func_0x000107c61180();
          if (lVar6 != 0) {
            uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
            uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
            uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
            lVar11 = *(long *)(unaff_x22 + 0x68);
            uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
            lVar7 = lVar6;
            func_0x000107c42168();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            func_0x000107c5ee94(uVar4,lVar7);
            func_0x000107c61170(lVar7);
            (**(code **)(lVar11 + 0x20))(uVar2,uVar4,uVar16);
            func_0x000107c5ee6c(uVar3,0x40f5180000000000);
            func_0x000107c5eea0(uVar1);
            func_0x000107c5ee78(uVar3,uVar1);
            pcVar15 = *(code **)(lVar11 + 8);
            (*pcVar15)(uVar1,uVar16);
            (*pcVar15)(uVar3,uVar16);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c58f50(puVar14);
            func_0x000107c61170(puVar8);
            (*pcVar15)(uVar2);
          }
          lVar7 = lVar5;
          func_0x000107c5c158();
          func_0x000107c61180();
          lVar6 = lVar7;
          func_0x000107c5faec();
          func_0x000107c61170(lVar7);
          *(long *)(unaff_x22 + 0x28) = lVar6;
          *(undefined8 *)(unaff_x22 + 0x30) = uVar16;
          *(undefined8 *)(unaff_x22 + 0x38) = 0x20b7c220;
          *(undefined8 *)(unaff_x22 + 0x40) = 0xa400000000000000;
          FUN_100e8b654();
          lVar6 = unaff_x22 + 0x38;
          func_0x000107c601dc(lVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar7,lVar7);
          func_0x000107c6142c(uVar16);
          if (*(long *)(lVar6 + 0x10) == 0) {
LAB_10111a558:
            func_0x000107c6142c(lVar6);
            plVar9 = (long *)0x100;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xb8) = plVar9;
            *plVar9 = unaff_x22;
            plVar9[1] = (long)FUN_10111a61c;
            lVar10 = *(long *)(unaff_x22 + 0x58);
            lVar12 = *(long *)(unaff_x22 + 0x48);
            plVar9[0x1a] = *(long *)(unaff_x22 + 0x50);
            plVar9[0x1b] = lVar10;
            plVar9[0x19] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_10111a78c,0,0);
            return;
          }
          uVar4 = *(undefined8 *)(lVar6 + 0x20);
          uVar16 = *(undefined8 *)(lVar6 + 0x28);
          func_0x000107c61434(uVar16);
          func_0x000107c5fadc(uVar4,uVar16);
          func_0x000107c6142c(uVar16);
          func_0x000107c553b0(puVar14);
          func_0x000107c61170(uVar4);
          if (*(long *)(lVar6 + 0x10) != 2) goto LAB_10111a558;
          uVar4 = *(undefined8 *)(lVar6 + 0x30);
          uVar16 = *(undefined8 *)(lVar6 + 0x38);
          func_0x000107c61434(uVar16);
          func_0x000107c6142c(lVar6);
          func_0x000107c5fadc(uVar4,uVar16);
          func_0x000107c6142c(uVar16);
          func_0x000107c59de8(puVar14);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar10);
          func_0x000107c615e8(lVar13);
          func_0x000107c615e8(lVar12);
          goto LAB_10111a5d0;
        }
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar10);
      }
      func_0x000107c615e8(lVar13);
      func_0x000107c615e8(lVar12);
    }
  }
  puVar14 = (undefined *)0x0;
LAB_10111a5d0:
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010111a618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar14);
  return;
}



/* Entry: 10111a61c; end: 10111a66f;  */

void FUN_10111a61c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111a670,0,0);
  return;
}



/* Entry: 10111a670; end: 10111a76f;  */

void FUN_10111a670(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar6);
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c5fadc(uVar3,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c56044(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar7);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010111a76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 10111a770; end: 10111a78b;  */

void FUN_10111a770(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111a78c,0,0);
  return;
}



/* Entry: 10111a78c; end: 10111a907;  */

void FUN_10111a78c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar1 = *(long *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  uVar5 = uVar6;
  func_0x000107c5fadc(uVar6,uVar3);
  func_0x000107c4e680();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar1 + 0xa8);
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = uVar6;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  func_0x000107c61434(uVar3);
  lVar2 = lVar1;
  func_0x000100403a6c();
  func_0x000107c61588(lVar1);
  func_0x000100bcb1dc((undefined8 *)(lVar1 + 0x20));
  lVar1 = lVar2;
  func_0x000107c5fe08(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  func_0x000107c6142c(lVar2);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10111a908;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar3 = 0x112d5ecc0;
  func_0x0001000285a8(0x112d5ecc0,&UNK_10d925be8);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101118ac8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1103862a8;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c431a0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10111a908; end: 10111a95f;  */

void FUN_10111a908(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xf0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10111a960;
  }
  else {
    pcVar1 = FUN_10111aab4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10111a960; end: 10111aab3;  */

void FUN_10111a960(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
  if (*(long *)(lVar3 + 0x10) == 0) {
    func_0x000107c6142c(lVar3);
    lVar3 = *(long *)(unaff_x22 + 0xe0);
joined_r0x00010111aa2c:
    if (lVar3 == 0) {
      lVar4 = 0;
      param_2 = 0;
      goto LAB_10111aa90;
    }
    func_0x000107c4b848();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    lVar1 = *(long *)(unaff_x22 + 0xe0);
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 200);
    uVar2 = *(ulong *)(unaff_x22 + 0xd0);
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      param_2 = 2;
      func_0x000107c61430(lVar3,2);
      lVar3 = *(long *)(unaff_x22 + 0xe0);
      goto joined_r0x00010111aa2c;
    }
    lVar1 = *(long *)(*(long *)(lVar3 + 0x38) + lVar4 * 8);
    func_0x000107c61174();
    param_2 = 2;
    func_0x000107c61430(lVar3,2);
    lVar4 = lVar1;
    func_0x000107c4b8a4();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar1);
      lVar3 = *(long *)(unaff_x22 + 0xe0);
      goto joined_r0x00010111aa2c;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar3 = lVar4;
    func_0x000107c5c82c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
LAB_10111aa90:
                    /* WARNING: Could not recover jumptable at 0x00010111aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar4,param_2);
  return;
}



/* Entry: 10111aab4; end: 10111ab47;  */

void FUN_10111aab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61654();
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  lVar3 = *(long *)(unaff_x22 + 0xe0);
  if (lVar3 == 0) {
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c4b848();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010111ab44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar4,param_2);
  return;
}



/* Entry: 10111ab48; end: 10111b083;  */

undefined * FUN_10111ab48(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *in_x3;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_78;
  
  if (*(char *)(unaff_x20 + 0x110) == '\x01') {
    uVar14 = *(ulong *)(unaff_x20 + 0xb0);
    if (uVar14 == 0) {
      uVar4 = 0;
      FUN_10111de9c(0,0x112d5e950,&PTR_PTR_1126a6390);
      uVar3 = 0;
    }
    else {
      uVar3 = 0x702d6c6c65737075;
      func_0x000107c5fadc(0x702d6c6c65737075,0xeb00000000737465);
      func_0x000107c44068();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      FUN_10111de9c(0,0x112d5ecb8,&PTR_PTR_1126b2050);
      uVar16 = uVar14;
      func_0x000107c5fc54(uVar14,uVar3);
      func_0x000107c61170(uVar14);
      if (uVar16 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uVar15 = uVar16;
        }
        func_0x000107c60480();
      }
      uVar4 = 0;
      FUN_10111de9c(0,0x112d5e950,&PTR_PTR_1126a6390);
      uVar3 = 0;
      uVar14 = uVar16;
      if (uVar15 != 0) {
        if ((uVar16 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar16 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10111b084);
            (*pcVar2)();
          }
          uVar3 = *(undefined8 *)(uVar16 + 0x20);
          func_0x000107c61174(uVar3);
        }
        else {
          func_0x000107c61434(uVar16);
          in_x3 = (undefined *)0x112d5ecb8;
          uVar3 = 0;
          FUN_10111c1c0(0,uVar16,&PTR_PTR_1126b2050,0x112d5ecb8);
          func_0x000107c6142c(uVar16);
        }
      }
    }
    FUN_101142dd0(uVar3);
    uVar18 = param_1;
    func_0x000107c61170(uVar3);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 != 0) {
      uVar16 = uVar14 & 0xffffffffffffff8;
      if (uVar14 >> 0x3e == 0) {
        uVar15 = *(ulong *)(uVar16 + 0x10);
      }
      else {
        uVar15 = uVar14;
        if (-1 < (long)uVar14) {
          uVar15 = uVar16;
        }
        func_0x000107c60480();
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
      if (uVar15 != 0) {
        uVar17 = 0;
        do {
          while( true ) {
            if ((uVar14 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar16 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10111af8c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar14 + uVar17 * 8 + 0x20);
              func_0x000107c61174();
              puVar11 = in_x3;
            }
            else {
              puVar11 = (undefined *)0x112d5ecb8;
              uVar5 = uVar17;
              FUN_10111c1c0(uVar17,uVar14,&PTR_PTR_1126b2050,0x112d5ecb8);
            }
            uVar1 = uVar17 + 1;
            if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10111af88);
              (*pcVar2)();
            }
            uVar6 = uVar5;
            func_0x000107c43e74();
            func_0x000107c61180();
            in_x3 = puVar11;
            if (uVar6 != 0) break;
LAB_10111acc4:
            func_0x000107c61170(uVar5);
LAB_10111acc8:
            uVar17 = uVar17 + 1;
            if (uVar1 == uVar15) goto LAB_10111afc0;
          }
          uVar7 = uVar6;
          func_0x000107c4ead8();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          in_x3 = puVar11;
          if (uVar7 == 0) goto LAB_10111acc4;
          uVar6 = uVar5;
          func_0x000107c4f4f0();
          func_0x000107c61180();
          if (uVar6 == 0) {
LAB_10111add4:
            func_0x000107c61170(uVar5);
            uVar5 = uVar7;
            in_x3 = puVar11;
            goto LAB_10111acc4;
          }
          puStack_78 = (undefined *)0x0;
          uVar3 = 0;
          FUN_10111de9c(0,0x112d5ecb0,&PTR_PTR_1126bf1c0);
          ppuVar13 = &puStack_78;
          func_0x000107c5fc50(uVar6);
          func_0x000107c61170(uVar6);
          puVar10 = puStack_78;
          if (puStack_78 == (undefined *)0x0) goto LAB_10111add4;
          puVar8 = puStack_78;
          FUN_101142ff4();
          in_x3 = puVar11;
          func_0x000107c6142c(puVar10);
          if (ppuVar13 == (undefined **)0x0) {
            func_0x000107c61170(uVar7);
LAB_10111adec:
            func_0x000107c61170(uVar5);
            goto LAB_10111acc8;
          }
          uVar6 = uVar5;
          func_0x000107c44fd8();
          func_0x000107c61180();
          if (uVar6 == 0) {
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(puVar11);
            func_0x000107c6142c(ppuVar13);
            goto LAB_10111adec;
          }
          uVar9 = uVar4;
          func_0x000107c614e8();
          func_0x000107c610f8();
          func_0x000107c61434(ppuVar13);
          func_0x000107c5fadc(puVar8,ppuVar13);
          func_0x000107c61430(ppuVar13,2);
          func_0x000107c5fadc(uVar3,puVar11);
          func_0x000107c6142c(puVar11);
          func_0x000107c4aad8(uVar7);
          uVar19 = uVar18;
          func_0x000107c4b6f0(uVar7);
          in_x3 = puVar8;
          func_0x000107c46d70(uVar18,uVar19);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar7);
          puVar11 = puVar12;
          func_0x000107c61550();
          if (((((ulong)puVar11 & 1) == 0) || ((long)puVar12 < 0)) ||
             (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar12 >> 0x3e == 0) {
              puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar12) {
                puVar10 = puVar12;
              }
              func_0x000107c60480(puVar10);
            }
            puVar11 = (undefined *)0x0;
            func_0x000101136bb4(0,puVar10 + 1,1);
            in_x3 = puVar12;
          }
          uVar5 = (ulong)puVar11 & 0xffffffffffffff8;
          uVar17 = *(ulong *)(uVar5 + 0x10);
          puVar12 = puVar11;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar17) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
            func_0x000101136bb4(puVar12,uVar17 + 1,1);
            uVar5 = (ulong)puVar12 & 0xffffffffffffff8;
            in_x3 = puVar11;
          }
          *(ulong *)(uVar5 + 0x10) = uVar17 + 1;
          *(undefined8 *)(uVar5 + uVar17 * 8 + 0x20) = uVar9;
          uVar17 = uVar1;
        } while (uVar1 != uVar15);
      }
LAB_10111afc0:
      func_0x000107c6142c(uVar14);
    }
    puVar11 = PTR_PTR_1126a63b8;
    func_0x000107c610f8(PTR_PTR_1126a63b8);
    uVar3 = 0;
    FUN_10111de9c(0,0x112d5e950,&PTR_PTR_1126a6390);
    puVar10 = puVar12;
    func_0x000107c5fc48(puVar12,uVar3);
    func_0x000107c6142c(puVar12);
    func_0x000107c494ac(param_1,puVar11);
    func_0x000107c61170(puVar10);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  return puVar11;
}



/* Entry: 10111b084; end: 10111b11b;  */

void FUN_10111b084(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10111b0cc;
  plVar1[0x13] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111b1a8,0,0);
  return;
}



/* Entry: 10111b11c; end: 10111b18f;  */

void FUN_10111b11c(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  bVar1 = *(byte *)(unaff_x22 + 0x28);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = uVar3;
  func_0x000107c3e524(uVar3);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010111b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))((int)uVar2 != 1 & (bVar1 != 2 ^ bVar1));
  return;
}



/* Entry: 10111b190; end: 10111b1a7;  */

void FUN_10111b190(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111b1a8,0,0);
  return;
}



/* Entry: 10111b1a8; end: 10111b297;  */

void FUN_10111b1a8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0xc0);
  func_0x000107c4ec8c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10111b298;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    uVar3 = 0x112d5eca8;
    func_0x0001000285a8(0x112d5eca8,&UNK_10dac4ed0);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10111b368;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110386280;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c43064(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010111b294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 10111b298; end: 10111b2d7;  */

void FUN_10111b298(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111b2d8,0,0);
  return;
}



/* Entry: 10111b2d8; end: 10111b367;  */

void FUN_10111b2d8(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  if (lVar2 == 0) {
    func_0x000107c615e8(uVar4);
    uVar1 = 2;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar4);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
    }
    uVar1 = lVar3 != 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010111b364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 10111b368; end: 10111b3ab;  */

void FUN_10111b368(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x00010111d698(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10111b3ac; end: 10111b46b;  */

void FUN_10111b3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  lVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
  lVar2 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10111b46c,0,0);
  return;
}



/* Entry: 10111b46c; end: 10111b513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111b46c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  puVar4 = PTR_PTR_1126a63d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xf8) = puVar4;
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010111d698(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10111b514;
                    /* WARNING: Could not recover jumptable at 0x00010111b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 10111b514; end: 10111b58b;  */

void FUN_10111b514(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x108) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x118) = param_2;
    pcVar1 = FUN_10111b58c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10111bab8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10111b58c; end: 10111b6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111b58c(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x118);
  func_0x00010111d678(unaff_x22 + 0x10);
  if (cVar2 != '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x108);
    puVar3 = PTR_PTR_1126a63a0;
    func_0x000107c610f8(PTR_PTR_1126a63a0);
    func_0x000107c453e4();
    if (lVar7 != 0) {
      *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                (&UNK_11053e480,(undefined8 *)(unaff_x22 + 0xa0),&UNK_11053e480,PTR___sSiN_11034deb0
                );
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c579d4(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c5a390(uVar8);
    func_0x000107c61170(puVar3);
  }
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  func_0x00010111d698(unaff_x22 + 0x38,uVar8);
  piVar6 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10111b6d8;
                    /* WARNING: Could not recover jumptable at 0x00010111b6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xb0),
             *(undefined8 *)(unaff_x22 + 0xb8),uVar8,lVar7);
  return;
}



/* Entry: 10111b6d8; end: 10111b737;  */

void FUN_10111b6d8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10111b738;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10111bb60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10111b738; end: 10111bab7;  */

void FUN_10111b738(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x22;
  undefined8 *puVar15;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x00010111d678(unaff_x22 + 0x38);
  (**(code **)(lVar8 + 0x30))(uVar10,1,uVar2);
  if ((int)uVar10 == 1) {
    func_0x00010111dfa8(*(undefined8 *)(unaff_x22 + 0xd8),0x112d5ed18,&UNK_10d925c50);
  }
  else {
    puVar15 = *(undefined8 **)(unaff_x22 + 0xf0);
    lVar8 = *(long *)(unaff_x22 + 0xe0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
    FUN_10111dd50(*(undefined8 *)(unaff_x22 + 0xd8),puVar15);
    puVar7 = PTR_PTR_1126a63d8;
    func_0x000107c610f8(PTR_PTR_1126a63d8);
    func_0x000107c453e4();
    puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x20));
    uVar2 = *puVar1;
    uVar5 = puVar1[1];
    uVar10 = uVar2;
    func_0x000107c5fadc();
    func_0x000107c558fc(puVar7);
    func_0x000107c61170(uVar10);
    puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x24));
    uVar10 = *puVar1;
    uVar6 = puVar1[1];
    uVar9 = uVar10;
    func_0x000107c5fadc(uVar10,uVar6);
    func_0x000107c579d0(puVar7);
    func_0x000107c61170(uVar9);
    uVar9 = *puVar15;
    func_0x000107c5fadc(uVar9,puVar15[1]);
    func_0x000107c59e18(puVar7);
    func_0x000107c61170(uVar9);
    uVar9 = puVar15[2];
    func_0x000107c5fadc(uVar9,puVar15[3]);
    func_0x000107c528fc(puVar7);
    func_0x000107c61170(uVar9);
    func_0x00010111dd94((long)puVar15 + (long)*(int *)(lVar8 + 0x1c),uVar11,0x112d36580,
                        &UNK_10d9016d0);
    lVar8 = 0;
    func_0x000107c5ede0();
    lVar14 = *(long *)(lVar8 + -8);
    uVar9 = 1;
    (**(code **)(lVar14 + 0x30))(uVar11,1,lVar8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
    if ((int)uVar11 == 1) {
      func_0x00010111dfa8(uVar12,0x112d36580,&UNK_10d9016d0);
      uVar11 = 0;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar14 + 8))(uVar12,lVar8);
      func_0x000107c5fadc(uVar11,uVar9);
      func_0x000107c6142c(uVar9);
    }
    lVar8 = *(long *)(unaff_x22 + 0xf0);
    lVar14 = *(long *)(unaff_x22 + 0xe0);
    func_0x000107c525e8(puVar7);
    func_0x000107c61170(uVar11);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c579d4(puVar7);
    func_0x000107c61170(puVar13);
    if (*(char *)(lVar8 + *(int *)(lVar14 + 0x2c) + 8) == '\x01') {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d8();
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar14 = *(long *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c59fd0(puVar7);
    func_0x000107c61170(puVar13);
    func_0x000107c56b50(uVar12);
    func_0x000102702d84(unaff_x22 + 0x60);
    lVar4 = *(long *)(unaff_x22 + 0x80);
    lVar8 = unaff_x22 + 0x60;
    func_0x00010111d698(lVar8,*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar4 + 0x20))
              (lVar8,uVar10,uVar6,uVar2,uVar5,0,2,uVar3,uVar11,*(undefined8 *)(lVar14 + 200),
               *(undefined1 *)(lVar14 + 0xd0));
    func_0x000107c61170(puVar7);
    func_0x00010111dddc(uVar9);
    func_0x00010111d678(unaff_x22 + 0x60);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar9;
  func_0x000107c61434(uVar6);
  func_0x000107c61174(uVar9);
  func_0x000100087f6c((undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000100c7f554();
  func_0x000107c61170(uVar9);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010111bab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10111bab8; end: 10111bb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111bab8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x00010111d678(unaff_x22 + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x00010111d698(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10111b6d8;
                    /* WARNING: Could not recover jumptable at 0x00010111bb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xb0),
             *(undefined8 *)(unaff_x22 + 0xb8),uVar2,lVar3);
  return;
}



/* Entry: 10111bb60; end: 10111bc4b;  */

void FUN_10111bb60(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x00010111d678(unaff_x22 + 0x38);
  (**(code **)(lVar2 + 0x38))(uVar6,1,1,uVar1);
  func_0x00010111dfa8(*(undefined8 *)(unaff_x22 + 0xd8),0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000100087f6c((undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000100c7f554();
  func_0x000107c61170(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010111bc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10111bc4c; end: 10111bd7f;  */

void FUN_10111bc4c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x00010111dfa8(unaff_x20 + 0x70,0x112d5ece0,&UNK_10d925bf0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 10111bd80; end: 10111bf47;  */

undefined * FUN_10111bd80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  FUN_101117c40(0x4072c00000000000,param_1,1);
  puVar2 = &UNK_1103861a0;
  func_0x000107c613fc(&UNK_1103861a0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110386268;
  func_0x000107c613fc(&UNK_110386268,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  uVar4 = 0;
  FUN_10111de9c(0,0x112d5ec80,&PTR_PTR_1126a63a8);
  func_0x000107c61434(param_1);
  uVar5 = 0x10111c578;
  func_0x000100775358(0x10111c578,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar5);
  return puVar3;
}



/* Entry: 10111bf48; end: 10111c003;  */

code * FUN_10111bf48(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  
  puVar1 = &UNK_1103861a0;
  func_0x000107c613fc(&UNK_1103861a0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1103861c8;
  func_0x000107c613fc(&UNK_1103861c8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x0001000285a8(0x112d5ec70,&UNK_10d925bd0);
  func_0x000107c613fc();
  func_0x000107c61434(param_1);
  pcVar3 = FUN_10111c180;
  func_0x0001000b64ac(FUN_10111c180,puVar2);
  pcVar4 = pcVar3;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar3);
  return pcVar4;
}



/* Entry: 10111c004; end: 10111c037;  */

void FUN_10111c004(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x0001002a64a8(&uStack_30);
  return;
}



/* Entry: 10111c038; end: 10111c0ff;  */

/* WARNING: Possible PIC construction at 0x00010111c0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111c0e4) */

void FUN_10111c038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_110386178;
  func_0x000107c613fc(&UNK_110386178,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925bc8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10111c100; end: 10111c17f;  */

void FUN_10111c100(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10111e058;
  plVar5[8] = lVar4;
  plVar5[9] = lVar6;
  plVar5[6] = lVar3;
  plVar5[7] = lVar2;
  plVar5[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101115684,0,0);
  return;
}



/* Entry: 10111c180; end: 10111c1bf;  */

void FUN_10111c180(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 0xa0);
    func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
    uVar4 = 0;
    FUN_10111de9c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    uStack_78 = 0x10111c188;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_100f6151c;
    puStack_80 = &UNK_1103861e0;
    ppuVar5 = &puStack_98;
    uStack_70 = param_1;
    func_0x000107c60bc4(ppuVar5);
    uVar1 = uStack_70;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c5b4f8(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10111c1c0; end: 10111c37b;  */

ulong FUN_10111c1c0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c2a4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c2a8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10111de9c(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c37c);
  (*pcVar2)();
}



/* Entry: 10111c37c; end: 10111c517;  */

ulong FUN_10111c37c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c44c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c450);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001038bd11c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001038bd11c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000020,0x800000010ef26ee0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c518);
  (*pcVar2)();
}



/* Entry: 10111c518; end: 10111c5a7;  */

ulong FUN_10111c518(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c2a4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c2a8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bf310;
    func_0x000107c61168(PTR_PTR_1126bf310);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bf310;
    func_0x000107c61168(PTR_PTR_1126bf310);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10111de9c(0,0x112d5ecd0,&PTR_PTR_1126bf310);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c37c);
  (*pcVar2)();
}



/* Entry: 10111c5a8; end: 10111c74f;  */

ulong FUN_10111c5a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c67c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c680);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103a2db6c(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    func_0x000103a2db6c(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x6f7372655070614d,0xed0000636a624f6e);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c750);
  (*pcVar2)();
}



/* Entry: 10111c750; end: 10111c773;  */

ulong FUN_10111c750(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c2a4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c2a8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a63b0;
    func_0x000107c61168(PTR_PTR_1126a63b0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a63b0;
    func_0x000107c61168(PTR_PTR_1126a63b0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10111de9c(0,0x112d5ec98,&PTR_PTR_1126a63b0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c37c);
  (*pcVar2)();
}



/* Entry: 10111c774; end: 10111c78b;  */

void FUN_10111c774(long param_1)

{
  func_0x00010111d678(param_1 + 0x20);
  return;
}



/* Entry: 10111c78c; end: 10111c7d3;  */

void FUN_10111c78c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10111c7d4);
  (*pcVar3)();
}



/* Entry: 10111c7d4; end: 10111c843;  */

void FUN_10111c7d4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x000101136bd8(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 10111c844; end: 10111c84f;  */

undefined8 FUN_10111c844(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      (*(code *)0x1011361f4)();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    FUN_10111ca94(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 10111c850; end: 10111c917;  */

undefined8 FUN_10111c850(long param_1,ulong param_2,code *param_3)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      (*param_3)();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    FUN_10111ca94(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 10111c918; end: 10111c92b;  */

void FUN_10111c918(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10111ca14);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    (*(code *)0x1011364e4)(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c9d8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    (*(code *)0x1011361f4)();
    lVar6 = *unaff_x20;
    goto joined_r0x00010111ca28;
  }
  lVar6 = *unaff_x20;
joined_r0x00010111ca28:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10111ca90);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10111c92c; end: 10111ca8f;  */

void FUN_10111c92c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,code *param_5,
                  code *param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10111ca14);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    (*param_5)(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10111c9d8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    (*param_6)();
    lVar6 = *unaff_x20;
    goto joined_r0x00010111ca28;
  }
  lVar6 = *unaff_x20;
joined_r0x00010111ca28:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10111ca90);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10111ca90; end: 10111ca93;  */

void FUN_10111ca90(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_10111cb88:
          if ((long)param_1 < (long)uVar8) goto LAB_10111cb10;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_10111cb88;
LAB_10111cb10:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cc44);
  (*pcVar5)();
}



/* Entry: 10111ca94; end: 10111cc43;  */

void FUN_10111ca94(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_10111cb88:
          if ((long)param_1 < (long)uVar8) goto LAB_10111cb10;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_10111cb88;
LAB_10111cb10:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cc44);
  (*pcVar5)();
}



/* Entry: 10111cc44; end: 10111ccf3;  */

void FUN_10111cc44(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_101136b48();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10111ccf4; end: 10111cd4f;  */

void FUN_10111ccf4(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  FUN_10111cd50();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61574();
  (*param_3)(param_1,param_2 + 0x20,uVar1);
  return;
}



/* Entry: 10111cd50; end: 10111ce07;  */

ulong FUN_10111cd50(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_1;
  }
  uVar2 = uVar1;
  func_0x000107c61134(uVar1,PTR___swiftEmptyArrayStorage_11034f1c8);
  if (uVar2 == 0) {
    func_0x000107c611a4(uVar1);
    uVar2 = uVar1;
    func_0x000107c61134(uVar1,PTR___swiftEmptyArrayStorage_11034f1c8);
    if (uVar2 == 0) {
      FUN_1011463d0(param_1);
      func_0x000107c6157c();
      func_0x000107c61188(uVar1,PTR___swiftEmptyArrayStorage_11034f1c8,param_1,1);
    }
    else {
      func_0x000107c61580();
      param_1 = uVar2;
    }
    func_0x000107c611a8(uVar1);
    func_0x000107c61574(param_1);
  }
  else {
    func_0x000107c6157c();
    param_1 = uVar2;
  }
  return param_1;
}



/* Entry: 10111ce08; end: 10111cf07;  */

/* WARNING: Possible PIC construction at 0x00010111d078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111d07c) */

void FUN_10111ce08(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  long lStack_68;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cec8);
    (*pcVar5)();
  }
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar6 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cee0);
    (*pcVar5)();
  }
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cee4);
    (*pcVar5)();
  }
  if (param_3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    lVar3 = uVar6 - lVar2;
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar6 = param_3;
    }
    func_0x000107c60480();
    lVar3 = uVar6 - lVar2;
  }
  if (SBORROW8(uVar6,lVar2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cf04);
    (*pcVar5)();
  }
  if (uVar10 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar7 = uVar10;
    }
    func_0x000107c60480();
  }
  if (SCARRY8(uVar7,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111cf08);
    (*pcVar5)();
  }
  FUN_10111cc44(uVar7 + lVar3,1);
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d03c);
    (*pcVar5)();
  }
  uVar7 = *unaff_x20;
  uVar10 = uVar7 & 0xffffffffffffff8;
  lVar3 = uVar10 + 0x20 + param_1 * 8;
  uVar8 = 0;
  FUN_10111de9c(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  func_0x000107c61408(lVar3,lVar2,uVar8);
  lVar4 = uVar6 - lVar2;
  if (SBORROW8(uVar6,lVar2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d040);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar7 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar10 + 0x10);
      lVar2 = uVar9 - param_2;
    }
    else {
      uVar9 = uVar10;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar9 = uVar7;
      }
      func_0x000107c60480();
      lVar2 = uVar9 - param_2;
    }
    if (SBORROW8(uVar9,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d058);
      (*pcVar5)();
    }
    uVar9 = lVar3 + uVar6 * 8;
    uVar1 = uVar10 + 0x20 + param_2 * 8;
    if (uVar9 != uVar1 || uVar1 + lVar2 * 8 <= uVar9) {
      func_0x000107c610b8(uVar9,uVar1,lVar2 << 3);
    }
    if (uVar7 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar9 = uVar10;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar9 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar9,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d05c);
      (*pcVar5)();
    }
    *(ulong *)(uVar10 + 0x10) = uVar9 + lVar4;
  }
  if (0 < (long)uVar6) {
    uStack_70 = uVar6;
    lStack_68 = lVar3;
    if (((long)param_3 < 0) || ((param_3 >> 0x3e & 1) != 0)) {
      FUN_10111ccf4(param_3,FUN_10111dedc,auStack_80);
    }
    else {
      if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) != uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10111d0a0);
        (*pcVar5)();
      }
      func_0x000107c6140c(lVar3,(param_3 & 0xffffffffffffff8) + 0x20,uVar6,uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}


