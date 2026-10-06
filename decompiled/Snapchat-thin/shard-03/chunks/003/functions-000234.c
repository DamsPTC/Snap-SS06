/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027848e4; end: 102784977;  */

void FUN_1027848e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  plVar10 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x102784f48;
  plVar10[3] = lVar6;
  plVar10[4] = lVar3;
  lVar6 = 0;
  func_0x000107c5fcbc(0,uVar1,uVar2);
  plVar10[5] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar10[6] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[7] = uVar7;
  lVar6 = 0;
  func_0x000107c5fcec();
  plVar10[8] = lVar6;
  func_0x000107c5fce8();
  plVar10[9] = lVar6;
  plVar8 = (long *)0x120;
  func_0x000107c615b8();
  plVar10[10] = (long)plVar8;
  *plVar8 = (long)plVar10;
  plVar8[1] = (long)FUN_10277e4d8;
  plVar8[0x19] = lVar11;
  plVar8[0x1a] = lVar9;
  plVar8[0x18] = lVar4;
  lVar9 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar6 = lVar9;
  func_0x000107c5fce8();
  plVar8[0x1b] = lVar6;
  lVar6 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar8[0x1c] = lVar9;
  plVar8[0x1d] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277e778,lVar9,lVar6);
  return;
}



/* Entry: 102784978; end: 1027849c7;  */

void FUN_102784978(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027849c8; end: 102784a67;  */

void FUN_1027849c8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  plVar11 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x102784f4c;
  plVar11[3] = lVar7;
  plVar11[4] = lVar4;
  lVar7 = 0;
  func_0x000107c5fcbc(0,uVar1,uVar3);
  plVar11[5] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar11[6] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[7] = uVar8;
  lVar7 = 0;
  func_0x000107c5fcec();
  plVar11[8] = lVar7;
  func_0x000107c5fce8();
  plVar11[9] = lVar7;
  plVar9 = (long *)0x90;
  func_0x000107c615b8();
  plVar11[10] = (long)plVar9;
  *plVar9 = (long)plVar11;
  plVar9[1] = (long)FUN_10277eb98;
  plVar9[6] = lVar2;
  plVar9[7] = lVar10;
  plVar9[5] = lVar5;
  lVar10 = 0;
  func_0x000107c5fcec();
  puVar6 = PTR___sScMMa_11034fc70;
  lVar7 = lVar10;
  func_0x000107c5fce8();
  plVar9[8] = lVar7;
  lVar7 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar6,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar9[9] = lVar10;
  plVar9[10] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277ee0c,lVar10,lVar7);
  return;
}



/* Entry: 102784a68; end: 102784b67;  */

double FUN_102784a68(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar2 = param_1;
  func_0x000107c448cc();
  dVar4 = 0.0;
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x000107c444cc();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102784b5c);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c5e304();
    func_0x000107c61170(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = param_1;
      func_0x000107c444cc();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102784b60);
        (*pcVar1)();
      }
      uVar3 = uVar2;
      func_0x000107c44d98();
      func_0x000107c61170(uVar2);
      if ((int)uVar3 != 0) {
        uVar2 = param_1;
        func_0x000107c444cc();
        func_0x000107c61180();
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102784b64);
          (*pcVar1)();
        }
        uVar3 = uVar2;
        func_0x000107c5e304();
        func_0x000107c61170(uVar2);
        func_0x000107c444cc();
        func_0x000107c61180();
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102784b68);
          (*pcVar1)();
        }
        uVar2 = param_1;
        func_0x000107c44d98();
        func_0x000107c61170(param_1);
        dVar4 = (double)(uVar3 & 0xffffffff) / (double)(uVar2 & 0xffffffff);
      }
    }
  }
  return dVar4;
}



/* Entry: 102784b68; end: 102784cf7;  */

