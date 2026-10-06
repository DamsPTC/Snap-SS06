/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086cb0b0; end: 1086cb107;  */

void FUN_1086cb0b0(long param_1)

{
  long unaff_x19;
  
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x5f8;
    func_0x0001086caeac();
  }
  return;
}



/* Entry: 1086cb108; end: 1086cb10f;  */

void FUN_1086cb108(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x000107c3281c(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x5f8;
    func_0x0001086caeac();
  }
  return;
}



/* Entry: 1086cb110; end: 1086cb13f;  */

void FUN_1086cb110(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c32670();
  while (func_0x000107c3281c(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x5f8;
    func_0x0001086caeac();
  }
  return;
}



/* Entry: 1086cb140; end: 1086cb1a7;  */

undefined8 FUN_1086cb140(undefined8 param_1)

{
  undefined1 auStack_628 [32];
  undefined1 auStack_608 [1496];
  
  func_0x000107c27a88(auStack_608);
  func_0x0001086dbe2c();
  FUN_1086cacd0();
  func_0x000105295498(param_1,auStack_608,auStack_628);
  func_0x000107c32710();
  func_0x000107c27a10(auStack_608);
  return param_1;
}



/* Entry: 1086cb1a8; end: 1086cb1ff;  */

/* WARNING: Possible PIC construction at 0x0001086cb5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086cb570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086cb5e8) */
/* WARNING: Removing unreachable block (ram,0x0001086cb5f8) */
/* WARNING: Removing unreachable block (ram,0x0001086cb614) */
/* WARNING: Removing unreachable block (ram,0x0001086cb624) */
/* WARNING: Removing unreachable block (ram,0x0001086cb644) */
/* WARNING: Removing unreachable block (ram,0x0001086cb638) */
/* WARNING: Removing unreachable block (ram,0x0001086cb574) */
/* WARNING: Removing unreachable block (ram,0x0001086cb584) */
/* WARNING: Removing unreachable block (ram,0x0001086cb594) */
/* WARNING: Removing unreachable block (ram,0x0001086cb5b4) */
/* WARNING: Removing unreachable block (ram,0x0001086cb5a8) */

code * FUN_1086cb1a8(code *param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  code **ppcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 *puVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  ulong uVar14;
  code *extraout_x8;
  code *extraout_x8_00;
  code *pcVar15;
  code *unaff_x19;
  code *unaff_x20;
  long lVar16;
  long lVar17;
  code *unaff_x27;
  undefined1 **ppuVar18;
  undefined1 auStack_c38 [1496];
  undefined1 auStack_660 [8];
  undefined1 auStack_658 [1432];
  code *pcStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  code *pcStack_18;
  
  if (param_2 < (code *)0x2ae3da78a0d674) {
    uVar14 = (*(long *)(param_1 + 0x10) - *(long *)param_1) / 0x5f8;
    pcVar15 = (code *)(uVar14 * 2);
    if (pcVar15 < param_2 || (long)pcVar15 - (long)param_2 == 0) {
      pcVar15 = param_2;
    }
    if (0x1571ed3c506b38 < uVar14) {
      pcVar15 = (code *)0x2ae3da78a0d673;
    }
    return pcVar15;
  }
  puVar9 = &stack0xfffffffffffffff0;
  ppuVar18 = (undefined1 **)&stack0xfffffffffffffff0;
  FUN_1086caed4();
  ppcVar6 = (code **)auStack_80;
  puVar5 = auStack_80;
  pcStack_18 = FUN_1086cb200;
  func_0x0001086da3e4();
  pcVar15 = param_1;
LAB_1086cb230:
  pcVar7 = unaff_x20 + -0x5d8;
  pcStack_78 = unaff_x20 + -0xbb0;
  pcVar8 = pcVar15;
LAB_1086cb240:
  pcVar13 = (code *)-param_4;
  pcVar15 = pcVar8;
LAB_1086cb248:
  pcVar13 = pcVar13 + 1;
  uVar14 = (long)unaff_x20 - (long)pcVar15;
  switch((long)uVar14 / 0x5d8) {
  case 0:
  case 1:
    goto LAB_1086cb3a0;
  case 2:
    func_0x0001086da624(*(long *)unaff_x19);
    if ((int)pcVar7 == 0) goto LAB_1086cb3a0;
    func_0x0001086daad0();
    func_0x0001086da7d4();
    goto code_r0x00010869dee0;
  case 3:
    pcVar8 = pcVar15 + 0x5d8;
    pcVar10 = unaff_x19;
    func_0x0001086da7d4(pcVar15,pcVar8,pcVar7);
    puVar5 = auStack_80;
    goto FUN_1086cb4ac;
  case 4:
    pcVar8 = pcVar15 + 0x5d8;
    pcVar11 = unaff_x19;
    func_0x0001086da7d4(pcVar15,pcVar8,pcVar15 + 0xbb0,pcVar7);
    break;
  case 5:
    pcVar8 = pcVar15 + 0x5d8;
    pcVar10 = pcVar7;
    pcVar12 = unaff_x19;
    func_0x0001086da7d4(pcVar15,pcVar8,pcVar15 + 0xbb0,pcVar15 + 0x1188);
    ppcVar6 = &pcStack_c0;
    ppuVar18 = &puStack_90;
    pcVar11 = pcVar12;
    pcStack_c0 = pcVar13;
    pcStack_b8 = (code *)param_5;
    pcStack_b0 = pcVar15;
    pcStack_a8 = pcVar7;
    pcStack_a0 = unaff_x20;
    puStack_90 = &stack0xfffffffffffffff0;
    pcStack_88 = pcStack_18;
    func_0x0001086dbe64();
    func_0x000107c32670();
    pcStack_18 = (code *)0x1086cb5e8;
    pcVar7 = pcVar12;
    pcVar13 = pcVar10;
    break;
  default:
    if ((long)uVar14 < 0x8c40) {
      pcVar8 = pcVar15;
      func_0x0001086da664();
      if ((param_5 & 1) == 0) {
        func_0x0001086da7d4();
        pcStack_c0 = (code *)0x5d8;
        if (pcVar8 != param_2) {
          pcStack_b8 = unaff_x27;
          pcStack_b0 = pcVar15;
          pcStack_a8 = pcVar7;
          pcStack_a0 = unaff_x20;
          puStack_90 = &stack0xfffffffffffffff0;
          pcStack_88 = pcStack_18;
          func_0x000107c325fc();
          while (pcVar15 = pcVar7, pcVar7 = pcVar15 + 0x5d8, pcVar7 != unaff_x20) {
            pcVar8 = pcVar7;
            func_0x0001086da624(*(long *)unaff_x19);
            if ((int)pcVar8 != 0) {
              func_0x0001086db1dc();
              func_0x000107c27a88();
              do {
                pcVar8 = pcVar15;
                pcVar13 = pcVar8 + 0x5d8;
                FUN_10869df24(pcVar13,pcVar8);
                func_0x0001086da4a0(*(long *)unaff_x19);
                pcVar15 = pcVar8 + -0x5d8;
              } while (((ulong)pcVar13 & 1) != 0);
              func_0x0001086db75c(pcVar8);
              func_0x0001086da3d4();
            }
          }
        }
        return pcVar8;
      }
      func_0x0001086da7d4();
      func_0x0001086dbf74();
      if (pcVar8 == param_2) {
        return pcVar8;
      }
      func_0x000107c325fc();
      lVar16 = 0;
      pcVar15 = pcVar8;
      goto LAB_1086cb678;
    }
    if (pcVar13 != (code *)0x1) {
      pcVar8 = pcVar15 + ((ulong)((long)uVar14 / 0x5d8) >> 1) * 0x5d8;
      if (uVar14 < 0x2ec01) {
        param_2 = pcVar15;
        func_0x0001086dad9c(pcVar8,pcVar15,pcVar7);
      }
      else {
        func_0x0001086dbe98();
        func_0x0001086dad9c();
        func_0x0001086dad9c(pcVar15 + 0x5d8,pcVar8 + -0x5d8,pcStack_78);
        param_2 = pcVar8 + 0x5d8;
        func_0x0001086dad9c(pcVar15 + 0xbb0,param_2,unaff_x20 + -0x1188);
        func_0x0001086dbeb0();
        func_0x0001086dad9c();
        func_0x0001086dbe98();
        FUN_10869dee0();
      }
      if ((param_5 & 1) == 0) {
        pcVar8 = pcVar15 + -0x5d8;
        func_0x0001086da624(*(long *)unaff_x19);
        if (((ulong)pcVar8 & 1) == 0) {
          func_0x0001086da664();
          FUN_1086cb9b0();
          pcVar8 = pcVar15;
          goto LAB_1086cb36c;
        }
      }
      pcVar8 = pcVar15;
      func_0x0001086da664();
      FUN_1086cbad4();
      param_1 = pcVar8;
      if (((ulong)param_2 & 1) != 0) {
        unaff_x27 = pcVar8;
        func_0x0001086dbe98();
        FUN_1086cbc08();
        param_1 = pcVar8 + 0x5d8;
        func_0x0001086da664();
        FUN_1086cbc08();
        if ((int)param_1 == 0) goto code_r0x0001086cb338;
        param_4 = -(long)pcVar13;
        unaff_x20 = pcVar8;
        if (((ulong)unaff_x27 & 1) != 0) goto LAB_1086cb3a0;
        goto LAB_1086cb230;
      }
      goto LAB_1086cb340;
    }
    func_0x0001086daecc();
    func_0x0001086da7d4();
    func_0x000107c32728();
    if (param_1 == param_2) {
      return param_1;
    }
    lVar16 = ((long)param_2 - (long)param_1) / 0x5d8;
    pcVar15 = param_1;
    pcVar7 = param_2;
    if (0x5d8 < (long)param_2 - (long)param_1) {
      uVar14 = lVar16 - 2U >> 1;
      do {
        func_0x0001086da6cc();
        FUN_1086cbd8c();
        uVar14 = uVar14 - 1;
      } while (-1 < (long)uVar14);
    }
    for (; pcVar7 != unaff_x20; pcVar7 = pcVar7 + 0x5d8) {
      pcVar15 = pcVar7;
      func_0x0001086da980(*(long *)unaff_x19);
      if ((int)pcVar15 != 0) {
        pcVar15 = pcVar7;
        FUN_10869dee0(pcVar7,param_1);
        func_0x0001086da6cc();
        FUN_1086cbd8c();
      }
    }
    do {
      if (lVar16 < 2) {
        return pcVar15;
      }
      func_0x0001086db1dc();
      func_0x000107c27a88();
      uVar14 = 0;
      pcVar15 = param_1;
      do {
        pcVar7 = pcVar15 + (uVar14 * 0xbb + 0xbb) * 8;
        uVar2 = uVar14 << 1 | 1;
        uVar1 = uVar14 * 2 + 2;
        pcVar8 = pcVar7;
        uVar4 = uVar2;
        if ((long)uVar1 < lVar16) {
          pcVar13 = pcVar7;
          (**(code **)unaff_x19)(pcVar7,pcVar15 + (uVar14 * 0xbb + 0x176) * 8);
          pcVar8 = pcVar15 + (uVar14 * 0xbb + 0x176) * 8;
          uVar4 = uVar1;
          if ((int)pcVar13 == 0) {
            pcVar8 = pcVar7;
            uVar4 = uVar2;
          }
        }
        uVar14 = uVar4;
        FUN_10869df24(pcVar15,pcVar8);
        pcVar15 = pcVar8;
      } while ((long)uVar14 <= (long)(lVar16 - 2U >> 1));
      param_2 = param_2 + -0x5d8;
      if (pcVar8 == param_2) {
        FUN_10869df24(pcVar8,auStack_c38);
        pcVar15 = pcVar8;
      }
      else {
        FUN_10869df24(pcVar8,param_2);
        pcVar15 = param_2;
        FUN_10869df24(param_2,auStack_c38);
        if (0x5d8 < (long)(pcVar8 + (0x5d8 - (long)param_1))) {
          uVar14 = (ulong)(pcVar8 + (0x5d8 - (long)param_1)) / 0x5d8 - 2 >> 1;
          pcVar15 = param_1 + uVar14 * 0x5d8;
          func_0x0001086dabb0(*(long *)unaff_x19);
          if ((int)pcVar15 != 0) {
            func_0x000107c27a88(auStack_660,pcVar8);
            pcVar15 = param_1 + uVar14 * 0x5d8;
            do {
              pcVar7 = pcVar15;
              FUN_10869df24(pcVar8,pcVar7);
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1 >> 1;
              pcVar15 = param_1 + uVar14 * 0x5d8;
              pcVar13 = pcVar15;
              (**(code **)unaff_x19)(pcVar15,auStack_660);
              pcVar8 = pcVar7;
            } while (((ulong)pcVar13 & 1) != 0);
            FUN_10869df24(pcVar7,auStack_660);
            pcVar15 = (code *)auStack_660;
            func_0x000107c27a10(pcVar15);
          }
        }
      }
      func_0x0001086da3d4();
      lVar16 = lVar16 + -1;
    } while( true );
  }
  *(code **)((long)ppcVar6 + -0x40) = pcVar13;
  *(ulong *)((long)ppcVar6 + -0x38) = param_5;
  *(code **)((long)ppcVar6 + -0x30) = pcVar15;
  *(code **)((long)ppcVar6 + -0x28) = pcVar7;
  *(code **)((long)ppcVar6 + -0x20) = unaff_x20;
  *(code **)((long)ppcVar6 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppcVar6 + -0x10) = ppuVar18;
  *(code **)((long)ppcVar6 + -8) = pcStack_18;
  pcVar10 = pcVar11;
  func_0x0001086dbe64();
  func_0x000107c32670();
  pcStack_18 = (code *)0x1086cb574;
  puVar5 = (undefined1 *)((long)ppcVar6 + -0x40);
  pcVar7 = pcVar11;
  register0x00000008 = (BADSPACEBASE *)ppcVar6;
FUN_1086cb4ac:
  *(code **)(puVar5 + -0x40) = pcVar13;
  *(ulong *)(puVar5 + -0x38) = param_5;
  *(code **)(puVar5 + -0x30) = pcVar15;
  *(code **)(puVar5 + -0x28) = pcVar7;
  *(code **)(puVar5 + -0x20) = unaff_x20;
  *(code **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)(puVar5 + -8) = pcStack_18;
  pcVar15 = pcVar10;
  func_0x0001086dbf08();
  func_0x0001086da980(*(long *)pcVar15);
  pcVar15 = pcVar8;
  func_0x000107c326d0(*(long *)pcVar10);
  (*extraout_x8)();
  if (((ulong)pcVar8 & 1) == 0) {
    if ((int)pcVar15 == 0) {
      return pcVar15;
    }
    func_0x0001086da5dc();
    FUN_10869dee0();
    func_0x0001086da980(*(long *)pcVar10);
    if ((int)unaff_x19 == 0) {
      return unaff_x19;
    }
    func_0x0001086da6cc();
    pcVar7 = unaff_x19;
  }
  else if ((int)pcVar15 == 0) {
    func_0x0001086da6cc();
    FUN_10869dee0();
    func_0x000107c326d0(*(long *)pcVar10);
    (*extraout_x8_00)();
    pcVar7 = unaff_x19;
    if ((int)pcVar15 == 0) {
      return pcVar15;
    }
  }
  puVar9 = *(undefined1 **)(puVar5 + -0x10);
  pcStack_18 = *(code **)(puVar5 + -8);
  unaff_x20 = *(code **)(puVar5 + -0x20);
  unaff_x19 = *(code **)(puVar5 + -0x18);
code_r0x00010869dee0:
  *(undefined8 *)(puVar5 + -0x30) = 0x5d8;
  *(code **)(puVar5 + -0x28) = unaff_x27;
  *(code **)(puVar5 + -0x20) = unaff_x20;
  *(code **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar9;
  *(code **)(puVar5 + -8) = pcStack_18;
  func_0x00010869edb0();
  func_0x00010869ef1c();
  func_0x00010869efb0();
  FUN_10869df24();
  func_0x00010869ee58();
  FUN_10869df24();
  func_0x00010869edf8();
  return pcVar7;
LAB_1086cb678:
  pcVar15 = pcVar15 + 0x5d8;
  if (pcVar15 == unaff_x20) {
    return pcVar8;
  }
  func_0x0001086dba20(*(long *)unaff_x19);
  if ((int)pcVar8 != 0) {
    func_0x0001086db9b4();
    lVar3 = lVar16;
    do {
      lVar17 = lVar3;
      func_0x0001086db8f8();
      pcVar8 = pcVar7;
      if (lVar17 == 0) goto LAB_1086cb6cc;
      puVar9 = auStack_658;
      (**(code **)unaff_x19)(puVar9,pcVar7 + lVar17 + -0x5d8);
      lVar3 = lVar17 + -0x5d8;
    } while (((ulong)puVar9 & 1) != 0);
    pcVar8 = pcVar7 + lVar17;
LAB_1086cb6cc:
    func_0x0001086db75c();
    func_0x0001086da3d4();
  }
  lVar16 = lVar16 + 0x5d8;
  goto LAB_1086cb678;
code_r0x0001086cb338:
  pcVar15 = pcVar8 + 0x5d8;
  if (((ulong)unaff_x27 & 1) == 0) goto LAB_1086cb340;
  goto LAB_1086cb248;
LAB_1086cb340:
  pcVar15 = param_1;
  func_0x0001086dbe98();
  FUN_1086cb200();
  pcVar8 = pcVar8 + 0x5d8;
LAB_1086cb36c:
  param_5 = 0;
  param_4 = -(long)pcVar13;
  param_1 = pcVar15;
  goto LAB_1086cb240;
LAB_1086cb3a0:
  func_0x0001086da7d4(FUN_1086cb200);
  return pcStack_18;
}



/* Entry: 1086cb200; end: 1086cb4ab;  */

/* WARNING: Possible PIC construction at 0x0001086cb5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086cb570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086cb5e8) */
/* WARNING: Removing unreachable block (ram,0x0001086cb5f8) */
/* WARNING: Removing unreachable block (ram,0x0001086cb614) */
/* WARNING: Removing unreachable block (ram,0x0001086cb624) */
/* WARNING: Removing unreachable block (ram,0x0001086cb644) */
/* WARNING: Removing unreachable block (ram,0x0001086cb638) */
/* WARNING: Removing unreachable block (ram,0x0001086cb574) */
/* WARNING: Removing unreachable block (ram,0x0001086cb584) */
/* WARNING: Removing unreachable block (ram,0x0001086cb594) */
/* WARNING: Removing unreachable block (ram,0x0001086cb5b4) */
/* WARNING: Removing unreachable block (ram,0x0001086cb5a8) */

void FUN_1086cb200(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x27;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_c28 [1496];
  undefined1 auStack_650 [8];
  undefined1 auStack_648 [1432];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  
  ppuVar6 = (undefined8 **)auStack_70;
  puVar5 = auStack_70;
  func_0x0001086da3e4();
  puVar10 = param_1;
LAB_1086cb230:
  puVar8 = unaff_x20 + -0xbb;
  puStack_68 = unaff_x20 + -0x176;
  puVar9 = puVar10;
LAB_1086cb240:
  puVar14 = (undefined8 *)-param_4;
  puVar10 = puVar9;
LAB_1086cb248:
  puVar14 = (undefined8 *)((long)puVar14 + 1);
  uVar15 = (long)unaff_x20 - (long)puVar10;
  switch((long)uVar15 / 0x5d8) {
  case 0:
  case 1:
    goto LAB_1086cb3a0;
  case 2:
    func_0x0001086da624(*unaff_x19);
    if ((int)puVar8 == 0) goto LAB_1086cb3a0;
    func_0x0001086daad0();
    func_0x0001086da7d4();
    goto code_r0x00010869dee0;
  case 3:
    puVar9 = puVar10 + 0xbb;
    puVar11 = unaff_x19;
    func_0x0001086da7d4(puVar10,puVar9,puVar8);
    puVar5 = auStack_70;
    goto FUN_1086cb4ac;
  case 4:
    puVar9 = puVar10 + 0xbb;
    puVar12 = unaff_x19;
    func_0x0001086da7d4(puVar10,puVar9,puVar10 + 0x176,puVar8);
    break;
  case 5:
    puVar9 = puVar10 + 0xbb;
    puVar11 = puVar8;
    puVar13 = unaff_x19;
    func_0x0001086da7d4(puVar10,puVar9,puVar10 + 0x176,puVar10 + 0x231);
    ppuVar6 = &puStack_b0;
    unaff_x29 = auStack_80;
    puVar12 = puVar13;
    puStack_b0 = puVar14;
    puStack_a8 = (undefined8 *)param_5;
    puStack_a0 = puVar10;
    puStack_98 = puVar8;
    puStack_90 = unaff_x20;
    func_0x0001086dbe64();
    func_0x000107c32670();
    unaff_x30 = 0x1086cb5e8;
    puVar8 = puVar13;
    puVar14 = puVar11;
    break;
  default:
    if ((long)uVar15 < 0x8c40) {
      puVar9 = puVar10;
      func_0x0001086da664();
      if ((param_5 & 1) == 0) {
        func_0x0001086da7d4();
        puStack_b0 = (undefined8 *)0x5d8;
        if (puVar9 != param_2) {
          puStack_a8 = unaff_x27;
          puStack_a0 = puVar10;
          puStack_98 = puVar8;
          puStack_90 = unaff_x20;
          func_0x000107c325fc();
          while (puVar10 = puVar8, puVar8 = puVar10 + 0xbb, puVar8 != unaff_x20) {
            puVar9 = puVar8;
            func_0x0001086da624(*unaff_x19);
            if ((int)puVar9 != 0) {
              func_0x0001086db1dc();
              func_0x000107c27a88();
              do {
                puVar14 = puVar10;
                puVar9 = puVar14 + 0xbb;
                FUN_10869df24(puVar9,puVar14);
                func_0x0001086da4a0(*unaff_x19);
                puVar10 = puVar14 + -0xbb;
              } while (((ulong)puVar9 & 1) != 0);
              func_0x0001086db75c(puVar14);
              func_0x0001086da3d4();
            }
          }
        }
        return;
      }
      func_0x0001086da7d4();
      func_0x0001086dbf74();
      if (puVar9 == param_2) {
        return;
      }
      func_0x000107c325fc();
      lVar16 = 0;
      puVar10 = puVar9;
      goto LAB_1086cb678;
    }
    if (puVar14 != (undefined8 *)0x1) {
      puVar9 = puVar10 + ((ulong)((long)uVar15 / 0x5d8) >> 1) * 0xbb;
      if (uVar15 < 0x2ec01) {
        param_2 = puVar10;
        func_0x0001086dad9c(puVar9,puVar10,puVar8);
      }
      else {
        func_0x0001086dbe98();
        func_0x0001086dad9c();
        func_0x0001086dad9c(puVar10 + 0xbb,puVar9 + -0xbb,puStack_68);
        param_2 = puVar9 + 0xbb;
        func_0x0001086dad9c(puVar10 + 0x176,param_2,unaff_x20 + -0x231);
        func_0x0001086dbeb0();
        func_0x0001086dad9c();
        func_0x0001086dbe98();
        FUN_10869dee0();
      }
      if ((param_5 & 1) == 0) {
        puVar9 = puVar10 + -0xbb;
        func_0x0001086da624(*unaff_x19);
        if (((ulong)puVar9 & 1) == 0) {
          func_0x0001086da664();
          FUN_1086cb9b0();
          puVar9 = puVar10;
          goto LAB_1086cb36c;
        }
      }
      puVar9 = puVar10;
      func_0x0001086da664();
      FUN_1086cbad4();
      param_1 = puVar9;
      if (((ulong)param_2 & 1) != 0) {
        unaff_x27 = puVar9;
        func_0x0001086dbe98();
        FUN_1086cbc08();
        param_1 = puVar9 + 0xbb;
        func_0x0001086da664();
        FUN_1086cbc08();
        if ((int)param_1 == 0) goto code_r0x0001086cb338;
        param_4 = -(long)puVar14;
        unaff_x20 = puVar9;
        if (((ulong)unaff_x27 & 1) != 0) goto LAB_1086cb3a0;
        goto LAB_1086cb230;
      }
      goto LAB_1086cb340;
    }
    func_0x0001086daecc();
    func_0x0001086da7d4();
    func_0x000107c32728();
    if (param_1 == param_2) {
      return;
    }
    lVar16 = ((long)param_2 - (long)param_1) / 0x5d8;
    puVar10 = param_2;
    if (0x5d8 < (long)param_2 - (long)param_1) {
      uVar15 = lVar16 - 2U >> 1;
      do {
        func_0x0001086da6cc();
        FUN_1086cbd8c();
        uVar15 = uVar15 - 1;
      } while (-1 < (long)uVar15);
    }
    for (; puVar10 != unaff_x20; puVar10 = puVar10 + 0xbb) {
      puVar8 = puVar10;
      func_0x0001086da980(*unaff_x19);
      if ((int)puVar8 != 0) {
        FUN_10869dee0(puVar10,param_1);
        func_0x0001086da6cc();
        FUN_1086cbd8c();
      }
    }
    do {
      if (lVar16 < 2) {
        return;
      }
      func_0x0001086db1dc();
      func_0x000107c27a88();
      uVar15 = 0;
      puVar10 = param_1;
      do {
        puVar8 = puVar10 + uVar15 * 0xbb + 0xbb;
        uVar2 = uVar15 << 1 | 1;
        uVar1 = uVar15 * 2 + 2;
        puVar9 = puVar8;
        uVar4 = uVar2;
        if ((long)uVar1 < lVar16) {
          puVar14 = puVar8;
          (*(code *)*unaff_x19)(puVar8,puVar10 + uVar15 * 0xbb + 0x176);
          puVar9 = puVar10 + uVar15 * 0xbb + 0x176;
          uVar4 = uVar1;
          if ((int)puVar14 == 0) {
            puVar9 = puVar8;
            uVar4 = uVar2;
          }
        }
        uVar15 = uVar4;
        FUN_10869df24(puVar10,puVar9);
        puVar10 = puVar9;
      } while ((long)uVar15 <= (long)(lVar16 - 2U >> 1));
      param_2 = param_2 + -0xbb;
      if (puVar9 == param_2) {
        FUN_10869df24(puVar9,auStack_c28);
      }
      else {
        FUN_10869df24(puVar9,param_2);
        FUN_10869df24(param_2,auStack_c28);
        uVar15 = (long)puVar9 + (0x5d8 - (long)param_1);
        if (0x5d8 < (long)uVar15) {
          uVar15 = uVar15 / 0x5d8 - 2 >> 1;
          puVar10 = param_1 + uVar15 * 0xbb;
          func_0x0001086dabb0(*unaff_x19);
          if ((int)puVar10 != 0) {
            func_0x000107c27a88(auStack_650,puVar9);
            puVar10 = param_1 + uVar15 * 0xbb;
            do {
              puVar8 = puVar10;
              FUN_10869df24(puVar9,puVar8);
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1 >> 1;
              puVar10 = param_1 + uVar15 * 0xbb;
              puVar14 = puVar10;
              (*(code *)*unaff_x19)(puVar10,auStack_650);
              puVar9 = puVar8;
            } while (((ulong)puVar14 & 1) != 0);
            FUN_10869df24(puVar8,auStack_650);
            func_0x000107c27a10(auStack_650);
          }
        }
      }
      func_0x0001086da3d4();
      lVar16 = lVar16 + -1;
    } while( true );
  }
  *(undefined8 **)((long)ppuVar6 + -0x40) = puVar14;
  *(ulong *)((long)ppuVar6 + -0x38) = param_5;
  *(undefined8 **)((long)ppuVar6 + -0x30) = puVar10;
  *(undefined8 **)((long)ppuVar6 + -0x28) = puVar8;
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)ppuVar6 + -0x10);
  puVar11 = puVar12;
  func_0x0001086dbe64();
  func_0x000107c32670();
  unaff_x30 = 0x1086cb574;
  puVar5 = (undefined1 *)((long)ppuVar6 + -0x40);
  puVar8 = puVar12;
FUN_1086cb4ac:
  *(undefined8 **)(puVar5 + -0x40) = puVar14;
  *(ulong *)(puVar5 + -0x38) = param_5;
  *(undefined8 **)(puVar5 + -0x30) = puVar10;
  *(undefined8 **)(puVar5 + -0x28) = puVar8;
  *(undefined8 **)(puVar5 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar5 + -8) = unaff_x30;
  puVar10 = puVar11;
  func_0x0001086dbf08();
  func_0x0001086da980(*puVar10);
  iVar7 = (int)puVar9;
  func_0x000107c326d0(*puVar11);
  (*extraout_x8)();
  if (((ulong)puVar9 & 1) == 0) {
    if (iVar7 == 0) {
      return;
    }
    func_0x0001086da5dc();
    FUN_10869dee0();
    func_0x0001086da980(*puVar11);
    if ((int)unaff_x19 == 0) {
      return;
    }
    func_0x0001086da6cc();
  }
  else if (iVar7 == 0) {
    func_0x0001086da6cc();
    FUN_10869dee0();
    func_0x000107c326d0(*puVar11);
    (*extraout_x8_00)();
    if (iVar7 == 0) {
      return;
    }
  }
  unaff_x29 = *(undefined1 **)(puVar5 + -0x10);
  unaff_x30 = *(undefined8 *)(puVar5 + -8);
  unaff_x20 = *(undefined8 **)(puVar5 + -0x20);
  unaff_x19 = *(undefined8 **)(puVar5 + -0x18);
code_r0x00010869dee0:
  *(undefined8 *)(puVar5 + -0x30) = 0x5d8;
  *(undefined8 **)(puVar5 + -0x28) = unaff_x27;
  *(undefined8 **)(puVar5 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar5 + -8) = unaff_x30;
  func_0x00010869edb0();
  func_0x00010869ef1c();
  func_0x00010869efb0();
  FUN_10869df24();
  func_0x00010869ee58();
  FUN_10869df24();
  func_0x00010869edf8();
  return;
LAB_1086cb678:
  puVar10 = puVar10 + 0xbb;
  if (puVar10 == unaff_x20) {
    return;
  }
  func_0x0001086dba20(*unaff_x19);
  if ((int)puVar9 != 0) {
    func_0x0001086db9b4();
    lVar3 = lVar16;
    do {
      lVar17 = lVar3;
      func_0x0001086db8f8();
      puVar9 = puVar8;
      if (lVar17 == 0) goto LAB_1086cb6cc;
      puVar5 = auStack_648;
      (*(code *)*unaff_x19)(puVar5,(long)puVar8 + lVar17 + -0x5d8);
      lVar3 = lVar17 + -0x5d8;
    } while (((ulong)puVar5 & 1) != 0);
    puVar9 = (undefined8 *)((long)puVar8 + lVar17);
LAB_1086cb6cc:
    func_0x0001086db75c();
    func_0x0001086da3d4();
  }
  lVar16 = lVar16 + 0x5d8;
  goto LAB_1086cb678;
code_r0x0001086cb338:
  puVar10 = puVar9 + 0xbb;
  if (((ulong)unaff_x27 & 1) == 0) goto LAB_1086cb340;
  goto LAB_1086cb248;
LAB_1086cb340:
  puVar10 = param_1;
  func_0x0001086dbe98();
  FUN_1086cb200();
  puVar9 = puVar9 + 0xbb;
LAB_1086cb36c:
  param_5 = 0;
  param_4 = -(long)puVar14;
  param_1 = puVar10;
  goto LAB_1086cb240;
LAB_1086cb3a0:
  func_0x0001086da7d4(unaff_x30);
  return;
}



