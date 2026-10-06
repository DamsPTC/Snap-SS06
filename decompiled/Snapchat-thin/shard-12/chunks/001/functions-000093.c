/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d63548; end: 108d63587;  */

ulong FUN_108d63548(ulong param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_1;
  FUN_108d62be4();
  if ((int)uVar6 != 0) {
    return 0;
  }
  uVar6 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  if (param_1 == 0) {
    if (uVar6 - 0x7fffff00 < 0xffffffff80000101) {
      uVar7 = 0;
    }
    else {
      if (iRam0000000113297910 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000113297938)(uVar6);
        return uVar6;
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      uVar7 = uVar6;
      (*pcRam0000000113297958)();
      if ((long)uRam0000000113829ac8 < (long)uVar6) {
        uRam0000000113829ac8 = uVar6;
      }
      uRam0000000113829a78 = uVar6;
      if (lRam0000000113829b00 != 0) {
        if (lRam0000000113829a50 < lRam0000000113829af8 - (int)uVar7) {
          uRam0000000113829b24 = 0;
        }
        else {
          uRam0000000113829b24 = 1;
          FUN_108d718ac(uVar7);
        }
      }
      (*pcRam0000000113297938)();
      if (uVar7 != 0) {
        uVar6 = uVar7;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + (int)uVar6;
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
        lVar2 = lRam0000000113829a98 + 1;
        bVar1 = lRam0000000113829ae8 <= lRam0000000113829a98;
        lRam0000000113829a98 = lVar2;
        if (bVar1) {
          lRam0000000113829ae8 = lVar2;
        }
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    return uVar7;
  }
  if (uVar6 == 0) {
    func_0x000108d5e198(param_1);
  }
  else if (uVar6 < 0x7fffff00) {
    uVar7 = param_1;
    (*pcRam0000000113297950)();
    uVar4 = uVar6;
    (*pcRam0000000113297958)();
    iVar3 = (int)uVar4 - (int)uVar7;
    if (iVar3 == 0) {
      return param_1;
    }
    if (iRam0000000113297910 != 0) {
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      if ((long)uRam0000000113829ac8 < (long)uVar6) {
        uRam0000000113829ac8 = uVar6;
      }
      uRam0000000113829a78 = uVar6;
      if (lRam0000000113829af8 - iVar3 <= lRam0000000113829a50) {
        FUN_108d718ac(iVar3);
      }
      uVar5 = param_1;
      (*pcRam0000000113297948)(param_1,uVar4);
      if ((uVar5 == 0) && (lRam0000000113829b00 != 0)) {
        FUN_108d718ac(uVar6);
        (*pcRam0000000113297948)(param_1,uVar4);
        uVar5 = param_1;
      }
      if (uVar5 != 0) {
        uVar6 = uVar5;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + ((int)uVar6 - (int)uVar7);
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
      }
      if (lRam0000000113829af0 == 0) {
        return uVar5;
      }
      (*pcRam00000001132979a8)();
      return uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x000108d63764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297948)(param_1,uVar4);
    return param_1;
  }
  return 0;
}



/* Entry: 108d63588; end: 108d63767;  */

ulong FUN_108d63588(ulong param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    if (param_2 - 0x7fffff00 < 0xffffffff80000101) {
      uVar6 = 0;
    }
    else {
      if (iRam0000000113297910 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000113297938)(param_2);
        return param_2;
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      uVar6 = param_2;
      (*pcRam0000000113297958)();
      if ((long)uRam0000000113829ac8 < (long)param_2) {
        uRam0000000113829ac8 = param_2;
      }
      uRam0000000113829a78 = param_2;
      if (lRam0000000113829b00 != 0) {
        if (lRam0000000113829a50 < lRam0000000113829af8 - (int)uVar6) {
          uRam0000000113829b24 = 0;
        }
        else {
          uRam0000000113829b24 = 1;
          FUN_108d718ac(uVar6);
        }
      }
      (*pcRam0000000113297938)();
      if (uVar6 != 0) {
        uVar4 = uVar6;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + (int)uVar4;
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
        lVar2 = lRam0000000113829a98 + 1;
        bVar1 = lRam0000000113829ae8 <= lRam0000000113829a98;
        lRam0000000113829a98 = lVar2;
        if (bVar1) {
          lRam0000000113829ae8 = lVar2;
        }
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    return uVar6;
  }
  if (param_2 == 0) {
    func_0x000108d5e198(param_1);
  }
  else if (param_2 < 0x7fffff00) {
    uVar6 = param_1;
    (*pcRam0000000113297950)();
    uVar4 = param_2;
    (*pcRam0000000113297958)();
    iVar3 = (int)uVar4 - (int)uVar6;
    if (iVar3 == 0) {
      return param_1;
    }
    if (iRam0000000113297910 != 0) {
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      if ((long)uRam0000000113829ac8 < (long)param_2) {
        uRam0000000113829ac8 = param_2;
      }
      uRam0000000113829a78 = param_2;
      if (lRam0000000113829af8 - iVar3 <= lRam0000000113829a50) {
        FUN_108d718ac(iVar3);
      }
      uVar5 = param_1;
      (*pcRam0000000113297948)(param_1,uVar4);
      if ((uVar5 == 0) && (lRam0000000113829b00 != 0)) {
        FUN_108d718ac(param_2);
        (*pcRam0000000113297948)(param_1,uVar4);
        uVar5 = param_1;
      }
      if (uVar5 != 0) {
        uVar4 = uVar5;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + ((int)uVar4 - (int)uVar6);
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
      }
      if (lRam0000000113829af0 == 0) {
        return uVar5;
      }
      (*pcRam00000001132979a8)();
      return uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x000108d63764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297948)(param_1,uVar4);
    return param_1;
  }
  return 0;
}



/* Entry: 108d63768; end: 108d6384f;  */

ulong FUN_108d63768(ulong param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1;
  FUN_108d62be4();
  if ((int)uVar6 != 0) {
    return 0;
  }
  if (param_1 == 0) {
    if (param_2 - 0x7fffff00 < 0xffffffff80000101) {
      uVar6 = 0;
    }
    else {
      if (iRam0000000113297910 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000113297938)(param_2);
        return param_2;
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      uVar6 = param_2;
      (*pcRam0000000113297958)();
      if ((long)uRam0000000113829ac8 < (long)param_2) {
        uRam0000000113829ac8 = param_2;
      }
      uRam0000000113829a78 = param_2;
      if (lRam0000000113829b00 != 0) {
        if (lRam0000000113829a50 < lRam0000000113829af8 - (int)uVar6) {
          uRam0000000113829b24 = 0;
        }
        else {
          uRam0000000113829b24 = 1;
          FUN_108d718ac(uVar6);
        }
      }
      (*pcRam0000000113297938)();
      if (uVar6 != 0) {
        uVar4 = uVar6;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + (int)uVar4;
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
        lVar2 = lRam0000000113829a98 + 1;
        bVar1 = lRam0000000113829ae8 <= lRam0000000113829a98;
        lRam0000000113829a98 = lVar2;
        if (bVar1) {
          lRam0000000113829ae8 = lVar2;
        }
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    return uVar6;
  }
  if (param_2 == 0) {
    func_0x000108d5e198(param_1);
  }
  else if (param_2 < 0x7fffff00) {
    uVar6 = param_1;
    (*pcRam0000000113297950)();
    uVar4 = param_2;
    (*pcRam0000000113297958)();
    iVar3 = (int)uVar4 - (int)uVar6;
    if (iVar3 == 0) {
      return param_1;
    }
    if (iRam0000000113297910 != 0) {
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      if ((long)uRam0000000113829ac8 < (long)param_2) {
        uRam0000000113829ac8 = param_2;
      }
      uRam0000000113829a78 = param_2;
      if (lRam0000000113829af8 - iVar3 <= lRam0000000113829a50) {
        FUN_108d718ac(iVar3);
      }
      uVar5 = param_1;
      (*pcRam0000000113297948)(param_1,uVar4);
      if ((uVar5 == 0) && (lRam0000000113829b00 != 0)) {
        FUN_108d718ac(param_2);
        (*pcRam0000000113297948)(param_1,uVar4);
        uVar5 = param_1;
      }
      if (uVar5 != 0) {
        uVar4 = uVar5;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + ((int)uVar4 - (int)uVar6);
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
      }
      if (lRam0000000113829af0 == 0) {
        return uVar5;
      }
      (*pcRam00000001132979a8)();
      return uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x000108d63764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000113297948)(param_1,uVar4);
    return param_1;
  }
  return 0;
}



/* Entry: 108d63850; end: 108d64afb;  */

/* WARNING: Removing unreachable block (ram,0x000108d641e0) */

byte * FUN_108d63850(double param_1,byte *param_2,uint param_3,byte *param_4,double *param_5)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  double dVar13;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  double dVar32;
  uint uVar33;
  byte *pbVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  uint uVar40;
  byte *pbVar41;
  double dVar42;
  int *piStack_130;
  uint uStack_11c;
  double *pdStack_110;
  byte abStack_f6 [70];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_110 = param_5;
  if (param_3 == 0) {
    piStack_130 = (int *)0x0;
    uStack_11c = 0;
    bVar8 = true;
  }
  else {
    uStack_11c = param_3 & 2;
    if (param_3 == 1) {
      piStack_130 = (int *)0x0;
    }
    else {
      pdStack_110 = param_5 + 1;
      piStack_130 = (int *)*param_5;
    }
    bVar8 = (param_3 & 1) == 0;
  }
  pbVar34 = (byte *)0x0;
  pbVar11 = param_2;
code_r0x000108d63918:
  pbVar22 = param_4;
  if (*param_4 != 0x25) {
    pbVar41 = pbVar11;
    if (*param_4 == 0) goto LAB_108d64a9c;
    lVar38 = 0;
    do {
      lVar36 = lVar38 + 1;
      lVar38 = lVar38 + 1;
    } while (param_4[lVar36] != 0x25 && param_4[lVar36] != 0);
    pbVar11 = param_2;
    FUN_108d71998(param_2,param_4,lVar38);
    pbVar22 = param_4 + lVar38;
    pbVar41 = pbVar11;
    pbVar34 = param_4;
    if (*pbVar22 == 0) goto LAB_108d64a9c;
  }
  bVar23 = pbVar22[1];
  if (bVar23 != 0) {
    bVar5 = false;
    uVar40 = 0;
    uVar29 = 0;
    bVar7 = false;
    bVar9 = false;
    bVar4 = false;
    pbVar22 = pbVar22 + 2;
LAB_108d6398c:
    pbVar41 = pbVar22;
    if (bVar23 < 0x2a) {
      if (bVar23 == 0x20) {
        bVar7 = true;
      }
      else if (bVar23 == 0x21) {
        uVar40 = 1;
      }
      else {
        if (bVar23 != 0x23) goto LAB_108d63b1c;
        uVar29 = 1;
      }
LAB_108d639fc:
      bVar23 = *pbVar41;
      pbVar22 = pbVar41 + 1;
      if (bVar23 == 0) goto code_r0x000108d63a04;
      goto LAB_108d6398c;
    }
    if (0x2c < bVar23) {
      if (bVar23 == 0x2d) {
        bVar4 = true;
      }
      else {
        if (bVar23 != 0x30) goto LAB_108d63b1c;
        bVar5 = true;
      }
      goto LAB_108d639fc;
    }
    if (bVar23 == 0x2b) {
      bVar9 = true;
      goto LAB_108d639fc;
    }
    if (bVar23 == 0x2a) {
      if (uStack_11c == 0) {
        pbVar11 = (byte *)(ulong)*(uint *)pdStack_110;
        pdStack_110 = pdStack_110 + 1;
LAB_108d63c04:
        uVar17 = (uint)pbVar11;
        uVar10 = 0;
        if (uVar17 != 0x80000000) {
          uVar10 = -uVar17;
        }
        if ((int)uVar17 < 0) {
          bVar4 = true;
          uVar17 = uVar10;
        }
        uVar14 = (ulong)uVar17;
      }
      else {
        iVar18 = piStack_130[1];
        if (iVar18 < *piStack_130) {
          piStack_130[1] = iVar18 + 1;
          pbVar11 = *(byte **)(*(long *)(piStack_130 + 2) + (long)iVar18 * 8);
          func_0x000108d6797c();
          goto LAB_108d63c04;
        }
        uVar14 = 0;
      }
      uVar17 = (uint)(char)*pbVar41;
    }
    else {
LAB_108d63b1c:
      uVar17 = (uint)(char)bVar23;
      pbVar41 = pbVar41 + -1;
      if (uVar17 - 0x30 < 10) {
        uVar10 = 0;
        do {
          uVar10 = (uVar17 + uVar10 * 10) - 0x30;
          pbVar41 = pbVar41 + 1;
          uVar17 = (uint)(char)*pbVar41;
        } while (uVar17 - 0x30 < 10);
        uVar14 = (ulong)(uVar10 & 0x7fffffff);
      }
      else {
        uVar14 = 0;
      }
    }
    if (uVar17 == 0x2e) {
      param_4 = pbVar41 + 1;
      uVar17 = (uint)(char)*param_4;
      if (uVar17 == 0x2a) {
        if (uStack_11c == 0) {
          pbVar11 = (byte *)(ulong)*(uint *)pdStack_110;
          pdStack_110 = pdStack_110 + 1;
        }
        else {
          iVar18 = piStack_130[1];
          if (*piStack_130 <= iVar18) {
            uVar35 = 0;
            uVar17 = (uint)(char)pbVar41[2];
            param_4 = pbVar41 + 2;
            goto LAB_108d64380;
          }
          piStack_130[1] = iVar18 + 1;
          pbVar11 = *(byte **)(*(long *)(piStack_130 + 2) + (long)iVar18 * 8);
          func_0x000108d6797c();
        }
        uVar17 = (uint)(char)pbVar41[2];
        uVar10 = (uint)pbVar11;
        uVar25 = 0xffffffff;
        if (uVar10 != 0x80000000) {
          uVar25 = -uVar10;
        }
        if (((ulong)pbVar11 & 0x80000000) != 0) {
          uVar10 = uVar25;
        }
        uVar35 = (ulong)uVar10;
        param_4 = pbVar41 + 2;
      }
      else if (uVar17 - 0x30 < 10) {
        uVar10 = 0;
        do {
          uVar10 = (uVar17 + uVar10 * 10) - 0x30;
          param_4 = param_4 + 1;
          uVar17 = (uint)(char)*param_4;
        } while (uVar17 - 0x30 < 10);
        uVar35 = (ulong)(uVar10 & 0x7fffffff);
      }
      else {
        uVar35 = 0;
      }
    }
    else {
      uVar35 = 0xffffffff;
      param_4 = pbVar41;
    }
LAB_108d64380:
    if (uVar17 == 0x6c) {
      uVar17 = (uint)(char)param_4[1];
      if (uVar17 == 0x6c) {
        uVar17 = (uint)(char)param_4[2];
        bVar2 = true;
        bVar3 = true;
        param_4 = param_4 + 2;
      }
      else {
        bVar2 = false;
        bVar3 = true;
        param_4 = param_4 + 1;
      }
    }
    else {
      bVar2 = false;
      bVar3 = false;
    }
    goto LAB_108d63a18;
  }
  iVar26 = *(int *)(param_2 + 0x18);
  iVar18 = iVar26 + 1;
  if (iVar18 < *(int *)(param_2 + 0x1c)) {
    *(int *)(param_2 + 0x18) = iVar18;
    *(undefined1 *)(*(long *)(param_2 + 0x10) + (long)iVar26) = 0x25;
    pbVar41 = param_2;
  }
  else {
    FUN_108d71a6c(param_2,"%",1);
    pbVar41 = param_2;
  }
LAB_108d64a9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return pbVar41;
  }
  ___stack_chk_fail();
  if (*(long *)(pbVar41 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(pbVar41 + 0x10) + (long)*(int *)(pbVar41 + 0x18)) = 0;
    pbVar34 = *(byte **)(pbVar41 + 0x10);
    if ((0 < *(int *)(pbVar41 + 0x20)) && (pbVar34 == *(byte **)(pbVar41 + 8))) {
      lVar38 = *(long *)pbVar41;
      FUN_108d6a6fc(lVar38,(long)*(int *)(pbVar41 + 0x18) + 1);
      *(long *)(pbVar41 + 0x10) = lVar38;
      if (lVar38 == 0) {
        pbVar41[0x24] = 1;
        pbVar41[0x1c] = 0;
        pbVar41[0x1d] = 0;
        pbVar41[0x1e] = 0;
        pbVar41[0x1f] = 0;
        pbVar34 = (byte *)0x0;
      }
      else {
        _memcpy();
        pbVar34 = *(byte **)(pbVar41 + 0x10);
      }
    }
    return pbVar34;
  }
  return (byte *)0x0;
code_r0x000108d63a04:
  uVar14 = 0;
  bVar2 = false;
  bVar3 = false;
  uVar35 = 0xffffffff;
  uVar17 = 0;
  param_4 = pbVar41;
LAB_108d63a18:
  pbVar22 = &UNK_10dfa0941;
  lVar38 = 0x17;
  while (pbVar41 = pbVar11, uVar17 != pbVar22[-2]) {
    pbVar22 = pbVar22 + 6;
    lVar38 = lVar38 + -1;
    if (lVar38 == 0) goto LAB_108d64a9c;
  }
  if ((bVar8) && ((*pbVar22 >> 1 & 1) != 0)) goto LAB_108d64a9c;
  bVar23 = pbVar22[1];
  iVar18 = (int)uVar35;
  uVar17 = (uint)uVar14;
  switch(bVar23) {
  case 1:
  case 0x10:
    goto code_r0x000108d63de4;
  case 2:
  case 3:
  case 4:
    if (uStack_11c == 0) {
      param_1 = *pdStack_110;
      pdStack_110 = pdStack_110 + 1;
code_r0x000108d63cec:
      iVar26 = 6;
      if (-1 < iVar18) {
        iVar26 = iVar18;
      }
      if (0.0 <= param_1) goto code_r0x000108d64030;
      bVar2 = false;
      param_1 = -param_1;
      pbVar34 = &UNK_10f517646;
      uVar35 = 1;
      bVar15 = 0x2d;
    }
    else {
      iVar26 = piStack_130[1];
      if (iVar26 < *piStack_130) {
        piStack_130[1] = iVar26 + 1;
        func_0x000108d67900(*(undefined8 *)(*(long *)(piStack_130 + 2) + (long)iVar26 * 8));
        goto code_r0x000108d63cec;
      }
      iVar26 = 6;
      if (-1 < iVar18) {
        iVar26 = iVar18;
      }
      param_1 = 0.0;
code_r0x000108d64030:
      bVar7 = !bVar7;
      bVar16 = 0;
      if (!bVar7) {
        bVar16 = 0x20;
      }
      pbVar34 = &UNK_10f51764b;
      if (!bVar9) {
        pbVar34 = &UNK_10f517650;
      }
      bVar2 = !bVar9 && bVar7;
      uVar35 = 1;
      if (!bVar9) {
        uVar35 = (ulong)!bVar7;
      }
      bVar15 = 0x2b;
      if (!bVar9) {
        bVar15 = bVar16;
      }
    }
    uVar10 = iVar26 - (uint)((bVar23 == 4 && iVar26 != 0) && (bVar23 != 4 || -1 < iVar26));
    if ((uVar10 & 0xfff) == 0) {
      dVar13 = 0.5;
    }
    else {
      uVar25 = (uVar10 & 0xfff) + 1;
      dVar13 = 0.5;
      do {
        dVar13 = dVar13 * 0.1;
        uVar25 = uVar25 - 1;
      } while (1 < uVar25);
    }
    dVar32 = param_1 + dVar13;
    if (bVar23 != 2) {
      dVar32 = param_1;
    }
    if (dVar32 <= 0.0) {
      uVar25 = 0;
      dVar42 = dVar32;
    }
    else {
      uVar25 = 0xffffff9c;
      dVar42 = 1.0;
      uVar24 = 0xfffffff8;
      uVar31 = 0xffffffff;
      uVar20 = 0xffffffc0;
      do {
        uVar19 = uVar20;
        uVar33 = uVar31;
        uVar30 = uVar24;
        dVar6 = dVar42;
        if (dVar32 < dVar42 * 1e+100) break;
        uVar25 = uVar25 + 100;
        dVar42 = dVar42 * 1e+100;
        uVar24 = uVar30 + 100;
        uVar31 = uVar33 + 100;
        uVar20 = uVar19 + 100;
      } while (uVar25 < 0x15f);
      do {
        uVar31 = uVar33;
        uVar24 = uVar30;
        dVar42 = dVar6;
        if (dVar32 < dVar42 * 1e+64) break;
        uVar19 = uVar19 + 0x40;
        dVar6 = dVar42 * 1e+64;
        uVar30 = uVar24 + 0x40;
        uVar33 = uVar31 + 0x40;
      } while (uVar19 < 0x15f);
      do {
        uVar25 = uVar31;
        param_1 = dVar42;
        if (dVar32 < dVar42 * 100000000.0) break;
        uVar24 = uVar24 + 8;
        dVar42 = dVar42 * 100000000.0;
        uVar31 = uVar25 + 8;
      } while (uVar24 < 0x15f);
      do {
        dVar42 = param_1;
        uVar25 = uVar25 + 1;
        param_1 = dVar42 * 10.0;
        if (dVar32 < param_1) break;
      } while (uVar25 < 0x15f);
      for (dVar42 = dVar32 / dVar42; dVar42 < 1e-08; dVar42 = dVar42 * 100000000.0) {
        uVar25 = uVar25 - 8;
      }
      for (; dVar42 < 1.0; dVar42 = dVar42 * 10.0) {
        uVar25 = uVar25 - 1;
      }
      dVar32 = param_1;
      if (0x15e < (int)uVar25) {
        pbVar11 = pbVar34;
        _strlen();
        uVar29 = (uint)pbVar11;
        pbVar41 = (byte *)0x0;
        goto code_r0x000108d6442c;
      }
    }
    if (bVar23 == 2) {
code_r0x000108d64240:
      bVar7 = bVar23 == 3;
      param_1 = dVar32;
      uVar31 = uVar40;
      uVar24 = 0;
      if (!bVar7) {
        uVar24 = uVar25;
      }
    }
    else {
      dVar32 = dVar13 + dVar42;
      dVar42 = dVar32;
      if (10.0 <= dVar32) {
        uVar25 = uVar25 + 1;
        dVar42 = dVar32 * 0.1;
      }
      if (bVar23 != 4) goto code_r0x000108d64240;
      bVar7 = (int)uVar25 < -4 || (int)uVar10 < (int)uVar25;
      uVar24 = 0;
      if ((int)uVar25 >= -4 && (int)uVar25 <= (int)uVar10) {
        uVar24 = uVar25;
      }
      uVar10 = uVar10 - uVar24;
      param_1 = dVar32;
      uVar31 = uVar29 ^ 1;
    }
    lVar38 = (uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU)) + uVar14 + (long)(int)uVar10;
    if (lVar38 < 0x38) {
      pbVar41 = (byte *)0x0;
      pbVar34 = abStack_f6;
    }
    else {
      pbVar41 = (byte *)(lVar38 + 0xf);
      FUN_108d60848();
      pbVar34 = pbVar41;
      if (pbVar41 == (byte *)0x0) goto code_r0x000108d64ae4;
    }
    pbVar11 = pbVar34;
    if (!bVar2) {
      pbVar11 = pbVar34 + 1;
      *pbVar34 = bVar15;
    }
    iVar18 = uVar40 * 10 + 0x10;
    if ((int)uVar24 < 0) {
      pbVar39 = pbVar11 + 1;
      *pbVar11 = 0x30;
      uVar24 = uVar24 + 1;
    }
    else {
      iVar26 = uVar24 + 1;
      do {
        if (iVar18 < 1) {
          bVar23 = 0x30;
        }
        else {
          iVar28 = (int)dVar42;
          param_1 = dVar42 - (double)iVar28;
          dVar42 = param_1 * 10.0;
          bVar23 = (char)iVar28 + 0x30;
          iVar18 = iVar18 + -1;
        }
        pbVar39 = pbVar11 + 1;
        *pbVar11 = bVar23;
        iVar26 = iVar26 + -1;
        pbVar11 = pbVar39;
      } while (0 < iVar26);
      uVar24 = 0;
    }
    pbVar11 = pbVar39;
    if ((uVar40 != 0 || uVar29 != 0) || 0 < (int)uVar10) {
      pbVar11 = pbVar39 + 1;
      *pbVar39 = 0x2e;
    }
    uVar20 = uVar10;
    if ((int)uVar24 < 0) {
      _memset(pbVar11,0x30,(ulong)~uVar24 + 1);
      pbVar11 = pbVar11 + (ulong)~uVar24 + 1;
      uVar20 = uVar24 + uVar10;
    }
    if (0 < (int)uVar20) {
      uVar24 = uVar10 + (uVar24 & (int)uVar24 >> 0x1f) + 1;
      pbVar39 = pbVar11;
      do {
        if (iVar18 < 1) {
          bVar23 = 0x30;
        }
        else {
          iVar26 = (int)dVar42;
          param_1 = dVar42 - (double)iVar26;
          dVar42 = param_1 * 10.0;
          bVar23 = (char)iVar26 + 0x30;
          iVar18 = iVar18 + -1;
        }
        pbVar11 = pbVar39 + 1;
        *pbVar39 = bVar23;
        uVar24 = uVar24 - 1;
        pbVar39 = pbVar11;
      } while (1 < uVar24);
    }
    if ((uVar31 != 0) && ((uVar40 != 0 || uVar29 != 0) || 0 < (int)uVar10)) {
      while( true ) {
        pbVar39 = pbVar11 + -1;
        if (*pbVar39 != 0x30) break;
        *pbVar39 = 0;
        pbVar11 = pbVar39;
      }
      if (*pbVar39 == 0x2e) {
        if (uVar40 == 0) {
          *pbVar39 = 0;
          pbVar11 = pbVar39;
        }
        else {
          *pbVar11 = 0x30;
          pbVar11 = pbVar11 + 1;
        }
      }
    }
    if (bVar7) {
      *pbVar11 = (&UNK_10f517621)[pbVar22[2]];
      bVar23 = 0x2d;
      if (-1 < (int)uVar25) {
        bVar23 = 0x2b;
      }
      uVar29 = -uVar25;
      if (-1 < (int)uVar25) {
        uVar29 = uVar25;
      }
      pbVar11[1] = bVar23;
      if (uVar29 < 100) {
        pbVar22 = pbVar11 + 2;
      }
      else {
        pbVar22 = pbVar11 + 3;
        pbVar11[2] = (char)(uVar29 / 100) + 0x30;
        uVar29 = uVar29 % 100;
      }
      bVar23 = (byte)((uVar29 & 0xff) / 10);
      *pbVar22 = bVar23 | 0x30;
      pbVar11 = pbVar22 + 2;
      pbVar22[1] = (char)uVar29 + bVar23 * -10 | 0x30;
    }
    *pbVar11 = 0;
    uVar29 = (int)pbVar11 - (int)pbVar34;
    uVar37 = (ulong)uVar29;
    if (((bVar5) && (!bVar4)) && (uVar17 - uVar29 != 0 && (int)uVar29 <= (int)uVar17)) {
      if (-1 < (int)uVar29) {
        lVar38 = (long)(int)uVar17;
        do {
          pbVar34[lVar38] = pbVar34[uVar37];
          uVar37 = (ulong)((int)uVar37 - 1);
          bVar7 = (int)(uVar17 - uVar29) < lVar38;
          lVar38 = lVar38 + -1;
        } while (bVar7);
      }
      uVar37 = uVar14;
      if (uVar17 != uVar29) {
        _memset(pbVar34 + uVar35,0x30);
      }
    }
    break;
  case 5:
    if (uStack_11c == 0) {
      pbVar41 = (byte *)0x0;
      uVar14 = 0;
      *(undefined4 *)*pdStack_110 = *(undefined4 *)(param_2 + 0x18);
      uVar37 = 0;
      pdStack_110 = pdStack_110 + 1;
      break;
    }
    goto code_r0x000108d63ed8;
  case 6:
  case 7:
    if (uStack_11c == 0) {
      pbVar11 = (byte *)*pdStack_110;
      pdStack_110 = pdStack_110 + 1;
    }
    else {
      iVar26 = piStack_130[1];
      if (iVar26 < *piStack_130) {
        piStack_130[1] = iVar26 + 1;
        pbVar11 = *(byte **)(*(long *)(piStack_130 + 2) + (long)iVar26 * 8);
        func_0x000108d67a18(pbVar11,1);
      }
      else {
        pbVar11 = (byte *)0x0;
      }
    }
    pbVar41 = (byte *)0x0;
    if (bVar23 == 7 && uStack_11c == 0) {
      pbVar41 = pbVar11;
    }
    pbVar34 = (byte *)"";
    if (pbVar11 != (byte *)0x0) {
      pbVar34 = pbVar11;
    }
    if (-1 < iVar18) {
      if (iVar18 != 0) {
        uVar27 = 0;
        do {
          uVar37 = uVar27;
          if (pbVar34[uVar27] == 0) break;
          uVar27 = uVar27 + 1;
          uVar37 = uVar35;
        } while (uVar35 != uVar27);
        break;
      }
code_r0x000108d64410:
      uVar37 = 0;
      break;
    }
    pbVar11 = pbVar34;
    _strlen();
    uVar29 = (uint)pbVar11;
code_r0x000108d6442c:
    uVar37 = (ulong)(uVar29 & 0x3fffffff);
    break;
  case 8:
    pbVar41 = (byte *)0x0;
    abStack_f6[0] = 0x25;
    pbVar34 = abStack_f6;
    uVar37 = 1;
    break;
  case 9:
    if (uStack_11c == 0) {
      bVar23 = (byte)*(uint *)pdStack_110;
      pdStack_110 = pdStack_110 + 1;
    }
    else {
      iVar26 = piStack_130[1];
      if (iVar26 < *piStack_130) {
        piStack_130[1] = iVar26 + 1;
        pbVar34 = *(byte **)(*(long *)(piStack_130 + 2) + (long)iVar26 * 8);
        func_0x000108d67a18(pbVar34,1);
        if (pbVar34 == (byte *)0x0) {
          bVar23 = 0;
        }
        else {
          bVar23 = *pbVar34;
        }
      }
      else {
        bVar23 = 0;
      }
    }
    if (1 < iVar18) {
      uVar17 = uVar17 - (iVar18 + -1);
      uVar14 = (ulong)uVar17;
      if ((1 < (int)uVar17) && (!bVar4)) {
        FUN_108d719c4(param_2,uVar17 - 1,0x20);
        uVar14 = 0;
      }
      FUN_108d719c4(param_2,iVar18 + -1,(int)(char)bVar23);
    }
    pbVar41 = (byte *)0x0;
    pbVar34 = abStack_f6;
    uVar37 = 1;
    abStack_f6[0] = bVar23;
    break;
  case 10:
  case 0xb:
  case 0xf:
    bVar15 = 0x22;
    if (bVar23 != 0xf) {
      bVar15 = 0x27;
    }
    if (uStack_11c == 0) {
      pbVar34 = (byte *)*pdStack_110;
      pdStack_110 = pdStack_110 + 1;
    }
    else {
      iVar26 = piStack_130[1];
      if (iVar26 < *piStack_130) {
        piStack_130[1] = iVar26 + 1;
        pbVar34 = *(byte **)(*(long *)(piStack_130 + 2) + (long)iVar26 * 8);
        FUN_108d67a14(pbVar34,1);
      }
      else {
        pbVar34 = (byte *)0x0;
      }
    }
    pbVar11 = &UNK_10f517654;
    if (bVar23 != 0xb) {
      pbVar11 = &UNK_10f517659;
    }
    pbVar22 = pbVar34;
    if (pbVar34 == (byte *)0x0) {
      pbVar22 = pbVar11;
    }
    if (iVar18 == 0) {
      iVar26 = 0;
      uVar27 = uVar35;
    }
    else {
      uVar37 = 0;
      iVar26 = 0;
      do {
        uVar27 = uVar37;
        if (pbVar22[uVar37] == 0) break;
        if (pbVar22[uVar37] == bVar15) {
          iVar26 = iVar26 + 1;
        }
        uVar37 = uVar37 + 1;
        uVar27 = uVar35;
      } while (iVar18 != (int)uVar37);
    }
    bVar7 = bVar23 == 0xb;
    bVar9 = pbVar34 != (byte *)0x0;
    iVar28 = (int)uVar27;
    iVar18 = iVar28 + 3;
    if (!bVar7 || !bVar9) {
      iVar18 = iVar28 + 1;
    }
    pbVar41 = (byte *)(ulong)(uint)(iVar18 + iVar26);
    if ((uint)(iVar18 + iVar26) < 0x47) {
      pbVar11 = (byte *)0x0;
      pbVar41 = abStack_f6;
      if (bVar7 && bVar9) goto code_r0x000108d63fa0;
code_r0x000108d6400c:
      uVar37 = 0;
      pbVar34 = pbVar41;
      pbVar41 = pbVar11;
    }
    else {
      FUN_108d60848();
      if (pbVar41 == (byte *)0x0) goto code_r0x000108d64ae4;
      pbVar11 = pbVar41;
      if (!bVar7 || !bVar9) goto code_r0x000108d6400c;
code_r0x000108d63fa0:
      *pbVar41 = 0x27;
      uVar37 = 1;
      pbVar34 = pbVar41;
      pbVar41 = pbVar11;
    }
    if (iVar28 != 0) {
      uVar27 = uVar27 & 0xffffffff;
      do {
        bVar23 = *pbVar22;
        iVar18 = (int)uVar37;
        uVar37 = (long)iVar18 + 1;
        pbVar34[iVar18] = bVar23;
        if (bVar23 == bVar15) {
          pbVar34[uVar37] = bVar15;
          uVar37 = (ulong)(iVar18 + 2);
        }
        uVar27 = uVar27 - 1;
        pbVar22 = pbVar22 + 1;
      } while (uVar27 != 0);
    }
    if (bVar7 && bVar9) {
      pbVar34[(int)uVar37] = 0x27;
      uVar37 = (ulong)((int)uVar37 + 1);
    }
    pbVar34[(int)uVar37] = 0;
    break;
  case 0xc:
    pdVar1 = pdStack_110 + 1;
    puVar21 = (undefined8 *)*pdStack_110;
    pdStack_110 = pdVar1;
    if (puVar21 != (undefined8 *)0x0) {
      if (*(int *)(puVar21 + 1) != 0) {
        FUN_108d71998(param_2,*puVar21);
      }
      pbVar41 = (byte *)0x0;
      uVar14 = 0;
      goto code_r0x000108d64410;
    }
code_r0x000108d63ed8:
    pbVar41 = (byte *)0x0;
    uVar14 = 0;
    uVar37 = 0;
    break;
  case 0xd:
    lVar38 = (long)*pdStack_110 + (long)(int)*(uint *)(pdStack_110 + 1) * 0x70;
    lVar36 = *(long *)(lVar38 + 0x10);
    if (lVar36 != 0) {
      lVar12 = lVar36;
      _strlen(lVar36);
      FUN_108d71998(param_2,lVar36,(uint)lVar12 & 0x3fffffff);
      iVar26 = *(int *)(param_2 + 0x18);
      iVar18 = iVar26 + 1;
      if (iVar18 < *(int *)(param_2 + 0x1c)) {
        *(int *)(param_2 + 0x18) = iVar18;
        *(undefined1 *)(*(long *)(param_2 + 0x10) + (long)iVar26) = 0x2e;
      }
      else {
        FUN_108d71a6c(param_2,&DAT_10f62a9de,1);
      }
    }
    lVar38 = *(long *)(lVar38 + 0x18);
    if (lVar38 == 0) {
      uVar29 = 0;
    }
    else {
      lVar36 = lVar38;
      _strlen(lVar38);
      uVar29 = (uint)lVar36 & 0x3fffffff;
    }
    FUN_108d71998(param_2,lVar38,uVar29);
    pbVar41 = (byte *)0x0;
    uVar14 = 0;
    uVar37 = 0;
    pdStack_110 = pdStack_110 + 2;
    break;
  case 0xe:
    bVar2 = true;
    bVar3 = true;
code_r0x000108d63de4:
    if ((*pbVar22 & 1) == 0) {
      if (uStack_11c == 0) {
        if ((bVar2) || (bVar3)) {
          dVar13 = *pdStack_110;
          pdStack_110 = pdStack_110 + 1;
          bVar15 = 0;
        }
        else {
          dVar13 = (double)(ulong)*(uint *)pdStack_110;
          pdStack_110 = pdStack_110 + 1;
          bVar15 = 0;
        }
        goto code_r0x000108d645c4;
      }
      iVar26 = piStack_130[1];
      if (iVar26 < *piStack_130) {
        piStack_130[1] = iVar26 + 1;
        dVar13 = *(double *)(*(long *)(piStack_130 + 2) + (long)iVar26 * 8);
        func_0x000108d6797c();
        bVar15 = 0;
        goto code_r0x000108d645c4;
      }
      bVar15 = 0;
      dVar13 = 0.0;
      uVar40 = 0;
    }
    else {
      if (uStack_11c == 0) {
        if ((bVar2) || (bVar3)) {
          dVar13 = *pdStack_110;
          pdStack_110 = pdStack_110 + 1;
        }
        else {
          dVar13 = (double)(long)(int)*(uint *)pdStack_110;
          pdStack_110 = pdStack_110 + 1;
        }
joined_r0x000108d64470:
        if ((long)dVar13 < 0) {
          dVar13 = (double)-(long)dVar13;
          bVar15 = 0x2d;
          uVar40 = uVar29;
          goto code_r0x000108d645cc;
        }
      }
      else {
        iVar26 = piStack_130[1];
        if (iVar26 < *piStack_130) {
          piStack_130[1] = iVar26 + 1;
          dVar13 = *(double *)(*(long *)(piStack_130 + 2) + (long)iVar26 * 8);
          func_0x000108d6797c();
          goto joined_r0x000108d64470;
        }
        dVar13 = 0.0;
      }
      bVar16 = 0;
      if (bVar7) {
        bVar16 = 0x20;
      }
      bVar15 = 0x2b;
      if (!bVar9) {
        bVar15 = bVar16;
      }
code_r0x000108d645c4:
      uVar40 = 0;
      if (dVar13 != 0.0) {
        uVar40 = uVar29;
      }
    }
code_r0x000108d645cc:
    iVar28 = uVar17 - (bVar15 != 0);
    iVar26 = iVar18;
    if (iVar18 <= iVar28) {
      iVar26 = iVar28;
    }
    if (bVar5) {
      iVar18 = iVar26;
    }
    if (iVar18 < 0x3c) {
      pbVar41 = abStack_f6;
      pbVar11 = (byte *)0x46;
      pbVar39 = (byte *)0x0;
    }
    else {
      pbVar11 = (byte *)(ulong)(iVar18 + 10);
      pbVar41 = pbVar11;
      FUN_108d60848();
      pbVar39 = pbVar41;
      if (pbVar41 == (byte *)0x0) {
code_r0x000108d64ae4:
        param_2[0x24] = 1;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        goto LAB_108d64a9c;
      }
    }
    pbVar11 = pbVar41 + (long)pbVar11;
    pbVar34 = pbVar11 + -1;
    if (bVar23 == 0x10) {
      uVar35 = ((ulong)dVar13 / 10) * -0x3333333333333333 + 0x3333333333333333;
      uVar29 = 0;
      if (0x1999999999999999 < (uVar35 >> 1 | uVar35 << 0x3f) && (ulong)dVar13 % 10 < 4) {
        uVar29 = (uint)((ulong)dVar13 % 10);
      }
      bVar23 = (&UNK_10f517619)[(ulong)uVar29 * 2];
      pbVar34 = pbVar11 + -3;
      *pbVar34 = (&UNK_10f517618)[(ulong)uVar29 * 2];
      pbVar11[-2] = bVar23;
    }
    lVar38 = 0;
    bVar23 = pbVar22[2];
    dVar32 = (double)(ulong)pbVar22[-1];
    iVar26 = iVar18;
    if (iVar18 < 0x3d) {
      iVar26 = 0x3c;
    }
    uVar29 = ((iVar18 + (int)pbVar34) - (iVar26 + (int)pbVar41)) - 10;
    do {
      dVar42 = 0.0;
      if (dVar32 != 0.0) {
        dVar42 = (double)((ulong)dVar13 / (ulong)dVar32);
      }
      pbVar34[lVar38 + -1] =
           (&UNK_10f517621)[((long)dVar13 - (long)dVar42 * (long)dVar32) + (ulong)bVar23];
      lVar38 = lVar38 + -1;
      uVar29 = uVar29 - 1;
      bVar7 = (ulong)dVar32 <= (ulong)dVar13;
      dVar13 = dVar42;
    } while (bVar7);
    uVar35 = (ulong)((((iVar18 + (int)pbVar34) - iVar26) - (int)pbVar41) - 9) + lVar38;
    if ((int)uVar35 < 1) {
      pbVar34 = pbVar34 + lVar38;
    }
    else {
      pbVar34 = pbVar34 + (lVar38 - (ulong)uVar29) + -1;
      _memset(pbVar34,0x30,uVar35 & 0xffffffff);
    }
    if (bVar15 != 0) {
      pbVar34 = pbVar34 + -1;
      *pbVar34 = bVar15;
    }
    if (uVar40 != 0) {
      bVar23 = pbVar22[3];
      if ((6 < bVar23) || ((1 << (ulong)(bVar23 & 0x1f) & 0x49U) == 0)) {
        pbVar22 = &UNK_10dfa09c9 + bVar23;
        bVar23 = *pbVar22;
        do {
          pbVar22 = pbVar22 + 1;
          pbVar34 = pbVar34 + -1;
          *pbVar34 = bVar23;
          bVar23 = *pbVar22;
        } while (bVar23 != 0);
      }
    }
    uVar37 = (ulong)(uint)((int)(pbVar11 + -1) - (int)pbVar34);
    pbVar41 = pbVar39;
    break;
  default:
    goto LAB_108d64a9c;
  }
  iVar18 = (int)uVar14 - (int)uVar37;
  if ((iVar18 < 1) || (bVar4)) {
    pbVar11 = param_2;
    FUN_108d71998(param_2,pbVar34,uVar37);
    if ((0 < iVar18) && (bVar4)) {
      pbVar11 = param_2;
      FUN_108d719c4(param_2,iVar18,0x20);
    }
  }
  else {
    FUN_108d719c4(param_2,iVar18,0x20);
    pbVar11 = param_2;
    FUN_108d71998(param_2,pbVar34,uVar37);
  }
  if (pbVar41 != (byte *)0x0) {
    func_0x000108d5e198();
    pbVar11 = pbVar41;
  }
  param_4 = param_4 + 1;
  goto code_r0x000108d63918;
}



/* Entry: 108d64afc; end: 108d64b87;  */

long FUN_108d64afc(long *param_1)

{
  long lVar1;
  
  if (param_1[2] != 0) {
    *(undefined1 *)(param_1[2] + (long)(int)param_1[3]) = 0;
    lVar1 = param_1[2];
    if ((0 < (int)param_1[4]) && (lVar1 == param_1[1])) {
      lVar1 = *param_1;
      FUN_108d6a6fc(lVar1,(long)(int)param_1[3] + 1);
      param_1[2] = lVar1;
      if (lVar1 == 0) {
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        lVar1 = 0;
      }
      else {
        _memcpy();
        lVar1 = param_1[2];
      }
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 108d64b88; end: 108d64bff;  */

undefined8 * FUN_108d64b88(int param_1,undefined8 *param_2)

{
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (0 < param_1) {
    uStack_38 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    puStack_30 = param_2;
    puStack_28 = param_2;
    iStack_1c = param_1;
    FUN_108d63850(&uStack_38,0);
    param_2 = &uStack_38;
    FUN_108d64afc(param_2);
  }
  return param_2;
}



/* Entry: 108d64c00; end: 108d64cbf;  */

code * FUN_108d64c00(code *param_1,code *param_2,code *param_3,code *param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined *puVar9;
  uint *puVar10;
  code *pcVar11;
  uint uVar12;
  byte bVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  code *pcVar17;
  code *pcVar18;
  undefined4 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iStack_e94;
  code *pcStack_e90;
  code *pcStack_e88;
  undefined1 ***pppuStack_e80;
  code *pcStack_e78;
  undefined8 uStack_e70;
  undefined *puStack_e68;
  char *pcStack_e60;
  code *pcStack_e58;
  char *pcStack_e50;
  undefined8 uStack_e40;
  uint uStack_e38;
  undefined4 uStack_e34;
  code *pcStack_e30;
  uint uStack_e24;
  undefined1 auStack_e20 [4];
  ushort uStack_e1c;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  undefined1 auStack_d8a [513];
  undefined1 auStack_b89 [66];
  byte bStack_b47;
  int iStack_b40;
  char cStack_b3c;
  long lStack_310;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_298 [256];
  long lStack_198;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined1 auStack_10a [210];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar17 = param_1;
  if (pcRam0000000113297aa0 != (code *)0x0) {
    uStack_138 = 0;
    puStack_130 = auStack_10a;
    uStack_120 = 0xd200000000;
    uStack_118 = 0;
    uStack_114 = 0;
    param_4 = (code *)register0x00000008;
    puStack_128 = puStack_130;
    FUN_108d63850(&uStack_138,0,param_2);
    pcVar17 = pcRam0000000113297aa8;
    pcVar8 = pcRam0000000113297aa0;
    param_3 = (code *)&uStack_138;
    FUN_108d64afc();
    (*pcVar8)();
    param_2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pcVar17;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108d64cc0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar17;
  pcVar11 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  FUN_108d62be4();
  if ((int)pcVar8 == 0) {
    if (iRam0000000113297914 == 0) {
LAB_108d64d74:
      if (((int)pcVar17 < 1) || (param_2 == (code *)0x0)) {
        cRam000000011372e770 = '\0';
      }
      else {
        pcVar20 = (code *)0x0;
        bVar4 = true;
LAB_108d64d88:
        if (cRam000000011372e770 == '\0') {
          uRam000000011372e771 = 0;
          pcVar8 = (code *)0x0;
          func_0x000108d62b2c();
          param_3 = (code *)auStack_298;
          pcVar11 = (code *)0x100;
          (**(code **)(pcVar8 + 0x68))();
          lVar14 = 0;
          uVar22 = 0xf0e0d0c0b0a0908;
          uVar21 = 0x706050403020100;
          do {
            *(undefined8 *)(lVar14 + 0x11372e77b) = uVar22;
            *(undefined8 *)(lVar14 + 0x11372e773) = uVar21;
            lVar14 = lVar14 + 0x10;
            uVar21 = CONCAT17((char)((ulong)uVar21 >> 0x38) + '\x10',
                              CONCAT16((char)((ulong)uVar21 >> 0x30) + '\x10',
                                       CONCAT15((char)((ulong)uVar21 >> 0x28) + '\x10',
                                                CONCAT14((char)((ulong)uVar21 >> 0x20) + '\x10',
                                                         CONCAT13((char)((ulong)uVar21 >> 0x18) +
                                                                  '\x10',CONCAT12((char)((ulong)
                                                  uVar21 >> 0x10) + '\x10',
                                                  CONCAT11((char)((ulong)uVar21 >> 8) + '\x10',
                                                           (char)uVar21 + '\x10')))))));
            uVar22 = CONCAT17((char)((ulong)uVar22 >> 0x38) + '\x10',
                              CONCAT16((char)((ulong)uVar22 >> 0x30) + '\x10',
                                       CONCAT15((char)((ulong)uVar22 >> 0x28) + '\x10',
                                                CONCAT14((char)((ulong)uVar22 >> 0x20) + '\x10',
                                                         CONCAT13((char)((ulong)uVar22 >> 0x18) +
                                                                  '\x10',CONCAT12((char)((ulong)
                                                  uVar22 >> 0x10) + '\x10',
                                                  CONCAT11((char)((ulong)uVar22 >> 8) + '\x10',
                                                           (char)uVar22 + '\x10')))))));
          } while (lVar14 != 0x100);
          lVar14 = 0;
          bVar13 = uRam000000011372e771._1_1_;
          do {
            bVar13 = *(char *)(lVar14 + 0x11372e773) + bVar13 + auStack_298[lVar14];
            uVar2 = *(undefined1 *)((ulong)bVar13 + 0x11372e773);
            *(char *)((ulong)bVar13 + 0x11372e773) = *(char *)(lVar14 + 0x11372e773);
            *(undefined1 *)(lVar14 + 0x11372e773) = uVar2;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x100);
          cRam000000011372e770 = '\x01';
        }
        else {
          bVar13 = uRam000000011372e771._1_1_;
        }
        do {
          uRam000000011372e771._0_1_ = (byte)uRam000000011372e771 + 1;
          uVar16 = (ulong)(byte)uRam000000011372e771;
          cVar3 = *(char *)(uVar16 + 0x11372e773);
          bVar13 = cVar3 + bVar13;
          *(undefined1 *)(uVar16 + 0x11372e773) = *(undefined1 *)((ulong)bVar13 + 0x11372e773);
          *(char *)((ulong)bVar13 + 0x11372e773) = cVar3;
          *param_2 = *(code *)((ulong)(byte)(*(char *)(uVar16 + 0x11372e773) + cVar3) + 0x11372e773)
          ;
          uVar7 = (int)pcVar17 - 1;
          pcVar17 = (code *)(ulong)uVar7;
          param_2 = param_2 + 1;
        } while (uVar7 != 0);
        uRam000000011372e771 = CONCAT11(bVar13,(byte)uRam000000011372e771);
        if (!bVar4) {
          (*pcRam00000001132979a8)();
          pcVar8 = pcVar20;
        }
      }
      goto LAB_108d64cfc;
    }
    pcVar20 = (code *)0x5;
    (*pcRam0000000113297988)();
    pcVar8 = pcVar20;
    if (pcVar20 == (code *)0x0) goto LAB_108d64d74;
    (*pcRam0000000113297998)();
    if ((0 < (int)pcVar17) && (param_2 != (code *)0x0)) {
      bVar4 = false;
      goto LAB_108d64d88;
    }
    cRam000000011372e770 = '\0';
    pcVar11 = pcRam00000001132979a8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x000108d64df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001132979a8)(pcVar20);
      return pcVar20;
    }
  }
  else {
LAB_108d64cfc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return pcVar8;
    }
  }
  ___stack_chk_fail();
  iVar6 = iRam000000011372e690;
  pcStack_2a8 = FUN_108d64f00;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (uint)param_4;
  uVar7 = uVar12 & 0xffffff00;
  if (((uVar12 >> 2 & 1) == 0) ||
     (((uVar19 = 1, uVar7 != 0x800 && (uVar7 != 0x4000)) && (uVar7 != 0x80000)))) {
    uVar19 = 0;
  }
  uStack_e24 = uVar12 & 1;
  pcVar17 = param_3;
  pcStack_e30 = pcVar8;
  ppuStack_2b0 = &puStack_150;
  _getpid();
  iVar5 = (int)pcVar8;
  if (iVar6 != iVar5) {
    _getpid();
    iRam000000011372e690 = iVar5;
    FUN_108d64cc0(0,0);
  }
  uVar16 = (ulong)param_4 & 8;
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)param_3 = 0;
  pcVar8 = pcVar11;
  if (uVar7 == 0x100) {
    pcVar18 = pcVar11;
    pcVar20 = param_4;
    FUN_108d74f90();
    if (pcVar18 == (code *)0x0) {
      FUN_108d62be4();
      if ((int)pcVar18 == 0) {
        pcVar18 = (code *)0x10;
        FUN_108d60848();
        if (pcVar18 != (code *)0x0) {
          pcVar20 = (code *)0xffffffff;
          goto LAB_108d64fc0;
        }
      }
      pcVar18 = (code *)0x7;
      goto LAB_108d6538c;
    }
    pcVar20 = (code *)(ulong)*(uint *)pcVar18;
LAB_108d64fc0:
    *(code **)(param_3 + 0x30) = pcVar18;
    uVar7 = uVar12 & 2 | (uVar12 & 4) << 7;
    if (((ulong)param_4 & 0x10) != 0) {
      uVar7 = uVar7 | 0x900;
    }
    uStack_e34 = uVar19;
    if ((int)pcVar20 < 0) goto LAB_108d6502c;
LAB_108d65130:
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (int)param_4;
    }
    puVar15 = *(undefined4 **)(param_3 + 0x30);
    if (puVar15 != (undefined4 *)0x0) {
      *puVar15 = (int)pcVar20;
      puVar15[1] = (int)param_4;
    }
    if (uVar16 == 0) {
      *(uint *)(param_3 + 0x4c) = uVar7;
    }
    else {
      (*(code *)PTR__unlink_113299280)(pcVar8);
    }
    pcVar17 = pcVar20;
    _fstatfs(pcVar20,auStack_b89 + 1);
    pcVar18 = pcStack_e30;
    if ((int)pcVar17 == -1) {
      ___error();
      *(uint *)(param_3 + 0x20) = *(uint *)pcVar17;
      pcVar17 = (code *)0x887b;
      FUN_108d734ec(param_3);
      pcVar18 = (code *)0xd0a;
      goto LAB_108d6538c;
    }
    if (iStack_b40 == 0x6f64736d && cStack_b3c == 's') {
      *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 1;
    }
    if (iStack_b40 == 0x61667865 && cStack_b3c == 't') {
      *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 1;
    }
    if (((pcVar11 == (code *)0x0) || ((uVar12 & 0xffffff20) != 0x120)) ||
       (*(long *)(pcStack_e30 + 0x28) == 0)) {
LAB_108d65364:
      pcVar17 = param_3;
      FUN_108d750a0();
      if ((int)pcVar18 == 0) goto LAB_108d6538c;
    }
    else {
      puVar9 = &UNK_10f51796d;
      _getenv();
      if (puVar9 == (undefined *)0x0) {
        if ((bStack_b47 >> 4 & 1) != 0) goto LAB_108d65364;
      }
      else {
        _atoi();
        if ((int)puVar9 < 1) goto LAB_108d65364;
      }
      pcVar17 = param_3;
      FUN_108d750a0();
      if ((int)pcVar18 == 0) {
        pcVar20 = (code *)&UNK_10f5177a3;
        pcVar18 = param_3;
        FUN_108d74230();
        if ((int)pcVar18 != 0) {
          FUN_108d71d74(param_3);
        }
        goto LAB_108d6538c;
      }
    }
  }
  else {
    if (pcVar11 == (code *)0x0) {
      pcVar8 = (code *)auStack_d8a;
      pcVar20 = (code *)auStack_d8a;
      iVar6 = 0x202;
      FUN_108d73b58();
      if (iVar6 != 0) {
        pcVar18 = (code *)0x1;
        goto LAB_108d6538c;
      }
    }
    uVar7 = uVar12 & 2 | (uVar12 & 4) << 7;
    if (((ulong)param_4 & 0x10) != 0) {
      uVar7 = uVar7 | 0x900;
    }
LAB_108d6502c:
    uStack_e38 = uVar12 & 0x80800;
    if (((ulong)param_4 & 0x80800) == 0) {
      uStack_e40 = 0;
      uVar1 = 0;
      uStack_e34 = uVar19;
    }
    else {
      if (pcVar8 == (code *)0x0) {
        pcVar20 = (code *)0x0;
        uStack_e34 = uVar19;
      }
      else {
        pcVar20 = pcVar8;
        uStack_e34 = uVar19;
        _strlen();
        pcVar20 = (code *)((ulong)pcVar20 & 0x3fffffff);
      }
      do {
        pcVar17 = pcVar8 + (long)pcVar20;
        pcVar20 = pcVar20 + -1;
      } while (pcVar17[-1] != (code)0x2d);
      pcVar17 = pcVar20;
      ___memcpy_chk(auStack_b89 + 1,pcVar8,pcVar20,0x201);
      (auStack_b89 + 1)[(long)pcVar20] = 0;
      iVar6 = (int)auStack_b89 + 1;
      pcVar20 = (code *)auStack_e20;
      (*(code *)PTR__stat_113299160)();
      if (iVar6 != 0) {
        pcVar18 = (code *)0x70a;
        goto LAB_108d6538c;
      }
      uVar1 = uStack_e1c & 0x1ff;
      uStack_e40 = CONCAT44(uStack_e0c,uStack_e10);
    }
    pcVar18 = (code *)(ulong)uVar1;
    pcVar20 = pcVar8;
    pcVar17 = pcVar18;
    func_0x000108d74b40(pcVar8,uVar7);
    if (-1 < (int)pcVar20) {
LAB_108d65114:
      if (uStack_e38 != 0) {
        (*(code *)PTR_FUN_1132992e0)(pcVar20,uStack_e40 & 0xffffffff,uStack_e40._4_4_);
      }
      goto LAB_108d65130;
    }
    ___error();
    if (((uVar12 & 0x12) == 2) && (*(uint *)pcVar20 != 0x15)) {
      uVar7 = uVar7 & 0x900;
      pcVar20 = pcVar8;
      func_0x000108d74b40(pcVar8,uVar7);
      pcVar17 = pcVar18;
      if (-1 < (int)pcVar20) {
        param_4 = (code *)(ulong)(uVar12 & 0xffffffe8 | 1);
        uStack_e24 = 1;
        goto LAB_108d65114;
      }
    }
    uStack_e70 = 0x884c;
    puStack_e68 = &UNK_10f517536;
    pcVar18 = (code *)0xe;
    puVar10 = (uint *)0xe;
    FUN_108d64c00(0xe,&UNK_10f517890);
    ___error();
    pcStack_e58 = (code *)"";
    if (pcVar8 != (code *)0x0) {
      pcStack_e58 = pcVar8;
    }
    puStack_e68 = (undefined *)(ulong)*puVar10;
    pcStack_e50 = "";
    pcStack_e60 = "open";
    uStack_e70 = 0x884c;
    pcVar20 = (code *)&UNK_10f5176e7;
    FUN_108d64c00(0xe);
  }
  func_0x000108d5e198(*(undefined8 *)(param_3 + 0x30));
LAB_108d6538c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return pcVar18;
  }
  ___stack_chk_fail();
  pcStack_e78 = FUN_108d653f0;
  pcVar8 = pcVar20;
  pcStack_e90 = pcVar18;
  pcStack_e88 = param_3;
  pppuStack_e80 = &ppuStack_2b0;
  (*(code *)PTR__unlink_113299280)();
  if ((int)pcVar8 == -1) {
    ___error();
    if (*(uint *)pcVar8 == 2) {
      pcVar17 = (code *)0x170a;
    }
    else {
      ___error();
      pcVar17 = (code *)0xa0a;
      FUN_108d64c00(0xa0a,&UNK_10f5176e7);
    }
  }
  else if (((ulong)pcVar17 & 1) == 0) {
    pcVar17 = (code *)0x0;
  }
  else {
    (*(code *)PTR_FUN_113299298)(pcVar20,&iStack_e94);
    uVar7 = (uint)pcVar20;
    if (uVar7 == 0) {
      iVar6 = iStack_e94;
      _fsync();
      if (iVar6 == 0) {
        pcVar17 = (code *)0x0;
      }
      else {
        ___error();
        pcVar17 = (code *)0x50a;
        FUN_108d64c00(0x50a,&UNK_10f5176e7);
      }
      FUN_108d734ec(0,iStack_e94,0x88dd);
    }
    else {
      uVar12 = 0;
      if (uVar7 != 0xe) {
        uVar12 = uVar7;
      }
      pcVar17 = (code *)(ulong)uVar12;
    }
  }
  return pcVar17;
}



