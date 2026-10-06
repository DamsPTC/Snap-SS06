/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0066896c; end: 00668c53;  */

ulong * FUN_0066896c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  bool bVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong *extraout_x9;
  ulong extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  ulong auStack_a8 [4];
  undefined1 *puStack_88;
  undefined1 *puStack_78;
  undefined8 uStack_68;
  
  func_0x006743c8();
  if (*param_2 != 0) goto LAB_00668c14;
  *(int *)(param_2 + 0xe) = (int)param_2[0xe] + (int)param_1[1] * 0x58;
  puVar10 = param_2;
  uStack_68 = extraout_x8;
  func_0x00675590(*param_1);
  puVar13 = param_1;
  if (!(bool)in_ZR) {
    puVar13 = extraout_x9;
  }
  puVar1 = puVar13 + (int)param_1[1];
  while( true ) {
    iVar9 = (int)puVar10;
    bVar8 = puVar13 == puVar1;
    if (bVar8) break;
    uVar19 = *puVar13;
    uVar14 = *(uint *)(uVar19 + 0x10);
    uVar11 = *param_2;
    if ((uVar14 >> 5 & 1) != 0) {
      if (uVar11 != 0) {
        func_0x00674fcc();
        func_0x00674bbc();
        func_0x00676484();
LAB_00668c0c:
        do {
          FUN_005558a0(auStack_a8);
LAB_00668c14:
          func_0x00674fcc();
          func_0x00674bbc();
          func_0x00676484();
        } while( true );
      }
      *(int *)(param_2 + 0x11) = (int)param_2[0x11] + 1;
      uVar14 = *(uint *)(uVar19 + 0x10);
    }
    uVar15 = *(ulong *)(uVar19 + 0x18) & 0xfffffffffffffffc;
    param_1 = param_2;
    if ((uVar14 >> 4 & 1) == 0) {
      if (uVar11 != 0) {
LAB_00668be0:
        func_0x00674fcc();
        func_0x00674bbc();
        FUN_00776794(auStack_a8);
        goto LAB_00668c0c;
      }
LAB_00668a2c:
      uVar11 = uVar15;
      FUN_00668cb8();
      iVar9 = (int)uVar11;
      cVar6 = SBORROW4(iVar9,1);
      cVar7 = iVar9 + -1 < 0;
      if (iVar9 == 1) {
        puVar10 = (ulong *)((long)&MACH_HEADER.magic + 3);
        func_0x0065bbfc();
      }
      else {
        if (iVar9 != 0) {
          uVar11 = 0;
          bVar8 = true;
          goto LAB_00668a64;
        }
        func_0x006754e8();
      }
    }
    else {
      if (uVar11 != 0) goto LAB_00668be0;
      uVar11 = *(ulong *)(uVar19 + 0x38) & 0xfffffffffffffffc;
      cVar7 = (long)uVar11 < 0;
      cVar6 = false;
      if (uVar11 == 0) goto LAB_00668a2c;
      bVar8 = false;
LAB_00668a64:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c0,uVar15);
      func_0x00570864(auStack_c0);
      FUN_00664d54(auStack_d8,uVar15,1);
      if (bVar8) {
        FUN_0066460c(auStack_f0,uVar15);
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f0,uVar11);
      }
      func_0x00676c1c();
      auStack_a8[0] = extraout_x10;
      if (cVar7 == cVar6) {
        auStack_a8[0] = uVar15;
      }
      func_0x00676374();
      func_0x00674ec4();
      puStack_88 = extraout_x10_00;
      if (cVar7 == cVar6) {
        puStack_88 = auStack_d8;
      }
      func_0x006746b0();
      puStack_78 = extraout_x10_01;
      if (cVar7 == cVar6) {
        puStack_78 = auStack_f0;
      }
      param_1 = auStack_a8;
      FUN_00668d44(param_1,&uStack_68,4,1);
      lVar17 = 0;
      while (lVar16 = lVar17, puVar12 = &uStack_68, lVar16 != 0x30) {
        param_1 = *(ulong **)((long)auStack_a8 + lVar16);
        FUN_00669688(param_1,*(undefined8 *)((long)auStack_a8 + lVar16 + 8),
                     *(undefined8 *)((long)auStack_a8 + lVar16 + 0x10),
                     *(undefined8 *)((long)auStack_a8 + lVar16 + 0x18));
        lVar17 = lVar16 + 0x10;
        if ((int)param_1 != 0) {
          puVar12 = (undefined8 *)((long)auStack_a8 + lVar16);
          do {
            puVar4 = (undefined8 *)((long)auStack_a8 + lVar17 + 0x10);
            do {
              puVar18 = puVar4;
              if (lVar17 == 0x30) {
                puVar12 = puVar12 + 2;
                goto LAB_00668b68;
              }
              param_1 = (ulong *)*puVar12;
              FUN_00669688(param_1,puVar12[1],*puVar18,puVar18[1]);
              lVar17 = lVar17 + 0x10;
              puVar4 = puVar18 + 2;
            } while (((ulong)param_1 & 1) != 0);
            uVar20 = *puVar18;
            puVar12[3] = puVar18[1];
            puVar12[2] = uVar20;
            puVar12 = puVar12 + 2;
          } while( true );
        }
      }
LAB_00668b68:
      puVar10 = (ulong *)(ulong)((int)((ulong)((long)puVar12 - (long)auStack_a8) >> 4) + 1);
      func_0x00675548();
      func_0x00674d64();
      func_0x00674d80();
      func_0x00675368();
    }
    if ((((*(uint *)(uVar19 + 0x10) ^ 0xffffffff) & 0x408) == 0) &&
       (*(int *)(uVar19 + 0x58) == 0xc || *(int *)(uVar19 + 0x58) == 9)) {
      puVar10 = (ulong *)((long)&MACH_HEADER.magic + 1);
      param_1 = param_2;
      func_0x0065bbfc();
    }
    puVar13 = puVar13 + 1;
  }
  func_0x00674120(uStack_68);
  if (bVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00674928();
  func_0x00674d80();
  func_0x00675368();
  func_0x00674bc8();
  if (*param_1 == 0) {
    iVar9 = (int)param_1[0xe] + (iVar9 * 4 + 7U & 0xfffffff8);
LAB_006754a4:
    *(int *)(param_1 + 0xe) = iVar9;
    return param_1;
  }
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  if (*param_1 == 0) {
    iVar9 = (int)param_1[0xe] + iVar9 * 8;
    goto LAB_006754a4;
  }
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  uVar11 = (ulong)(char)*(byte *)((long)param_1 + 0x17);
  if ((long)uVar11 < 0) {
    puVar13 = (ulong *)*param_1;
    if (0x19 < (byte)*puVar13 - 0x61) goto LAB_00668d38;
    uVar11 = param_1[1];
  }
  else {
    puVar13 = param_1;
    if (0x19 < (byte)*param_1 - 0x61) goto LAB_00668d38;
  }
  puVar10 = (ulong *)0x0;
  while( true ) {
    if (uVar11 == 0) {
      return puVar10;
    }
    bVar3 = (byte)*puVar13;
    bVar8 = 0x19 < bVar3 - 0x61;
    bVar5 = 9 < bVar3 - 0x30;
    if (bVar3 != 0x5f && (bVar8 && bVar5)) break;
    uVar14 = (uint)puVar10;
    if (bVar3 == 0x5f) {
      uVar14 = 1;
    }
    uVar2 = (uint)puVar10;
    if (bVar8 && bVar5) {
      uVar2 = uVar14;
    }
    puVar10 = (ulong *)(ulong)uVar2;
    uVar11 = uVar11 - 1;
    puVar13 = (ulong *)((long)puVar13 + 1);
  }
LAB_00668d38:
  return (ulong *)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00668c54; end: 00668cb7;  */

byte * FUN_00668c54(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  
  if (*(long *)param_1 == 0) {
    iVar6 = *(int *)(param_1 + 0x70) + (param_2 * 4 + 7U & 0xfffffff8);
LAB_006754a4:
    *(int *)(param_1 + 0x70) = iVar6;
    return param_1;
  }
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  if (*(long *)param_1 == 0) {
    iVar6 = *(int *)(param_1 + 0x70) + param_2 * 8;
    goto LAB_006754a4;
  }
  func_0x006743d8();
  func_0x00674134();
  func_0x00674d28();
  lVar9 = (long)(char)param_1[0x17];
  if (lVar9 < 0) {
    pbVar7 = *(byte **)param_1;
    if (0x19 < *pbVar7 - 0x61) goto LAB_00668d38;
    lVar9 = *(long *)(param_1 + 8);
  }
  else {
    pbVar7 = param_1;
    if (0x19 < *param_1 - 0x61) goto LAB_00668d38;
  }
  pbVar8 = (byte *)0x0;
  while( true ) {
    if (lVar9 == 0) {
      return pbVar8;
    }
    bVar3 = *pbVar7;
    bVar4 = 0x19 < bVar3 - 0x61;
    bVar5 = 9 < bVar3 - 0x30;
    if (bVar3 != 0x5f && (bVar4 && bVar5)) break;
    uVar2 = (uint)pbVar8;
    if (bVar3 == 0x5f) {
      uVar2 = 1;
    }
    uVar1 = (uint)pbVar8;
    if (bVar4 && bVar5) {
      uVar1 = uVar2;
    }
    pbVar8 = (byte *)(ulong)uVar1;
    lVar9 = lVar9 + -1;
    pbVar7 = pbVar7 + 1;
  }
LAB_00668d38:
  return (byte *)((long)&MACH_HEADER.magic + 2);
}



/* Entry: 00668cb8; end: 00668d43;  */

undefined4 FUN_00668cb8(byte *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar7 = (long)(char)param_1[0x17];
  if (lVar7 < 0) {
    pbVar6 = *(byte **)param_1;
    if (0x19 < *pbVar6 - 0x61) {
      return 2;
    }
    lVar7 = *(long *)(param_1 + 8);
  }
  else {
    pbVar6 = param_1;
    if (0x19 < *param_1 - 0x61) {
      return 2;
    }
  }
  uVar5 = 0;
  while( true ) {
    if (lVar7 == 0) {
      return uVar5;
    }
    bVar2 = *pbVar6;
    bVar3 = 0x19 < bVar2 - 0x61;
    bVar4 = 9 < bVar2 - 0x30;
    if (bVar2 != 0x5f && (bVar3 && bVar4)) break;
    uVar1 = uVar5;
    if (bVar2 == 0x5f) {
      uVar1 = 1;
    }
    if (bVar3 && bVar4) {
      uVar5 = uVar1;
    }
    lVar7 = lVar7 + -1;
    pbVar6 = pbVar6 + 1;
  }
  return 2;
}



/* Entry: 00668d44; end: 006692ab;  */

/* WARNING: Possible PIC construction at 0x006693bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006693c0) */
/* WARNING: Removing unreachable block (ram,0x006693d0) */
/* WARNING: Removing unreachable block (ram,0x006693ec) */
/* WARNING: Removing unreachable block (ram,0x006693f4) */
/* WARNING: Removing unreachable block (ram,0x006693fc) */
/* WARNING: Removing unreachable block (ram,0x00669400) */
/* WARNING: Removing unreachable block (ram,0x006752c4) */

void FUN_00668d44(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uVar17;
  ulong in_register_00005008;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
LAB_00668d74:
  puStack_78 = param_3 + -2;
  puStack_80 = param_3 + -4;
LAB_00668d8c:
  uVar14 = (long)param_3 - (long)param_2 >> 4;
  switch(uVar14) {
  case 0:
  case 1:
    goto LAB_00669294;
  case 2:
    puVar5 = param_3 + -2;
    uVar14 = *puVar5;
    func_0x00675b14(uVar14,param_3[-1]);
    if ((int)uVar14 != 0) {
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uVar14 = *puVar5;
      param_2[1] = param_3[-1];
      *param_2 = uVar14;
      param_3[-1] = uStack_68;
      *puVar5 = uStack_70;
    }
    goto LAB_00669294;
  case 3:
    puVar5 = param_2 + 2;
    func_0x00675ee0(param_2,puVar5,puStack_78);
    func_0x00676158();
    uVar14 = *puVar5;
    func_0x00675538(uVar14,puVar5[1]);
    uVar11 = *param_2;
    func_0x00675ab0(uVar11,param_2[1]);
    if ((uVar14 & 1) == 0) {
      if ((int)uVar11 != 0) {
        func_0x00676108();
        param_2[1] = in_register_00005008;
        *param_2 = param_1;
        uVar14 = *unaff_x19;
        func_0x00675538(uVar14,unaff_x19[1]);
        if ((int)uVar14 != 0) {
          func_0x00676b80();
        }
      }
    }
    else {
      if ((int)uVar11 == 0) {
        func_0x00676b80();
        uVar14 = *param_2;
        func_0x00675ab0(uVar14,param_2[1]);
        if ((int)uVar14 == 0) {
          return;
        }
        func_0x00676108();
      }
      else {
        in_register_00005008 = param_5[1];
        param_1 = *param_5;
        uVar14 = *param_2;
        param_5[1] = param_2[1];
        *param_5 = uVar14;
      }
      param_2[1] = in_register_00005008;
      *param_2 = param_1;
    }
    return;
  case 4:
    puVar5 = puStack_78;
    func_0x00675ee0(param_2,param_2 + 2,param_2 + 4);
    break;
  case 5:
    param_4 = param_2 + 6;
    func_0x00675ee0(param_2,param_2 + 2,param_2 + 4,param_4,puStack_78);
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar5 = param_4;
    func_0x006749c4();
    unaff_x30 = 0x6693c0;
    register0x00000008 = (BADSPACEBASE *)&puStack_80;
    break;
  default:
    goto code_r0x00668da0;
  }
  *(ulong **)((long)register0x00000008 + -0x30) = param_4;
  *(ulong **)((long)register0x00000008 + -0x28) = param_5;
  *(ulong **)((long)register0x00000008 + -0x20) = param_2;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x006749c4();
  FUN_006692c4();
  uVar14 = *puVar5;
  func_0x00675538(uVar14,puVar5[1]);
  iVar4 = (int)uVar14;
  if (((iVar4 != 0) && (func_0x00675514(), iVar4 != 0)) && (func_0x006754f0(), iVar4 != 0)) {
    func_0x00676ab8();
  }
  return;
code_r0x00668da0:
  if ((long)uVar14 < 0x18) {
    if (((ulong)param_5 & 1) == 0) {
      puVar5 = param_2;
      if (param_2 != param_3) {
        while( true ) {
          puVar7 = puVar5;
          param_2 = param_2 + 2;
          puVar5 = puVar7 + 2;
          if (puVar5 == param_3) break;
          uVar14 = puVar7[2];
          func_0x00675b14(uVar14,puVar7[3]);
          if ((int)uVar14 != 0) {
            uVar11 = puVar7[2];
            uVar12 = puVar7[3];
            puVar7 = param_2;
            do {
              puVar15 = puVar7;
              puVar15[1] = puVar15[-1];
              *puVar15 = puVar15[-2];
              func_0x00674cfc();
              FUN_006692ac();
              puVar7 = puVar15 + -2;
            } while ((uVar14 & 1) != 0);
            puVar15[-2] = uVar11;
            puVar15[-1] = uVar12;
          }
        }
      }
      goto LAB_00669294;
    }
    if (param_2 == param_3) goto LAB_00669294;
    lVar8 = 0;
    puVar5 = param_2;
    goto LAB_00669094;
  }
  if (param_4 == (ulong *)0x0) {
    if (param_2 == param_3) goto LAB_00669294;
    uVar11 = uVar14 - 2 >> 1;
    puVar5 = param_2 + uVar11 * 2;
    do {
      FUN_00669584(param_2,uVar14,puVar5);
      uVar11 = uVar11 - 1;
      puVar5 = puVar5 + -2;
    } while (-1 < (long)uVar11);
    do {
      if ((long)uVar14 < 2) goto LAB_00669294;
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uVar11 = 0;
      puVar5 = param_2;
      do {
        uVar2 = uVar11 << 1 | 1;
        uVar12 = uVar11 * 2 + 2;
        uVar17 = uVar2;
        puVar7 = puVar5 + uVar11 * 2 + 2;
        if ((long)uVar12 < (long)uVar14) {
          uVar6 = puVar5[uVar11 * 2 + 2];
          FUN_006692ac(uVar6,puVar5[uVar11 * 2 + 3],puVar5[uVar11 * 2 + 4],puVar5[uVar11 * 2 + 5]);
          uVar17 = uVar12;
          puVar7 = puVar5 + uVar11 * 2 + 4;
          if ((int)uVar6 == 0) {
            uVar17 = uVar2;
            puVar7 = puVar5 + uVar11 * 2 + 2;
          }
        }
        uVar11 = *puVar7;
        puVar5[1] = puVar7[1];
        *puVar5 = uVar11;
        uVar11 = uVar17;
        puVar5 = puVar7;
      } while ((long)uVar17 <= (long)(uVar14 - 2 >> 1));
      puVar5 = param_3 + -2;
      if (puVar7 == puVar5) {
        puVar7[1] = uStack_68;
        *puVar7 = uStack_70;
      }
      else {
        uVar11 = *puVar5;
        puVar7[1] = param_3[-1];
        *puVar7 = uVar11;
        param_3[-1] = uStack_68;
        *puVar5 = uStack_70;
        lVar8 = (long)puVar7 + (0x10 - (long)param_2) >> 4;
        if (1 < lVar8) {
          uVar12 = lVar8 - 2U >> 1;
          puVar15 = param_2 + uVar12 * 2;
          uVar11 = *puVar15;
          FUN_006692ac(uVar11,puVar15[1],*puVar7,puVar7[1]);
          if ((int)uVar11 != 0) {
            uVar11 = *puVar7;
            uVar2 = puVar7[1];
            do {
              puVar9 = puVar15;
              uVar17 = *puVar9;
              puVar7[1] = puVar9[1];
              *puVar7 = uVar17;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1 >> 1;
              puVar15 = param_2 + uVar12 * 2;
              uVar17 = *puVar15;
              FUN_006692ac(uVar17,puVar15[1],uVar11,uVar2);
              puVar7 = puVar9;
            } while ((uVar17 & 1) != 0);
            *puVar9 = uVar11;
            puVar9[1] = uVar2;
          }
        }
      }
      uVar14 = uVar14 - 1;
      param_3 = puVar5;
    } while( true );
  }
  puVar5 = param_2 + (uVar14 & 0xfffffffffffffffe);
  if (uVar14 < 0x81) {
    func_0x00674cfc();
    FUN_006692c4();
  }
  else {
    func_0x0067513c();
    FUN_006692c4();
    FUN_006692c4(param_2 + 2,puVar5 + -2,puStack_80);
    FUN_006692c4(param_2 + 4,puVar5 + 2,param_3 + -6);
    FUN_006692c4(puVar5 + -2,puVar5,puVar5 + 2);
    in_register_00005008 = param_2[1];
    param_1 = *param_2;
    uVar14 = *puVar5;
    param_2[1] = puVar5[1];
    *param_2 = uVar14;
    puVar5[1] = in_register_00005008;
    *puVar5 = param_1;
    uStack_70 = param_1;
    uStack_68 = in_register_00005008;
  }
  param_4 = (ulong *)((long)param_4 + -1);
  if (((ulong)param_5 & 1) == 0) {
    uVar14 = param_2[-2];
    func_0x00675b14(uVar14,param_2[-1]);
    if ((uVar14 & 1) == 0) {
      uVar11 = *param_2;
      uVar12 = param_2[1];
      func_0x00674b74();
      puVar5 = param_2;
      if ((uVar14 & 1) == 0) {
        do {
          puVar5 = puVar5 + 2;
          if (param_3 <= puVar5) break;
          func_0x00674b74();
        } while ((int)uVar14 == 0);
      }
      else {
        do {
          puVar5 = puVar5 + 2;
          func_0x00674b74();
        } while ((uVar14 & 1) == 0);
      }
      unaff_x19 = param_3;
      if (puVar5 < param_3) {
        do {
          unaff_x19 = unaff_x19 + -2;
          func_0x00674b74();
        } while ((uVar14 & 1) != 0);
      }
      while (puVar5 < unaff_x19) {
        func_0x00675f48();
        do {
          puVar5 = puVar5 + 2;
          func_0x00674b74();
        } while ((int)uVar14 == 0);
        do {
          unaff_x19 = unaff_x19 + -2;
          func_0x00674b74();
        } while ((uVar14 & 1) != 0);
      }
      if (param_2 != puVar5 + -2) {
        in_register_00005008 = puVar5[-1];
        param_1 = puVar5[-2];
        param_2[1] = in_register_00005008;
        *param_2 = param_1;
      }
      param_5 = (ulong *)0x0;
      puVar5[-2] = uVar11;
      puVar5[-1] = uVar12;
      param_2 = puVar5;
      goto LAB_00668d8c;
    }
  }
  lVar8 = 0;
  uVar14 = *param_2;
  uVar11 = param_2[1];
  do {
    uVar12 = *(ulong *)((long)param_2 + lVar8 + 0x10);
    func_0x00674c98(uVar12,*(undefined8 *)((long)param_2 + lVar8 + 0x18));
    lVar8 = lVar8 + 0x10;
  } while ((uVar12 & 1) != 0);
  puVar5 = (ulong *)((long)param_2 + lVar8);
  puVar7 = param_3;
  puVar15 = puVar5;
  if (lVar8 == 0x10) {
    do {
      puVar9 = puVar7;
      if (puVar7 <= puVar5) break;
      puVar9 = puVar7 + -2;
      uVar12 = *puVar9;
      func_0x00674c98(uVar12,puVar7[-1]);
      puVar7 = puVar9;
    } while ((uVar12 & 1) == 0);
  }
  else {
    do {
      puVar9 = puVar7 + -2;
      uVar12 = *puVar9;
      func_0x00674c98(uVar12,puVar7[-1]);
      puVar7 = puVar9;
    } while ((int)uVar12 == 0);
  }
  while (puVar15 < puVar9) {
    func_0x00675f48();
    puVar16 = puVar15;
    do {
      puVar15 = puVar16 + 2;
      uVar12 = *puVar15;
      func_0x00674c98(uVar12,puVar16[3]);
      puVar10 = puVar9;
      puVar16 = puVar15;
    } while ((uVar12 & 1) != 0);
    do {
      puVar9 = puVar10 + -2;
      uVar12 = *puVar9;
      func_0x00674c98(uVar12,puVar10[-1]);
      puVar10 = puVar9;
    } while ((uVar12 & 1) == 0);
  }
  unaff_x19 = puVar15 + -2;
  if (param_2 != unaff_x19) {
    in_register_00005008 = puVar15[-1];
    param_1 = *unaff_x19;
    param_2[1] = in_register_00005008;
    *param_2 = param_1;
  }
  puVar15[-2] = uVar14;
  puVar15[-1] = uVar11;
  if (puVar5 < puVar7) goto LAB_00668efc;
  func_0x0067513c();
  FUN_00669414();
  puVar5 = puVar15;
  FUN_00669414(puVar15,param_3);
  if ((int)puVar5 == 0) goto code_r0x00668ef8;
  param_3 = unaff_x19;
  if ((uVar12 & 1) != 0) goto LAB_00669294;
  goto LAB_00668d74;
LAB_00669094:
  if (puVar5 + 2 == param_3) {
LAB_00669294:
    func_0x00675ee0(unaff_x30);
    return;
  }
  uVar14 = puVar5[2];
  func_0x00675538(uVar14,puVar5[3]);
  if ((int)uVar14 != 0) {
    uVar11 = puVar5[2];
    uVar12 = puVar5[3];
    lVar3 = lVar8;
    do {
      lVar13 = lVar3;
      puVar1 = (undefined8 *)((long)param_2 + lVar13);
      puVar1[3] = puVar1[1];
      puVar1[2] = *puVar1;
      puVar7 = param_2;
      if (lVar13 == 0) goto LAB_006690e8;
      func_0x00674f10();
      FUN_006692ac();
      lVar3 = lVar13 + -0x10;
    } while ((uVar14 & 1) != 0);
    puVar7 = (ulong *)((long)param_2 + lVar13);
LAB_006690e8:
    *puVar7 = uVar11;
    puVar7[1] = uVar12;
  }
  lVar8 = lVar8 + 0x10;
  puVar5 = puVar5 + 2;
  goto LAB_00669094;
code_r0x00668ef8:
  param_2 = puVar15;
  if ((uVar12 & 1) == 0) {
LAB_00668efc:
    func_0x0067513c();
    FUN_00668d44();
    param_5 = (ulong *)0x0;
    param_2 = puVar15;
  }
  goto LAB_00668d8c;
}



/* Entry: 006692ac; end: 006692c3;  */

uint FUN_006692ac(uint param_1)

{
  func_0x00466818();
  return param_1 >> 7 & 1;
}



/* Entry: 006692c4; end: 00669397;  */

void FUN_006692c4(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  
  func_0x00676158();
  uVar1 = *param_3;
  func_0x00675538(uVar1,param_3[1]);
  uVar2 = *unaff_x20;
  func_0x00675ab0(uVar2,unaff_x20[1]);
  if ((uVar1 & 1) == 0) {
    if ((int)uVar2 != 0) {
      func_0x00676108();
      unaff_x20[1] = in_register_00005008;
      *unaff_x20 = param_1;
      uVar2 = *unaff_x19;
      func_0x00675538(uVar2,unaff_x19[1]);
      if ((int)uVar2 != 0) {
        func_0x00676b80();
      }
    }
  }
  else {
    if ((int)uVar2 == 0) {
      func_0x00676b80();
      uVar2 = *unaff_x20;
      func_0x00675ab0(uVar2,unaff_x20[1]);
      if ((int)uVar2 == 0) {
        return;
      }
      func_0x00676108();
    }
    else {
      in_register_00005008 = unaff_x21[1];
      param_1 = *unaff_x21;
      uVar2 = *unaff_x20;
      unaff_x21[1] = unaff_x20[1];
      *unaff_x21 = uVar2;
    }
    unaff_x20[1] = in_register_00005008;
    *unaff_x20 = param_1;
  }
  return;
}



/* Entry: 00669398; end: 00669413;  */

void FUN_00669398(void)

{
  int iVar1;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x006749c4();
  func_0x00669348();
  uVar2 = *in_x4;
  FUN_006692ac(uVar2,in_x4[1],*in_x3,in_x3[1]);
  if ((int)uVar2 != 0) {
    uVar3 = in_x3[1];
    uVar2 = *in_x3;
    uVar4 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar4;
    in_x4[1] = uVar3;
    *in_x4 = uVar2;
    uVar2 = *in_x3;
    func_0x00675538(uVar2,in_x3[1]);
    iVar1 = (int)uVar2;
    if (((iVar1 != 0) && (func_0x00675514(), iVar1 != 0)) && (func_0x006754f0(), iVar1 != 0)) {
      func_0x00676ab8();
    }
  }
  return;
}



/* Entry: 00669414; end: 00669583;  */

bool FUN_00669414(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong in_register_00005008;
  
  func_0x00674c58();
  switch(param_3 - param_2 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    uVar4 = unaff_x20[-2];
    func_0x00675ab0(uVar4,unaff_x20[-1]);
    if ((int)uVar4 != 0) {
      func_0x00676108();
      unaff_x20[-1] = in_register_00005008;
      unaff_x20[-2] = param_1;
    }
    break;
  case 3:
    FUN_006692c4();
    break;
  case 4:
    func_0x00669348();
    break;
  case 5:
    FUN_00669398();
    break;
  default:
    FUN_006692c4();
    lVar7 = 0;
    iVar8 = 0;
    for (puVar5 = unaff_x19 + 6; puVar5 != unaff_x20; puVar5 = puVar5 + 2) {
      uVar4 = *puVar5;
      func_0x00675538(uVar4,puVar5[1]);
      if ((int)uVar4 != 0) {
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        lVar3 = lVar7;
        do {
          lVar9 = lVar3;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x28);
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x30) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x20);
          puVar6 = unaff_x19;
          if (lVar9 == -0x20) goto LAB_00669520;
          func_0x00675824();
          FUN_006692ac();
          lVar3 = lVar9 + -0x10;
        } while ((uVar4 & 1) != 0);
        puVar6 = (ulong *)((long)unaff_x19 + lVar9 + 0x20);
LAB_00669520:
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar5 + 2 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 0x10;
    }
  }
  return true;
}



