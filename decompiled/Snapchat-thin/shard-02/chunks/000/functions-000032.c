/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016feed4; end: 1016fef3f;  */

void FUN_1016feed4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 200) = param_1;
  *(undefined8 *)(lVar2 + 0xd0) = param_2;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  FUN_1016e8b44(lVar2 + 0x10);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016fef40;
  }
  else {
    pcVar1 = FUN_1016ff0a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016fef40; end: 1016ff0a7;  */

void FUN_1016fef40(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xd0);
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  lVar8 = *(long *)(unaff_x22 + 200);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c610f8(PTR_PTR_1126a7a48);
  FUN_1016e8bc0(lVar8,uVar1);
  lVar7 = lVar8;
  FUN_1016fec24(lVar8,uVar1 & 0xdfffffffffffffff);
  func_0x0001016e8bc8(lVar8,uVar1);
  if (lVar4 == 0) {
    if (lVar7 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 200);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
      func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xb8));
      func_0x000107c61170(uVar9);
      func_0x0001016e8bc8(uVar2,uVar3);
      goto LAB_1016ff084;
    }
  }
  else {
    func_0x000107c614ac(lVar4);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x0001016e8bc8(uVar2,uVar9);
  func_0x000107c61170(uVar10);
  func_0x00010006c090(uVar3,uVar5);
  func_0x000107c6142c(0x800000010efb8b90);
  lVar7 = 0;
LAB_1016ff084:
                    /* WARNING: Could not recover jumptable at 0x0001016ff0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar7);
  return;
}



/* Entry: 1016ff0a8; end: 1016ff1f3;  */

void FUN_1016ff0a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c602fc(0x35);
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000028,0x800000010efb8b60);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x3a726f727265202c,0xe900000000000020);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x88),(undefined8 *)(unaff_x22 + 0x68),uVar6,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c614ac(uVar5);
  func_0x000107c61170(uVar4);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001016ff1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016ff1f4; end: 1016ff24b;  */

void FUN_1016ff1f4(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = param_1;
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016ff24c;
  plVar1[0x13] = param_1;
  plVar1[0x14] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016fecfc,0,0);
  return;
}



/* Entry: 1016ff24c; end: 1016ff29b;  */

void FUN_1016ff24c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ff29c,0,0);
  return;
}



/* Entry: 1016ff29c; end: 1016ff6c7;  */

void FUN_1016ff29c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x22;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar12 = *(long *)(unaff_x22 + 0x38);
  if (lVar12 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    puStack_78 = (undefined *)0x0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_70);
    puStack_78 = (undefined *)0xd000000000000029;
    uStack_70 = 0x800000010efb8aa0;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
  }
  else {
    lVar9 = lVar12;
    func_0x000107c449b4();
    if ((int)lVar9 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      puStack_78 = (undefined *)0x0;
      uStack_70 = 0xe000000000000000;
      func_0x000107c602fc(0x28);
      func_0x000107c6142c(uStack_70);
      puStack_78 = (undefined *)0xd000000000000026;
      uStack_70 = 0x800000010efb8ad0;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
      puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(uStack_70);
      func_0x000107c61170(lVar12);
      uVar14 = 0;
      lVar9 = *(long *)(unaff_x22 + 0x28);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1016ff69c;
    }
    lVar3 = lVar12;
    func_0x000107c4d2b0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar9 = lVar3;
      func_0x000107c4b650();
      func_0x000107c61180();
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar9 != 0) {
        puStack_78 = (undefined *)0x0;
        uVar4 = 0;
        func_0x0001016ff9d8(0,0x112dc2f18,&PTR_PTR_1126a79e0);
        func_0x000107c5fc50(lVar9,&puStack_78,uVar4);
        func_0x000107c61170(lVar9);
        if (puStack_78 != (undefined *)0x0) {
          puVar15 = puStack_78;
        }
      }
      uVar16 = (uint)param_1;
      if ((ulong)puVar15 >> 0x3e == 0) {
        puVar13 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar13 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar15) {
          puVar13 = puVar15;
        }
        func_0x000107c60480();
        uVar16 = (uint)param_1;
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
      if (puVar13 != (undefined *)0x0) {
        uVar14 = 0;
        do {
          if (((ulong)puVar15 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ff610);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(puVar15 + uVar14 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar14;
            func_0x0001016f03a8(uVar14,puVar15);
          }
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ff60c);
            (*pcVar2)();
          }
          puVar11 = (undefined *)(uVar14 + 1);
          uStack_80 = uVar5;
          FUN_1016fcc34(&puStack_78,&uStack_80);
          func_0x000107c61170(uVar5);
          uVar4 = uStack_70;
          puVar1 = puStack_78;
          if (puStack_78 != (undefined *)0x0) {
            puVar6 = puVar7;
            func_0x000107c61558();
            puVar8 = puVar7;
            if (((ulong)puVar6 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_1016e7708(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
            }
            uVar5 = *(ulong *)(puVar8 + 0x10);
            puVar7 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_1016e7708(puVar7,uVar5 + 1,1,puVar8);
            }
            *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
            *(undefined **)(puVar7 + uVar5 * 0x10 + 0x20) = puVar1;
            *(int *)(puVar7 + uVar5 * 0x10 + 0x28) = (int)uVar4;
            *(int *)(puVar7 + uVar5 * 0x10 + 0x2c) = (int)((ulong)uVar4 >> 0x20);
          }
          uVar16 = (uint)param_1;
          uVar14 = uVar14 + 1;
        } while (puVar11 != puVar13);
      }
      func_0x000107c6142c(puVar15);
      lVar10 = lVar3;
      func_0x000107c4c114();
      lVar9 = lVar3;
      func_0x000107c5cda4(lVar3);
      func_0x000107c3fc04(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar12);
      uVar5 = 0x100000000;
      if ((int)lVar10 != 1) {
        uVar5 = 0;
      }
      uVar14 = 0x200000000;
      if ((int)lVar10 != 2) {
        uVar14 = uVar5;
      }
      uVar14 = uVar14 | uVar16;
      goto LAB_1016ff69c;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    puStack_78 = (undefined *)0x0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(uStack_70);
    puStack_78 = (undefined *)0xd000000000000021;
    uStack_70 = 0x800000010efb8b00;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
    puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    func_0x000107c61170(lVar12);
  }
  func_0x000107c6142c(uStack_70);
  lVar9 = 0;
  uVar14 = 0;
  puVar7 = (undefined *)0x0;
LAB_1016ff69c:
                    /* WARNING: Could not recover jumptable at 0x0001016ff6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar9,puVar7,uVar14);
  return;
}



/* Entry: 1016ff6c8; end: 1016ff6df;  */

void FUN_1016ff6c8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1016ff878();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016ff6e0; end: 1016ff73b;  */

/* WARNING: Possible PIC construction at 0x0001016ff6f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ff6f8) */