/* Entry: 108d64cc0; end: 108d64eff;  */

char * FUN_108d64cc0(char *param_1,code *param_2,char *param_3,code *param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined *puVar9;
  uint *puVar10;
  code *pcVar11;
  code *pcVar12;
  char *pcVar13;
  uint uVar14;
  byte bVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  char *pcVar19;
  undefined4 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iStack_d54;
  char *pcStack_d50;
  char *pcStack_d48;
  undefined1 **ppuStack_d40;
  code *pcStack_d38;
  undefined8 uStack_d30;
  undefined *puStack_d28;
  char *pcStack_d20;
  code *pcStack_d18;
  char *pcStack_d10;
  undefined8 uStack_d00;
  uint uStack_cf8;
  undefined4 uStack_cf4;
  char *pcStack_cf0;
  uint uStack_ce4;
  undefined1 auStack_ce0 [4];
  ushort uStack_cdc;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  undefined1 auStack_c4a [513];
  undefined1 auStack_a49 [66];
  byte bStack_a07;
  int iStack_a00;
  char cStack_9fc;
  long lStack_1d0;
  undefined1 *puStack_170;
  code *pcStack_168;
  char acStack_158 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = param_1;
  pcVar12 = param_2;
  FUN_108d62be4();
  if ((int)pcVar19 == 0) {
    if (iRam0000000113297914 == 0) {
LAB_108d64d74:
      if (((int)param_1 < 1) || (param_2 == (code *)0x0)) {
        cRam000000011372e770 = '\0';
      }
      else {
        pcVar13 = (char *)0x0;
        bVar4 = true;
LAB_108d64d88:
        if (cRam000000011372e770 == '\0') {
          uRam000000011372e771 = 0;
          pcVar19 = (char *)0x0;
          func_0x000108d62b2c();
          param_3 = acStack_158;
          pcVar12 = (code *)0x100;
          (**(code **)(pcVar19 + 0x68))();
          lVar16 = 0;
          uVar23 = 0xf0e0d0c0b0a0908;
          uVar22 = 0x706050403020100;
          do {
            *(undefined8 *)(lVar16 + 0x11372e77b) = uVar23;
            *(undefined8 *)(lVar16 + 0x11372e773) = uVar22;
            lVar16 = lVar16 + 0x10;
            uVar22 = CONCAT17((char)((ulong)uVar22 >> 0x38) + '\x10',
                              CONCAT16((char)((ulong)uVar22 >> 0x30) + '\x10',
                                       CONCAT15((char)((ulong)uVar22 >> 0x28) + '\x10',
                                                CONCAT14((char)((ulong)uVar22 >> 0x20) + '\x10',
                                                         CONCAT13((char)((ulong)uVar22 >> 0x18) +
                                                                  '\x10',CONCAT12((char)((ulong)
                                                  uVar22 >> 0x10) + '\x10',
                                                  CONCAT11((char)((ulong)uVar22 >> 8) + '\x10',
                                                           (char)uVar22 + '\x10')))))));
            uVar23 = CONCAT17((char)((ulong)uVar23 >> 0x38) + '\x10',
                              CONCAT16((char)((ulong)uVar23 >> 0x30) + '\x10',
                                       CONCAT15((char)((ulong)uVar23 >> 0x28) + '\x10',
                                                CONCAT14((char)((ulong)uVar23 >> 0x20) + '\x10',
                                                         CONCAT13((char)((ulong)uVar23 >> 0x18) +
                                                                  '\x10',CONCAT12((char)((ulong)
                                                  uVar23 >> 0x10) + '\x10',
                                                  CONCAT11((char)((ulong)uVar23 >> 8) + '\x10',
                                                           (char)uVar23 + '\x10')))))));
          } while (lVar16 != 0x100);
          lVar16 = 0;
          bVar15 = uRam000000011372e771._1_1_;
          do {
            bVar15 = *(char *)(lVar16 + 0x11372e773) + bVar15 + acStack_158[lVar16];
            uVar2 = *(undefined1 *)((ulong)bVar15 + 0x11372e773);
            *(char *)((ulong)bVar15 + 0x11372e773) = *(char *)(lVar16 + 0x11372e773);
            *(undefined1 *)(lVar16 + 0x11372e773) = uVar2;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0x100);
          cRam000000011372e770 = '\x01';
        }
        else {
          bVar15 = uRam000000011372e771._1_1_;
        }
        do {
          uRam000000011372e771._0_1_ = (byte)uRam000000011372e771 + 1;
          uVar18 = (ulong)(byte)uRam000000011372e771;
          cVar3 = *(char *)(uVar18 + 0x11372e773);
          bVar15 = cVar3 + bVar15;
          *(undefined1 *)(uVar18 + 0x11372e773) = *(undefined1 *)((ulong)bVar15 + 0x11372e773);
          *(char *)((ulong)bVar15 + 0x11372e773) = cVar3;
          *param_2 = *(code *)((ulong)(byte)(*(char *)(uVar18 + 0x11372e773) + cVar3) + 0x11372e773)
          ;
          uVar7 = (int)param_1 - 1;
          param_1 = (char *)(ulong)uVar7;
          param_2 = param_2 + 1;
        } while (uVar7 != 0);
        uRam000000011372e771 = CONCAT11(bVar15,(byte)uRam000000011372e771);
        if (!bVar4) {
          (*pcRam00000001132979a8)();
          pcVar19 = pcVar13;
        }
      }
      goto LAB_108d64cfc;
    }
    pcVar13 = (char *)0x5;
    (*pcRam0000000113297988)();
    pcVar19 = pcVar13;
    if (pcVar13 == (char *)0x0) goto LAB_108d64d74;
    (*pcRam0000000113297998)();
    if ((0 < (int)param_1) && (param_2 != (code *)0x0)) {
      bVar4 = false;
      goto LAB_108d64d88;
    }
    cRam000000011372e770 = '\0';
    pcVar12 = pcRam00000001132979a8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x000108d64df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001132979a8)(pcVar13);
      return pcVar13;
    }
  }
  else {
LAB_108d64cfc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return pcVar19;
    }
  }
  ___stack_chk_fail();
  iVar6 = iRam000000011372e690;
  pcStack_168 = FUN_108d64f00;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = (uint)param_4;
  uVar7 = uVar14 & 0xffffff00;
  if (((uVar14 >> 2 & 1) == 0) ||
     (((uVar20 = 1, uVar7 != 0x800 && (uVar7 != 0x4000)) && (uVar7 != 0x80000)))) {
    uVar20 = 0;
  }
  uStack_ce4 = uVar14 & 1;
  pcVar13 = param_3;
  pcStack_cf0 = pcVar19;
  puStack_170 = &stack0xfffffffffffffff0;
  _getpid();
  iVar5 = (int)pcVar19;
  if (iVar6 != iVar5) {
    _getpid();
    iRam000000011372e690 = iVar5;
    FUN_108d64cc0(0,0);
  }
  uVar18 = (ulong)param_4 & 8;
  param_3[0x50] = '\0';
  param_3[0x51] = '\0';
  param_3[0x52] = '\0';
  param_3[0x53] = '\0';
  param_3[0x54] = '\0';
  param_3[0x55] = '\0';
  param_3[0x56] = '\0';
  param_3[0x57] = '\0';
  param_3[0x38] = '\0';
  param_3[0x39] = '\0';
  param_3[0x3a] = '\0';
  param_3[0x3b] = '\0';
  param_3[0x3c] = '\0';
  param_3[0x3d] = '\0';
  param_3[0x3e] = '\0';
  param_3[0x3f] = '\0';
  param_3[0x30] = '\0';
  param_3[0x31] = '\0';
  param_3[0x32] = '\0';
  param_3[0x33] = '\0';
  param_3[0x34] = '\0';
  param_3[0x35] = '\0';
  param_3[0x36] = '\0';
  param_3[0x37] = '\0';
  param_3[0x48] = '\0';
  param_3[0x49] = '\0';
  param_3[0x4a] = '\0';
  param_3[0x4b] = '\0';
  param_3[0x4c] = '\0';
  param_3[0x4d] = '\0';
  param_3[0x4e] = '\0';
  param_3[0x4f] = '\0';
  param_3[0x40] = '\0';
  param_3[0x41] = '\0';
  param_3[0x42] = '\0';
  param_3[0x43] = '\0';
  param_3[0x44] = '\0';
  param_3[0x45] = '\0';
  param_3[0x46] = '\0';
  param_3[0x47] = '\0';
  param_3[0x18] = '\0';
  param_3[0x19] = '\0';
  param_3[0x1a] = '\0';
  param_3[0x1b] = '\0';
  param_3[0x1c] = '\0';
  param_3[0x1d] = '\0';
  param_3[0x1e] = '\0';
  param_3[0x1f] = '\0';
  param_3[0x10] = '\0';
  param_3[0x11] = '\0';
  param_3[0x12] = '\0';
  param_3[0x13] = '\0';
  param_3[0x14] = '\0';
  param_3[0x15] = '\0';
  param_3[0x16] = '\0';
  param_3[0x17] = '\0';
  param_3[0x28] = '\0';
  param_3[0x29] = '\0';
  param_3[0x2a] = '\0';
  param_3[0x2b] = '\0';
  param_3[0x2c] = '\0';
  param_3[0x2d] = '\0';
  param_3[0x2e] = '\0';
  param_3[0x2f] = '\0';
  param_3[0x20] = '\0';
  param_3[0x21] = '\0';
  param_3[0x22] = '\0';
  param_3[0x23] = '\0';
  param_3[0x24] = '\0';
  param_3[0x25] = '\0';
  param_3[0x26] = '\0';
  param_3[0x27] = '\0';
  param_3[8] = '\0';
  param_3[9] = '\0';
  param_3[10] = '\0';
  param_3[0xb] = '\0';
  param_3[0xc] = '\0';
  param_3[0xd] = '\0';
  param_3[0xe] = '\0';
  param_3[0xf] = '\0';
  param_3[0] = '\0';
  param_3[1] = '\0';
  param_3[2] = '\0';
  param_3[3] = '\0';
  param_3[4] = '\0';
  param_3[5] = '\0';
  param_3[6] = '\0';
  param_3[7] = '\0';
  pcVar8 = pcVar12;
  if (uVar7 == 0x100) {
    pcVar11 = pcVar12;
    pcVar21 = param_4;
    FUN_108d74f90();
    if (pcVar11 == (code *)0x0) {
      FUN_108d62be4();
      if ((int)pcVar11 == 0) {
        pcVar11 = (code *)0x10;
        FUN_108d60848();
        if (pcVar11 != (code *)0x0) {
          pcVar21 = (code *)0xffffffff;
          goto LAB_108d64fc0;
        }
      }
      pcVar19 = (char *)0x7;
      goto LAB_108d6538c;
    }
    pcVar21 = (code *)(ulong)*(uint *)pcVar11;
LAB_108d64fc0:
    *(code **)(param_3 + 0x30) = pcVar11;
    uVar7 = uVar14 & 2 | (uVar14 & 4) << 7;
    if (((ulong)param_4 & 0x10) != 0) {
      uVar7 = uVar7 | 0x900;
    }
    uStack_cf4 = uVar20;
    if ((int)pcVar21 < 0) goto LAB_108d6502c;
LAB_108d65130:
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (int)param_4;
    }
    puVar17 = *(undefined4 **)(param_3 + 0x30);
    if (puVar17 != (undefined4 *)0x0) {
      *puVar17 = (int)pcVar21;
      puVar17[1] = (int)param_4;
    }
    if (uVar18 == 0) {
      *(uint *)(param_3 + 0x4c) = uVar7;
    }
    else {
      (*(code *)PTR__unlink_113299280)(pcVar8);
    }
    pcVar8 = pcVar21;
    _fstatfs(pcVar21,auStack_a49 + 1);
    pcVar19 = pcStack_cf0;
    if ((int)pcVar8 == -1) {
      ___error();
      *(uint *)(param_3 + 0x20) = *(uint *)pcVar8;
      pcVar13 = (char *)0x887b;
      FUN_108d734ec(param_3);
      pcVar19 = (char *)0xd0a;
      goto LAB_108d6538c;
    }
    if (iStack_a00 == 0x6f64736d && cStack_9fc == 's') {
      *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 1;
    }
    if (iStack_a00 == 0x61667865 && cStack_9fc == 't') {
      *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 1;
    }
    if (((pcVar12 == (code *)0x0) || ((uVar14 & 0xffffff20) != 0x120)) ||
       (*(long *)(pcStack_cf0 + 0x28) == 0)) {
LAB_108d65364:
      pcVar13 = param_3;
      FUN_108d750a0();
      if ((int)pcVar19 == 0) goto LAB_108d6538c;
    }
    else {
      puVar9 = &UNK_10f51796d;
      _getenv();
      if (puVar9 == (undefined *)0x0) {
        if ((bStack_a07 >> 4 & 1) != 0) goto LAB_108d65364;
      }
      else {
        _atoi();
        if ((int)puVar9 < 1) goto LAB_108d65364;
      }
      pcVar13 = param_3;
      FUN_108d750a0();
      if ((int)pcVar19 == 0) {
        pcVar21 = (code *)&UNK_10f5177a3;
        pcVar19 = param_3;
        FUN_108d74230();
        if ((int)pcVar19 != 0) {
          FUN_108d71d74(param_3);
        }
        goto LAB_108d6538c;
      }
    }
  }
  else {
    if (pcVar12 == (code *)0x0) {
      pcVar8 = (code *)auStack_c4a;
      pcVar21 = (code *)auStack_c4a;
      iVar6 = 0x202;
      FUN_108d73b58();
      if (iVar6 != 0) {
        pcVar19 = (char *)0x1;
        goto LAB_108d6538c;
      }
    }
    uVar7 = uVar14 & 2 | (uVar14 & 4) << 7;
    if (((ulong)param_4 & 0x10) != 0) {
      uVar7 = uVar7 | 0x900;
    }
LAB_108d6502c:
    uStack_cf8 = uVar14 & 0x80800;
    if (((ulong)param_4 & 0x80800) == 0) {
      uStack_d00 = 0;
      uVar1 = 0;
      uStack_cf4 = uVar20;
    }
    else {
      if (pcVar8 == (code *)0x0) {
        pcVar19 = (char *)0x0;
        uStack_cf4 = uVar20;
      }
      else {
        pcVar21 = pcVar8;
        uStack_cf4 = uVar20;
        _strlen();
        pcVar19 = (char *)((ulong)pcVar21 & 0x3fffffff);
      }
      do {
        pcVar21 = pcVar8 + (long)pcVar19;
        pcVar19 = pcVar19 + -1;
      } while (pcVar21[-1] != (code)0x2d);
      pcVar13 = pcVar19;
      ___memcpy_chk(auStack_a49 + 1,pcVar8,pcVar19,0x201);
      (auStack_a49 + 1)[(long)pcVar19] = 0;
      iVar6 = (int)auStack_a49 + 1;
      pcVar21 = (code *)auStack_ce0;
      (*(code *)PTR__stat_113299160)();
      if (iVar6 != 0) {
        pcVar19 = (char *)0x70a;
        goto LAB_108d6538c;
      }
      uVar1 = uStack_cdc & 0x1ff;
      uStack_d00 = CONCAT44(uStack_ccc,uStack_cd0);
    }
    pcVar19 = (char *)(ulong)uVar1;
    pcVar21 = pcVar8;
    pcVar13 = pcVar19;
    func_0x000108d74b40(pcVar8,uVar7);
    if (-1 < (int)pcVar21) {
LAB_108d65114:
      if (uStack_cf8 != 0) {
        (*(code *)PTR_FUN_1132992e0)(pcVar21,uStack_d00 & 0xffffffff,uStack_d00._4_4_);
      }
      goto LAB_108d65130;
    }
    ___error();
    if (((uVar14 & 0x12) == 2) && (*(uint *)pcVar21 != 0x15)) {
      uVar7 = uVar7 & 0x900;
      pcVar21 = pcVar8;
      func_0x000108d74b40(pcVar8,uVar7);
      pcVar13 = pcVar19;
      if (-1 < (int)pcVar21) {
        param_4 = (code *)(ulong)(uVar14 & 0xffffffe8 | 1);
        uStack_ce4 = 1;
        goto LAB_108d65114;
      }
    }
    uStack_d30 = 0x884c;
    puStack_d28 = &UNK_10f517536;
    pcVar19 = (char *)0xe;
    puVar10 = (uint *)0xe;
    FUN_108d64c00(0xe,&UNK_10f517890);
    ___error();
    pcStack_d18 = (code *)"";
    if (pcVar8 != (code *)0x0) {
      pcStack_d18 = pcVar8;
    }
    puStack_d28 = (undefined *)(ulong)*puVar10;
    pcStack_d10 = "";
    pcStack_d20 = "open";
    uStack_d30 = 0x884c;
    pcVar21 = (code *)&UNK_10f5176e7;
    FUN_108d64c00(0xe);
  }
  func_0x000108d5e198(*(undefined8 *)(param_3 + 0x30));