long FUN_102784b68(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_f0 [176];
  
  puVar8 = auStack_f0;
  uVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0e2b8;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar8;
  FUN_102782e70();
  func_0x000107c613fc();
  ppuVar3[3] = (undefined *)0x2;
  ppuVar3[2] = (undefined *)0x1;
  puVar4 = (undefined *)0x0;
  func_0x000102c0d958();
  ppuVar3[4] = puVar4;
  puVar5 = (undefined8 *)0x112ebd580;
  puVar4 = &UNK_10dad7e58;
  func_0x0001000285a8();
  *(undefined8 **)(lVar2 + 0x48) = puVar5;
  *(undefined ***)(lVar2 + 0x30) = ppuVar3;
  FUN_102c0d978();
  uVar6 = puVar5[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar5;
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  *(undefined8 *)(lVar2 + 0x78) = uVar1;
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0bc38;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x80) = ppuVar3;
  *(undefined **)(lVar2 + 0x88) = puVar4;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c61174(param_1);
  func_0x000107c46ed0();
  uVar6 = 0;
  FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0xa8) = uVar6;
  *(undefined **)(lVar2 + 0x90) = puVar4;
  lVar7 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),3,uVar6);
  return lVar7;
}



/* Entry: 102784cf8; end: 102784d37;  */

void FUN_102784cf8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102784d38; end: 102784d4b;  */

void FUN_102784d38(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102784d4c; end: 102784d93;  */

undefined8 FUN_102784d4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102784d94; end: 102784efb;  */

int FUN_102784d94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102784e10;
        goto LAB_102784df4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102784df4:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_102784e10:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102784efc; end: 102784f3b;  */

void FUN_102784efc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7f10;
  func_0x000107c61520(&UNK_10dad7f10,&UNK_1105473e0);
  puRam0000000112ebd598 = puVar1;
  return;
}



/* Entry: 102784f3c; end: 102784f57;  */

void FUN_102784f3c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277cb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102784f58; end: 1027850cb;  */

undefined1  [16] FUN_102784f58(void)

{
  return ZEXT816(0x1105474a0);
}



/* Entry: 1027850cc; end: 1027850f7;  */

void FUN_1027850cc(void)

{
  func_0x0001000285a8(0x112ebd5d8,&UNK_10dad7fe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1027850f8; end: 1027851bb;  */

void FUN_1027850f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebd5d8;
  func_0x0001000285a8(0x112ebd5d8,&UNK_10dad7fe0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027851bc; end: 1027851bf;  */

void FUN_1027851bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7ff0;
  func_0x000107c61520(&UNK_10dad7ff0,&UNK_110547678);
  puRam0000000112ebd620 = puVar1;
  return;
}



/* Entry: 1027851c0; end: 10278522b;  */

void FUN_1027851c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7ff0;
  func_0x000107c61520(&UNK_10dad7ff0,&UNK_110547678);
  puRam0000000112ebd620 = puVar1;
  return;
}



/* Entry: 10278522c; end: 10278522f;  */

void FUN_10278522c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8098;
  func_0x000107c61520(&UNK_10dad8098,&UNK_1105475d8);
  puRam0000000112ebd638 = puVar1;
  return;
}



/* Entry: 102785230; end: 10278529b;  */

void FUN_102785230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8098;
  func_0x000107c61520(&UNK_10dad8098,&UNK_1105475d8);
  puRam0000000112ebd638 = puVar1;
  return;
}



/* Entry: 10278529c; end: 10278531f;  */

void FUN_10278529c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102785320; end: 102785323;  */

void FUN_102785320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8108;
  func_0x000107c61520(&UNK_10dad8108,&UNK_1105475d8);
  puRam0000000112ebd650 = puVar1;
  return;
}



/* Entry: 102785324; end: 102785363;  */

void FUN_102785324(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8108;
  func_0x000107c61520(&UNK_10dad8108,&UNK_1105475d8);
  puRam0000000112ebd650 = puVar1;
  return;
}



/* Entry: 102785364; end: 102785367;  */

void FUN_102785364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad80c0;
  func_0x000107c61520(&UNK_10dad80c0,&UNK_1105475d8);
  puRam0000000112ebd658 = puVar1;
  return;
}



/* Entry: 102785368; end: 1027853a7;  */

void FUN_102785368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad80c0;
  func_0x000107c61520(&UNK_10dad80c0,&UNK_1105475d8);
  puRam0000000112ebd658 = puVar1;
  return;
}



/* Entry: 1027853a8; end: 10278552b;  */

int FUN_1027853a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102785424;
        goto LAB_102785408;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102785408:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_102785424:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10278552c; end: 102785547;  */

undefined * FUN_10278552c(void)

{
  return &UNK_1105476e8;
}



/* Entry: 102785548; end: 1027855d3;  */

void FUN_102785548(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102785d9c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027855d4,uVar2,uVar3);
  return;
}



/* Entry: 1027855d4; end: 102785607;  */