void FUN_1016ff6e0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1016ff73c; end: 1016ff797;  */

undefined8 * FUN_1016ff73c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016ff798; end: 1016ff7d3;  */

undefined8 * FUN_1016ff798(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016ff7d4; end: 1016ff877;  */

int FUN_1016ff7d4(ulong *param_1,int param_2)

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



/* Entry: 1016ff878; end: 1016ff8cb;  */

void FUN_1016ff878(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3320);
  return;
}



/* Entry: 1016ff8cc; end: 1016ff943;  */

void FUN_1016ff8cc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1016ffa38;
  plVar5[5] = lVar1;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_1016fceec;
                    /* WARNING: Could not recover jumptable at 0x0001016fcee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016ff1f4(uVar3,uVar2);
  return;
}



/* Entry: 1016ff944; end: 1016ff997;  */

/* WARNING: Possible PIC construction at 0x0001016ff978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ff97c) */

void FUN_1016ff944(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1016ff998; end: 1016ffa17;  */

undefined8 FUN_1016ff998(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1016ffa18; end: 1016ffa3b;  */

void FUN_1016ffa18(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100b60084();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016fc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016ffa3c; end: 101700447;  */

void FUN_1016ffa3c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar6 - extraout_x12;
  lVar9 = *(long *)(param_2 + 0x10);
  if (lVar9 == 0) {
    uVar4 = 1;
  }
  else {
    param_2 = param_2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    lStack_68 = *(long *)(lVar8 + 0x48);
    pcVar10 = *(code **)(lVar8 + 0x10);
    uStack_70 = param_1;
    do {
      (*pcVar10)(lVar7,param_2,lVar1);
      pcVar5 = *(code **)(lVar8 + 0x20);
      uVar2 = uVar6;
      lVar3 = lVar7;
      (*pcVar5)(uVar6,lVar7,lVar1);
      func_0x000107c5ebb4();
      if ((uVar2 == 0x79656b) && (lVar3 == -0x1d00000000000000)) {
        func_0x000107c6142c(0xe300000000000000);
LAB_1016ffb88:
        param_1 = uStack_70;
        (*pcVar5)(uStack_70,uVar6,lVar1);
        uVar4 = 0;
        goto LAB_1016ffba0;
      }
      func_0x000107c605b8();
      func_0x000107c6142c(lVar3);
      if ((uVar2 & 1) != 0) goto LAB_1016ffb88;
      (**(code **)(lVar8 + 8))(uVar6,lVar1);
      param_2 = param_2 + lStack_68;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar4 = 1;
    param_1 = uStack_70;
  }
LAB_1016ffba0:
  (**(code **)(lVar8 + 0x38))(param_1,uVar4,1,lVar1);
  return;
}



/* Entry: 101700448; end: 101700487;  */

undefined8 FUN_101700448(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101700488; end: 101700587;  */

void FUN_101700488(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1103fc678;
  func_0x000107c613fc(&UNK_1103fc678,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  pcStack_50 = FUN_101700598;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101700600;
  puStack_58 = &UNK_1103fc690;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x0001002342ec(0);
  func_0x000107c610f8();
  func_0x000102b15f98(puVar2,uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 101700588; end: 101700597;  */

undefined1  [16] FUN_101700588(void)

{
  return ZEXT816(0x1103fc658);
}



/* Entry: 101700598; end: 1017005ff;  */

void FUN_101700598(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101700c48(0);
  func_0x000107c610f8();
  func_0x00010170075c(uStack_38,uStack_40);
  return;
}



/* Entry: 101700600; end: 101700637;  */

void FUN_101700600(long param_1)

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



/* Entry: 101700638; end: 101700653;  */

void FUN_101700638(long param_1,long param_2)

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



/* Entry: 101700654; end: 1017007f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_101700654(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dc3390;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112dc3390);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueue";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 1017007f4; end: 10170089f; -[SCMyAICameraBitmojiFetcher initWithBitmojiSelfieServices:snapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017007f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dc3390) = 0;
  *(undefined8 *)(param_1 + _DAT_112dc3398) = 3;
  *(undefined8 *)(param_1 + _DAT_112dc33a0) = 0x3fc999999999999a;
  *(undefined8 *)(param_1 + _DAT_112dc33a8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112dc33b0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1017008a0; end: 101700a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017008a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_80;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc33b0);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101700a24);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e12b58;
    func_0x000107c61174();
    ppuVar5 = ppuVar4;
    FUN_101700654();
    ppuVar6 = ppuVar5;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar5);
    if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101700a28);
      (*pcVar1)();
    }
    puVar7 = &UNK_1103fc748;
    func_0x000107c613fc(&UNK_1103fc748,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_1103fc770;
    func_0x000107c613fc(&UNK_1103fc770,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    pcStack_60 = FUN_101700c68;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101043a98;
    puStack_68 = &UNK_1103fc788;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c5b49c(lVar3);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar6);
  }
  return;
}



/* Entry: 101700a28; end: 101700a8b; -[SCMyAICameraBitmojiFetcher fetchMyAIBitmoji] */

void FUN_101700a28(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  FUN_1017008a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101700a8c; end: 101700bcb;  */

void FUN_101700a8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_2 < 3) {
    uVar1 = param_1;
    FUN_101700654();
    puVar4 = &UNK_1103fc748;
    func_0x000107c613fc(&UNK_1103fc748,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar2 = &UNK_1103fc810;
    func_0x000107c613fc(&UNK_1103fc810,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar4;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(long *)(puVar2 + 0x20) = param_2;
    pcStack_50 = FUN_101701090;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1103fc828;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c4e528(0x3fc999999999999a,uVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar1);
    return;
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c453e4();
  func_0x000107c4d664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101700bcc; end: 101700bff;  */

void FUN_101700bcc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101700c00; end: 101700c47; -[SCMyAICameraBitmojiFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101700c00(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc33a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dc33b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dc3390));
  return;
}



/* Entry: 101700c48; end: 101700c67;  */

void FUN_101700c48(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8200);
  return;
}



/* Entry: 101700c68; end: 101700fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101700c68(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_2 == 0) {
    puVar11 = auStack_78;
    func_0x000107c61428(lVar1 + 0x10,puVar11,0,0);
    lVar3 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      if (param_1 != 0) {
        lVar4 = param_1;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c3ea1c();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
          if (lVar5 != 0) {
            lVar4 = lVar5;
            func_0x000107c5faec(lVar5);
            puVar12 = puVar11;
            func_0x000107c61170(lVar5);
            func_0x000107c3e9e8();
            func_0x000107c61180();
            if (param_1 != 0) {
              lVar5 = param_1;
              func_0x000107c3e978();
              func_0x000107c61180();
              func_0x000107c61170(param_1);
              if (lVar5 != 0) {
                ppuVar6 = &PTR____CFConstantStringClassReference_110e12b58;
                func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e12b58);
                puVar10 = PTR_PTR_1126b4bc0;
                func_0x000107c610f8(PTR_PTR_1126b4bc0);
                func_0x000107c5fadc(ppuVar6,puVar12);
                func_0x000107c6142c(puVar12);
                func_0x000107c5fadc(lVar4,puVar11);
                func_0x000107c6142c(puVar11);
                func_0x000107c491d0(puVar10);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(ppuVar6);
                puVar7 = *(undefined **)(lVar3 + _DAT_112dc33a8);
                func_0x000107c51d00();
                func_0x000107c61180();
                puVar8 = puVar7;
                func_0x000107c5c734();
                func_0x000107c61180();
                func_0x000107c61170(puVar7);
                if (puVar8 == (undefined *)0x0) {
                  func_0x000107c61170(lVar3);
                }
                else {
                  FUN_101700654();
                  puVar9 = puVar7;
                  func_0x000107c4f7c0();
                  func_0x000107c61180();
                  func_0x000107c615e8(puVar7);
                  puVar7 = &UNK_1103fc7c0;
                  func_0x000107c613fc(&UNK_1103fc7c0,0x28,7);
                  *(undefined8 *)(puVar7 + 0x10) = uVar2;
                  *(long *)(puVar7 + 0x18) = lVar3;
                  *(undefined8 *)(puVar7 + 0x20) = uVar13;
                  pcStack_88 = FUN_101700fec;
                  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a0 = 0x42000000;
                  puStack_98 = &UNK_1010a2bbc;
                  puStack_90 = &UNK_1103fc7d8;
                  ppuVar6 = &puStack_a8;
                  puStack_80 = puVar7;
                  func_0x000107c60bc4(ppuVar6);
                  puVar7 = puStack_80;
                  func_0x000107c61174(uVar2);
                  func_0x000107c61174(lVar3);
                  func_0x000107c61574(puVar7);
                  puVar7 = puVar8;
                  func_0x000107c4329c(puVar8);
                  func_0x000107c61180();
                  func_0x000107c61170(puVar10);
                  func_0x000107c61170(lVar3);
                  func_0x000107c60bd0(ppuVar6);
                  func_0x000107c615e8(puVar8);
                  func_0x000107c615e8(puVar7);
                  puVar10 = puVar9;
                }
                goto LAB_101700f9c;
              }
            }
            func_0x000107c6142c(puVar11);
          }
        }
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(lVar1 + 0x10,&puStack_a8,0,0);
    puVar10 = (undefined *)(lVar1 + 0x10);
    func_0x000107c61618();
    if (puVar10 == (undefined *)0x0) {
      return;
    }
    FUN_101700a8c(uVar2,uVar13);
  }
  else {
    func_0x000107c61428(lVar1 + 0x10,&puStack_a8,0,0);
    puVar10 = (undefined *)(lVar1 + 0x10);
    func_0x000107c61618();
    if (puVar10 == (undefined *)0x0) {
      return;
    }
    func_0x000107c614b0(param_2);
    FUN_101700a8c(uVar2,uVar13);
    func_0x000107c614ac(param_2);
  }
LAB_101700f9c:
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 101700fd0; end: 101700feb;  */

void FUN_101700fd0(long param_1,long param_2)

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



/* Entry: 101700fec; end: 101701063;  */

/* WARNING: Possible PIC construction at 0x000101701030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101701034) */

void FUN_101700fec(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c45154();
    func_0x000107c61180();
    func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_101700a8c(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101701064; end: 10170108f;  */

void FUN_101701064(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101701090; end: 1017010ff;  */

void FUN_101701090(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101701100);
      (*pcVar2)();
    }
    FUN_1017008a0(uVar1,lVar4 + 1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101701100; end: 10170110f;  */

void FUN_101701100(long param_1,long param_2)

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



/* Entry: 101701110; end: 10170116b;  */

long FUN_101701110(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_101701858();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar1;
    func_0x000107c61174();
    FUN_101701734(uVar3);
  }
  FUN_1017019ac(lVar2);
  return lVar1;
}



/* Entry: 10170116c; end: 1017011c3; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider suggestionInChatAge13To17] */

long FUN_10170116c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_101701110();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3da1c();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61574(param_1);
  return lVar2;
}



/* Entry: 1017011c4; end: 10170121b; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider suggestionInChatSCPlus] */

long FUN_1017011c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_101701110();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5170c();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61574(param_1);
  return lVar2;
}



/* Entry: 10170121c; end: 101701293; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider suggestionInFriendsFeedEnabled] */

undefined8 FUN_10170121c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efb8cf0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101701294; end: 1017012f3; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider suggestionInChatRotationDurationInHours] */

long FUN_101701294(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c6157c();
  FUN_101701110();
  if (lVar2 == 0) {
    func_0x000107c61574(param_1);
    lVar2 = 0x18;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c508fc();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(param_1);
    lVar2 = (long)(int)lVar1;
  }
  return lVar2;
}



/* Entry: 1017012f4; end: 10170136b; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMyAIInGroupChatEnabled] */

undefined8 FUN_1017012f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efb8d20);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10170136c; end: 1017013e3; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider botsOpenRearCameraInChatEnabled] */

undefined8 FUN_10170136c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efb8d40);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1017013e4; end: 10170145b; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMerlinActionMenuFollowUpEnabled] */

undefined8 FUN_1017013e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010efb8d70);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10170145c; end: 1017014d3; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMerlinCreateSongEnabled] */

undefined8 FUN_10170145c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efb8da0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1017014d4; end: 10170154b; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMyAIFFShortcutSlotOneEnabled] */