LAB_108d6538c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return pcVar19;
  }
  ___stack_chk_fail();
  pcStack_d38 = FUN_108d653f0;
  pcVar12 = pcVar21;
  pcStack_d50 = pcVar19;
  pcStack_d48 = param_3;
  ppuStack_d40 = &puStack_170;
  (*(code *)PTR__unlink_113299280)();
  if ((int)pcVar12 == -1) {
    ___error();
    if (*(uint *)pcVar12 == 2) {
      pcVar19 = (char *)0x170a;
    }
    else {
      ___error();
      pcVar19 = (char *)0xa0a;
      FUN_108d64c00(0xa0a,&UNK_10f5176e7);
    }
  }
  else if (((ulong)pcVar13 & 1) == 0) {
    pcVar19 = (char *)0x0;
  }
  else {
    (*(code *)PTR_FUN_113299298)(pcVar21,&iStack_d54);
    uVar7 = (uint)pcVar21;
    if (uVar7 == 0) {
      iVar6 = iStack_d54;
      _fsync();
      if (iVar6 == 0) {
        pcVar19 = (char *)0x0;
      }
      else {
        ___error();
        pcVar19 = (char *)0x50a;
        FUN_108d64c00(0x50a,&UNK_10f5176e7);
      }
      FUN_108d734ec(0,iStack_d54,0x88dd);
    }
    else {
      uVar14 = 0;
      if (uVar7 != 0xe) {
        uVar14 = uVar7;
      }
      pcVar19 = (char *)(ulong)uVar14;
    }
  }
  return pcVar19;
}



/* Entry: 108d64f00; end: 108d653ef;  */

undefined8 *
FUN_108d64f00(undefined8 *param_1,uint *param_2,undefined8 *param_3,uint *param_4,
             undefined4 *param_5)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  int iStack_bf4;
  undefined8 *puStack_bf0;
  undefined8 *puStack_be8;
  undefined1 *puStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  undefined *puStack_bc8;
  char *pcStack_bc0;
  uint *puStack_bb8;
  char *pcStack_bb0;
  undefined8 uStack_ba0;
  uint uStack_b98;
  undefined4 uStack_b94;
  undefined8 *puStack_b90;
  uint uStack_b84;
  uint uStack_b80;
  ushort uStack_b7c;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  uint auStack_aea [128];
  undefined1 auStack_8e9 [66];
  byte bStack_8a7;
  int iStack_8a0;
  char cStack_89c;
  long lStack_70;
  
  iVar5 = iRam000000011372e690;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (uint)param_4;
  uVar6 = uVar10 & 0xffffff00;
  if (((uVar10 >> 2 & 1) == 0) ||
     (((uVar14 = 1, uVar6 != 0x800 && (uVar6 != 0x4000)) && (uVar6 != 0x80000)))) {
    uVar14 = 0;
  }
  uStack_b84 = uVar10 & 1;
  puVar12 = param_3;
  puStack_b90 = param_1;
  _getpid();
  iVar4 = (int)param_1;
  if (iVar5 != iVar4) {
    _getpid();
    iRam000000011372e690 = iVar4;
    FUN_108d64cc0(0,0);
  }
  uVar3 = (ulong)param_4 & 8;
  param_3[10] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  puVar7 = param_2;
  if (uVar6 == 0x100) {
    puVar9 = param_2;
    puVar15 = param_4;
    FUN_108d74f90();
    if (puVar9 == (uint *)0x0) {
      FUN_108d62be4();
      if ((int)puVar9 == 0) {
        puVar9 = (uint *)0x10;
        FUN_108d60848();
        if (puVar9 != (uint *)0x0) {
          puVar15 = (uint *)0xffffffff;
          goto LAB_108d64fc0;
        }
      }
      puVar13 = (undefined8 *)0x7;
      goto LAB_108d6538c;
    }
    puVar15 = (uint *)(ulong)*puVar9;
LAB_108d64fc0:
    param_3[6] = puVar9;
    uVar6 = uVar10 & 2 | (uVar10 & 4) << 7;
    if (((ulong)param_4 & 0x10) != 0) {
      uVar6 = uVar6 | 0x900;
    }
    uStack_b94 = uVar14;
    if ((int)puVar15 < 0) goto LAB_108d6502c;
LAB_108d65130:
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (int)param_4;
    }
    puVar11 = (undefined4 *)param_3[6];
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = (int)puVar15;
      puVar11[1] = (int)param_4;
    }
    if (uVar3 == 0) {
      *(uint *)((long)param_3 + 0x4c) = uVar6;
    }
    else {
      (*(code *)PTR__unlink_113299280)(puVar7);
    }
    puVar7 = puVar15;
    _fstatfs(puVar15,auStack_8e9 + 1);
    puVar13 = puStack_b90;
    if ((int)puVar7 == -1) {
      ___error();
      *(uint *)(param_3 + 4) = *puVar7;
      puVar12 = (undefined8 *)0x887b;
      FUN_108d734ec(param_3);
      puVar13 = (undefined8 *)0xd0a;
      goto LAB_108d6538c;
    }
    if (iStack_8a0 == 0x6f64736d && cStack_89c == 's') {
      *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 1;
    }
    if (iStack_8a0 == 0x61667865 && cStack_89c == 't') {
      *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 1;
    }
    if (((param_2 == (uint *)0x0) || ((uVar10 & 0xffffff20) != 0x120)) || (puStack_b90[5] == 0)) {
LAB_108d65364:
      puVar12 = param_3;
      FUN_108d750a0();
      if ((int)puVar13 == 0) goto LAB_108d6538c;
    }
    else {
      puVar8 = &UNK_10f51796d;
      _getenv();
      if (puVar8 == (undefined *)0x0) {
        if ((bStack_8a7 >> 4 & 1) != 0) goto LAB_108d65364;
      }
      else {
        _atoi();
        if ((int)puVar8 < 1) goto LAB_108d65364;
      }
      puVar12 = param_3;
      FUN_108d750a0();
      if ((int)puVar13 == 0) {
        puVar15 = (uint *)&UNK_10f5177a3;
        puVar13 = param_3;
        FUN_108d74230();
        if ((int)puVar13 != 0) {
          FUN_108d71d74(param_3);
        }
        goto LAB_108d6538c;
      }
    }
  }
  else {
    if (param_2 == (uint *)0x0) {
      puVar7 = auStack_aea;
      puVar15 = auStack_aea;
      iVar5 = 0x202;
      FUN_108d73b58();
      if (iVar5 != 0) {
        puVar13 = (undefined8 *)0x1;
        goto LAB_108d6538c;
      }
    }
    uVar6 = uVar10 & 2 | (uVar10 & 4) << 7;
    if (((ulong)param_4 & 0x10) != 0) {
      uVar6 = uVar6 | 0x900;
    }
LAB_108d6502c:
    uStack_b98 = uVar10 & 0x80800;
    if (((ulong)param_4 & 0x80800) == 0) {
      uStack_ba0 = 0;
      uVar2 = 0;
      uStack_b94 = uVar14;
    }
    else {
      if (puVar7 == (uint *)0x0) {
        puVar13 = (undefined8 *)0x0;
        uStack_b94 = uVar14;
      }
      else {
        puVar15 = puVar7;
        uStack_b94 = uVar14;
        _strlen();
        puVar13 = (undefined8 *)((ulong)puVar15 & 0x3fffffff);
      }
      do {
        pcVar1 = (char *)((long)puVar7 + (long)puVar13);
        puVar13 = (undefined8 *)((long)puVar13 + -1);
      } while (pcVar1[-1] != '-');
      puVar12 = puVar13;
      ___memcpy_chk(auStack_8e9 + 1,puVar7,puVar13,0x201);
      (auStack_8e9 + 1)[(long)puVar13] = 0;
      iVar5 = (int)auStack_8e9 + 1;
      puVar15 = &uStack_b80;
      (*(code *)PTR__stat_113299160)();
      if (iVar5 != 0) {
        puVar13 = (undefined8 *)0x70a;
        goto LAB_108d6538c;
      }
      uVar2 = uStack_b7c & 0x1ff;
      uStack_ba0 = CONCAT44(uStack_b6c,uStack_b70);
    }
    puVar13 = (undefined8 *)(ulong)uVar2;
    puVar15 = puVar7;
    puVar12 = puVar13;
    func_0x000108d74b40(puVar7,uVar6);
    if (-1 < (int)puVar15) {
LAB_108d65114:
      if (uStack_b98 != 0) {
        (*(code *)PTR_FUN_1132992e0)(puVar15,uStack_ba0 & 0xffffffff,uStack_ba0._4_4_);
      }
      goto LAB_108d65130;
    }
    ___error();
    if (((uVar10 & 0x12) == 2) && (*puVar15 != 0x15)) {
      uVar6 = uVar6 & 0x900;
      puVar15 = puVar7;
      func_0x000108d74b40(puVar7,uVar6);
      puVar12 = puVar13;
      if (-1 < (int)puVar15) {
        param_4 = (uint *)(ulong)(uVar10 & 0xffffffe8 | 1);
        uStack_b84 = 1;
        goto LAB_108d65114;
      }
    }
    uStack_bd0 = 0x884c;
    puStack_bc8 = &UNK_10f517536;
    puVar13 = (undefined8 *)0xe;
    puVar15 = (uint *)0xe;
    FUN_108d64c00(0xe,&UNK_10f517890);
    ___error();
    puStack_bb8 = (uint *)"";
    if (puVar7 != (uint *)0x0) {
      puStack_bb8 = puVar7;
    }
    puStack_bc8 = (undefined *)(ulong)*puVar15;
    pcStack_bb0 = "";
    pcStack_bc0 = "open";
    uStack_bd0 = 0x884c;
    puVar15 = (uint *)&UNK_10f5176e7;
    FUN_108d64c00(0xe);
  }
  func_0x000108d5e198(param_3[6]);
LAB_108d6538c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar13;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_108d653f0;
  puVar7 = puVar15;
  puStack_bf0 = puVar13;
  puStack_be8 = param_3;
  puStack_be0 = &stack0xfffffffffffffff0;
  (*(code *)PTR__unlink_113299280)();
  if ((int)puVar7 == -1) {
    ___error();
    if (*puVar7 == 2) {
      puVar12 = (undefined8 *)0x170a;
    }
    else {
      ___error();
      puVar12 = (undefined8 *)0xa0a;
      FUN_108d64c00(0xa0a,&UNK_10f5176e7);
    }
  }
  else if (((ulong)puVar12 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    (*(code *)PTR_FUN_113299298)(puVar15,&iStack_bf4);
    uVar6 = (uint)puVar15;
    if (uVar6 == 0) {
      iVar5 = iStack_bf4;
      _fsync();
      if (iVar5 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        ___error();
        puVar12 = (undefined8 *)0x50a;
        FUN_108d64c00(0x50a,&UNK_10f5176e7);
      }
      FUN_108d734ec(0,iStack_bf4,0x88dd);
    }
    else {
      uVar10 = 0;
      if (uVar6 != 0xe) {
        uVar10 = uVar6;
      }
      puVar12 = (undefined8 *)(ulong)uVar10;
    }
  }
  return puVar12;
}



/* Entry: 108d653f0; end: 108d6552b;  */

int FUN_108d653f0(undefined8 param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_24;
  
  piVar2 = param_2;
  (*(code *)PTR__unlink_113299280)();
  if ((int)piVar2 == -1) {
    ___error();
    if (*piVar2 == 2) {
      iVar3 = 0x170a;
    }
    else {
      ___error();
      FUN_108d64c00(0xa0a,&UNK_10f5176e7);
      iVar3 = 0xa0a;
    }
  }
  else if ((param_3 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_FUN_113299298)(param_2,&iStack_24);
    iVar1 = (int)param_2;
    if (iVar1 == 0) {
      iVar3 = iStack_24;
      _fsync();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        ___error();
        iVar3 = 0x50a;
        FUN_108d64c00(0x50a,&UNK_10f5176e7);
      }
      FUN_108d734ec(0,iStack_24,0x88dd);
    }
    else {
      iVar3 = 0;
      if (iVar1 != 0xe) {
        iVar3 = iVar1;
      }
    }
  }
  return iVar3;
}



/* Entry: 108d6552c; end: 108d656c7;  */

undefined8 FUN_108d6552c(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_c0 [96];
  long lStack_60;
  
  uVar3 = 6;
  if (param_3 != 1) {
    uVar3 = 0;
  }
  uVar1 = 4;
  if (param_3 != 2) {
    uVar1 = uVar3;
  }
  uVar2 = param_2;
  (*(code *)PTR__access_113299130)(param_2,uVar1);
  *param_4 = (uint)((int)uVar2 == 0);
  if ((param_3 == 0 && (int)uVar2 == 0) &&
     ((*(code *)PTR__stat_113299160)(param_2,auStack_c0), (int)param_2 == 0 && lStack_60 == 0)) {
    *param_4 = 0;
  }
  return 0;
}



/* Entry: 108d656c8; end: 108d656d3;  */

void FUN_108d656c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlopen_11034c1f0)(param_2,10);
  return;
}



/* Entry: 108d656d4; end: 108d65783;  */

void FUN_108d656d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (iRam0000000113297914 != 0) {
    param_1 = 2;
    (*pcRam0000000113297988)();
    if (param_1 != 0) {
      (*pcRam0000000113297998)();
    }
  }
  _dlerror();
  if (param_1 != 0) {
    func_0x000108d64bd8(param_2,param_3,&UNK_10f517517);
  }
  if (iRam0000000113297914 != 0) {
    lVar1 = 2;
    (*pcRam0000000113297988)();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d6576c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000001132979a8)();
      return;
    }
  }
  return;
}



/* Entry: 108d65784; end: 108d65797;  */

void FUN_108d65784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dlsym_11034c1f8)(param_2,param_3);
  return;
}



/* Entry: 108d65798; end: 108d65867;  */

undefined8 FUN_108d65798(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int *piVar3;
  int *piVar4;
  undefined8 uStack_48;
  undefined8 *puVar2;
  
  puVar2 = param_3;
  _bzero(param_3,(long)(int)param_2);
  uVar1 = SUB84(puVar2,0);
  _getpid();
  piVar3 = (int *)&UNK_10f517992;
  uRam000000011372e690 = uVar1;
  func_0x000108d74b40(&UNK_10f517992,0,0);
  if ((int)piVar3 < 0) {
    _time(&uStack_48);
    *param_3 = uStack_48;
    *(undefined4 *)(param_3 + 1) = uRam000000011372e690;
    param_2 = 0xc;
  }
  else {
    do {
      piVar4 = piVar3;
      (*(code *)PTR__read_1132991c0)(piVar3,param_3,(long)(int)param_2);
      if (-1 < (int)piVar4) break;
      ___error();
    } while (*piVar4 == 4);
    FUN_108d734ec(0,piVar3,0x899b);
  }
  return param_2;
}



