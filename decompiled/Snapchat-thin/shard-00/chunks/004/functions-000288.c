/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10063bba0; end: 10063bba7; -[SCSyncedFeedEntriesUpdateEvent queryTriggered] */

undefined1 FUN_10063bba0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10063bba8; end: 10063bc6f; -[SCSyncedFeedEntriesUpdateEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010063bbc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010063bbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010063bbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010063bbdc) */
/* WARNING: Removing unreachable block (ram,0x00010063bbc4) */
/* WARNING: Removing unreachable block (ram,0x00010063bbf4) */

void FUN_10063bba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 10063bc70; end: 10063bcdb;  */

undefined ** FUN_10063bc70(void)

{
  return &PTR_DAT_110cfa2f0;
}



/* Entry: 10063bcdc; end: 10063bd53;  */

undefined8 * FUN_10063bcdc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110cfa2b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10063bed0(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x50);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 10063bd54; end: 10063be47;  */

void FUN_10063bd54(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  piVar2 = param_2;
  FUN_10055e610(param_2,puVar3,uVar1,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = param_2;
    FUN_10055e6e8(param_2,*param_2 + 1);
    if ((int)piVar2 != 0) {
      uVar1 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      FUN_10055e610(param_2,puVar3,uVar1,0);
    }
    piVar2 = param_2;
    func_0x00010055df10(param_2,0x28);
    FUN_10063bf24(piVar2 + 2,*(undefined8 *)(param_2 + 6),param_3);
    piVar2[8] = 0;
    piVar2[9] = 0;
    func_0x00010055e950(param_2,puVar3,piVar2);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar2;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)puVar3;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 10063be48; end: 10063becf;  */

void FUN_10063be48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uStack_58;
  long lStack_50;
  uint uStack_48;
  long alStack_40 [4];
  
  uStack_48 = *(uint *)(param_2 + 0xc);
  if (uStack_48 != *(uint *)(param_2 + 4)) {
    uStack_58 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_48 * 8);
    lStack_50 = param_2;
    if ((uStack_58 & 1) != 0) {
      uStack_58 = *(ulong *)(**(long **)(uStack_58 - 1) + 0x20);
    }
    do {
      uVar1 = *(undefined8 *)(uStack_58 + 0x20);
      FUN_10063bd54(alStack_40,param_1,uStack_58 + 8);
      *(undefined8 *)(alStack_40[0] + 0x20) = uVar1;
      func_0x00010063bf60(&uStack_58);
    } while (uStack_58 != 0);
  }
  return;
}



/* Entry: 10063bed0; end: 10063bf23;  */

undefined8 * FUN_10063bed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_10063be48(param_1,param_3);
  return param_1;
}



/* Entry: 10063bf24; end: 10063bf57;  */

void FUN_10063bf24(long param_1,long *param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  
  func_0x000107c60c94(param_1,param_3);
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_1 != 0) {
    func_0x00010b4d7468();
    lVar1 = param_2[1];
    if (0xf < (ulong)(lVar1 - *param_2)) {
      param_2[1] = lVar1 + -0x10;
      if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
        func_0x00010b4d826c();
        for (uVar2 = extraout_x9_00; extraout_x10_00 < uVar2; uVar2 = uVar2 - 0x40) {
          Hint_Prefetch(uVar2,2,0,0);
        }
        param_2[3] = uVar2;
        lVar1 = extraout_x8_00;
      }
      *(long *)(lVar1 + -0x10) = param_1;
      *(undefined **)(lVar1 + -8) = &UNK_104c611dc;
      return;
    }
    func_0x00010b4d74c4();
    lVar1 = param_2[1];
    param_2[1] = lVar1 + -0x10;
    if (((lVar1 + -0x10) - param_2[3] < 0x181) && ((ulong)param_2[2] < (ulong)param_2[3])) {
      func_0x00010b4d826c();
      for (uVar2 = extraout_x9; extraout_x10 < uVar2; uVar2 = uVar2 - 0x40) {
        Hint_Prefetch(uVar2,2,0,0);
      }
      param_2[3] = uVar2;
      lVar1 = extraout_x8;
    }
    *(long *)(lVar1 + -0x10) = param_1;
    *(undefined **)(lVar1 + -8) = &UNK_104c611dc;
    return;
  }
  return;
}



/* Entry: 10063bf58; end: 10063bfcf;  */

void FUN_10063bf58(void)

{
  return;
}



/* Entry: 10063bfd0; end: 10063c003;  */

long FUN_10063bfd0(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_10063c288(param_1 + 0x10);
  return param_1;
}



/* Entry: 10063c004; end: 10063c287;  */

/* WARNING: Possible PIC construction at 0x00010063c0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010063c1b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010063c0d0) */
/* WARNING: Removing unreachable block (ram,0x00010063c1b4) */

void FUN_10063c004(code *param_1,undefined8 *param_2,code *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *extraout_x8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *unaff_x19;
  undefined8 *unaff_x20;
  code *unaff_x21;
  code *pcVar13;
  code *unaff_x22;
  code *pcVar14;
  code *unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  code *unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffb0;
  puVar15 = &stack0xfffffffffffffff0;
  pcVar9 = (code *)((ulong)param_2 >> 0x20 & 0xff);
  bVar3 = false;
  bVar4 = true;
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar4 = 7 < (uint)pcVar9;
    bVar3 = (uint)pcVar9 == 8;
  }
  if (!bVar4 || bVar3) {
LAB_10063c084:
    puVar6 = &UNK_10e5b4000;
    goto code_r0x00010063c088;
  }
  goto code_r0x00010063c038;
code_r0x00010063c088:
  puVar6 = puVar6 + 0xa08;
  lVar12 = 0x10063c038;
code_r0x00010063c090:
  lVar12 = lVar12 + (ulong)(byte)pcVar9[(long)puVar6] * 4;