undefined8 FUN_1017014d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efb8dc0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10170154c; end: 1017015c3; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMyAIPoweredTeamSnapchatEnabled] */

undefined8 FUN_10170154c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb8df0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1017015c4; end: 10170163b; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMyAIInteractiveContentCardEnabled] */

undefined8 FUN_1017015c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efb8e10);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10170163c; end: 1017016bb; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMyAIQuizLensEnabled] */

undefined8 FUN_10170163c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0x55515f49415f594d;
  func_0x000107c5fadc(0x55515f49415f594d,0xef534e454c5f5a49);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1017016bc; end: 101701733; -[_TtC36MyAIExperimentServicesImplementation28MyAIExperimentConfigProvider isMyAIModelSelectionEnabled] */

undefined8 FUN_1017016bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efb8e40);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101701734; end: 101701743;  */

void FUN_101701734(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101701744; end: 101701797;  */

void FUN_101701744(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_101701734(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101701798; end: 101701857;  */

/* WARNING: Removing unreachable block (ram,0x000101701950) */

long FUN_101701798(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar2 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)(lVar2 + 0x10);
  uVar5 = 0x800000010efb8e60;
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar2 != 0) {
    lVar7 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar4 = lVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar7);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_10170191c:
            func_0x000107c610f8(PTR_PTR_1126a7a50);
            lVar7 = lVar4;
            FUN_101701798(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar2);
            return lVar7;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_10170191c;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_10170191c;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return 0;
}



/* Entry: 101701858; end: 1017019ab;  */

/* WARNING: Removing unreachable block (ram,0x000101701950) */

long FUN_101701858(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar5 = 0x800000010efb8e60;
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_10170191c:
            func_0x000107c610f8(PTR_PTR_1126a7a50);
            lVar3 = lVar4;
            FUN_101701798(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar7);
            return lVar3;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_10170191c;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_10170191c;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar7);
  }
  return 0;
}