/* Entry: 108d65868; end: 108d658f3;  */

int FUN_108d65868(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 999999) / 1000000;
  _sleep(iVar1);
  return iVar1 * 1000000;
}



/* Entry: 108d658f4; end: 108d658fb;  */

undefined8 FUN_108d658f4(void)

{
  return 0;
}



/* Entry: 108d658fc; end: 108d65973;  */

void FUN_108d658fc(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lStack_30;
  int iStack_28;
  
  iVar1 = (int)&lStack_30;
  _gettimeofday(&lStack_30,0);
  if (iVar1 == 0) {
    *param_2 = lStack_30 * 1000 + (long)(iStack_28 / 1000) + 0xbfc83e532200;
  }
  return;
}



/* Entry: 108d65974; end: 108d65b0b;  */

undefined8 FUN_108d65974(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x113299108;
    lVar4 = 0x19;
    do {
      if (*plVar3 != 0) {
        plVar3[-1] = *plVar3;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = 0;
  }
  else {
    plVar3 = (long *)0x113299108;
    lVar4 = 0x19;
    do {
      lVar1 = param_2;
      _strcmp(param_2,plVar3[-2]);
      if ((int)lVar1 == 0) {
        lVar4 = *plVar3;
        if (lVar4 == 0) {
          lVar4 = plVar3[-1];
          *plVar3 = lVar4;
        }
        if (param_3 != 0) {
          lVar4 = param_3;
        }
        plVar3[-1] = lVar4;
        return 0;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = 0xc;
  }
  return uVar2;
}



/* Entry: 108d65b0c; end: 108d65b1b;  */

undefined8 FUN_108d65b0c(undefined4 param_1)

{
  uRam0000000113297a74 = param_1;
  return 0;
}



/* Entry: 108d65b1c; end: 108d65cb7;  */

long * FUN_108d65b1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_3 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  if (param_3 == param_1) {
    FUN_108d65cb8(param_1,1,&UNK_10f517436);
  }
  else {
    plVar1 = (long *)0x48;
    FUN_108d60848();
    if (plVar1 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x44) = 7;
      lVar2 = *(long *)(param_1 + 0x140);
      if (lVar2 != 0) {
        if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
          plVar1 = (long *)0x0;
          *(undefined2 *)(lVar2 + 8) = 1;
          goto LAB_108d65c30;
        }
        func_0x000108d82720();
      }
    }
    else {
      plVar1[8] = 0;
      plVar1[5] = 0;
      plVar1[4] = 0;
      plVar1[7] = 0;
      plVar1[6] = 0;
      plVar1[1] = 0;
      *plVar1 = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      lVar2 = param_1;
      FUN_108d65dc4(param_1,param_3,param_4);
      plVar1[5] = lVar2;
      lVar2 = param_1;
      FUN_108d65dc4(param_1,param_1,param_2);
      *plVar1 = param_1;
      plVar1[1] = lVar2;
      plVar1[4] = param_3;
      *(undefined4 *)(plVar1 + 3) = 1;
      *(undefined4 *)((long)plVar1 + 0x3c) = 0;
      if (((plVar1[5] != 0) && (lVar2 != 0)) && (FUN_108d70994(), (int)lVar2 != 7)) {
        if (*(char *)(plVar1[1] + 0x10) == '\0') {
          *(int *)(plVar1[5] + 0x18) = *(int *)(plVar1[5] + 0x18) + 1;
          goto LAB_108d65c30;
        }
        FUN_108d65cb8(param_1,1,&UNK_10f517a92);
      }
      func_0x000108d5e198(plVar1);
    }
  }
  plVar1 = (long *)0x0;
LAB_108d65c30:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  if (*(long *)(param_3 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar1;
}



/* Entry: 108d65cb8; end: 108d65dc3;  */

void FUN_108d65cb8(undefined8 *param_1,undefined4 param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  *(undefined4 *)((long)param_1 + 0x44) = param_2;
  plVar2 = (long *)param_1[0x28];
  if (param_3 == 0) {
    if (plVar2 != (long *)0x0) {
      if ((*(ushort *)(plVar2 + 1) & 0x2460) != 0) {
        uVar1 = *(ushort *)(plVar2 + 1);
        if ((uVar1 >> 0xd & 1) != 0) {
          func_0x000108d82798(plVar2,*plVar2);
          uVar1 = *(ushort *)(plVar2 + 1);
        }
        if ((uVar1 >> 10 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar1 >> 6 & 1) != 0) {
              plVar4 = (long *)*plVar2;
              plVar4[1] = *(long *)(*plVar4 + 0xf8);
              *(long **)(*plVar4 + 0xf8) = plVar4;
            }
          }
          else {
            func_0x000108d82838(*plVar2);
          }
        }
        else {
          (*(code *)plVar2[6])(plVar2[2]);
        }
        *(undefined2 *)(plVar2 + 1) = 1;
        return;
      }
      *(undefined2 *)(plVar2 + 1) = 1;
    }
  }
  else {
    if (plVar2 == (long *)0x0) {
      puVar3 = param_1;
      FUN_108d6a6fc(param_1,0x38);
      if (puVar3 == (undefined8 *)0x0) {
        param_1[0x28] = 0;
        return;
      }
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 1;
      puVar3[5] = param_1;
      puVar3[6] = 0;
      param_1[0x28] = puVar3;
    }
    puVar3 = param_1;
    FUN_108d7169c(param_1,param_3,&stack0x00000000);
    if (param_1[0x28] != 0) {
      FUN_108d67c04(param_1[0x28],puVar3,0xffffffff,1,FUN_108d627f0);
    }
  }
  return;
}



/* Entry: 108d65dc4; end: 108d65f13;  */

undefined8 FUN_108d65dc4(ulong *param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  func_0x000108d6ed0c(param_2,param_3);
  if ((int)uVar5 == 1) {
    puVar1 = param_1;
    FUN_108d6a6fc(param_1,0x288);
    if (puVar1 != (ulong *)0x0) {
      _bzero();
      *puVar1 = param_2;
      puVar2 = puVar1;
      FUN_108d7d85c();
      if ((int)puVar2 != 0) {
        FUN_108d65cb8(param_1,(int)puVar1[3],&UNK_10f517517);
        func_0x000108d60660(param_1,puVar1[1]);
        uVar5 = *puVar1;
        func_0x000108d60660(uVar5,puVar1[0x10]);
        FUN_108d93e84(uVar5,puVar1[0x2a]);
        func_0x000108d60660(param_1,puVar1);
        return 0;
      }
      func_0x000108d60660(param_1,puVar1[1]);
      uVar6 = *puVar1;
      func_0x000108d60660(uVar6,puVar1[0x10]);
      FUN_108d93e84(uVar6,puVar1[0x2a]);
      func_0x000108d60660(param_1,puVar1);
LAB_108d65eec:
      return *(undefined8 *)(*(long *)(param_2 + 0x20) + (uVar5 & 0xffffffff) * 0x20 + 8);
    }
    puVar4 = &DAT_10f517a23;
    uVar3 = 7;
  }
  else {
    if (-1 < (int)uVar5) goto LAB_108d65eec;
    puVar4 = &UNK_10f517a31;
    uVar3 = 1;
  }
  FUN_108d65cb8(param_1,uVar3,puVar4);
  return 0;
}



/* Entry: 108d65f14; end: 108d664f7;  */

uint FUN_108d65f14(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  long lStack_68;
  
  if (*(long *)(param_1[4] + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  lVar11 = param_1[5];
  if ((*(char *)(lVar11 + 0x11) != '\0') &&
     (*(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1, *(char *)(lVar11 + 0x12) == '\0')) {
    FUN_108d7f528();
  }
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*pcRam0000000113297998)();
  }
  uVar9 = *(uint *)(param_1 + 6);
  if (6 < uVar9 || (1 << (ulong)(uVar9 & 0x1f) & 0x61U) == 0) goto LAB_108d66484;
  lVar12 = param_1[5];
  plVar17 = (long *)**(undefined8 **)(lVar12 + 8);
  lVar11 = param_1[1];
  lVar16 = **(long **)(lVar11 + 8);
  if ((*param_1 == 0) || (*(char *)((long)*(undefined8 **)(lVar12 + 8) + 0x24) != '\x02')) {
    if (*(int *)((long)param_1 + 0x14) == 0) {
      FUN_108d5f618(lVar11,2);
      uVar9 = (uint)lVar11;
      if (uVar9 != 0) goto LAB_108d66014;
      *(undefined4 *)((long)param_1 + 0x14) = 1;
      FUN_108d615f0(param_1[1],1,param_1 + 2);
      lVar12 = param_1[5];
    }
    if (*(char *)(lVar12 + 0x10) != '\0') {
      uVar9 = 0;
      goto LAB_108d66014;
    }
    FUN_108d5f618(lVar12,0);
    uVar9 = (uint)lVar12;
    bVar6 = false;
  }
  else {
    uVar9 = 5;
LAB_108d66014:
    bVar6 = true;
  }
  iVar4 = *(int *)(*(long *)(param_1[5] + 8) + 0x34);
  lVar11 = (long)iVar4;
  iVar2 = *(int *)((long)*(long **)(param_1[1] + 8) + 0x34);
  cVar3 = *(char *)(**(long **)(param_1[1] + 8) + 9);
  uVar10 = 0;
  if (iVar4 != iVar2) {
    uVar10 = 8;
  }
  if (cVar3 != '\x05' || uVar9 != 0) {
    uVar10 = uVar9;
  }
  plVar18 = (long *)(ulong)uVar10;
  uVar9 = *(uint *)(*(long *)(param_1[5] + 8) + 0x40);
  if (param_2 != 0) {
    uVar19 = *(uint *)(param_1 + 3);
    iVar1 = 1;
    do {
      iVar15 = iVar1;
      uVar10 = (uint)plVar18;
      if ((uVar9 < uVar19) || (uVar10 != 0)) break;
      uVar10 = *(uint *)(*(long *)(param_1[5] + 8) + 0x34);
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uRam0000000113298da4 / uVar10;
      }
      if (uVar19 == uVar5 + 1) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = plVar17;
        FUN_108d5fcfc(plVar17,uVar19,&lStack_68,2);
        lVar12 = lStack_68;
        if ((int)plVar18 == 0) {
          plVar18 = param_1;
          FUN_108d6651c(param_1,uVar19,*(undefined8 *)(lStack_68 + 8),0);
          func_0x000108d787d8(lVar12);
        }
        uVar19 = *(uint *)(param_1 + 3);
      }
      uVar10 = (uint)plVar18;
      uVar19 = uVar19 + 1;
      *(uint *)(param_1 + 3) = uVar19;
      iVar1 = iVar15 + 1;
    } while ((param_2 < 0) || (iVar15 < param_2));
  }
  if (uVar10 == 0x65) {
LAB_108d66128:
    if (uVar9 == 0) {
      lVar12 = param_1[1];
      if ((*(char *)(lVar12 + 0x11) != '\0') &&
         (*(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1, *(char *)(lVar12 + 0x12) == '\0'))
      {
        FUN_108d7f528(lVar12);
      }
      lVar13 = *(long *)(lVar12 + 8);
      *(undefined4 *)(lVar13 + 0x40) = 0;
      FUN_108d7b874();
      uVar10 = (uint)lVar13;
      if ((*(char *)(lVar12 + 0x11) != '\0') &&
         (iVar1 = *(int *)(lVar12 + 0x14) + -1, *(int *)(lVar12 + 0x14) = iVar1, iVar1 == 0)) {
        FUN_108d7f5fc(lVar12);
      }
      if (uVar10 != 0x65 && uVar10 != 0) goto LAB_108d66454;
      uVar9 = 1;
    }
    lVar12 = param_1[1];
    FUN_108d616a8(lVar12,1,(int)param_1[2] + 1);
    uVar10 = (uint)lVar12;
    if ((uint)lVar12 == 0) {
      if (*param_1 != 0) {
        FUN_108d61aa4();
      }
      if (cVar3 == '\x05') {
        lVar12 = param_1[1];
        FUN_108d666f8(lVar12,2);
        uVar10 = (uint)lVar12;
        if ((uint)lVar12 != 0) goto LAB_108d66454;
      }
      if (iVar4 < iVar2) {
        iVar1 = 0;
        if (iVar4 != 0) {
          iVar1 = iVar2 / iVar4;
        }
        uVar10 = *(uint *)(*(long *)(param_1[1] + 8) + 0x34);
        uVar19 = 0;
        if (uVar10 != 0) {
          uVar19 = uRam0000000113298da4 / uVar10;
        }
        iVar15 = 0;
        if (iVar1 != 0) {
          iVar15 = (int)(uVar9 + iVar1 + -1) / iVar1;
        }
        uVar19 = iVar15 - (uint)(iVar15 == uVar19 + 1);
        lVar12 = (long)iVar4 * (long)(int)uVar9;
        plVar18 = *(long **)(lVar16 + 0x48);
        uVar9 = *(uint *)(lVar16 + 0x1c);
        if (uVar9 < uVar19) {
LAB_108d662cc:
          lVar13 = lVar16;
          FUN_108d667a8(lVar16,0,1);
          uVar10 = (uint)lVar13;
        }
        else {
          do {
            uVar10 = *(uint *)(*(long *)(param_1[1] + 8) + 0x34);
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uRam0000000113298da4 / uVar10;
            }
            if (uVar19 == uVar5 + 1) {
              uVar10 = 0;
            }
            else {
              lVar20 = lVar16;
              FUN_108d5fcfc(lVar16,uVar19,&lStack_68,0);
              lVar13 = lStack_68;
              uVar10 = (uint)lVar20;
              if (uVar10 == 0) {
                lVar20 = lStack_68;
                FUN_108d5ffdc();
                uVar10 = (uint)lVar20;
                if (lVar13 != 0) {
                  func_0x000108d787d8(lVar13);
                }
              }
            }
            uVar19 = uVar19 + 1;
          } while ((uVar19 <= uVar9) && (uVar10 == 0));
          if (uVar10 == 0) goto LAB_108d662cc;
        }
        lVar13 = lVar12;
        if ((int)(uRam0000000113298da4 + iVar2) <= lVar12) {
          lVar13 = (long)(int)(uRam0000000113298da4 + iVar2);
        }
        bVar8 = uVar10 == 0;
        if ((uVar10 == 0) && (lVar20 = (long)(int)(uRam0000000113298da4 + iVar4), lVar20 < lVar13))
        {
          do {
            lStack_68 = 0;
            iVar2 = 0;
            if (lVar11 != 0) {
              iVar2 = (int)(lVar20 / lVar11);
            }
            plVar14 = plVar17;
            FUN_108d5fcfc(plVar17,iVar2 + 1,&lStack_68,0);
            lVar7 = lStack_68;
            uVar10 = (uint)plVar14;
            if (uVar10 == 0) {
              plVar14 = plVar18;
              (**(code **)(*plVar18 + 0x18))(plVar18,*(undefined8 *)(lStack_68 + 8),lVar11,lVar20);
              uVar10 = (uint)plVar14;
            }
            else if (lStack_68 == 0) goto LAB_108d66454;
            func_0x000108d787d8(lVar7);
            lVar20 = lVar20 + lVar11;
            bVar8 = uVar10 == 0;
          } while (bVar8 && lVar20 < lVar13);
        }
        if (bVar8) {
          plVar17 = plVar18;
          (**(code **)(*plVar18 + 0x30))(plVar18,&lStack_68);
          uVar10 = (uint)plVar17;
          if ((uint)plVar17 == 0) {
            if (lVar12 < lStack_68) {
              (**(code **)(*plVar18 + 0x20))(plVar18,lVar12);
              uVar10 = (uint)plVar18;
              if ((uint)plVar18 != 0) goto LAB_108d66454;
            }
            FUN_108d66b78(lVar16,0);
            uVar10 = (uint)lVar16;
            goto LAB_108d66434;
          }
        }
      }
      else {
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = iVar4 / iVar2;
        }
        *(uint *)(lVar16 + 0x1c) = iVar1 * uVar9;
        FUN_108d667a8(lVar16,0,0);
        uVar10 = (uint)lVar16;
LAB_108d66434:
        if (uVar10 == 0) {
          lVar11 = param_1[1];
          FUN_108d66be4(lVar11,0);
          uVar10 = 0x65;
          if ((uint)lVar11 != 0) {
            uVar10 = (uint)lVar11;
          }
        }
      }
    }
  }
  else if (uVar10 == 0) {
    *(uint *)((long)param_1 + 0x34) = (uVar9 - *(uint *)(param_1 + 3)) + 1;
    *(uint *)(param_1 + 7) = uVar9;
    if (uVar9 < *(uint *)(param_1 + 3)) goto LAB_108d66128;
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      lVar11 = **(long **)(param_1[5] + 8);
      param_1[8] = *(long *)(lVar11 + 0x70);
      *(long **)(lVar11 + 0x70) = param_1;
      *(undefined4 *)((long)param_1 + 0x3c) = 1;
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
    }
  }
LAB_108d66454:
  if (!bVar6) {
    FUN_108d66d2c(param_1[5],0);
    FUN_108d66be4(param_1[5],0);
  }
  uVar9 = 7;
  if (uVar10 != 0xc0a) {
    uVar9 = uVar10;
  }
  *(uint *)(param_1 + 6) = uVar9;
LAB_108d66484:
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*pcRam00000001132979a8)();
  }
  lVar11 = param_1[5];
  if ((*(char *)(lVar11 + 0x11) != '\0') &&
     (iVar2 = *(int *)(lVar11 + 0x14) + -1, *(int *)(lVar11 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_108d7f5fc();
  }
  if (*(long *)(param_1[4] + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar9;
}



/* Entry: 108d664f8; end: 108d6651b;  */

void FUN_108d664f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(char *)((long)param_1 + 0x11) != '\0') &&
     (*(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1,
     *(char *)((long)param_1 + 0x12) == '\0')) {
    lVar2 = param_1[1];
    lVar1 = *(long *)(lVar2 + 0x58);
    if (lVar1 != 0) {
      (*pcRam00000001132979a0)();
      if ((int)lVar1 != 0) {
        for (lVar1 = param_1[4]; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
          if (*(char *)(lVar1 + 0x12) != '\0') {
            FUN_108d7f5fc(lVar1);
          }
        }
        lVar1 = param_1[1];
        if (*(long *)(lVar1 + 0x58) != 0) {
          (*pcRam0000000113297998)();
          lVar1 = param_1[1];
        }
        *(undefined8 *)(lVar1 + 8) = *param_1;
        do {
          *(undefined1 *)((long)param_1 + 0x12) = 1;
          do {
            param_1 = (undefined8 *)param_1[4];
            if (param_1 == (undefined8 *)0x0) {
              return;
            }
          } while (*(int *)((long)param_1 + 0x14) == 0);
          lVar1 = param_1[1];
          if (*(long *)(lVar1 + 0x58) != 0) {
            (*pcRam0000000113297998)();
            lVar1 = param_1[1];
          }
          *(undefined8 *)(lVar1 + 8) = *param_1;
        } while( true );
      }
      lVar2 = param_1[1];
    }
    *(undefined8 *)(lVar2 + 8) = *param_1;
    *(undefined1 *)((long)param_1 + 0x12) = 1;
    return;
  }
  return;
}



/* Entry: 108d6651c; end: 108d666f7;  */

ulong FUN_108d6651c(long param_1,ulong param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uStack_70;
  int iStack_64;
  
  lVar9 = *(long *)(param_1 + 8);
  uVar12 = **(ulong **)(lVar9 + 8);
  lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  iVar4 = *(int *)((long)*(ulong **)(lVar9 + 8) + 0x34);
  lVar15 = (long)iVar4;
  iVar2 = *(int *)(lVar11 + 0x34);
  iVar6 = iVar2 - *(int *)(lVar11 + 0x38);
  FUN_108d7f634();
  iVar1 = iVar2;
  if (iVar4 <= iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 == iVar4) {
    uVar14 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(uVar12 + 0x13) != '\0' || *(long *)(uVar12 + 0x120) != 0) {
      uVar10 = 8;
    }
    uVar14 = (ulong)uVar10;
  }
  if (iVar6 != (int)lVar9) {
    uVar14 = uVar12;
    iStack_64 = iVar2;
    FUN_108d78ba4(uVar12,&iStack_64,iVar6);
    uVar10 = 0;
    if (iStack_64 != iVar2) {
      uVar10 = 8;
    }
    if ((uint)uVar14 != 0) {
      uVar10 = (uint)uVar14;
    }
    uVar14 = (ulong)uVar10;
  }
  if (((int)uVar14 == 0) && (0 < iVar2)) {
    lVar11 = (long)iVar2;
    lVar16 = lVar11 * (param_2 & 0xffffffff);
    lVar9 = lVar16 - lVar11;
    uVar10 = uRam0000000113298da4;
    do {
      uStack_70 = 0;
      lVar13 = 0;
      if (lVar15 != 0) {
        lVar13 = lVar9 / lVar15;
      }
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x34);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar10 / uVar3;
      }
      if (uVar7 == (uint)lVar13) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar12;
        FUN_108d5fcfc(uVar12,(uint)lVar13 + 1,&uStack_70,0);
        uVar8 = uStack_70;
        if (((int)uVar14 == 0) && (uVar14 = uStack_70, FUN_108d5ffdc(), (int)uVar14 == 0)) {
          lVar5 = 0;
          if (lVar11 != 0) {
            lVar5 = lVar9 / lVar11;
          }
          lVar13 = *(long *)(uVar8 + 8) - lVar15 * lVar13;
          _memcpy(lVar13 + lVar9,param_3 + (lVar9 - lVar5 * lVar11),(long)iVar1);
          **(undefined1 **)(uVar8 + 0x10) = 0;
          if ((param_4 == 0) && (lVar9 == 0)) {
            uVar14 = 0;
            uVar10 = *(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x40);
            uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
            *(uint *)(lVar13 + 0x1c) = uVar10 >> 0x10 | uVar10 << 0x10;
          }
        }
        else if (uVar8 == 0) {
          return uVar14;
        }
        func_0x000108d787d8(uVar8);
        uVar10 = uRam0000000113298da4;
        if ((int)uVar14 != 0) {
          return uVar14;
        }
      }
      lVar9 = lVar9 + lVar15;
    } while (lVar9 < lVar16);
  }
  return uVar14;
}



/* Entry: 108d666f8; end: 108d667a7;  */

void FUN_108d666f8(long param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = 0x10;
  if (param_2 != 1) {
    uVar2 = 0;
  }
  *(ushort *)(lVar3 + 0x28) = *(ushort *)(lVar3 + 0x28) & 0xffef | uVar2;
  lVar4 = param_1;
  FUN_108d5f618(param_1,0);
  if (((int)lVar4 == 0) &&
     (((lVar4 = *(long *)(*(long *)(lVar3 + 0x18) + 0x50), param_2 != *(byte *)(lVar4 + 0x12) ||
       (param_2 != *(byte *)(lVar4 + 0x13))) && (FUN_108d5f618(param_1,2), (int)param_1 == 0)))) {
    iVar1 = (int)*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x68);
    FUN_108d5ffdc();
    if (iVar1 == 0) {
      *(char *)(lVar4 + 0x12) = (char)param_2;
      *(char *)(lVar4 + 0x13) = (char)param_2;
    }
  }
  *(ushort *)(lVar3 + 0x28) = *(ushort *)(lVar3 + 0x28) & 0xffef;
  return;
}



/* Entry: 108d667a8; end: 108d66b77;  */

long * FUN_108d667a8(long *param_1,char *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long *plStack_60;
  uint uStack_54;
  
  if (*(uint *)((long)param_1 + 0x2c) != 0) {
    return (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
  }
  if (*(byte *)((long)param_1 + 0x14) < 3) {
    return (long *)0x0;
  }
  if (*(char *)((long)param_1 + 0x13) == '\0') {
    plVar5 = param_1;
    if (param_1[0x27] == 0) {
      if ((*(char *)((long)param_1 + 0x16) == '\0') && (*(int *)((long)param_1 + 0x1c) != 0)) {
        plVar3 = param_1;
        FUN_108d5fcfc(param_1,1,&plStack_60,0);
        plVar9 = plStack_60;
        if (((int)plVar3 == 0) && (plVar3 = plStack_60, FUN_108d5ffdc(), (int)plVar3 == 0)) {
          FUN_108d7f0ac(plVar9);
          *(undefined1 *)((long)param_1 + 0x16) = 1;
        }
        if (plVar9 != (long *)0x0) {
          func_0x000108d787d8(plVar9);
        }
        if ((int)plVar3 != 0) {
          return plVar3;
        }
      }
      if ((param_2 != (char *)0x0) && (*(char *)((long)param_1 + 9) != '\x04')) {
        plVar9 = (long *)param_1[10];
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          *(undefined1 *)((long)param_1 + 0x17) = 1;
          cVar7 = *param_2;
          if (cVar7 == '\0') {
            uVar13 = 0;
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            uVar13 = 0;
            do {
              uVar13 = uVar13 + (int)cVar7;
              cVar7 = param_2[lVar14 + 1];
              lVar14 = lVar14 + 1;
            } while (cVar7 != '\0');
          }
          lVar12 = param_1[0xc];
          if (*(char *)((long)param_1 + 0xc) != '\0') {
            if (lVar12 != 0) {
              uVar8 = (ulong)*(uint *)(param_1 + 0x17);
              lVar2 = 0;
              if (uVar8 != 0) {
                lVar2 = (lVar12 + -1) / (long)uVar8;
              }
              lVar12 = uVar8 + uVar8 * lVar2;
            }
            param_1[0xc] = lVar12;
          }
          iVar10 = 0;
          if (*(int *)((long)param_1 + 0xbc) != 0) {
            iVar10 = iRam0000000113298da4 / *(int *)((long)param_1 + 0xbc);
          }
          uVar1 = (iVar10 + 1U & 0xff00ff00) >> 8 | (iVar10 + 1U & 0xff00ff) << 8;
          uStack_54 = uVar1 >> 0x10 | uVar1 << 0x10;
          (**(code **)(lVar6 + 0x18))(plVar9,&uStack_54,4,lVar12);
          if ((int)plVar9 != 0) {
            return plVar9;
          }
          plVar9 = (long *)param_1[10];
          (**(code **)(*plVar9 + 0x18))(plVar9,param_2,lVar14,lVar12 + 4);
          if ((int)plVar9 != 0) {
            return plVar9;
          }
          plVar9 = (long *)param_1[10];
          lVar6 = lVar12 + 4 + lVar14;
          uVar11 = (uint)lVar14;
          uVar1 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uStack_54 = uVar1 >> 0x10 | uVar1 << 0x10;
          (**(code **)(*plVar9 + 0x18))(plVar9,&uStack_54,4,lVar6);
          if ((int)plVar9 != 0) {
            return plVar9;
          }
          plVar9 = (long *)param_1[10];
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uStack_54 = uVar13 >> 0x10 | uVar13 << 0x10;
          (**(code **)(*plVar9 + 0x18))(plVar9,&uStack_54,4,lVar6 + 4);
          if ((int)plVar9 != 0) {
            return plVar9;
          }
          plVar9 = (long *)param_1[10];
          (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_10dfa09d0,8,lVar6 + 8);
          if ((int)plVar9 != 0) {
            return plVar9;
          }
          param_1[0xc] = param_1[0xc] + (ulong)(uVar11 + 0x14);
          plVar9 = (long *)param_1[10];
          (**(code **)(*plVar9 + 0x30))(plVar9,&plStack_60);
          if ((int)plVar9 != 0) {
            return plVar9;
          }
          if (param_1[0xc] < (long)plStack_60) {
            plVar9 = (long *)param_1[10];
            (**(code **)(*plVar9 + 0x20))();
            if ((int)plVar9 != 0) {
              return plVar9;
            }
          }
        }
      }
      plVar9 = param_1;
      FUN_108d7ecdc(param_1,0);
      if ((int)plVar9 != 0) {
        return plVar9;
      }
      uVar4 = *(undefined8 *)param_1[0x26];
      func_0x000108d785e8(uVar4);
      plVar9 = param_1;
      func_0x000108d7eefc(param_1,uVar4);
      if ((int)plVar9 != 0) {
        return plVar9;
      }
      plVar9 = (long *)param_1[0x26];
      while (*plVar9 != 0) {
        FUN_108d78b28();
      }
      uVar13 = *(uint *)((long)param_1 + 0x1c);
      if (*(uint *)((long)param_1 + 0x24) < uVar13) {
        iVar10 = 0;
        if (*(int *)((long)param_1 + 0xbc) != 0) {
          iVar10 = iRam0000000113298da4 / *(int *)((long)param_1 + 0xbc);
        }
        plVar9 = param_1;
        FUN_108d79268(param_1,uVar13 - (uVar13 == iVar10 + 1U));
        if ((int)plVar9 != 0) {
          return plVar9;
        }
      }
      if (param_3 != 0) goto LAB_108d667fc;
      FUN_108d66b78(param_1,param_2);
    }
    else {
      lVar6 = *(long *)param_1[0x26];
      func_0x000108d785e8();
      plStack_60 = (long *)0x0;
      if (lVar6 == 0) {
        FUN_108d5fcfc(param_1,1,&plStack_60,0);
        plVar9 = plStack_60;
        plStack_60[3] = 0;
        FUN_108d7e77c(param_1,plStack_60,*(undefined4 *)((long)param_1 + 0x1c),1);
        func_0x000108d787d8(plVar9);
        iVar10 = (int)plVar5;
      }
      else {
        FUN_108d7e77c(param_1,lVar6,*(undefined4 *)((long)param_1 + 0x1c),1);
        iVar10 = (int)plVar5;
      }
      if (iVar10 == 0) {
        plVar9 = (long *)param_1[0x26];
        while (*plVar9 != 0) {
          FUN_108d78b28();
        }
      }
    }
    if ((int)plVar5 != 0) {
      return plVar5;
    }
  }
  else {
    for (lVar6 = param_1[0xe]; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x40)) {
      *(undefined4 *)(lVar6 + 0x18) = 1;
    }
  }