code_r0x00010063c098:
  pcVar8 = param_1;
  puVar7 = param_2;
  pcVar13 = unaff_x21;
  pcVar14 = unaff_x22;
  switch(lVar12) {
  case 0x10055ea88:
    goto FUN_10055ea88;
  case 0x10063c038:
    break;
  case 0x10063c03c:
    goto code_r0x00010063c03c;
  case 0x10063c040:
    goto code_r0x00010063c040;
  case 0x10063c044:
    goto code_r0x00010063c044;
  case 0x10063c048:
    goto code_r0x00010063c048;
  case 0x10063c04c:
    goto code_r0x00010063c04c;
  case 0x10063c050:
    goto code_r0x00010063c050;
  case 0x10063c054:
    goto code_r0x00010063c054;
  case 0x10063c058:
    goto code_r0x00010063c058;
  case 0x10063c060:
    goto LAB_10063c060;
  case 0x10063c064:
    goto LAB_10063c064;
  case 0x10063c074:
    goto LAB_10063c074;
  case 0x10063c080:
    return;
  case 0x10063c084:
    goto LAB_10063c084;
  case 0x10063c088:
    goto code_r0x00010063c088;
  case 0x10063c090:
    goto code_r0x00010063c090;
  case 0x10063c098:
    goto code_r0x00010063c098;
  case 0x10063c09c:
    pcVar13 = *(code **)(param_1 + 0x10);
    pcVar14 = (code *)(ulong)*(uint *)(param_1 + 0xc);
    unaff_x23 = (code *)(ulong)*(uint *)(param_1 + 4);
    goto code_r0x00010063c0a8;
  case 0x10063c0b0:
    goto code_r0x00010063c0b0;
  case 0x10063c0e0:
    func_0x000107c39c34();
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      pcVar13 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
      if (((ulong)*(code **)(unaff_x22 + (long)unaff_x23 * 8) & 1) != 0) {
        func_0x000107c39c30();
        pcVar13 = pcVar8;
      }
code_r0x00010063c118:
      while (pcVar13 != (code *)0x0) {
code_r0x00010063c100:
        unaff_x26 = *(code **)pcVar13;
        pcVar8 = pcVar13 + 8;
code_r0x00010063c108:
        func_0x000107c60ca0();
        func_0x000107c39c3c();
code_r0x00010063c110:
        FUN_10063c2d0();
        pcVar13 = unaff_x26;
      }
    }
    break;
  case 0x10063c100:
    goto code_r0x00010063c100;
  case 0x10063c108:
    goto code_r0x00010063c108;
  case 0x10063c110:
    goto code_r0x00010063c110;
  case 0x10063c118:
    goto code_r0x00010063c118;
  case 0x10063c124:
    pcVar14 = *(code **)(param_1 + 0x10);
    unaff_x24 = (code *)(ulong)*(uint *)(param_1 + 4);
    for (unaff_x23 = (code *)(ulong)*(uint *)(param_1 + 0xc); unaff_x23 < unaff_x24;
        unaff_x23 = unaff_x23 + 1) {
      pcVar13 = *(code **)(pcVar14 + (long)unaff_x23 * 8);
      if (((ulong)*(code **)(pcVar14 + (long)unaff_x23 * 8) & 1) != 0) {
        func_0x000107c39c30();
code_r0x00010063c144:
        pcVar13 = pcVar8;
      }
      while (pcVar13 != (code *)0x0) {
code_r0x00010063c14c:
        pcVar8 = pcVar13 + 8;
        unaff_x25 = *(code **)pcVar13;
        func_0x000107c60ca0();
        FUN_10063c2d0();
code_r0x00010063c15c:
        pcVar13 = unaff_x25;
      }
    }
    break;
  case 0x10063c144:
    goto code_r0x00010063c144;
  case 0x10063c14c:
    goto code_r0x00010063c14c;
  case 0x10063c15c:
    goto code_r0x00010063c15c;
  case 0x10063c16c:
    pcVar13 = param_3;
  case 0x10063c170:
    unaff_x23 = *(code **)(param_1 + 0x10);
    unaff_x24 = (code *)(ulong)*(uint *)(param_1 + 0xc);
    unaff_x25 = (code *)(ulong)*(uint *)(param_1 + 4);
    goto code_r0x00010063c17c;
  case 0x10063c184:
    goto code_r0x00010063c184;
  case 0x10063c1a0:
    goto code_r0x00010063c1a0;
  case 0x10063c1bc:
    goto code_r0x00010063c1bc;
  case 0x10063c1c0:
    goto code_r0x00010063c1c0;
  case 0x10063c1c4:
    func_0x000107c39c34();
  case 0x10063c1c8:
    goto code_r0x00010063c1c8;
  case 0x10063c1cc:
    goto code_r0x00010063c1cc;
  case 0x10063c1d0:
    goto code_r0x00010063c1d0;
  case 0x10063c1d4:
    goto code_r0x00010063c1d4;
  case 0x10063c1e8:
    goto code_r0x00010063c1e8;
  case 0x10063c1ec:
    goto code_r0x00010063c1ec;
  case 0x10063c1f0:
    goto code_r0x00010063c1f0;
  case 0x10063c1f4:
    goto code_r0x00010063c1f4;
  case 0x10063c1f8:
    goto code_r0x00010063c1f8;
  case 0x10063c200:
    goto code_r0x00010063c200;
  case 0x10063c204:
    func_0x000107c39c34();
  case 0x10063c208:
    goto code_r0x00010063c208;
  case 0x10063c20c:
    goto code_r0x00010063c20c;
  case 0x10063c21c:
    goto code_r0x00010063c21c;
  case 0x10063c24c:
    pcVar9 = param_1;
    func_0x000107c39c34();
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      pcVar14 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
      if (((ulong)*(code **)(unaff_x22 + (long)unaff_x23 * 8) & 1) != 0) {
        func_0x000107c39c30();
        pcVar14 = pcVar9;
      }
      while (pcVar14 != (code *)0x0) {
        pcVar14 = *(code **)pcVar14;
        func_0x000107c39c3c();
        FUN_10063c2d0();
      }
    }
  }
  goto code_r0x00010063c038;
code_r0x00010063c17c:
  if (unaff_x25 <= unaff_x24) goto code_r0x00010063c038;
code_r0x00010063c184:
  pcVar14 = *(code **)(unaff_x23 + (long)unaff_x24 * 8);
  if (((ulong)pcVar14 & 1) != 0) {
    pcVar9 = pcVar14 + -1;
    pcVar14 = param_1;
    func_0x000107c30314(param_1,pcVar9);
  }
  if (pcVar14 != (code *)0x0) goto code_r0x00010063c1a0;
code_r0x00010063c1bc:
  unaff_x24 = unaff_x24 + 1;
code_r0x00010063c1c0:
  goto code_r0x00010063c17c;
code_r0x00010063c1a0:
  (*pcVar13)(pcVar14);
  goto code_r0x000107c60e14;
code_r0x00010063c208:
  while( true ) {
    bVar4 = unaff_x25 <= unaff_x23;
code_r0x00010063c20c:
    if (bVar4) break;
    pcVar9 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
    if (((ulong)*(code **)(unaff_x22 + (long)unaff_x23 * 8) & 1) != 0) {
      func_0x000107c39c30();
code_r0x00010063c21c:
      pcVar9 = pcVar8;
    }
    while (pcVar9 != (code *)0x0) {
      pcVar14 = *(code **)pcVar9;
      func_0x000107c60ca0(pcVar9 + 8);
      pcVar8 = pcVar9 + (long)unaff_x24;
      func_0x000107c60ca0();
      FUN_10063c2d0();
      pcVar9 = pcVar14;
    }
    unaff_x23 = unaff_x23 + 1;
  }
  goto code_r0x00010063c038;