void FUN_1027855d4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102785604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102785608; end: 10278560f;  */

void FUN_102785608(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102785610; end: 102785687;  */

undefined8 * FUN_102785610(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102785688; end: 1027859df;  */

int FUN_102785688(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1027859e0; end: 102785a2f;  */

void FUN_1027859e0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ebd688 != 0) {
    return;
  }
  puVar1 = &UNK_110547980;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ebd688 = param_1;
  return;
}



/* Entry: 102785a30; end: 102785a37;  */

void FUN_102785a30(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 102785a38; end: 102785bab;  */

void FUN_102785a38(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 102785bac; end: 102785c2f;  */

void FUN_102785bac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ebd6a8;
  FUN_102785d9c(0x112ebd6a8,FUN_1027859e0,&UNK_10dad8368);
  uVar2 = 0x112ebd6b0;
  FUN_102785d9c(0x112ebd6b0,FUN_1027859e0,&UNK_10dad8310);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 102785c30; end: 102785c87;  */

void FUN_102785c30(void)

{
  FUN_102785d9c(0x112ebd690,FUN_1027859e0,&UNK_10dad82d8);
  return;
}



/* Entry: 102785c88; end: 102785cff;  */

undefined8 FUN_102785c88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 102785d00; end: 102785d6f;  */

undefined1 * FUN_102785d00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 102785d70; end: 102785d9b;  */

void FUN_102785d70(void)

{
  FUN_102785d9c(0x112ebd6a0,FUN_1027859e0,&UNK_10dad8340);
  return;
}



/* Entry: 102785d9c; end: 102785ddb;  */

void FUN_102785d9c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102785ddc; end: 102785df3;  */

undefined1 FUN_102785ddc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102785df4; end: 102785e1f;  */

void FUN_102785df4(void)

{
  func_0x0001000285a8(0x112ebd6e8,&UNK_10dad83f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 102785e20; end: 102785ee3;  */

void FUN_102785e20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebd6e8;
  func_0x0001000285a8(0x112ebd6e8,&UNK_10dad83f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102785ee4; end: 102785ee7;  */

void FUN_102785ee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8400;
  func_0x000107c61520(&UNK_10dad8400,&UNK_110547ae8);
  puRam0000000112ebd6f8 = puVar1;
  return;
}



/* Entry: 102785ee8; end: 102785f53;  */

void FUN_102785ee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8400;
  func_0x000107c61520(&UNK_10dad8400,&UNK_110547ae8);
  puRam0000000112ebd6f8 = puVar1;
  return;
}



/* Entry: 102785f54; end: 102785f57;  */

void FUN_102785f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad84a8;
  func_0x000107c61520(&UNK_10dad84a8,&UNK_1105478d0);
  puRam0000000112ebd710 = puVar1;
  return;
}



/* Entry: 102785f58; end: 102785fc3;  */

void FUN_102785f58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad84a8;
  func_0x000107c61520(&UNK_10dad84a8,&UNK_1105478d0);
  puRam0000000112ebd710 = puVar1;
  return;
}



/* Entry: 102785fc4; end: 102786047;  */

void FUN_102785fc4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102786048; end: 10278604b;  */

void FUN_102786048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8518;
  func_0x000107c61520(&UNK_10dad8518,&UNK_1105478d0);
  puRam0000000112ebd728 = puVar1;
  return;
}



/* Entry: 10278604c; end: 10278608b;  */

void FUN_10278604c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8518;
  func_0x000107c61520(&UNK_10dad8518,&UNK_1105478d0);
  puRam0000000112ebd728 = puVar1;
  return;
}



/* Entry: 10278608c; end: 10278608f;  */

void FUN_10278608c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad84d0;
  func_0x000107c61520(&UNK_10dad84d0,&UNK_1105478d0);
  puRam0000000112ebd730 = puVar1;
  return;
}



/* Entry: 102786090; end: 1027860cf;  */

void FUN_102786090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad84d0;
  func_0x000107c61520(&UNK_10dad84d0,&UNK_1105478d0);
  puRam0000000112ebd730 = puVar1;
  return;
}



/* Entry: 1027860d0; end: 102786253;  */

int FUN_1027860d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10278614c;
        goto LAB_102786130;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102786130:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10278614c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102786254; end: 1027863ff;  */

/* WARNING: Possible PIC construction at 0x000102786268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010278626c) */