/* Entry: 1086cb4ac; end: 1086cb64b;  */

void FUN_1086cb4ac(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  int unaff_w19;
  
  puVar2 = param_4;
  func_0x0001086dbf08();
  func_0x0001086da980(*puVar2);
  iVar1 = (int)param_2;
  func_0x000107c326d0(*param_4);
  (*extraout_x8)();
  if ((param_2 & 1) != 0) {
    if (iVar1 == 0) {
      func_0x0001086da6cc();
      FUN_10869dee0();
      func_0x000107c326d0(*param_4);
      (*extraout_x8_00)();
      if (iVar1 == 0) {
        return;
      }
    }
code_r0x00010869dee0:
    func_0x00010869edb0();
    func_0x00010869ef1c();
    func_0x00010869efb0();
    FUN_10869df24();
    func_0x00010869ee58();
    FUN_10869df24();
    func_0x00010869edf8();
    return;
  }
  if (iVar1 != 0) {
    func_0x0001086da5dc();
    FUN_10869dee0();
    func_0x0001086da980(*param_4);
    if (unaff_w19 != 0) {
      func_0x0001086da6cc();
      goto code_r0x00010869dee0;
    }
  }
  return;
}



/* Entry: 1086cb64c; end: 1086cb6f3;  */

void FUN_1086cb64c(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_5d8 [1496];
  
  func_0x0001086dbf74();
  if (param_1 != param_2) {
    func_0x000107c325fc();
    lVar3 = 0;
    lVar2 = param_1;
    while (lVar2 = lVar2 + 0x5d8, lVar2 != unaff_x20) {
      func_0x0001086dba20(*unaff_x19);
      if ((int)param_1 != 0) {
        func_0x0001086db9b4();
        lVar4 = lVar3;
        do {
          func_0x0001086db8f8();
          param_1 = unaff_x21;
          if (lVar4 == 0) goto LAB_1086cb6cc;
          puVar1 = auStack_5d8;
          (*(code *)*unaff_x19)(puVar1,unaff_x21 + lVar4 + -0x5d8);
          lVar4 = lVar4 + -0x5d8;
        } while (((ulong)puVar1 & 1) != 0);
        param_1 = unaff_x21 + lVar4 + 0x5d8;
LAB_1086cb6cc:
        func_0x0001086db75c();
        func_0x0001086da3d4();
      }
      lVar3 = lVar3 + 0x5d8;
    }
  }
  return;
}