code_r0x00010063c1c8:
  while( true ) {
    bVar4 = unaff_x25 <= unaff_x23;
code_r0x00010063c1cc:
    if (bVar4) break;
code_r0x00010063c1d0:
    pcVar13 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
code_r0x00010063c1d4:
    if (((ulong)pcVar13 & 1) != 0) {
      func_0x000107c39c30();
      pcVar13 = pcVar8;
    }
code_r0x00010063c1f8:
    while (pcVar13 != (code *)0x0) {
      unaff_x26 = *(code **)pcVar13;
code_r0x00010063c1e8:
      pcVar8 = pcVar13 + (long)unaff_x24;
code_r0x00010063c1ec:
      func_0x000107c60ca0();
code_r0x00010063c1f0:
      FUN_10063c2d0();
code_r0x00010063c1f4:
      pcVar13 = unaff_x26;
    }
    unaff_x23 = unaff_x23 + 1;
code_r0x00010063c200:
  }
code_r0x00010063c038:
  puVar7 = *(undefined8 **)(param_1 + 0x10);
code_r0x00010063c03c:
  param_3 = (code *)(ulong)*(uint *)(param_1 + 4);
  goto code_r0x00010063c040;
code_r0x00010063c0a8:
  if (unaff_x23 <= pcVar14) goto code_r0x00010063c038;
code_r0x00010063c0b0:
  pcVar9 = *(code **)(pcVar13 + (long)pcVar14 * 8);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar8 = pcVar9 + -1;
    pcVar9 = param_1;
    func_0x000107c30314(param_1,pcVar8);
  }
  if (pcVar9 != (code *)0x0) goto code_r0x000107c60e14;
  pcVar14 = pcVar14 + 1;
  goto code_r0x00010063c0a8;
code_r0x00010063c040:
  uVar10 = (ulong)param_2 >> 0x28;
  param_2 = puVar7;
  if ((uVar10 & 1) != 0) {
LAB_10063c060:
    pcVar9 = param_3;
    goto LAB_10063c064;
  }
  goto code_r0x00010063c044;
LAB_10063c064:
  while (0 < (long)pcVar9) {
    *param_2 = 0;
    param_2 = param_2 + 1;
    pcVar9 = pcVar9 + -1;
  }
  goto LAB_10063c074;
code_r0x00010063c044:
code_r0x00010063c048:
  puVar15 = unaff_x29;
code_r0x00010063c04c:
  pcVar8 = unaff_x19;
  puVar7 = unaff_x20;
code_r0x00010063c050:
code_r0x00010063c054:
code_r0x00010063c058:
  puVar2 = (undefined1 *)register0x00000008;
  goto FUN_10055ea88;
LAB_10063c074:
  *(undefined4 *)param_1 = 0;
  *(int *)(param_1 + 0xc) = (int)param_3;
  return;
FUN_10055ea88:
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    ppuVar5 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar5[1] == (undefined *)*extraout_x8) {
      lVar12 = ((ulong)param_3 & 0xffffffff) * 8;
      puVar6 = ppuVar5[2];
      *(code **)(puVar2 + -0x30) = unaff_x22;
      *(code **)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar2 + -0x20) = puVar7;
      *(code **)(puVar2 + -0x18) = pcVar8;
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      uVar10 = 0x3b - LZCOUNT(lVar12);
      bVar1 = puVar6[0x50];
      if (uVar10 < bVar1) {
        lVar12 = *(long *)(puVar6 + 0x58);
        *param_2 = *(undefined8 *)(lVar12 + uVar10 * 8);
        *(undefined8 **)(lVar12 + uVar10 * 8) = param_2;
      }
      else {
        if (bVar1 == 0) {
          lVar11 = 0;
        }
        else {
          _memmove(param_2,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar1 << 3);
          lVar11 = (ulong)(byte)puVar6[0x50] << 3;
        }
        uVar10 = (ulong)param_3 & 0xffffffff;
        if (0 < lVar12 - lVar11) {
          _bzero((long)param_2 + lVar11);
        }
        *(undefined8 **)(puVar6 + 0x58) = param_2;
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
        puVar6[0x50] = (char)uVar10;
      }
      return;
    }
    return;
  }
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10063c288; end: 10063c2cf;  */

long FUN_10063c288(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    FUN_10063c004(param_1,0x100280020,0);
  }
  return param_1;
}



/* Entry: 10063c2d0; end: 10063c2d7;  */

void FUN_10063c2d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10063c2d8; end: 10063c3fb; -[SCFeedEntriesUpdateEvent initWithUpdatedFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:] */

undefined1 *
FUN_10063c2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112703b50;
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



/* Entry: 10063c3fc; end: 10063c447;  */

void FUN_10063c3fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x338;
  func_0x000107c60e20();
  FUN_10063c458();
  *param_1 = uVar1;
  return;
}



/* Entry: 10063c448; end: 10063c457;  */