void FUN_102786254(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102786400; end: 10278642b;  */

void FUN_102786400(void)

{
  func_0x0001000285a8(0x112ebd7f0,&UNK_10dad8630);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10278642c; end: 1027864ef;  */

void FUN_10278642c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebd7f0;
  func_0x0001000285a8(0x112ebd7f0,&UNK_10dad8630);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027864f0; end: 1027864f3;  */

void FUN_1027864f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8640;
  func_0x000107c61520(&UNK_10dad8640,&UNK_110547c58);
  puRam0000000112ebd800 = puVar1;
  return;
}



/* Entry: 1027864f4; end: 10278655f;  */

void FUN_1027864f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8640;
  func_0x000107c61520(&UNK_10dad8640,&UNK_110547c58);
  puRam0000000112ebd800 = puVar1;
  return;
}



/* Entry: 102786560; end: 102786563;  */

void FUN_102786560(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad86e8;
  func_0x000107c61520(&UNK_10dad86e8,&UNK_110547960);
  puRam0000000112ebd818 = puVar1;
  return;
}



/* Entry: 102786564; end: 1027865cf;  */

void FUN_102786564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad86e8;
  func_0x000107c61520(&UNK_10dad86e8,&UNK_110547960);
  puRam0000000112ebd818 = puVar1;
  return;
}



/* Entry: 1027865d0; end: 102786653;  */

void FUN_1027865d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102786654; end: 102786657;  */

void FUN_102786654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8758;
  func_0x000107c61520(&UNK_10dad8758,&UNK_110547960);
  puRam0000000112ebd830 = puVar1;
  return;
}



/* Entry: 102786658; end: 102786697;  */

void FUN_102786658(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8758;
  func_0x000107c61520(&UNK_10dad8758,&UNK_110547960);
  puRam0000000112ebd830 = puVar1;
  return;
}



/* Entry: 102786698; end: 10278669b;  */

void FUN_102786698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8710;
  func_0x000107c61520(&UNK_10dad8710,&UNK_110547960);
  puRam0000000112ebd838 = puVar1;
  return;
}



/* Entry: 10278669c; end: 1027866db;  */

void FUN_10278669c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebd838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad8710;
  func_0x000107c61520(&UNK_10dad8710,&UNK_110547960);
  puRam0000000112ebd838 = puVar1;
  return;
}



/* Entry: 1027866dc; end: 10278685f;  */

int FUN_1027866dc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102786758;
        goto LAB_10278673c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10278673c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102786758:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102786860; end: 10278697b;  */

long * FUN_102786860(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar5 = *param_2;
    lVar11 = param_2[3];
    lVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar5;
    param_1[3] = lVar11;
    param_1[2] = lVar6;
    lVar5 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar5;
    lVar5 = 0;
    func_0x000100371f48();
    iVar3 = *(int *)(lVar5 + 0x28);
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))
              ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar6);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
    lVar5 = (long)*(int *)(param_3 + 0x14);
    lVar6 = *(long *)((long)param_2 + lVar5 + 0x18);
    *(undefined8 *)((long)param_1 + lVar5 + 0x20) = *(undefined8 *)((long)param_2 + lVar5 + 0x20);
    *(long *)((long)param_1 + lVar5 + 0x18) = lVar6;
    (*(code *)**(undefined8 **)(lVar6 + -8))();
    iVar3 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar8 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar8;
    iVar3 = *(int *)(param_3 + 0x24);
    uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) = uVar9;
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
    lVar5 = puVar1[1];
    uVar10 = *puVar1;
    puVar4 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar4[1] = puVar1[1];
    *puVar4 = uVar10;
    func_0x000107c61174();
    func_0x000107c615f0(uVar8);
    func_0x000107c61174(uVar9);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar5);
  return param_1;
}



/* Entry: 10278697c; end: 102786a07;  */