/* Entry: 1086cb6f4; end: 1086cb77f;  */

void FUN_1086cb6f4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  if (param_1 != param_2) {
    func_0x000107c325fc();
    while (lVar3 = unaff_x21, unaff_x21 = lVar3 + 0x5d8, unaff_x21 != unaff_x20) {
      lVar1 = unaff_x21;
      func_0x0001086da624(*unaff_x19);
      if ((int)lVar1 != 0) {
        func_0x0001086db1dc();
        func_0x000107c27a88();
        do {
          lVar1 = lVar3;
          uVar2 = lVar1 + 0x5d8;
          FUN_10869df24(uVar2,lVar1);
          func_0x0001086da4a0(*unaff_x19);
          lVar3 = lVar1 + -0x5d8;
        } while ((uVar2 & 1) != 0);
        func_0x0001086db75c(lVar1);
        func_0x0001086da3d4();
      }
    }
  }
  return;
}



/* Entry: 1086cb780; end: 1086cb9af;  */

void FUN_1086cb780(ulong param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_bb8 [1496];
  undefined1 auStack_5e0 [1504];
  
  func_0x000107c32728();
  if (param_1 != param_2) {
    lVar6 = (long)(param_2 - param_1) / 0x5d8;
    uVar3 = param_2;
    if (0x5d8 < (long)(param_2 - param_1)) {
      uVar8 = lVar6 - 2U >> 1;
      do {
        func_0x0001086da6cc();
        FUN_1086cbd8c();
        uVar8 = uVar8 - 1;
      } while (-1 < (long)uVar8);
    }
    for (; uVar3 != param_3; uVar3 = uVar3 + 0x5d8) {
      uVar8 = uVar3;
      func_0x0001086da980(*param_4);
      if ((int)uVar8 != 0) {
        FUN_10869dee0(uVar3,param_1);
        func_0x0001086da6cc();
        FUN_1086cbd8c();
      }
    }
    for (; 1 < lVar6; lVar6 = lVar6 + -1) {
      func_0x0001086db1dc();
      func_0x000107c27a88();
      uVar8 = 0;
      uVar3 = param_1;
      do {
        lVar5 = uVar3 + uVar8 * 0x5d8;
        uVar9 = lVar5 + 0x5d8;
        uVar1 = uVar8 << 1 | 1;
        uVar4 = uVar8 * 2 + 2;
        uVar7 = uVar9;
        uVar8 = uVar1;
        if ((long)uVar4 < lVar6) {
          uVar7 = lVar5 + 0xbb0;
          uVar2 = uVar9;
          (*(code *)*param_4)(uVar9,uVar7);
          uVar8 = uVar4;
          if ((int)uVar2 == 0) {
            uVar7 = uVar9;
            uVar8 = uVar1;
          }
        }
        FUN_10869df24(uVar3,uVar7);
        uVar3 = uVar7;
      } while ((long)uVar8 <= (long)(lVar6 - 2U >> 1));
      param_2 = param_2 - 0x5d8;
      if (uVar7 == param_2) {
        FUN_10869df24(uVar7,auStack_bb8);
      }
      else {
        FUN_10869df24(uVar7,param_2);
        FUN_10869df24(param_2,auStack_bb8);
        uVar3 = (uVar7 - param_1) + 0x5d8;
        if (0x5d8 < (long)uVar3) {
          uVar9 = uVar3 / 0x5d8 - 2 >> 1;
          uVar8 = param_1 + uVar9 * 0x5d8;
          uVar3 = uVar8;
          func_0x0001086dabb0(*param_4);
          if ((int)uVar3 != 0) {
            func_0x000107c27a88(auStack_5e0,uVar7);
            do {
              uVar3 = uVar8;
              FUN_10869df24(uVar7,uVar3);
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1 >> 1;
              uVar8 = param_1 + uVar9 * 0x5d8;
              uVar4 = uVar8;
              (*(code *)*param_4)(uVar8,auStack_5e0);
              uVar7 = uVar3;
            } while ((uVar4 & 1) != 0);
            FUN_10869df24(uVar3,auStack_5e0);
            func_0x000107c27a10(auStack_5e0);
          }
        }
      }
      func_0x0001086da3d4();
    }
  }
  return;
}