void FUN_10063c448(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10063c458; end: 10063d2d3;  */

undefined8 * FUN_10063c458(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 uVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined8 uVar17;
  undefined *puStack_2a0;
  long lStack_298;
  char cStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  long lStack_258;
  undefined1 auStack_248 [120];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char cStack_180;
  undefined8 auStack_158 [2];
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_a0;
  long lStack_98;
  char cStack_90;
  undefined *puStack_80;
  long lStack_78;
  
  lVar15 = param_2[1];
  uVar16 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar16;
  if (lVar15 != 0) {
    do {
      FUN_10063c448();
    } while (extraout_w10 != 0);
  }
  FUN_10054fd30(param_1 + 2,param_1);
  uVar16 = param_2[0x19];
  lVar15 = param_2[0x1a];
  param_1[5] = param_2[0x1a];
  param_1[4] = uVar16;
  if (lVar15 != 0) {
    do {
      FUN_10063c448();
    } while (extraout_w10_00 != 0);
  }
  ppuVar7 = &puStack_120;
  FUN_10002b838(ppuVar7,&UNK_10f74388d);
  FUN_10046e484();
  FUN_10063d5a4(param_1 + 6,&puStack_120,6,ppuVar7,0);
  iVar6 = (int)&puStack_120;
  func_0x000107c60ca0();
  if (*(char *)((long)param_2 + 0x51) == '\x01') {
    FUN_10068210c();
    bVar5 = iVar6 == 0;
  }
  else {
    bVar5 = false;
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((long)param_1 + 0xc1) = 0;
  *(undefined8 *)((long)param_1 + 0xb9) = 0;
  uVar16 = param_2[4];
  param_2[4] = 0;
  param_1[0x1d] = uVar16;
  *(bool *)(param_1 + 0x10) = bVar5;
  param_1[0x11] = 0x32aaaba7;
  param_1[0x1e] = &PTR_DAT_110cd31d8;
  FUN_10063d788(param_1 + 0x1f,param_1 + 2);
  pcVar8 = FUN_100897c84;
  func_0x00010063d764();
  param_1[0x22] = pcVar8;
  func_0x00010063d7f8();
  FUN_10063d7fc(param_1 + 0x23,param_1 + 6);
  func_0x00010063d838(&puStack_1d0);
  puVar9 = (undefined8 *)0x60;
  func_0x000107c60e20();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_110cd3a80;
  puStack_120 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff00);
  uStack_d0 = cStack_180 == '\x01';
  if ((bool)uStack_d0) {
    uStack_118 = uStack_1c8;
    puStack_120 = puStack_1d0;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    uStack_f8 = uStack_1a8;
    uStack_100 = uStack_1b0;
    uStack_f0 = uStack_1a0;
    uStack_e0 = uStack_190;
    uStack_e8 = uStack_198;
    uStack_d8 = uStack_188;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
  }
  FUN_10064a1f8(puVar9 + 3,&puStack_120);
  FUN_10064a094(&puStack_120);
  param_1[0x25] = puVar9 + 3;
  param_1[0x26] = puVar9;
  FUN_10064a094(&puStack_1d0);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar17 = param_1[0x1d];
  uStack_138 = param_2[0xf];
  uStack_140 = param_2[0xe];
  uStack_130 = param_2[0x10];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xe] = 0;
  uVar16 = param_2[9];
  lVar15 = 0xb8;
  func_0x000107c60e20();
  FUN_10064a338();
  bVar1 = *(byte *)(param_3 + 0x4c);
  bVar2 = *(byte *)(param_2 + 0x15);
  lStack_148 = lVar15;
  FUN_10064a8bc();
  FUN_10064a9f4(param_1 + 0x29,param_2,param_1 + 2,param_1 + 6,uVar17,uVar16,&uStack_140,
                param_1 + 0x1e,&lStack_148,param_2 + 0x14,bVar1 & bVar2);
  lVar15 = lStack_148;
  lStack_148 = 0;
  if (lVar15 != 0) {
    func_0x000107c35b54();
  }
  FUN_10063a074(&uStack_140);
  param_1[0x5d] = param_1 + 0x2b;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  param_1[0x5f] = param_2[0x11];
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  uVar16 = param_2[0xb];
  param_1[99] = param_2[0xc];
  param_1[0x62] = uVar16;
  param_1[100] = param_2[0xd];
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  func_0x00010064ad30(param_1[0x5f],param_1[0x2d],param_1[0x22]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    uVar16 = param_1[0x5f];
    plVar10 = (long *)param_2[0x14];
    (**(code **)(*plVar10 + 0x30))();
    FUN_10064b298(uVar16,plVar10,param_1[0x21]);
  }
  puVar9 = (undefined8 *)0x10;
  func_0x000107c60e20();
  FUN_10064b6a4();
  *puVar9 = 0x11383a970;
  puVar11 = &UNK_10b2e3aa4;
  FUN_10064b9b4();
  puVar9[1] = puVar11;
  func_0x00010064b9d8();
  puStack_120 = (undefined *)0x0;
  FUN_10064b9dc(param_1 + 0x66,puVar9);
  FUN_10064ba00(&puStack_120);
  FUN_10064ba28(param_1[0x5f],*(undefined8 *)(param_1[0x66] + 8),param_1[0x21]);
  uStack_118 = param_1[0x26];
  puStack_120 = (undefined *)param_1[0x25];
  if (param_1[0x26] != 0) {
    do {
      FUN_10063c448();
    } while (extraout_w10_01 != 0);
  }
  FUN_10064ba80();
  (*extraout_x8)();
  func_0x00010064bbb4();
  FUN_100100ed0(auStack_158);
  puVar9 = auStack_158;
  FUN_10064bbf4();
  puVar13 = puVar9;
  func_0x00010064c310();
  FUN_10064c318(&puStack_120,0,puVar9);
  *puVar13 = &PTR_DAT_110cfa048;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar4 = uStack_118;
  if ((uStack_118 & 1) != 0) {
    uVar4 = *(ulong *)(uStack_118 & 0xfffffffffffffffe);
  }
  if (uVar4 == 0) {
    puVar13[1] = uStack_118;
    uStack_118 = 0;
    *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_110;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puVar13[3] = uStack_108;
    uStack_108 = 0;
  }
  else {
    func_0x000107c304d8(puVar13,&puStack_120);
  }
  FUN_10064c394(&puStack_120);
  puStack_1d0 = (undefined *)0x0;
  FUN_10064c3e4(param_1 + 0x65,puVar13);
  FUN_10064c40c(&puStack_1d0);
  puVar9 = auStack_158;
  FUN_10064c42c();
  puVar13 = auStack_158;
  FUN_10064d830();
  puVar12 = auStack_158;
  FUN_10064e144();
  if ((int)puVar12 == 0) {
    FUN_10064c520(&puStack_1d0);
    FUN_10064c520(auStack_248);
    if (*(int *)(puVar13 + 0xe) < 1) {
      puStack_120 = &UNK_10f74389e;
      uStack_118 = 0x2d4;
      FUN_100651b48(&puStack_120,&puStack_1d0);
    }
    else {
      FUN_10064e6f4(&puStack_1d0,puVar13);
    }
    if (*(int *)(puVar9 + 0xe) < 1) {
      puStack_120 = &UNK_10f743b73;
      uStack_118 = 0x44;
      FUN_100651b48(&puStack_120,auStack_248);
    }
    else {
      FUN_10064e6f4(auStack_248,puVar9);
    }
    FUN_10064f01c(&uStack_260,auStack_248);
    FUN_10064f01c(auStack_270,&puStack_1d0);
    FUN_100100ed0(&puStack_a0);
    ppuVar7 = &puStack_a0;
    FUN_100650da0();
    FUN_10064c520(&puStack_120);
    if (*(int *)(ppuVar7 + 0xe) < 1) {
      puStack_80 = &UNK_10f74389e;
      lStack_78 = 0x2d4;
      FUN_100651b48(&puStack_80,&puStack_120);
    }
    else {
      FUN_10064e6f4(&puStack_120,ppuVar7);
    }
    FUN_10064f01c(&puStack_80,&puStack_120);
    lStack_298 = lStack_78;
    puStack_2a0 = puStack_80;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    cStack_290 = '\x01';
    FUN_100651f94(&puStack_80);
    FUN_100650c6c(&puStack_120);
    FUN_1000df75c(&puStack_a0);
    puVar9 = (undefined8 *)0xb0;
    func_0x000107c60e20();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_DAT_110cd3b70;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    cStack_90 = '\0';
    if (cStack_290 == '\x01') {
      lStack_98 = lStack_298;
      puStack_a0 = puStack_2a0;
      if (lStack_298 != 0) {
        do {
          FUN_10063c448();
        } while (extraout_w10_02 != 0);
      }
      cStack_90 = '\x01';
    }
    FUN_100652020(puVar9 + 3);
    puVar9[3] = &PTR_DAT_110cd4438;
    puVar9[4] = &PTR_DAT_110cd4488;
    puVar9[7] = &PTR_DAT_110cd44b0;
    uVar17 = 0x38;
    func_0x000107c60e20();
    uVar16 = uVar17;
    FUN_100654a4c();
    puVar9[8] = uVar17;
    func_0x000100654eb0();
    FUN_100654eb8();
    puVar9[9] = uVar16;
    uVar16 = 0x28;
    func_0x000107c60e20();
    FUN_100665a4c();
    puVar9[10] = uVar16;
    puVar13 = (undefined8 *)0x120;
    func_0x000107c60e20();
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar12 = puVar13 + 3;
    *puVar13 = &PTR_DAT_110cd3bc0;
    FUN_100652020();
    puVar13[9] = 0;
    puVar13[3] = &PTR_DAT_110cd3e98;
    puVar13[4] = &PTR_DAT_110cd3ee8;
    puVar13[7] = &PTR_DAT_110cd3f10;
    puVar13[8] = 0x100000004;
    puVar13[0xb] = lStack_258;
    puVar13[10] = uStack_260;
    if (lStack_258 != 0) {
      do {
        FUN_10063c448();
      } while (extraout_w10_03 != 0);
    }
    uVar16 = param_2[0x12];
    puVar13[0xd] = param_2[0x13];
    puVar13[0xc] = uVar16;
    if (param_2[0x13] != 0) {
      do {
        FUN_10063c448();
      } while (extraout_w10_04 != 0);
    }
    puVar13[0x1c] = 0x32aaaba7;
    *(undefined4 *)(puVar13 + 0xe) = 7;
    puVar13[0x10] = 0;
    puVar13[0xf] = 0;
    puVar13[0x15] = 0;
    puVar13[0x14] = puVar13 + 0x15;
    puVar13[0x16] = 0;
    puVar13[0x12] = 0;
    puVar13[0x11] = 0;
    puVar13[0x13] = 0;
    puVar13[0x18] = 0;
    puVar13[0x17] = 0;
    puVar13[0x1a] = 0;
    puVar13[0x19] = 0;
    *(undefined4 *)(puVar13 + 0x1b) = 0x3f800000;
    puVar13[0x1e] = 0;
    puVar13[0x1d] = 0;
    puVar13[0x20] = 0;
    puVar13[0x1f] = 0;
    puVar13[0x22] = 0;
    puVar13[0x21] = 0;
    puVar13[0x23] = 0;
    puVar14 = (undefined8 *)0x58;
    func_0x000107c60e20();
    puVar14[2] = puVar14 + 2;
    puVar14[3] = puVar14 + 2;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[7] = 0;
    puVar14[6] = 0;
    puVar14[8] = 0;
    *(undefined4 *)(puVar14 + 9) = 0x3f800000;
    puVar14[10] = 100;
    *puVar14 = 10;
    puVar14[1] = &PTR_DAT_110cd3c10;
    puStack_120 = (undefined *)0x0;
    FUN_10066626c(puVar13 + 9);
    FUN_100666284(&puStack_120);
    puVar14 = puVar12;
    FUN_1006662ac();
    puVar9[0xb] = puVar12;
    puVar9[0xc] = puVar13;
    func_0x00010064c310();
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[3] = 0;
    puVar14[2] = 0;
    puVar13 = puVar14;
    FUN_100666bb8();
    plVar10 = puVar9 + 0xe;
    *(undefined1 *)plVar10 = 0;
    puVar9[0xd] = puVar14;
    *(undefined1 *)(puVar9 + 0xf) = 0;
    puVar9[0x12] = 0;
    puVar9[0x11] = 0;
    *(undefined4 *)(puVar9 + 0x10) = 7;
    puVar9[0x14] = 0;
    puVar9[0x13] = 0;
    *(undefined4 *)(puVar9 + 0x15) = 0x3f800000;
    if (*(char *)(param_1 + 0x5e) == '\x01') {
      puVar13 = (undefined8 *)param_1[0x5d];
      uStack_118 = puVar9[0xc];
      puStack_120 = (undefined *)0x0;
      if (puVar9[0xb] != 0) {
        puStack_120 = (undefined *)(puVar9[0xb] + 0x20);
      }
      if (uStack_118 != 0) {
        do {
          FUN_10063c448();
        } while (extraout_w10_05 != 0);
      }
      FUN_10064ba80();
      (*extraout_x8_00)();
      func_0x00010064bbb4();
    }
    if (cStack_90 == '\x01') {
      func_0x000100654eb0();
      FUN_100666be8();
      if (*(char *)(puVar9 + 0xf) == '\x01') {
        lVar15 = *plVar10;
        *plVar10 = (long)puVar13;
        if (lVar15 != 0) {
          func_0x000107c35ae0();
        }
      }
      else {
        puVar9[0xe] = puVar13;
        *(undefined1 *)(puVar9 + 0xf) = 1;
      }
    }
    FUN_100100ed0(&puStack_80);
    FUN_1006678c8(&puStack_120,&puStack_80);
    FUN_100667c1c(puVar9 + 0x11,&puStack_120);
    func_0x00010060f240(&puStack_120);
    FUN_1000df75c(&puStack_80);
    FUN_100667cfc(&puStack_a0);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_118 = param_1[0x61];
    puStack_120 = (undefined *)param_1[0x60];
    param_1[0x60] = puVar9 + 3;
    param_1[0x61] = puVar9;
    FUN_100667d1c(&puStack_120);
    func_0x000100667d40(&uStack_280);
    iVar6 = (int)&puStack_2a0;
    FUN_100667cfc();
    FUN_100667d64();
    if ((iVar6 != 0) && (*(char *)(param_1 + 0x5e) == '\x01')) {
      puStack_120 = (undefined *)param_1[0x60];
      uStack_118 = param_1[0x61];
      if (uStack_118 == 0) {
        puStack_a0 = (undefined *)0x0;
        if (puStack_120 != (undefined *)0x0) {
          puStack_a0 = puStack_120 + 0x20;
        }
      }
      else {
        plVar10 = (long *)(uStack_118 + 8);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puStack_a0 = (undefined *)0x0;
        if (puStack_120 != (undefined *)0x0) {
          puStack_a0 = puStack_120 + 0x20;
        }
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = uStack_118;
      FUN_10064ba80(param_1[0x5d]);
      (*extraout_x8_01)();
      FUN_10064bbc8(&puStack_a0);
      func_0x000100667d40(&puStack_120);
    }
    FUN_100651f94(auStack_270);
    FUN_100651f94(&uStack_260);
    FUN_100650c6c(auStack_248);
    FUN_100650c6c(&puStack_1d0);
    if (param_2[2] != 0) {
      uStack_118 = param_1[0x61];
      puStack_120 = (undefined *)param_1[0x60];
      if (param_1[0x61] != 0) {
        do {
          FUN_10063c448();
        } while (extraout_w10_06 != 0);
      }
      FUN_1006680f4();
      (*extraout_x8_02)();
      FUN_100668368(&puStack_120);
      FUN_1006680f4(param_1[0x60]);
      (*extraout_x8_03)();
    }
  }
  else {
    func_0x000100654eb0();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_DAT_110cd3ad0;
    puVar9 = puVar12 + 3;
    puVar12[4] = 0;
    *puVar9 = 0;
    puVar12[6] = 0;
    puVar12[5] = 0;
    FUN_100666bb8();
    uStack_118 = param_1[0x61];
    puStack_120 = (undefined *)param_1[0x60];
    param_1[0x60] = puVar9;
    param_1[0x61] = puVar12;
    FUN_100667d1c(&puStack_120);
  }
  FUN_10066864c(param_1);
  FUN_1000df75c(auStack_158);
  return param_1;
}



/* Entry: 10063d2d4; end: 10063d4d7; -[SCSnapDocManagerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063d2d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1054d89f8;
  puStack_78 = &UNK_110891180;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_1054d8a38;
  puStack_a0 = &UNK_1108911b0;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_68);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b9f08;
  func_0x000107c610f4(PTR_PTR_1126b9f08);
  func_0x000107c48774();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127248f0));
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10063d4d8; end: 10063d5a3; -[SCSnapDocManagerServices initWithSnapDocManager:snapDocThumbnailResolver:mediaReferenceFactory:] */

undefined1 *
FUN_10063d4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_11270a158;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10063d5a4; end: 10063d657;  */

undefined8 * FUN_10063d5a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  
  *param_1 = &PTR_DAT_110d9a1f8;
  func_0x00010028bd6c(param_1 + 1,in_x4);
  uVar1 = 0x118;
  func_0x000107c60e20();
  FUN_10063d658();
  param_1[3] = uVar1;
  param_1[4] = &UNK_10bcce55c;
  param_1[5] = &PTR_DAT_110873830;
  return param_1;
}