void FUN_10278697c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000100371f48();
  iVar1 = *(int *)(lVar2 + 0x28);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  func_0x0001000834e4(param_1 + *(int *)(param_2 + 0x14));
  func_0x000107c61170(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  func_0x000107c615e8(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  func_0x000107c61170(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}



/* Entry: 102786a08; end: 102786def;  */

undefined8 * FUN_102786a08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  lVar3 = 0;
  func_0x000100371f48();
  iVar1 = *(int *)(lVar3 + 0x28);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x2c));
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar4 = *(long *)((long)param_2 + lVar3 + 0x18);
  *(undefined8 *)((long)param_1 + lVar3 + 0x20) = *(undefined8 *)((long)param_2 + lVar3 + 0x20);
  *(long *)((long)param_1 + lVar3 + 0x18) = lVar4;
  (*(code *)**(undefined8 **)(lVar4 + -8))();
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar7 = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)iVar1) = uVar7;
  iVar1 = *(int *)(param_3 + 0x24);
  uVar6 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) = uVar6;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = param_2[1];
  uVar8 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar8;
  func_0x000107c61174();
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 102786df0; end: 102786e07;  */

void FUN_102786df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102786e08; end: 10278705f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102786e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd968);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd970) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd978) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd980);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd988);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd990);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd998);
  *puVar1 = param_11;
  *(undefined1 *)(puVar1 + 1) = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd9a0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102787060; end: 1027870bf; -[_TtC21MemTwoOperaSessionAPI31MemTwoOperaSessionPlaylistGroup init] */

void FUN_102787060(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionAPI.MemTwoOperaSessionPlaylistGroup",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10278708c);
  (*pcVar1)();
}



/* Entry: 1027870c0; end: 1027870cb;  */

undefined * FUN_1027870c0(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 1027870cc; end: 102787167; -[_TtC21MemTwoOperaSessionAPI31MemTwoOperaSessionPlaylistGroup .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027870ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102787120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102787148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102787124) */
/* WARNING: Removing unreachable block (ram,0x0001027870f0) */
/* WARNING: Removing unreachable block (ram,0x00010278714c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027870cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebd968 + 8))
  ;
  return;
}



/* Entry: 102787168; end: 102787193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787168(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = ((undefined8 *)(*unaff_x20 + _DAT_112ebd968))[1];
  *param_1 = *(undefined8 *)(*unaff_x20 + _DAT_112ebd968);
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102787194; end: 1027871b3;  */

void FUN_102787194(void)

{
  func_0x000107c61168(&PTR_PTR_112860118);
  return;
}



/* Entry: 1027871b4; end: 1027871df;  */

long FUN_1027871b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1027871e0; end: 1027871e3;  */

void FUN_1027871e0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1027871e4; end: 10278726b;  */

long FUN_1027871e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Entry: 10278726c; end: 102787313;  */

int FUN_10278726c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102787314; end: 10278734b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102787314(void)

{
  undefined8 uStack_28;
  
  func_0x0001000c74f0(&uStack_28);
  return uStack_28;
}



/* Entry: 10278734c; end: 10278789f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10278734c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 *param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd9d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd9d8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  auStack_70[0] = param_5;
  func_0x0001000285a8(0x112ebda18,&UNK_10dad8938);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  puVar1 = auStack_70;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + _DAT_112ebd9e0) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebd9e8) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd9f0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(puVar1 + 2) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebd9f8);
  uVar3 = *param_11;
  uVar5 = param_11[3];
  uVar4 = param_11[2];
  puVar1[1] = param_11[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar3 = param_11[4];
  puVar1[5] = param_11[5];
  puVar1[4] = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112ebda00) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_112ebda08) = param_12._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda10);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined1 *)(puVar1 + 2) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda20);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda28);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda30);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda38);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda40);
  *puVar1 = param_26;
  puVar1[1] = param_27;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda48);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebda50);
  *puVar1 = param_30;
  puVar1[1] = param_31;
  puVar2 = auStack_80;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c61170(param_5);
  return puVar2;
}



/* Entry: 1027878a0; end: 1027878ff; -[_TtC21MemTwoOperaSessionAPI30MemTwoOperaSessionPlaylistItem init] */

void FUN_1027878a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaSessionAPI.MemTwoOperaSessionPlaylistItem",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027878cc);
  (*pcVar1)();
}