LAB_108d667fc:
  if (param_1[0x27] != 0) {
    return (long *)0x0;
  }
  *(undefined1 *)((long)param_1 + 0x14) = 5;
  return (long *)0x0;
}



/* Entry: 108d66b78; end: 108d66be3;  */

void FUN_108d66b78(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if (((*plVar1 == 0) ||
      ((**(code **)(*plVar1 + 0x50))(plVar1,0x15,param_2), (int)plVar1 == 0xc || (int)plVar1 == 0))
     && (*(char *)(param_1 + 0xb) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000108d66be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x48) + 0x28))
              (*(long **)(param_1 + 0x48),*(undefined1 *)(param_1 + 0xf));
    return;
  }
  return;
}



/* Entry: 108d66be4; end: 108d66d2b;  */

ulong FUN_108d66be4(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  cVar3 = *(char *)(param_1 + 0x10);
  if (cVar3 == '\0') {
LAB_108d66d10:
    uVar5 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0'))
    {
      FUN_108d7f528(param_1);
      cVar3 = *(char *)(param_1 + 0x10);
    }
    if (cVar3 == '\x02') {
      puVar7 = *(ulong **)(param_1 + 8);
      uVar6 = *puVar7;
      uVar5 = (ulong)*(uint *)(uVar6 + 0x2c);
      if (*(uint *)(uVar6 + 0x2c) == 0) {
        if (((*(char *)(uVar6 + 0x14) == '\x02') && (*(char *)(uVar6 + 8) != '\0')) &&
           (*(char *)(uVar6 + 9) == '\x01')) {
          uVar5 = 0;
          uVar4 = 1;
        }
        else {
          *(int *)(uVar6 + 0x84) = *(int *)(uVar6 + 0x84) + 1;
          uVar5 = uVar6;
          FUN_108d76e44(uVar6,*(undefined1 *)(uVar6 + 0x17),1);
          uVar1 = (uint)uVar5 & 0xff;
          if (uVar1 != 0xd && uVar1 != 10) goto LAB_108d66cac;
          *(uint *)(uVar6 + 0x2c) = (uint)uVar5;
          uVar4 = 6;
        }
        *(undefined1 *)(uVar6 + 0x14) = uVar4;
      }
LAB_108d66cac:
      if ((param_2 != 0) || ((int)uVar5 == 0)) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        *(undefined1 *)((long)puVar7 + 0x24) = 1;
        FUN_108d77c44(puVar7[0xc]);
        puVar7[0xc] = 0;
        goto LAB_108d66ce0;
      }
      if (*(char *)(param_1 + 0x11) == '\0') {
        return uVar5;
      }
    }
    else {
LAB_108d66ce0:
      FUN_108d7cb70(param_1);
      if (*(char *)(param_1 + 0x11) == '\0') goto LAB_108d66d10;
      uVar5 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return uVar5;
}



/* Entry: 108d66d2c; end: 108d66fdb;  */

undefined8 * FUN_108d66d2c(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  if (*(char *)(param_1 + 0x10) != '\x02') {
    return (undefined8 *)0x0;
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  puVar8 = (undefined8 *)*puVar7;
  if (*(char *)((long)puVar7 + 0x21) != '\0') {
    puVar11 = (undefined8 *)puVar7[2];
    for (puVar5 = puVar11; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[2]) {
      *(byte *)((long)puVar5 + 0x6c) = *(byte *)((long)puVar5 + 0x6c) & 0xfb;
    }
    if (*(char *)((long)puVar7 + 0x22) == '\0') {
      uVar10 = *(uint *)(puVar7 + 8);
      if (uVar10 < 2) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(puVar7 + 7) / 5 + 1;
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = (uVar10 - 2) / uVar4;
        }
        uVar1 = 0;
        if (*(uint *)((long)puVar7 + 0x34) != 0) {
          uVar1 = uRam0000000113298da4 / *(uint *)((long)puVar7 + 0x34);
        }
        iVar6 = 2;
        if (uVar3 * uVar4 + 1 == uVar1) {
          iVar6 = 3;
        }
        uVar4 = iVar6 + uVar3 * uVar4;
      }
      if (uVar4 != uVar10) {
        uVar4 = 0;
        if (*(uint *)((long)puVar7 + 0x34) != 0) {
          uVar4 = uRam0000000113298da4 / *(uint *)((long)puVar7 + 0x34);
        }
        if (uVar10 != uVar4 + 1) {
          uVar4 = *(uint *)(*(long *)(puVar7[3] + 0x50) + 0x24);
          uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          puVar5 = puVar7;
          FUN_108d7f6d4(puVar7,uVar10,uVar4);
          uVar3 = (uint)puVar5;
          if (uVar3 <= uVar10) {
            puVar9 = (undefined8 *)0x0;
            if ((puVar11 != (undefined8 *)0x0) && (uVar3 < uVar10)) {
              func_0x000108d7ccac(puVar11,0,0);
              puVar9 = puVar11;
            }
            bVar2 = (int)puVar9 == 0;
            if (uVar3 < uVar10 && (int)puVar9 == 0) {
              do {
                puVar9 = puVar7;
                FUN_108d7f7ac(puVar7,puVar5,uVar10,1);
                uVar10 = uVar10 - 1;
                bVar2 = (int)puVar9 == 0;
                if (uVar10 <= uVar3) break;
              } while ((int)puVar9 == 0);
            }
            if ((int)puVar9 == 0x65) {
              bVar2 = true;
            }
            if ((uVar4 != 0) && (bVar2)) {
              puVar9 = *(undefined8 **)(puVar7[3] + 0x68);
              FUN_108d5ffdc();
              *(undefined4 *)(*(long *)(puVar7[3] + 0x50) + 0x20) = 0;
              *(undefined4 *)(*(long *)(puVar7[3] + 0x50) + 0x24) = 0;
              uVar10 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
              *(uint *)(*(long *)(puVar7[3] + 0x50) + 0x1c) = uVar10 >> 0x10 | uVar10 << 0x10;
              *(undefined1 *)((long)puVar7 + 0x23) = 1;
              *(uint *)(puVar7 + 8) = uVar3;
            }
            if ((int)puVar9 != 0) {
              func_0x000108d76d70(puVar8);
              goto LAB_108d66e88;
            }
            puVar8 = (undefined8 *)*puVar7;
            goto LAB_108d66dbc;
          }
        }
      }
      puVar9 = (undefined8 *)0xb;
      FUN_108d64c00(0xb,&UNK_10f51799f);
      goto LAB_108d66e88;
    }
  }
LAB_108d66dbc:
  if (*(char *)((long)puVar7 + 0x23) != '\0') {
    *(undefined4 *)((long)puVar8 + 0x1c) = *(undefined4 *)(puVar7 + 8);
  }
  FUN_108d667a8(puVar8,param_2,0);
  puVar9 = puVar8;
LAB_108d66e88:
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar6 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return puVar9;
}



/* Entry: 108d66fdc; end: 108d67143;  */

int FUN_108d66fdc(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  if (param_1 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    lVar7 = param_1[4];
    if (*(long *)(lVar7 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    lVar3 = param_1[5];
    if (*(char *)(lVar3 + 0x11) != '\0') {
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      if (*(char *)(lVar3 + 0x12) == '\0') {
        FUN_108d7f528();
      }
    }
    if ((*param_1 != 0) &&
       ((*(long *)(*param_1 + 0x18) == 0 || ((*pcRam0000000113297998)(), *param_1 != 0)))) {
      *(int *)(param_1[5] + 0x18) = *(int *)(param_1[5] + 0x18) + -1;
    }
    if (*(int *)((long)param_1 + 0x3c) != 0) {
      plVar2 = (long *)(**(long **)(param_1[5] + 8) + 0x70);
      do {
        plVar5 = plVar2;
        plVar6 = (long *)*plVar5;
        plVar2 = plVar6 + 8;
      } while (plVar6 != param_1);
      *plVar5 = param_1[8];
    }
    FUN_108d6007c(param_1[1],0,0);
    iVar8 = 0;
    if ((int)param_1[6] != 0x65) {
      iVar8 = (int)param_1[6];
    }
    lVar3 = *param_1;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x44) = iVar8;
      lVar4 = *(long *)(lVar3 + 0x140);
      if (lVar4 != 0) {
        if ((*(ushort *)(lVar4 + 8) & 0x2460) == 0) {
          *(undefined2 *)(lVar4 + 8) = 1;
        }
        else {
          func_0x000108d82720(lVar4);
          lVar3 = *param_1;
        }
      }
      FUN_108d67144(lVar3);
    }
    lVar3 = param_1[5];
    if (*(char *)(lVar3 + 0x11) != '\0') {
      iVar1 = *(int *)(lVar3 + 0x14) + -1;
      *(int *)(lVar3 + 0x14) = iVar1;
      if (iVar1 == 0) {
        FUN_108d7f5fc();
      }
    }
    if (*param_1 != 0) {
      func_0x000108d5e198(param_1);
    }
    FUN_108d67144(lVar7);
  }
  return iVar8;
}



/* Entry: 108d67144; end: 108d673fb;  */

/* WARNING: Possible PIC construction at 0x000108d673e0: Changing call to branch */

void FUN_108d67144(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 unaff_x21;
  long lVar5;
  long *plVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((*(int *)((long)param_1 + 0x5c) != 0x64cffc7f) ||
     (plVar2 = param_1, FUN_108dcc96c(), (int)plVar2 != 0)) {
    if (param_1[3] == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000108d6719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001132979a8)();
    return;
  }
  FUN_108d8145c(param_1,0);
  FUN_108d815bc(param_1);
  if (0 < (int)param_1[5]) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      lVar7 = param_1[4];
      lVar4 = lVar7 + lVar3;
      if (*(long *)(lVar4 + 8) != 0) {
        FUN_108d618d8();
        *(undefined8 *)(lVar4 + 8) = 0;
        if (lVar5 != 1) {
          *(undefined8 *)(lVar7 + lVar3 + 0x18) = 0;
        }
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar5 < (int)param_1[5]);
  }
  if (*(long *)(param_1[4] + 0x38) != 0) {
    func_0x000108d8e2fc();
  }
  func_0x000108d960a8(param_1);
  FUN_108d960fc(param_1);
  lVar5 = 0;
  plVar2 = param_1 + 0x3b;
  do {
    lVar3 = plVar2[lVar5];
    while (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x38);
      lVar4 = lVar3;
      do {
        FUN_108dcc9b0(param_1,*(undefined8 *)(lVar4 + 0x40));
        lVar8 = *(long *)(lVar4 + 0x10);
        func_0x000108d60660(param_1,lVar4);
        lVar4 = lVar8;
        lVar3 = lVar7;
      } while (lVar8 != 0);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x17);
  for (plVar6 = (long *)param_1[0x53]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    lVar5 = 0;
    lVar3 = plVar6[2];
    do {
      lVar4 = lVar3 + lVar5;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar4 + 0x10));
      }
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != 0x78);
    func_0x000108d60660(param_1,lVar3);
    plVar2 = (long *)0x78;
  }
  FUN_108d8e3c8(param_1 + 0x52);
  for (plVar6 = (long *)param_1[0x36]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    lVar5 = plVar6[2];
    if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
    }
    func_0x000108d60660(param_1,lVar5);
  }
  FUN_108d8e3c8(param_1 + 0x35);
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  lVar5 = param_1[0x28];
  if (lVar5 != 0) {
    if ((*(ushort *)(lVar5 + 8) & 0x2460) == 0) {
      *(undefined2 *)(lVar5 + 8) = 1;
    }
    else {
      func_0x000108d82720();
      lVar5 = param_1[0x28];
    }
  }
  FUN_108d6d618(lVar5);
  if (0 < (int)param_1[0x17]) {
    lVar5 = 0;
    do {
      (**(code **)(*param_1 + 0x60))(*param_1,*(undefined8 *)(param_1[0x18] + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x17]);
  }
  func_0x000108d60660(param_1,param_1[0x18]);
  *(undefined4 *)((long)param_1 + 0x5c) = 0xb5357930;
  func_0x000108d60660(param_1,*(undefined8 *)(param_1[4] + 0x38));
  if (param_1[3] == 0) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0x9f3c2d33;
  }
  else {
    (*pcRam00000001132979a8)();
    *(undefined4 *)((long)param_1 + 0x5c) = 0x9f3c2d33;
    if (param_1[3] != 0) {
      (*pcRam0000000113297990)();
    }
  }
  plVar6 = param_1;
  if (*(char *)((long)param_1 + 0x153) != '\0') {
    unaff_x30 = 0x108d673e4;
    unaff_x21 = 0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    plVar6 = (long *)param_1[0x2e];
    unaff_x19 = param_1;
    unaff_x20 = 0x9f3c2d33;
    unaff_x22 = plVar2;
    unaff_x29 = puVar1;
  }
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (plVar6 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar2 = plVar6;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(plVar6);
    plVar6 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6);
  return;
}



/* Entry: 108d673fc; end: 108d6743f;  */

undefined4 FUN_108d673fc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* Entry: 108d67440; end: 108d676df;  */

uint FUN_108d67440(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      uVar2 = 0x15;
      FUN_108d64c00(0x15,&UNK_10f517ab1);
      FUN_108d64c00(0x15,&UNK_10f51b96f);
    }
    else {
      if (*(long *)(lVar1 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      func_0x000108d674fc();
      if (((uint)param_1 == 0xc0a) || (*(char *)(lVar1 + 0x51) != '\0')) {
        FUN_108d80e10(lVar1);
        uVar2 = 7;
      }
      else {
        uVar2 = *(uint *)(lVar1 + 0x48) & (uint)param_1;
      }
      FUN_108d67144(lVar1);
    }
  }
  return uVar2;
}



/* Entry: 108d676e0; end: 108d677b3;  */

undefined8 FUN_108d676e0(long *param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(*param_1 + 0x18);
  if (lVar3 != 0) {
    (*pcRam0000000113297998)(lVar3);
  }
  sVar1 = (short)param_1[0xf];
  if (0 < sVar1) {
    lVar4 = 0;
    lVar5 = 0;
    lVar2 = param_1[0xd];
    do {
      if (((*(ushort *)(lVar2 + lVar4 + 8) & 0x2460) != 0) || (*(int *)(lVar2 + lVar4 + 0x20) != 0))
      {
        FUN_108d826d0();
        lVar2 = param_1[0xd];
        sVar1 = (short)param_1[0xf];
      }
      *(undefined2 *)(lVar2 + lVar4 + 8) = 1;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar5 < sVar1);
  }
  if (((*(ushort *)((long)param_1 + 0x8c) >> 8 & 1) != 0) && (*(int *)((long)param_1 + 0x104) != 0))
  {
    *(ushort *)((long)param_1 + 0x8c) = *(ushort *)((long)param_1 + 0x8c) | 8;
  }
  if (lVar3 != 0) {
    (*pcRam00000001132979a8)(lVar3);
  }
  return 0;
}



/* Entry: 108d677b4; end: 108d678a7;  */

/* WARNING: Removing unreachable block (ram,0x000108d831d4) */
/* WARNING: Removing unreachable block (ram,0x000108d831dc) */

undefined8 FUN_108d677b4(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)(param_1 + 8) & 0x12) != 0) {
    func_0x000108d6781c(param_1);
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x10;
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
    }
    return uVar2;
  }
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 8) ^ 0xffff) & 0x202) == 0) && (*(char *)(param_1 + 10) == '\x01'))
    {
      return *(undefined8 *)(param_1 + 0x10);
    }
    if ((*(ushort *)(param_1 + 8) & 1) == 0) {
      uVar1 = *(ushort *)(param_1 + 8);
      if ((uVar1 & 0x12) == 0) {
        FUN_108d832dc(param_1,1,0);
      }
      else {
        *(ushort *)(param_1 + 8) = uVar1 | 2;
        if ((uVar1 >> 0xe & 1) != 0) {
          func_0x000108d6781c(param_1);
        }
        if ((*(char *)(param_1 + 10) != '\x01') && ((*(ushort *)(param_1 + 8) >> 1 & 1) != 0)) {
          FUN_108d833e4(param_1);
        }
        if ((*(ushort *)(param_1 + 8) & 0x202) == 2) {
          FUN_108d8393c(param_1);
        }
      }
      if (*(char *)(param_1 + 10) == '\x01') {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 108d678a8; end: 108d678af;  */

void FUN_108d678a8(long param_1)

{
  if ((*(ushort *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_108d67a14(param_1,1);
  }
  return;
}



/* Entry: 108d678b0; end: 108d678f3;  */

void FUN_108d678b0(long param_1)

{
  if ((*(ushort *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_108d67a14();
  }
  return;
}



/* Entry: 108d678f4; end: 108d678ff;  */

void FUN_108d678f4(long param_1)

{
  if ((*(ushort *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_108d67a14(param_1,2);
  }
  return;
}



/* Entry: 108d67900; end: 108d67a13;  */

double FUN_108d67900(double *param_1)

{
  ushort uVar1;
  double dStack_18;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((uVar1 >> 3 & 1) != 0) {
    return *param_1;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 & 0x12) != 0) {
      FUN_108d82a1c(param_1[2],&dStack_18,*(undefined4 *)((long)param_1 + 0xc),
                    *(undefined1 *)((long)param_1 + 10));
      return dStack_18;
    }
    return 0.0;
  }
  return (double)(long)*param_1;
}



/* Entry: 108d67a14; end: 108d67a8b;  */

double FUN_108d67a14(double *param_1)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  double dStack_18;
  
  uVar2 = *(ushort *)(param_1 + 1);
  if ((uVar2 >> 2 & 1) != 0) {
    return *param_1;
  }
  if ((uVar2 >> 3 & 1) == 0) {
    if ((uVar2 & 0x12) != 0) {
      dStack_18 = 0.0;
      func_0x000108d82f50(param_1[2],&dStack_18,*(undefined4 *)((long)param_1 + 0xc),
                          *(undefined1 *)((long)param_1 + 10));
      return dStack_18;
    }
    return 0.0;
  }
  dVar3 = *param_1;
  if (-9.223372036854776e+18 < dVar3) {
    dVar1 = NAN;
    if (dVar3 < 9.223372036854776e+18) {
      dVar1 = (double)(long)dVar3;
    }
    return dVar1;
  }
  return -0.0;
}



/* Entry: 108d67a8c; end: 108d67aeb;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108d67a8c(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  FUN_108d67c04();
  if ((int)uVar2 == 0x12) {
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = 0xf51745e;
    uVar2 = *param_1;
    if (*(long *)(uVar2 + 0x28) == 0) {
      iVar4 = 1000000000;
    }
    else {
      iVar4 = *(int *)(*(long *)(uVar2 + 0x28) + 0x68);
    }
    _strlen();
    uVar1 = uVar1 & 0x3fffffff;
    if (iVar4 < (int)uVar1) {
      uVar1 = iVar4 + 1;
    }
    if (((*(ushort *)(uVar2 + 8) & 0x2460) != 0) || (*(int *)(uVar2 + 0x20) != 0)) {
      FUN_108d826d0(uVar2);
    }
    *(undefined **)(uVar2 + 0x10) = &DAT_10f51745e;
    *(undefined8 *)(uVar2 + 0x30) = 0;
    *(uint *)(uVar2 + 0xc) = uVar1;
    *(undefined2 *)(uVar2 + 8) = 0xa02;
    *(undefined1 *)(uVar2 + 10) = 1;
    uVar3 = 0x12;
    if ((int)uVar1 <= iVar4) {
      uVar3 = 0;
    }
    return (ulong)uVar3;
  }
  return uVar2;
}



/* Entry: 108d67aec; end: 108d67b17;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108d67aec(ulong *param_1,ulong param_2,ulong param_3,code *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 >> 0x1f == 0) {
    uVar1 = *param_1;
    FUN_108d67c04();
    if ((int)uVar1 != 0x12) {
      return uVar1;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = *param_1;
  }
  else {
    if ((code *)0x1 < param_4 + 1) {
      (*param_4)(param_2);
    }
    if (param_1 == (ulong *)0x0) {
      return param_2;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    *(undefined1 *)((long)param_1 + 0x29) = 1;
    uVar1 = *param_1;
  }
  uVar2 = 0xf51745e;
  if (*(long *)(uVar1 + 0x28) == 0) {
    iVar4 = 1000000000;
  }
  else {
    iVar4 = *(int *)(*(long *)(uVar1 + 0x28) + 0x68);
  }
  _strlen();
  uVar2 = uVar2 & 0x3fffffff;
  if (iVar4 < (int)uVar2) {
    uVar2 = iVar4 + 1;
  }
  if (((*(ushort *)(uVar1 + 8) & 0x2460) != 0) || (*(int *)(uVar1 + 0x20) != 0)) {
    FUN_108d826d0(uVar1);
  }
  *(undefined **)(uVar1 + 0x10) = &DAT_10f51745e;
  *(undefined8 *)(uVar1 + 0x30) = 0;
  *(uint *)(uVar1 + 0xc) = uVar2;
  *(undefined2 *)(uVar1 + 8) = 0xa02;
  *(undefined1 *)(uVar1 + 10) = 1;
  uVar3 = 0x12;
  if ((int)uVar2 <= iVar4) {
    uVar3 = 0;
  }
  return (ulong)uVar3;
}



/* Entry: 108d67b18; end: 108d67b7f;  */

/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c44) */
/* WARNING: Removing unreachable block (ram,0x000108d67ca0) */
/* WARNING: Removing unreachable block (ram,0x000108d67c54) */

ulong FUN_108d67b18(ulong param_1,code *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  if ((code *)0x1 < param_2 + 1) {
    (*param_2)();
  }
  if (param_3 == (long *)0x0) {
    return param_1;
  }
  *(undefined4 *)((long)param_3 + 0x24) = 0x12;
  *(undefined1 *)((long)param_3 + 0x29) = 1;
  uVar1 = 0xf51745e;
  lVar2 = *param_3;
  if (*(long *)(lVar2 + 0x28) == 0) {
    iVar4 = 1000000000;
  }
  else {
    iVar4 = *(int *)(*(long *)(lVar2 + 0x28) + 0x68);
  }
  _strlen();
  uVar1 = uVar1 & 0x3fffffff;
  if (iVar4 < (int)uVar1) {
    uVar1 = iVar4 + 1;
  }
  if (((*(ushort *)(lVar2 + 8) & 0x2460) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
    FUN_108d826d0(lVar2);
  }
  *(undefined **)(lVar2 + 0x10) = &DAT_10f51745e;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(uint *)(lVar2 + 0xc) = uVar1;
  *(undefined2 *)(lVar2 + 8) = 0xa02;
  *(undefined1 *)(lVar2 + 10) = 1;
  uVar3 = 0x12;
  if ((int)uVar1 <= iVar4) {
    uVar3 = 0;
  }
  return (ulong)uVar3;
}



/* Entry: 108d67b80; end: 108d67b87;  */

void FUN_108d67b80(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  if ((*(ushort *)(puVar1 + 1) & 0x2460) == 0) {
    *(undefined2 *)(puVar1 + 1) = 1;
  }
  else {
    func_0x000108d82720(puVar1);
  }
  *puVar1 = param_1;
  *(undefined2 *)(puVar1 + 1) = 8;
  return;
}



/* Entry: 108d67b88; end: 108d67c03;  */

void FUN_108d67b88(undefined8 param_1,undefined8 *param_2)

{
  if ((*(ushort *)(param_2 + 1) & 0x2460) == 0) {
    *(undefined2 *)(param_2 + 1) = 1;
  }
  else {
    func_0x000108d82720(param_2);
  }
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 8;
  return;
}



/* Entry: 108d67c04; end: 108d67edf;  */

undefined4 FUN_108d67c04(long param_1,ulong param_2,uint param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  ushort uVar11;
  undefined1 uVar12;
  int iVar13;
  ushort uVar14;
  long lVar15;
  
  if (param_2 == 0) {
    if ((*(ushort *)(param_1 + 8) & 0x2460) != 0) {
      func_0x000108d82720(param_1);
      return 0;
    }
    *(undefined2 *)(param_1 + 8) = 1;
    return 0;
  }
  lVar15 = *(long *)(param_1 + 0x28);
  if (lVar15 == 0) {
    iVar13 = 1000000000;
  }
  else {
    iVar13 = *(int *)(lVar15 + 0x68);
  }
  uVar7 = 0x10;
  if (param_4 != 0) {
    uVar7 = 2;
  }
  if ((int)param_3 < 0) {
    if (param_4 == 1) {
      uVar5 = param_2;
      _strlen();
      param_3 = (uint)uVar5 & 0x3fffffff;
      if (iVar13 < (int)param_3) {
        param_3 = iVar13 + 1;
      }
    }
    else {
      param_3 = 0;
      if (-1 < iVar13) {
        pcVar10 = (char *)(param_2 + 1);
        do {
          if (*pcVar10 == '\0' && pcVar10[-1] == '\0') break;
          param_3 = param_3 + 2;
          pcVar10 = pcVar10 + 2;
        } while ((int)param_3 <= iVar13);
      }
    }
    uVar7 = uVar7 | 0x200;
  }
  uVar14 = (ushort)uVar7;
  if (param_5 == (code *)0xffffffffffffffff) {
    uVar8 = 1;
    if (param_4 != 1) {
      uVar8 = 2;
    }
    if (iVar13 < (int)param_3) {
      return 0x12;
    }
    iVar1 = (uVar8 & (int)(uVar7 << 0x16) >> 0x1f) + param_3;
    iVar2 = iVar1;
    if (iVar1 < 0x21) {
      iVar2 = 0x20;
    }
    if (iVar2 <= *(int *)(param_1 + 0x20)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xd;
LAB_108d67dfc:
      _memcpy(uVar6,param_2,(long)iVar1);
      goto LAB_108d67e08;
    }
    lVar15 = param_1;
    FUN_108d82884(param_1,iVar2,0);
    if ((int)lVar15 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      goto LAB_108d67dfc;
    }
LAB_108d67e70:
    uVar9 = 7;
  }
  else {
    if (param_5 == FUN_108d627f0) {
      if (((*(ushort *)(param_1 + 8) & 0x2460) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
        FUN_108d826d0(param_1);
        lVar15 = *(long *)(param_1 + 0x28);
      }
      *(ulong *)(param_1 + 0x10) = param_2;
      *(ulong *)(param_1 + 0x18) = param_2;
      if (((lVar15 == 0) || (param_2 < *(ulong *)(lVar15 + 0x170))) ||
         (*(ulong *)(lVar15 + 0x178) <= param_2)) {
        (*pcRam0000000113297950)();
        uVar7 = (uint)param_2;
      }
      else {
        uVar7 = (uint)*(ushort *)(lVar15 + 0x150);
      }
      *(uint *)(param_1 + 0x20) = uVar7;
    }
    else {
      if (((*(ushort *)(param_1 + 8) & 0x2460) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
        FUN_108d826d0(param_1);
      }
      *(ulong *)(param_1 + 0x10) = param_2;
      *(code **)(param_1 + 0x30) = param_5;
      uVar11 = 0x800;
      if (param_5 != (code *)0x0) {
        uVar11 = 0x400;
      }
      uVar14 = uVar14 | uVar11;
    }
LAB_108d67e08:
    *(uint *)(param_1 + 0xc) = param_3;
    *(ushort *)(param_1 + 8) = uVar14;
    uVar7 = param_4;
    if (param_4 < 2) {
      uVar7 = 1;
    }
    *(char *)(param_1 + 10) = (char)uVar7;
    if ((1 < param_4) && (1 < (int)param_3)) {
      cVar3 = **(char **)(param_1 + 0x10);
      cVar4 = (*(char **)(param_1 + 0x10))[1];
      if ((cVar3 == -1) && (cVar4 == -2)) {
        uVar12 = 2;
      }
      else {
        if ((cVar3 != -2) || (cVar4 != -1)) goto LAB_108d67ebc;
        uVar12 = 3;
      }
      lVar15 = param_1;
      func_0x000108d8323c();
      if ((int)lVar15 != 0) goto LAB_108d67e70;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
      _memmove(*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x10) + 2);
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0xc)) = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0xc) + 1) = 0;
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x200;
      *(undefined1 *)(param_1 + 10) = uVar12;
    }
LAB_108d67ebc:
    uVar9 = 0x12;
    if ((int)param_3 <= iVar13) {
      uVar9 = 0;
    }
  }
  return uVar9;
}



/* Entry: 108d67ee0; end: 108d67fe3;  */

/* WARNING: Removing unreachable block (ram,0x000108d67ce4) */
/* WARNING: Removing unreachable block (ram,0x000108d67d00) */
/* WARNING: Removing unreachable block (ram,0x000108d67d04) */
/* WARNING: Removing unreachable block (ram,0x000108d67d0c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d14) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67c88) */
/* WARNING: Removing unreachable block (ram,0x000108d67c98) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67e14) */

undefined4 FUN_108d67ee0(long *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 uVar11;
  int iVar12;
  
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  lVar8 = *param_1;
  if (param_2 == 0) {
    if ((*(ushort *)(lVar8 + 8) & 0x2460) != 0) {
      func_0x000108d82720(lVar8);
      return 0;
    }
    *(undefined2 *)(lVar8 + 8) = 1;
    return 0;
  }
  if (*(long *)(lVar8 + 0x28) == 0) {
    iVar12 = 1000000000;
  }
  else {
    iVar12 = *(int *)(*(long *)(lVar8 + 0x28) + 0x68);
  }
  iVar5 = 2;
  if (param_3 < 0) {
    param_3 = 0;
    if (-1 < iVar12) {
      pcVar10 = (char *)(param_2 + 1);
      do {
        if (*pcVar10 == '\0' && pcVar10[-1] == '\0') break;
        param_3 = param_3 + 2;
        pcVar10 = pcVar10 + 2;
      } while (param_3 <= iVar12);
    }
    iVar5 = 0x202;
  }
  if (iVar12 < param_3) {
    return 0x12;
  }
  iVar1 = ((iVar5 << 0x16) >> 0x1f & 2U) + param_3;
  iVar2 = iVar1;
  if (iVar1 < 0x21) {
    iVar2 = 0x20;
  }
  if (*(int *)(lVar8 + 0x20) < iVar2) {
    lVar6 = lVar8;
    FUN_108d82884(lVar8,iVar2,0);
    if ((int)lVar6 == 0) {
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      goto LAB_108d67dfc;
    }
LAB_108d67e70:
    uVar9 = 7;
  }
  else {
    uVar7 = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar8 + 0x10) = uVar7;
    *(ushort *)(lVar8 + 8) = *(ushort *)(lVar8 + 8) & 0xd;
LAB_108d67dfc:
    _memcpy(uVar7,param_2,(long)iVar1);
    *(int *)(lVar8 + 0xc) = param_3;
    *(short *)(lVar8 + 8) = (short)iVar5;
    *(undefined1 *)(lVar8 + 10) = 2;
    if (1 < param_3) {
      cVar3 = **(char **)(lVar8 + 0x10);
      cVar4 = (*(char **)(lVar8 + 0x10))[1];
      if ((cVar3 == -1) && (cVar4 == -2)) {
        uVar11 = 2;
      }
      else {
        if ((cVar3 != -2) || (cVar4 != -1)) goto LAB_108d67ebc;
        uVar11 = 3;
      }
      lVar6 = lVar8;
      func_0x000108d8323c();
      if ((int)lVar6 != 0) goto LAB_108d67e70;
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + -2;
      _memmove(*(long *)(lVar8 + 0x10),*(long *)(lVar8 + 0x10) + 2);
      *(undefined1 *)(*(long *)(lVar8 + 0x10) + (long)*(int *)(lVar8 + 0xc)) = 0;
      *(undefined1 *)(*(long *)(lVar8 + 0x10) + (long)*(int *)(lVar8 + 0xc) + 1) = 0;
      *(ushort *)(lVar8 + 8) = *(ushort *)(lVar8 + 8) | 0x200;
      *(undefined1 *)(lVar8 + 10) = uVar11;
    }
LAB_108d67ebc:
    uVar9 = 0x12;
    if (param_3 <= iVar12) {
      uVar9 = 0;
    }
  }
  return uVar9;
}



/* Entry: 108d67fe4; end: 108d68067;  */

undefined8 FUN_108d67fe4(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(ushort *)(param_1 + 1) & 0x2460) != 0) {
    func_0x000108d82720(param_1);
  }
  uVar4 = param_2[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  uVar1 = *(ushort *)(param_1 + 1);
  uVar3 = uVar1 & 0xfbff;
  *(ushort *)(param_1 + 1) = uVar3;
  if (((uVar1 & 0x12) != 0) && ((*(ushort *)(param_2 + 1) >> 0xb & 1) == 0)) {
    *(ushort *)(param_1 + 1) = uVar3 | 0x1000;
    uVar3 = *(ushort *)(param_1 + 1);
    if ((uVar3 >> 0xe & 1) != 0) {
      func_0x000108d6781c(param_1);
      uVar3 = *(ushort *)(param_1 + 1);
    }
    if (((uVar3 & 0x12) != 0) && ((*(int *)(param_1 + 4) == 0 || (param_1[2] != param_1[3])))) {
      puVar2 = param_1;
      FUN_108d82884(param_1,*(int *)((long)param_1 + 0xc) + 2,1);
      if ((int)puVar2 != 0) {
        return 7;
      }
      *(undefined1 *)(param_1[2] + (long)*(int *)((long)param_1 + 0xc)) = 0;
      *(undefined1 *)(param_1[2] + (long)*(int *)((long)param_1 + 0xc) + 1) = 0;
      uVar3 = *(ushort *)(param_1 + 1) | 0x200;
    }
    *(ushort *)(param_1 + 1) = uVar3 & 0xefff;
    return 0;
  }
  return 0;
}