/* Entry: 10063d658; end: 10063d713;  */

undefined8 *
FUN_10063d658(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_DAT_110d9a4f0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  func_0x000107c60c94(param_1 + 8);
  FUN_10028bc78(param_1 + 0xb,param_2,param_3,param_4,0);
  param_1[0x1f] = param_4;
  param_1[0x20] = param_5;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



/* Entry: 10063d714; end: 10063d757;  */

void FUN_10063d714(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10063d758; end: 10063d787;  */

void FUN_10063d758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 10063d788; end: 10063d7e3;  */

undefined8 * FUN_10063d788(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar4 = FUN_100785554;
  func_0x00010063d764();
  param_1[2] = pcVar4;
  func_0x00010063d7f8();
  return param_1;
}



/* Entry: 10063d7e4; end: 10063d7fb;  */

void FUN_10063d7e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = unaff_x19;
  return;
}



/* Entry: 10063d7fc; end: 10063d89f;  */

undefined8 * FUN_10063d7fc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *param_1 = param_2;
  puVar1 = &UNK_10b2e1c5c;
  func_0x00010063d764();
  param_1[1] = puVar1;
  func_0x00010063d7f8();
  return param_1;
}



/* Entry: 10063d8a0; end: 10063dad3;  */

void FUN_10063d8a0(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined *puStack_98;
  uint uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  char cStack_51;
  
  puVar3 = &DAT_10f74285f;
  FUN_10011bfd4(&DAT_10f74285f,0x19,0);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000107c2c778();
  }
  puVar3 = &DAT_10f742879;
  FUN_10063e62c(&DAT_10f742879,0x1b);
  puVar4 = &DAT_10f742895;
  FUN_10063e62c(&DAT_10f742895,0x23);
  puVar5 = &DAT_10f7428b9;
  FUN_10063e62c(&DAT_10f7428b9,0x2a);
  if (((long)puVar3 < 1 || (long)puVar5 < 1) || (long)puVar4 < 1) {
    func_0x000107c2c778();
  }
  fVar9 = 0.5;
  FUN_1005e7160(&DAT_10f7428e4,0x32);
  bVar1 = false;
  bVar2 = false;
  if (fVar9 <= 1.0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 == 0.0;
      bVar2 = 0.0 <= fVar9;
    }
  }
  fVar10 = 0.5;
  if (bVar2 && !bVar1) {
    fVar10 = fVar9;
  }
  puVar6 = &DAT_10f742917;
  FUN_1003ba264(&DAT_10f742917,0x39,2000);
  puVar7 = &DAT_10f742951;
  FUN_10063e62c(&DAT_10f742951,0x38);
  FUN_100100da0(&uStack_68,&UNK_10f74298a,0x33,"",0);
  puVar8 = &uStack_68;
  FUN_100152bb8(puVar8,&UNK_10f7429be);
  if ((int)puVar8 != 0) {
    if (cStack_51 < '\0') {
      *(undefined1 *)CONCAT71(uStack_67,uStack_68) = 0;
      uStack_60 = 0;
    }
    else {
      uStack_68 = 0;
      cStack_51 = '\0';
    }
  }
  uStack_c0 = 1;
  puStack_b8 = puVar3;
  puStack_b0 = puVar4;
  puStack_a8 = puVar5;
  fStack_a0 = fVar10;
  puStack_98 = puVar6;
  uStack_90 = (uint)puVar7 & ((uint)((long)puVar7 >> 0x3f) ^ 0xffffffff);
  func_0x000107c60c94(&uStack_88,&uStack_68);
  uStack_70 = 1;
  uRam000000011383a470 = CONCAT71(uStack_bf,uStack_c0);
  puRam000000011383a478 = puStack_b8;
  puRam000000011383a488 = puStack_a8;
  puRam000000011383a480 = puStack_b0;
  uRam000000011383a490 = CONCAT44(uStack_9c,fStack_a0);
  puRam000000011383a498 = puStack_98;
  uRam000000011383a4a0 = uStack_90;
  if (cRam000000011383a4c0 == '\0') {
    uRam000000011383a4b0 = uStack_80;
    uRam000000011383a4a8 = uStack_88;
    uRam000000011383a4b8 = uStack_78;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    cRam000000011383a4c0 = '\x01';
  }
  else {
    FUN_100066230(0x11383a4a8,&uStack_88);
  }
  FUN_10064a094(&uStack_c0);
  FUN_10064a0c4();
  return;
}