/* Entry: 1086cb9b0; end: 1086cbad3;  */

ulong FUN_1086cb9b0(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_618 [1496];
  
  func_0x0001086da3fc();
  func_0x0001086da024();
  func_0x000107c27a88();
  puVar1 = auStack_618;
  (*(code *)*unaff_x20)(puVar1,unaff_x21 - 0x5d8);
  uVar2 = unaff_x19;
  if (((ulong)puVar1 & 1) == 0) {
    do {
      uVar2 = uVar2 + 0x5d8;
      if (unaff_x21 <= uVar2) break;
      func_0x0001086da4a0(*unaff_x20);
    } while ((int)puVar1 == 0);
  }
  else {
    do {
      uVar2 = uVar2 + 0x5d8;
      func_0x0001086da4a0(*unaff_x20);
    } while (((ulong)puVar1 & 1) == 0);
  }
  if (uVar2 < unaff_x21) {
    do {
      unaff_x21 = unaff_x21 - 0x5d8;
      puVar1 = auStack_618;
      func_0x0001086da980(*unaff_x20);
    } while (((ulong)puVar1 & 1) != 0);
  }
  while (uVar2 < unaff_x21) {
    func_0x0001086daad0();
    FUN_10869dee0();
    do {
      uVar2 = uVar2 + 0x5d8;
      func_0x0001086da4a0(*unaff_x20);
    } while ((int)puVar1 == 0);
    do {
      unaff_x21 = unaff_x21 - 0x5d8;
      puVar1 = auStack_618;
      func_0x0001086da980(*unaff_x20);
    } while (((ulong)puVar1 & 1) != 0);
  }
  if (unaff_x19 != uVar2 - 0x5d8) {
    func_0x0001086da5dc();
    FUN_10869df24();
  }
  FUN_10869df24(uVar2 - 0x5d8,auStack_618);
  func_0x0001086da3d4();
  return uVar2;
}



/* Entry: 1086cbad4; end: 1086cbc07;  */

void FUN_1086cbad4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong unaff_x19;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_5d8 [1496];
  
  func_0x0001086dbb70();
  func_0x000107c32670();
  func_0x0001086dbe2c();
  func_0x000107c27a88();
  lVar2 = 0;
  do {
    uVar1 = unaff_x20 + lVar2 + 0x5d8;
    (*(code *)*param_3)(uVar1,auStack_5d8);
    lVar2 = lVar2 + 0x5d8;
  } while ((uVar1 & 1) != 0);
  uVar3 = unaff_x20 + lVar2;
  if (lVar2 == 0x5d8) {
    do {
      if (unaff_x19 <= uVar3) break;
      unaff_x19 = unaff_x19 - 0x5d8;
      func_0x000107c326ec(*param_3);
      (*extraout_x8_00)();
    } while ((uVar1 & 1) == 0);
  }
  else {
    do {
      unaff_x19 = unaff_x19 - 0x5d8;
      func_0x000107c326ec(*param_3);
      (*extraout_x8)();
    } while ((int)uVar1 == 0);
  }
  while (uVar3 < unaff_x19) {
    func_0x0001086daac4();
    FUN_10869dee0();
    do {
      uVar3 = uVar3 + 0x5d8;
      func_0x0001086dba20(*param_3);
    } while ((uVar1 & 1) != 0);
    do {
      unaff_x19 = unaff_x19 - 0x5d8;
      uVar1 = unaff_x19;
      (*(code *)*param_3)(unaff_x19,auStack_5d8);
    } while ((uVar1 & 1) == 0);
  }
  if (unaff_x20 != uVar3 - 0x5d8) {
    func_0x0001086da544();
    FUN_10869df24();
  }
  FUN_10869df24(uVar3 - 0x5d8,auStack_5d8);
  func_0x0001086da3d4();
  func_0x0001086da6cc();
  return;
}



/* Entry: 1086cbc08; end: 1086cbd8b;  */

bool FUN_1086cbc08(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *extraout_x8;
  long lVar4;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c32728();
  func_0x0001086da060();
  iVar1 = 1;
  switch((param_2 - param_1) / 0x5d8) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000107c326d0(*unaff_x20);
    (*extraout_x8)();
    if (iVar1 != 0) {
      func_0x0001086da5dc();
      FUN_10869dee0();
    }
    break;
  case 3:
    FUN_1086cb4ac();
    break;
  case 4:
    func_0x0001086cb54c();
    break;
  case 5:
    func_0x0001086cb5bc();
    break;
  default:
    lVar2 = unaff_x19;
    FUN_1086cb4ac();
    iVar1 = 0;
    lVar6 = -0xbb0;
    lVar7 = unaff_x19 + 0x1188;
    lVar5 = unaff_x19 + 0xbb0;
    while (lVar4 = lVar7, lVar4 != unaff_x21) {
      func_0x0001086daac4(*unaff_x20);
      (*extraout_x8_00)();
      if ((int)lVar2 != 0) {
        func_0x0001086db9b4();
        lVar7 = lVar6;
        do {
          func_0x0001086db8f8();
          lVar2 = unaff_x19;
          if (lVar7 == 0) break;
          uVar3 = 0;
          func_0x0001086dabb0(*unaff_x20);
          lVar7 = lVar7 + 0x5d8;
          lVar2 = lVar5;
          lVar5 = lVar5 + -0x5d8;
        } while ((uVar3 & 1) != 0);
        func_0x0001086db75c();
        iVar1 = iVar1 + 1;
        func_0x0001086da3d4();
        if (iVar1 == 8) {
          return lVar4 + 0x5d8 == unaff_x21;
        }
      }
      lVar6 = lVar6 + -0x5d8;
      lVar5 = lVar4;
      lVar7 = lVar4 + 0x5d8;
    }
  }
  return true;
}



/* Entry: 1086cbd8c; end: 1086cbec3;  */

void FUN_1086cbd8c(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_5e0 [1504];
  
  func_0x000107c32728();
  puVar3 = auStack_5e0;
  if ((1 < param_3) && (uVar7 = param_3 - 2U >> 1, (long)(param_4 - param_1) / 0x5d8 <= (long)uVar7)
     ) {
    uVar2 = param_1;
    func_0x0001086da3e4();
    uVar1 = extraout_x8 << 1 | 1;
    uVar4 = param_1 + uVar1 * 0x5d8;
    uVar5 = extraout_x8 * 2 + 2;
    uVar6 = uVar4;
    uVar8 = uVar1;
    if ((long)uVar5 < param_3) {
      uVar2 = uVar4;
      (*(code *)*unaff_x20)(uVar4,uVar4 + 0x5d8);
      uVar6 = uVar4 + 0x5d8;
      uVar8 = uVar5;
      if ((int)uVar2 == 0) {
        uVar6 = uVar4;
        uVar8 = uVar1;
      }
    }
    func_0x0001086daac4(*unaff_x20);
    (*extraout_x8_00)();
    if ((uVar2 & 1) == 0) {
      func_0x000107c27a88(auStack_5e0,param_4);
      do {
        uVar5 = uVar6;
        func_0x0001086db0a8();
        FUN_10869df24();
        if ((long)uVar7 < (long)uVar8) break;
        uVar2 = uVar8 << 1 | 1;
        uVar4 = param_1 + uVar2 * 0x5d8;
        uVar1 = uVar8 * 2 + 2;
        uVar6 = uVar4;
        uVar8 = uVar2;
        if ((long)uVar1 < unaff_x19) {
          func_0x0001086daac4(*unaff_x20);
          (*extraout_x8_01)();
          uVar6 = uVar4 + 0x5d8;
          uVar8 = uVar1;
          if ((int)puVar3 == 0) {
            uVar6 = uVar4;
            uVar8 = uVar2;
          }
        }
        func_0x0001086dba20(*unaff_x20);
      } while ((int)puVar3 == 0);
      FUN_10869df24(uVar5,auStack_5e0);
      func_0x000107c27a10(auStack_5e0);
    }
  }
  return;
}



/* Entry: 1086cbec4; end: 1086cbedf;  */

void FUN_1086cbec4(void)

{
  FUN_1086cbee0();
  return;
}



/* Entry: 1086cbee0; end: 1086cbf67;  */

long * FUN_1086cbee0(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5
                    )

{
  long *unaff_x21;
  long *unaff_x22;
  
  func_0x0001086dae44();
  do {
    if (param_1 == unaff_x22) {
      func_0x0001086da840();
LAB_1086cbf54:
      FUN_1086cbf68();
      return param_2;
    }
    if (unaff_x21 == param_4) {
      func_0x0001086db0a8();
      goto LAB_1086cbf54;
    }
    if (*unaff_x21 < *param_1) {
      param_2 = unaff_x21;
      func_0x000107c28944(param_5,unaff_x21);
      unaff_x21 = unaff_x21 + 1;
    }
    else {
      param_2 = param_1;
      func_0x000107c28944(param_5,param_1);
      param_1 = param_1 + 1;
    }
  } while( true );
}