/* Entry: 108d68068; end: 108d6806f;  */

void FUN_108d68068(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  if (((puVar1[2] & 0x2460) != 0) || (puVar1[8] != 0)) {
    FUN_108d826d0(puVar1);
  }
  *(undefined2 *)(puVar1 + 2) = 0x4010;
  puVar1[3] = 0;
  *puVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(undefined1 *)((long)puVar1 + 10) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 108d68070; end: 108d680cf;  */

void FUN_108d68070(uint *param_1,uint param_2)

{
  if (((param_1[2] & 0x2460) != 0) || (param_1[8] != 0)) {
    FUN_108d826d0(param_1);
  }
  *(undefined2 *)(param_1 + 2) = 0x4010;
  param_1[3] = 0;
  *param_1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(undefined1 *)((long)param_1 + 10) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 108d680d0; end: 108d68163;  */

/* WARNING: Removing unreachable block (ram,0x000108d67d3c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d34) */
/* WARNING: Removing unreachable block (ram,0x000108d67d48) */
/* WARNING: Removing unreachable block (ram,0x000108d67da8) */
/* WARNING: Removing unreachable block (ram,0x000108d67dbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67de4) */
/* WARNING: Removing unreachable block (ram,0x000108d67dcc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ddc) */
/* WARNING: Removing unreachable block (ram,0x000108d67dfc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d50) */
/* WARNING: Removing unreachable block (ram,0x000108d67d54) */
/* WARNING: Removing unreachable block (ram,0x000108d67d5c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d68) */
/* WARNING: Removing unreachable block (ram,0x000108d67d70) */
/* WARNING: Removing unreachable block (ram,0x000108d67d7c) */
/* WARNING: Removing unreachable block (ram,0x000108d67d90) */
/* WARNING: Removing unreachable block (ram,0x000108d67d88) */
/* WARNING: Removing unreachable block (ram,0x000108d67da0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb0) */
/* WARNING: Removing unreachable block (ram,0x000108d67cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d67cbc) */
/* WARNING: Removing unreachable block (ram,0x000108d67ccc) */
/* WARNING: Removing unreachable block (ram,0x000108d67d28) */
/* WARNING: Removing unreachable block (ram,0x000108d67e24) */
/* WARNING: Removing unreachable block (ram,0x000108d67e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d67e40) */
/* WARNING: Removing unreachable block (ram,0x000108d67e50) */
/* WARNING: Removing unreachable block (ram,0x000108d67e58) */
/* WARNING: Removing unreachable block (ram,0x000108d67e60) */
/* WARNING: Removing unreachable block (ram,0x000108d67e48) */
/* WARNING: Removing unreachable block (ram,0x000108d67e64) */
/* WARNING: Removing unreachable block (ram,0x000108d67e70) */
/* WARNING: Removing unreachable block (ram,0x000108d67e78) */

ulong FUN_108d680d0(ulong *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  
  *(uint *)((long)param_1 + 0x24) = param_2;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  uVar4 = *param_1;
  if ((*(byte *)(uVar4 + 8) & 1) != 0) {
    if (param_2 == 0x204) {
      puVar5 = &UNK_10f51b857;
    }
    else {
      param_2 = param_2 & 0xff;
      puVar5 = &UNK_10f51b849;
      if ((param_2 < 0x1b) && (puVar5 = &UNK_10f51b849, param_2 != 2)) {
        puVar5 = (&PTR_DAT_110ac5208)[param_2];
      }
    }
    if (puVar5 == (undefined *)0x0) {
      if ((*(ushort *)(uVar4 + 8) & 0x2460) == 0) {
        uVar3 = 0;
        *(undefined2 *)(uVar4 + 8) = 1;
      }
      else {
        func_0x000108d82720(uVar4);
        uVar3 = 0;
      }
    }
    else {
      if (*(long *)(uVar4 + 0x28) == 0) {
        iVar7 = 1000000000;
      }
      else {
        iVar7 = *(int *)(*(long *)(uVar4 + 0x28) + 0x68);
      }
      puVar2 = puVar5;
      _strlen();
      uVar1 = (uint)puVar2 & 0x3fffffff;
      if (iVar7 < (int)uVar1) {
        uVar1 = iVar7 + 1;
      }
      if (((*(ushort *)(uVar4 + 8) & 0x2460) != 0) || (*(int *)(uVar4 + 0x20) != 0)) {
        FUN_108d826d0(uVar4);
      }
      *(undefined **)(uVar4 + 0x10) = puVar5;
      *(undefined8 *)(uVar4 + 0x30) = 0;
      *(uint *)(uVar4 + 0xc) = uVar1;
      *(undefined2 *)(uVar4 + 8) = 0xa02;
      *(undefined1 *)(uVar4 + 10) = 1;
      uVar6 = 0x12;
      if ((int)uVar1 <= iVar7) {
        uVar6 = 0;
      }
      uVar3 = (ulong)uVar6;
    }
    return uVar3;
  }
  return uVar4;
}



/* Entry: 108d68164; end: 108d681bf;  */

void FUN_108d68164(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((*(ushort *)(lVar1 + 8) & 0x2460) == 0) {
    *(undefined2 *)(lVar1 + 8) = 1;
  }
  else {
    func_0x000108d82720();
    lVar1 = *param_1;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 7;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  *(undefined1 *)(*(long *)(lVar1 + 0x28) + 0x51) = 1;
  return;
}



/* Entry: 108d681c0; end: 108d68d57;  */

uint FUN_108d681c0(long *param_1)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  char *pcVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined1 *puVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  undefined8 uVar29;
  byte *pbVar30;
  int *piVar31;
  long lVar32;
  undefined8 *puVar33;
  long lStack_198;
  long alStack_190 [38];
  
  if (param_1 == (long *)0x0) {
    puVar6 = &UNK_10f517b50;
  }
  else {
    lVar24 = *param_1;
    if (lVar24 != 0) {
      if (*(long *)(lVar24 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      iVar25 = 0;
      uVar11 = *(ushort *)((long)param_1 + 0x8c) & 0xfdff;
      do {
        *(ushort *)((long)param_1 + 0x8c) = uVar11;
        do {
          if (*(int *)((long)param_1 + 0x44) != -0x420df25d) {
            func_0x000108d67558(param_1);
          }
          puVar33 = (undefined8 *)*param_1;
          if (*(char *)((long)puVar33 + 0x51) != '\0') {
            uVar4 = 7;
            goto LAB_108d68cf4;
          }
          uVar11 = *(ushort *)((long)param_1 + 0x8c);
          if ((int)param_1[0x10] < 1) {
            if ((uVar11 >> 3 & 1) == 0) {
              if ((int)param_1[0x10] < 0) {
                iVar12 = *(int *)((long)puVar33 + 0xa4);
                if (iVar12 == 0) {
                  *(undefined4 *)(puVar33 + 0x29) = 0;
                }
                if ((puVar33[0x1b] != 0) && (*(char *)((long)puVar33 + 0xa1) == '\0')) {
                  func_0x000108d83a0c(*puVar33,param_1 + 0x17);
                  iVar12 = *(int *)((long)puVar33 + 0xa4);
                }
                *(int *)((long)puVar33 + 0xa4) = iVar12 + 1;
                uVar11 = *(ushort *)((long)param_1 + 0x8c);
                if ((uVar11 >> 6 & 1) == 0) {
                  *(int *)((long)puVar33 + 0xac) = *(int *)((long)puVar33 + 0xac) + 1;
                  uVar11 = *(ushort *)((long)param_1 + 0x8c);
                }
                if ((uVar11 >> 7 & 1) != 0) {
                  *(int *)(puVar33 + 0x15) = *(int *)(puVar33 + 0x15) + 1;
                  uVar11 = *(ushort *)((long)param_1 + 0x8c);
                }
                *(undefined4 *)(param_1 + 0x10) = 0;
              }
              goto LAB_108d6824c;
            }
            uVar4 = 1;
            uVar13 = 0x11;
            goto LAB_108d6859c;
          }
LAB_108d6824c:
          if ((uVar11 & 3) == 0) {
            *(int *)(puVar33 + 0x16) = *(int *)(puVar33 + 0x16) + 1;
            plVar5 = param_1;
            FUN_108d83a7c();
            *(int *)(puVar33 + 0x16) = *(int *)(puVar33 + 0x16) + -1;
            uVar4 = (uint)plVar5;
            if (uVar4 != 100) goto LAB_108d68420;
            goto LAB_108d68558;
          }
          lVar28 = *param_1;
          lVar26 = param_1[2];
          plVar5 = (long *)(lVar26 + 0x38);
          FUN_108d712cc(plVar5,8);
          param_1[5] = 0;
          if (*(int *)((long)param_1 + 0x84) == 7) {
            uVar4 = 1;
            *(undefined1 *)(lVar28 + 0x51) = 1;
            goto LAB_108d68420;
          }
          iVar1 = *(int *)((long)param_1 + 0x3c);
          uVar11 = *(ushort *)((long)param_1 + 0x8c) & 3;
          iVar12 = iVar1;
          if (uVar11 == 1) {
            lVar14 = param_1[2];
            lVar32 = lVar14 + 0x1f8;
            if ((*(ushort *)(lVar14 + 0x200) >> 4 & 1) == 0) goto LAB_108d68368;
            uVar4 = *(int *)(lVar14 + 0x204) >> 3;
            plVar27 = *(long **)(lVar14 + 0x208);
            if (0 < (int)uVar4) {
              lVar14 = 0;
              do {
                iVar12 = *(int *)(*(long *)((long)plVar27 + lVar14) + 8) + iVar12;
                lVar14 = lVar14 + 8;
              } while ((ulong)uVar4 << 3 != lVar14);
            }
          }
          else {
            lVar32 = 0;
LAB_108d68368:
            plVar27 = (long *)0x0;
            uVar4 = 0;
          }
          iVar23 = (int)param_1[0x10];
          lVar14 = (long)iVar23;
          if (iVar12 <= iVar23) {
            iVar12 = iVar23;
          }
          lVar22 = lVar14 * 0x18;
          lVar18 = lVar14 + -1;
          do {
            iVar23 = iVar23 + 1;
            if (lVar18 - iVar12 == -1) {
              *(int *)(param_1 + 0x10) = iVar12 + 1;
              *(undefined4 *)((long)param_1 + 0x84) = 0;
              uVar4 = 0x65;
              goto LAB_108d68420;
            }
            lVar19 = lVar14;
            if (uVar11 != 2) break;
            pcVar10 = (char *)(param_1[1] + lVar22);
            lVar22 = lVar22 + 0x18;
            lVar19 = lVar18 + 1;
            lVar18 = lVar19;
          } while (*pcVar10 != -99);
          iVar12 = (int)lVar19;
          *(int *)(param_1 + 0x10) = iVar23;
          if (*(int *)(lVar28 + 0x148) != 0) {
            *(undefined4 *)((long)param_1 + 0x84) = 9;
            func_0x000108d7163c(param_1 + 9,lVar28,&UNK_10f517517);
            uVar4 = 1;
            goto LAB_108d68420;
          }
          uVar17 = (ulong)(uint)(iVar12 - iVar1);
          if (iVar12 < iVar1) {
            pbVar30 = (byte *)(param_1[1] + (long)iVar12 * 0x18);
          }
          else {
            plVar20 = (long *)*plVar27;
            iVar23 = (int)plVar20[1];
            plVar2 = plVar27;
            if (iVar23 <= iVar12 - iVar1) {
              do {
                uVar13 = (int)uVar17 - iVar23;
                uVar17 = (ulong)uVar13;
                plVar20 = (long *)plVar2[1];
                iVar23 = (int)plVar20[1];
                plVar2 = plVar2 + 1;
              } while (iVar23 <= (int)uVar13);
            }
            iVar12 = (int)uVar17;
            pbVar30 = (byte *)(*plVar20 + uVar17 * 0x18);
          }
          if (uVar11 == 1) {
            *(undefined2 *)(lVar26 + 0x40) = 4;
            *(long *)(lVar26 + 0x38) = (long)iVar12;
            *(undefined2 *)(lVar26 + 0x78) = 0xa02;
            puVar6 = (&PTR_s___110ac3e28)[*pbVar30];
            *(undefined **)(lVar26 + 0x80) = puVar6;
            _strlen();
            *(uint *)(lVar26 + 0x7c) = (uint)puVar6 & 0x3fffffff;
            *(undefined1 *)(lVar26 + 0x7a) = 1;
            plVar5 = (long *)(lVar26 + 0xa8);
            if (pbVar30[1] == 0xee) {
              if ((int)uVar4 < 1) {
                uVar17 = 0;
LAB_108d687c0:
                if ((uint)uVar17 != uVar4) goto LAB_108d6880c;
              }
              else {
                uVar17 = 0;
                do {
                  if (plVar27[uVar17] == *(long *)(pbVar30 + 0x10)) goto LAB_108d687c0;
                  uVar17 = uVar17 + 1;
                } while (uVar4 != uVar17);
              }
              iVar12 = uVar4 * 8 + 8;
              lVar26 = lVar32;
              FUN_108d82884(lVar32,iVar12,uVar4 != 0);
              if ((int)lVar26 == 0) {
                *(undefined8 *)(*(long *)(lVar32 + 0x10) + (long)(int)uVar4 * 8) =
                     *(undefined8 *)(pbVar30 + 0x10);
                *(ushort *)(lVar32 + 8) = *(ushort *)(lVar32 + 8) | 0x10;
                *(int *)(lVar32 + 0xc) = iVar12;
              }
            }
          }
LAB_108d6880c:
          *(undefined2 *)(plVar5 + 1) = 4;
          *plVar5 = (long)*(int *)(pbVar30 + 4);
          *(undefined2 *)(plVar5 + 8) = 4;
          plVar5[7] = (long)*(int *)(pbVar30 + 8);
          *(undefined2 *)(plVar5 + 0xf) = 4;
          plVar5[0xe] = (long)*(int *)(pbVar30 + 0xc);
          if ((int)plVar5[0x19] < 0x20) {
            plVar27 = plVar5 + 0x15;
            FUN_108d82884(plVar27,0x20,0);
            if ((int)plVar27 == 0) {
              puVar21 = (undefined1 *)plVar5[0x17];
              goto LAB_108d68874;
            }
            goto LAB_108d68a3c;
          }
          puVar21 = (undefined1 *)plVar5[0x18];
          plVar5[0x17] = (long)puVar21;
LAB_108d68874:
          *(undefined2 *)(plVar5 + 0x16) = 0x202;
          puVar9 = puVar21;
          switch(pbVar30[1]) {
          case 0xed:
code_r0x000108d68af0:
            *puVar21 = 0;
            puVar9 = puVar21;
            goto LAB_108d689c8;
          case 0xee:
            pcVar10 = "program";
            break;
          default:
            puVar9 = *(undefined1 **)(pbVar30 + 0x10);
            if (*(undefined1 **)(pbVar30 + 0x10) == (undefined1 *)0x0) goto code_r0x000108d68af0;
            goto LAB_108d689c8;
          case 0xf1:
            pcVar10 = "intarray";
            break;
          case 0xf2:
            pcVar10 = "%d";
            break;
          case 0xf3:
code_r0x000108d688dc:
            pcVar10 = "%lld";
            break;
          case 0xf4:
code_r0x000108d688fc:
            pcVar10 = "%.16g";
            break;
          case 0xf6:
            pcVar10 = "vtab:%p";
            break;
          case 0xf8:
            uVar11 = *(ushort *)(*(long *)(pbVar30 + 0x10) + 8);
            if ((uVar11 >> 1 & 1) != 0) {
              puVar9 = *(undefined1 **)(*(long *)(pbVar30 + 0x10) + 0x10);
              goto LAB_108d689c8;
            }
            if ((uVar11 >> 2 & 1) != 0) goto code_r0x000108d688dc;
            if ((uVar11 >> 3 & 1) != 0) goto code_r0x000108d688fc;
            if ((uVar11 & 1) != 0) {
              pcVar10 = "NULL";
              break;
            }
            puVar7 = &UNK_10f51804e;
            puVar9 = puVar7;
            if (puVar21 == &UNK_10f51804e) goto code_r0x000108d689f0;
            goto code_r0x000108d689d4;
          case 0xfa:
            lVar26 = *(long *)(pbVar30 + 0x10);
            func_0x000108d64bd8(0x20,puVar21,&UNK_10f518034);
            if (puVar21 == (undefined1 *)0x0) {
              uVar4 = 0;
            }
            else {
              puVar7 = puVar21;
              _strlen();
              uVar4 = (uint)puVar7 & 0x3fffffff;
            }
            if (*(short *)(lVar26 + 6) != 0) {
              uVar17 = 0;
              do {
                puVar15 = *(undefined8 **)(lVar26 + 0x20 + uVar17 * 8);
                if (puVar15 == (undefined8 *)0x0) {
                  piVar31 = (int *)&DAT_10f306b93;
code_r0x000108d68b4c:
                  piVar8 = piVar31;
                  _strlen();
                  uVar13 = (uint)piVar8 & 0x3fffffff;
                  if (uVar13 == 6) {
                    bVar3 = (short)piVar31[1] == 0x5952;
                    uVar13 = 6;
                    if (*piVar31 == 0x414e4942 && bVar3) {
                      uVar13 = 1;
                    }
                    if (*piVar31 == 0x414e4942 && bVar3) {
                      piVar31 = (int *)"B";
                    }
                  }
                }
                else {
                  piVar31 = (int *)*puVar15;
                  if (piVar31 != (int *)0x0) goto code_r0x000108d68b4c;
                  uVar13 = 0;
                }
                if (0x1a < (int)(uVar13 + uVar4)) {
                  *(undefined4 *)(puVar21 + uVar4) = 0x2e2e2e2c;
                  break;
                }
                uVar16 = (ulong)uVar4 + 1;
                puVar21[uVar4] = 0x2c;
                if (*(char *)(*(long *)(lVar26 + 0x18) + uVar17) != '\0') {
                  puVar21[uVar16] = 0x2d;
                  uVar16 = (ulong)(uVar4 + 2);
                }
                _memcpy(puVar21 + (uVar16 & 0xffffffff),piVar31,uVar13 + 1);
                uVar4 = (int)uVar16 + uVar13;
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(ushort *)(lVar26 + 6));
            }
            *(undefined2 *)(puVar21 + uVar4) = 0x29;
            goto LAB_108d689c8;
          case 0xfb:
            pcVar10 = "%s(%d)";
            break;
          case 0xfc:
            pcVar10 = "(%.20s)";
          }
          func_0x000108d64bd8(0x20,puVar21,pcVar10);
LAB_108d689c8:
          puVar7 = (undefined1 *)plVar5[0x17];
          if (puVar9 == puVar7) {
            if (puVar9 == (undefined1 *)0x0) {
              uVar4 = 0;
            }
            else {
code_r0x000108d689f0:
              _strlen(puVar7,puVar9);
              uVar4 = (uint)puVar7 & 0x3fffffff;
            }
            *(uint *)((long)plVar5 + 0xb4) = uVar4;
            *(undefined1 *)((long)plVar5 + 0xb2) = 1;
          }
          else {
code_r0x000108d689d4:
            FUN_108d67c04(plVar5 + 0x15,puVar9,0xffffffff,1,0);
          }
          uVar11 = *(ushort *)((long)param_1 + 0x8c);
          if ((uVar11 & 3) == 1) {
            if (3 < (int)plVar5[0x20]) {
              lVar26 = plVar5[0x1f];
              plVar5[0x1e] = lVar26;
LAB_108d68a54:
              *(undefined2 *)(plVar5 + 0x1d) = 0x202;
              *(undefined4 *)((long)plVar5 + 0xec) = 2;
              func_0x000108d64bd8(3,lVar26,&UNK_10f517b78);
              *(undefined1 *)((long)plVar5 + 0xea) = 1;
              *(undefined2 *)(plVar5 + 0x24) = 1;
              uVar11 = *(ushort *)((long)param_1 + 0x8c);
              goto LAB_108d68a8c;
            }
            plVar27 = plVar5 + 0x1c;
            FUN_108d82884(plVar27,4,0);
            if ((int)plVar27 == 0) {
              lVar26 = plVar5[0x1e];
              goto LAB_108d68a54;
            }
LAB_108d68a3c:
            uVar4 = 1;
LAB_108d68420:
            if (((puVar33[0x1b] != 0) && (*(char *)((long)puVar33 + 0xa1) == '\0')) &&
               (param_1[0x1c] != 0)) {
              func_0x000108d83a0c(*puVar33,alStack_190);
              (*(code *)puVar33[0x1b])
                        (puVar33[0x1c],param_1[0x1c],(alStack_190[0] - param_1[0x17]) * 1000000);
            }
            if (uVar4 == 0x65) {
              if (*(int *)(puVar33 + 5) < 1) {
                *(undefined4 *)((long)param_1 + 0x84) = 0;
              }
              else {
                lVar28 = 0;
                lVar26 = 0;
                uVar29 = 0;
                do {
                  lVar32 = *(long *)(puVar33[4] + lVar28 + 8);
                  if (lVar32 != 0) {
                    if ((*(char *)(lVar32 + 0x11) != '\0') &&
                       (*(int *)(lVar32 + 0x14) = *(int *)(lVar32 + 0x14) + 1,
                       *(char *)(lVar32 + 0x12) == '\0')) {
                      FUN_108d7f528(lVar32);
                    }
                    lVar14 = *(long *)(**(long **)(lVar32 + 8) + 0x138);
                    if (lVar14 == 0) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = *(int *)(lVar14 + 0x18);
                      *(undefined4 *)(lVar14 + 0x18) = 0;
                    }
                    if ((*(char *)(lVar32 + 0x11) != '\0') &&
                       (iVar1 = *(int *)(lVar32 + 0x14) + -1, *(int *)(lVar32 + 0x14) = iVar1,
                       iVar1 == 0)) {
                      FUN_108d7f5fc(lVar32);
                    }
                    if ((((code *)puVar33[0x23] != (code *)0x0) && (0 < iVar12)) &&
                       ((int)uVar29 == 0)) {
                      uVar29 = puVar33[0x24];
                      (*(code *)puVar33[0x23])
                                (uVar29,puVar33,*(undefined8 *)(puVar33[4] + lVar28),iVar12);
                    }
                  }
                  lVar26 = lVar26 + 1;
                  lVar28 = lVar28 + 0x20;
                } while (lVar26 < *(int *)(puVar33 + 5));
                *(int *)((long)param_1 + 0x84) = (int)uVar29;
                if ((int)uVar29 != 0) {
                  uVar4 = 1;
                  goto LAB_108d68558;
                }
              }
              uVar4 = 0x65;
            }
          }
          else {
LAB_108d68a8c:
            *(ushort *)(param_1 + 0x11) = (uVar11 << 2 ^ 0xffff) & 0xc;
            param_1[5] = param_1[2] + 0x38;
            *(undefined4 *)((long)param_1 + 0x84) = 0;
            uVar4 = 100;
          }
LAB_108d68558:
          *(uint *)((long)puVar33 + 0x44) = uVar4;
          lVar26 = *param_1;
          uVar13 = *(uint *)((long)param_1 + 0x84);
          if (lVar26 == 0) {
            uVar13 = uVar13 & 0xff;
LAB_108d68588:
            if (uVar13 == 7) goto LAB_108d6859c;
          }
          else {
            if ((uVar13 != 0xc0a) && (*(char *)(lVar26 + 0x51) == '\0')) {
              uVar13 = *(uint *)(lVar26 + 0x48) & uVar13;
              goto LAB_108d68588;
            }
            FUN_108d80e10();
            uVar13 = 7;
LAB_108d6859c:
            *(uint *)((long)param_1 + 0x84) = uVar13;
          }
          if ((uVar4 < 100) && ((*(ushort *)((long)param_1 + 0x8c) >> 8 & 1) != 0)) {
            plVar5 = param_1;
            FUN_108d812e4();
            uVar4 = (uint)plVar5;
          }
          uVar4 = *(uint *)(puVar33 + 9) & uVar4;
          if (uVar4 != 0x11) {
LAB_108d68cf8:
            if ((uVar4 == 0xc0a) || (*(char *)(lVar24 + 0x51) != '\0')) {
              FUN_108d80e10(lVar24);
              uVar4 = 7;
            }
            else {
              uVar4 = *(uint *)(lVar24 + 0x48) & uVar4;
            }
            if (*(long *)(lVar24 + 0x18) == 0) {
              return uVar4;
            }
            (*pcRam00000001132979a8)();
            return uVar4;
          }
          if (iVar25 == 0x32) {
            uVar4 = 0x11;
            goto LAB_108d68cf8;
          }
          if ((*(ushort *)((long)param_1 + 0x8c) >> 8 & 1) == 0) {
            lVar26 = 0;
          }
          else {
            lVar26 = param_1[0x1c];
          }
          lVar28 = param_1[0x10];
          lVar14 = *param_1;
          lVar32 = lVar14;
          FUN_108d6c278(lVar14,lVar26,0xffffffff,0,param_1,&lStack_198,0);
          lVar26 = lStack_198;
          uVar4 = (uint)lVar32;
          if (uVar4 != 0) {
            if (uVar4 == 7) {
              *(undefined1 *)(lVar14 + 0x51) = 1;
            }
            uVar29 = *(undefined8 *)(lVar24 + 0x140);
            FUN_108d67a14(uVar29,1);
            func_0x000108d60660(lVar24,param_1[9]);
            if (*(char *)(lVar24 + 0x51) == '\0') {
              lVar26 = lVar24;
              FUN_108d68d58(lVar24,uVar29);
            }
            else {
              lVar26 = 0;
              uVar4 = 7;
            }
            param_1[9] = lVar26;
LAB_108d68cf4:
            *(uint *)((long)param_1 + 0x84) = uVar4;
            goto LAB_108d68cf8;
          }
          iVar25 = iVar25 + 1;
          _memcpy(alStack_190,lStack_198,0x128);
          _memcpy(lVar26,param_1,0x128);
          _memcpy(param_1,alStack_190,0x128);
          lVar32 = param_1[10];
          lVar22 = *(long *)(lVar26 + 0x58);
          lVar14 = *(long *)(lVar26 + 0x50);
          *(long *)(lVar26 + 0x58) = param_1[0xb];
          *(long *)(lVar26 + 0x50) = lVar32;
          param_1[0xb] = lVar22;
          param_1[10] = lVar14;
          lVar32 = *(long *)(lVar26 + 0xe0);
          *(long *)(lVar26 + 0xe0) = param_1[0x1c];
          param_1[0x1c] = lVar32;
          *(ushort *)((long)param_1 + 0x8c) =
               *(ushort *)((long)param_1 + 0x8c) & 0xfeff | *(ushort *)(lVar26 + 0x8c) & 0x100;
          FUN_108d69e40(lVar26,param_1);
          *(undefined4 *)(lVar26 + 0x84) = 0;
          func_0x000108d674fc(lVar26);
          func_0x000108d67558(param_1);
        } while ((int)lVar28 < 0);
        uVar11 = *(ushort *)((long)param_1 + 0x8c) | 0x200;
      } while( true );
    }
    puVar6 = &UNK_10f517ab1;
  }
  FUN_108d64c00(0x15,puVar6);
  FUN_108d64c00(0x15,&UNK_10f51b96f);
  return 0x15;
}



/* Entry: 108d68d58; end: 108d68dbb;  */

long FUN_108d68d58(long param_1,ulong param_2)

{
  if (param_2 != 0) {
    _strlen(param_2);
    FUN_108d6a6fc(param_1,(param_2 & 0x3fffffff) + 1);
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)();
      return param_1;
    }
  }
  return 0;
}



/* Entry: 108d68dbc; end: 108d68ddf;  */

undefined8 FUN_108d68dbc(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 8);
}