/* Entry: 10063dad4; end: 10063db27; -[SCFeedEntriesUpdateEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010063daec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010063db04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010063daf0) */
/* WARNING: Removing unreachable block (ram,0x00010063db08) */

void FUN_10063dad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10063db28; end: 10063db6b; -[SCNMessagingFeedUpdateMetadata .cxx_destruct] */

void FUN_10063db28(long param_1)

{
  FUN_10063db6c(param_1 + 0x28);
  FUN_10063db6c(param_1 + 0x20);
  FUN_10063db6c(param_1 + 0x18);
  FUN_10063db6c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10063db6c; end: 10063db7b;  */

void FUN_10063db6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10063db7c; end: 10063dbcf;  */

void FUN_10063db7c(undefined8 *param_1)

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



/* Entry: 10063dbd0; end: 10063dbdb;  */

void FUN_10063dbd0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
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
  FUN_10020fc40();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a84d0;
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
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10063dbdc; end: 10063de93;  */

void FUN_10063dbdc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10020fc40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a84d0;
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
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10063de94; end: 10063e07f; -[SCMediaImportServiceProvider provide] */

void FUN_10063de94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1056057fc;
  puStack_70 = &UNK_11089fbb0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(puVar1);
  puStack_68 = puVar1;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_90,auStack_58);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bc400;
  func_0x000107c610f4(PTR_PTR_1126bc400);
  func_0x000107c494c4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_68);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10063e080; end: 10063e0af; -[SCNMessagingFeedUpdateTypeMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010063e098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010063e09c) */