/* Entry: 1086cbf68; end: 1086cbf83;  */

void FUN_1086cbf68(void)

{
  func_0x0001086dab44();
  FUN_1086cbf84();
  return;
}



/* Entry: 1086cbf84; end: 1086cbfbb;  */

void FUN_1086cbf84(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001086d9f2c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 8) {
    func_0x0001086daeb4();
    func_0x000107c28944();
  }
  func_0x000107c326d0();
  return;
}



/* Entry: 1086cbfbc; end: 1086cbffb;  */

void FUN_1086cbfbc(void)

{
  func_0x000107c32678();
  FUN_1086cbffc();
  return;
}



/* Entry: 1086cbffc; end: 1086cc027;  */

long FUN_1086cbffc(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(long *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1086cc028; end: 1086cc05b;  */

undefined8 * FUN_1086cc028(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1086cc05c(param_1,param_2,param_2 + param_3 * 0x1a8,param_3);
  return param_1;
}



/* Entry: 1086cc05c; end: 1086cc0a3;  */

void FUN_1086cc05c(void)

{
  long in_x3;
  
  func_0x0001086daa90();
  if (in_x3 != 0) {
    func_0x0001086d9f2c();
    func_0x0001086db840();
    func_0x0001086da360();
    FUN_1086cc0ec();
  }
  func_0x0001086d9ee4();
  FUN_10867bdc0();
  return;
}



/* Entry: 1086cc0a4; end: 1086cc0eb;  */

void FUN_1086cc0a4(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 < 0x9a90e7d95bc60a) {
    func_0x000107c326a4();
    func_0x00010867b684();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x1a8;
  }
  else {
    FUN_10867b624();
    func_0x000107c32724();
    func_0x0001086db51c();
    FUN_1086cc114();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1086cc0ec; end: 1086cc113;  */

void FUN_1086cc0ec(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107c32724();
  func_0x0001086db51c();
  FUN_1086cc114();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086cc114; end: 1086cc127;  */

void FUN_1086cc114(void)

{
  FUN_1086cc128();
  return;
}



/* Entry: 1086cc128; end: 1086cc17f;  */

undefined8 FUN_1086cc128(void)

{
  undefined8 in_x3;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001086daaa8();
  func_0x000107c325e0();
  func_0x0001086dbf14();
  while (unaff_x21 != unaff_x19) {
    func_0x0001086da544();
    func_0x000107c28a9c();
    func_0x0001086dbd5c();
  }
  func_0x0001086da4d4();
  return in_x3;
}



/* Entry: 1086cc180; end: 1086cc203;  */

void FUN_1086cc180(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x0001086da8f4();
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  *puVar1 = FUN_1086d9490;
  puVar1[1] = FUN_1086d959c;
  FUN_1086cc204(puVar1 + 4);
  func_0x0001086db1f8();
  func_0x0001086d9e8c();
  puVar1[0xe] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  func_0x000107c3265c(*unaff_x20);
  func_0x0001086da4f0();
  return;
}



/* Entry: 1086cc204; end: 1086cc267;  */

void FUN_1086cc204(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c32678();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c27994(param_1 + 2,param_2 + 2);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x45) = *(undefined8 *)(unaff_x20 + 0x45);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  return;
}



/* Entry: 1086cc268; end: 1086cc64b;  */

void FUN_1086cc268(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long *extraout_x8_00;
  long *plVar8;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  ulong uVar9;
  long extraout_x8_04;
  byte extraout_w9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_250 [392];
  char cStack_c8;
  byte bStack_80;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  func_0x000100864738();
  puVar4 = (undefined8 *)0x230;
  __Znwm();
  *puVar4 = FUN_1086d91b8;
  puVar4[1] = FUN_1086d9464;
  puVar4[0x43] = param_2;
  func_0x0001086dad20();
  func_0x000107c287c4(param_1,puVar4 + 2);
  func_0x0001086dac2c();
  pbVar5 = *(byte **)(extraout_x8 + 0x1a0);
  puVar7 = (undefined1 *)(param_2 + 0x10);
  (**(code **)(*(long *)pbVar5 + 0x20))
            (puVar4 + 0x42,pbVar5,puVar7,*(undefined8 *)(param_2 + 0x38),100,0,0,0,
             *(undefined1 *)(param_2 + 0x4c));
  puVar13 = puVar4 + 0x41;
  *puVar13 = puVar4[0x42];
  do {
    func_0x0001086d9cec();
  } while (extraout_w10 != 0);
  func_0x0001086da6f0(*puVar13);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x45) = 0;
    lVar12 = puVar4[0x41];
    func_0x0001086d9a44();
    lVar15 = *(long *)pbVar5;
    if (lVar15 == 0) {
      func_0x000107c3a5c0();
      lVar15 = *(long *)pbVar5;
    }
    func_0x0001086daed8();
    plVar8 = extraout_x8_00;
    do {
      if (*plVar8 == 0) {
        func_0x0001086d9db4();
        plVar8 = extraout_x8_02;
        uVar2 = extraout_w10_01;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x0001086da704();
        plVar8 = extraout_x8_01;
        uVar2 = extraout_w10_00;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        pbVar14 = *(byte **)(lVar12 + 0x90);
        bVar1 = pbVar14[1];
        uVar9 = (ulong)bVar1;
        bVar3 = *pbVar14 <= bVar1;
        in_ZR = bVar1 == *pbVar14;
        if ((bool)in_ZR) {
          func_0x0001086d9da4();
          bVar1 = extraout_w8;
          if (bVar3) {
            bVar1 = extraout_w9;
          }
          func_0x0001086db318();
          uVar9 = 0;
          *pbVar5 = bVar1;
          pbVar5[1] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          *(byte **)(pbVar14 + 8) = pbVar5;
          *(byte **)(lVar12 + 0x90) = pbVar5;
          pbVar14 = pbVar5;
        }
        pbVar5 = pbVar14 + uVar9 * 0x18 + 0x10;
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        *(undefined8 **)(pbVar14 + uVar9 * 0x18 + 0x18) = puVar4;
        *(long *)(pbVar14 + uVar9 * 0x18 + 0x20) = lVar15;
        func_0x0001086d9df4(*(undefined8 *)(lVar12 + 0x90));
        *(undefined8 *)(lVar12 + 0x10) = 0;
        goto LAB_1086cc500;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1086cc64c();
  puVar4[0x44] = *puVar13;
  func_0x0001086db254();
  func_0x0001086daa48();
  if (*(int *)((long)puVar4 + 0x224) == 0) {
    FUN_1086cc694();
    puVar7 = *(undefined1 **)(puVar4[0x43] + 0x28);
    func_0x0001086dad94();
  }
  else {
    FUN_1086b1f68(auStack_250,*(undefined8 *)(*(long *)(*(long *)puVar4[0x43] + 0xd0) + 0x20),
                  (long *)puVar4[0x43] + 2);
    puVar13 = (undefined8 *)puVar4[0x43];
    if ((bStack_80 & 1) == 0) {
      puVar7 = (undefined1 *)puVar13[5];
      FUN_1086b64dc(*puVar13,puVar7,puVar13[6],7);
      func_0x0001086da27c();
    }
    else {
      func_0x0001086dbc14();
      func_0x0001086da914(*puVar13);
      func_0x0001086dbd48();
      func_0x0001086db350();
      puStack_68 = &uStack_270;
      FUN_1086a15ac();
      func_0x0001086d9ec8(uStack_70);
      if (cStack_c8 == '\x01') {
        func_0x0001086db4e0();
        lVar12 = extraout_x8_03;
        uVar9 = extraout_x9;
        uVar10 = extraout_x10;
      }
      else {
        func_0x0001086db4c8(uStack_270);
        lVar12 = extraout_x8_04;
        uVar9 = extraout_x9_00;
        uVar10 = extraout_x10_00;
      }
      in_ZR = uVar10 == uVar9;
      if (uVar9 < uVar10) {
        FUN_1086a4174(&uStack_270,lVar12 + (long)(int)uVar9 * 0x1a8);
      }
      puVar7 = auStack_250;
      func_0x000107c28de8(puVar4 + 4);
      puVar4[0x3f] = uStack_268;
      puVar4[0x3e] = uStack_270;
      puVar4[0x40] = uStack_260;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_270 = 0;
      func_0x0001086da798();
      func_0x0001086db058();
      func_0x0001086daf5c();
      func_0x0001086da6c4();
    }
    func_0x000107c288c8(auStack_250);
    if ((bStack_80 & 1) == 0) goto LAB_1086cc4f8;
  }
LAB_1086cc4f4:
  do {
    func_0x0001086da27c();
LAB_1086cc4f8:
    while( true ) {
      func_0x0001086da114();
      func_0x000107c326a8();
LAB_1086cc500:
      func_0x000100864c10();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      if ((int)puVar7 == 0) {
        do {
          func_0x0001086da0f8();
          func_0x0001086dad7c();
        } while ((int)puVar7 == 0);
        func_0x0001086db058();
        func_0x0001086daf5c();
      }
      func_0x0001086da6c4();
      puVar6 = auStack_250;
      func_0x000107c288c8();
      in_ZR = (int)puVar7 == 3;
      if ((bool)in_ZR) {
        func_0x0001086da260();
        func_0x000108848514();
        puVar7 = *(undefined1 **)(puVar4[0x43] + 0x28);
        func_0x0001086dad94();
        ___cxa_end_catch();
        goto LAB_1086cc4f4;
      }
      in_ZR = (int)puVar7 == 2;
      if ((bool)in_ZR) break;
      func_0x0001086da260();
      func_0x0001086da298();
      ___cxa_end_catch();
    }
    puVar13 = (undefined8 *)puVar4[0x43];
    func_0x0001086da260();
    func_0x0001086db048(*puVar13);
    ___cxa_end_catch();
    puVar7 = puVar6;
  } while( true );
}



/* Entry: 1086cc64c; end: 1086cc693;  */

long FUN_1086cc64c(long *param_1)

{
  code *pcVar1;
  uint extraout_w9;
  undefined1 auStack_28 [8];
  
  func_0x0001086dbebc(*param_1);
  if ((extraout_w9 >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x0001086db9c0();
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086cc688);
  (*pcVar1)();
}



/* Entry: 1086cc694; end: 1086cc6ab;  */

void FUN_1086cc694(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  func_0x00010563ab98();
  func_0x000107c32694();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1086cc6ac; end: 1086cc6cf;  */

void FUN_1086cc6ac(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1086cc6d0; end: 1086cc6ef;  */

void FUN_1086cc6d0(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1086cc6f0();
  }
  return;
}



/* Entry: 1086cc6f0; end: 1086cc71b;  */

long FUN_1086cc6f0(long param_1)

{
  long lStack_28;
  
  FUN_1086cc71c(param_1 + 0x30);
  func_0x00010867bb28(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086cc71c; end: 1086cc73b;  */

void FUN_1086cc71c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108906338();
  }
  return;
}



/* Entry: 1086cc73c; end: 1086cc803;  */

/* WARNING: Possible PIC construction at 0x0001086cc74c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086cc750) */

undefined8 FUN_1086cc73c(undefined8 param_1)

{
  func_0x000107c32730();
  func_0x00010867bbac();
  FUN_10867bbfc(param_1,0);
  return param_1;
}



/* Entry: 1086cc804; end: 1086cc81f;  */

void FUN_1086cc804(long param_1)

{
  FUN_1086cca88();
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 1086cc820; end: 1086cc843;  */

undefined8 FUN_1086cc820(undefined8 param_1)

{
  FUN_1086cc844();
  return param_1;
}



/* Entry: 1086cc844; end: 1086cc86b;  */

void FUN_1086cc844(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        FUN_1086cca0c(param_1 + 8);
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return;
    }
    FUN_1086cca2c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32708();
    FUN_1086cc8dc();
    return;
  }
  return;
}



/* Entry: 1086cc86c; end: 1086cc8bf;  */

void FUN_1086cc86c(void)

{
  func_0x000107c32708();
  FUN_1086cc8dc();
  return;
}



/* Entry: 1086cc8c0; end: 1086cc8db;  */

void FUN_1086cc8c0(long param_1)

{
  FUN_1086cca2c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086cc8dc; end: 1086cc8ff;  */

undefined8 FUN_1086cc8dc(undefined8 param_1)

{
  FUN_1086cc900();
  return param_1;
}



/* Entry: 1086cc900; end: 1086cc927;  */

long FUN_1086cc900(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_108927a50();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return param_1;
    }
    FUN_1086cc9c8();
    func_0x000107c32818();
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        FUN_108927c2c(param_1);
      }
      else {
        FUN_108927bf4(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1086cc928; end: 1086cc98b;  */

long FUN_1086cc928(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_108927c2c(param_1);
    }
    else {
      FUN_108927bf4(param_1);
    }
  }
  return param_1;
}



/* Entry: 1086cc98c; end: 1086cc9c7;  */

void FUN_1086cc98c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108927a50();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1086cc9c8; end: 1086cc9d3;  */

undefined8 * FUN_1086cc9c8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a98638;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1086cc928(param_1,param_2);
  return param_1;
}



/* Entry: 1086cc9d4; end: 1086cca0b;  */

undefined8 * FUN_1086cc9d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a98638;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1086cc928(param_1,param_3);
  return param_1;
}



/* Entry: 1086cca0c; end: 1086cca2b;  */

void FUN_1086cca0c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108927a50();
  }
  return;
}



/* Entry: 1086cca2c; end: 1086cca4b;  */

void FUN_1086cca2c(void)

{
  func_0x000107c32708();
  FUN_1086cca4c();
  return;
}



/* Entry: 1086cca4c; end: 1086cca73;  */

void FUN_1086cca4c(long param_1)

{
  func_0x000107c327c4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1086cca74();
  return;
}



/* Entry: 1086cca74; end: 1086cca87;  */

void FUN_1086cca74(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1086cc9c8();
    func_0x000107c32818();
    return;
  }
  return;
}