/* Entry: 1017019ac; end: 1017019cb;  */

void FUN_1017019ac(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1017019cc; end: 101701a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017019cc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_40);
    uVar4 = *(undefined8 *)(lStack_40 + _DAT_113092298);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lStack_40);
    lVar3 = 0;
    func_0x000101701778();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    *(undefined8 *)(lVar3 + 0x20) = 1;
    *(long *)(lVar3 + 0x10) = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101701a7c);
  (*pcVar1)();
}



/* Entry: 101701a7c; end: 101701a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101701a7c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    func_0x000100083b20(&lStack_40);
    uVar4 = *(undefined8 *)(lStack_40 + _DAT_113092298);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lStack_40);
    lVar3 = 0;
    func_0x000101701778();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    *(undefined8 *)(lVar3 + 0x20) = 1;
    *(long *)(lVar3 + 0x10) = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101701a7c);
  (*pcVar1)();
}



/* Entry: 101701a84; end: 101701abb;  */

void FUN_101701a84(long param_1)

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



/* Entry: 101701abc; end: 101701ac3;  */

void FUN_101701abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101701ac4; end: 101701c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101701ac4(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112dc34a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    plVar9 = (long *)(unaff_x20 + _DAT_112dc3498);
    lVar7 = plVar9[4];
    func_0x000107c5fadc(lVar7,plVar9[5]);
    uVar2 = uVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168();
      uVar4 = uVar2;
      func_0x000107c6148c();
      if (uVar4 == 0) {
        func_0x000107c61170(uVar1);
        func_0x000107c615e8(uVar2);
        return -1;
      }
      lVar8 = *plVar9;
      func_0x000107c5faec();
      lVar7 = *(long *)(lVar8 + 0x10);
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar9 = (long *)(lVar8 + 0x28);
        do {
          uVar5 = plVar9[-1];
          if ((uVar5 == uVar4 && (undefined *)*plVar9 == puVar3) ||
             (func_0x000107c605b8(uVar5,(undefined *)*plVar9,uVar4,puVar3,0), (uVar5 & 1) != 0)) {
            func_0x000107c615e8(uVar2);
            func_0x000107c61170(uVar1);
            func_0x000107c6142c(puVar3);
            return lVar6;
          }
          plVar9 = plVar9 + 2;
          lVar6 = lVar6 + 1;
        } while (lVar7 != lVar6);
      }
      func_0x000107c6142c(puVar3);
      func_0x000107c615e8(uVar2);
    }
    func_0x000107c61170(uVar1);
  }
  return -1;
}



/* Entry: 101701c10; end: 101701d27;  */

/* WARNING: Possible PIC construction at 0x000101701cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101701cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101701cc8) */
/* WARNING: Removing unreachable block (ram,0x000101701cfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101701c10(ulong param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112dc34a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  if (-1 < (long)param_1) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dc3498);
    if (param_1 < *(ulong *)(*plVar1 + 0x10)) {
      lVar2 = *plVar1 + param_1 * 0x10;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar6,uVar3);
      func_0x000107c6142c(uVar3);
      lVar2 = plVar1[4];
      lVar4 = plVar1[5];
      func_0x000107c61174(uVar6);
      func_0x000107c5fadc(lVar2,lVar4);
      func_0x000107c56bcc(lVar5);
      goto code_r0x000107c61170;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x20);
  func_0x000107c5fadc(uVar6,*(undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x28));
  func_0x000107c56bcc(lVar5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 101701d28; end: 101701e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101701d28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112dc34a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x10);
    func_0x000107c5fadc(uVar5,*(undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x18));
    lVar2 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar4 = lVar2;
      func_0x000107c6148c(lVar2,puVar3);
      if (lVar4 != 0) {
        func_0x000107c4223c();
        func_0x000107c5ee88(param_1);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        uVar5 = 0;
        goto LAB_101701df8;
      }
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
  uVar5 = 1;
LAB_101701df8:
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101701e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,uVar5,1,lVar1);
  return;
}



/* Entry: 101701e28; end: 10170203b;  */

/* WARNING: Possible PIC construction at 0x000101701f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101701f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101702008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101701f4c) */
/* WARNING: Removing unreachable block (ram,0x000101701f0c) */
/* WARNING: Removing unreachable block (ram,0x00010170200c) */
/* WARNING: Removing unreachable block (ram,0x00010170201c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101701e28(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112dc34a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001009f0578(param_2,puVar8);
    puVar5 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,lVar3);
    register0x00000008 = (BADSPACEBASE *)puVar7;
    unaff_x19 = param_2;
    unaff_x29 = puVar1;
    if ((int)puVar5 == 1) {
      unaff_x30 = 0x101701f0c;
      param_2 = puVar8;
    }
    else {
      (**(code **)(lVar9 + 0x20))(puVar7,puVar8,lVar3);
      func_0x000107c5ee8c();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1);
      lVar3 = unaff_x20 + _DAT_112dc3498;
      unaff_x20 = *(long *)(lVar3 + 0x10);
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      func_0x000107c61174();
      func_0x000107c5fadc(unaff_x20,uVar2);
      func_0x000107c56bcc(lVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(lVar4);
      unaff_x30 = 0x10170200c;
    }
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_2,lVar3);
  return param_2;
}



/* Entry: 10170203c; end: 1017020af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170203c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc3498);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[7];
  uVar3 = param_1[6];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dc34a0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1017020b0; end: 10170224b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1017020b0(double param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12;
  FUN_101701d28(puVar7);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000d1dcc(puVar7);
  }
  else {
    lVar3 = lVar5;
    (**(code **)(lVar8 + 0x20))(lVar5,puVar7,lVar1);
    FUN_101701ac4();
    if (lVar3 != -1) {
      func_0x000107c5eea0(lVar6);
      func_0x000107c5ee68(lVar5);
      pcVar4 = *(code **)(lVar8 + 8);
      (*pcVar4)(lVar6,lVar1);
      (*pcVar4)(lVar5,lVar1);
      return (double)*(long *)(unaff_x20 + _DAT_112dc3498 + 8) * 3600.0 <= param_1;
    }
    (**(code **)(lVar8 + 8))(lVar5,lVar1);
  }
  return true;
}



/* Entry: 10170224c; end: 1017022ab;  */