/* Entry: 00669584; end: 00669687;  */

void FUN_00669584(long param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong extraout_x9;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (1 < param_2) {
    func_0x00675c80();
    if ((long)param_3 - param_1 >> 4 <= (long)(extraout_x9 >> 1)) {
      lVar6 = (long)param_3 - param_1 >> 3;
      uVar4 = lVar6 + 1;
      puVar7 = (ulong *)(param_1 + uVar4 * 0x10);
      uVar1 = lVar6 + 2;
      puVar8 = puVar7;
      uVar9 = uVar4;
      if ((long)uVar1 < param_2) {
        uVar10 = *puVar7;
        FUN_006692ac(uVar10,puVar7[1],puVar7[2],puVar7[3]);
        puVar8 = puVar7 + 2;
        uVar9 = uVar1;
        if ((int)uVar10 == 0) {
          puVar8 = puVar7;
          uVar9 = uVar4;
        }
      }
      uVar4 = *puVar8;
      func_0x00675538(uVar4,puVar8[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = *param_3;
        uVar1 = param_3[1];
        do {
          puVar7 = puVar8;
          uVar10 = *puVar7;
          param_3[1] = puVar7[1];
          *param_3 = uVar10;
          if ((long)(extraout_x9 >> 1) < (long)uVar9) break;
          uVar3 = uVar9 << 1 | 1;
          puVar2 = (ulong *)(param_1 + uVar3 * 0x10);
          uVar10 = uVar9 * 2 + 2;
          puVar8 = puVar2;
          uVar9 = uVar3;
          if ((long)uVar10 < param_2) {
            uVar5 = *puVar2;
            FUN_006692ac(uVar5,puVar2[1],puVar2[2],puVar2[3]);
            puVar8 = puVar2 + 2;
            uVar9 = uVar10;
            if ((int)uVar5 == 0) {
              puVar8 = puVar2;
              uVar9 = uVar3;
            }
          }
          uVar10 = *puVar8;
          FUN_006692ac(uVar10,puVar8[1],uVar4,uVar1);
          param_3 = puVar7;
        } while ((int)uVar10 == 0);
        *puVar7 = uVar4;
        puVar7[1] = uVar1;
      }
    }
    func_0x0067591c();
  }
  return;
}



/* Entry: 00669688; end: 0066968b;  */

bool FUN_00669688(int param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  
  if (param_2 == param_4) {
    func_0x0046d038();
    bVar1 = param_1 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 0066968c; end: 006696a3;  */

void FUN_0066968c(long param_1)

{
  if (param_1 != 0) {
    FUN_0067da50();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006696a4; end: 006696af;  */

undefined8 * FUN_006696a4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0e138;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_006696f8(param_1,param_2);
  return param_1;
}



/* Entry: 006696b0; end: 006696f7;  */

undefined8 * FUN_006696b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a0e138;
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_006696f8(param_1,param_3);
  return param_1;
}



/* Entry: 006696f8; end: 0066975b;  */

long FUN_006696f8(long param_1,long param_2)

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
      func_0x0067d73c(param_1);
    }
    else {
      func_0x0067d70c(param_1);
    }
  }
  return param_1;
}



/* Entry: 0066975c; end: 006697d3;  */

void FUN_0066975c(long param_1)

{
  func_0x0053b048(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 006697d4; end: 006697f7;  */

void FUN_006697d4(void)

{
  func_0x006752e8();
  FUN_006697f8();
  return;
}



/* Entry: 006697f8; end: 00669803;  */

void FUN_006697f8(ulong param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  piVar4 = (int *)(param_1 - 1);
  if (*piVar4 != 1) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 != 0) {
      return;
    }
  }
  plVar5 = *(long **)(param_1 + 0x1f);
  *(undefined8 *)(param_1 + 0x1f) = 0;
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != 0) {
      FUN_00553a40(plVar5);
    }
    __ZdlPv(plVar5);
  }
  if (*(char *)(param_1 + 0x1e) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 7));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(piVar4);
  return;
}



/* Entry: 00669804; end: 00669827;  */

void FUN_00669804(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00669828; end: 0066986b;  */

void FUN_00669828(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x006760a0();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00674c10();
    }
    func_0x006744e8();
  }
  return;
}



/* Entry: 0066986c; end: 0066991b;  */

undefined8 * FUN_0066986c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x00674868();
  *puVar1 = extraout_x8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (param_2 != 0) {
    func_0x006762a8();
    FUN_003b3200();
  }
  return param_1;
}



/* Entry: 0066991c; end: 00669993;  */

void FUN_0066991c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar4;
  
  func_0x00676210();
  func_0x0067450c();
  FUN_003b3200();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      lVar2 = unaff_x19;
      FUN_00669994();
      lVar3 = lVar2;
      func_0x0067444c();
      func_0x00673efc((uint)lVar2 & 0x7f);
      uVar4 = *unaff_x22;
      puVar1 = (undefined8 *)(unaff_x25 + lVar3 * 0x10);
      puVar1[1] = unaff_x22[1];
      *puVar1 = uVar4;
    }
    unaff_x22 = unaff_x22 + 2;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00669994; end: 006699af;  */

void FUN_00669994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00490290(&uStack_20);
  return;
}



/* Entry: 006699b0; end: 006699bb;  */