/* Entry: 1086cca88; end: 1086ccad7;  */

void FUN_1086cca88(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c32670();
  func_0x0001086da928();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  func_0x000107c27b7c(param_1 + 0x20,param_2 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x49);
  *(undefined8 *)(unaff_x20 + 0x51) = *(undefined8 *)(unaff_x19 + 0x51);
  *(undefined8 *)(unaff_x20 + 0x49) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  FUN_1086ccad8(unaff_x20 + 0x60,unaff_x19 + 0x60);
  return;
}



/* Entry: 1086ccad8; end: 1086ccaff;  */

void FUN_1086ccad8(long param_1)

{
  func_0x000107c327c4();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1086ccb00();
  return;
}



/* Entry: 1086ccb00; end: 1086ccb13;  */

void FUN_1086ccb00(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1086cca2c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086ccb14; end: 1086ccb6f;  */

long FUN_1086ccb14(long param_1)

{
  long lStack_28;
  
  func_0x0001086ccb40(param_1 + 0x60);
  func_0x000107c279c4(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086ccb70; end: 1086ccb9b;  */

void FUN_1086ccb70(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_1086ccb14();
  }
  return;
}



/* Entry: 1086ccb9c; end: 1086ccbbb;  */

void FUN_1086ccb9c(void)

{
  FUN_1086ccbbc();
  return;
}



/* Entry: 1086ccbbc; end: 1086ccbd7;  */

void FUN_1086ccbbc(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32760();
  if ((extraout_x8 & 1) == 0) {
    FUN_1086ccc04();
  }
  return;
}



/* Entry: 1086ccbd8; end: 1086ccc03;  */

void FUN_1086ccbd8(void)

{
  uint extraout_w8;
  
  func_0x000107c32760();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086ccc04();
  }
  return;
}



/* Entry: 1086ccc04; end: 1086ccc13;  */

void FUN_1086ccc04(long param_1)

{
  long unaff_x19;
  
  func_0x0001086da870();
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    func_0x0001086db1e8();
  }
  return;
}



/* Entry: 1086ccc14; end: 1086ccc8f;  */

void FUN_1086ccc14(long param_1)

{
  long unaff_x19;
  
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    func_0x0001086db1e8();
  }
  return;
}



/* Entry: 1086ccc90; end: 1086ccc97;  */

void FUN_1086ccc90(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    func_0x0001086db1e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086ccc98; end: 1086ccd67;  */

void FUN_1086ccc98(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    func_0x0001086db1e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086ccd68; end: 1086ccd87;  */

void FUN_1086ccd68(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104be3970();
  }
  return;
}



/* Entry: 1086ccd88; end: 1086ccdff;  */

void FUN_1086ccd88(ulong param_1)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001086db5f4();
  if (extraout_w8 != 0x11) {
    func_0x0001086dadd0();
    func_0x0001086db4bc(0x11);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ccdcc();
    *(ulong *)(unaff_x19 + 0x38) = param_1;
  }
  return;
}



/* Entry: 1086cce00; end: 1086cce1f;  */

void FUN_1086cce00(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1088b8278();
  }
  return;
}



/* Entry: 1086cce20; end: 1086cce43;  */