/* WARNING: Possible PIC construction at 0x000101701cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101701cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101701cc8) */
/* WARNING: Removing unreachable block (ram,0x000101701cfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170224c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  
  uVar9 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112dc3498) + 0x10);
  if (uVar9 < 2) {
    uVar9 = uVar9 - 1;
  }
  else {
    FUN_101701ac4();
    uVar9 = uVar9 - 1;
    FUN_1016e7c78();
    if ((param_1 <= (long)uVar9) && (bVar6 = SCARRY8(uVar9,1), uVar9 = uVar9 + 1, bVar6)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101702298);
      (*pcVar5)();
    }
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112dc34a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    return;
  }
  if (-1 < (long)uVar9) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dc3498);
    if (uVar9 < *(ulong *)(*plVar1 + 0x10)) {
      lVar2 = *plVar1 + uVar9 * 0x10;
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar8,uVar3);
      func_0x000107c6142c(uVar3);
      lVar2 = plVar1[4];
      lVar4 = plVar1[5];
      func_0x000107c61174(uVar8);
      func_0x000107c5fadc(lVar2,lVar4);
      func_0x000107c56bcc(lVar7);
      goto code_r0x000107c61170;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x20);
  func_0x000107c5fadc(uVar8,*(undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x28));
  func_0x000107c56bcc(lVar7);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1017022ac; end: 10170230b; -[MyAIFriendsFeedRotationStringsProvider getRotationString] */

void FUN_1017022ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101702420();
  func_0x000107c61434(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10170230c; end: 101702357; -[MyAIFriendsFeedRotationStringsProvider getFallbackString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170230c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc3498 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dc3498 + 0x38);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101702358; end: 1017023b7; -[MyAIFriendsFeedRotationStringsProvider init] */

void FUN_101702358(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyAIFriendsFeedRotationStringsProviderImplementation.MyAIFriendsFeedRotationStringsProvider"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101702384);
  (*pcVar1)();
}



/* Entry: 1017023b8; end: 10170241f; -[MyAIFriendsFeedRotationStringsProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017023b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc3498);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[5];
  func_0x000107c6142c(puVar1[7]);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc34a0));
  return;
}



/* Entry: 101702420; end: 1017024fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101702420(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined1 *)0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffe0 + -extraout_x8;
  FUN_1017020b0();
  if (((ulong)puVar1 & 1) != 0) {
    FUN_10170224c();
    func_0x000107c5eea0(puVar3);
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
    FUN_101701e28();
    puVar1 = puVar3;
  }
  FUN_101701ac4();
  if (((long)puVar1 < 0) ||
     (*(undefined1 **)(*(long *)(unaff_x20 + _DAT_112dc3498) + 0x10) <= puVar1)) {
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x30);
    puVar5 = (undefined8 *)(unaff_x20 + _DAT_112dc3498 + 0x38);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112dc3498) + (long)puVar1 * 0x10;
    puVar4 = (undefined8 *)(lVar2 + 0x20);
    puVar5 = (undefined8 *)(lVar2 + 0x28);
  }
  auVar6._8_8_ = *puVar5;
  auVar6._0_8_ = *puVar4;
  return auVar6;
}



/* Entry: 1017024fc; end: 10170251b;  */

void FUN_1017024fc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e82e0);
  return;
}



/* Entry: 10170251c; end: 10170252b;  */

undefined1  [16] FUN_10170251c(void)

{
  return ZEXT816(0x1103fca20);
}