void FUN_006699b0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  int extraout_w8;
  int iVar11;
  ulong uVar12;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  int extraout_w9;
  ulong uVar13;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  int iVar14;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *extraout_x10_01;
  ulong *extraout_x10_02;
  ulong *extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  uint uVar15;
  int extraout_w11_01;
  int extraout_w11_02;
  ulong uVar16;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  int iVar17;
  ulong *extraout_x12;
  ulong *extraout_x12_00;
  ulong uVar18;
  ulong uVar19;
  int extraout_w13;
  int extraout_w13_00;
  long lVar20;
  ulong uVar21;
  uint extraout_w14;
  uint extraout_w14_00;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  func_0x00674690();
  func_0x00675c80();
  func_0x00674c64();
  do {
    puVar8 = unaff_x19 + -1;
    puVar7 = unaff_x20;
LAB_006699ec:
    unaff_x20 = puVar7;
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_006741d0;
    case 2:
      func_0x0067469c(unaff_x19[-1]);
      uVar15 = extraout_w10;
      if ((int)extraout_x8_04 != (int)extraout_x9_00) {
        uVar15 = (uint)((int)extraout_x8_04 < (int)extraout_x9_00);
      }
      if (uVar15 != 1) {
        return;
      }
      *unaff_x20 = extraout_x8_04;
      unaff_x19[-1] = extraout_x9_00;
      return;
    case 3:
      puVar7 = unaff_x20 + 1;
      func_0x0067591c();
      uVar13 = *puVar7;
      uVar12 = *unaff_x20;
      iVar14 = (int)(uVar12 >> 0x20);
      iVar17 = (int)(uVar13 >> 0x20);
      iVar11 = (int)uVar12;
      iVar10 = (int)uVar13;
      bVar1 = iVar17 < iVar14;
      if (iVar10 != iVar11) {
        bVar1 = iVar10 < iVar11;
      }
      uVar16 = *puVar8;
      bVar2 = (int)(uVar16 >> 0x20) < iVar17;
      if ((int)uVar16 != iVar10) {
        bVar2 = (int)uVar16 < iVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *unaff_x20 = uVar16;
        }
        else {
          *unaff_x20 = uVar13;
          *puVar7 = uVar12;
          uVar13 = *puVar8;
          bVar1 = (int)(uVar13 >> 0x20) < iVar14;
          if ((int)uVar13 != iVar11) {
            bVar1 = (int)uVar13 < iVar11;
          }
          if (!bVar1) {
            return;
          }
          *puVar7 = uVar13;
        }
        *puVar8 = uVar12;
      }
      else if (bVar2) {
        *puVar7 = uVar16;
        *puVar8 = uVar13;
        func_0x0067469c(*puVar7);
        uVar15 = extraout_w10_00;
        if ((int)extraout_x8_05 != (int)extraout_x9_01) {
          uVar15 = (uint)((int)extraout_x8_05 < (int)extraout_x9_01);
        }
        if (uVar15 == 1) {
          *unaff_x20 = extraout_x8_05;
          *puVar7 = extraout_x9_01;
          return;
        }
      }
      return;
    case 4:
      puVar7 = puVar8;
      func_0x0067591c(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x006749c4();
      FUN_0066a134();
      func_0x0067469c(*puVar7);
      uVar15 = extraout_w10_01;
      if ((int)extraout_x8_06 != (int)extraout_x9_02) {
        uVar15 = (uint)((int)extraout_x8_06 < (int)extraout_x9_02);
      }
      if (uVar15 == 1) {
        *puVar8 = extraout_x8_06;
        *puVar7 = extraout_x9_02;
        func_0x0067469c(*puVar8);
        uVar15 = extraout_w10_02;
        if ((int)extraout_x8_07 != (int)extraout_x9_03) {
          uVar15 = (uint)((int)extraout_x8_07 < (int)extraout_x9_03);
        }
        if (uVar15 == 1) {
          *unaff_x19 = extraout_x8_07;
          *puVar8 = extraout_x9_03;
          func_0x0067469c(*unaff_x19);
          uVar15 = extraout_w10_03;
          if ((int)extraout_x8_08 != (int)extraout_x9_04) {
            uVar15 = (uint)((int)extraout_x8_08 < (int)extraout_x9_04);
          }
          if (uVar15 == 1) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_04;
          }
        }
      }
      return;
    case 5:
      puVar7 = unaff_x20 + 3;
      puVar9 = puVar8;
      func_0x0067591c(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x006749c4();
      FUN_0066a1fc();
      func_0x0067469c(*puVar9);
      uVar15 = extraout_w10_04;
      if ((int)extraout_x8_09 != (int)extraout_x9_05) {
        uVar15 = (uint)((int)extraout_x8_09 < (int)extraout_x9_05);
      }
      if (uVar15 == 1) {
        *puVar7 = extraout_x8_09;
        *puVar9 = extraout_x9_05;
        func_0x0067469c(*puVar7);
        uVar15 = extraout_w10_05;
        if ((int)extraout_x8_10 != (int)extraout_x9_06) {
          uVar15 = (uint)((int)extraout_x8_10 < (int)extraout_x9_06);
        }
        if (uVar15 == 1) {
          *puVar8 = extraout_x8_10;
          *puVar7 = extraout_x9_06;
          func_0x0067469c(*puVar8);
          uVar15 = extraout_w10_06;
          if ((int)extraout_x8_11 != (int)extraout_x9_07) {
            uVar15 = (uint)((int)extraout_x8_11 < (int)extraout_x9_07);
          }
          if (uVar15 == 1) {
            *unaff_x19 = extraout_x8_11;
            *puVar8 = extraout_x9_07;
            func_0x0067469c(*unaff_x19);
            uVar15 = extraout_w10_07;
            if ((int)extraout_x8_12 != (int)extraout_x9_08) {
              uVar15 = (uint)((int)extraout_x8_12 < (int)extraout_x9_08);
            }
            if (uVar15 == 1) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_08;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        puVar7 = unaff_x20;
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          unaff_x20 = unaff_x20 + 1;
          puVar8 = puVar7 + 1;
          if (puVar8 == unaff_x19) break;
          uVar12 = *puVar7;
          uVar13 = puVar7[1];
          iVar10 = (int)(uVar13 >> 0x20);
          iVar11 = (int)uVar13;
          bVar1 = iVar10 < (int)(uVar12 >> 0x20);
          if (iVar11 != (int)uVar12) {
            bVar1 = iVar11 < (int)uVar12;
          }
          puVar9 = unaff_x20;
          puVar7 = puVar8;
          if (bVar1) {
            do {
              *puVar9 = uVar12;
              uVar12 = puVar9[-2];
              bVar1 = iVar10 < (int)(uVar12 >> 0x20);
              if (iVar11 != (int)uVar12) {
                bVar1 = iVar11 < (int)uVar12;
              }
              puVar9 = puVar9 + -1;
            } while (bVar1);
            *puVar9 = uVar13;
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar20 = 8;
      puVar7 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar16 = uVar12 - 2 >> 1;
      uVar13 = uVar16;
      goto LAB_00669e60;
    }
    puVar7 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x006763bc(puVar7);
      FUN_0066a134();
    }
    else {
      FUN_0066a134(unaff_x20,puVar7,puVar8);
      FUN_0066a134(unaff_x20 + 1,puVar7 + -1,unaff_x19 + -2);
      FUN_0066a134(unaff_x20 + 2,puVar7 + 1,unaff_x19 + -3);
      FUN_0066a134(puVar7 + -1,puVar7,puVar7 + 1);
      uVar12 = *unaff_x20;
      *unaff_x20 = *puVar7;
      *puVar7 = uVar12;
    }
    param_3 = param_3 + -1;
    uVar12 = *unaff_x20;
    uVar13 = uVar12 >> 0x20;
    iVar11 = (int)uVar12;
    iVar10 = (int)(uVar12 >> 0x20);
    if ((param_4 & 1) == 0) {
      bVar1 = *(int *)((long)unaff_x20 + -4) < iVar10;
      if ((int)unaff_x20[-1] != iVar11) {
        bVar1 = (int)unaff_x20[-1] < iVar11;
      }
      if (!bVar1) {
        bVar1 = iVar10 < *(int *)((long)unaff_x19 + -4);
        if (iVar11 != (int)*puVar8) {
          bVar1 = iVar11 < (int)*puVar8;
        }
        puVar7 = unaff_x20;
        if (bVar1) {
          do {
            puVar7 = puVar7 + 1;
            iVar14 = (int)*puVar7;
            bVar1 = iVar10 < (int)(*puVar7 >> 0x20);
            if (iVar11 != iVar14) {
              bVar1 = iVar11 < iVar14;
            }
          } while (!bVar1);
        }
        else {
          puVar9 = unaff_x20 + 1;
          do {
            puVar7 = puVar9;
            if (unaff_x19 <= puVar7) break;
            func_0x006756bc();
            uVar15 = extraout_w12;
            if ((int)extraout_x8_01 != extraout_w11) {
              uVar15 = (uint)((int)extraout_x8_01 < extraout_w11);
            }
            uVar12 = extraout_x8_01;
            puVar9 = extraout_x10_01;
          } while (uVar15 != 1);
        }
        puVar9 = unaff_x19;
        if (puVar7 < unaff_x19) {
          do {
            func_0x006756bc();
            uVar15 = extraout_w12_00;
            if ((int)extraout_x8_02 != extraout_w11_00) {
              uVar15 = (uint)((int)extraout_x8_02 < extraout_w11_00);
            }
            uVar12 = extraout_x8_02;
            puVar9 = extraout_x10_02;
          } while ((uVar15 & 1) != 0);
        }
        while (puVar7 < puVar9) {
          uVar12 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar12;
          do {
            puVar7 = puVar7 + 1;
            func_0x006756bc();
            uVar15 = extraout_w12_01;
            if (extraout_w8 != extraout_w11_01) {
              uVar15 = (uint)(extraout_w8 < extraout_w11_01);
            }
          } while (uVar15 != 1);
          do {
            func_0x006756bc();
            uVar15 = extraout_w12_02;
            if ((int)extraout_x8_03 != extraout_w11_02) {
              uVar15 = (uint)((int)extraout_x8_03 < extraout_w11_02);
            }
            uVar12 = extraout_x8_03;
            puVar9 = extraout_x10_03;
          } while ((uVar15 & 1) != 0);
        }
        puVar9 = puVar7 + -1;
        if (unaff_x20 != puVar9) {
          *unaff_x20 = *puVar9;
        }
        param_4 = 0;
        *puVar9 = uVar12;
        goto LAB_006699ec;
      }
    }
    lVar20 = 0;
    do {
      uVar16 = *(ulong *)((long)unaff_x20 + lVar20 + 8);
      bVar1 = (int)(uVar16 >> 0x20) < iVar10;
      if (iVar11 != (int)uVar16) {
        bVar1 = (int)uVar16 < iVar11;
      }
      lVar20 = lVar20 + 8;
    } while (bVar1);
    puVar7 = (ulong *)((long)unaff_x20 + lVar20);
    puVar9 = unaff_x19;
    if (lVar20 == 8) {
      do {
        iVar11 = (int)uVar13;
        puVar5 = puVar9;
        puVar6 = puVar7;
        if (puVar9 <= puVar7) break;
        func_0x00676b04();
        iVar11 = (int)extraout_x9;
        uVar15 = extraout_w14_00;
        if ((int)extraout_x8_00 != extraout_w13_00) {
          uVar15 = (uint)(extraout_w13_00 < (int)extraout_x8_00);
        }
        uVar12 = extraout_x8_00;
        uVar13 = extraout_x9;
        puVar7 = extraout_x10_00;
        uVar16 = extraout_x11_00;
        puVar9 = extraout_x12_00;
        puVar5 = extraout_x12_00;
        puVar6 = extraout_x10_00;
      } while ((uVar15 & 1) == 0);
    }
    else {
      do {
        func_0x00676b04();
        uVar15 = extraout_w14;
        if ((int)extraout_x8 != extraout_w13) {
          uVar15 = (uint)(extraout_w13 < (int)extraout_x8);
        }
        uVar16 = extraout_x11;
        puVar9 = extraout_x12;
        puVar7 = extraout_x10;
        iVar11 = extraout_w9;
        puVar5 = extraout_x12;
        puVar6 = extraout_x10;
        uVar12 = extraout_x8;
      } while (uVar15 != 1);
    }
    while (puVar7 < puVar9) {
      *puVar7 = *puVar9;
      *puVar9 = uVar16;
      do {
        puVar7 = puVar7 + 1;
        uVar16 = *puVar7;
        iVar10 = (int)uVar12;
        bVar1 = (int)(uVar16 >> 0x20) < iVar11;
        if (iVar10 != (int)uVar16) {
          bVar1 = (int)uVar16 < iVar10;
        }
      } while (bVar1);
      do {
        puVar9 = puVar9 + -1;
        iVar14 = (int)*puVar9;
        bVar1 = (int)(*puVar9 >> 0x20) < iVar11;
        if (iVar10 != iVar14) {
          bVar1 = iVar14 < iVar10;
        }
      } while (!bVar1);
    }
    puVar9 = puVar7 + -1;
    if (unaff_x20 != puVar9) {
      *unaff_x20 = *puVar9;
    }
    *puVar9 = uVar12;
    if (puVar6 < puVar5) goto LAB_00669bc8;
    puVar5 = unaff_x20;
    FUN_0066a364(unaff_x20,puVar9);
    puVar6 = puVar7;
    FUN_0066a364(puVar7,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x00669bc4;
    unaff_x19 = puVar9;
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_00669dc0:
  if (puVar7 + 1 == unaff_x19) {
    return;
  }
  uVar12 = *puVar7;
  uVar13 = puVar7[1];
  iVar10 = (int)(uVar13 >> 0x20);
  iVar11 = (int)uVar13;
  bVar1 = iVar10 < (int)(uVar12 >> 0x20);
  if (iVar11 != (int)uVar12) {
    bVar1 = iVar11 < (int)uVar12;
  }
  lVar22 = lVar20;
  if (bVar1) {
    do {
      *(ulong *)((long)unaff_x20 + lVar22) = uVar12;
      lVar4 = lVar22 + -8;
      puVar8 = unaff_x20;
      if (lVar4 == 0) goto LAB_00669e38;
      uVar12 = *(ulong *)((long)unaff_x20 + lVar22 + -0x10);
      bVar1 = iVar10 < (int)(uVar12 >> 0x20);
      if (iVar11 != (int)uVar12) {
        bVar1 = iVar11 < (int)uVar12;
      }
      lVar22 = lVar4;
    } while (bVar1);
    puVar8 = (ulong *)((long)unaff_x20 + lVar4);
LAB_00669e38:
    *puVar8 = uVar13;
  }
  lVar20 = lVar20 + 8;
  puVar7 = puVar7 + 1;
  goto LAB_00669dc0;
LAB_00669e60:
  do {
    if ((long)uVar13 <= (long)uVar16) {
      uVar3 = (uVar13 & 0x3fffffffffffffff) << 1 | 1;
      puVar7 = unaff_x20 + uVar3;
      uVar21 = uVar13 * 2 + 2;
      uVar18 = *puVar7;
      puVar8 = puVar7;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[1];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + 1;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar7;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      uVar21 = unaff_x20[uVar13];
      iVar10 = (int)(uVar21 >> 0x20);
      iVar11 = (int)uVar21;
      bVar1 = (int)(uVar24 >> 0x20) < iVar10;
      if ((int)uVar24 != iVar11) {
        bVar1 = (int)uVar24 < iVar11;
      }
      puVar7 = unaff_x20 + uVar13;
      if (!bVar1) {
        do {
          puVar9 = puVar8;
          *puVar7 = uVar24;
          if ((long)uVar16 < (long)uVar23) break;
          uVar18 = uVar23 << 1 | 1;
          puVar7 = unaff_x20 + uVar18;
          uVar3 = uVar23 * 2 + 2;
          uVar19 = *puVar7;
          puVar8 = puVar7;
          uVar24 = uVar19;
          uVar23 = uVar18;
          if ((long)uVar3 < (long)uVar12) {
            uVar24 = puVar7[1];
            bVar1 = (int)(uVar19 >> 0x20) < (int)(uVar24 >> 0x20);
            if ((int)uVar19 != (int)uVar24) {
              bVar1 = (int)uVar19 < (int)uVar24;
            }
            puVar8 = puVar7 + 1;
            uVar23 = uVar3;
            if (!bVar1) {
              puVar8 = puVar7;
              uVar24 = uVar19;
              uVar23 = uVar18;
            }
          }
          bVar1 = (int)(uVar24 >> 0x20) < iVar10;
          if ((int)uVar24 != iVar11) {
            bVar1 = (int)uVar24 < iVar11;
          }
          puVar7 = puVar9;
        } while (!bVar1);
        *puVar9 = uVar21;
      }
    }
    uVar13 = uVar13 - 1;
  } while (-1 < (long)uVar13);
  do {
    if ((long)uVar12 < 2) {
LAB_006741d0:
      return;
    }
    uVar16 = *unaff_x20;
    puVar7 = unaff_x20;
    uVar13 = 0;
    do {
      puVar9 = puVar7 + uVar13 + 1;
      uVar18 = *puVar9;
      uVar3 = uVar13 << 1 | 1;
      uVar21 = uVar13 * 2 + 2;
      puVar8 = puVar9;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[uVar13 + 2];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + uVar13 + 2;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar9;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      *puVar7 = uVar24;
      puVar7 = puVar8;
      uVar13 = uVar23;
    } while ((long)uVar23 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (puVar8 == unaff_x19) {
      *puVar8 = uVar16;
    }
    else {
      *puVar8 = *unaff_x19;
      *unaff_x19 = uVar16;
      lVar20 = (long)puVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar20) {
        uVar13 = lVar20 - 2U >> 1;
        uVar21 = unaff_x20[uVar13];
        uVar16 = *puVar8;
        iVar10 = (int)(uVar16 >> 0x20);
        iVar11 = (int)uVar16;
        bVar1 = (int)(uVar21 >> 0x20) < iVar10;
        if ((int)uVar21 != iVar11) {
          bVar1 = (int)uVar21 < iVar11;
        }
        puVar7 = unaff_x20 + uVar13;
        if (bVar1) {
          do {
            puVar9 = puVar7;
            *puVar8 = uVar21;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar21 = unaff_x20[uVar13];
            bVar1 = (int)(uVar21 >> 0x20) < iVar10;
            if ((int)uVar21 != iVar11) {
              bVar1 = (int)uVar21 < iVar11;
            }
            puVar8 = puVar9;
            puVar7 = unaff_x20 + uVar13;
          } while (bVar1);
          *puVar9 = uVar16;
        }
      }
    }
    uVar12 = uVar12 - 1;
  } while( true );
code_r0x00669bc4:
  if (((ulong)puVar5 & 1) == 0) {
LAB_00669bc8:
    FUN_006699bc(unaff_x20,puVar9,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_006699ec;
}



/* Entry: 006699bc; end: 0066a133;  */

void FUN_006699bc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  int extraout_w8;
  int iVar11;
  ulong uVar12;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  int extraout_w9;
  ulong uVar13;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  int iVar14;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *extraout_x10_01;
  ulong *extraout_x10_02;
  ulong *extraout_x10_03;
  int extraout_w11;
  int extraout_w11_00;
  uint uVar15;
  int extraout_w11_01;
  int extraout_w11_02;
  ulong uVar16;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  int iVar17;
  ulong *extraout_x12;
  ulong *extraout_x12_00;
  ulong uVar18;
  ulong uVar19;
  int extraout_w13;
  int extraout_w13_00;
  long lVar20;
  ulong uVar21;
  uint extraout_w14;
  uint extraout_w14_00;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *unaff_x19;
  ulong *unaff_x20;
  
  func_0x00675c80();
  func_0x00674c64();
  do {
    puVar8 = unaff_x19 + -1;
    puVar7 = unaff_x20;
LAB_006699ec:
    unaff_x20 = puVar7;
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_006741d0;
    case 2:
      func_0x0067469c(unaff_x19[-1]);
      uVar15 = extraout_w10;
      if ((int)extraout_x8_04 != (int)extraout_x9_00) {
        uVar15 = (uint)((int)extraout_x8_04 < (int)extraout_x9_00);
      }
      if (uVar15 != 1) {
        return;
      }
      *unaff_x20 = extraout_x8_04;
      unaff_x19[-1] = extraout_x9_00;
      return;
    case 3:
      puVar7 = unaff_x20 + 1;
      func_0x0067591c();
      uVar13 = *puVar7;
      uVar12 = *unaff_x20;
      iVar14 = (int)(uVar12 >> 0x20);
      iVar17 = (int)(uVar13 >> 0x20);
      iVar11 = (int)uVar12;
      iVar10 = (int)uVar13;
      bVar1 = iVar17 < iVar14;
      if (iVar10 != iVar11) {
        bVar1 = iVar10 < iVar11;
      }
      uVar16 = *puVar8;
      bVar2 = (int)(uVar16 >> 0x20) < iVar17;
      if ((int)uVar16 != iVar10) {
        bVar2 = (int)uVar16 < iVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *unaff_x20 = uVar16;
        }
        else {
          *unaff_x20 = uVar13;
          *puVar7 = uVar12;
          uVar13 = *puVar8;
          bVar1 = (int)(uVar13 >> 0x20) < iVar14;
          if ((int)uVar13 != iVar11) {
            bVar1 = (int)uVar13 < iVar11;
          }
          if (!bVar1) {
            return;
          }
          *puVar7 = uVar13;
        }
        *puVar8 = uVar12;
      }
      else if (bVar2) {
        *puVar7 = uVar16;
        *puVar8 = uVar13;
        func_0x0067469c(*puVar7);
        uVar15 = extraout_w10_00;
        if ((int)extraout_x8_05 != (int)extraout_x9_01) {
          uVar15 = (uint)((int)extraout_x8_05 < (int)extraout_x9_01);
        }
        if (uVar15 == 1) {
          *unaff_x20 = extraout_x8_05;
          *puVar7 = extraout_x9_01;
          return;
        }
      }
      return;
    case 4:
      puVar7 = puVar8;
      func_0x0067591c(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x006749c4();
      FUN_0066a134();
      func_0x0067469c(*puVar7);
      uVar15 = extraout_w10_01;
      if ((int)extraout_x8_06 != (int)extraout_x9_02) {
        uVar15 = (uint)((int)extraout_x8_06 < (int)extraout_x9_02);
      }
      if (uVar15 == 1) {
        *puVar8 = extraout_x8_06;
        *puVar7 = extraout_x9_02;
        func_0x0067469c(*puVar8);
        uVar15 = extraout_w10_02;
        if ((int)extraout_x8_07 != (int)extraout_x9_03) {
          uVar15 = (uint)((int)extraout_x8_07 < (int)extraout_x9_03);
        }
        if (uVar15 == 1) {
          *unaff_x19 = extraout_x8_07;
          *puVar8 = extraout_x9_03;
          func_0x0067469c(*unaff_x19);
          uVar15 = extraout_w10_03;
          if ((int)extraout_x8_08 != (int)extraout_x9_04) {
            uVar15 = (uint)((int)extraout_x8_08 < (int)extraout_x9_04);
          }
          if (uVar15 == 1) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_04;
          }
        }
      }
      return;
    case 5:
      puVar7 = unaff_x20 + 3;
      puVar9 = puVar8;
      func_0x0067591c(unaff_x20,unaff_x20 + 1,unaff_x20 + 2);
      func_0x006749c4();
      FUN_0066a1fc();
      func_0x0067469c(*puVar9);
      uVar15 = extraout_w10_04;
      if ((int)extraout_x8_09 != (int)extraout_x9_05) {
        uVar15 = (uint)((int)extraout_x8_09 < (int)extraout_x9_05);
      }
      if (uVar15 == 1) {
        *puVar7 = extraout_x8_09;
        *puVar9 = extraout_x9_05;
        func_0x0067469c(*puVar7);
        uVar15 = extraout_w10_05;
        if ((int)extraout_x8_10 != (int)extraout_x9_06) {
          uVar15 = (uint)((int)extraout_x8_10 < (int)extraout_x9_06);
        }
        if (uVar15 == 1) {
          *puVar8 = extraout_x8_10;
          *puVar7 = extraout_x9_06;
          func_0x0067469c(*puVar8);
          uVar15 = extraout_w10_06;
          if ((int)extraout_x8_11 != (int)extraout_x9_07) {
            uVar15 = (uint)((int)extraout_x8_11 < (int)extraout_x9_07);
          }
          if (uVar15 == 1) {
            *unaff_x19 = extraout_x8_11;
            *puVar8 = extraout_x9_07;
            func_0x0067469c(*unaff_x19);
            uVar15 = extraout_w10_07;
            if ((int)extraout_x8_12 != (int)extraout_x9_08) {
              uVar15 = (uint)((int)extraout_x8_12 < (int)extraout_x9_08);
            }
            if (uVar15 == 1) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_08;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        puVar7 = unaff_x20;
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          unaff_x20 = unaff_x20 + 1;
          puVar8 = puVar7 + 1;
          if (puVar8 == unaff_x19) break;
          uVar12 = *puVar7;
          uVar13 = puVar7[1];
          iVar10 = (int)(uVar13 >> 0x20);
          iVar11 = (int)uVar13;
          bVar1 = iVar10 < (int)(uVar12 >> 0x20);
          if (iVar11 != (int)uVar12) {
            bVar1 = iVar11 < (int)uVar12;
          }
          puVar9 = unaff_x20;
          puVar7 = puVar8;
          if (bVar1) {
            do {
              *puVar9 = uVar12;
              uVar12 = puVar9[-2];
              bVar1 = iVar10 < (int)(uVar12 >> 0x20);
              if (iVar11 != (int)uVar12) {
                bVar1 = iVar11 < (int)uVar12;
              }
              puVar9 = puVar9 + -1;
            } while (bVar1);
            *puVar9 = uVar13;
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar20 = 8;
      puVar7 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar16 = uVar12 - 2 >> 1;
      uVar13 = uVar16;
      goto LAB_00669e60;
    }
    puVar7 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x006763bc(puVar7);
      FUN_0066a134();
    }
    else {
      FUN_0066a134(unaff_x20,puVar7,puVar8);
      FUN_0066a134(unaff_x20 + 1,puVar7 + -1,unaff_x19 + -2);
      FUN_0066a134(unaff_x20 + 2,puVar7 + 1,unaff_x19 + -3);
      FUN_0066a134(puVar7 + -1,puVar7,puVar7 + 1);
      uVar12 = *unaff_x20;
      *unaff_x20 = *puVar7;
      *puVar7 = uVar12;
    }
    param_3 = param_3 + -1;
    uVar12 = *unaff_x20;
    uVar13 = uVar12 >> 0x20;
    iVar11 = (int)uVar12;
    iVar10 = (int)(uVar12 >> 0x20);
    if ((param_4 & 1) == 0) {
      bVar1 = *(int *)((long)unaff_x20 + -4) < iVar10;
      if ((int)unaff_x20[-1] != iVar11) {
        bVar1 = (int)unaff_x20[-1] < iVar11;
      }
      if (!bVar1) {
        bVar1 = iVar10 < *(int *)((long)unaff_x19 + -4);
        if (iVar11 != (int)*puVar8) {
          bVar1 = iVar11 < (int)*puVar8;
        }
        puVar7 = unaff_x20;
        if (bVar1) {
          do {
            puVar7 = puVar7 + 1;
            iVar14 = (int)*puVar7;
            bVar1 = iVar10 < (int)(*puVar7 >> 0x20);
            if (iVar11 != iVar14) {
              bVar1 = iVar11 < iVar14;
            }
          } while (!bVar1);
        }
        else {
          puVar9 = unaff_x20 + 1;
          do {
            puVar7 = puVar9;
            if (unaff_x19 <= puVar7) break;
            func_0x006756bc();
            uVar15 = extraout_w12;
            if ((int)extraout_x8_01 != extraout_w11) {
              uVar15 = (uint)((int)extraout_x8_01 < extraout_w11);
            }
            uVar12 = extraout_x8_01;
            puVar9 = extraout_x10_01;
          } while (uVar15 != 1);
        }
        puVar9 = unaff_x19;
        if (puVar7 < unaff_x19) {
          do {
            func_0x006756bc();
            uVar15 = extraout_w12_00;
            if ((int)extraout_x8_02 != extraout_w11_00) {
              uVar15 = (uint)((int)extraout_x8_02 < extraout_w11_00);
            }
            uVar12 = extraout_x8_02;
            puVar9 = extraout_x10_02;
          } while ((uVar15 & 1) != 0);
        }
        while (puVar7 < puVar9) {
          uVar12 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar12;
          do {
            puVar7 = puVar7 + 1;
            func_0x006756bc();
            uVar15 = extraout_w12_01;
            if (extraout_w8 != extraout_w11_01) {
              uVar15 = (uint)(extraout_w8 < extraout_w11_01);
            }
          } while (uVar15 != 1);
          do {
            func_0x006756bc();
            uVar15 = extraout_w12_02;
            if ((int)extraout_x8_03 != extraout_w11_02) {
              uVar15 = (uint)((int)extraout_x8_03 < extraout_w11_02);
            }
            uVar12 = extraout_x8_03;
            puVar9 = extraout_x10_03;
          } while ((uVar15 & 1) != 0);
        }
        puVar9 = puVar7 + -1;
        if (unaff_x20 != puVar9) {
          *unaff_x20 = *puVar9;
        }
        param_4 = 0;
        *puVar9 = uVar12;
        goto LAB_006699ec;
      }
    }
    lVar20 = 0;
    do {
      uVar16 = *(ulong *)((long)unaff_x20 + lVar20 + 8);
      bVar1 = (int)(uVar16 >> 0x20) < iVar10;
      if (iVar11 != (int)uVar16) {
        bVar1 = (int)uVar16 < iVar11;
      }
      lVar20 = lVar20 + 8;
    } while (bVar1);
    puVar7 = (ulong *)((long)unaff_x20 + lVar20);
    puVar9 = unaff_x19;
    if (lVar20 == 8) {
      do {
        iVar11 = (int)uVar13;
        puVar5 = puVar9;
        puVar6 = puVar7;
        if (puVar9 <= puVar7) break;
        func_0x00676b04();
        iVar11 = (int)extraout_x9;
        uVar15 = extraout_w14_00;
        if ((int)extraout_x8_00 != extraout_w13_00) {
          uVar15 = (uint)(extraout_w13_00 < (int)extraout_x8_00);
        }
        uVar12 = extraout_x8_00;
        uVar13 = extraout_x9;
        puVar7 = extraout_x10_00;
        uVar16 = extraout_x11_00;
        puVar9 = extraout_x12_00;
        puVar5 = extraout_x12_00;
        puVar6 = extraout_x10_00;
      } while ((uVar15 & 1) == 0);
    }
    else {
      do {
        func_0x00676b04();
        uVar15 = extraout_w14;
        if ((int)extraout_x8 != extraout_w13) {
          uVar15 = (uint)(extraout_w13 < (int)extraout_x8);
        }
        uVar16 = extraout_x11;
        puVar9 = extraout_x12;
        puVar7 = extraout_x10;
        iVar11 = extraout_w9;
        puVar5 = extraout_x12;
        puVar6 = extraout_x10;
        uVar12 = extraout_x8;
      } while (uVar15 != 1);
    }
    while (puVar7 < puVar9) {
      *puVar7 = *puVar9;
      *puVar9 = uVar16;
      do {
        puVar7 = puVar7 + 1;
        uVar16 = *puVar7;
        iVar10 = (int)uVar12;
        bVar1 = (int)(uVar16 >> 0x20) < iVar11;
        if (iVar10 != (int)uVar16) {
          bVar1 = (int)uVar16 < iVar10;
        }
      } while (bVar1);
      do {
        puVar9 = puVar9 + -1;
        iVar14 = (int)*puVar9;
        bVar1 = (int)(*puVar9 >> 0x20) < iVar11;
        if (iVar10 != iVar14) {
          bVar1 = iVar14 < iVar10;
        }
      } while (!bVar1);
    }
    puVar9 = puVar7 + -1;
    if (unaff_x20 != puVar9) {
      *unaff_x20 = *puVar9;
    }
    *puVar9 = uVar12;
    if (puVar6 < puVar5) goto LAB_00669bc8;
    puVar5 = unaff_x20;
    FUN_0066a364(unaff_x20,puVar9);
    puVar6 = puVar7;
    FUN_0066a364(puVar7,unaff_x19);
    if ((int)puVar6 == 0) goto code_r0x00669bc4;
    unaff_x19 = puVar9;
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_00669dc0:
  if (puVar7 + 1 == unaff_x19) {
    return;
  }
  uVar12 = *puVar7;
  uVar13 = puVar7[1];
  iVar10 = (int)(uVar13 >> 0x20);
  iVar11 = (int)uVar13;
  bVar1 = iVar10 < (int)(uVar12 >> 0x20);
  if (iVar11 != (int)uVar12) {
    bVar1 = iVar11 < (int)uVar12;
  }
  lVar22 = lVar20;
  if (bVar1) {
    do {
      *(ulong *)((long)unaff_x20 + lVar22) = uVar12;
      lVar4 = lVar22 + -8;
      puVar8 = unaff_x20;
      if (lVar4 == 0) goto LAB_00669e38;
      uVar12 = *(ulong *)((long)unaff_x20 + lVar22 + -0x10);
      bVar1 = iVar10 < (int)(uVar12 >> 0x20);
      if (iVar11 != (int)uVar12) {
        bVar1 = iVar11 < (int)uVar12;
      }
      lVar22 = lVar4;
    } while (bVar1);
    puVar8 = (ulong *)((long)unaff_x20 + lVar4);
LAB_00669e38:
    *puVar8 = uVar13;
  }
  lVar20 = lVar20 + 8;
  puVar7 = puVar7 + 1;
  goto LAB_00669dc0;
LAB_00669e60:
  do {
    if ((long)uVar13 <= (long)uVar16) {
      uVar3 = (uVar13 & 0x3fffffffffffffff) << 1 | 1;
      puVar7 = unaff_x20 + uVar3;
      uVar21 = uVar13 * 2 + 2;
      uVar18 = *puVar7;
      puVar8 = puVar7;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[1];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + 1;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar7;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      uVar21 = unaff_x20[uVar13];
      iVar10 = (int)(uVar21 >> 0x20);
      iVar11 = (int)uVar21;
      bVar1 = (int)(uVar24 >> 0x20) < iVar10;
      if ((int)uVar24 != iVar11) {
        bVar1 = (int)uVar24 < iVar11;
      }
      puVar7 = unaff_x20 + uVar13;
      if (!bVar1) {
        do {
          puVar9 = puVar8;
          *puVar7 = uVar24;
          if ((long)uVar16 < (long)uVar23) break;
          uVar18 = uVar23 << 1 | 1;
          puVar7 = unaff_x20 + uVar18;
          uVar3 = uVar23 * 2 + 2;
          uVar19 = *puVar7;
          puVar8 = puVar7;
          uVar24 = uVar19;
          uVar23 = uVar18;
          if ((long)uVar3 < (long)uVar12) {
            uVar24 = puVar7[1];
            bVar1 = (int)(uVar19 >> 0x20) < (int)(uVar24 >> 0x20);
            if ((int)uVar19 != (int)uVar24) {
              bVar1 = (int)uVar19 < (int)uVar24;
            }
            puVar8 = puVar7 + 1;
            uVar23 = uVar3;
            if (!bVar1) {
              puVar8 = puVar7;
              uVar24 = uVar19;
              uVar23 = uVar18;
            }
          }
          bVar1 = (int)(uVar24 >> 0x20) < iVar10;
          if ((int)uVar24 != iVar11) {
            bVar1 = (int)uVar24 < iVar11;
          }
          puVar7 = puVar9;
        } while (!bVar1);
        *puVar9 = uVar21;
      }
    }
    uVar13 = uVar13 - 1;
  } while (-1 < (long)uVar13);
  do {
    if ((long)uVar12 < 2) {
LAB_006741d0:
      return;
    }
    uVar16 = *unaff_x20;
    puVar7 = unaff_x20;
    uVar13 = 0;
    do {
      puVar9 = puVar7 + uVar13 + 1;
      uVar18 = *puVar9;
      uVar3 = uVar13 << 1 | 1;
      uVar21 = uVar13 * 2 + 2;
      puVar8 = puVar9;
      uVar24 = uVar18;
      uVar23 = uVar3;
      if ((long)uVar21 < (long)uVar12) {
        uVar24 = puVar7[uVar13 + 2];
        bVar1 = (int)(uVar18 >> 0x20) < (int)(uVar24 >> 0x20);
        if ((int)uVar18 != (int)uVar24) {
          bVar1 = (int)uVar18 < (int)uVar24;
        }
        puVar8 = puVar7 + uVar13 + 2;
        uVar23 = uVar21;
        if (!bVar1) {
          puVar8 = puVar9;
          uVar24 = uVar18;
          uVar23 = uVar3;
        }
      }
      *puVar7 = uVar24;
      puVar7 = puVar8;
      uVar13 = uVar23;
    } while ((long)uVar23 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (puVar8 == unaff_x19) {
      *puVar8 = uVar16;
    }
    else {
      *puVar8 = *unaff_x19;
      *unaff_x19 = uVar16;
      lVar20 = (long)puVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar20) {
        uVar13 = lVar20 - 2U >> 1;
        uVar21 = unaff_x20[uVar13];
        uVar16 = *puVar8;
        iVar10 = (int)(uVar16 >> 0x20);
        iVar11 = (int)uVar16;
        bVar1 = (int)(uVar21 >> 0x20) < iVar10;
        if ((int)uVar21 != iVar11) {
          bVar1 = (int)uVar21 < iVar11;
        }
        puVar7 = unaff_x20 + uVar13;
        if (bVar1) {
          do {
            puVar9 = puVar7;
            *puVar8 = uVar21;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar21 = unaff_x20[uVar13];
            bVar1 = (int)(uVar21 >> 0x20) < iVar10;
            if ((int)uVar21 != iVar11) {
              bVar1 = (int)uVar21 < iVar11;
            }
            puVar8 = puVar9;
            puVar7 = unaff_x20 + uVar13;
          } while (bVar1);
          *puVar9 = uVar16;
        }
      }
    }
    uVar12 = uVar12 - 1;
  } while( true );
code_r0x00669bc4:
  if (((ulong)puVar5 & 1) == 0) {
LAB_00669bc8:
    FUN_006699bc(unaff_x20,puVar9,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_006699ec;
}



/* Entry: 0066a134; end: 0066a1fb;  */

void FUN_0066a134(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_x9;
  int iVar7;
  uint extraout_w10;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  
  uVar6 = *param_2;
  uVar4 = *param_1;
  iVar7 = (int)((ulong)uVar4 >> 0x20);
  iVar10 = (int)((ulong)uVar6 >> 0x20);
  iVar3 = (int)uVar4;
  iVar5 = (int)uVar6;
  bVar1 = iVar10 < iVar7;
  if (iVar5 != iVar3) {
    bVar1 = iVar5 < iVar3;
  }
  uVar9 = *param_3;
  bVar2 = (int)((ulong)uVar9 >> 0x20) < iVar10;
  if ((int)uVar9 != iVar5) {
    bVar2 = (int)uVar9 < iVar5;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = uVar9;
    }
    else {
      *param_1 = uVar6;
      *param_2 = uVar4;
      uVar6 = *param_3;
      bVar1 = (int)((ulong)uVar6 >> 0x20) < iVar7;
      if ((int)uVar6 != iVar3) {
        bVar1 = (int)uVar6 < iVar3;
      }
      if (!bVar1) {
        return;
      }
      *param_2 = uVar6;
    }
    *param_3 = uVar4;
  }
  else if (bVar2) {
    *param_2 = uVar9;
    *param_3 = uVar6;
    func_0x0067469c(*param_2);
    uVar8 = extraout_w10;
    if ((int)extraout_x8 != (int)extraout_x9) {
      uVar8 = (uint)((int)extraout_x8 < (int)extraout_x9);
    }
    if (uVar8 == 1) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
      return;
    }
  }
  return;
}



/* Entry: 0066a1fc; end: 0066a297;  */

void FUN_0066a1fc(void)

{
  undefined8 *in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x006749c4();
  FUN_0066a134();
  func_0x0067469c(*in_x3);
  uVar1 = extraout_w10;
  if ((int)extraout_x8 != (int)extraout_x9) {
    uVar1 = (uint)((int)extraout_x8 < (int)extraout_x9);
  }
  if (uVar1 == 1) {
    *unaff_x21 = extraout_x8;
    *in_x3 = extraout_x9;
    func_0x0067469c(*unaff_x21);
    uVar1 = extraout_w10_00;
    if ((int)extraout_x8_00 != (int)extraout_x9_00) {
      uVar1 = (uint)((int)extraout_x8_00 < (int)extraout_x9_00);
    }
    if (uVar1 == 1) {
      *unaff_x19 = extraout_x8_00;
      *unaff_x21 = extraout_x9_00;
      func_0x0067469c(*unaff_x19);
      uVar1 = extraout_w10_01;
      if ((int)extraout_x8_01 != (int)extraout_x9_01) {
        uVar1 = (uint)((int)extraout_x8_01 < (int)extraout_x9_01);
      }
      if (uVar1 == 1) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 0066a298; end: 0066a363;  */

void FUN_0066a298(void)

{
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x006749c4();
  FUN_0066a1fc();
  func_0x0067469c(*in_x4);
  uVar1 = extraout_w10;
  if ((int)extraout_x8 != (int)extraout_x9) {
    uVar1 = (uint)((int)extraout_x8 < (int)extraout_x9);
  }
  if (uVar1 == 1) {
    *in_x3 = extraout_x8;
    *in_x4 = extraout_x9;
    func_0x0067469c(*in_x3);
    uVar1 = extraout_w10_00;
    if ((int)extraout_x8_00 != (int)extraout_x9_00) {
      uVar1 = (uint)((int)extraout_x8_00 < (int)extraout_x9_00);
    }
    if (uVar1 == 1) {
      *unaff_x21 = extraout_x8_00;
      *in_x3 = extraout_x9_00;
      func_0x0067469c(*unaff_x21);
      uVar1 = extraout_w10_01;
      if ((int)extraout_x8_01 != (int)extraout_x9_01) {
        uVar1 = (uint)((int)extraout_x8_01 < (int)extraout_x9_01);
      }
      if (uVar1 == 1) {
        *unaff_x19 = extraout_x8_01;
        *unaff_x21 = extraout_x9_01;
        func_0x0067469c(*unaff_x19);
        uVar1 = extraout_w10_02;
        if ((int)extraout_x8_02 != (int)extraout_x9_02) {
          uVar1 = (uint)((int)extraout_x8_02 < (int)extraout_x9_02);
        }
        if (uVar1 == 1) {
          *unaff_x20 = extraout_x8_02;
          *unaff_x19 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 0066a364; end: 0066a4f3;  */

void FUN_0066a364(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lVar4;
  uint extraout_w10;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  
  func_0x00674c58();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0067469c(unaff_x20[-1],1);
    uVar5 = extraout_w10;
    if ((int)extraout_x8 != (int)extraout_x9) {
      uVar5 = (uint)((int)extraout_x8 < (int)extraout_x9);
    }
    if (uVar5 == 1) {
      *unaff_x19 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_0066a134();
    break;
  case 4:
    FUN_0066a1fc();
    break;
  case 5:
    FUN_0066a298();
    break;
  default:
    FUN_0066a134();
    iVar3 = 0;
    lVar4 = 0x18;
    puVar10 = unaff_x19 + 3;
    puVar13 = unaff_x19 + 2;
    while (puVar7 = puVar10, puVar7 != unaff_x20) {
      uVar8 = *puVar7;
      uVar11 = *puVar13;
      iVar9 = (int)((ulong)uVar8 >> 0x20);
      iVar6 = (int)uVar8;
      bVar1 = iVar9 < (int)((ulong)uVar11 >> 0x20);
      if (iVar6 != (int)uVar11) {
        bVar1 = iVar6 < (int)uVar11;
      }
      lVar12 = lVar4;
      if (bVar1) {
        do {
          *(undefined8 *)((long)unaff_x19 + lVar12) = uVar11;
          lVar2 = lVar12 + -8;
          puVar10 = unaff_x19;
          if (lVar2 == 0) goto LAB_0066a49c;
          uVar11 = *(undefined8 *)((long)unaff_x19 + lVar12 + -0x10);
          bVar1 = iVar9 < (int)((ulong)uVar11 >> 0x20);
          if (iVar6 != (int)uVar11) {
            bVar1 = iVar6 < (int)uVar11;
          }
          lVar12 = lVar2;
        } while (bVar1);
        puVar10 = (undefined8 *)((long)unaff_x19 + lVar2);
LAB_0066a49c:
        *puVar10 = uVar8;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar4 = lVar4 + 8;
      puVar13 = puVar7;
      puVar10 = puVar7 + 1;
    }
  }
  return;
}



/* Entry: 0066a4f4; end: 0066a50b;  */

void FUN_0066a4f4(long param_1)

{
  if (param_1 != 0) {
    FUN_00666038();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0066a50c; end: 0066a57f;  */

long FUN_0066a50c(void)

{
  int iVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x28;
  
  func_0x00674e30();
  func_0x00674960();
  do {
    func_0x0067644c();
    func_0x00674f7c();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00674eb0();
      iVar1 = unaff_w20;
      FUN_0066a580();
      if (iVar1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
      func_0x00675f08();
    }
    func_0x006745a8();
  } while ((extraout_x8_00 & 1) == 0);
  return 0;
}



/* Entry: 0066a580; end: 0066a5ab;  */

bool FUN_0066a580(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if ((long)uVar5 < 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  if (uVar1 == uVar5) {
    func_0x0046d038(puVar3,uVar1,puVar4);
    bVar2 = (int)puVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0066a5ac; end: 0066a683;  */

void FUN_0066a5ac(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x006760a0();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00674c10();
    }
    func_0x006744e8();
  }
  return;
}



/* Entry: 0066a684; end: 0066a6ab;  */

/* WARNING: Possible PIC construction at 0x0066a698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0066a69c) */

long FUN_0066a684(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  FUN_0053b07c(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 0066a6ac; end: 0066bab3;  */

dword * FUN_0066a6ac(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  dword **ppdVar8;
  int *piVar9;
  dword *pdVar10;
  dword *pdVar11;
  dword *pdVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  dword *pdVar16;
  undefined8 uVar17;
  undefined8 extraout_x8;
  long *plVar18;
  long *extraout_x8_00;
  long lVar19;
  dword **extraout_x8_01;
  char *pcVar20;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *plVar21;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  undefined8 extraout_x8_17;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  long *extraout_x9;
  ulong uVar22;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 extraout_x9_02;
  long lVar23;
  dword *extraout_x10;
  dword *extraout_x10_00;
  undefined8 extraout_x10_01;
  dword **extraout_x11;
  long *extraout_x11_00;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  ulong uVar24;
  long *unaff_x19;
  dword *unaff_x20;
  dword *pdVar25;
  ulong uVar26;
  dword *pdVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  dword **ppdVar33;
  float fVar34;
  int iStack_154;
  ulong uStack_150;
  long lStack_148;
  dword *pdStack_138;
  dword *pdStack_130;
  long lStack_128;
  long lStack_120;
  dword adStack_110 [2];
  ulong uStack_108;
  byte bStack_f9;
  dword *pdStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  dword *pdStack_e0;
  dword *pdStack_d8;
  dword *pdStack_d0;
  undefined1 auStack_c8 [16];
  undefined **ppuStack_b8;
  long lStack_b0;
  dword *pdStack_a8;
  dword *pdStack_a0;
  dword *pdStack_98;
  undefined8 uStack_90;
  dword *pdStack_70;
  dword **ppdStack_68;
  dword *pdStack_60;
  undefined8 uStack_58;
  dword *pdStack_40;
  
  func_0x00674e30();
  lVar31 = param_2;
  func_0x00674238();
  uVar17 = *(undefined8 *)(lVar31 + 0x48);
  pdVar16 = *(dword **)(lVar31 + 0x50);
  plVar18 = (long *)(param_1 + 8);
  *plVar18 = lVar31;
  lVar29 = param_1;
  pdStack_138 = pdVar16;
  func_0x00676730();
  func_0x00674ff8();
  if (lVar29 == 0) {
    func_0x00674bbc();
    FUN_00776714(&pdStack_40);
    func_0x00676808();
  }
  else {
    func_0x00676730();
    FUN_0068a7dc(lVar31,pdVar16,lVar29);
    FUN_0066bbc8(&uStack_150,param_2 + 0x30);
    pdStack_40 = (dword *)CONCAT44(pdStack_40._4_4_,*(undefined4 *)(lVar29 + 4));
    puVar7 = &uStack_150;
    ppdVar8 = &pdStack_40;
    func_0x0063cd38();
    func_0x006764d8();
    func_0x00674ff8();
    if (puVar7 != (ulong *)0x0) {
      func_0x006764d8();
      FUN_0068af64(ppdVar8,uVar17,puVar7);
      iStack_154 = 0;
LAB_0066a77c:
      pdVar27 = (dword *)&UNK_00911645;
      uVar4 = iStack_154 == (int)ppdVar8;
      if ((int)ppdVar8 <= iStack_154) goto LAB_0066b3a0;
      piVar9 = &iStack_154;
      FUN_0053ad70(&uStack_150);
      func_0x006764d8();
      func_0x0068e124(piVar9,uVar17,puVar7,iStack_154);
      unaff_x19[2] = (long)piVar9;
      if (piVar9[8] == 0) {
        if ((param_3 & 1) != 0) goto LAB_0066b354;
        func_0x006748d0();
        goto LAB_0066b750;
      }
      plVar21 = (long *)(piVar9 + 6);
      func_0x00675590(*plVar21);
      if (!(bool)uVar4) {
        plVar21 = extraout_x9;
      }
      pdVar10 = (dword *)(*(ulong *)(*plVar21 + 0x18) & 0xfffffffffffffffc);
      FUN_004636dc(pdVar10,&UNK_00911645);
      if ((int)pdVar10 != 0) {
        if ((param_3 & 1) == 0) {
          func_0x006748d0();
          goto LAB_0066b750;
        }
        goto LAB_0066b354;
      }
      func_0x00675294();
      uVar4 = (uint)param_3 == (uint)*(byte *)(*extraout_x8_00 + 0x20);
      if ((bool)uVar4) goto LAB_0066b354;
      pdVar25 = (dword *)*unaff_x19;
      func_0x00675838();
      func_0x00674d1c(*(undefined8 *)(pdVar10 + 2));
      FUN_0065b274();
      pdVar27 = pdVar10;
      func_0x00675120();
      if ((!(bool)uVar4) && (func_0x00675838(), pdVar10 = pdVar27, pdVar27 == (dword *)0x0)) {
        func_0x00674bbc();
        FUN_00776794(&pdStack_40);
LAB_0066b718:
        FUN_005558a0();
        pdVar27 = pdVar25;
code_r0x0066b71c:
        pdStack_40 = (dword *)&pdStack_d0;
        func_0x0067453c();
        goto LAB_0066b740;
      }
      pdStack_e0 = (dword *)0x0;
      pdStack_f8 = (dword *)0x0;
      plStack_f0 = (long *)0x0;
      uStack_e8 = 0;
      pdStack_d8 = pdVar10;
      func_0x006759a0(adStack_110);
      FUN_00425cb4();
      pdVar25 = (dword *)(param_2 + 0x30);
      FUN_0066bbc8(&lStack_128);
      lVar31 = 8;
      for (lVar29 = 0; pdVar27 = pdStack_e0, pdVar11 = pdStack_f8,
          uVar4 = lVar29 == *(int *)(unaff_x19[2] + 0x20), lVar29 < *(int *)(unaff_x19[2] + 0x20);
          lVar29 = lVar29 + 1) {
        func_0x0048d000(*unaff_x19 + 0x138);
        lVar19 = unaff_x19[2];
        uVar22 = *(ulong *)(lVar19 + 0x18);
        lVar23 = uVar22 - 1;
        uVar22 = uVar22 & 1;
        puVar13 = (ulong *)(lVar19 + 0x18);
        if (uVar22 != 0) {
          puVar13 = (ulong *)(lVar23 + lVar31);
        }
        uVar26 = *(ulong *)(*puVar13 + 0x18);
        uVar32 = uStack_108;
        if (-1 < (char)bStack_f9) {
          uVar32 = (ulong)bStack_f9;
        }
        if (uVar32 != 0) {
          pdVar27 = (dword *)".";
          FUN_00532c74();
          pdStack_40 = pdVar27;
          func_0x006768f8();
          lVar19 = unaff_x19[2];
          uVar22 = *(ulong *)(lVar19 + 0x18) & 1;
          lVar23 = *(ulong *)(lVar19 + 0x18) - 1;
        }
        pdVar27 = (dword *)(uVar26 & 0xfffffffffffffffc);
        plVar21 = (long *)(lVar19 + 0x18);
        if (uVar22 != 0) {
          plVar21 = (long *)(lVar23 + lVar31);
        }
        uVar5 = (uint)*(byte *)(*plVar21 + 0x20);
        cVar2 = SBORROW4(uVar5,1);
        cVar3 = (int)(uVar5 - 1) < 0;
        uVar4 = uVar5 == 1;
        if ((bool)uVar4) {
          pdVar11 = (dword *)&UNK_0091166d;
          FUN_00532c74();
          pdStack_40 = pdVar11;
          func_0x006746d8();
          pdStack_70 = extraout_x10;
          ppdStack_68 = extraout_x11;
          if (cVar3 == cVar2) {
            pdStack_70 = pdVar27;
            ppdStack_68 = extraout_x8_01;
          }
          func_0x0067687c();
          pdStack_a0 = pdVar11;
          pdStack_98 = pdVar25;
          FUN_005762ac(adStack_110,&pdStack_40,&pdStack_70,&pdStack_a0);
          pdVar25 = (dword *)*unaff_x19;
          pdVar12 = pdVar27;
          func_0x00676498(pdVar25,pdVar27,unaff_x19[1],0);
          func_0x00676be4();
          pdVar11 = pdVar10;
          if ((bool)uVar4) goto LAB_0066a998;
          pdStack_e0 = (dword *)0x0;
          pdVar10 = pdVar25;
LAB_0066ab3c:
          plVar21 = (long *)*unaff_x19;
          uVar4 = *(char *)(*plVar21 + 0x32) == '\x01';
          if ((bool)uVar4) {
LAB_0066ab50:
            pdVar25 = (dword *)unaff_x19[2];
            func_0x00675838();
            func_0x00674ff8();
            if (pdVar10 != (dword *)0x0) {
              func_0x00675838();
              FUN_0068e1d0(pdVar12,pdVar16,pdVar10,0);
              FUN_006990ec();
              goto LAB_0066b340;
            }
            func_0x00674bbc();
            FUN_00776794(&pdStack_40);
            goto LAB_0066b718;
          }
          lVar29 = (long)*(char *)((long)plVar21 + 0x14f);
          if (lVar29 < 0) {
            lVar29 = plVar21[0x28];
          }
          pdStack_40 = adStack_110;
          if (lVar29 == 0) {
            func_0x006748d0();
          }
          else {
            func_0x006748d0();
          }
          goto LAB_0066b744;
        }
        func_0x006746d8();
        pdStack_40 = extraout_x10_00;
        if (cVar3 == cVar2) {
          pdStack_40 = pdVar27;
        }
        func_0x006768f8();
        if (*(char *)((long)pdVar27 + 0x17) < '\0') {
          pdVar27 = *(dword **)pdVar27;
        }
        pdVar12 = pdVar27;
        FUN_00656228(pdVar10,pdVar27);
        pdVar25 = pdVar10;
        pdVar11 = pdStack_d8;
        pdStack_e0 = pdVar10;
        if (pdVar10 == (dword *)0x0) goto LAB_0066ab3c;
LAB_0066a998:
        pcVar20 = *(char **)(pdVar25 + 8);
        uVar4 = (dword *)pcVar20 == pdVar11;
        pdStack_e0 = pdVar25;
        if (!(bool)uVar4) {
          if ((pcVar20 != (char *)0x0) && (pdVar10 = pdVar25, (pcVar20[1] & 1U) != 0))
          goto LAB_0066ab50;
          pdStack_40 = adStack_110;
          func_0x006748d0();
          goto LAB_0066b744;
        }
        pdStack_40 = (dword *)CONCAT44(pdStack_40._4_4_,pdVar25[1]);
        pdVar25 = (dword *)&pdStack_40;
        func_0x0063cd38(&lStack_128);
        lVar19 = unaff_x19[2];
        uVar4 = *(long *)(pdStack_e0 + 4) == *(long *)(*unaff_x19 + 0xa8);
        if ((bool)uVar4) {
          func_0x00675294();
          uVar5 = (uint)*(undefined8 *)(*extraout_x8_02 + 0x18) & 0xfffffffc;
          pdVar25 = (dword *)&UNK_0091166f;
          FUN_004636dc();
          lVar19 = unaff_x19[2];
          if (uVar5 != 0) {
            func_0x00676c30();
            plVar21 = extraout_x9_00;
            if (!(bool)uVar4) {
              plVar21 = extraout_x11_00;
            }
            lVar19 = extraout_x8_03;
            if ((*(byte *)(*plVar21 + 0x20) & 1) == 0) {
              pdStack_40 = adStack_110;
              func_0x006748d0();
              goto LAB_0066b744;
            }
          }
        }
        if (lVar29 < (long)*(int *)(lVar19 + 0x20) + -1) {
          pdVar10 = pdStack_e0;
          FUN_00656c60();
          uVar4 = (int)pdVar10 == 10;
          if (!(bool)uVar4) {
            pdStack_40 = adStack_110;
            func_0x006748d0();
            goto LAB_0066b744;
          }
          if ((*(byte *)((long)pdStack_e0 + 1) >> 5 & 1) != 0) {
            pdStack_40 = adStack_110;
            func_0x006748d0();
            goto LAB_0066b744;
          }
          pdVar25 = (dword *)&pdStack_e0;
          func_0x0066bcac(&pdStack_f8);
          pdVar11 = pdStack_e0;
          FUN_00656024();
          pdStack_d8 = pdVar11;
        }
        lVar31 = lVar31 + 8;
        pdVar10 = pdVar11;
      }
      if ((*(byte *)((long)pdStack_e0 + 1) >> 5 & 1) == 0) {
        func_0x00675838();
        FUN_006895b0(pdVar25,pdVar16);
        plVar21 = unaff_x19;
        FUN_00664f34();
        pdVar25 = pdVar11;
        if (((ulong)plVar21 & 1) != 0) goto LAB_0066aab0;
        goto LAB_0066b744;
      }
LAB_0066aab0:
      pdVar11 = &MACH_HEADER.flags;
      __Znwm();
      pdVar10 = pdStack_e0;
      *(undefined8 *)pdVar11 = 0;
      *(undefined8 *)(pdVar11 + 2) = 0;
      *(undefined8 *)(pdVar11 + 4) = 0;
      pdStack_d0 = pdStack_e0;
      unaff_x20 = pdStack_e0;
      pdStack_130 = pdVar11;
      FUN_00656c60();
      iVar6 = (int)unaff_x20 + -1;
      cVar2 = SBORROW4(iVar6,9);
      cVar3 = (int)unaff_x20 + -10 < 0;
      uVar4 = iVar6 == 9;
      plVar21 = plStack_f0;
      switch(iVar6) {
      case 0:
        func_0x00676c48();
        if ((extraout_w9 >> 3 & 1) == 0) {
          if ((extraout_w9 >> 4 & 1) == 0) {
            pdStack_40 = (dword *)&pdStack_d0;
            func_0x0067453c();
          }
          else {
            pdVar25 = *(dword **)(extraout_x8_04 + 0x50);
            uVar4 = pdVar25 == (dword *)0xffffffff7fffffff;
            if (-0x80000001 < (long)pdVar25) {
              uVar5 = pdVar10[1];
              func_0x00675884();
              pdVar27 = pdVar25;
              goto code_r0x0066ae6c;
            }
            pdStack_40 = (dword *)&pdStack_d0;
            func_0x0067453c();
          }
        }
        else {
          pdVar25 = *(dword **)(extraout_x8_04 + 0x48);
          if ((ulong)pdVar25 >> 0x1f == 0) {
            uVar5 = pdVar10[1];
            func_0x00675884();
            pdVar27 = pdVar25;
code_r0x0066ae6c:
            pdVar25 = (dword *)(ulong)uVar5;
            iVar6 = (int)unaff_x20;
            iVar28 = (int)pdVar27;
            if (iVar6 != 0x11) {
              if (iVar6 == 0xf) goto code_r0x0066af80;
              if (iVar6 == 5) {
                pdVar27 = (dword *)(long)iVar28;
                goto code_r0x0066af38;
              }
              func_0x00674bbc();
              FUN_0077670c(&pdStack_40);
              FUN_00533c48();
              FUN_0066510c();
              goto LAB_0066ba84;
            }
            pdVar27 = (dword *)(ulong)(uint)(iVar28 << 1 ^ iVar28 >> 0x1f);
            goto code_r0x0066af38;
          }
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        break;
      case 1:
        func_0x00676c48();
        iVar6 = (int)unaff_x20;
        if ((extraout_w9_03 >> 3 & 1) == 0) {
          if ((extraout_w9_03 >> 4 & 1) != 0) {
            uVar5 = pdVar10[1];
            pdVar27 = *(dword **)(extraout_x8_08 + 0x50);
            func_0x00675884();
code_r0x0066aea0:
            pdVar25 = (dword *)(ulong)uVar5;
            if (iVar6 != 3) {
              if (iVar6 == 0x10) goto code_r0x0066af5c;
              if (iVar6 == 0x12) {
                pdVar27 = (dword *)((long)pdVar27 << 1 ^ (long)pdVar27 >> 0x3f);
                goto code_r0x0066af38;
              }
              func_0x00674bbc();
              FUN_0077670c(&pdStack_40);
              FUN_00533c48();
              func_0x006767bc();
              unaff_x20 = pdVar27;
              goto LAB_0066ba84;
            }
            goto code_r0x0066af38;
          }
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        else {
          pdVar27 = *(dword **)(extraout_x8_08 + 0x48);
          if (-1 < (long)pdVar27) {
            uVar5 = pdVar10[1];
            func_0x00675884();
            goto code_r0x0066aea0;
          }
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        break;
      case 2:
        func_0x00676c3c();
        iVar6 = (int)unaff_x20;
        if ((extraout_w9_01 >> 3 & 1) == 0) {
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        else {
          pdVar27 = *(dword **)(extraout_x8_06 + 0x48);
          if ((ulong)pdVar27 >> 0x20 == 0) {
            pdVar25 = (dword *)(ulong)pdVar10[1];
            func_0x00675884();
            if (iVar6 == 7) goto code_r0x0066af80;
            if (iVar6 == 0xd) goto code_r0x0066af38;
            func_0x00674bbc();
            FUN_0077670c(&pdStack_40);
            FUN_0054a2c4();
            func_0x006767bc();
            unaff_x20 = pdVar27;
            goto LAB_0066ba84;
          }
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        break;
      case 3:
        func_0x00676c3c();
        iVar6 = (int)unaff_x20;
        if ((extraout_w9_02 >> 3 & 1) != 0) {
          pdVar25 = (dword *)(ulong)pdVar10[1];
          pdVar27 = *(dword **)(extraout_x8_07 + 0x48);
          func_0x00675884();
          if (iVar6 == 4) goto code_r0x0066af38;
          if (iVar6 == 6) goto code_r0x0066af5c;
          goto code_r0x0066b89c;
        }
        pdStack_40 = (dword *)&pdStack_d0;
        func_0x0067453c();
        break;
      case 4:
        func_0x00676c48();
        if ((extraout_w9_00 >> 5 & 1) == 0) {
          if ((extraout_w9_00 >> 3 & 1) == 0) {
            if ((extraout_w9_00 >> 4 & 1) == 0) {
              pdStack_40 = (dword *)&pdStack_d0;
              func_0x0067453c();
              break;
            }
            pdVar27 = (dword *)(double)*(long *)(extraout_x8_05 + 0x50);
          }
          else {
            pdVar27 = (dword *)NEON_ucvtf(*(undefined8 *)(extraout_x8_05 + 0x48));
          }
        }
        else {
          pdVar27 = *(dword **)(extraout_x8_05 + 0x58);
        }
        pdVar25 = (dword *)(ulong)pdVar10[1];
code_r0x0066af5c:
        func_0x006a4c5c(pdVar11,pdVar25,pdVar27);
        plVar21 = plStack_f0;
      default:
LAB_0066b010:
        while ((dword *)plVar21 != pdStack_f8) {
          pdVar25 = &MACH_HEADER.flags;
          __Znwm();
          *(undefined8 *)pdVar25 = 0;
          pcVar20 = (char *)(pdVar25 + 2);
          pcVar20[0] = '\0';
          pcVar20[1] = '\0';
          pcVar20[2] = '\0';
          pcVar20[3] = '\0';
          pcVar20[4] = '\0';
          pcVar20[5] = '\0';
          pcVar20[6] = '\0';
          pcVar20[7] = '\0';
          pcVar20 = (char *)(pdVar25 + 4);
          pcVar20[0] = '\0';
          pcVar20[1] = '\0';
          pcVar20[2] = '\0';
          pcVar20[3] = '\0';
          pcVar20[4] = '\0';
          pcVar20[5] = '\0';
          pcVar20[6] = '\0';
          pcVar20[7] = '\0';
          plVar15 = plVar21 + -1;
          iVar6 = (int)*plVar15;
          pdStack_70 = pdVar25;
          FUN_006538b4();
          if (iVar6 == 10) {
            func_0x006a4cc0(pdVar25,*(undefined4 *)(*plVar15 + 4));
            FUN_006a4a80();
          }
          else {
            uVar4 = iVar6 == 0xb;
            if (!(bool)uVar4) {
              func_0x00674bbc();
              FUN_0077670c(&pdStack_40);
              FUN_006650e0();
              lVar29 = plVar21[-1];
              FUN_006538b4(lVar29);
              FUN_0066510c(&pdStack_40,lVar29);
              goto LAB_0066b718;
            }
            pdVar27 = pdVar25;
            FUN_006a4c8c(pdVar25,*(undefined4 *)(*plVar15 + 4));
            pdVar10 = pdStack_130;
            FUN_006a4e2c(pdStack_130,pdVar27);
            if (((ulong)pdVar10 & 1) == 0) {
              func_0x00674bbc();
              FUN_00776714(&pdStack_40);
              FUN_00554ab4();
              FUN_00555478(&pdStack_40,adStack_110);
              func_0x0065ae70();
              unaff_x20 = pdVar25;
              goto LAB_0066ba84;
            }
          }
          pdStack_70 = (dword *)0x0;
          FUN_006731f4(&pdStack_130);
          func_0x006731d0(&pdStack_70);
          plVar21 = plVar15;
        }
        func_0x00675838();
        func_0x006895cc(pdVar25,pdVar16);
        FUN_006a4a80();
        if ((*(byte *)((long)pdStack_e0 + 1) >> 5 & 1) != 0) {
          Hint_Prefetch(unaff_x19[7],0,2,0);
          plVar21 = &lStack_128;
          func_0x0067328c(unaff_x19[7]);
          lVar19 = lStack_120;
          lVar31 = lStack_128;
          lVar29 = 0;
          uVar32 = unaff_x19[9];
          uVar22 = (ulong)unaff_x19[7] >> 0xc ^ (ulong)plVar21 >> 7;
          while( true ) {
            uVar22 = uVar22 & uVar32;
            func_0x006753d4();
            for (uVar26 = extraout_x8_12 & 0x8080808080808080; uVar26 != 0;
                uVar26 = uVar26 - 1 & uVar26) {
              uVar24 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              lVar23 = unaff_x19[8];
              plVar21 = (long *)(uVar22 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) &
                                uVar32);
              puVar13 = (ulong *)(lVar23 + (long)plVar21 * 0x20);
              uVar24 = *puVar13;
              FUN_006732c8(uVar24,puVar13[1],lVar31,lVar19);
              if ((uVar24 & 1) != 0) goto LAB_0066b194;
            }
            func_0x00674774();
            if ((extraout_x8_13 & 1) != 0) break;
            lVar29 = lVar29 + 8;
            uVar22 = lVar29 + uVar22;
          }
          plVar21 = unaff_x19 + 7;
          func_0x0067321c();
          lVar29 = unaff_x19[8] + (long)plVar21 * 0x20;
          FUN_0066bbc8(lVar29,&lStack_128);
          *(undefined4 *)(lVar29 + 0x18) = 0;
          lVar23 = unaff_x19[8];
LAB_0066b194:
          lVar23 = lVar23 + (long)plVar21 * 0x20;
          iVar6 = *(int *)(lVar23 + 0x18);
          *(int *)(lVar23 + 0x18) = iVar6 + 1;
          pdStack_40 = (dword *)CONCAT44(pdStack_40._4_4_,iVar6);
          FUN_0053ad70(&lStack_128,&pdStack_40);
        }
        Hint_Prefetch(unaff_x19[3],0,2,0);
        puVar13 = &uStack_150;
        func_0x0067328c(unaff_x19[3]);
        lVar31 = lStack_148;
        uVar32 = uStack_150;
        lVar29 = 0;
        uVar26 = unaff_x19[5];
        uVar22 = (ulong)unaff_x19[3] >> 0xc ^ (ulong)puVar13 >> 7;
        while( true ) {
          uVar22 = uVar22 & uVar26;
          func_0x006753d4();
          for (uVar24 = extraout_x8_14 & 0x8080808080808080; uVar24 != 0;
              uVar24 = uVar24 - 1 & uVar24) {
            func_0x00675f14();
            lVar19 = unaff_x19[4];
            plVar21 = (long *)(uVar22 + (extraout_x8_15 >> 3) & uVar26);
            uVar14 = uVar32;
            FUN_00673408(uVar32,lVar31,lVar19 + (long)plVar21 * 0x30);
            if ((uVar14 & 1) != 0) goto LAB_0066b258;
          }
          func_0x00674774();
          if ((extraout_x8_16 & 1) != 0) break;
          lVar29 = lVar29 + 8;
          uVar22 = lVar29 + uVar22;
        }
        plVar21 = unaff_x19 + 3;
        FUN_00673398(plVar21,extraout_x13);
        lVar29 = unaff_x19[4] + (long)plVar21 * 0x30;
        FUN_0066bbc8(lVar29,&uStack_150);
        *(undefined8 *)(lVar29 + 0x18) = 0;
        *(undefined8 *)(lVar29 + 0x20) = 0;
        *(undefined8 *)(lVar29 + 0x28) = 0;
        lVar19 = unaff_x19[4];
LAB_0066b258:
        lVar31 = lStack_120;
        lVar29 = lStack_128;
        lVar19 = lVar19 + (long)plVar21 * 0x30;
        plVar21 = (long *)(lVar19 + 0x18);
        if (plVar21 != &lStack_128) {
          uVar22 = lStack_120 - lStack_128;
          lVar23 = *plVar21;
          if ((ulong)(*(long *)(lVar19 + 0x28) - lVar23) < uVar22) {
            plVar15 = plVar21;
            func_0x0053b014(plVar21);
            func_0x00676ba8();
            FUN_0053ae4c();
            func_0x0066bc48(plVar21,plVar15);
            lVar30 = *(long *)(lVar19 + 0x20);
            if (lVar31 != lVar29) {
              func_0x00676890(lVar30);
            }
            lVar30 = lVar30 + uVar22;
          }
          else {
            lVar30 = *(long *)(lVar19 + 0x20);
            uVar32 = lVar30 - lVar23;
            if (uVar32 < uVar22) {
              if (lVar30 != lVar23) {
                _memmove(lVar23,lStack_128,uVar32);
                lVar30 = *(long *)(lVar19 + 0x20);
              }
              lVar29 = lVar29 + uVar32;
              lVar31 = lVar31 - lVar29;
              if (lVar31 != 0) {
                _memmove(lVar30,lVar29,lVar31);
              }
              lVar30 = lVar30 + lVar31;
            }
            else {
              if (lStack_120 != lStack_128) {
                func_0x00676890(lVar23);
              }
              lVar30 = lVar23 + uVar22;
            }
          }
          *(long *)(lVar19 + 0x20) = lVar30;
        }
        func_0x006765a4();
        param_3 = param_3 & 0xffffffff;
LAB_0066b340:
        func_0x006764a4();
        func_0x00676060();
        func_0x00676888();
LAB_0066b354:
        lStack_148 = lStack_148 + -4;
        iStack_154 = iStack_154 + 1;
        goto LAB_0066a77c;
      case 5:
        func_0x00676c48();
        if ((extraout_w9_04 >> 5 & 1) == 0) {
          if ((extraout_w9_04 >> 3 & 1) == 0) {
            if ((extraout_w9_04 >> 4 & 1) == 0) goto code_r0x0066b71c;
            fVar34 = (float)*(long *)(extraout_x8_09 + 0x50);
          }
          else {
            fVar34 = (float)*(ulong *)(extraout_x8_09 + 0x48);
          }
        }
        else {
          fVar34 = (float)*(double *)(extraout_x8_09 + 0x58);
        }
        pdVar25 = (dword *)(ulong)pdVar10[1];
        pdVar27 = (dword *)(ulong)(uint)fVar34;
code_r0x0066af80:
        FUN_006a4c2c(pdVar11,pdVar25,pdVar27);
        plVar21 = plStack_f0;
        goto LAB_0066b010;
      case 6:
        func_0x00676c3c();
        if ((extraout_x9_01 & 1) != 0) {
          uVar22 = *(ulong *)(extraout_x8_10 + 0x30) & 0xfffffffffffffffc;
          FUN_004636dc(uVar22,"true");
          if ((uVar22 & 1) == 0) {
            uVar22 = 0;
            func_0x00676bd8();
            FUN_004636dc();
            if ((uVar22 & 1) == 0) {
              pdStack_40 = (dword *)&pdStack_d0;
              func_0x0067453c();
              break;
            }
            pdVar27 = (dword *)0x0;
          }
          else {
            pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
          }
          pdVar25 = (dword *)(ulong)pdVar10[1];
code_r0x0066af38:
          FUN_006a4bc0(pdVar11,pdVar25,pdVar27);
          plVar21 = plStack_f0;
          goto LAB_0066b010;
        }
        pdStack_40 = (dword *)&pdStack_d0;
        func_0x0067453c();
        break;
      case 7:
        if ((*(byte *)(unaff_x19[2] + 0x10) & 1) == 0) {
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        else {
          func_0x006579b0();
          uVar22 = *(ulong *)(unaff_x19[2] + 0x30);
          pcVar20 = *(char **)(*(long *)(pdVar10 + 4) + 0x18);
          pdVar27 = pdVar10;
          pdStack_a0 = pdVar10;
          func_0x006559c0();
          ppdVar33 = (dword **)(uVar22 & 0xfffffffffffffffc);
          uVar4 = (dword *)pcVar20 == pdVar27;
          if ((bool)uVar4) {
            pdVar27 = (dword *)(long)*(char *)((long)ppdVar33 + 0x17);
            if ((long)pdVar27 < 0) {
              pdVar27 = ppdVar33[1];
              ppdVar33 = (dword **)*ppdVar33;
            }
            pdVar12 = pdVar10;
            FUN_00656360(pdVar10,ppdVar33,pdVar27);
            pdVar27 = pdVar10;
          }
          else {
            func_0x00675b24(*(undefined8 *)(pdVar10 + 2),&pdStack_40);
            FUN_004625e8();
            FUN_004bab3c(&pdStack_40,ppdVar33);
            pdVar12 = (dword *)*unaff_x19;
            FUN_0065b274(pdVar12,&pdStack_40,1);
            if ((char)*pdVar12 == '\x05') {
code_r0x0066ad98:
              uVar4 = (dword *)*(char **)(pdVar12 + 4) == pdVar10;
              if ((bool)uVar4) goto code_r0x0066afd4;
              pdStack_70 = (dword *)&pdStack_a0;
              ppdStack_68 = ppdVar33;
              pdStack_60 = (dword *)&pdStack_d0;
              func_0x00665184();
              pdVar12 = (dword *)0x0;
              pdVar27 = (dword *)0x0;
            }
            else {
              if ((char)*pdVar12 == '\x06') {
                pdVar12 = (dword *)((long)pdVar12 + -1);
                goto code_r0x0066ad98;
              }
              pdVar12 = (dword *)0x0;
              uVar4 = false;
code_r0x0066afd4:
              pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
            }
            func_0x00675aa8();
            if ((int)pdVar27 == 0) break;
          }
          if (pdVar12 != (dword *)0x0) {
            pdVar25 = (dword *)(ulong)pdStack_d0[1];
            FUN_006a4bc0(pdVar11,pdVar25,(long)(int)pdVar12[1]);
            plVar21 = plStack_f0;
            goto LAB_0066b010;
          }
          pdStack_40 = (dword *)&pdStack_d0;
          func_0x0067453c();
        }
        break;
      case 8:
        func_0x00676c3c();
        if ((extraout_w9_05 >> 1 & 1) != 0) {
          pdVar25 = (dword *)(ulong)pdVar10[1];
          FUN_00665194(pdVar11,pdVar25,*(ulong *)(extraout_x8_11 + 0x38) & 0xfffffffffffffffc);
          plVar21 = plStack_f0;
          goto LAB_0066b010;
        }
        pdStack_40 = (dword *)&pdStack_d0;
        func_0x0067453c();
        break;
      case 9:
        pdStack_a8 = pdVar10;
        if ((*(byte *)(unaff_x19[2] + 0x10) >> 2 & 1) == 0) {
          pdStack_40 = (dword *)&pdStack_a8;
          func_0x0067453c();
        }
        else {
          FUN_00656024();
          plVar21 = unaff_x19 + 0xb;
          FUN_006863f0();
          func_0x00676574(*(undefined8 *)(*plVar21 + 0x10));
          if (plVar21 == (long *)0x0) {
            func_0x00674bbc();
            ppdVar8 = &pdStack_70;
            FUN_00776714(ppdVar8);
            func_0x006651b8();
            unaff_x20 = pdStack_a8;
            uVar17 = 0;
            pdStack_a0 = (dword *)((ulong)pdStack_a0 & 0xffffffffff000000);
            pdStack_40 = (dword *)0x0;
            if ((*(byte *)((long)pdStack_a8 + 1) >> 3 & 1) != 0) {
              func_0x00674050(*(undefined8 *)(pdStack_a8 + 8));
              uVar17 = extraout_x12;
              uVar1 = extraout_x9_02;
              if (cVar3 == cVar2) {
                uVar17 = extraout_x10_01;
                uVar1 = extraout_x8_17;
              }
              FUN_00657c64(&pdStack_40,&UNK_00910528,0xd,uVar1,uVar17);
              uVar17 = 1;
            }
            FUN_00658e50(unaff_x20,uVar17,&pdStack_40,&pdStack_a0);
            if ((*(byte *)((long)unaff_x20 + 1) >> 3 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                        (&pdStack_40,&UNK_009105ae);
            }
            FUN_00555478(ppdVar8,&pdStack_40);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&pdStack_40);
            FUN_005558a0();
            goto code_r0x0066ba9c;
          }
          pdStack_70 = (dword *)&PTR_FUN_00a0dbc0;
          pdStack_40 = (dword *)&pdStack_70;
          pdStack_60 = (dword *)0x0;
          uStack_58 = 0;
          ppdStack_68 = (dword **)0x0;
          lStack_b0 = *unaff_x19;
          ppuStack_b8 = &PTR_FUN_00a0dc08;
          func_0x00675bf8(*(undefined8 *)(unaff_x19[2] + 0x40));
          pdVar27 = (dword *)&pdStack_40;
          FUN_0069c3b8();
          if (((ulong)pdVar27 & 1) == 0) {
            pdStack_a0 = (dword *)&pdStack_a8;
            pdVar25 = (dword *)&pdStack_a0;
            pdStack_98 = (dword *)&pdStack_70;
            func_0x00665184();
          }
          else {
            pdStack_a0 = (dword *)0x0;
            pdStack_98 = (dword *)0x0;
            uStack_90 = 0;
            FUN_0054a1a0(plVar21,&pdStack_a0);
            pdVar10 = pdStack_a8;
            FUN_006538b4();
            uVar4 = (int)pdVar10 == 0xb;
            if ((bool)uVar4) {
              pdVar25 = (dword *)(ulong)pdStack_a8[1];
              FUN_00665194(pdVar11,pdVar25,&pdStack_a0);
            }
            else {
              pdVar10 = pdStack_a8;
              FUN_006538b4();
              uVar4 = (int)pdVar10 == 10;
              if (!(bool)uVar4) {
                FUN_00554520((ulong)pdVar10 & 0xffffffff,10,&UNK_00911750);
                func_0x00674bbc();
                FUN_00776794(auStack_c8);
                FUN_005558a0(auStack_c8);
                goto LAB_0066b898;
              }
              func_0x006a4cc0(pdVar11,pdStack_a8[1]);
              pdVar25 = (dword *)&pdStack_a0;
              FUN_00665168();
            }
            func_0x00675df0();
          }
          FUN_006651e0(&pdStack_70);
          func_0x00676024();
          plVar21 = plStack_f0;
          if (((ulong)pdVar27 & 1) != 0) goto LAB_0066b010;
        }
      }
LAB_0066b740:
      func_0x006765a4();
LAB_0066b744:
      func_0x006764a4();
      func_0x00676060();
      func_0x00676888();
LAB_0066b750:
      *plVar18 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_0066b758;
    }
    func_0x00674bbc();
    FUN_00776714(&pdStack_40);
    func_0x00676808();
    unaff_x20 = (dword *)0x0;
  }
  goto LAB_0066ba84;
LAB_0066b3a0:
  *plVar18 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  pdVar27 = pdVar16;
  func_0x00676574(*(undefined8 *)(*(long *)pdVar16 + 0x10));
  pdStack_a0 = pdVar27;
  func_0x00676730();
  func_0x00676a6c();
  FUN_00689bc8();
  pdStack_40 = (dword *)0x0;
  pdVar10 = pdVar27;
  FUN_0054a0ac(pdVar27,&pdStack_40);
  if ((int)pdVar10 == 0) {
LAB_0066b410:
    pdStack_70 = (dword *)&pdStack_a0;
    ppdStack_68 = &pdStack_138;
    param_2 = param_2 + 0x18;
    FUN_0065ad28(*unaff_x19,param_2,uVar17,0xb,&pdStack_70,FUN_0066bad8);
    FUN_00699298(pdStack_138);
    FUN_00689bc8(param_2,pdStack_a0,pdStack_138);
  }
  else {
    uVar4 = 1;
    FUN_00549e14(pdVar16,&pdStack_40,0);
    if (((ulong)pdVar16 & 1) == 0) goto LAB_0066b410;
  }
  func_0x00675aa8();
  pdVar16 = pdStack_a0;
  pdStack_a0 = (dword *)0x0;
  if (pdVar16 != (dword *)0x0) {
    func_0x00675778();
  }
LAB_0066b758:
  pdVar16 = (dword *)&uStack_150;
  func_0x0053b048(pdVar16);
  func_0x00674120(extraout_x8);
  if ((bool)uVar4) {
    return pdVar16;
  }
LAB_0066b898:
  ___stack_chk_fail();
code_r0x0066b89c:
  func_0x00674bbc();
  FUN_0077670c(&pdStack_40);
  FUN_0054a2c4();
  func_0x006767bc();
  unaff_x20 = pdVar27;
LAB_0066ba84:
  FUN_005558a0();
  func_0x006731d0(&pdStack_70);
  func_0x006765a4();
code_r0x0066ba9c:
  func_0x006764a4();
  func_0x00676060();
  func_0x00676888();
  func_0x0053b048(&uStack_150);
  func_0x00674bc8();
  func_0x00674a24();
  func_0x00674a58();
  FUN_00554ab4();
  return unaff_x20;
}



/* Entry: 0066bab4; end: 0066bad7;  */

void FUN_0066bab4(void)

{
  func_0x00674a24();
  func_0x00674a58();
  FUN_00554ab4();
  return;
}



/* Entry: 0066bad8; end: 0066bba7;  */

void FUN_0066bad8(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  long unaff_x19;
  undefined1 auStack_188 [40];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 *apuStack_f8 [6];
  undefined1 auStack_c8 [48];
  undefined1 *puStack_98;
  
  func_0x00674188();
  FUN_00532c74(&UNK_00911d2a);
  func_0x00675934();
  FUN_0069bf9c(auStack_110,*extraout_x8);
  func_0x00674e80();
  puStack_98 = extraout_x10;
  if (in_NG == in_OV) {
    puStack_98 = auStack_110;
  }
  FUN_00532c74(&UNK_00911d9f);
  func_0x0067638c();
  puVar2 = (undefined8 *)*extraout_x8_00;
  FUN_0069bf9c(auStack_128);
  func_0x00674ed8();
  apuStack_f8[0] = extraout_x10_00;
  if (in_NG == in_OV) {
    apuStack_f8[0] = auStack_128;
  }
  func_0x00675664();
  puVar5 = auStack_c8;
  ppuVar6 = apuStack_f8;
  FUN_00575ebc();
  func_0x00674d6c();
  func_0x00674d88();
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0067491c();
    func_0x00674d88();
    func_0x00674bc8();
    func_0x00674c58(*puVar2,puVar2[1] + 0x18,puVar2[2],param_2,puVar5,ppuVar6);
    func_0x00676540();
    plVar1 = *(long **)(unaff_x19 + 0x18);
    if (plVar1 == (long *)0x0) {
      if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
        func_0x00674bbc();
        func_0x007766a0(auStack_188);
        FUN_0065ae4c(auStack_188,&UNK_00910626);
        FUN_00555478();
        func_0x0065ae70();
        func_0x00675ac0();
      }
      func_0x00674bbc();
      func_0x007766a0(auStack_188);
      func_0x0065ae70(auStack_188,&DAT_0091064a);
      FUN_00555478();
      func_0x006765f8();
      FUN_00555478();
      func_0x00675ac0();
    }
    else {
      lVar4 = (long)*(char *)(unaff_x19 + 0xa7);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x90);
        lVar4 = *(long *)(unaff_x19 + 0x98);
      }
      else {
        lVar3 = unaff_x19 + 0x90;
      }
      func_0x006746d8(plVar1,lVar3,lVar4);
      func_0x006749e4();
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    func_0x006754bc();
    return;
  }
  return;
}



/* Entry: 0066bba8; end: 0066bbc7;  */

void FUN_0066bba8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_58 [40];
  
  func_0x00674c58(*param_1,param_1[1] + 0x18,param_1[2],param_2,param_3,param_4);
  func_0x00676540();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 == (long *)0x0) {
    if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
      func_0x00674bbc();
      func_0x007766a0(auStack_58);
      FUN_0065ae4c(auStack_58,&UNK_00910626);
      FUN_00555478();
      func_0x0065ae70();
      func_0x00675ac0();
    }
    func_0x00674bbc();
    func_0x007766a0(auStack_58);
    func_0x0065ae70(auStack_58,&DAT_0091064a);
    FUN_00555478();
    func_0x006765f8();
    FUN_00555478();
    func_0x00675ac0();
  }
  else {
    lVar3 = (long)*(char *)(unaff_x19 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(unaff_x19 + 0x90);
      lVar3 = *(long *)(unaff_x19 + 0x98);
    }
    else {
      lVar2 = unaff_x19 + 0x90;
    }
    func_0x006746d8(plVar1,lVar2,lVar3);
    func_0x006749e4();
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(unaff_x19 + 0x88) = 1;
  func_0x006754bc();
  return;
}



/* Entry: 0066bbc8; end: 0066bc47;  */

void FUN_0066bbc8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x006752d8();
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = 0;
  uStack_40 = param_1;
  if (lVar2 - lVar1 != 0) {
    FUN_0066bc48();
    lVar3 = *(long *)(unaff_x19 + 8);
    func_0x006763bc(lVar3);
    _memmove();
    *(long *)(unaff_x19 + 8) = lVar3 + (lVar2 - lVar1);
  }
  uStack_38 = 1;
  func_0x0066bc80(&uStack_40);
  return;
}



/* Entry: 0066bc48; end: 0066bce3;  */

long * FUN_0066bc48(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    func_0x0053af68();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    return plVar1;
  }
  FUN_0053af0c();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_0053b07c(param_1);
  }
  return param_1;
}



/* Entry: 0066bce4; end: 0066bd8f;  */

long FUN_0066bce4(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x00674c58();
  FUN_00666d10();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_00666d44();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x0066bd70();
  lVar2 = unaff_x19[1];
  FUN_00666d80(&plStack_58);
  return lVar2;
}



/* Entry: 0066bd90; end: 0066bdb7;  */

undefined8 FUN_0066bd90(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  FUN_0066bdb8();
  func_0x006758c0(param_1);
  FUN_0066bdf0();
  return unaff_x19;
}



/* Entry: 0066bdb8; end: 0066bdcb;  */

void FUN_0066bdb8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != param_1[1]) {
    lVar1 = (param_1[1] - *param_1) * 0x10000000 >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*param_1 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 0066bdcc; end: 0066bdef;  */

void FUN_0066bdcc(void)

{
  func_0x006758c0();
  FUN_0066bdf0();
  return;
}



/* Entry: 0066bdf0; end: 0066be07;  */

void FUN_0066bdf0(long param_1)

{
  long extraout_x8;
  
  func_0x00676958();
  if (param_1 != 0) {
    *(long *)(extraout_x8 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0066be08; end: 0066be1b;  */

void FUN_0066be08(void)

{
  FUN_006651e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0066be1c; end: 0066be7f;  */

void FUN_0066be1c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  func_0x00674238();
  lVar1 = (long)*(char *)(param_1 + 0x1f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(unaff_x19 + 0x10);
  }
  if (lVar1 != 0) {
    FUN_00532c74();
    func_0x0067674c();
  }
  func_0x0067674c();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 0066be80; end: 0066be87;  */

void FUN_0066be80(void)

{
  return;
}



/* Entry: 0066be88; end: 0066bf57;  */

long FUN_0066be88(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long lVar3;
  int extraout_w8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  
  func_0x00674b00();
  func_0x00676914(*(undefined8 *)(param_1 + 8));
  FUN_00699298();
  lVar2 = *(long *)(unaff_x21 + 8);
  func_0x006768c0();
  lVar3 = lVar2;
  func_0x00676be4();
  if (!(bool)in_ZR) {
    bVar1 = extraout_w8 == 1;
    if ((bVar1) && (func_0x00676344(*(undefined8 *)(unaff_x20 + 0x20)), bVar1)) {
      func_0x0067546c();
      for (; unaff_x23 < *(int *)(lVar2 + 0x8c); unaff_x23 = unaff_x23 + 1) {
        lVar4 = *(long *)(lVar2 + 0x60);
        if (*(long *)(lVar4 + unaff_x22 + 0x20) == unaff_x20) {
          func_0x00675444();
          bVar1 = (int)lVar3 == 0xb;
          if (((bVar1) && (func_0x00675c1c(*(undefined1 *)(lVar4 + unaff_x22 + 1)), bVar1)) &&
             (func_0x0067528c(), lVar3 == lVar2)) {
            return lVar4 + unaff_x22;
          }
        }
        unaff_x22 = unaff_x22 + 0x58;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 0066bf58; end: 0066bfcb;  */

undefined8 FUN_0066bf58(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  FUN_004636dc(param_3,&UNK_00810ba1);
  if (((uVar1 & 1) == 0) && (FUN_004636dc(param_3,&UNK_00810bb6), (int)param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00676914(*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_0065b364(uVar2,param_4,1);
    func_0x00675120();
    if (!(bool)in_ZR) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 0066bfcc; end: 0066bfd7;  */

void FUN_0066bfcc(undefined8 *param_1)

{
  code *pcVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (((uint)*param_1 >> 3 & 1) != 0) {
    return;
  }
  FUN_005685fc();
  FUN_00584c60(3,"mutex.cc",0x9a7,"thread should hold write lock on Mutex %p %s");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5685fc);
  (*pcVar1)();
}



/* Entry: 0066bfd8; end: 0066bffb;  */

undefined8 FUN_0066bfd8(undefined8 param_1)

{
  FUN_0066bffc(param_1,0);
  return param_1;
}



/* Entry: 0066bffc; end: 0066c013;  */

void FUN_0066bffc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(1,lVar1,lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 0066c014; end: 0066c04b;  */

void FUN_0066c014(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(1,param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 0066c04c; end: 0066c057;  */

void FUN_0066c04c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,FUN_0066c058);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,FUN_0066c058);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 0066c058; end: 0066c087;  */

undefined8 * FUN_0066c058(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00675d2c();
  }
  else {
    func_0x00675840();
  }
  *puVar1 = &PTR_FUN_00a0dff8;
  puVar1[1] = param_1;
  FUN_0067dce8();
  return puVar1;
}



/* Entry: 0066c088; end: 0066c0eb;  */

void FUN_0066c088(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00674c00();
  FUN_0066c0ec();
  uVar2 = (undefined1)param_3;
  if ((param_3 & 1) != 0) {
    func_0x00676428(unaff_x20[1] + param_2 * 0x18,*unaff_x21);
    unaff_x21[1] = 0;
    unaff_x21[2] = 0;
    *unaff_x21 = 0;
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + param_2;
  unaff_x19[1] = lVar1 + param_2 * 0x18;
  *(undefined1 *)(unaff_x19 + 2) = uVar2;
  return;
}



/* Entry: 0066c0ec; end: 0066c1a7;  */

undefined1  [16] FUN_0066c0ec(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  func_0x00674e30();
  func_0x006746c4();
  func_0x00675160();
  FUN_0066696c();
  lVar3 = 0;
  uVar4 = unaff_x19[2];
  func_0x00674f64(*unaff_x19 >> 0xc ^ param_1 >> 7);
  uVar5 = extraout_x8;
  while( true ) {
    uVar5 = uVar5 & uVar4;
    func_0x00674f7c();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      func_0x00676ae4();
      param_1 = uVar5 + (extraout_x8_01 >> 3) & uVar4;
      uVar1 = unaff_x20;
      FUN_0066a580();
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_0066c188;
      }
      func_0x00676acc();
      param_1 = uVar1;
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar5 = lVar3 + uVar5;
  }
  func_0x00674f10();
  FUN_0066698c();
  uVar2 = 1;
LAB_0066c188:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0066c1a8; end: 0066c217;  */

undefined8 * FUN_0066c1a8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long extraout_x9;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      param_2 = (undefined8 *)&UNK_00a0dc50;
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0066c244();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
    puVar3 = param_1;
    if ((long)uVar4 < 0) {
      puVar3 = (undefined8 *)*param_1;
      uVar4 = param_1[1];
    }
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    if (uVar1 == uVar4) {
      func_0x0046d038(puVar2,uVar1,puVar3);
      puVar3 = (undefined8 *)(ulong)((int)puVar2 == 0);
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
    return puVar3;
  }
  return param_1;
}



/* Entry: 0066c218; end: 0066c243;  */

bool FUN_0066c218(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if ((long)uVar5 < 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  if (uVar1 == uVar5) {
    func_0x0046d038(puVar3,uVar1,puVar4);
    bVar2 = (int)puVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0066c244; end: 0066c2ab;  */

void FUN_0066c244(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00674cfc();
      FUN_0066c2dc();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      func_0x0066c2f0();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066c2ac; end: 0066c2db;  */

void FUN_0066c2ac(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x00674b94();
  func_0x006756cc(param_1,unaff_x20 + extraout_x8 * 0x20);
  func_0x006748bc();
  FUN_00537d24(param_1,0x20);
  return;
}



/* Entry: 0066c2dc; end: 0066c31b;  */

void FUN_0066c2dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00675160();
  auStack_20[0] = param_2;
  func_0x00490290(auStack_20);
  return;
}



/* Entry: 0066c31c; end: 0066c33b;  */

void FUN_0066c31c(void)

{
  FUN_00666540();
  func_0x00675f20();
  return;
}



/* Entry: 0066c33c; end: 0066c383;  */

bool FUN_0066c33c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  FUN_00666540(param_2);
  iVar2 = (int)*param_1;
  FUN_00666540();
  lVar3 = param_2;
  func_0x00675e8c();
  if (param_2 == lVar3) {
    func_0x0046d038();
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 0066c384; end: 0066c3c7;  */

bool FUN_0066c384(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_2 == param_1) {
    return true;
  }
  plVar7 = *(long **)(param_2 + 8);
  plVar6 = *(long **)(param_1 + 8);
  bVar3 = *(byte *)((long)plVar7 + 0x17);
  uVar1 = plVar7[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)plVar6 + 0x17);
  uVar2 = plVar6[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    plVar5 = (long *)*plVar7;
    if (-1 < (char)bVar3) {
      plVar5 = plVar7;
    }
    plVar7 = (long *)*plVar6;
    if (-1 < (char)bVar4) {
      plVar7 = plVar6;
    }
    _memcmp(plVar5,plVar7);
    return (int)plVar5 == 0;
  }
  return false;
}



/* Entry: 0066c3c8; end: 0066c537;  */

void FUN_0066c3c8(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  uint uVar4;
  long lVar5;
  undefined4 uStack_28;
  
  func_0x006752e8();
  uVar4 = *(uint *)(unaff_x19 + 1);
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    uVar4 = uVar4 + 1;
    *(uint *)(unaff_x19 + 1) = uVar4;
    bVar1 = *(byte *)((long)param_1 + 10);
    if ((int)uVar4 < (int)(uint)bVar1) {
      return;
    }
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      lVar5 = unaff_x19[1];
      lVar2 = *unaff_x19;
      while( true ) {
        if (uVar4 != bVar1) {
          return;
        }
        plVar3 = (long *)*param_1;
        if (*(char *)((long)plVar3 + 0xb) != '\0') break;
        uVar4 = (uint)*(byte *)(param_1 + 1);
        *(uint *)(unaff_x19 + 1) = uVar4;
        *unaff_x19 = (long)plVar3;
        bVar1 = *(byte *)((long)plVar3 + 10);
        param_1 = plVar3;
      }
      *unaff_x19 = lVar2;
      uStack_28 = (undefined4)lVar5;
      *(undefined4 *)(unaff_x19 + 1) = uStack_28;
      return;
    }
  }
  FUN_00665ccc();
  lVar2 = param_1[uVar4 + 1 & 0xff];
  while (*unaff_x19 = lVar2, *(char *)(lVar2 + 0xb) == '\0') {
    func_0x00665c68();
  }
  *(undefined4 *)(unaff_x19 + 1) = 0;
  return;
}



/* Entry: 0066c538; end: 0066c613;  */

void FUN_0066c538(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x00676210();
  bVar2 = *(byte *)(param_1 + 10);
  uVar4 = (ulong)(param_3 + param_2);
  uVar1 = param_3 + param_2 & 0xff;
  lVar6 = (ulong)uVar1 * 0x18 + 0x10;
  lVar3 = param_1;
  if ((ulong)bVar2 * 0x18 + (ulong)uVar1 * -0x18 != 0) {
    do {
      func_0x006757a0(lVar6);
      lVar6 = extraout_x8 + 0x18;
    } while (extraout_x9 != 0x18);
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    for (uVar5 = 0; param_3 != uVar5; uVar5 = uVar5 + 1) {
      func_0x00675ea0();
      lVar3 = *(long *)(lVar3 + ((ulong)(uint)(param_2 + 1 + (int)uVar5) & 0xff) * 8);
      FUN_00665b84();
    }
    while( true ) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      if ((uint)bVar2 < (uVar1 & 0xff)) break;
      func_0x00675ea0();
      lVar6 = *(long *)(lVar3 + (uVar4 & 0xff) * 8);
      lVar3 = param_1;
      FUN_0066c844();
      *(long *)(lVar3 + ((ulong)(uVar1 - param_3) & 0xff) * 8) = lVar6;
      *(char *)(lVar6 + 8) = (char)(uVar1 - param_3);
    }
  }
  *(byte *)(param_1 + 10) = bVar2 - (char)param_3;
  return;
}



/* Entry: 0066c614; end: 0066c843;  */

undefined1  [16] FUN_0066c614(undefined **param_1,undefined **param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined *extraout_x8;
  undefined **unaff_x19;
  ulong unaff_x20;
  undefined **unaff_x21;
  undefined **ppuVar5;
  undefined **unaff_x24;
  undefined **ppuVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined **ppuStack_70;
  ulong uStack_68;
  
  func_0x00676158();
  bVar8 = true;
  ppuStack_70 = param_2;
  uStack_68 = param_3;
  while( true ) {
    uVar9 = (uint)unaff_x20;
    ppuVar5 = (undefined **)*unaff_x21;
    if (param_2 == ppuVar5) break;
    bVar2 = *(byte *)((long)param_2 + 10);
    if (4 < bVar2) goto LAB_0066c7f0;
    ppuVar5 = (undefined **)*param_2;
    bVar3 = *(byte *)(param_2 + 1);
    uVar9 = (uint)bVar2;
    iVar7 = (int)param_3;
    if (bVar3 == 0) {
LAB_0066c68c:
      uVar10 = (uint)bVar2;
      ppuVar6 = param_2;
      if (bVar3 < *(byte *)((long)ppuVar5 + 10)) {
        unaff_x24 = (undefined **)(ulong)(bVar3 + 1);
        FUN_00665ccc();
        bVar2 = ppuVar5[(ulong)unaff_x24 & 0xff][10];
        if (uVar9 + bVar2 + 1 < 0xb) {
          func_0x00675824();
          FUN_0066c87c();
          bVar4 = true;
          goto LAB_0066c784;
        }
        if ((uVar10 != 0) && (param_1 = ppuVar5, iVar7 < 1)) goto LAB_0066c6fc;
        uVar10 = (int)(bVar2 - uVar10) / 2;
        uVar9 = bVar2 - 1 & 0xff;
        if ((uVar10 & 0xff) <= uVar9) {
          uVar9 = uVar10 & 0xff;
        }
        ppuVar5 = param_2;
        func_0x0066c97c(param_2,uVar9);
      }
      else {
LAB_0066c6fc:
        ppuVar5 = param_1;
        if (bVar3 != 0) {
          func_0x006766dc();
          ppuVar5 = (undefined **)ppuVar5[(ulong)unaff_x24 & 0xff];
          bVar2 = *(byte *)((long)ppuVar5 + 10);
          if ((5 < bVar2) && ((uVar10 == 0 || (iVar7 < (int)uVar10)))) {
            uVar9 = bVar2 - uVar9;
            uVar10 = bVar2 - 1 & 0xff;
            if ((uVar9 & 0xfe) >> 1 <= uVar10) {
              uVar10 = uVar9 >> 1 & 0x7f;
            }
            func_0x0066cae0(ppuVar5,(ulong)uVar10,param_2);
            bVar4 = false;
            param_3 = param_3 + uVar10;
            goto LAB_0066c784;
          }
        }
      }
      bVar4 = false;
    }
    else {
      func_0x006766dc();
      ppuVar6 = (undefined **)param_1[(ulong)unaff_x24 & 0xff];
      iVar1 = *(byte *)((long)ppuVar6 + 10) + 1;
      unaff_x24 = ppuVar6;
      if (10 < iVar1 + uVar9) goto LAB_0066c68c;
      param_3 = (ulong)(uint)(iVar1 + iVar7);
      ppuVar5 = unaff_x21;
      FUN_0066c87c();
      bVar4 = true;
    }
LAB_0066c784:
    if (bVar8) {
      uStack_68 = CONCAT44(uStack_68._4_4_,(int)param_3);
      unaff_x19 = ppuVar6;
      unaff_x20 = param_3;
      ppuStack_70 = ppuVar6;
    }
    uVar9 = (uint)unaff_x20;
    if (!bVar4) goto LAB_0066c7f0;
    bVar8 = false;
    param_3 = (ulong)*(byte *)(ppuVar6 + 1);
    param_2 = (undefined **)*ppuVar6;
    param_1 = ppuVar5;
  }
  if (*(char *)((long)ppuVar5 + 10) == '\0') {
    if (*(char *)((long)ppuVar5 + 0xb) == '\0') {
      ppuVar6 = ppuVar5;
      func_0x00665c68();
      func_0x00675c04();
      *ppuVar6 = extraout_x8;
    }
    else {
      ppuVar6 = &PTR_LOOP_00a0da78;
      unaff_x21[1] = (undefined *)&PTR_LOOP_00a0da78;
    }
    *unaff_x21 = (undefined *)ppuVar6;
    FUN_00665b84(ppuVar5);
  }
  if (unaff_x21[2] == (undefined *)0x0) {
    unaff_x19 = (undefined **)unaff_x21[1];
    uStack_68 = (ulong)*(byte *)((long)unaff_x19 + 10);
  }
  else {
LAB_0066c7f0:
    if (uVar9 == *(byte *)((long)unaff_x19 + 10)) {
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar9 - 1);
      FUN_0066c3c8(&ppuStack_70);
      unaff_x19 = ppuStack_70;
    }
  }
  auVar11._8_8_ = uStack_68;
  auVar11._0_8_ = unaff_x19;
  return auVar11;
}



/* Entry: 0066c844; end: 0066c87b;  */

long FUN_0066c844(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0067578c(1,4);
  FUN_00665ca4();
  return param_1 + lVar1;
}



/* Entry: 0066c87c; end: 0066c97b;  */

void FUN_0066c87c(undefined8 param_1,long *param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar5;
  long lVar6;
  
  func_0x006749c4();
  bVar5 = *(byte *)((long)param_2 + 10);
  lVar4 = *param_2 + (ulong)*(byte *)(param_2 + 1) * 0x18;
  lVar3 = *(long *)(lVar4 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  param_2[(ulong)bVar5 * 3 + 3] = *(long *)(lVar4 + 0x18);
  param_2[(ulong)bVar5 * 3 + 2] = lVar6;
  param_2[(ulong)bVar5 * 3 + 4] = lVar3;
  if ((ulong)*(byte *)(param_3 + 10) * 3 != 0) {
    do {
      func_0x006757a0();
    } while (extraout_x8 != 0x18);
  }
  cVar1 = *(char *)((long)unaff_x19 + 10);
  if (*(char *)((long)unaff_x19 + 0xb) == '\0') {
    func_0x00675b34();
    bVar5 = 0;
    while( true ) {
      bVar2 = *(byte *)(unaff_x21 + 10);
      if (bVar2 < bVar5) break;
      func_0x00675b68();
      bVar5 = bVar5 + 1;
    }
    cVar1 = *(char *)((long)unaff_x19 + 10);
  }
  else {
    bVar2 = *(byte *)(unaff_x21 + 10);
  }
  *(byte *)((long)unaff_x19 + 10) = bVar2 + cVar1 + '\x01';
  *(undefined1 *)(unaff_x21 + 10) = 0;
  FUN_0066c538(*unaff_x19,*(undefined1 *)(unaff_x19 + 1),1);
  if (*(long *)(unaff_x20 + 8) == unaff_x21) {
    *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  }
  return;
}



/* Entry: 0066c97c; end: 0066cc57;  */

void FUN_0066c97c(long *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00676210();
  func_0x00676188();
  bVar1 = *(byte *)((long)param_1 + 10);
  lVar2 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x18;
  lVar3 = *(long *)(lVar2 + 0x20);
  lVar6 = *(long *)(lVar2 + 0x10);
  param_1[(ulong)bVar1 * 3 + 3] = *(long *)(lVar2 + 0x18);
  param_1[(ulong)bVar1 * 3 + 2] = lVar6;
  param_1[(ulong)bVar1 * 3 + 4] = lVar3;
  lVar2 = (param_2 & 0xffffffff) * 0x18 + -0x18;
  param_3 = param_3 + lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00675728();
      param_3 = extraout_x8;
    } while (extraout_x9 != 0x18);
  }
  lVar2 = *unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x18;
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(lVar2 + 0x18) = uVar8;
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  if ((ulong)*(byte *)(unaff_x19 + 10) * 0x18 + (param_2 & 0xffffffff) * -0x18 != 0) {
    do {
      func_0x006757a0();
    } while (extraout_x9_00 != 0x18);
  }
  if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
    for (uVar5 = 0; (param_2 & 0xffffffff) != uVar5; uVar5 = uVar5 + 1) {
      func_0x00675ff8();
      FUN_0066cc58();
    }
    for (uVar4 = 0; (int)(uVar4 & 0xff) <= (int)((uint)*(byte *)(unaff_x19 + 10) - unaff_w20);
        uVar4 = uVar4 + 1) {
      func_0x00675ff8();
      func_0x00675b68();
    }
  }
  *(char *)((long)unaff_x21 + 10) = *(char *)((long)unaff_x21 + 10) + (char)unaff_w20;
  *(char *)(unaff_x19 + 10) = *(char *)(unaff_x19 + 10) - (char)unaff_w20;
  return;
}



/* Entry: 0066cc58; end: 0066cc83;  */

void FUN_0066cc58(long param_1)

{
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00676188();
  FUN_0066c844();
  *(undefined8 **)(param_1 + (unaff_x20 & 0xffffffff) * 8) = unaff_x19;
  *(char *)(unaff_x19 + 1) = (char)unaff_x20;
  *unaff_x19 = unaff_x21;
  return;
}



/* Entry: 0066cc84; end: 0066ccbf;  */

void FUN_0066cc84(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00675e34();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 8;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 0066ccc0; end: 0066cd2f;  */

void FUN_0066ccc0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long extraout_x9;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0066cd30();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      puVar1 = unaff_x20;
      func_0x00666fe4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + (long)puVar1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066cd30; end: 0066cd9b;  */

void FUN_0066cd30(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      puVar1 = unaff_x20;
      func_0x00666fe4();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      puVar1 = (undefined8 *)(unaff_x25 + (long)puVar1 * 0x20);
      uVar2 = *unaff_x20;
      uVar4 = unaff_x20[3];
      uVar3 = unaff_x20[2];
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
      puVar1[3] = uVar4;
      puVar1[2] = uVar3;
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066cd9c; end: 0066cda7;  */

ulong FUN_0066cd9c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar2 = &PTR_LOOP_00a01490;
  func_0x004905d4(&PTR_LOOP_00a01490);
  lVar1 = *(long *)(param_2 + 0x10);
  FUN_00490188();
  func_0x00490bd8((long)ppuVar2 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 0066cda8; end: 0066d15b;  */

int * FUN_0066cda8(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  undefined8 extraout_x10;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 in_register_00005008;
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  
  iVar1 = *param_3;
  iVar2 = iVar1 + param_3[1] * 0x18;
  iVar3 = iVar2 + param_3[2] * 0x30;
  iVar4 = iVar3 + param_3[3] * 200;
  iVar5 = iVar4 + param_3[4] * 0x48;
  iVar6 = iVar5 + param_3[5] * 0x58;
  iVar7 = iVar6 + param_3[6] * 0x98;
  iVar8 = iVar7 + param_3[7] * 0x58;
  iVar9 = iVar8 + param_3[8] * 0x60;
  uVar10 = iVar9 + param_3[9] * 0x70;
  uVar18 = (ulong)uVar10;
  iVar11 = uVar10 + param_3[10] * 0x50;
  iVar12 = iVar11 + param_3[0xb] * 0x58;
  iVar13 = iVar12 + param_3[0xc] * 0x58;
  iVar14 = iVar13 + param_3[0xd] * 0xb0;
  piVar15 = (int *)((long)iVar14 + 0x38);
  __Znwm();
  iVar1 = iVar1 + 0x38;
  iVar2 = iVar2 + 0x38;
  *piVar15 = iVar1;
  piVar15[1] = iVar2;
  piVar15[2] = iVar3 + 0x38;
  piVar15[3] = iVar4 + 0x38;
  piVar15[4] = iVar5 + 0x38;
  piVar15[5] = iVar6 + 0x38;
  piVar15[6] = iVar7 + 0x38;
  piVar15[7] = iVar8 + 0x38;
  piVar15[8] = iVar9 + 0x38;
  piVar15[9] = uVar10 + 0x38;
  piVar15[10] = iVar11 + 0x38;
  piVar15[0xb] = iVar12 + 0x38;
  piVar15[0xc] = iVar13 + 0x38;
  piVar15[0xd] = iVar14 + 0x38;
  for (lVar17 = (long)iVar1; iVar2 != lVar17; lVar17 = lVar17 + 0x18) {
    puVar20 = (undefined8 *)((long)piVar15 + lVar17);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
  }
  piVar16 = piVar15;
  func_0x00675940();
  puVar20 = extraout_x8;
  for (lVar17 = extraout_x9; lVar17 != 0; lVar17 = lVar17 + -0x30) {
    *puVar20 = &PTR_FUN_00a0e2c8;
    puVar20[1] = 0;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[2] = 0;
    *(undefined4 *)(puVar20 + 5) = 0;
    puVar20 = puVar20 + 6;
  }
  func_0x00676a8c((long)piVar15[2]);
  for (; uVar18 != 0; uVar18 = uVar18 - 200) {
    FUN_00654384();
    piVar16 = piVar16 + 0x32;
  }
  func_0x00675940();
  func_0x00675c10();
  puVar20 = extraout_x8_00;
  for (lVar17 = extraout_x9_00; lVar17 != 0; lVar17 = lVar17 + -0x48) {
    puVar20[1] = 0;
    puVar20[2] = 0;
    *puVar20 = extraout_x10;
    *(undefined4 *)(puVar20 + 3) = 0;
    puVar20[5] = in_register_00005008;
    puVar20[4] = param_1;
    puVar20[7] = in_register_00005008;
    puVar20[6] = param_1;
    puVar20[8] = 0;
    puVar20 = puVar20 + 9;
  }
  func_0x00675940();
  func_0x00675c10();
  lVar17 = extraout_x9_01;
  while (lVar17 != 0) {
    func_0x00674548();
    *(undefined8 *)(extraout_x8_01 + 0x4d) = 0;
    func_0x00676a60();
    lVar17 = extraout_x9_02;
  }
  func_0x00676a8c((long)piVar15[5]);
  for (lVar17 = 0; lVar17 != 0; lVar17 = lVar17 + -0x98) {
    func_0x0067b720();
    piVar16 = piVar16 + 0x26;
  }
  func_0x00675940();
  func_0x00675c10();
  lVar17 = extraout_x9_03;
  while (lVar17 != 0) {
    func_0x00674548();
    *(undefined4 *)(extraout_x8_02 + 0x4f) = 0;
    func_0x00676a60();
    lVar17 = extraout_x9_04;
  }
  func_0x00675940();
  func_0x00675c10();
  if (extraout_x9_05 != 0) {
    do {
      func_0x00674548();
      *(undefined8 *)(extraout_x8_03 + 0x52) = in_register_00005008;
      *(undefined8 *)(extraout_x8_03 + 0x4a) = param_1;
    } while (extraout_x9_06 != 0x60);
  }
  func_0x00676a8c((long)piVar15[8]);
  for (lVar17 = 0; lVar17 != 0; lVar17 = lVar17 + -0x70) {
    FUN_006788c4();
    piVar16 = piVar16 + 0x1c;
  }
  func_0x00675940();
  func_0x00675c10();
  if (extraout_x9_07 != 0) {
    do {
      func_0x00674548();
    } while (extraout_x9_08 != 0x50);
  }
  func_0x00675940();
  func_0x00675c10();
  lVar17 = extraout_x9_09;
  while (lVar17 != 0) {
    func_0x00674548();
    *(undefined1 *)(extraout_x8_04 + 0x50) = 0;
    func_0x00676a60();
    lVar17 = extraout_x9_10;
  }
  func_0x00675940();
  func_0x00675c10();
  lVar17 = extraout_x9_11;
  while (lVar17 != 0) {
    func_0x00674548();
    *(undefined8 *)(extraout_x8_05 + 0x50) = 0;
    func_0x00676a60();
    lVar17 = extraout_x9_12;
  }
  func_0x00676a8c((long)piVar15[0xc]);
  for (lVar17 = 0; lVar17 != 0; lVar17 = lVar17 + -0xb0) {
    FUN_0067a51c();
    piVar16 = piVar16 + 0x2c;
  }
  puVar20 = *(undefined8 **)(param_2 + 0xb8);
  if (puVar20 < *(undefined8 **)(param_2 + 0xc0)) {
    puVar21 = puVar20 + 1;
    *puVar20 = piVar15;
  }
  else {
    plVar19 = (long *)(param_2 + 0xb0);
    func_0x00676cec(*plVar19);
    FUN_0066638c();
    FUN_006663b4(auStack_88,piVar16,*(long *)(param_2 + 0xb8) - *plVar19 >> 3,
                 (undefined8 *)(param_2 + 0xc0));
    *puStack_78 = piVar15;
    puStack_78 = puStack_78 + 1;
    func_0x00666408(plVar19,auStack_88);
    puVar21 = *(undefined8 **)(param_2 + 0xb8);
    FUN_00666428(auStack_88);
  }
  *(undefined8 **)(param_2 + 0xb8) = puVar21;
  return piVar15;
}



/* Entry: 0066d15c; end: 0066d243;  */

void FUN_0066d15c(long *param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_2;
  iVar5 = param_2[1];
  piVar1 = (int *)0x0;
  if ((long)iVar4 != 0x38) {
    piVar1 = param_2 + 0xe;
  }
  lVar2 = 0;
  if (iVar4 != iVar5) {
    lVar2 = (long)param_2 + (long)iVar4;
  }
  *param_1 = (long)piVar1;
  param_1[1] = lVar2;
  iVar4 = param_2[2];
  iVar6 = param_2[3];
  lVar2 = 0;
  if (iVar5 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar5;
  }
  lVar3 = 0;
  if (iVar4 != iVar6) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  lVar2 = 0;
  if (iVar6 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar6;
  }
  lVar3 = 0;
  if (iVar4 != iVar5) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[4] = lVar2;
  param_1[5] = lVar3;
  iVar4 = param_2[6];
  iVar6 = param_2[7];
  lVar2 = 0;
  if (iVar5 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar5;
  }
  lVar3 = 0;
  if (iVar4 != iVar6) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[6] = lVar2;
  param_1[7] = lVar3;
  iVar4 = param_2[8];
  iVar5 = param_2[9];
  lVar2 = 0;
  if (iVar6 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar6;
  }
  lVar3 = 0;
  if (iVar4 != iVar5) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  iVar4 = param_2[10];
  iVar6 = param_2[0xb];
  lVar2 = 0;
  if (iVar5 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar5;
  }
  lVar3 = 0;
  if (iVar4 != iVar6) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[10] = lVar2;
  param_1[0xb] = lVar3;
  iVar4 = param_2[0xc];
  lVar2 = 0;
  if (iVar6 != iVar4) {
    lVar2 = (long)param_2 + (long)iVar6;
  }
  lVar3 = 0;
  if (iVar4 != param_2[0xd]) {
    lVar3 = (long)param_2 + (long)iVar4;
  }
  param_1[0xc] = lVar2;
  param_1[0xd] = lVar3;
  return;
}



/* Entry: 0066d244; end: 0066d2bb;  */

void FUN_0066d244(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  uint uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_0066d2bc();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_0066d32c(uVar1,*(undefined8 *)(*unaff_x22 + 0x10));
      func_0x0067444c();
      func_0x00673efc(uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d2bc; end: 0066d32b;  */

void FUN_0066d2bc(void)

{
  uint uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_0066d32c(uVar1,*(undefined8 *)(*unaff_x22 + 0x10));
      func_0x0067444c();
      func_0x00673efc(uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d32c; end: 0066d34b;  */

void FUN_0066d32c(void)

{
  func_0x00675ae4();
  return;
}



/* Entry: 0066d34c; end: 0066d37b;  */

void FUN_0066d34c(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x00674b94();
  func_0x006756cc(param_1,unaff_x20 + extraout_x8 * 8);
  func_0x006748bc();
  FUN_00537d24(param_1,8);
  return;
}



/* Entry: 0066d37c; end: 0066d397;  */

void FUN_0066d37c(void)

{
  func_0x00675ae4();
  return;
}



/* Entry: 0066d398; end: 0066d40f;  */

void FUN_0066d398(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_0066d410();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_0066c31c(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d410; end: 0066d477;  */

void FUN_0066d410(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *unaff_x22;
      FUN_0066c31c(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d478; end: 0066d47f;  */

void FUN_0066d478(void)

{
  FUN_00666540();
  func_0x00675f20();
  return;
}



/* Entry: 0066d480; end: 0066d4ab;  */

void FUN_0066d480(undefined8 param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_00667014(auStack_28,param_1);
  func_0x006670f8(auStack_28);
  return;
}



/* Entry: 0066d4ac; end: 0066d523;  */

void FUN_0066d4ac(void)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  char *unaff_x22;
  long unaff_x23;
  long lVar3;
  long lVar4;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_0066d524();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00676210();
    func_0x00674364();
    FUN_0066d34c();
    lVar3 = *(long *)(unaff_x19 + 8);
    pcVar1 = unaff_x22;
    for (lVar4 = unaff_x23; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (-1 < *pcVar1) {
        puVar2 = unaff_x20;
        FUN_0066d480();
        func_0x00674324();
        func_0x00673efc(unaff_w21 & 0x7f);
        *(undefined8 *)(lVar3 + (long)puVar2 * 8) = *unaff_x20;
      }
      pcVar1 = pcVar1 + 1;
      unaff_x20 = unaff_x20 + 1;
    }
    if (unaff_x23 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 0066d524; end: 0066d59b;  */

void FUN_0066d524(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  char *unaff_x22;
  long unaff_x23;
  long lVar3;
  long lVar4;
  
  func_0x00676210();
  func_0x00674364();
  FUN_0066d34c();
  lVar3 = *(long *)(unaff_x19 + 8);
  pcVar1 = unaff_x22;
  for (lVar4 = unaff_x23; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (-1 < *pcVar1) {
      puVar2 = unaff_x20;
      FUN_0066d480();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      *(undefined8 *)(lVar3 + (long)puVar2 * 8) = *unaff_x20;
    }
    pcVar1 = pcVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
  return;
}



/* Entry: 0066d59c; end: 0066d5a3;  */

void FUN_0066d59c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [24];
  
  FUN_00667014(auStack_28,param_2);
  func_0x006670f8(auStack_28);
  return;
}



/* Entry: 0066d5a4; end: 0066d61b;  */

void FUN_0066d5a4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_0066d61c();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x0066c3a4(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d61c; end: 0066d687;  */

void FUN_0066d61c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x0066c3a4(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d688; end: 0066d68b;  */

ulong FUN_0066d688(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x10;
  
  puVar4 = *(undefined8 **)(*param_2 + 8);
  uVar1 = puVar4[1];
  puVar2 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar2 = puVar4;
  }
  ppuVar3 = &PTR_LOOP_00a01490;
  FUN_00490188(&PTR_LOOP_00a01490,puVar2);
  func_0x00490bd8((long)ppuVar3 + uVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 0066d68c; end: 0066d703;  */

void FUN_0066d68c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  uint uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_0066d704();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_0066d774(uVar1,*(undefined8 *)(*unaff_x22 + 0x20));
      func_0x0067444c();
      func_0x00673efc(uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d704; end: 0066d773;  */

void FUN_0066d704(void)

{
  uint uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(uint *)(*unaff_x22 + 4);
      FUN_0066d774(uVar1,*(undefined8 *)(*unaff_x22 + 0x20));
      func_0x0067444c();
      func_0x00673efc(uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 0066d774; end: 0066d793;  */

void FUN_0066d774(void)

{
  func_0x00675ae4();
  return;
}



/* Entry: 0066d794; end: 0066d7a3;  */

void FUN_0066d794(void)

{
  func_0x00675ae4();
  return;
}



/* Entry: 0066d7a4; end: 0066d7d7;  */

void FUN_0066d7a4(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  FUN_00665c34();
  FUN_0066d7d8();
  *(ulong *)uVar1 = uVar1;
  *(undefined2 *)(uVar1 + 8) = 0;
  *(undefined1 *)(uVar1 + 10) = 0;
  *(char *)(uVar1 + 0xb) = (char)param_1;
  return;
}



/* Entry: 0066d7d8; end: 0066d7fb;  */

void FUN_0066d7d8(long param_1)

{
  undefined1 uStack_11;
  
  FUN_00537d6c(&uStack_11,param_1 + 7U >> 3);
  return;
}



/* Entry: 0066d7fc; end: 0066d9f3;  */

void FUN_0066d7fc(ulong *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int extraout_w8;
  int extraout_w8_00;
  int iVar7;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  func_0x00674c64();
  plVar11 = (long *)*param_2;
  lVar9 = *plVar11;
  uVar5 = (long *)*param_1 <= plVar11;
  uVar6 = plVar11 == (long *)*param_1;
  if ((bool)uVar6) {
    lVar10 = 0;
    FUN_0066d9f4(0,lVar9);
    FUN_0066cc58();
    *unaff_x20 = lVar10;
    plVar11 = (long *)*unaff_x19;
LAB_0066d954:
    bVar3 = (char)plVar11[1] + 1;
    if (*(char *)((long)plVar11 + 0xb) == '\0') {
      plVar8 = (long *)(ulong)bVar3;
      FUN_0066d9f4(plVar8,lVar10);
      func_0x00675fc0();
    }
    else {
      plVar8 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
      FUN_00665c34();
      FUN_0066d7d8();
      *plVar8 = lVar10;
      *(byte *)(plVar8 + 1) = bVar3;
      *(undefined2 *)((long)plVar8 + 9) = 0;
      *(undefined1 *)((long)plVar8 + 0xb) = 10;
      func_0x00675fc0();
      if (unaff_x20[1] == *unaff_x19) {
        unaff_x20[1] = (long)plVar8;
      }
    }
  }
  else {
    bVar3 = *(byte *)(plVar11 + 1);
    if (bVar3 != 0) {
      plVar8 = (long *)(ulong)(bVar3 - 1);
      func_0x00676728();
      func_0x006769d0();
      if (!(bool)uVar5 || (bool)uVar6) {
        func_0x00676964();
        uVar12 = extraout_w9 >> ((extraout_w10 & 0xfe) < 10);
        if (uVar12 < 2) {
          uVar12 = 1;
        }
        if (uVar12 <= (extraout_w10 & 0xff) || (uVar12 + extraout_w8 & 0xff) < 10) {
          FUN_0066c97c(plVar8,uVar12,plVar11);
          iVar7 = *(byte *)(unaff_x19 + 1) - uVar12;
          *(int *)(unaff_x19 + 1) = iVar7;
          if (-1 < iVar7) {
            return;
          }
          iVar7 = iVar7 + (uint)*(byte *)((long)plVar8 + 10) + 1;
          goto LAB_0066d9d4;
        }
      }
    }
    bVar4 = *(byte *)(lVar9 + 10);
    uVar12 = (uint)bVar3;
    uVar5 = bVar4 <= uVar12;
    uVar6 = uVar12 == bVar4;
    if ((bool)uVar5) {
LAB_0066d908:
      lVar10 = lVar9;
      if (bVar4 == 10) {
        FUN_0066d7fc();
        plVar11 = (long *)*unaff_x19;
        lVar10 = *plVar11;
      }
      goto LAB_0066d954;
    }
    plVar8 = (long *)(ulong)(uVar12 + 1);
    func_0x00676728();
    func_0x006769d0();
    if ((bool)uVar5 && !(bool)uVar6) goto LAB_0066d908;
    func_0x00676964();
    uVar12 = extraout_w9_00 >> (0 < (int)extraout_w10_00);
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    uVar2 = uVar12 + extraout_w8_00 & 0xff;
    bVar1 = (int)(extraout_w10_00 & 0xff) <= (int)(*(byte *)((long)plVar11 + 10) - uVar12);
    if ((!bVar1 && 8 < uVar2) && (bVar1 || uVar2 != 9)) goto LAB_0066d908;
    func_0x0066cae0(plVar11,uVar12,plVar8);
  }
  if ((int)unaff_x19[1] <= (int)(uint)*(byte *)(*unaff_x19 + 10)) {
    return;
  }
  iVar7 = (int)unaff_x19[1] + ~(uint)*(byte *)(*unaff_x19 + 10);
LAB_0066d9d4:
  *(int *)(unaff_x19 + 1) = iVar7;
  *unaff_x19 = (long)plVar8;
  return;
}