void FUN_1086cce20(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1086cce44; end: 1086cd4bb;  */

void FUN_1086cce44(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_1a8 [208];
  undefined1 auStack_d8 [144];
  long lStack_48;
  
  func_0x000107c32728();
  func_0x000107c32670();
  do {
    uVar9 = unaff_x20;
LAB_1086cce80:
    while( true ) {
      unaff_x20 = uVar9;
      uVar7 = unaff_x19 - unaff_x20;
      uVar9 = (long)uVar7 / 0xd0;
      cVar5 = SBORROW8(uVar9,5);
      cVar6 = (long)(uVar9 - 5) < 0;
      switch(uVar9) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x0001086dbc8c(*(undefined8 *)(unaff_x19 - 0x40));
        if (cVar6 == cVar5) {
          return;
        }
        func_0x0001086da544();
        func_0x0001086ad8d8();
        return;
      case 3:
        func_0x0001086db9a4(unaff_x20,unaff_x20 + 0xd0);
        return;
      case 4:
        func_0x0001086cd544(unaff_x20,unaff_x20 + 0xd0,unaff_x20 + 0x1a0,unaff_x19 - 0xd0);
        return;
      case 5:
        FUN_1086cd5ac(unaff_x20,unaff_x20 + 0xd0,unaff_x20 + 0x1a0,unaff_x20 + 0x270,
                      unaff_x19 - 0xd0);
        return;
      }
      if ((long)uVar7 < 0x1380) {
        if ((param_4 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            uVar9 = unaff_x20;
            unaff_x20 = uVar9 + 0xd0;
            cVar5 = SBORROW8(unaff_x20,unaff_x19);
            cVar6 = (long)(unaff_x20 - unaff_x19) < 0;
            if (unaff_x20 == unaff_x19) break;
            func_0x0001086db48c(*(undefined8 *)(uVar9 + 0x160));
            if (cVar6 != cVar5) {
              func_0x0001086dab20();
              do {
                uVar7 = uVar9;
                FUN_1086ad7c0(uVar7 + 0xd0,uVar7);
                uVar9 = uVar7 - 0xd0;
              } while (lStack_48 < *(long *)(uVar7 - 0x40));
              FUN_1086ad7c0(uVar7,auStack_d8);
              func_0x0001086dab2c();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar13 = 0;
        uVar9 = unaff_x20;
        goto LAB_1086cd1bc;
      }
      if (param_3 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        uVar12 = uVar9 - 2 >> 1;
        uVar7 = uVar12;
        goto LAB_1086cd250;
      }
      lVar13 = unaff_x20 + (uVar9 >> 1) * 0xd0;
      cVar5 = SBORROW8(uVar7,0x6801);
      cVar6 = (long)(uVar7 - 0x6801) < 0;
      if (uVar7 < 0x6801) {
        func_0x0001086db9a4(lVar13,unaff_x20);
      }
      else {
        func_0x0001086db9a4(unaff_x20,lVar13);
        FUN_1086cd4bc(unaff_x20 + 0xd0,lVar13 + -0xd0,unaff_x19 - 0x1a0);
        FUN_1086cd4bc(unaff_x20 + 0x1a0,lVar13 + 0xd0,unaff_x19 - 0x270);
        FUN_1086cd4bc(lVar13 + -0xd0,lVar13,lVar13 + 0xd0);
        func_0x0001086ad8d8(unaff_x20,lVar13);
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) ||
         (func_0x0001086dbc8c(*(undefined8 *)(unaff_x20 - 0x40)), cVar6 != cVar5)) break;
      func_0x0001086dab20();
      uVar7 = unaff_x20;
      if (lStack_48 < *(long *)(unaff_x19 - 0x40)) {
        do {
          uVar9 = uVar7 + 0xd0;
          plVar2 = (long *)(uVar7 + 0x160);
          uVar7 = uVar9;
        } while (*plVar2 <= lStack_48);
      }
      else {
        do {
          uVar9 = uVar7 + 0xd0;
          if (unaff_x19 <= uVar9) break;
          plVar2 = (long *)(uVar7 + 0x160);
          uVar7 = uVar9;
        } while (*plVar2 <= lStack_48);
      }
      uVar7 = unaff_x19;
      uVar12 = unaff_x19;
      if (uVar9 < unaff_x19) {
        do {
          uVar12 = uVar7 - 0xd0;
          plVar2 = (long *)(uVar7 - 0x40);
          uVar7 = uVar12;
        } while (lStack_48 < *plVar2);
      }
      while (uVar9 < uVar12) {
        func_0x0001086dbeb0();
        func_0x0001086ad8d8();
        do {
          plVar2 = (long *)(uVar9 + 0x160);
          uVar9 = uVar9 + 0xd0;
        } while (*plVar2 <= lStack_48);
        do {
          plVar2 = (long *)(uVar12 - 0x40);
          uVar12 = uVar12 - 0xd0;
        } while (lStack_48 < *plVar2);
      }
      uVar7 = uVar9 - 0xd0;
      if (unaff_x20 != uVar7) {
        FUN_1086ad7c0(unaff_x20,uVar7);
      }
      FUN_1086ad7c0(uVar7,auStack_d8);
      func_0x0001086dab2c();
      param_4 = 0;
    }
    func_0x0001086dab20();
    lVar13 = 0;
    do {
      lVar10 = unaff_x20 + lVar13;
      lVar13 = lVar13 + 0xd0;
    } while (*(long *)(lVar10 + 0x160) < lStack_48);
    uVar7 = unaff_x20 + lVar13;
    uVar12 = unaff_x19;
    uVar9 = uVar7;
    if (lVar13 == 0xd0) {
      do {
        uVar11 = uVar12;
        if (uVar12 <= uVar7) break;
        uVar11 = uVar12 - 0xd0;
        plVar2 = (long *)(uVar12 - 0x40);
        uVar12 = uVar11;
      } while (lStack_48 <= *plVar2);
    }
    else {
      do {
        uVar11 = uVar12 - 0xd0;
        plVar2 = (long *)(uVar12 - 0x40);
        uVar12 = uVar11;
      } while (lStack_48 <= *plVar2);
    }
    while (uVar9 < uVar11) {
      func_0x0001086ad8d8(uVar9,uVar11);
      do {
        plVar2 = (long *)(uVar9 + 0x160);
        uVar9 = uVar9 + 0xd0;
      } while (*plVar2 < lStack_48);
      do {
        plVar2 = (long *)(uVar11 - 0x40);
        uVar11 = uVar11 - 0xd0;
      } while (lStack_48 <= *plVar2);
    }
    uVar11 = uVar9 - 0xd0;
    if (unaff_x20 != uVar11) {
      FUN_1086ad7c0(unaff_x20,uVar11);
    }
    FUN_1086ad7c0(uVar11,auStack_d8);
    func_0x0001086dab2c();
    if (uVar7 < uVar12) goto LAB_1086cd030;
    uVar7 = unaff_x20;
    FUN_1086cd640(unaff_x20,uVar11);
    uVar12 = uVar9;
    FUN_1086cd640(uVar9,unaff_x19);
    if ((int)uVar12 == 0) goto code_r0x0001086cd02c;
    unaff_x19 = uVar11;
    if ((uVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1086cd1bc:
  if (uVar9 + 0xd0 == unaff_x19) {
    return;
  }
  if (*(long *)(uVar9 + 0x160) < *(long *)(uVar9 + 0x90)) {
    func_0x0001086dad30(auStack_d8);
    lVar10 = lVar13;
    do {
      lVar4 = unaff_x20 + lVar10;
      FUN_1086ad7c0(lVar4 + 0xd0,lVar4);
      uVar7 = unaff_x20;
      if (lVar10 == 0) goto LAB_1086cd21c;
      lVar10 = lVar10 + -0xd0;
    } while (lStack_48 < *(long *)(lVar4 + -0x40));
    uVar7 = unaff_x20 + lVar10 + 0xd0;
LAB_1086cd21c:
    FUN_1086ad7c0(uVar7,auStack_d8);
    func_0x0001086dab2c();
  }
  lVar13 = lVar13 + 0xd0;
  uVar9 = uVar9 + 0xd0;
  goto LAB_1086cd1bc;
LAB_1086cd250:
  do {
    if ((long)uVar7 <= (long)uVar12) {
      uVar3 = (uVar7 & 0x3fffffffffffffff) << 1 | 1;
      lVar13 = unaff_x20 + uVar3 * 0xd0;
      uVar11 = uVar7 * 2 + 2;
      uVar8 = uVar3;
      if ((long)uVar11 < (long)uVar9) {
        plVar2 = (long *)(lVar13 + 0x90);
        plVar1 = (long *)(lVar13 + 0x160);
        lVar10 = 0xd0;
        if (*plVar1 <= *plVar2) {
          lVar10 = 0;
        }
        lVar13 = lVar13 + lVar10;
        uVar8 = uVar11;
        if (*plVar1 <= *plVar2) {
          uVar8 = uVar3;
        }
      }
      lVar10 = unaff_x20 + uVar7 * 0xd0;
      if (*(long *)(lVar10 + 0x90) <= *(long *)(lVar13 + 0x90)) {
        func_0x0001086ad844(auStack_d8,lVar10);
        do {
          lVar10 = lVar13;
          func_0x0001086db564();
          FUN_1086ad7c0();
          if ((long)uVar12 < (long)uVar8) break;
          uVar3 = uVar8 << 1 | 1;
          lVar13 = unaff_x20 + uVar3 * 0xd0;
          uVar11 = uVar8 * 2 + 2;
          uVar8 = uVar3;
          if ((long)uVar11 < (long)uVar9) {
            plVar2 = (long *)(lVar13 + 0x90);
            plVar1 = (long *)(lVar13 + 0x160);
            lVar4 = 0xd0;
            if (*plVar1 <= *plVar2) {
              lVar4 = 0;
            }
            lVar13 = lVar13 + lVar4;
            uVar8 = uVar11;
            if (*plVar1 <= *plVar2) {
              uVar8 = uVar3;
            }
          }
        } while (lStack_48 <= *(long *)(lVar13 + 0x90));
        FUN_1086ad7c0(lVar10,auStack_d8);
        func_0x0001086dab2c();
      }
    }
    uVar7 = uVar7 - 1;
  } while (-1 < (long)uVar7);
  do {
    if ((long)uVar9 < 2) {
      return;
    }
    func_0x0001086ad844(auStack_1a8,unaff_x20);
    uVar12 = 0;
    uVar7 = unaff_x20;
    do {
      lVar13 = uVar7 + uVar12 * 0xd0;
      uVar3 = uVar12 << 1 | 1;
      uVar11 = uVar12 * 2 + 2;
      uVar8 = lVar13 + 0xd0U;
      uVar12 = uVar3;
      if (((long)uVar11 < (long)uVar9) &&
         (uVar8 = lVar13 + 0x1a0, uVar12 = uVar11,
         *(long *)(lVar13 + 0x230) <= *(long *)(lVar13 + 0x160))) {
        uVar8 = lVar13 + 0xd0U;
        uVar12 = uVar3;
      }
      FUN_1086ad7c0(uVar7,uVar8);
      uVar7 = uVar8;
    } while ((long)uVar12 <= (long)(uVar9 - 2 >> 1));
    unaff_x19 = unaff_x19 - 0xd0;
    if (uVar8 == unaff_x19) {
      FUN_1086ad7c0(uVar8,auStack_1a8);
    }
    else {
      func_0x0001086da6cc();
      FUN_1086ad7c0();
      FUN_1086ad7c0(unaff_x19,auStack_1a8);
      uVar7 = (uVar8 - unaff_x20) + 0xd0;
      cVar5 = SBORROW8(uVar7,0xd1);
      cVar6 = (long)((uVar8 - unaff_x20) + -1) < 0;
      if (0xd0 < (long)uVar7) {
        uVar12 = uVar7 / 0xd0 - 2 >> 1;
        uVar7 = unaff_x20 + uVar12 * 0xd0;
        func_0x0001086db48c(*(undefined8 *)(uVar7 + 0x90));
        if (cVar6 != cVar5) {
          func_0x0001086dad30(auStack_d8);
          do {
            uVar11 = uVar7;
            FUN_1086ad7c0(uVar8,uVar11);
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            uVar7 = unaff_x20 + uVar12 * 0xd0;
            uVar8 = uVar11;
          } while (*(long *)(uVar7 + 0x90) < lStack_48);
          FUN_1086ad7c0(uVar11,auStack_d8);
          func_0x0001086dab2c();
        }
      }
    }
    FUN_1086a9ac4(auStack_1a8);
    uVar9 = uVar9 - 1;
  } while( true );
code_r0x0001086cd02c:
  if ((uVar7 & 1) == 0) {
LAB_1086cd030:
    FUN_1086cce44(unaff_x20,uVar11,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_1086cce80;
}



/* Entry: 1086cd4bc; end: 1086cd5ab;  */

/* WARNING: Possible PIC construction at 0x0001086cd4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086cd520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086cd4fc) */
/* WARNING: Removing unreachable block (ram,0x0001086cd508) */
/* WARNING: Removing unreachable block (ram,0x0001086cd524) */
/* WARNING: Removing unreachable block (ram,0x0001086cd530) */

void FUN_1086cd4bc(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar2 = param_3;
  func_0x0001086dbf08();
  lVar3 = *(long *)(param_2 + 0x90);
  if (lVar3 < *(long *)(param_1 + 0x90)) {
    if (lVar3 <= *(long *)(lVar2 + 0x90)) {
      unaff_x30 = 0x1086cd4fc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = param_3;
      unaff_x29 = puVar1;
    }
  }
  else {
    if (lVar3 <= *(long *)(lVar2 + 0x90)) {
      return;
    }
    func_0x0001086da5dc();
    unaff_x30 = 0x1086cd524;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c324b0();
  func_0x000107c32574();
  func_0x0001086ad844();
  func_0x0001086b0314();
  FUN_1086ad7c0();
  func_0x0001086b069c();
  FUN_1086ad7c0();
  FUN_1086a9ac4((undefined1 *)((long)register0x00000008 + -0xf0));
  return;
}



/* Entry: 1086cd5ac; end: 1086cd63f;  */

/* WARNING: Possible PIC construction at 0x0001086cd5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086cd5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086cd610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086cd600) */
/* WARNING: Removing unreachable block (ram,0x0001086cd60c) */
/* WARNING: Removing unreachable block (ram,0x0001086cd5ec) */
/* WARNING: Removing unreachable block (ram,0x0001086cd5f8) */
/* WARNING: Removing unreachable block (ram,0x0001086cd614) */
/* WARNING: Removing unreachable block (ram,0x0001086cd620) */

void FUN_1086cd5ac(void)

{
  long in_x3;
  long in_x4;
  undefined1 auStack_130 [208];
  
  func_0x000107c32670();
  func_0x0001086cd544();
  if (*(long *)(in_x4 + 0x90) < *(long *)(in_x3 + 0x90)) {
    func_0x0001086daac4();
    func_0x000107c324b0();
    func_0x000107c32574();
    func_0x0001086ad844();
    func_0x0001086b0314();
    FUN_1086ad7c0();
    func_0x0001086b069c();
    FUN_1086ad7c0();
    FUN_1086a9ac4(auStack_130);
    return;
  }
  return;
}



/* Entry: 1086cd640; end: 1086cd7cf;  */

void FUN_1086cd640(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_120 [144];
  long lStack_90;
  
  func_0x000107c32678();
  lVar6 = (param_2 - param_1) / 0xd0;
  cVar1 = SBORROW8(lVar6,5);
  cVar2 = lVar6 + -5 < 0;
  switch(lVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001086dbc4c(*(undefined8 *)(unaff_x20 + -0x40),1);
    if (cVar2 != cVar1) {
      func_0x0001086ad8d8();
    }
    break;
  case 3:
    FUN_1086cd4bc();
    break;
  case 4:
    func_0x0001086cd544();
    break;
  case 5:
    FUN_1086cd5ac();
    break;
  default:
    FUN_1086cd4bc();
    lVar6 = 0;
    iVar7 = 0;
    lVar5 = unaff_x19 + 0x270;
    lVar4 = unaff_x19 + 0x1a0;
    while (lVar3 = lVar5, lVar3 != unaff_x20) {
      if (*(long *)(lVar3 + 0x90) < *(long *)(lVar4 + 0x90)) {
        func_0x0001086dad30(auStack_120);
        lVar5 = lVar6;
        do {
          lVar4 = unaff_x19 + lVar5;
          FUN_1086ad7c0(lVar4 + 0x270,lVar4 + 0x1a0);
          if (lVar5 == -0x1a0) break;
          lVar5 = lVar5 + -0xd0;
        } while (lStack_90 < *(long *)(lVar4 + 0x160));
        FUN_1086ad7c0();
        iVar7 = iVar7 + 1;
        FUN_1086a9ac4(auStack_120);
        if (iVar7 == 8) {
          return;
        }
      }
      lVar6 = lVar6 + 0xd0;
      lVar4 = lVar3;
      lVar5 = lVar3 + 0xd0;
    }
  }
  return;
}



/* Entry: 1086cd7d0; end: 1086cd803;  */

void FUN_1086cd7d0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xd0;
    FUN_1086a9ac4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086cd804; end: 1086cd80b;  */

void FUN_1086cd804(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xd0;
    FUN_1086a9ac4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086cd80c; end: 1086cd85b;  */

void FUN_1086cd80c(void)

{
  func_0x000107c32644();
  func_0x0001086cd830();
  return;
}



/* Entry: 1086cd85c; end: 1086cd863;  */

void FUN_1086cd85c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_1088ff424();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086cd864; end: 1086cd897;  */

void FUN_1086cd864(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_1088ff424();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086cd898; end: 1086cd8b3;  */

void FUN_1086cd898(long param_1)

{
  func_0x000107c27994();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1086cd8b4; end: 1086cd8ff;  */

void FUN_1086cd8b4(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c32670();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_1086cd940(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c325c4();
  return;
}



/* Entry: 1086cd900; end: 1086cd93f;  */

void FUN_1086cd900(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000107c3274c();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1086ccb9c();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 1086cd940; end: 1086cd9ab;  */

void FUN_1086cd940(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000107c325fc();
  func_0x000107c325e0();
  func_0x000107c3280c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    func_0x000107c32804();
    FUN_1086cd9d8();
    lStack_38 = lStack_38 + 0x20;
  }
  func_0x000107c3273c();
  func_0x000107c326fc();
  FUN_1086cd9ac();
  FUN_1086ccbd8(auStack_60);
  return;
}



/* Entry: 1086cd9ac; end: 1086cd9d7;  */

void FUN_1086cd9ac(long param_1)

{
  long unaff_x19;
  
  func_0x000107c32814();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x20) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086cd9d8; end: 1086cd9ef;  */

void FUN_1086cd9d8(long param_1,long param_2)

{
  func_0x0001086da928();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1086cd9f0; end: 1086cda1b;  */

long * FUN_1086cd9f0(long *param_1)

{
  FUN_1086cda1c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086cda1c; end: 1086cda23;  */

void FUN_1086cda1c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x000107c3281c(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086cda24; end: 1086cda53;  */

void FUN_1086cda24(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c32670();
  while (func_0x000107c3281c(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086cda54; end: 1086cda7f;  */

void FUN_1086cda54(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32724();
  FUN_1086cdaf0();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1086cda80; end: 1086cdaef;  */

void FUN_1086cda80(void)

{
  undefined8 uStack_48;
  
  func_0x0001086da060();
  func_0x0001086db480();
  FUN_1086cdb14();
  func_0x0001086db150();
  FUN_1086cd900();
  func_0x0001086da610(uStack_48);
  FUN_1086cdaf0();
  func_0x000107c326ec();
  FUN_1086cd8b4();
  func_0x0001086db474();
  FUN_1086cd9f0();
  return;
}



/* Entry: 1086cdaf0; end: 1086cdb13;  */

void FUN_1086cdaf0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  func_0x000107c27994();
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  return;
}



/* Entry: 1086cdb14; end: 1086cdb53;  */

ulong FUN_1086cdb14(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  if (param_2 >> 0x3b == 0) {
    uVar2 = param_1[2] - *param_1 >> 4;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x7ffffffffffffff;
    }
    return uVar2;
  }
  func_0x0001086ccb90();
  func_0x0001086da8f4();
  puVar1 = (undefined8 *)0x270;
  __Znwm();
  *puVar1 = FUN_1086d9034;
  puVar1[1] = FUN_1086d9178;
  FUN_1086cdbd8(puVar1 + 4);
  func_0x0001086db1f8();
  func_0x0001086d9e8c();
  puVar1[0x4b] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  uVar2 = *unaff_x20;
  func_0x000107c3265c(uVar2);
  func_0x0001086da4f0();
  return uVar2;
}



/* Entry: 1086cdb54; end: 1086cdbd7;  */

void FUN_1086cdb54(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x0001086da8f4();
  puVar1 = (undefined8 *)0x270;
  __Znwm();
  *puVar1 = FUN_1086d9034;
  puVar1[1] = FUN_1086d9178;
  FUN_1086cdbd8(puVar1 + 4);
  func_0x0001086db1f8();
  func_0x0001086d9e8c();
  puVar1[0x4b] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  func_0x000107c3265c(*unaff_x20);
  func_0x0001086da4f0();
  return;
}



/* Entry: 1086cdbd8; end: 1086cdc4b;  */

void FUN_1086cdbd8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = param_2;
  func_0x0001086da3b0();
  func_0x0001086db398();
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x000107c28de8(unaff_x20 + 0x20,lVar2 + 0x30);
  FUN_1086ce06c(unaff_x20 + 0x1f0,param_2 + 0x200);
  return;
}



/* Entry: 1086cdc4c; end: 1086ce033;  */

void FUN_1086cdc4c(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar8;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  ulong uVar9;
  ulong extraout_x8_06;
  code *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  ulong uStack_b0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined1 uStack_80;
  long alStack_78 [2];
  undefined8 auStack_68 [3];
  long *plStack_50;
  
  puVar5 = &uStack_b0;
  func_0x0001086dbe38();
  func_0x000100864738();
  puVar4 = (undefined8 *)0xd8;
  __Znwm();
  *puVar4 = FUN_1086d8dc0;
  puVar4[1] = FUN_1086d9000;
  puVar4[0x19] = unaff_x20;
  func_0x0001086dad20();
  func_0x0001086d9e8c();
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x10))
            (puVar4 + 0x17,*(long **)(unaff_x20 + 0x18),unaff_x20 + 0x30,0x2d0124);
  func_0x000107c28874(&uStack_b0);
  func_0x000107c28878(auStack_68,2);
  uVar3 = auStack_68[0];
  auStack_68[0] = 0;
  func_0x000107c28888(lStack_a0 + 0x18,uVar3);
  func_0x000107c28890(auStack_68);
  *(undefined8 *)(lStack_a0 + 8) = 2;
  func_0x000107c2887c(lStack_a0,auStack_a8);
  func_0x000107c28894(lStack_a0,0,unaff_x20 + 0x10);
  puVar7 = (undefined8 *)0x1;
  func_0x000107c28898(lStack_a0,1,puVar4 + 0x17);
  uVar9 = uStack_b0;
  uStack_b0 = 0;
  puVar4[0x18] = uVar9;
  auStack_68[0] = 0;
  func_0x000107c27f9c(auStack_68);
  func_0x000107c2889c();
  puVar4[4] = puVar4[0x18];
  do {
    func_0x0001086d9cec();
  } while (extraout_w10 != 0);
  func_0x0001086da6f0(puVar4[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    lVar12 = puVar4[4];
    func_0x0001086db78c();
    lVar13 = *puVar5;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *puVar5;
    }
    func_0x0001086dbed4();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x0001086d9db4();
        plVar6 = extraout_x8_01;
        uVar2 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x0001086da704();
        plVar6 = extraout_x8_00;
        uVar2 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) {
        lVar11 = *(long *)(lVar12 + 0x90);
        func_0x0001086dab34();
        if ((bool)in_ZR) {
          func_0x0001086d9da4();
          func_0x0001086d9a64();
          func_0x0001086d9b28();
          *(ulong **)(lVar11 + 8) = puVar5;
          *(ulong **)(lVar12 + 0x90) = puVar5;
        }
        func_0x0001086dab58();
        *(long *)(extraout_x8_05 + 0x20) = lVar13;
        goto LAB_1086cdef0;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar6 = puVar4 + 4;
  func_0x000107c28870();
  lVar12 = *plVar6;
  func_0x0001086da414();
  func_0x0001086da778();
  if (lVar12 == 0) {
    func_0x0001086da27c();
  }
  else {
    puVar4[0x18] = puVar4[0x17];
    do {
      func_0x0001086d9cec();
    } while (extraout_w10_02 != 0);
    func_0x0001086da6f0(puVar4[0x18]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x1a) = 1;
      lVar12 = puVar4[0x18];
      func_0x0001086db78c();
      lVar13 = *plVar6;
      if (lVar13 == 0) {
        func_0x000107c3a5c0();
        lVar13 = *plVar6;
      }
      func_0x0001086dbed4();
      plVar8 = extraout_x8_02;
      do {
        if (*plVar8 == 0) {
          func_0x0001086d9db4();
          plVar8 = extraout_x8_04;
          uVar2 = extraout_w10_04;
          uVar10 = extraout_w11_02;
        }
        else {
          func_0x0001086da704();
          plVar8 = extraout_x8_03;
          uVar2 = extraout_w10_03;
          uVar10 = extraout_w11_01;
        }
        if ((uVar10 & 1) != 0) {
          pbVar14 = *(byte **)(lVar12 + 0x90);
          uVar9 = (ulong)pbVar14[1];
          in_ZR = pbVar14[1] == *pbVar14;
          if ((bool)in_ZR) {
            func_0x0001086d9da4();
            func_0x0001086d9a64();
            func_0x0001086d99e4();
            *(long **)(lVar12 + 0x90) = plVar6;
            uVar9 = extraout_x8_06;
          }
          uVar9 = uVar9 & 0xffffffff;
          pbVar1 = pbVar14 + uVar9 * 0x18 + 0x10;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 **)(pbVar14 + uVar9 * 0x18 + 0x18) = puVar4;
          *(long *)(pbVar14 + uVar9 * 0x18 + 0x20) = lVar13;
LAB_1086cdef0:
          func_0x0001086d9df4(*(undefined8 *)(lVar12 + 0x90));
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_1086cdf00;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    puVar7 = puVar4 + 0x18;
    FUN_10866b034(puVar7);
    FUN_10866e480(puVar4 + 4,puVar7);
    func_0x0001086da778();
    puVar7 = (undefined8 *)puVar4[0x19];
    plVar6 = alStack_78;
    FUN_1086ce034();
    if ((alStack_78[0] != 0) && (in_ZR = *(char *)(alStack_78[0] + 0x110) == '\x01', !(bool)in_ZR))
    {
      func_0x0001086dbc20();
      func_0x0001086db6fc();
      plStack_50 = (long *)0x0;
      func_0x000107c326e0();
      func_0x0001086da8bc();
      puVar7 = puVar4 + 0x10;
      FUN_1086ce06c();
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      uStack_80 = 0;
      plStack_50 = plVar6;
      func_0x0001086da544();
      (*extraout_x9)();
      func_0x0001086db0ec();
      func_0x0001086db148();
      func_0x0001086daf78();
      func_0x0001086dbb08();
      func_0x0001086da8a8();
      func_0x0001086da770();
      func_0x0001086da27c();
      goto LAB_1086cde78;
    }
    func_0x0001086da27c();
    func_0x0001086dbb08();
    func_0x0001086da8a8();
  }
  func_0x0001086da770();
LAB_1086cde78:
  while( true ) {
    func_0x0001086da114();
    func_0x000107c326a8();
LAB_1086cdf00:
    func_0x000100864c10();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar7 != 0) goto LAB_1086ce008;
    do {
      func_0x0001086da0f8();
LAB_1086ce008:
      func_0x0001086dad7c();
    } while ((int)puVar7 == 0);
    func_0x0001086da260();
    func_0x0001086da298();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086ce034; end: 1086ce06b;  */

void FUN_1086ce034(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      func_0x0001086dbcfc();
    }
  }
  return;
}



/* Entry: 1086ce06c; end: 1086ce0b3;  */

void FUN_1086ce06c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001086da3b0();
  func_0x0001086db398(*(undefined8 *)(param_2 + 0x18));
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086db6b0();
  return;
}



/* Entry: 1086ce0b4; end: 1086ce0d7;  */

undefined8 FUN_1086ce0b4(undefined8 param_1)

{
  func_0x0001086da8bc();
  func_0x0001086ba8d0();
  return param_1;
}



/* Entry: 1086ce0d8; end: 1086ce0eb;  */

void FUN_1086ce0d8(void)

{
  FUN_1086ce0b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ce0ec; end: 1086ce11f;  */

undefined8 FUN_1086ce0ec(undefined8 param_1)

{
  func_0x000107c326e0();
  FUN_1086ce1e4();
  return param_1;
}



/* Entry: 1086ce120; end: 1086ce143;  */

undefined8 FUN_1086ce120(long param_1,undefined8 param_2)

{
  func_0x0001086da8bc(param_2,param_1 + 8);
  FUN_1086ba840();
  return param_2;
}



/* Entry: 1086ce144; end: 1086ce1af;  */

void FUN_1086ce144(long param_1,ulong *param_2)

{
  ulong uVar1;
  long alStack_30 [2];
  
  uVar1 = *param_2;
  FUN_1086ce034(alStack_30,param_1 + 8);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0x110) & 1) == 0)) {
    if ((uVar1 >> 0x20 & 1) == 0) {
      FUN_1086b9f58(alStack_30[0],*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                    param_1 + 0x28);
    }
    else {
      FUN_1086ba124(alStack_30[0],*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                    uVar1);
    }
  }
  func_0x0001086da520();
  return;
}



/* Entry: 1086ce1b0; end: 1086ce1d7;  */

void FUN_1086ce1b0(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a63e68);
  func_0x0001086d9b48();
  return;
}