/* Entry: 102787900; end: 102787a1b; -[_TtC21MemTwoOperaSessionAPI30MemTwoOperaSessionPlaylistItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102787944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102787984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027879ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027879d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027879fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027879d8) */
/* WARNING: Removing unreachable block (ram,0x0001027879b0) */
/* WARNING: Removing unreachable block (ram,0x000102787988) */
/* WARNING: Removing unreachable block (ram,0x000102787948) */
/* WARNING: Removing unreachable block (ram,0x000102787a00) */
/* WARNING: Removing unreachable block (ram,0x000100d04d60) */
/* WARNING: Removing unreachable block (ram,0x000100d04d6c) */
/* WARNING: Removing unreachable block (ram,0x000100d04d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787900(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebd9d0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebd9d8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebd9e8));
  return;
}



/* Entry: 102787a1c; end: 102787a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = ((undefined8 *)(*unaff_x20 + _DAT_112ebd9d0))[1];
  *param_1 = *(undefined8 *)(*unaff_x20 + _DAT_112ebd9d0);
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102787a9c; end: 102787b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787a9c(undefined1 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebda20);
  piVar4 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x18) = piVar4;
  uVar5 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = 0x102787b70;
                    /* WARNING: Could not recover jumptable at 0x000102787b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar4 + (long)iVar2))(*(undefined1 *)(unaff_x22 + 0x38));
    return;
  }
  func_0x000102787bcc();
  func_0x000107c613f8(&UNK_110548048,param_1,0,0);
  *param_1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102787b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102787b70; end: 102787c0b;  */

void FUN_102787b70(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    uVar1 = 0x102788d14;
  }
  else {
    uVar1 = 0x102788d0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102787c0c; end: 102787c2f;  */

void FUN_102787c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787c30,0,0);
  return;
}



/* Entry: 102787c30; end: 102787d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787c30(undefined1 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x40) + _DAT_112ebda28);
  piVar4 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x48) = piVar4;
  uVar5 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102787d10;
                    /* WARNING: Could not recover jumptable at 0x000102787cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar4 + (long)iVar2))
              (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
               *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
               *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    return;
  }
  func_0x000102787bcc();
  func_0x000107c613f8(&UNK_110548048,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102787d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102787d10; end: 102787dd3;  */

void FUN_102787d10(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x102787d6c;
  }
  else {
    uVar1 = 0x102787da0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102787dd4; end: 102787def;  */

void FUN_102787dd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787df0,0,0);
  return;
}



/* Entry: 102787df0; end: 102787ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787df0(undefined1 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_112ebda30);
  piVar4 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x28) = piVar4;
  uVar5 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102787ec8;
                    /* WARNING: Could not recover jumptable at 0x000102787e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar4 + (long)iVar2))
              (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
    return;
  }
  func_0x000102787bcc();
  func_0x000107c613f8(&UNK_110548048,param_1,0,0);
  *param_1 = 2;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102787ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102787ec8; end: 102787f8b;  */

void FUN_102787ec8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    uVar1 = 0x102787f24;
  }
  else {
    uVar1 = 0x102787f58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102787f8c; end: 102787fa3;  */

void FUN_102787f8c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787fa4,0,0);
  return;
}



/* Entry: 102787fa4; end: 102788063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102787fa4(undefined1 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebda38);
  piVar3 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x18) = piVar3;
  uVar4 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  if (piVar3 == (int *)0x0) {
    func_0x000102787bcc();
    func_0x000107c613f8(&UNK_110548048,param_1,0,0);
    *param_1 = 3;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)piVar3 + (long)*piVar3);
    func_0x000107c6157c(uVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102788064;
  }
                    /* WARNING: Could not recover jumptable at 0x000102788060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102788064; end: 102788127;  */

void FUN_102788064(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    uVar1 = 0x1027880c0;
  }
  else {
    uVar1 = 0x1027880f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102788128; end: 10278813f;  */

void FUN_102788128(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102788140,0,0);
  return;
}



/* Entry: 102788140; end: 102788213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102788140(undefined1 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebda40);
  piVar4 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x18) = piVar4;
  uVar5 = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102788214;
                    /* WARNING: Could not recover jumptable at 0x0001027881c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar4 + (long)iVar2))();
    return;
  }
  func_0x000102787bcc();
  func_0x000107c613f8(&UNK_110548048,param_1,0,0);
  *param_1 = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102788210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102788214; end: 102788283;  */

void FUN_102788214(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x38) = param_1 & 1;
    pcVar1 = FUN_102788284;
  }
  else {
    pcVar1 = (code *)0x1027882bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102788284; end: 1027882f3;  */

void FUN_102788284(void)

{
  long unaff_x22;
  
  func_0x000100d04d60(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001027882b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 1027882f4; end: 10278830f;  */

void FUN_1027882f4(undefined1 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102788310,0,0);
  return;
}