void FUN_10063e080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10063e0b0; end: 10063e0d3; -[SCNMessagingPrefetchFeedUpdateMetadata .cxx_destruct] */

void FUN_10063e0b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10063e0d4; end: 10063e0f7;  */

long FUN_10063e0d4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000100558874();
  FUN_10054fff0();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10063e0f8; end: 10063e14b;  */

void FUN_10063e0f8(undefined8 param_1,int *param_2,ulong *param_3,undefined8 *param_4)

{
  uint in_w8;
  uint in_w9;
  ulong uVar1;
  
  uVar1 = CONCAT44(in_w8 - in_w9,in_w9);
  *param_3 = uVar1 ^ (uVar1 ^ 0xffffffff00000000) &
                     CONCAT44(-(uint)(in_w8 == in_w9),-(uint)(in_w8 == in_w9));
  *param_4 = CONCAT44(*param_2 + ~in_w8 + param_2[1],in_w8 + 1);
  return;
}



/* Entry: 10063e14c; end: 10063e1ef; -[SCMediaVideoImportServices initWithVideoImporter:imageImporter:] */

undefined1 *
FUN_10063e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701fd0;
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



/* Entry: 10063e1f0; end: 10063e22b;  */

void FUN_10063e1f0(void)

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



/* Entry: 10063e22c; end: 10063e233;  */

void FUN_10063e22c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063e234; end: 10063e287;  */

void FUN_10063e234(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063e288; end: 10063e297;  */

void FUN_10063e288(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10023cce0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a86d8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1d180);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10063e298; end: 10063e5cf;  */

void FUN_10063e298(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10023cce0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a86d8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1d180);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10063e5d0; end: 10063e5d7;  */

void FUN_10063e5d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063e5d8; end: 10063e62b;  */

void FUN_10063e5d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063e62c; end: 10063e633;  */

void FUN_10063e62c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1003ba19c(0x40,1,param_1,param_2,&uStack_18,0);
  return;
}



/* Entry: 10063e634; end: 10063ec27;  */

void FUN_10063e634(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_10023c9ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar11 = PTR_PTR_1126a80f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4130);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc4150);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4170);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4190);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc41b0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc41d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c8a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc41f0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(puVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(undefined **)(param_2 + 0x60) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063ec28);
  (*pcVar1)();
}



/* Entry: 10063ec28; end: 10063ec5b;  */

void FUN_10063ec28(void)