/* Entry: 10170252c; end: 101702c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10170252c(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lVar7;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  lVar8 = _DAT_1130404b8;
  lVar6 = *(long *)(lVar2 + _DAT_1130404b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5c40c();
    iVar4 = (int)lVar7;
    func_0x000107c615e8(lVar6);
  }
  lVar8 = *(long *)(lVar2 + lVar8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar6 = 0x18;
  }
  else {
    lVar6 = lVar8;
    func_0x000107c5c410();
    func_0x000107c615e8(lVar8);
  }
  lVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  if (iVar4 == 0) {
    lVar12 = 0xe0;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 0x18;
    *(undefined8 *)(lVar8 + 0x10) = 0xc;
    lVar7 = lVar8;
    func_0x000107c2bd80();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702be4);
      (*pcVar3)();
    }
    lVar9 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar12;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x20) = lVar9;
    *(long *)(lVar8 + 0x28) = lVar12;
    func_0x000107c2bd84();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bec);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x30) = lVar12;
    *(long *)(lVar8 + 0x38) = lVar10;
    func_0x000107c2bd88();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bf4);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x40) = lVar12;
    *(long *)(lVar8 + 0x48) = lVar9;
    func_0x000107c2bd8c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bfc);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x50) = lVar12;
    *(long *)(lVar8 + 0x58) = lVar10;
    func_0x000107c2bd90();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c04);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x60) = lVar12;
    *(long *)(lVar8 + 0x68) = lVar9;
    func_0x000107c2bd94();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c0c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x70) = lVar12;
    *(long *)(lVar8 + 0x78) = lVar10;
    func_0x000107c2bd98();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c14);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x80) = lVar12;
    *(long *)(lVar8 + 0x88) = lVar9;
    func_0x000107c2bd9c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c1c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x90) = lVar12;
    *(long *)(lVar8 + 0x98) = lVar10;
    func_0x000107c2bda0();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c24);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xa0) = lVar12;
    *(long *)(lVar8 + 0xa8) = lVar9;
    func_0x000107c2bda4();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c2c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xb0) = lVar12;
    *(long *)(lVar8 + 0xb8) = lVar10;
    func_0x000107c2bda8();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c34);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xc0) = lVar12;
    *(long *)(lVar8 + 200) = lVar9;
    func_0x000107c2bdac();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c3c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xd0) = lVar12;
    *(long *)(lVar8 + 0xd8) = lVar10;
  }
  else {
    lVar12 = 0x110;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 0x1e;
    *(undefined8 *)(lVar8 + 0x10) = 0xf;
    lVar7 = lVar8;
    func_0x000107c2bd74();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702be0);
      (*pcVar3)();
    }
    lVar9 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar12;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x20) = lVar9;
    *(long *)(lVar8 + 0x28) = lVar12;
    func_0x000107c2bd78();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702be8);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x30) = lVar12;
    *(long *)(lVar8 + 0x38) = lVar10;
    func_0x000107c2bd7c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bf0);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x40) = lVar12;
    *(long *)(lVar8 + 0x48) = lVar9;
    func_0x000107c2bd80();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bf8);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x50) = lVar12;
    *(long *)(lVar8 + 0x58) = lVar10;
    func_0x000107c2bd84();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c00);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x60) = lVar12;
    *(long *)(lVar8 + 0x68) = lVar9;
    func_0x000107c2bd88();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c08);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x70) = lVar12;
    *(long *)(lVar8 + 0x78) = lVar10;
    func_0x000107c2bd8c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c10);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x80) = lVar12;
    *(long *)(lVar8 + 0x88) = lVar9;
    func_0x000107c2bd90();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c18);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x90) = lVar12;
    *(long *)(lVar8 + 0x98) = lVar10;
    func_0x000107c2bd94();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c20);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xa0) = lVar12;
    *(long *)(lVar8 + 0xa8) = lVar9;
    func_0x000107c2bd98();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c28);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xb0) = lVar12;
    *(long *)(lVar8 + 0xb8) = lVar10;
    func_0x000107c2bd9c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c30);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xc0) = lVar12;
    *(long *)(lVar8 + 200) = lVar9;
    func_0x000107c2bda0();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c38);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xd0) = lVar12;
    *(long *)(lVar8 + 0xd8) = lVar10;
    func_0x000107c2bda4();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c40);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xe0) = lVar12;
    *(long *)(lVar8 + 0xe8) = lVar9;
    func_0x000107c2bda8();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c44);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar13 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xf0) = lVar12;
    *(long *)(lVar8 + 0xf8) = lVar10;
    func_0x000107c2bdac();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c48);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar13;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x100) = lVar12;
    *(long *)(lVar8 + 0x108) = lVar13;
  }
  func_0x000107c2bdb0();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar12 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    lVar10 = 0;
    FUN_1017024fc();
    lVar7 = lVar10;
    func_0x000107c610f8();
    plVar11 = (long *)(lVar7 + _DAT_112dc3498);
    *plVar11 = lVar8;
    plVar11[1] = lVar6;
    plVar11[2] = -0x2fffffffffffffe1;
    plVar11[3] = -0x7ffffffef1047120;
    plVar11[4] = -0x2fffffffffffffdf;
    plVar11[5] = -0x7ffffffef1047100;
    plVar11[6] = lVar12;
    plVar11[7] = lVar9;
    *(long *)(lVar7 + _DAT_112dc34a0) = lVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_78 = lVar7;
    lStack_70 = lVar10;
    func_0x000107c61174(lVar5);
    plVar11 = &lStack_78;
    func_0x000107c61154(plVar11,puVar1);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar2);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bdc);
  (*pcVar3)();
}



/* Entry: 101702c48; end: 101702c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101702c48(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lVar7;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  lVar8 = _DAT_1130404b8;
  lVar6 = *(long *)(lVar2 + _DAT_1130404b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5c40c();
    iVar4 = (int)lVar7;
    func_0x000107c615e8(lVar6);
  }
  lVar8 = *(long *)(lVar2 + lVar8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar6 = 0x18;
  }
  else {
    lVar6 = lVar8;
    func_0x000107c5c410();
    func_0x000107c615e8(lVar8);
  }
  lVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  if (iVar4 == 0) {
    lVar12 = 0xe0;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 0x18;
    *(undefined8 *)(lVar8 + 0x10) = 0xc;
    lVar7 = lVar8;
    func_0x000107c2bd80();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702be4);
      (*pcVar3)();
    }
    lVar9 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar12;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x20) = lVar9;
    *(long *)(lVar8 + 0x28) = lVar12;
    func_0x000107c2bd84();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bec);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x30) = lVar12;
    *(long *)(lVar8 + 0x38) = lVar10;
    func_0x000107c2bd88();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bf4);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x40) = lVar12;
    *(long *)(lVar8 + 0x48) = lVar9;
    func_0x000107c2bd8c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bfc);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x50) = lVar12;
    *(long *)(lVar8 + 0x58) = lVar10;
    func_0x000107c2bd90();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c04);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x60) = lVar12;
    *(long *)(lVar8 + 0x68) = lVar9;
    func_0x000107c2bd94();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c0c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x70) = lVar12;
    *(long *)(lVar8 + 0x78) = lVar10;
    func_0x000107c2bd98();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c14);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x80) = lVar12;
    *(long *)(lVar8 + 0x88) = lVar9;
    func_0x000107c2bd9c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c1c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x90) = lVar12;
    *(long *)(lVar8 + 0x98) = lVar10;
    func_0x000107c2bda0();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c24);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xa0) = lVar12;
    *(long *)(lVar8 + 0xa8) = lVar9;
    func_0x000107c2bda4();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c2c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xb0) = lVar12;
    *(long *)(lVar8 + 0xb8) = lVar10;
    func_0x000107c2bda8();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c34);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xc0) = lVar12;
    *(long *)(lVar8 + 200) = lVar9;
    func_0x000107c2bdac();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c3c);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xd0) = lVar12;
    *(long *)(lVar8 + 0xd8) = lVar10;
  }
  else {
    lVar12 = 0x110;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 0x1e;
    *(undefined8 *)(lVar8 + 0x10) = 0xf;
    lVar7 = lVar8;
    func_0x000107c2bd74();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702be0);
      (*pcVar3)();
    }
    lVar9 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar12;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x20) = lVar9;
    *(long *)(lVar8 + 0x28) = lVar12;
    func_0x000107c2bd78();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702be8);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x30) = lVar12;
    *(long *)(lVar8 + 0x38) = lVar10;
    func_0x000107c2bd7c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bf0);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x40) = lVar12;
    *(long *)(lVar8 + 0x48) = lVar9;
    func_0x000107c2bd80();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bf8);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x50) = lVar12;
    *(long *)(lVar8 + 0x58) = lVar10;
    func_0x000107c2bd84();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c00);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x60) = lVar12;
    *(long *)(lVar8 + 0x68) = lVar9;
    func_0x000107c2bd88();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c08);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x70) = lVar12;
    *(long *)(lVar8 + 0x78) = lVar10;
    func_0x000107c2bd8c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c10);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x80) = lVar12;
    *(long *)(lVar8 + 0x88) = lVar9;
    func_0x000107c2bd90();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c18);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x90) = lVar12;
    *(long *)(lVar8 + 0x98) = lVar10;
    func_0x000107c2bd94();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c20);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xa0) = lVar12;
    *(long *)(lVar8 + 0xa8) = lVar9;
    func_0x000107c2bd98();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c28);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xb0) = lVar12;
    *(long *)(lVar8 + 0xb8) = lVar10;
    func_0x000107c2bd9c();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c30);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xc0) = lVar12;
    *(long *)(lVar8 + 200) = lVar9;
    func_0x000107c2bda0();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c38);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xd0) = lVar12;
    *(long *)(lVar8 + 0xd8) = lVar10;
    func_0x000107c2bda4();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c40);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar10 = lVar9;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xe0) = lVar12;
    *(long *)(lVar8 + 0xe8) = lVar9;
    func_0x000107c2bda8();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c44);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar13 = lVar10;
    func_0x000107c61170();
    *(long *)(lVar8 + 0xf0) = lVar12;
    *(long *)(lVar8 + 0xf8) = lVar10;
    func_0x000107c2bdac();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101702c48);
      (*pcVar3)();
    }
    lVar12 = lVar7;
    func_0x000107c5faec();
    lVar9 = lVar13;
    func_0x000107c61170();
    *(long *)(lVar8 + 0x100) = lVar12;
    *(long *)(lVar8 + 0x108) = lVar13;
  }
  func_0x000107c2bdb0();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar12 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    lVar10 = 0;
    FUN_1017024fc();
    lVar7 = lVar10;
    func_0x000107c610f8();
    plVar11 = (long *)(lVar7 + _DAT_112dc3498);
    *plVar11 = lVar8;
    plVar11[1] = lVar6;
    plVar11[2] = -0x2fffffffffffffe1;
    plVar11[3] = -0x7ffffffef1047120;
    plVar11[4] = -0x2fffffffffffffdf;
    plVar11[5] = -0x7ffffffef1047100;
    plVar11[6] = lVar12;
    plVar11[7] = lVar9;
    *(long *)(lVar7 + _DAT_112dc34a0) = lVar5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_78 = lVar7;
    lStack_70 = lVar10;
    func_0x000107c61174(lVar5);
    plVar11 = &lStack_78;
    func_0x000107c61154(plVar11,puVar1);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar2);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101702bdc);
  (*pcVar3)();
}



/* Entry: 101702c50; end: 101702c87;  */