/* Entry: 108d68de0; end: 108d68e8f;  */

undefined8 FUN_108d68de0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((int)param_2 < 1) {
    if ((*(ushort *)(puVar3 + 1) & 0x2460) == 0) {
      *(undefined2 *)(puVar3 + 1) = 1;
    }
    else {
      func_0x000108d82720(puVar3);
    }
    uVar2 = 0;
    puVar3[2] = 0;
  }
  else {
    if (*(int *)(puVar3 + 4) < (int)param_2) {
      FUN_108d82884(puVar3,param_2,0);
      lVar1 = puVar3[2];
    }
    else {
      lVar1 = puVar3[3];
      puVar3[2] = lVar1;
    }
    *(undefined2 *)(puVar3 + 1) = 0x2000;
    *puVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
    if (lVar1 != 0) {
      _bzero(lVar1,param_2 & 0xffffffff);
      uVar2 = puVar3[2];
    }
  }
  return uVar2;
}



/* Entry: 108d68e90; end: 108d68ecf;  */

undefined8 FUN_108d68e90(long param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0x18) + 0x120);
  if (piVar1 != (int *)0x0) {
    do {
      if ((*piVar1 == *(int *)(param_1 + 0x20)) && (piVar1[1] == param_2)) {
        return *(undefined8 *)(piVar1 + 2);
      }
      piVar1 = *(int **)(piVar1 + 6);
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}



/* Entry: 108d68ed0; end: 108d68fc7;  */

void FUN_108d68ed0(long param_1,int param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (-1 < param_2) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    piVar1 = (int *)puVar2[0x24];
    if (piVar1 != (int *)0x0) {
      do {
        if ((*piVar1 == *(int *)(param_1 + 0x20)) && (piVar1[1] == param_2)) {
          if (*(code **)(piVar1 + 4) != (code *)0x0) {
            (**(code **)(piVar1 + 4))(*(undefined8 *)(piVar1 + 2));
          }
          goto LAB_108d68fac;
        }
        piVar1 = *(int **)(piVar1 + 6);
      } while (piVar1 != (int *)0x0);
    }
    piVar1 = (int *)*puVar2;
    FUN_108d6a6fc(piVar1,0x20);
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      *piVar1 = *(int *)(param_1 + 0x20);
      piVar1[1] = param_2;
      *(undefined8 *)(piVar1 + 6) = puVar2[0x24];
      puVar2[0x24] = piVar1;
      if (*(char *)(param_1 + 0x29) == '\0') {
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined1 *)(param_1 + 0x29) = 1;
      }
LAB_108d68fac:
      *(undefined8 *)(piVar1 + 2) = param_3;
      *(code **)(piVar1 + 4) = UNRECOVERED_JUMPTABLE;
      return;
    }
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108d68f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 108d68fc8; end: 108d68fff;  */

long FUN_108d68fc8(long param_1,undefined8 param_2)

{
  FUN_108d6a6fc();
  if (param_1 != 0) {
    _bzero(param_1,param_2);
  }
  return param_1;
}



/* Entry: 108d69000; end: 108d69033;  */

undefined4 FUN_108d69000(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0xc);
}



/* Entry: 108d69034; end: 108d69203;  */

undefined8 FUN_108d69034(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000108d69068();
  FUN_108d677b4();
  func_0x000108d6912c(param_1);
  return uVar1;
}



/* Entry: 108d69204; end: 108d6923f;  */

undefined8 FUN_108d69204(undefined8 param_1,undefined8 param_2)

{
  func_0x000108d69068();
  FUN_108d67900();
  func_0x000108d6912c(param_2);
  return param_1;
}



/* Entry: 108d69240; end: 108d6939b;  */

undefined8 FUN_108d69240(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000108d69068();
  func_0x000108d6797c();
  func_0x000108d6912c(param_1);
  return uVar1;
}



/* Entry: 108d6939c; end: 108d695fb;  */

long FUN_108d6939c(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 < *(ushort *)(param_1 + 0x11)) {
    lVar2 = *param_1;
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*pcRam0000000113297998)();
    }
    lVar1 = param_1[4] + (ulong)param_2 * 0x38;
    FUN_108d67a14(lVar1,1);
    if (*(char *)(lVar2 + 0x51) != '\0') {
      lVar1 = 0;
      *(undefined1 *)(lVar2 + 0x51) = 0;
    }
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 108d695fc; end: 108d69603;  */

/* WARNING: Removing unreachable block (ram,0x000108d69690) */
/* WARNING: Removing unreachable block (ram,0x000108d69694) */
/* WARNING: Removing unreachable block (ram,0x000108d6969c) */
/* WARNING: Removing unreachable block (ram,0x000108d696bc) */
/* WARNING: Removing unreachable block (ram,0x000108d696ac) */

long * FUN_108d695fc(long *param_1,int param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1;
  FUN_108d69800();
  if ((int)plVar3 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return plVar3;
    }
    (*param_5)(param_3);
    return plVar3;
  }
  if (param_3 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)((param_1[0xd] + (long)param_2 * 0x38) - 0x38);
    FUN_108d67c04(plVar3,param_3,param_4,0,param_5);
    lVar1 = *param_1;
    *(uint *)(lVar1 + 0x44) = (uint)plVar3;
    lVar2 = *(long *)(lVar1 + 0x140);
    if (lVar2 != 0) {
      if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar2 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar2);
        lVar1 = *param_1;
        if (lVar1 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar1 + 0x51) == '\0') {
      plVar3 = (long *)(ulong)(*(uint *)(lVar1 + 0x48) & (uint)plVar3);
    }
    else {
      FUN_108d80e10();
      plVar3 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar3;
}



/* Entry: 108d69604; end: 108d69753;  */

long * FUN_108d69604(long *param_1,int param_2,long param_3,undefined8 param_4,code *param_5,
                    undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_1;
  FUN_108d69800();
  if ((int)plVar2 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return plVar2;
    }
    (*param_5)(param_3);
    return plVar2;
  }
  if (param_3 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar4 = param_1[0xd] + (long)param_2 * 0x38;
    plVar3 = (long *)(lVar4 - 0x38);
    plVar2 = plVar3;
    FUN_108d67c04(plVar3,param_3,param_4,param_6,param_5);
    lVar1 = *param_1;
    if (((int)param_6 != 0) && ((int)plVar2 == 0)) {
      if (((*(ushort *)(lVar4 + -0x30) >> 1 & 1) == 0) ||
         (*(char *)(lVar1 + 0x4e) == *(char *)(lVar4 + -0x2e))) {
        plVar2 = (long *)0x0;
      }
      else {
        FUN_108d833e4();
        lVar1 = *param_1;
        plVar2 = plVar3;
      }
    }
    *(uint *)(lVar1 + 0x44) = (uint)plVar2;
    lVar4 = *(long *)(lVar1 + 0x140);
    if (lVar4 != 0) {
      if ((*(ushort *)(lVar4 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar4 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar4);
        lVar1 = *param_1;
        if (lVar1 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar1 + 0x51) == '\0') {
      plVar2 = (long *)(ulong)(*(uint *)(lVar1 + 0x48) & (uint)plVar2);
    }
    else {
      FUN_108d80e10();
      plVar2 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar2;
}



/* Entry: 108d69754; end: 108d6978b;  */

/* WARNING: Removing unreachable block (ram,0x000108d69690) */
/* WARNING: Removing unreachable block (ram,0x000108d69694) */
/* WARNING: Removing unreachable block (ram,0x000108d6969c) */
/* WARNING: Removing unreachable block (ram,0x000108d696bc) */
/* WARNING: Removing unreachable block (ram,0x000108d696ac) */

long * FUN_108d69754(long *param_1,int param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_4 >> 0x1f != 0) {
    if ((code *)0x1 < param_5 + 1) {
      (*param_5)(param_3);
    }
    return (long *)0x12;
  }
  plVar3 = param_1;
  FUN_108d69800();
  if ((int)plVar3 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return plVar3;
    }
    (*param_5)(param_3);
    return plVar3;
  }
  if (param_3 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)((param_1[0xd] + (long)param_2 * 0x38) - 0x38);
    FUN_108d67c04(plVar3,param_3,param_4,0,param_5);
    lVar1 = *param_1;
    *(uint *)(lVar1 + 0x44) = (uint)plVar3;
    lVar2 = *(long *)(lVar1 + 0x140);
    if (lVar2 != 0) {
      if ((*(ushort *)(lVar2 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar2 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar2);
        lVar1 = *param_1;
        if (lVar1 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar1 + 0x51) == '\0') {
      plVar3 = (long *)(ulong)(*(uint *)(lVar1 + 0x48) & (uint)plVar3);
    }
    else {
      FUN_108d80e10();
      plVar3 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar3;
}



/* Entry: 108d6978c; end: 108d697ff;  */

long * FUN_108d6978c(undefined8 param_1,long *param_2,int param_3)

{
  long *plVar1;
  
  plVar1 = param_2;
  FUN_108d69800();
  if ((int)plVar1 == 0) {
    FUN_108d67b88(param_1,param_2[0xd] + (long)param_3 * 0x38 + -0x38);
    if (*(long *)(*param_2 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return plVar1;
}



/* Entry: 108d69800; end: 108d69a3f;  */

undefined8 FUN_108d69800(long *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    puVar2 = &UNK_10f517b50;
  }
  else {
    if (*param_1 != 0) {
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*pcRam0000000113297998)();
      }
      if ((*(int *)((long)param_1 + 0x44) == -0x420df25d) && ((int)param_1[0x10] < 0)) {
        if (((int)param_2 < 1) || ((int)(short)param_1[0xf] < (int)param_2)) {
          lVar3 = *param_1;
          *(undefined4 *)(lVar3 + 0x44) = 0x19;
          lVar1 = *(long *)(lVar3 + 0x140);
          if (lVar1 != 0) {
            if ((*(ushort *)(lVar1 + 8) & 0x2460) == 0) {
              *(undefined2 *)(lVar1 + 8) = 1;
            }
            else {
              func_0x000108d82720();
              lVar3 = *param_1;
            }
          }
          if (*(long *)(lVar3 + 0x18) != 0) {
            (*pcRam00000001132979a8)();
          }
          return 0x19;
        }
        lVar1 = param_1[0xd] + (ulong)(param_2 - 1) * 0x38;
        if (((*(ushort *)(lVar1 + 8) & 0x2460) != 0) || (*(int *)(lVar1 + 0x20) != 0)) {
          func_0x000108d826d0(lVar1);
        }
        *(undefined2 *)(lVar1 + 8) = 1;
        lVar1 = *param_1;
        *(undefined4 *)(lVar1 + 0x44) = 0;
        lVar1 = *(long *)(lVar1 + 0x140);
        if (lVar1 != 0) {
          if ((*(ushort *)(lVar1 + 8) & 0x2460) == 0) {
            *(undefined2 *)(lVar1 + 8) = 1;
          }
          else {
            func_0x000108d82720();
          }
        }
        if ((*(ushort *)((long)param_1 + 0x8c) >> 8 & 1) == 0) {
          return 0;
        }
        if (param_2 < 0x21) {
          if ((*(uint *)((long)param_1 + 0x104) >> (ulong)(param_2 - 1 & 0x1f) & 1) == 0) {
            return 0;
          }
        }
        else if (*(uint *)((long)param_1 + 0x104) != 0xffffffff) {
          return 0;
        }
        *(ushort *)((long)param_1 + 0x8c) = *(ushort *)((long)param_1 + 0x8c) | 8;
        return 0;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + 0x44) = 0x15;
      lVar1 = *(long *)(lVar3 + 0x140);
      if (lVar1 != 0) {
        if ((*(ushort *)(lVar1 + 8) & 0x2460) == 0) {
          *(undefined2 *)(lVar1 + 8) = 1;
        }
        else {
          func_0x000108d82720();
          lVar3 = *param_1;
        }
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        (*pcRam00000001132979a8)();
      }
      FUN_108d64c00(0x15,&UNK_10f518cee);
      goto LAB_108d69910;
    }
    puVar2 = &UNK_10f517ab1;
  }
  FUN_108d64c00(0x15,puVar2);
LAB_108d69910:
  FUN_108d64c00(0x15,&UNK_10f51b96f);
  return 0x15;
}



/* Entry: 108d69a40; end: 108d69a47;  */

long * FUN_108d69a40(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_108d69800();
  if ((int)plVar1 == 0) {
    lVar2 = param_1[0xd] + (long)param_2 * 0x38;
    if ((*(ushort *)(lVar2 + -0x30) & 0x2460) == 0) {
      *(long *)(lVar2 + -0x38) = (long)param_3;
      *(undefined2 *)(lVar2 + -0x30) = 4;
    }
    else {
      FUN_108d839c8(lVar2 + -0x38,(long)param_3);
    }
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return plVar1;
}



/* Entry: 108d69a48; end: 108d69ad3;  */

long * FUN_108d69a48(long *param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_108d69800();
  if ((int)plVar1 == 0) {
    lVar2 = param_1[0xd] + (long)param_2 * 0x38;
    if ((*(ushort *)(lVar2 + -0x30) & 0x2460) == 0) {
      *(undefined8 *)(lVar2 + -0x38) = param_3;
      *(undefined2 *)(lVar2 + -0x30) = 4;
    }
    else {
      FUN_108d839c8(lVar2 + -0x38,param_3);
    }
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return plVar1;
}



/* Entry: 108d69ad4; end: 108d69b17;  */

long * FUN_108d69ad4(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_108d69800();
  if (((int)plVar1 == 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*pcRam00000001132979a8)();
  }
  return plVar1;
}



/* Entry: 108d69b18; end: 108d69b1f;  */

long * FUN_108d69b18(long *param_1,int param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_1;
  FUN_108d69800();
  if ((int)plVar2 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return plVar2;
    }
    (*param_5)(param_3);
    return plVar2;
  }
  if (param_3 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar4 = param_1[0xd] + (long)param_2 * 0x38;
    plVar3 = (long *)(lVar4 - 0x38);
    plVar2 = plVar3;
    FUN_108d67c04(plVar3,param_3,param_4,1,param_5);
    lVar1 = *param_1;
    if ((int)plVar2 == 0) {
      if (((*(ushort *)(lVar4 + -0x30) >> 1 & 1) == 0) ||
         (*(char *)(lVar1 + 0x4e) == *(char *)(lVar4 + -0x2e))) {
        plVar2 = (long *)0x0;
      }
      else {
        FUN_108d833e4();
        lVar1 = *param_1;
        plVar2 = plVar3;
      }
    }
    *(uint *)(lVar1 + 0x44) = (uint)plVar2;
    lVar4 = *(long *)(lVar1 + 0x140);
    if (lVar4 != 0) {
      if ((*(ushort *)(lVar4 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar4 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar4);
        lVar1 = *param_1;
        if (lVar1 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar1 + 0x51) == '\0') {
      plVar2 = (long *)(ulong)(*(uint *)(lVar1 + 0x48) & (uint)plVar2);
    }
    else {
      FUN_108d80e10();
      plVar2 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar2;
}



/* Entry: 108d69b20; end: 108d69b5f;  */

long * FUN_108d69b20(long *param_1,int param_2,long param_3,ulong param_4,code *param_5,int param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_4 >> 0x1f != 0) {
    if ((code *)0x1 < param_5 + 1) {
      (*param_5)(param_3);
    }
    return (long *)0x12;
  }
  iVar1 = 2;
  if (param_6 != 4) {
    iVar1 = param_6;
  }
  plVar3 = param_1;
  FUN_108d69800();
  if ((int)plVar3 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return plVar3;
    }
    (*param_5)(param_3);
    return plVar3;
  }
  if (param_3 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    lVar5 = param_1[0xd] + (long)param_2 * 0x38;
    plVar4 = (long *)(lVar5 - 0x38);
    plVar3 = plVar4;
    FUN_108d67c04(plVar4,param_3,param_4,iVar1,param_5);
    lVar2 = *param_1;
    if ((iVar1 != 0) && ((int)plVar3 == 0)) {
      if (((*(ushort *)(lVar5 + -0x30) >> 1 & 1) == 0) ||
         (*(char *)(lVar2 + 0x4e) == *(char *)(lVar5 + -0x2e))) {
        plVar3 = (long *)0x0;
      }
      else {
        FUN_108d833e4();
        lVar2 = *param_1;
        plVar3 = plVar4;
      }
    }
    *(uint *)(lVar2 + 0x44) = (uint)plVar3;
    lVar5 = *(long *)(lVar2 + 0x140);
    if (lVar5 != 0) {
      if ((*(ushort *)(lVar5 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar5 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar5);
        lVar2 = *param_1;
        if (lVar2 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar2 + 0x51) == '\0') {
      plVar3 = (long *)(ulong)(*(uint *)(lVar2 + 0x48) & (uint)plVar3);
    }
    else {
      FUN_108d80e10();
      plVar3 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar3;
}



/* Entry: 108d69b60; end: 108d69b67;  */

long * FUN_108d69b60(long *param_1,int param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_1;
  FUN_108d69800();
  if ((int)plVar2 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return plVar2;
    }
    (*param_5)(param_3);
    return plVar2;
  }
  if (param_3 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar4 = param_1[0xd] + (long)param_2 * 0x38;
    plVar3 = (long *)(lVar4 - 0x38);
    plVar2 = plVar3;
    FUN_108d67c04(plVar3,param_3,param_4,2,param_5);
    lVar1 = *param_1;
    if ((int)plVar2 == 0) {
      if (((*(ushort *)(lVar4 + -0x30) >> 1 & 1) == 0) ||
         (*(char *)(lVar1 + 0x4e) == *(char *)(lVar4 + -0x2e))) {
        plVar2 = (long *)0x0;
      }
      else {
        FUN_108d833e4();
        lVar1 = *param_1;
        plVar2 = plVar3;
      }
    }
    *(uint *)(lVar1 + 0x44) = (uint)plVar2;
    lVar4 = *(long *)(lVar1 + 0x140);
    if (lVar4 != 0) {
      if ((*(ushort *)(lVar4 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar4 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar4);
        lVar1 = *param_1;
        if (lVar1 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar1 + 0x51) == '\0') {
      plVar2 = (long *)(ulong)(*(uint *)(lVar1 + 0x48) & (uint)plVar2);
    }
    else {
      FUN_108d80e10();
      plVar2 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar2;
}



/* Entry: 108d69b68; end: 108d69c67;  */

/* WARNING: Removing unreachable block (ram,0x000108d6964c) */

long * FUN_108d69b68(long *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  bVar2 = (&UNK_10dfa06fd)[(ulong)*(ushort *)(param_3 + 1) & 0x1f];
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      uVar8 = *param_3;
      plVar3 = param_1;
      FUN_108d69800();
      if ((int)plVar3 == 0) {
        lVar5 = param_1[0xd] + (long)param_2 * 0x38;
        if ((*(ushort *)(lVar5 + -0x30) & 0x2460) == 0) {
          *(undefined8 *)(lVar5 + -0x38) = uVar8;
          *(undefined2 *)(lVar5 + -0x30) = 4;
        }
        else {
          FUN_108d839c8(lVar5 + -0x38,uVar8);
        }
        if (*(long *)(*param_1 + 0x18) != 0) {
          (*pcRam00000001132979a8)();
        }
      }
      return plVar3;
    }
    if (bVar2 == 2) {
      uVar8 = *param_3;
      plVar3 = param_1;
      FUN_108d69800();
      if (((int)plVar3 == 0) &&
         (FUN_108d67b88(uVar8,param_1[0xd] + (long)param_2 * 0x38 + -0x38),
         *(long *)(*param_1 + 0x18) != 0)) {
        (*pcRam00000001132979a8)();
      }
      return plVar3;
    }
LAB_108d69be8:
    plVar3 = param_1;
    FUN_108d69800();
    if (((int)plVar3 == 0) && (plVar3 = (long *)0x0, *(long *)(*param_1 + 0x18) != 0)) {
      (*pcRam00000001132979a8)();
      plVar3 = (long *)0x0;
    }
    return plVar3;
  }
  if (bVar2 == 3) {
    lVar5 = param_3[2];
    uVar1 = *(undefined4 *)((long)param_3 + 0xc);
    cVar4 = *(char *)((long)param_3 + 10);
  }
  else {
    if (bVar2 != 4) goto LAB_108d69be8;
    if ((*(ushort *)(param_3 + 1) >> 0xe & 1) != 0) {
      uVar1 = *(undefined4 *)param_3;
      plVar3 = param_1;
      FUN_108d69800();
      if (((int)plVar3 == 0) &&
         (FUN_108d68070(param_1[0xd] + (long)param_2 * 0x38 + -0x38,uVar1),
         *(long *)(*param_1 + 0x18) != 0)) {
        (*pcRam00000001132979a8)();
      }
      return plVar3;
    }
    lVar5 = param_3[2];
    uVar1 = *(undefined4 *)((long)param_3 + 0xc);
    cVar4 = '\0';
  }
  plVar3 = param_1;
  FUN_108d69800();
  if ((int)plVar3 != 0) {
    return plVar3;
  }
  if (lVar5 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    lVar7 = param_1[0xd] + (long)param_2 * 0x38;
    plVar6 = (long *)(lVar7 - 0x38);
    plVar3 = plVar6;
    FUN_108d67c04(plVar6,lVar5,uVar1,cVar4,0xffffffffffffffff);
    lVar5 = *param_1;
    if ((cVar4 != '\0') && ((int)plVar3 == 0)) {
      if (((*(ushort *)(lVar7 + -0x30) >> 1 & 1) == 0) ||
         (*(char *)(lVar5 + 0x4e) == *(char *)(lVar7 + -0x2e))) {
        plVar3 = (long *)0x0;
      }
      else {
        FUN_108d833e4();
        lVar5 = *param_1;
        plVar3 = plVar6;
      }
    }
    *(uint *)(lVar5 + 0x44) = (uint)plVar3;
    lVar7 = *(long *)(lVar5 + 0x140);
    if (lVar7 != 0) {
      if ((*(ushort *)(lVar7 + 8) & 0x2460) == 0) {
        *(undefined2 *)(lVar7 + 8) = 1;
      }
      else {
        func_0x000108d82720(lVar7);
        lVar5 = *param_1;
        if (lVar5 == 0) goto LAB_108d69720;
      }
    }
    if (*(char *)(lVar5 + 0x51) == '\0') {
      plVar3 = (long *)(ulong)(*(uint *)(lVar5 + 0x48) & (uint)plVar3);
    }
    else {
      FUN_108d80e10();
      plVar3 = (long *)0x7;
    }
  }
LAB_108d69720:
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*pcRam00000001132979a8)();
  }
  return plVar3;
}



/* Entry: 108d69c68; end: 108d69cd3;  */

long * FUN_108d69c68(long *param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_108d69800();
  if ((int)plVar1 == 0) {
    FUN_108d68070(param_1[0xd] + (long)param_2 * 0x38 + -0x38,param_3);
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return plVar1;
}



/* Entry: 108d69cd4; end: 108d69d17;  */

long FUN_108d69cd4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = (long)*(short *)(param_1 + 0x78);
  }
  return lVar1;
}



/* Entry: 108d69d18; end: 108d69d57;  */

int FUN_108d69d18(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = param_2;
    _strlen();
    uVar2 = (uint)lVar5 & 0x3fffffff;
  }
  if (((param_1 != 0) && (param_2 != 0)) && (lVar5 = (long)*(short *)(param_1 + 0x7a), 0 < lVar5)) {
    iVar3 = 1;
    plVar6 = *(long **)(param_1 + 0x70);
    do {
      lVar4 = *plVar6;
      if (((lVar4 != 0) &&
          (lVar1 = lVar4, _strncmp(lVar4,param_2,(long)(int)uVar2), (int)lVar1 == 0)) &&
         (*(char *)(lVar4 + (int)uVar2) == '\0')) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}



/* Entry: 108d69d58; end: 108d69ddf;  */

int FUN_108d69d58(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) && (lVar4 = (long)*(short *)(param_1 + 0x7a), 0 < lVar4)) {
    iVar2 = 1;
    plVar5 = *(long **)(param_1 + 0x70);
    do {
      lVar3 = *plVar5;
      if (((lVar3 != 0) && (lVar1 = lVar3, _strncmp(lVar3,param_2,(long)param_3), (int)lVar1 == 0))
         && (*(char *)(lVar3 + param_3) == '\0')) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}



/* Entry: 108d69de0; end: 108d69e3f;  */

undefined8 FUN_108d69de0(long param_1,long param_2)

{
  if (*(short *)(param_1 + 0x78) == *(short *)(param_2 + 0x78)) {
    if (((*(ushort *)(param_2 + 0x8c) >> 8 & 1) != 0) && (*(int *)(param_2 + 0x104) != 0)) {
      *(ushort *)(param_2 + 0x8c) = *(ushort *)(param_2 + 0x8c) | 8;
    }
    if (((*(ushort *)(param_1 + 0x8c) >> 8 & 1) != 0) && (*(int *)(param_1 + 0x104) != 0)) {
      *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 8;
    }
    FUN_108d69e40();
    return 0;
  }
  return 1;
}



/* Entry: 108d69e40; end: 108d69f3b;  */

void FUN_108d69e40(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(*param_2 + 0x18) != 0) {
    (*pcRam0000000113297998)();
  }
  if (0 < *(short *)(param_1 + 0x78)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_2[0xd] + lVar3);
      lVar5 = *(long *)(param_1 + 0x68);
      if (((*(ushort *)(puVar1 + 1) & 0x2460) != 0) || (*(int *)(puVar1 + 4) != 0)) {
        FUN_108d826d0(puVar1);
      }
      puVar2 = (undefined8 *)(lVar5 + lVar3);
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      uVar9 = puVar2[3];
      uVar8 = puVar2[2];
      uVar11 = puVar2[5];
      uVar10 = puVar2[4];
      puVar1[6] = puVar2[6];
      puVar1[3] = uVar9;
      puVar1[2] = uVar8;
      puVar1[5] = uVar11;
      puVar1[4] = uVar10;
      puVar1[1] = uVar7;
      *puVar1 = uVar6;
      lVar5 = lVar5 + lVar3;
      *(undefined2 *)(lVar5 + 8) = 1;
      *(undefined4 *)(lVar5 + 0x20) = 0;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (lVar4 < *(short *)(param_1 + 0x78));
  }
  if (*(long *)(*param_2 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d69f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001132979a8)();
    return;
  }
  return;
}



/* Entry: 108d69f3c; end: 108d69f8b;  */

undefined8 FUN_108d69f3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* Entry: 108d69f8c; end: 108d6a003;  */

undefined8 FUN_108d69f8c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    if (param_2 != 0) {
      puVar1 = (undefined8 *)(param_2 + 0x58);
    }
    uVar2 = *puVar1;
  }
  else {
    (*pcRam0000000113297998)();
    puVar1 = (undefined8 *)(param_1 + 8);
    if (param_2 != 0) {
      puVar1 = (undefined8 *)(param_2 + 0x58);
    }
    uVar2 = *puVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      (*pcRam00000001132979a8)();
    }
  }
  return uVar2;
}



/* Entry: 108d6a004; end: 108d6a017;  */

undefined4 FUN_108d6a004(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa0 + (long)param_2 * 4);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0xa0 + (long)param_2 * 4) = 0;
  }
  return uVar1;
}



/* Entry: 108d6a018; end: 108d6a05f;  */

undefined1 FUN_108d6a018(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0xf) == 2) {
    FUN_108d6a060(param_1,0);
    uVar1 = *(ushort *)(param_1 + 8);
  }
  return (&UNK_10dfa06fd)[(ulong)uVar1 & 0x1f];
}



/* Entry: 108d6a060; end: 108d6a13f;  */

void FUN_108d6a060(double *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  double dVar4;
  ushort uVar5;
  double dVar6;
  double dStack_50;
  double dStack_48;
  
  uVar2 = *(undefined1 *)((long)param_1 + 10);
  dVar6 = param_1[2];
  uVar1 = *(undefined4 *)((long)param_1 + 0xc);
  dVar4 = dVar6;
  FUN_108d82a1c(dVar6,&dStack_48,uVar1,uVar2);
  if (SUB84(dVar4,0) == 0) {
    return;
  }
  func_0x000108d82f50(dVar6,&dStack_50,uVar1,uVar2);
  if (SUB84(dVar6,0) == 0) {
    *param_1 = dStack_50;
    uVar5 = *(ushort *)(param_1 + 1);
  }
  else {
    *param_1 = dStack_48;
    uVar5 = *(ushort *)(param_1 + 1);
    *(ushort *)(param_1 + 1) = uVar5 | 8;
    if (param_2 == 0) {
      return;
    }
    bVar3 = false;
    if ((ABS(dStack_48) < 9.223372036854776e+18) &&
       (bVar3 = false, !NAN(dStack_48) && !NAN((double)(long)dStack_48))) {
      bVar3 = dStack_48 == (double)(long)dStack_48;
    }
    if (!bVar3 || 0xfffffffffffffffd < (long)dStack_48 + 0x7fffffffffffffffU) {
      return;
    }
    *param_1 = (double)(long)dStack_48;
    uVar5 = uVar5 & 0xbe00;
  }
  *(ushort *)(param_1 + 1) = uVar5 | 4;
  return;
}



/* Entry: 108d6a140; end: 108d6a6fb;  */