{
  long unaff_x20;
  
  FUN_10063e634(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10063ec5c; end: 10063ec63;  */

void FUN_10063ec5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063ec64; end: 10063ecb7;  */

void FUN_10063ec64(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063ecb8; end: 10063ecbf;  */

void FUN_10063ecb8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cf428();
  func_0x000107c613fc();
  func_0x00010063ed20(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10063ecc0; end: 10063ede7;  */

void FUN_10063ecc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cf428();
  func_0x000107c613fc();
  func_0x00010063ed20(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 10063ede8; end: 10063ee83; -[SCGiphyStickerInjectorServiceProvider provide] */

void FUN_10063ede8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896550);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba818;
  func_0x000107c610f4(PTR_PTR_1126ba818);
  func_0x000107c46294();
  puVar3 = PTR_PTR_1126ba890;
  func_0x000107c610f4(PTR_PTR_1126ba890);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10063ee84; end: 10063ef47; -[SCStickerTypeInjectorConfig initWithCtpEntityType:ctItemInstanceType:stickerTypes:sojuGalleryStickerTypes:] */

undefined1 *
FUN_10063ee84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127023b8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10063ef48; end: 10063efeb; -[SCGiphyStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10063ef48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda40;
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



/* Entry: 10063efec; end: 10063eff3;  */

void FUN_10063efec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063eff4; end: 10063f047;  */

void FUN_10063eff4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063f048; end: 10063f04f;  */

void FUN_10063f048(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cd180();
  func_0x000107c613fc();
  func_0x00010063f0b0(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10063f050; end: 10063f177;  */

void FUN_10063f050(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cd180();
  func_0x000107c613fc();
  func_0x00010063f0b0(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 10063f178; end: 10063f213; -[SCCustomStickerInjectorServiceProvider provide] */

void FUN_10063f178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896510);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba818;
  func_0x000107c610f4(PTR_PTR_1126ba818);
  func_0x000107c46294();
  puVar3 = PTR_PTR_1126ba848;
  func_0x000107c610f4(PTR_PTR_1126ba848);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10063f214; end: 10063f2b7; -[SCCustomStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10063f214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda30;
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



/* Entry: 10063f2b8; end: 10063f2bf;  */

void FUN_10063f2b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063f2c0; end: 10063f313;  */

void FUN_10063f2c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063f314; end: 10063f31b;  */

void FUN_10063f314(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cea30();
  func_0x000107c613fc();
  func_0x00010063f37c(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10063f31c; end: 10063f443;  */

void FUN_10063f31c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cea30();
  func_0x000107c613fc();
  func_0x00010063f37c(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 10063f444; end: 10063f4df; -[SCEmojiStickerInjectorServiceProvider provide] */

void FUN_10063f444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896530);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba818;
  func_0x000107c610f4(PTR_PTR_1126ba818);
  func_0x000107c46294();
  puVar3 = PTR_PTR_1126ba868;
  func_0x000107c610f4(PTR_PTR_1126ba868);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10063f4e0; end: 10063f583; -[SCEmojiStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10063f4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda38;
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



/* Entry: 10063f584; end: 10063f58b;  */

void FUN_10063f584(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063f58c; end: 10063f5df;  */

void FUN_10063f58c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10063f5e0; end: 10063f62b;  */

void FUN_10063f5e0(void)

{
  long unaff_x20;
  
  FUN_10063f7b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 10063f62c; end: 10063f7af;  */

void FUN_10063f62c(long param_1)

{
  long unaff_x21;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_78 = param_1 + 0x20;
  lStack_48 = unaff_x21 + 0x48;
  lStack_80 = param_1 + 0x68;
  lStack_70 = param_1 + 0x40;
  lStack_68 = param_1 + 0x6c;
  lStack_60 = param_1 + 0x78;
  lStack_58 = param_1 + 0x140;
  lStack_50 = param_1 + 0x70;
  func_0x0001001c4f28(&lStack_48,&lStack_80);
  return;
}



/* Entry: 10063f7b0; end: 10064044b;  */

void FUN_10063f7b0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_10022c4d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  puVar1 = PTR_PTR_1126a80b8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174(uStack_f8);
  uVar19 = uStack_100;
  func_0x000107c61174(uStack_100);
  uVar20 = uStack_108;
  func_0x000107c61174();
  uVar21 = uStack_110;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar22 = auStack_70[0];
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc3e50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3e80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd00000000000001b;
  uVar23 = uVar26;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc3ea0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3ec0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar23 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3ee0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar23 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3f10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3f30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar25 = 0xd00000000000001c;
  uVar23 = uVar25;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc3f50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3f70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3fb0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc3fd0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4000);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar25);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc4020);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efc4050);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc4080);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc40a0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc40c0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar26);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc40e0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc4110);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  uVar23 = uVar24;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  *(undefined8 *)(param_2 + 0xb8) = uVar23;
  *param_1 = param_2;
  return;
}



/* Entry: 10064044c; end: 100640453;  */

void FUN_10064044c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100640454; end: 1006404a7;  */

void FUN_100640454(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006404a8; end: 1006404af;  */

void FUN_1006404a8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001c9bb0();
  func_0x000107c613fc();
  func_0x000100640510(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006404b0; end: 1006405d7;  */

void FUN_1006404b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001c9bb0();
  func_0x000107c613fc();
  func_0x000100640510(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1006405d8; end: 100640a6f;  */

void FUN_1006405d8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006405e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}



/* Entry: 100640a70; end: 100640b07; -[SCAttachmentStickerInjectorServiceProvider provide] */

void FUN_100640a70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108965d0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126ba928;
  func_0x000107c610f4(PTR_PTR_1126ba928);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100640b08; end: 100640b6b; -[SCInfoStickerTypeInjectorConfig initWithCtpInfoStickerType:scCTPInfoStickerType:infoStickerType:sojuGalleryInfoFilterType:] */

void FUN_100640b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112702398;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 100640b6c; end: 10064105f;  */

void FUN_100640b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x788;
  func_0x000107c60e20();
  func_0x000100640cb8();
  *param_1 = uVar1;
  return;
}



/* Entry: 100641060; end: 100641103; -[SCAttachmentStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100641060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda50;
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



/* Entry: 100641104; end: 100641f6f;  */

undefined * FUN_100641104(void)

{
  undefined *puVar1;
  long *unaff_x23;
  
  func_0x000100173188();
  if (*unaff_x23 != 0) {
    return (undefined *)(*unaff_x23 + 0x20);
  }
  func_0x000107c60ebc();
  puVar1 = PTR_FUN_11336f918;
                    /* WARNING: Could not recover jumptable at 0x000100641154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_11336f918)();
  return puVar1;
}



/* Entry: 100641f70; end: 100641f77;  */

void FUN_100641f70(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100641f78; end: 100641fcb;  */

void FUN_100641f78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100641fcc; end: 1006426a3;  */

void FUN_100641fcc(void)

{
  return;
}



/* Entry: 1006426a4; end: 1006426af;  */

void FUN_1006426a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10021a644();
  func_0x000107c613fc();
  FUN_1006438a0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006426b0; end: 100642743;  */

void FUN_1006426b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10021a644();
  func_0x000107c613fc();
  FUN_1006438a0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100642744; end: 1006429a7;  */

void FUN_100642744(void)

{
  return;
}



/* Entry: 1006429a8; end: 1006429af;  */

void FUN_1006429a8(undefined8 *param_1)

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



/* Entry: 1006429b0; end: 100642a03;  */

void FUN_1006429b0(undefined8 *param_1)

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



/* Entry: 100642a04; end: 100642a0f;  */

void FUN_100642a04(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001ddf34();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100642ac0(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100642a10; end: 100642abf;  */

void FUN_100642a10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001ddf34();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100642ac0(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100642ac0; end: 100642cfb;  */

void FUN_100642ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8448;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc8360);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100642cfc);
  (*pcVar1)();
}



/* Entry: 100642cfc; end: 100643643;  */

void FUN_100642cfc(void)

{
  func_0x000107c613d0("");
  func_0x000107c60c50();
  return;
}



/* Entry: 100643644; end: 1006437bf; -[SCWeatherServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100643644(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1055fc170;
  puStack_68 = &UNK_11089edd8;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bc2f8;
  func_0x000107c610f4(PTR_PTR_1126bc2f8);
  func_0x000107c4959c();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112726a0c));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1006437c0; end: 1006437f3;  */

void FUN_1006437c0(undefined8 param_1)

{
  func_0x000100642dc8(param_1,&DAT_10f75057f);
  func_0x000100642cfc();
  func_0x0001006428b4();
  func_0x0001006428e8();
  return;
}



/* Entry: 1006437f4; end: 10064386b; -[_TtC17SCWeatherServices17SCWeatherServices initWithWeatherProvider:weatherLocalizationProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006437f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302efe0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302efe8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10064386c; end: 10064389f;  */

void FUN_10064386c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006438a0; end: 100643a87;  */

void FUN_1006438a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8118;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0x5372656874616577;
  func_0x000107c5fadc(0x5372656874616577,0xef73656369767265);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}