void FUN_101702c50(long param_1)

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



/* Entry: 101702c88; end: 101702c8f;  */

void FUN_101702c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101702c90; end: 101702f1f;  */

long FUN_101702c90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101702f20; end: 101702f2f;  */

undefined1  [16] FUN_101702f20(void)

{
  return ZEXT816(0x1103fcba0);
}



/* Entry: 101702f30; end: 101702f9b;  */

void FUN_101702f30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1103fcc10;
  func_0x000107c613fc(&UNK_1103fcc10,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  FUN_1017045cc(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x0001017032a4(0x1017031ec,puVar3);
  return;
}



/* Entry: 101702f9c; end: 1017031ab;  */

undefined8 FUN_101702f9c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long alStack_90 [4];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar8 - extraout_x12;
  puVar3 = PTR_PTR_1126ba528;
  func_0x000107c61168();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c41320();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar3 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    func_0x000107c5edb4(puVar8,puVar3);
    func_0x000107c61170(puVar3);
    (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar2);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    uStack_60 = 0;
    puVar5 = puVar3;
    func_0x000107c409e4();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    uVar7 = uStack_60;
    if ((int)puVar5 == 0) {
      uVar6 = uStack_60;
      func_0x000107c61174(uStack_60);
      func_0x000107c5ed30(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61654();
      func_0x000107c614ac(uVar7);
    }
    else {
      func_0x000107c61174(uStack_60);
    }
    uVar7 = 0;
    FUN_1017045cc();
    func_0x000107c5edc4();
    FUN_1017034b4();
    func_0x000107c6142c(puVar8);
    param_1 = lVar9;
    (**(code **)(lVar10 + 8))(lVar9,lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar7;
  }
  func_0x000107c60e78();
  *(undefined8 *)(lVar9 + -0x20) = uVar7;
  *(long *)(lVar9 + -0x18) = lVar2;
  *(undefined1 **)(lVar9 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar9 + -8) = FUN_1017031ac;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = uVar7;
  func_0x000107c6157c(uVar7);
  (*pcVar1)();
  func_0x000107c61574(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return uVar6;
}



/* Entry: 1017031ac; end: 1017031e3;  */

void FUN_1017031ac(long param_1)

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



/* Entry: 1017031e4; end: 1017031f3;  */

void FUN_1017031e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1017031f4; end: 10170321f; +[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore databaseFilename] */

void FUN_1017031f4(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efb8f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101703220; end: 1017033cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101703220(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112dc34e0;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc34e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1017033cc; end: 1017033eb;  */

void FUN_1017033cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1017033ec; end: 1017034b3; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore initWithTransactorFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017033ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  puVar4 = &UNK_1103fcec0;
  func_0x000107c613fc(&UNK_1103fcec0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  lVar2 = _DAT_112dc34e0;
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar5;
  puVar5 = &UNK_1103fcee8;
  func_0x000107c613fc(&UNK_1103fcee8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1017045ec;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc34e8);
  *puVar1 = 0x101704688;
  puVar1[1] = puVar5;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1017034b4; end: 1017034b7;  */

undefined * FUN_1017034b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c5fadc();
  uVar4 = 0x800000010efb8f30;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efb8f30);
  uVar2 = param_1;
  func_0x000107c5c168(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  FUN_10170460c(0,0x112dc34f0,&PTR_PTR_1126a7a58);
  puVar3 = PTR_PTR_1126c03b0;
  func_0x000107c61168(PTR_PTR_1126c03b0);
  func_0x000107c614e8(uVar2);
  func_0x000107c5fadc(uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c3cac8(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return puVar3;
}



/* Entry: 1017034b8; end: 10170356b;  */

undefined * FUN_1017034b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c5fadc();
  uVar4 = 0x800000010efb8f30;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efb8f30);
  uVar2 = param_1;
  func_0x000107c5c168(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  FUN_10170460c(0,0x112dc34f0,&PTR_PTR_1126a7a58);
  puVar3 = PTR_PTR_1126c03b0;
  func_0x000107c61168(PTR_PTR_1126c03b0);
  func_0x000107c614e8(uVar2);
  func_0x000107c5fadc(uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c3cac8(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return puVar3;
}



/* Entry: 10170356c; end: 101703627; +[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore makeTransactorWithDatabasesDirectoryPath:] */

void FUN_10170356c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar3 = 0x800000010efb8f30;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efb8f30);
  uVar2 = param_3;
  func_0x000107c5c168(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec(uVar2);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  FUN_10170460c(0,0x112dc34f0,&PTR_PTR_1126a7a58);
  func_0x0001031ac848(uVar1,uVar3,0,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101703628; end: 10170386f;  */

/* WARNING: Removing unreachable block (ram,0x0001017036ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101703628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112dc34e0);
  lVar1 = lVar5;
  func_0x000107c4b940();
  (**(code **)(unaff_x20 + _DAT_112dc34e8))();
  if (lVar1 == 0) {
    func_0x000107c5d278(lVar5);
  }
  else {
    uVar2 = 0;
    puStack_80 = (undefined *)param_1;
    puStack_78 = (undefined *)param_2;
    uStack_70 = param_3;
    puStack_68 = (undefined *)param_4;
    uStack_60 = param_5;
    FUN_10170460c(0,0x112dc34f0,&PTR_PTR_1126a7a58);
    func_0x0001031acfe4(0,0,FUN_101703870,&puStack_90,lVar1,uVar2,PTR___sytN_11034f1b0 + 8);
    uVar2 = 0;
    func_0x000107c60f6c();
    puVar3 = &UNK_1103fcd30;
    func_0x000107c613fc(&UNK_1103fcd30,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar2;
    uStack_70 = 0x101704660;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1103fcd48;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_68;
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c3b42c(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c6005c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c5d278(lVar5);
  }
  return lVar1 != 0;
}



/* Entry: 101703870; end: 1017038eb;  */

void FUN_101703870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x0001053d6850(param_1,uVar2,uVar3,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1017038ec; end: 101703987; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore storeWithContentId:conversationId:serverMessageId:] */

uint FUN_1017038ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101703628(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 101703988; end: 101703e1b;  */

/* WARNING: Removing unreachable block (ram,0x000101703a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101703988(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_68;
  
  ppuVar6 = &puStack_a0;
  lVar17 = *(long *)(unaff_x20 + _DAT_112dc34e0);
  lVar2 = lVar17;
  func_0x000107c4b940();
  (**(code **)(unaff_x20 + _DAT_112dc34e8))();
  if (lVar2 == 0) {
    func_0x000107c5d278(lVar17);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = 0;
    FUN_10170460c(0,0x112dc34f0,&PTR_PTR_1126a7a58);
    uVar4 = 0x112dc34f8;
    func_0x0001000285a8(0x112dc34f8,&UNK_10d980b20);
    func_0x0001031ac8e8(&uStack_68,0,0,FUN_101703e1c,0,lVar2,uVar3,uVar4);
    uVar4 = 0;
    func_0x000107c60f6c();
    puVar5 = &UNK_1103fcdd0;
    func_0x000107c613fc(&UNK_1103fcdd0,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar4;
    uStack_80 = 0x101704670;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_1103fcde8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174(uVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c3b42c(lVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c6005c();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c5d278(lVar17);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uStack_68 != 0) {
      if (uStack_68 >> 0x3e == 0) {
        uVar18 = *(ulong *)((uStack_68 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar18 = uStack_68;
        if (-1 < (long)uStack_68) {
          uVar18 = uStack_68 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      if (uVar18 != 0) {
        puStack_a0 = puVar5;
        uVar14 = uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU);
        func_0x00010170427c(0,uVar14,0);
        if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101703e1c);
          (*pcVar1)();
        }
        if ((uStack_68 & 0xc000000000000001) == 0) {
          puVar19 = (undefined8 *)(uStack_68 + 0x20);
          do {
            puVar5 = puStack_a0;
            uVar11 = *puVar19;
            func_0x000107c61174();
            uVar4 = uVar11;
            func_0x0001053d6eb4();
            func_0x000107c61180();
            uVar3 = uVar4;
            func_0x000107c5faec();
            uVar7 = uVar14;
            func_0x000107c61170(uVar4);
            uVar4 = uVar11;
            func_0x0001053d6ec0(uVar11);
            func_0x000107c61180();
            uVar12 = uVar4;
            func_0x000107c5faec();
            func_0x000107c61170(uVar4);
            uVar4 = uVar11;
            func_0x0001053d6ecc(uVar11);
            uVar13 = 0;
            func_0x000102d86f34(0);
            func_0x000107c610f8();
            func_0x000102d86d68(uVar3,uVar14,uVar12,uVar7,uVar4,uVar13);
            func_0x000107c61170(uVar11);
            uVar8 = *(ulong *)(puVar5 + 0x10);
            uVar7 = uVar8 + 1;
            puStack_a0 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
              uVar14 = uVar7;
              func_0x00010170427c(1 < *(ulong *)(puVar5 + 0x18),uVar7,1);
            }
            *(ulong *)(puStack_a0 + 0x10) = uVar7;
            *(undefined8 *)(puStack_a0 + uVar8 * 8 + 0x20) = uVar3;
            uVar18 = uVar18 - 1;
            puVar5 = puStack_a0;
            puVar19 = puVar19 + 1;
          } while (uVar18 != 0);
        }
        else {
          uVar14 = 0;
          do {
            puVar5 = puStack_a0;
            uVar7 = uVar14;
            uVar15 = uStack_68;
            FUN_1017043bc(uVar14,uStack_68);
            uVar8 = uVar7;
            func_0x0001053d6eb4();
            func_0x000107c61180();
            uVar9 = uVar8;
            func_0x000107c5faec();
            uVar16 = uVar15;
            func_0x000107c61170(uVar8);
            uVar8 = uVar7;
            func_0x0001053d6ec0(uVar7);
            func_0x000107c61180();
            uVar10 = uVar8;
            func_0x000107c5faec();
            func_0x000107c61170(uVar8);
            uVar8 = uVar7;
            func_0x0001053d6ecc(uVar7);
            uVar4 = 0;
            func_0x000102d86f34(0);
            func_0x000107c610f8();
            func_0x000102d86d68(uVar9,uVar15,uVar10,uVar16,uVar8,uVar4);
            func_0x000107c615e8(uVar7);
            uVar7 = *(ulong *)(puVar5 + 0x10);
            puStack_a0 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
              func_0x00010170427c(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
            }
            uVar14 = uVar14 + 1;
            *(ulong *)(puStack_a0 + 0x10) = uVar7 + 1;
            *(ulong *)(puStack_a0 + uVar7 * 8 + 0x20) = uVar9;
            puVar5 = puStack_a0;
          } while (uVar18 != uVar14);
        }
      }
      func_0x000107c6142c(uStack_68);
    }
  }
  return puVar5;
}



/* Entry: 101703e1c; end: 101703e8b;  */

void FUN_101703e1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001053d6684();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_10170460c(0,0x112dc3528,&PTR_PTR_1126b8528);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101703e8c; end: 101703edf; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore allItems] */

void FUN_101703e8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101703988();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000102d86f34(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101703ee0; end: 10170410b;  */

/* WARNING: Removing unreachable block (ram,0x000101703f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101703ee0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar5 = *(long *)(unaff_x20 + _DAT_112dc34e0);
  lVar1 = lVar5;
  func_0x000107c4b940();
  (**(code **)(unaff_x20 + _DAT_112dc34e8))();
  if (lVar1 == 0) {
    func_0x000107c5d278(lVar5);
  }
  else {
    uVar2 = 0;
    puStack_70 = (undefined *)param_1;
    puStack_68 = (undefined *)param_2;
    FUN_10170460c(0,0x112dc34f0,&PTR_PTR_1126a7a58);
    func_0x0001031acfe4(0,0,FUN_101704580,&puStack_80,lVar1,uVar2,PTR___sytN_11034f1b0 + 8);
    uVar2 = 0;
    func_0x000107c60f6c();
    puVar3 = &UNK_1103fce70;
    func_0x000107c613fc(&UNK_1103fce70,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar2;
    uStack_60 = 0x101704680;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_1103fce88;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c3b42c(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c6005c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c5d278(lVar5);
  }
  return lVar1 != 0;
}



/* Entry: 10170410c; end: 101704173; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore deleteWithContentId:] */

uint FUN_10170410c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101703ee0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101704174; end: 1017041a7;  */

void FUN_101704174(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