uint FUN_108d6a140(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 *param_7)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  short *psVar18;
  undefined8 *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  long lVar23;
  uint uStack_94;
  uint *puStack_78;
  
  puStack_78 = (uint *)0x0;
  *param_7 = 0;
  uVar8 = (uint)(param_6 != 0);
  if (*(long *)(param_1 + 6) != 0) {
    (*pcRam0000000113297998)();
  }
  puVar4 = param_1;
  FUN_108d6a6fc(param_1,0x28);
  if (puVar4 == (uint *)0x0) {
    puVar20 = (uint *)0x0;
LAB_108d6a58c:
    if (*(char *)((long)param_1 + 0x51) == '\0') {
      puVar21 = (uint *)0x0;
      *param_7 = puVar4;
      goto LAB_108d6a63c;
    }
    puVar21 = (uint *)0x0;
    if (puVar4 != (uint *)0x0) goto LAB_108d6a624;
  }
  else {
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar20 = param_1;
    FUN_108d6a6fc(param_1,0x288);
    if (puVar20 == (uint *)0x0) goto LAB_108d6a58c;
    uStack_94 = 0;
    puVar9 = (uint *)0x0;
    uVar13 = 2;
    if (param_6 == 0) {
      uVar13 = 3;
    }
    uVar14 = 2;
    if (param_6 != 0) {
      uVar14 = 3;
    }
    do {
      _bzero(puVar20,0x288);
      *(uint **)puVar20 = param_1;
      func_0x000108d60660(param_1,puStack_78);
      puStack_78 = (uint *)0x0;
      FUN_108d62704(param_1);
      puVar21 = puVar20;
      FUN_108d6a7b0(puVar20,0,param_3,param_2);
      if (puVar21 == (uint *)0x0) {
LAB_108d6a608:
        puVar9 = *(uint **)(puVar20 + 2);
        if (puVar9 != (uint *)0x0) {
          puVar20[2] = 0;
          puVar20[3] = 0;
          puStack_78 = puVar9;
        }
        func_0x000108d6277c(param_1);
        puVar21 = (uint *)0x1;
        goto LAB_108d6a624;
      }
      if ((*(byte *)((long)puVar21 + 0x46) >> 4 & 1) != 0) {
        puVar10 = &UNK_10f517475;
LAB_108d6a5fc:
        func_0x000108d6a85c(puVar20,puVar10);
        goto LAB_108d6a608;
      }
      if ((*(byte *)((long)puVar21 + 0x46) >> 5 & 1) != 0) {
        puVar10 = &UNK_10f517493;
        goto LAB_108d6a5fc;
      }
      if (*(long *)(puVar21 + 6) != 0) {
        puVar10 = &UNK_10f5174b7;
        goto LAB_108d6a5fc;
      }
      sVar3 = *(short *)((long)puVar21 + 0x3e);
      puVar7 = param_1;
      if (sVar3 < 1) {
        lVar23 = 0;
      }
      else {
        lVar23 = 0;
        puVar19 = *(undefined8 **)(puVar21 + 2);
        while( true ) {
          uVar5 = *puVar19;
          FUN_108d5e044(uVar5,param_4);
          if ((int)uVar5 == 0) break;
          lVar23 = lVar23 + 1;
          puVar19 = puVar19 + 6;
          if (sVar3 == lVar23) goto LAB_108d6a5a0;
        }
      }
      uVar22 = (uint)lVar23;
      if (uVar22 == (int)sVar3) {
LAB_108d6a5a0:
        FUN_108d6a8e0(param_1,&UNK_10f5174cc);
LAB_108d6a5b8:
        puStack_78 = puVar7;
        func_0x000108d6277c(param_1);
        puVar21 = (uint *)0x1;
        if (puVar4 == (uint *)0x0) goto LAB_108d6a630;
        goto LAB_108d6a624;
      }
      if (param_6 != 0) {
        if (((*(byte *)((long)param_1 + 0x2e) >> 3 & 1) == 0) ||
           (lVar23 = *(long *)(puVar21 + 8), lVar23 == 0)) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = (undefined *)0x0;
          do {
            uVar15 = (ulong)*(uint *)(lVar23 + 0x28);
            if (0 < (int)*(uint *)(lVar23 + 0x28)) {
              puVar11 = puVar10;
              puVar6 = (uint *)(lVar23 + 0x40);
              do {
                puVar10 = &UNK_10f5174e1;
                if (*puVar6 != uVar22) {
                  puVar10 = puVar11;
                }
                uVar15 = uVar15 - 1;
                puVar11 = puVar10;
                puVar6 = puVar6 + 4;
              } while (uVar15 != 0);
            }
            lVar23 = *(long *)(lVar23 + 8);
          } while (lVar23 != 0);
        }
        for (lVar23 = *(long *)(puVar21 + 4); lVar23 != 0; lVar23 = *(long *)(lVar23 + 0x28)) {
          uVar15 = (ulong)*(ushort *)(lVar23 + 0x56);
          if (uVar15 != 0) {
            puVar11 = puVar10;
            psVar18 = *(short **)(lVar23 + 8);
            do {
              puVar10 = &UNK_10f5174ed;
              if (uVar22 != (int)*psVar18) {
                puVar10 = puVar11;
              }
              uVar15 = uVar15 - 1;
              puVar11 = puVar10;
              psVar18 = psVar18 + 1;
            } while (uVar15 != 0);
          }
        }
        if (puVar10 != (undefined *)0x0) {
          FUN_108d6a8e0(param_1,&UNK_10f5174f5);
          goto LAB_108d6a5b8;
        }
      }
      puVar7 = puVar20;
      FUN_108d6a908();
      *(uint **)(puVar4 + 6) = puVar7;
      if (puVar7 != (uint *)0x0) {
        puVar12 = *(undefined4 **)(puVar21 + 0x1a);
        if (puVar12 == (undefined4 *)0x0) {
          uVar15 = 0xfff0bdc0;
        }
        else {
          uVar2 = param_1[10];
          if ((int)uVar2 < 1) {
            uVar15 = 0;
          }
          else {
            uVar16 = 0;
            puVar19 = (undefined8 *)(*(long *)(param_1 + 8) + 0x18);
            do {
              uVar15 = uVar16;
              if ((undefined4 *)*puVar19 == puVar12) break;
              uVar16 = uVar16 + 1;
              uVar15 = (ulong)uVar2;
              puVar19 = puVar19 + 4;
            } while (uVar2 != uVar16);
          }
        }
        iVar1 = puVar12[1];
        puVar6 = puVar7;
        FUN_108d71098(puVar7,4,uVar15,uVar8,*puVar12);
        FUN_108d6aaec(puVar7,puVar6,(long)iVar1,0xfffffff2);
        if (*(long *)(puVar7 + 2) != 0) {
          *(undefined1 *)(*(long *)(puVar7 + 2) + (long)(int)puVar7[0xf] * 0x18 + -0x15) = 1;
        }
        func_0x000108d6a9d4(puVar7,10,&UNK_10dfa071d);
        uVar17 = (uint)uVar15;
        uVar2 = 1 << (ulong)(uVar17 & 0x1f);
        puVar7[0x25] = puVar7[0x25] | uVar2;
        if ((uVar17 != 1) &&
           (*(char *)(*(long *)(*(long *)(*(long *)puVar7 + 0x20) + (long)(int)uVar17 * 0x20 + 8) +
                     0x11) != '\0')) {
          puVar7[0x26] = puVar7[0x26] | uVar2;
        }
        if (1 < puVar7[0xf]) {
          lVar23 = *(long *)(puVar7 + 2);
          uVar2 = puVar21[0xe];
          *(uint *)(lVar23 + 0x1c) = uVar17;
          *(uint *)(lVar23 + 0x20) = uVar2;
          *(uint *)(lVar23 + 0x24) = uVar8;
        }
        FUN_108d6aaec(puVar7,1,*(undefined8 *)puVar21,0);
        func_0x000108d6ac04(puVar7,uVar13);
        if (uVar14 < puVar7[0xf]) {
          lVar23 = *(long *)(puVar7 + 2) + (ulong)uVar14 * 0x18;
          *(uint *)(lVar23 + 8) = puVar21[0xe];
          *(uint *)(lVar23 + 0xc) = uVar17;
        }
        FUN_108d6aaec(puVar7,(ulong)uVar14,(long)*(short *)((long)puVar21 + 0x3e) + 1,0xfffffff2);
        if (6 < puVar7[0xf]) {
          *(int *)(*(long *)(puVar7 + 2) + 0x98) = (int)*(short *)((long)puVar21 + 0x3e);
        }
        if (*(char *)((long)param_1 + 0x51) == '\0') {
          puVar20[0x7a] = 1;
          puVar20[0x14] = 1;
          puVar20[0x15] = 1;
          FUN_108d6ac74(puVar7,puVar20);
        }
      }
      *puVar4 = uVar8;
      puVar4[3] = uVar22;
      *(uint **)(puVar4 + 8) = param_1;
      func_0x000108d6277c(param_1);
      puVar21 = puVar9;
      if (*(char *)((long)param_1 + 0x51) != '\0') break;
      FUN_108d69a48(*(undefined8 *)(puVar4 + 6),1,param_5);
      puVar21 = puVar4;
      FUN_108d6afb4(puVar4,param_5,&puStack_78);
      if (0x30 < uStack_94) break;
      uStack_94 = uStack_94 + 1;
      puVar9 = (uint *)0x11;
    } while ((int)puVar21 == 0x11);
    if ((int)puVar21 == 0) goto LAB_108d6a58c;
LAB_108d6a624:
    if (*(long *)(puVar4 + 6) != 0) {
      func_0x000108d674fc();
    }
  }
LAB_108d6a630:
  func_0x000108d60660(param_1,puVar4);
LAB_108d6a63c:
  puVar4 = puStack_78;
  puVar10 = (undefined *)0x0;
  if (puStack_78 != (uint *)0x0) {
    puVar10 = &UNK_10f517517;
  }
  FUN_108d65cb8(param_1,puVar21,puVar10);
  func_0x000108d60660(param_1,puVar4);
  FUN_108d6b120(puVar20);
  func_0x000108d60660(param_1,puVar20);
  if (((uint)puVar21 == 0xc0a) || (*(char *)((long)param_1 + 0x51) != '\0')) {
    FUN_108d80e10(param_1);
    uVar8 = 7;
  }
  else {
    uVar8 = param_1[0x12] & (uint)puVar21;
  }
  if (*(long *)(param_1 + 6) != 0) {
    (*pcRam00000001132979a8)();
  }
  return uVar8;
}



/* Entry: 108d6a6fc; end: 108d6a7af;  */

undefined8 * FUN_108d6a6fc(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1 == 0) {
    if (param_2 + -0xfffffe0 < (undefined8 *)0xffffffff80000101) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (iRam0000000113297910 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d60920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000113297938)(param_2);
        return param_2;
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam0000000113297998)();
      }
      puVar5 = param_2;
      (*pcRam0000000113297958)();
      if ((long)puRam0000000113829ac8 < (long)param_2) {
        puRam0000000113829ac8 = param_2;
      }
      puRam0000000113829a78 = param_2;
      if (lRam0000000113829b00 != 0) {
        if (lRam0000000113829a50 < lRam0000000113829af8 - (int)puVar5) {
          uRam0000000113829b24 = 0;
        }
        else {
          uRam0000000113829b24 = 1;
          FUN_108d718ac(puVar5);
        }
      }
      (*pcRam0000000113297938)();
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5;
        (*pcRam0000000113297950)();
        lRam0000000113829a50 = lRam0000000113829a50 + (int)puVar4;
        if (lRam0000000113829aa0 < lRam0000000113829a50) {
          lRam0000000113829aa0 = lRam0000000113829a50;
        }
        lVar6 = lRam0000000113829a98 + 1;
        bVar1 = lRam0000000113829ae8 <= lRam0000000113829a98;
        lRam0000000113829a98 = lVar6;
        if (bVar1) {
          lRam0000000113829ae8 = lVar6;
        }
      }
      if (lRam0000000113829af0 != 0) {
        (*pcRam00000001132979a8)();
      }
    }
    return puVar5;
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
    if (*(char *)(param_1 + 0x152) != '\0') {
      if ((undefined8 *)(ulong)*(ushort *)(param_1 + 0x150) < param_2) {
        lVar6 = 0x160;
      }
      else {
        puVar5 = *(undefined8 **)(param_1 + 0x168);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x168) = *puVar5;
          iVar3 = *(int *)(param_1 + 0x154);
          iVar2 = iVar3 + 1;
          *(int *)(param_1 + 0x154) = iVar2;
          *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
          if (iVar3 < *(int *)(param_1 + 0x158)) {
            return puVar5;
          }
          *(int *)(param_1 + 0x158) = iVar2;
          return puVar5;
        }
        lVar6 = 0x164;
      }
      *(int *)(param_1 + lVar6) = *(int *)(param_1 + lVar6) + 1;
    }
    FUN_108d60848();
    if (param_2 == (undefined8 *)0x0) {
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
  }
  else {
    param_2 = (undefined8 *)0x0;
  }
  return param_2;
}



/* Entry: 108d6a7b0; end: 108d6a8df;  */

void FUN_108d6a7b0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  
  plVar1 = param_1;
  FUN_108d9605c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1;
    func_0x000108d700dc(lVar2,param_3,param_4);
    if (lVar2 == 0) {
      if (param_4 == 0) {
        puVar3 = &UNK_10f3b24d8;
      }
      else {
        puVar3 = &UNK_10f518d67;
      }
      func_0x000108d6a85c(param_1,puVar3);
      *(undefined1 *)((long)param_1 + 0x1d) = 1;
    }
  }
  return;
}



/* Entry: 108d6a8e0; end: 108d6a907;  */

void FUN_108d6a8e0(undefined8 param_1,undefined8 param_2)

{
  FUN_108d7169c(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 108d6a908; end: 108d6a98b;  */

void FUN_108d6a908(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  puVar1 = puVar3;
  FUN_108d6a6fc(puVar3,0x128);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x24] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *puVar1 = puVar3;
    lVar2 = puVar3[1];
    if (lVar2 != 0) {
      *(undefined8 **)(lVar2 + 0x50) = puVar1;
    }
    puVar1[10] = 0;
    puVar1[0xb] = lVar2;
    puVar3[1] = puVar1;
    *(undefined4 *)((long)puVar1 + 0x44) = 0x26bceaa5;
    puVar1[6] = param_1;
  }
  return;
}



/* Entry: 108d6a98c; end: 108d6aaa3;  */

undefined8 FUN_108d6a98c(undefined8 param_1)

{
  undefined8 uVar1;
  int in_w5;
  
  uVar1 = param_1;
  FUN_108d71098();
  FUN_108d6aaec(param_1,uVar1,(long)in_w5,0xfffffff2);
  return uVar1;
}



/* Entry: 108d6aaa4; end: 108d6aaeb;  */

void FUN_108d6aaa4(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  *(uint *)((long)param_1 + 0x94) = *(uint *)((long)param_1 + 0x94) | uVar1;
  if ((param_2 != 1) &&
     (*(char *)(*(long *)(*(long *)(*param_1 + 0x20) + (long)(int)param_2 * 0x20 + 8) + 0x11) !=
      '\0')) {
    *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | uVar1;
  }
  return;
}



/* Entry: 108d6aaec; end: 108d6ac73;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */

void FUN_108d6aaec(long *param_1,int param_2,long *param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  lVar4 = *param_1;
  if ((param_1[1] != 0) && (*(char *)(lVar4 + 0x51) == '\0')) {
    if (param_2 < 0) {
      param_2 = *(int *)((long)param_1 + 0x3c) + -1;
    }
    lVar7 = param_1[1] + (long)param_2 * 0x18;
    FUN_108d80c2c(lVar4,(long)*(char *)(lVar7 + 1),*(undefined8 *)(lVar7 + 0x10));
    *(undefined8 *)(lVar7 + 0x10) = 0;
    if (param_4 == 0xfffffff2) {
      *(int *)(lVar7 + 0x10) = (int)param_3;
      uVar6 = 0xf2;
    }
    else {
      if (param_3 == (long *)0x0) {
        *(undefined1 *)(lVar7 + 1) = 0;
        return;
      }
      if (param_4 == 0xfffffff6) {
        *(long **)(lVar7 + 0x10) = param_3;
        *(undefined1 *)(lVar7 + 1) = 0xf6;
        *(int *)(param_3 + 3) = (int)param_3[3] + 1;
        return;
      }
      if (param_4 == 0xfffffffa) {
        *(long **)(lVar7 + 0x10) = param_3;
        uVar6 = 0xfa;
      }
      else {
        if ((int)param_4 < 0) {
          *(long **)(lVar7 + 0x10) = param_3;
          *(char *)(lVar7 + 1) = (char)param_4;
          return;
        }
        if (param_4 == 0) {
          plVar5 = param_3;
          _strlen(param_3);
          param_4 = (uint)plVar5 & 0x3fffffff;
        }
        lVar4 = *param_1;
        FUN_108d95eb4(lVar4,param_3,param_4);
        *(long *)(lVar7 + 0x10) = lVar4;
        uVar6 = 0xff;
      }
    }
    *(undefined1 *)(lVar7 + 1) = uVar6;
    return;
  }
  if (param_4 == 0xfffffff6) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (param_3 == (long *)0x0) {
    return;
  }
  plVar5 = param_3;
  if ((int)param_4 < -8) {
    if ((int)param_4 < -0xb) {
      if ((1 < param_4 + 0xd) && (param_4 != 0xfffffff1)) {
        return;
      }
    }
    else {
      if (param_4 == 0xfffffff5) {
        if (*(long *)(lVar4 + 0x328) != 0) {
          return;
        }
        goto SUB_108d5e198;
      }
      if (param_4 != 0xfffffff6) {
        return;
      }
      if (*(long *)(lVar4 + 0x328) != 0) {
        return;
      }
      lVar4 = *param_3;
      iVar2 = (int)param_3[3] + -1;
      *(int *)(param_3 + 3) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      if ((long *)param_3[2] != (long *)0x0) {
        (**(code **)(*(long *)param_3[2] + 0x20))();
      }
    }
  }
  else if ((int)param_4 < -5) {
    if (param_4 != 0xfffffff8) {
      if (param_4 != 0xfffffffa) {
        return;
      }
      if (*(long *)(lVar4 + 0x328) != 0) {
        return;
      }
      iVar2 = (int)*param_3 + -1;
      *(int *)param_3 = iVar2;
      if (iVar2 != 0) {
        return;
      }
      goto SUB_108d5e198;
    }
    if (*(long *)(lVar4 + 0x328) == 0) {
      if (param_3 == (long *)0x0) {
        return;
      }
      if (((*(ushort *)(param_3 + 1) & 0x2460) != 0) || ((int)param_3[4] != 0)) {
        FUN_108d826d0(param_3);
      }
      lVar4 = param_3[5];
    }
    else if ((int)param_3[4] != 0) {
      unaff_x30 = 0x108d80cf8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar5 = (long *)param_3[3];
      unaff_x19 = param_3;
      unaff_x20 = lVar4;
      unaff_x29 = puVar1;
    }
  }
  else if (param_4 == 0xfffffffb) {
    if ((*(ushort *)((long)param_3 + 2) >> 4 & 1) == 0) {
      return;
    }
  }
  else if (param_4 != 0xffffffff) {
    return;
  }
  param_3 = plVar5;
  if (param_3 == (long *)0x0) {
    return;
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((param_3 < *(long **)(lVar4 + 0x170)) || (*(long **)(lVar4 + 0x178) <= param_3)) {
        (*pcRam0000000113297950)();
        uVar3 = (uint)param_3;
      }
      else {
        uVar3 = (uint)*(ushort *)(lVar4 + 0x150);
      }
      **(int **)(lVar4 + 0x328) = **(int **)(lVar4 + 0x328) + uVar3;
      return;
    }
    if ((*(long **)(lVar4 + 0x170) <= param_3) && (param_3 < *(long **)(lVar4 + 0x178))) {
      *param_3 = *(long *)(lVar4 + 0x168);
      *(long **)(lVar4 + 0x168) = param_3;
      *(int *)(lVar4 + 0x154) = *(int *)(lVar4 + 0x154) + -1;
      return;
    }
  }
SUB_108d5e198:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_3 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar5 = param_3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar5;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(param_3);
    param_3 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 108d6ac74; end: 108d6afb3;  */

void FUN_108d6ac74(ulong *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  int iVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iStack_64;
  
  uVar10 = *(uint *)(param_2 + 0x1e8);
  uVar19 = (ulong)uVar10;
  iVar6 = *(int *)(param_2 + 0x50);
  iStack_64 = *(int *)(param_2 + 0x1a8);
  uVar7 = *(uint *)(param_2 + 0x5c);
  iVar8 = *(int *)(param_2 + 0x60);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  iVar1 = iVar6 + *(int *)(param_2 + 0x54);
  iVar14 = *(int *)((long)param_1 + 0x3c);
  uVar9 = *param_1;
  uVar12 = param_1[1] + (long)iVar14 * 0x18;
  uVar20 = param_1[1] + (long)iVar8 * 0x18;
  func_0x000108d95f10(param_1,&iStack_64);
  uVar13 = (ushort)*(byte *)(param_2 + 0x20);
  if ((*(byte *)(param_2 + 0x20) != 0) && (uVar13 = 0, *(char *)(param_2 + 0x21) != '\0')) {
    uVar13 = 0x20;
  }
  *(ushort *)((long)param_1 + 0x8c) = *(ushort *)((long)param_1 + 0x8c) & 0xffdf | uVar13;
  iVar3 = iVar1;
  if (iVar1 < 0xb) {
    iVar3 = 10;
  }
  if (*(char *)(param_2 + 0x1f2) != '\0') {
    iVar1 = iVar3;
  }
  _bzero(uVar12,(long)iVar8 * 0x18 + (long)iVar14 * -0x18);
  uVar12 = uVar12 + (uVar12 & 7);
  *(ushort *)((long)param_1 + 0x8c) = *(ushort *)((long)param_1 + 0x8c) & 0xfff7;
  iVar8 = iStack_64 * 8;
  uVar2 = uVar7 + 7 & 0xfffffff8;
  do {
    uVar17 = param_1[2];
    if (uVar17 == 0) {
      uVar18 = uVar12 + (long)(iVar1 * 0x38);
      uVar11 = uVar18;
      uVar17 = uVar12;
      if (uVar20 < uVar18) {
        uVar17 = 0;
        uVar11 = uVar12;
      }
      iVar14 = 0;
      if (uVar20 < uVar18) {
        iVar14 = iVar1 * 0x38;
      }
    }
    else {
      uVar11 = uVar12;
      iVar14 = 0;
    }
    param_1[2] = uVar17;
    uVar12 = uVar11;
    uVar17 = param_1[0xd];
    if (param_1[0xd] == 0) {
      uVar12 = uVar11 + (long)(int)(uVar10 * 0x38);
      uVar17 = uVar11;
      if (uVar20 < uVar12) {
        uVar17 = 0;
        uVar12 = uVar11;
        iVar14 = iVar14 + uVar10 * 0x38;
      }
    }
    param_1[0xd] = uVar17;
    uVar18 = uVar12;
    uVar11 = param_1[3];
    if (param_1[3] == 0) {
      uVar18 = uVar12 + (long)iVar8;
      uVar11 = uVar12;
      if (uVar20 < uVar18) {
        uVar11 = 0;
        uVar18 = uVar12;
        iVar14 = iVar14 + iVar8;
      }
    }
    param_1[3] = uVar11;
    uVar12 = uVar18;
    uVar11 = param_1[0xe];
    if (param_1[0xe] == 0) {
      uVar12 = uVar18 + (long)(int)(uVar10 * 8);
      uVar11 = uVar18;
      if (uVar20 < uVar12) {
        uVar11 = 0;
        uVar12 = uVar18;
        iVar14 = iVar14 + uVar10 * 8;
      }
    }
    param_1[0xe] = uVar11;
    uVar18 = uVar12;
    uVar11 = param_1[0xc];
    if (param_1[0xc] == 0) {
      uVar18 = uVar12 + (long)(iVar6 * 8);
      uVar11 = uVar12;
      if (uVar20 < uVar18) {
        uVar11 = 0;
        uVar18 = uVar12;
        iVar14 = iVar14 + iVar6 * 8;
      }
    }
    uVar12 = uVar18 + (long)(int)uVar2;
    uVar5 = 0;
    if (uVar12 <= uVar20) {
      uVar5 = uVar18;
    }
    param_1[0xc] = uVar11;
    uVar18 = param_1[0x23];
    uVar4 = uVar2;
    if (uVar12 <= uVar20 || uVar18 != 0) {
      uVar4 = 0;
    }
    if (uVar18 != 0) {
      uVar5 = uVar18;
    }
    param_1[0x23] = uVar5;
    iVar14 = uVar4 + iVar14;
    if (iVar14 == 0) goto LAB_108d6aea4;
    uVar12 = uVar9;
    FUN_108d68fc8(uVar9,(long)iVar14);
    param_1[0x1d] = uVar12;
    uVar20 = uVar12 + (long)iVar14;
  } while (*(char *)(uVar9 + 0x51) == '\0');
  uVar17 = param_1[0xd];
LAB_108d6aea4:
  *(int *)(param_1 + 8) = iVar6;
  *(uint *)(param_1 + 0x22) = uVar7;
  if ((uVar17 != 0) && (*(short *)(param_1 + 0xf) = (short)uVar10, 0 < (int)uVar10)) {
    puVar15 = (ulong *)(uVar17 + 0x28);
    do {
      *(undefined2 *)(puVar15 + -4) = 1;
      *puVar15 = uVar9;
      uVar19 = uVar19 - 1;
      puVar15 = puVar15 + 7;
    } while (uVar19 != 0);
  }
  if (param_1[0xe] != 0) {
    uVar7 = *(uint *)(param_2 + 0x1ec);
    if (0 < (int)uVar7) {
      *(short *)((long)param_1 + 0x7a) = (short)uVar7;
      _memcpy(param_1[0xe],*(undefined8 *)(param_2 + 0x208),
              -((ulong)(uVar7 >> 0xf) & 1) & 0xfffffffffff80000 | ((ulong)uVar7 & 0xffff) << 3);
      _bzero(*(undefined8 *)(param_2 + 0x208),(long)*(int *)(param_2 + 0x1ec) << 3);
    }
  }
  uVar19 = param_1[2];
  if (uVar19 != 0) {
    param_1[2] = uVar19 - 0x38;
    *(int *)(param_1 + 7) = iVar1;
    if (0 < iVar1) {
      lVar16 = (ulong)(iVar1 + 1) - 1;
      puVar15 = (ulong *)(uVar19 + 0x28);
      do {
        *(undefined2 *)(puVar15 + -4) = 0x80;
        *puVar15 = uVar9;
        lVar16 = lVar16 + -1;
        puVar15 = puVar15 + 7;
      } while (lVar16 != 0);
    }
  }
  *(ushort *)((long)param_1 + 0x8c) =
       *(ushort *)((long)param_1 + 0x8c) & 0xfffc | *(byte *)(param_2 + 0x1f2) & 3;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined2 *)((long)param_1 + 0x8a) = 0xff02;
  *(undefined4 *)((long)param_1 + 0x44) = 0xbdf20da3;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0xffffffff00000001;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x19] = 0;
  return;
}



/* Entry: 108d6afb4; end: 108d6b11f;  */

long FUN_108d6afb4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  **(undefined8 **)(lVar6 + 0x68) = param_2;
  lVar3 = *(long *)(param_1 + 0x18);
  FUN_108d681c0();
  if ((int)lVar3 == 100) {
    plVar5 = (long *)**(undefined8 **)(lVar6 + 0x60);
    uVar1 = *(uint *)((long)plVar5 + (long)*(int *)(param_1 + 0xc) * 4 + 0x70);
    if (0xb < uVar1) {
      uVar4 = 0;
      uVar2 = *(undefined4 *)
               ((long)plVar5 + (long)(*(int *)(param_1 + 0xc) + (int)(short)plVar5[4]) * 4 + 0x70);
      *(uint *)(param_1 + 4) = uVar1 - 0xc >> 1;
      *(undefined4 *)(param_1 + 8) = uVar2;
      lVar3 = *plVar5;
      *(long *)(param_1 + 0x10) = lVar3;
      *(byte *)(lVar3 + 0x6c) = *(byte *)(lVar3 + 0x6c) | 0x10;
      lVar3 = 0;
      goto LAB_108d6b100;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    FUN_108d6a8e0(uVar4,&UNK_10f518d16);
    FUN_108d67440(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) {
      uVar4 = 0;
      goto LAB_108d6b100;
    }
    FUN_108d67440();
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if ((int)lVar6 != 0) {
      FUN_108d6ba4c();
      FUN_108d6a8e0(uVar4,&UNK_10f517517);
      lVar3 = lVar6;
      goto LAB_108d6b100;
    }
    FUN_108d6a8e0(uVar4,&UNK_10f518d38);
  }
  lVar3 = 1;
LAB_108d6b100:
  *param_3 = uVar4;
  return lVar3;
}



/* Entry: 108d6b120; end: 108d6b15b;  */

/* WARNING: Possible PIC construction at 0x000108d6b140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93ecc) */
/* WARNING: Removing unreachable block (ram,0x000108d93eec) */
/* WARNING: Removing unreachable block (ram,0x000108d6b144) */
/* WARNING: Removing unreachable block (ram,0x000108d93e84) */
/* WARNING: Removing unreachable block (ram,0x000108d93f14) */
/* WARNING: Removing unreachable block (ram,0x000108d93e88) */
/* WARNING: Removing unreachable block (ram,0x000108d93ef0) */
/* WARNING: Removing unreachable block (ram,0x000108d93eb0) */
/* WARNING: Removing unreachable block (ram,0x000108d93eb4) */
/* WARNING: Removing unreachable block (ram,0x000108d93efc) */

void FUN_108d6b120(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)param_1[0x10];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x328) != 0) {
      if ((puVar3 < *(undefined8 **)(lVar4 + 0x170)) || (*(undefined8 **)(lVar4 + 0x178) <= puVar3))
      {
        (*pcRam0000000113297950)();
        uVar1 = (uint)puVar3;
      }
      else {
        uVar1 = (uint)*(ushort *)(lVar4 + 0x150);
      }
      **(int **)(lVar4 + 0x328) = **(int **)(lVar4 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(lVar4 + 0x170) <= puVar3) && (puVar3 < *(undefined8 **)(lVar4 + 0x178))) {
      *puVar3 = *(undefined8 *)(lVar4 + 0x168);
      *(undefined8 **)(lVar4 + 0x168) = puVar3;
      *(int *)(lVar4 + 0x154) = *(int *)(lVar4 + 0x154) + -1;
      return;
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}


